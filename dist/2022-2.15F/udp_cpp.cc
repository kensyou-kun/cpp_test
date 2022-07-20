	{

	cbDesc.CPUAccessFlags = 0;

#include <iostream>



		if (!reader.Error().empty())

{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				// access to vertex

	irData.SysMemPitch = 0;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_LEFT,

			default:

	for (int j = 0; j < icount; j++)



CD3DTest::CD3DTest()

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	tinyobj::ObjReader reader;

		&shapes,

		return hr;

	{

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <iostream>

	CRect                rect;

	DXGI_SWAP_CHAIN_DESC scDesc;

}
	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))

	//vector<WORD> index_t;

{

	cbDesc.MiscFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

		&error,

		return hr;

	if (FAILED(hr))

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

	irData.pSysMem = &pIList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	cbDesc.MiscFlags = 0;

	//頂点シェーダー生成



	SAFE_RELEASE(m_pMatrixBuffer);

{

	if (FAILED(hr))

		size_t index_offset = 0;

	if (FAILED(hr))

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			for (size_t v = 0; v < num_vertices; v++)

	vbDesc.MiscFlags = 0;

				vertex.push_back(vertex_tmp);

{

	std::string error;

	ibDesc.CPUAccessFlags = 0;

int main(int, char**)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_DestroyWindow(win);

#include "DirectXManager.h"

	//定数バッファ作成



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

		exit(1);

	D3D11_TEXTURE2D_DESC txDesc;

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	if (FAILED(hr))



		1,

	m_Viewport.TopLeftX = 0;

			}





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

int main(int, char**)

		if (!reader.Error().empty())



	}

	vbDesc.MiscFlags = 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	D3D11_SUBRESOURCE_DATA vrData;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.BufferCount = 1;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	vrData.SysMemPitch = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4         eyePos;   //視点座標

	irData.pSysMem = &pIList[0];

	XMFLOAT4X4 view;

	vrData.SysMemSlicePitch = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.Windowed = TRUE;

	auto& materials = reader.GetMaterials();

	}

	//ピクセルシェーダー生成



				break;

		return hr;

CD3DTest::~CD3DTest()

}

};

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_DEFAULT,

		if (!ret)

	float    farZ = 100.0f;

	reader_config.mtl_search_path = "./"; // Path to material files

		cout << "SDL_INIT_ERROR" << endl;

	WORD* pIList = new WORD[icount];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		if (!ret)

{





	}

		SDL_Delay(1000);

		&m_pImmediateContext);

		return hr;

	cbDesc.CPUAccessFlags = 0;

	//Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

	SDL_DestroyWindow(win);

		delete[] pVList;

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	m_pVertexBuffer = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	tinyobj::attrib_t attrib;

}

	m_pInputLayout = NULL;

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	for (int i = 0; i < vcount; i++)

	}

	vrData.SysMemPitch = 0;

	}

	m_pInputLayout = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

	//Key press surfaces constants

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	ibDesc.MiscFlags = 0;

			{

	{

		{

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





		return hr;

			break;

	if (m_pImmediateContext)

				// access to vertex

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	Release();



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

CD3DTest::CD3DTest()

	{



		return hr;

	vector<Vertex> vertexlist;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	WORD   icount = indexList.size();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pVertexBuffer);

		1,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4 pos;               //座標(x,y,z)

	//ビューポート設定

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		{

using std::cout; using std::endl;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.CPUAccessFlags = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	pBackBuffer->Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

 * Lesson 1: Hello World!



	// Loop over shapes

	//Clean up our objects and quit

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	txDesc.Height = rect.Height();

				break;

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				break;

				break;



	m_pIndexBuffer = NULL;



	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	::GetClientRect(hwnd, &rect);

	cbDesc.StructureByteStride = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		KEY_PRESS_SURFACE_RIGHT,

	return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				indexlist.push_back(index);

	cbDesc.StructureByteStride = 0;



	enum KeyPressSurfaces

		return hr;

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	for (int i = 0; i < vcount; i++)

};

	}*/

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		D3D11_SDK_VERSION,

void CD3DTest::Render()

struct ConstantLightBuffer {

	bool ret = tinyobj::LoadObj(

	SDL_FreeSurface(bmp);

		return hr;

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

			case SDLK_DOWN:

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.SampleDesc.Quality = 0;

	WORD* pIList = new WORD[icount];



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	dsDesc.Texture2D.MipSlice = 0;

	return hr;

	}

		else if (e.type == SDL_KEYDOWN)

	tinyobj::ObjReaderConfig reader_config;

			{

	for (int j = 0; j < icount; j++)





	SDL_FreeSurface(suf);

	vbDesc.StructureByteStride = 0;



	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//First we need to start up SDL, and make sure it went ok

	D3D11_SAMPLER_DESC smpDesc;

			}

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

#include <iostream>

{

			}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vrData.SysMemPitch = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SDL_DestroyWindow(win);



		delete[] pVList;

	auto& attrib = reader.GetAttrib();



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		pLevels,





		}

	//Clean up our objects and quit

	cbDesc.CPUAccessFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

#ifdef _DEBUG



	if (FAILED(hr))

	m_IndexCount = 0;

		{

	m_IndexCount = 0;

	//頂点レイアウト作成

	vrData.SysMemSlicePitch = 0;

int main(int, char**)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}



	if (FAILED(hr))

	m_VertexCount = 0;



			index_offset += num_vertices;



	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4(&clb.eyePos, eye);

	//インデックスバッファ作成

	WORD   icount = indexList.size();





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pDepthStencilView = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		if (e.type == SDL_QUIT)

struct ConstantLightBuffer {

		// Loop over faces(polygon)

		delete[] pVList;

{

	//Vertex* pVList = new Vertex[vcount];



	float    farZ = 100.0f;

	{

	dsDesc.Texture2D.MipSlice = 0;







			switch (e.key.keysym.sym)

	m_pImmediateContext = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	ConstantMatrixBuffer cmb;

		if (!reader.Error().empty())

				indexlist.push_back(index);

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		return hr;

	m_Angle += XMConvertToRadians(1.0f);

			}

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	txDesc.Height = rect.Height();

	UINT offsets = 0;

	m_pPixelShader = NULL;

	//Key press surfaces constants

	txDesc.MipLevels = 1;

	{

		return hr;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_VertexCount = vcount;





	//Key press surfaces constants

#ifdef _DEBUG

{



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_Viewport.Height = (FLOAT)rect.Height();



	Release();

	tinyobj::attrib_t attrib;









	return 0;

	//頂点レイアウト作成

	SAFE_RELEASE(m_pRenderTargetView);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pDepthStencilTexture);

		pVList[i] = vertexlist[i];

	for (const auto& shape : shapes)



		&m_pImmediateContext);

	vbDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Quality = 0;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

		D3D11_SDK_VERSION,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();



	if (FAILED(hr))

				break;





	cbDesc.CPUAccessFlags = 0;

	m_pVertexShader = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	ConstantLightBuffer clb;

	vector<WORD> indexList;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	tinyobj::attrib_t attrib;

CD3DTest::CD3DTest()

	m_pDepthStencilView = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pDepthStencilTexture = NULL;

{

	{

	if (!reader.Warning().empty())

	}

		{





	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	/*



	tinyobj::attrib_t attrib;



{



}

	tinyobj::ObjReader reader;

	m_pVertexBuffer = NULL;

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);





	vbDesc.CPUAccessFlags = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_Event e;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

struct ConstantMaterial {

		return hr;



				WORD index = idx.vertex_index;

		return hr;



}

	scDesc.Windowed = TRUE;

		SDL_RenderClear(ren);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);







	XMFLOAT4X4 projection;

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			exit(1);

	vector<WORD> indexList;

	ibDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pTextureView);

		KEY_PRESS_SURFACE_DOWN,

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (!error.empty())

			}



	}

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pRenderTargetView);

	Vertex* pVList = new Vertex[vcount];

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_Viewport.Height = (FLOAT)rect.Height();



	if (!reader.Warning().empty())

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	tinyobj::attrib_t attrib;

	m_IndexCount = icount;

			exit(1);



				break;

	m_pSampler = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pTexture);

	m_VertexCount = vcount;



		&scDesc,

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		size_t index_offset = 0;

	tinyobj::ObjReader reader;

	DXGI_SWAP_CHAIN_DESC scDesc;

		if (!reader.Error().empty())

			break;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	std::string imagePath = "hello.bmp";

		return hr;



			}

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



			}

	m_pVertexShader = NULL;

	//インデックスバッファ作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.Height = rect.Height();

	txDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

		KEY_PRESS_SURFACE_DOWN,

		//User requests quit

	m_pTexture = NULL;

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	cbDesc.CPUAccessFlags = 0;

	return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_BUFFER_DESC vbDesc;

	UINT flags = 0;

	m_pMatrixBuffer = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	irData.SysMemSlicePitch = 0;

	irData.pSysMem = &pIList[0];

		}







	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	for (size_t s = 0; s < shapes.size(); s++)

		NULL,

	if (FAILED(hr))

		SDL_Delay(1000);

	delete[] pVList;







		return hr;

	UINT flags = 0;

	txDesc.Width = rect.Width();

	enum KeyPressSurfaces

		{







	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//vector<Vertex> vertex_t;

		return hr;

	SDL_Event e;

}

				indexlist.push_back(idx.vertex_index);

	vrData.SysMemPitch = 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pDevice = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.OutputWindow = hwnd;

	SDL_DestroyRenderer(ren);

		&scDesc,

		NULL,

		delete[] pVList;

	LoadObj(vertexlist, indexList);



	SAFE_RELEASE(m_pSampler);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	}

	XMStoreFloat4(&clb.eyePos, eye);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pIndexBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			for (size_t v = 0; v < num_vertices; v++)

	{

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_SAMPLER_DESC smpDesc;



	SDL_Quit();

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.SampleDesc.Quality = 0;

	int     vcount = vertexlist.size();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	WORD   icount = indexList.size();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	SDL_FreeSurface(bmp);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int main(int, char**)



	vrData.pSysMem = &pVList[0];

	m_pTextureView = NULL;

	LoadObj(vertexlist, indexList);

	//Clean up our objects and quit

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pMatrixBuffer = NULL;



	SDL_Quit();



	auto& shapes = reader.GetShapes();

		return hr;

	std::string inputfile = "test.obj";

	}

#endif

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//テクスチャ読み込み

	auto& shapes = reader.GetShapes();



	SAFE_RELEASE(m_pSampler);

	SDL_DestroyTexture(tex);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	vector<Vertex> vertexlist;

};

				tinyobj::real_t ty =

		if (!reader.Error().empty())

	if (FAILED(hr))



};

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		m_pImmediateContext->ClearState();

	//Clean up our objects and quit

			}

}

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pSampler);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	return 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	//頂点シェーダー生成

	delete[] pVList;

HRESULT CD3DTest::Create(HWND hwnd)

				break;





	D3D11_BUFFER_DESC ibDesc;

	int     vcount = vertexlist.size();

	m_pMatrixBuffer = NULL;

	vbDesc.MiscFlags = 0;

		flags,

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pIndexBuffer = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

int SEGMENT = 36;

	D3D11_SUBRESOURCE_DATA irData;



		return hr;

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//インデックスバッファ作成

	}

	for (int j = 0; j < icount; j++)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

#ifdef _DEBUG

int main(int, char**)



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	};

		return hr;

void CD3DTest::Release()

	/*

	XMFLOAT4X4 world;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

		R"(cube.obj)");



	tinyobj::ObjReader reader;

};

	SDL_Event e;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.MiscFlags = 0;

#include <iostream>



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.Width = (FLOAT)rect.Width();

	Release();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

	m_pDevice = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	for (int i = 0; i < vcount; i++)



		KEY_PRESS_SURFACE_TOTAL

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	std::vector<tinyobj::material_t> materials;



{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



			exit(1);

	scDesc.SampleDesc.Quality = 0;

		return hr;

			index_offset += num_vertices;

	XMFLOAT4X4 projection;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	//First we need to start up SDL, and make sure it went ok

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			for (size_t v = 0; v < num_vertices; v++)

}

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			//Select surfaces based on key press

	UINT offsets = 0;

}

#include <iostream>

				// access to vertex



		return 1;





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	Release();

	txDesc.Width = rect.Width();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDepthStencilTexture = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	std::string error;



	SDL_DestroyTexture(tex);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.MiscFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		pIList[j] = indexList[j];

		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		{

	}



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))



			}

		exit(1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4(&clb.eyePos, eye);



		return hr;

	SDL_FreeSurface(suf);

		&m_pSwapChain,

			default:





				tinyobj::real_t tx =

	UINT offsets = 0;



		KEY_PRESS_SURFACE_TOTAL

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMFLOAT4X4 view;

	vbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pLightBuffer = NULL;

		&scDesc,



	m_Angle += XMConvertToRadians(1.0f);

#endif

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#include <iostream>

	return 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ibDesc.MiscFlags = 0;

		exit(1);

		delete[] pVList;



	//インデックスバッファ作成

	for (int i = 0; i < 3; i++)

		size_t index_offset = 0;  // インデントのオフセット

				vertex.push_back(vertex_tmp);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	auto& materials = reader.GetMaterials();

	for (const auto& shape : shapes)

	scDesc.BufferCount = 1;

		SDL_RenderPresent(ren);

	if (m_pImmediateContext)



void CD3DTest::Release()



	float    nearZ = 0.1f;

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	for (const auto& shape : shapes)

	m_pLightBuffer = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pRenderTargetView = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	enum KeyPressSurfaces

	{



				WORD index = idx.vertex_index;

	tinyobj::attrib_t attrib;

				break;

{

				tinyobj::real_t tx =

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	::GetClientRect(hwnd, &rect);

	return 0;

	m_pTextureView = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	delete[] pIList;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&materials,

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

		&scDesc,

	m_pImmediateContext = NULL;

	{



				break;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_IndexCount = icount;



		&level,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4X4 world;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	}

	SAFE_RELEASE(m_pSwapChain);

	WORD   icount = indexList.size();

	{

		else if (e.type == SDL_KEYDOWN)

	bool ret = tinyobj::LoadObj(

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

}

{

	{

	ibDesc.MiscFlags = 0;

	std::string error;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	pBackBuffer->Release();

CD3DTest::~CD3DTest()

	m_pVertexShader = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)



				vertex.push_back(vertex_tmp);

		SDL_RenderClear(ren);

}

	::GetClientRect(hwnd, &rect);

 */

	SDL_Quit();



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	return 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	scDesc.Windowed = TRUE;

		KEY_PRESS_SURFACE_RIGHT,

		SDL_Delay(1000);

	//インデックスバッファ作成

	if (FAILED(hr))



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.MiscFlags = 0;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pTexture = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





	}

	tinyobj::attrib_t attrib;

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_BUFFER_DESC ibDesc;

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





void CD3DTest::Release()

		m_pImmediateContext->ClearState();

};

	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

			case SDLK_DOWN:



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	tinyobj::ObjReader reader;

			case SDLK_LEFT:

}



{

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			default:

	}

	if (FAILED(hr))

	}

		1,

	ConstantMatrixBuffer cmb;

	cbDesc.CPUAccessFlags = 0;

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_RenderClear(ren);

	m_Viewport.MaxDepth = 1.0f;

		KEY_PRESS_SURFACE_DEFAULT,

#include <SDL.h>

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			{

				// access to vertex

{

	int     vcount = vertexlist.size();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





}

		KEY_PRESS_SURFACE_TOTAL



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

				indexlist.push_back(index);

		return hr;



CD3DTest::CD3DTest()

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#ifdef _DEBUG

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.eyePos, eye);

		delete[] pIList;

#ifdef _DEBUG

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pImmediateContext);

		{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_DestroyTexture(tex);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pRenderTargetView = NULL;

	txDesc.SampleDesc.Count = 1;

	return;

	cbDesc.CPUAccessFlags = 0;

	m_pDepthStencilView = NULL;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#include <SDL.h>





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

	//Create Index



	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	dsDesc.Format = txDesc.Format;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pImmediateContext);

	{

	m_pSwapChain = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	Release();



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    nearZ = 0.1f;



		return hr;

		return hr;

	//深度ステンシルバッファ作成



int SEGMENT = 36;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

int main(int, char**)

	SDL_Quit();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (!reader.Warning().empty())

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pSampler);

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_UP,

		KEY_PRESS_SURFACE_TOTAL



	D3D11_BUFFER_DESC ibDesc;

	D3D11_SUBRESOURCE_DATA irData;

		exit(1);

 */

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

void CD3DTest::Render()

{

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	pBackBuffer->Release();

	SAFE_RELEASE(m_pInputLayout);

	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

struct ConstantMaterial {

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			{



	cbDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			}

/*

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

}

	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

struct ConstantLightBuffer {

		}

	vbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		if (!ret)

	{

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pDepthStencilTexture);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	enum KeyPressSurfaces



		{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		pVList[i] = vertexlist[i];

			switch (e.key.keysym.sym)

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	DXGI_SWAP_CHAIN_DESC scDesc;





	txDesc.Width = rect.Width();



	irData.SysMemSlicePitch = 0;



	auto& materials = reader.GetMaterials();

			// Loop over vertices in the face.

	tinyobj::ObjReader reader;



	txDesc.Height = rect.Height();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			index_offset += fv;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				break;

	//ビューポート設定

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_RenderClear(ren);

}

	XMStoreFloat4(&clb.eyePos, eye);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.BufferDesc.Width = rect.Width();

	{

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	scDesc.Windowed = TRUE;



	{



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		D3D_DRIVER_TYPE_HARDWARE,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		pLevels,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	/*

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t tx =

	m_VertexCount = vcount;

	ConstantLightBuffer clb;

		cout << "SDL_INIT_ERROR" << endl;

	SDL_DestroyWindow(win);

	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t tx =



	UINT strides = sizeof(Vertex);

		return 1;

			break;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				indexlist.push_back(idx.vertex_index);



};

	m_pTexture = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//頂点シェーダー生成

	m_pDevice = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

struct ConstantLightBuffer {

		return hr;

			exit(1);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ibDesc.CPUAccessFlags = 0;

	}

	auto& shapes = reader.GetShapes();

	dsDesc.Format = txDesc.Format;

};

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	pBackBuffer->Release();



	SAFE_RELEASE(m_pSwapChain);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;  // インデントのオフセット

		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			{

{

		delete[] pIList;

	}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMaterial {

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	auto& attrib = reader.GetAttrib();



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pVertexBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.MiscFlags = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

 * Lesson 1: Hello World!

struct ConstantMaterial {

		delete[] pIList;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_SAMPLER_DESC smpDesc;



		size_t index_offset = 0;  // インデントのオフセット

	m_pSwapChain = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#ifdef _DEBUG

	}

};

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	}

	dsDesc.Texture2D.MipSlice = 0;

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	for (int i = 0; i < 3; i++)

#ifdef _DEBUG

	scDesc.OutputWindow = hwnd;

{

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	std::string inputfile = "test.obj";

		NULL,

		&m_pImmediateContext);

{

	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4 pos;               //座標(x,y,z)

		//User requests quit

	cbDesc.StructureByteStride = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//テクスチャ読み込み



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		delete[] pVList;

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&m_pSwapChain,

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pRenderTargetView);



	vrData.SysMemSlicePitch = 0;

			break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	scDesc.OutputWindow = hwnd;



	ConstantMatrixBuffer cmb;

		SDL_RenderClear(ren);

			exit(1);

};

{

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			//Select surfaces based on key press

	SAFE_RELEASE(m_pIndexBuffer);

	for (int j = 0; j < icount; j++)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);



	XMFLOAT4 specular;          //反射(r,g,b)

		D3D_DRIVER_TYPE_HARDWARE,





	m_IndexCount = icount;



	UINT offsets = 0;

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	//Key press surfaces constants

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

	return;

#endif

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	scDesc.Windowed = TRUE;

	m_Angle += XMConvertToRadians(1.0f);

};

	//テクスチャ読み込み

	Release();

{



	txDesc.Height = rect.Height();

	// Loop over shapes



				break;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	auto& materials = reader.GetMaterials();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//ビューポート設定

			case SDLK_RIGHT:

	m_pDevice = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

void CD3DTest::Render()



	}

		{

	float    nearZ = 0.1f;

	for (int i = 0; i < 3; i++)

	m_IndexCount = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.OutputWindow = hwnd;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	::GetClientRect(hwnd, &rect);

#define TINYOBJLOADER_IMPLEMENTATION

}

}

	txDesc.SampleDesc.Quality = 0;

};

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::string imagePath = "hello.bmp";



	m_pImmediateContext = NULL;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

				indexlist.push_back(index);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			{

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		return hr;

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

{



	tinyobj::ObjReader reader;

using std::cout; using std::endl;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	tinyobj::attrib_t attrib;

	txDesc.Height = rect.Height();

}

			case SDLK_UP:

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		pIList[j] = indexList[j];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;







					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	int     vcount = vertexlist.size();

	//テクスチャ読み込み

	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	irData.SysMemPitch = 0;

	std::string error;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		pIList[j] = indexList[j];

	for (const auto& shape : shapes)



	//vector<Vertex> vertex_t;

	if (FAILED(hr))



			index_offset += fv;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];







	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	dsDesc.Format = txDesc.Format;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ID3D11Texture2D* pBackBuffer;

	LoadObj(vertexlist, indexList);

	if (!error.empty())



#define TINYOBJLOADER_IMPLEMENTATION



	{



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b)

	//深度ステンシルバッファ作成

	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_FreeSurface(suf);

struct ConstantMaterial {

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	D3D11_SAMPLER_DESC smpDesc;

	{

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

		if (!reader.Error().empty())

	}

				indexlist.push_back(idx.vertex_index);

{

		return hr;

};



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 world;



	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.StructureByteStride = 0;

	irData.pSysMem = &pIList[0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

		NULL,

	SDL_FreeSurface(bmp);

	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (!reader.Warning().empty())



	SAFE_RELEASE(m_pDepthStencilView);

{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//インデックスバッファ作成

		// Loop over faces(polygon)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;







		//User presses a key



	HRESULT              hr;

		return hr;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	std::string inputfile = "test.obj";

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Angle += XMConvertToRadians(1.0f);



};

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

	//vector<Vertex> vertex_t;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	ID3D11Texture2D* pBackBuffer;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_DestroyRenderer(ren);



				tinyobj::real_t ty =

	//深度ステンシルバッファ作成



				break;

}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}*/





{



	scDesc.BufferDesc.Width = rect.Width();





	for (size_t s = 0; s < shapes.size(); s++)

};

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		SDL_Delay(1000);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,



 * Lesson 1: Hello World!

			//Select surfaces based on key press

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.StructureByteStride = 0;

	m_pDepthStencilView = NULL;

	cbDesc.MiscFlags = 0;

{

	}

	{

		}

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

		return hr;

			case SDLK_LEFT:

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			switch (e.key.keysym.sym)

	txDesc.MiscFlags = 0;

	Release();

				indexlist.push_back(index);

{

};

	//テクスチャ読み込み

			for (size_t v = 0; v < num_vertices; v++)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Quit();

	//ビューポート設定

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	D3D11_TEXTURE2D_DESC txDesc;

	std::string inputfile = "test.obj";





		KEY_PRESS_SURFACE_DOWN,

/*

	{

	delete[] pVList;

	D3D11_BUFFER_DESC ibDesc;

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pVertexShader);

	txDesc.ArraySize = 1;

	//頂点シェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//定数バッファ作成

	scDesc.OutputWindow = hwnd;

}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//vector<Vertex> vertex_t;

	std::string inputfile = "test.obj";

	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_IndexCount = icount;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			break;

	//Vertex* pVList = new Vertex[vcount];

	scDesc.Windowed = TRUE;

	dsDesc.Format = txDesc.Format;



	for (int i = 0; i < 3; i++)



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_VertexCount = vcount;

	while (SDL_PollEvent(&e) != 0)

	irData.SysMemPitch = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		&m_pSwapChain,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;



	return 0;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4X4 projection;



	auto& attrib = reader.GetAttrib();

	auto& materials = reader.GetMaterials();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	irData.pSysMem = &pIList[0];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	for (int j = 0; j < icount; j++)

	{

{



	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.MipLevels = 1;

	irData.SysMemPitch = 0;



	CRect                rect;

 */

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



			case SDLK_LEFT:



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMFLOAT4X4 world;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		KEY_PRESS_SURFACE_TOTAL

	D3D11_BUFFER_DESC vbDesc;

	//頂点シェーダー生成

	enum KeyPressSurfaces

	m_Viewport.MaxDepth = 1.0f;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	UINT flags = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//頂点バッファ作成

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	CRect                rect;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

{

			}

		}

				break;

	{

	m_Viewport.MaxDepth = 1.0f;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	XMFLOAT4 pos;               //座標(x,y,z)





	return;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4X4 world;

	//頂点シェーダー生成

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	SAFE_RELEASE(m_pLightBuffer);

	txDesc.ArraySize = 1;

	if (FAILED(hr))

	return;



	cbDesc.CPUAccessFlags = 0;

	{

	ConstantLightBuffer clb;



	D3D11_SAMPLER_DESC smpDesc;

	UINT flags = 0;



	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4         eyePos;   //視点座標

			default:

	m_pSwapChain->Present(0, 0);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			int num_vertices = shape.mesh.num_face_vertices[f];

	irData.SysMemPitch = 0;

		else if (e.type == SDL_KEYDOWN)

	//Clean up our objects and quit

	if (FAILED(hr))

	enum KeyPressSurfaces

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		D3D_DRIVER_TYPE_HARDWARE,

	enum KeyPressSurfaces

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&txDesc, sizeof(txDesc));



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMFLOAT4X4 projection;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//深度ステンシルバッファ作成

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	// Loop over shapes





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

}

		KEY_PRESS_SURFACE_TOTAL

		&m_pSwapChain,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pIndexBuffer);

{

			case SDLK_DOWN:

CD3DTest::~CD3DTest()

}

		pLevels,

	D3D11_SUBRESOURCE_DATA vrData;

	{

		pLevels,

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		pIList[j] = indexList[j];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_FreeSurface(suf);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pTexture = NULL;

	//テクスチャ読み込み

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ID3D11Texture2D* pBackBuffer;



	m_Viewport.TopLeftY = 0;



		{

void CD3DTest::Render()

	std::string inputfile = "test.obj";

	auto& materials = reader.GetMaterials();

	vector<Vertex> vertexlist;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.ArraySize = 1;



		KEY_PRESS_SURFACE_DOWN,



	}

		&attrib,



	tinyobj::attrib_t attrib;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	for (size_t s = 0; s < shapes.size(); s++)

{

	{



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSwapChain->Present(0, 0);

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}

		pLevels,

		return hr;

	if (FAILED(hr))

		if (e.type == SDL_QUIT)

	{

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.StructureByteStride = 0;

			default:



	CRect                rect;

	scDesc.SampleDesc.Count = 1;





	std::vector<tinyobj::material_t> materials;



	m_Viewport.MinDepth = 0.0f;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





		&error,

	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4 pos;               //座標(x,y,z)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	tinyobj::ObjReader reader;

		{

	::ZeroMemory(&scDesc, sizeof(scDesc));



		return hr;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		}

	if (!reader.ParseFromFile(inputfile, reader_config))

CD3DTest::CD3DTest()

				indexlist.push_back(index);



	}

	cbDesc.MiscFlags = 0;

		SDL_RenderClear(ren);

	cbDesc.StructureByteStride = 0;

		return hr;

		{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		pLevels,

			{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	UINT strides = sizeof(Vertex);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{

	}*/

	m_Viewport.Height = (FLOAT)rect.Height();

	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	reader_config.mtl_search_path = "./"; // Path to material files

			{

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.StructureByteStride = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	m_IndexCount = icount;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		R"(cube.obj)");

	for (const auto& shape : shapes)

	}

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderPresent(ren);





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;

	SAFE_RELEASE(m_pTexture);



	m_VertexCount = vcount;

	scDesc.BufferDesc.Width = rect.Width();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	return;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pDevice = NULL;

	return 0;

	dsDesc.Format = txDesc.Format;

		1,



		1,



	m_Viewport.MaxDepth = 1.0f;





		// Loop over faces(polygon)



	return 0;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	txDesc.SampleDesc.Count = 1;

	D3D11_SUBRESOURCE_DATA irData;



	ibDesc.StructureByteStride = 0;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	if (FAILED(hr))

		exit(1);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL level;

		pIList[j] = indexList[j];

	/*

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

struct ConstantLightBuffer {

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		SDL_Delay(1000);

	//深度ステンシルバッファ作成

};

#include <iostream>

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	HRESULT              hr;



		return hr;

		}

}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMaterial {

	m_pDepthStencilView = NULL;

			case SDLK_LEFT:

	SAFE_RELEASE(m_pRenderTargetView);

	m_Viewport.Height = (FLOAT)rect.Height();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_IndexCount = 0;

}

/*

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

{

	//頂点レイアウト作成

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

	cbDesc.CPUAccessFlags = 0;

		SDL_Delay(1000);

struct ConstantLightBuffer {

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			break;

	SAFE_RELEASE(m_pDepthStencilView);



	m_pRenderTargetView = NULL;

	if (!error.empty())

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

struct ConstantLight {

	//定数バッファ作成

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		if (!reader.Error().empty())

	{

	//ビューポート設定

#define TINYOBJLOADER_IMPLEMENTATION

		KEY_PRESS_SURFACE_RIGHT,

	{

	if (!reader.Warning().empty())

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemPitch = 0;



			int num_vertices = shape.mesh.num_face_vertices[f];

	std::string inputfile = "test.obj";

{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pDepthStencilView);

	vbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	irData.pSysMem = &pIList[0];

	ibDesc.MiscFlags = 0;

	// Loop over shapes

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

		exit(1);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

void CD3DTest::Render()

	vbDesc.StructureByteStride = 0;

			index_offset += num_vertices;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				indexlist.push_back(index);



	{

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4         eyePos;   //視点座標

	SDL_Quit();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	for (size_t s = 0; s < shapes.size(); s++)

		delete[] pIList;

	irData.pSysMem = &pIList[0];

	m_pPixelShader = NULL;

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.MipLevels = 1;

	scDesc.SampleDesc.Quality = 0;





		D3D11_SDK_VERSION,



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		flags,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

	scDesc.Windowed = TRUE;

	{



	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		&m_pSwapChain,

	m_pTexture = NULL;

			exit(1);



	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_IndexCount = 0;



	SAFE_RELEASE(m_pVertexBuffer);

	std::vector<tinyobj::shape_t> shapes;



	while (SDL_PollEvent(&e) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	if (!reader.Warning().empty())

	m_IndexCount = 0;

	}





{

};





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		&attrib,

		else if (e.type == SDL_KEYDOWN)

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))



	float    farZ = 100.0f;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	SDL_FreeSurface(suf);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		}

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&m_pSwapChain,

	m_VertexCount = vcount;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D11_BUFFER_DESC cbDesc;

		pIList[j] = indexList[j];

{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

};

	vbDesc.MiscFlags = 0;

	}



	XMFLOAT4X4 world;

	m_Viewport.MinDepth = 0.0f;

{

	D3D11_SUBRESOURCE_DATA irData;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyRenderer(ren);

	auto& shapes = reader.GetShapes();



	D3D11_BUFFER_DESC cbDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}

		return hr;

	SAFE_RELEASE(m_pPixelShader);

	{

	{

	delete[] pIList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	// Loop over shapes

	m_pSampler = NULL;



	{

	txDesc.ArraySize = 1;

	m_pDevice = NULL;



	scDesc.SampleDesc.Count = 1;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		pLevels,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//頂点バッファ作成





int main(int, char**)

	m_pSwapChain->Present(0, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_RenderClear(ren);

		{

			{

	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4(&clb.eyePos, eye);

#include <iostream>

	m_VertexCount = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_VertexCount = vcount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//ビューポート設定





void CD3DTest::Render()

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	tinyobj::attrib_t attrib;

		SDL_Delay(1000);

	float    fov = XMConvertToRadians(20.0f);

	SDL_DestroyRenderer(ren);

		else if (e.type == SDL_KEYDOWN)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



{



		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_Viewport.Height = (FLOAT)rect.Height();



			{

	m_pTexture = NULL;

		KEY_PRESS_SURFACE_DEFAULT,



	SDL_FreeSurface(suf);

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

}

				indexlist.push_back(index);

	m_Viewport.TopLeftY = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.ArraySize = 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		size_t index_offset = 0;  // インデントのオフセット

		&shapes,

		return hr;

	cbDesc.MiscFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

struct ConstantLightBuffer {

	tinyobj::ObjReaderConfig reader_config;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	tinyobj::ObjReader reader;

	D3D11_TEXTURE2D_DESC txDesc;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	std::string error;

	enum KeyPressSurfaces

	ConstantLightBuffer clb;

		delete[] pIList;







	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	m_IndexCount = icount;

		pLevels,



			{

	ConstantLightBuffer clb;

	}

	//Create Index

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	vrData.pSysMem = &pVList[0];

		size_t index_offset = 0;  // インデントのオフセット

	SDL_FreeSurface(bmp);



	m_IndexCount = icount;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (m_pImmediateContext)

		cout << "SDL_INIT_ERROR" << endl;

		exit(1);

		SDL_RenderCopy(ren, tex, NULL, NULL);

/*

	std::string imagePath = "hello.bmp";



	}

		else if (e.type == SDL_KEYDOWN)

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	return hr;

	tinyobj::attrib_t attrib;



		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);







		{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pSampler);

			// Loop over vertices in the face.

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&m_pImmediateContext);

	pBackBuffer->Release();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	tinyobj::ObjReader reader;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.SampleDesc.Count = 1;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	//定数バッファ作成

		size_t index_offset = 0;

	pBackBuffer->Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	if (FAILED(hr))

	if (!error.empty())

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <iostream>

	SDL_Quit();

};

	m_VertexCount = 0;

	m_VertexCount = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//ピクセルシェーダー生成

		KEY_PRESS_SURFACE_LEFT,

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pIndexBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))



	std::string imagePath = "hello.bmp";

			exit(1);

CD3DTest::~CD3DTest()

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//Create Index

		SDL_RenderClear(ren);

	SDL_DestroyRenderer(ren);

	SDL_DestroyRenderer(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



}
	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				break;

	delete[] pIList;

	//Create Index

	txDesc.Width = rect.Width();

#include <iostream>



};

	SAFE_RELEASE(m_pDevice);

		D3D_DRIVER_TYPE_HARDWARE,

		return 1;

	pBackBuffer->Release();

void CD3DTest::Render()

	SAFE_RELEASE(m_pSwapChain);



		}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SDL_FreeSurface(suf);

	}

		KEY_PRESS_SURFACE_DEFAULT,

	float    fov = XMConvertToRadians(20.0f);



	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		size_t index_offset = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&m_pSwapChain,

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.MiscFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;



	D3D11_BUFFER_DESC ibDesc;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	//vector<Vertex> vertex_t;



	//ピクセルシェーダー生成

	std::string imagePath = "hello.bmp";



};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	Release();

	return;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_Quit();



	//頂点シェーダー生成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

{

	{

		&attrib,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pTexture);

};

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

#include <SDL.h>

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	txDesc.Width = rect.Width();

	//Key press surfaces constants

	UINT strides = sizeof(Vertex);

	std::string inputfile = "test.obj";



	m_pRenderTargetView = NULL;

		&m_pDevice,



	ZeroMemory(&dsDesc, sizeof(dsDesc));







	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pRenderTargetView);

				WORD index = idx.vertex_index;



	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SDL_FreeSurface(bmp);

		}



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



CD3DTest::CD3DTest()



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&attrib,

}



{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			default:

				indexlist.push_back(idx.vertex_index);

	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.OutputWindow = hwnd;

			}

			for (size_t v = 0; v < fv; v++)



/*

	D3D11_BUFFER_DESC ibDesc;

	cbDesc.CPUAccessFlags = 0;



	//Clean up our objects and quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	txDesc.ArraySize = 1;

	}

			{



	}



		pIList[j] = indexList[j];

			for (size_t v = 0; v < fv; v++)

	m_IndexCount = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_IndexCount = icount;





	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				WORD index = idx.vertex_index;

	m_IndexCount = icount;

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_DEFAULT,



		size_t index_offset = 0;

	txDesc.CPUAccessFlags = 0;

			switch (e.key.keysym.sym)

	ibDesc.StructureByteStride = 0;

	m_pTextureView = NULL;

			for (size_t v = 0; v < fv; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&attrib,

	m_pSwapChain->Present(0, 0);



	txDesc.MiscFlags = 0;

	txDesc.Height = rect.Height();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pMatrixBuffer = NULL;

		SDL_RenderPresent(ren);

			switch (e.key.keysym.sym)

	m_pRenderTargetView = NULL;

	scDesc.BufferDesc.Height = rect.Height();



		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&shapes,

}

				tinyobj::real_t ty =

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.OutputWindow = hwnd;

	SDL_DestroyTexture(tex);

	dsDesc.Texture2D.MipSlice = 0;

	bool ret = tinyobj::LoadObj(

struct ConstantMatrixBuffer {

	HRESULT              hr;



		}

	}

	}

	HRESULT              hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return 1;

		D3D11_SDK_VERSION,

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	SAFE_RELEASE(m_pDepthStencilTexture);

			{

	scDesc.Windowed = TRUE;

	m_IndexCount = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		}

				tinyobj::real_t ty =



		}

	m_pPixelShader = NULL;





			// Loop over vertices in the face.

	UINT offsets = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}


		&materials,

	m_pDepthStencilView = NULL;

	}

	SDL_DestroyRenderer(ren);

	XMFLOAT4X4 projection;

	m_pPixelShader = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&attrib,

	m_pRenderTargetView = NULL;

		R"(cube.obj)");



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pRenderTargetView = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderClear(ren);

	SDL_Quit();

	SAFE_RELEASE(m_pDepthStencilTexture);

	ConstantLightBuffer clb;

		&m_pSwapChain,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		D3D_DRIVER_TYPE_HARDWARE,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	UINT offsets = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				break;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_VertexCount = vcount;

			{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		flags,

				break;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

int SEGMENT = 36;

		D3D_DRIVER_TYPE_HARDWARE,





	delete[] pIList;

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		m_pImmediateContext->ClearState();

	ZeroMemory(&txDesc, sizeof(txDesc));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

 */

	bool ret = tinyobj::LoadObj(

	std::vector<tinyobj::shape_t> shapes;

	XMFLOAT4         eyePos;   //視点座標

		&materials,

		return hr;

		&attrib,

	{

	D3D11_SUBRESOURCE_DATA vrData;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pIndexBuffer = NULL;

	//頂点レイアウト作成

		KEY_PRESS_SURFACE_LEFT,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//First we need to start up SDL, and make sure it went ok

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				vertex.push_back(vertex_tmp);

};

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (e.type == SDL_QUIT)

			break;

	SAFE_RELEASE(m_pDepthStencilView);



	//定数バッファ作成

	m_pTextureView = NULL;

		//User requests quit

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

			case SDLK_RIGHT:

	{

		1,

	if (m_pImmediateContext)

	SDL_FreeSurface(suf);

	{

		if (!ret)

	m_Viewport.MaxDepth = 1.0f;

		pLevels,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_VertexCount = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	if (FAILED(hr))





		//User presses a key

	SAFE_RELEASE(m_pPixelShader);

				// access to vertex

}

				indexlist.push_back(idx.vertex_index);



	}

			// Loop over vertices in the face.

		//User requests quit

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pVertexShader);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		//User presses a key

	}

		&error,

	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_DEFAULT,

struct ConstantMaterial {

		D3D_DRIVER_TYPE_HARDWARE,

		if (!reader.Error().empty())

	CRect                rect;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



/*

using std::cout; using std::endl;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				indexlist.push_back(index);

				break;

	HRESULT              hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

		&level,



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::string imagePath = "hello.bmp";

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex



	D3D11_SUBRESOURCE_DATA irData;

	//ピクセルシェーダー生成

	return;





#include <iostream>

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	SAFE_RELEASE(m_pTextureView);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

			// Loop over vertices in the face.



		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SDL_DestroyTexture(tex);

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	scDesc.BufferCount = 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	//Vertex* pVList = new Vertex[vcount];

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				indexlist.push_back(idx.vertex_index);

			}

	m_IndexCount = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&attrib,

	if (!reader.Warning().empty())

	m_pVertexShader = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	vbDesc.StructureByteStride = 0;

		delete[] pIList;

	SAFE_RELEASE(m_pTextureView);

			case SDLK_DOWN:

		pIList[j] = indexList[j];

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Format = txDesc.Format;

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

};

		D3D_DRIVER_TYPE_HARDWARE,

}

	//vector<Vertex> vertex_t;

	m_IndexCount = 0;

		}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (m_pImmediateContext)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

struct ConstantMaterial {

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

using std::cout; using std::endl;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4         ambient;  //環境光(r,g,b)

			index_offset += fv;

{



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	ID3D11Texture2D* pBackBuffer;

		m_pImmediateContext->ClearState();

	m_Viewport.TopLeftX = 0;

	m_pTextureView = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	return hr;

#include <SDL.h>

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int j = 0; j < icount; j++)



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		D3D11_SDK_VERSION,



	m_pRenderTargetView = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

{

			}

	{

	reader_config.mtl_search_path = "./"; // Path to material files

}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



void CD3DTest::Render()

	auto& attrib = reader.GetAttrib();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))



		R"(cube.obj)");

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_DestroyRenderer(ren);

	};

			case SDLK_UP:

}
	SDL_DestroyWindow(win);

	for (int i = 0; i < 3; i++)



	XMFLOAT4         ambient;  //環境光(r,g,b)

		1,

				break;

			//Select surfaces based on key press





	SAFE_RELEASE(m_pLightBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

				break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pDevice);

	m_pMatrixBuffer = NULL;

		//User requests quit



	txDesc.SampleDesc.Quality = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	tinyobj::ObjReader reader;

		&level,

		&level,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Clean up our objects and quit

	SDL_DestroyRenderer(ren);

CD3DTest::CD3DTest()

	return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





		}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			{

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pVertexBuffer);



	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

			switch (e.key.keysym.sym)

			{

			exit(1);

	scDesc.BufferDesc.Width = rect.Width();

		pLevels,

	}

	SDL_DestroyWindow(win);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	D3D11_SUBRESOURCE_DATA irData;

		&materials,

	D3D11_BUFFER_DESC ibDesc;



#endif

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&txDesc, sizeof(txDesc));

	txDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pVertexShader = NULL;

	{

	UINT strides = sizeof(Vertex);

	SDL_DestroyTexture(tex);

	UINT flags = 0;

	vrData.SysMemPitch = 0;

		&error,



				break;

	m_pLightBuffer = NULL;

	m_Viewport.TopLeftY = 0;

	//頂点バッファ作成

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

struct ConstantMaterial {

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pImmediateContext);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	//頂点バッファ作成

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.SampleDesc.Quality = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	WORD   icount = indexList.size();



	XMFLOAT4X4 projection;

			for (size_t v = 0; v < num_vertices; v++)



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

		//User presses a key

}

		SDL_RenderPresent(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	//Key press surfaces constants



	}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;

	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		return hr;

	m_pTexture = NULL;



	return 0;

				break;

		return hr;

		R"(cube.obj)");

			exit(1);

				// access to vertex



	std::vector<tinyobj::material_t> materials;

#include <SDL.h>

	XMStoreFloat4(&clb.eyePos, eye);

	{

				break;



	float    farZ = 100.0f;

	{

}



	txDesc.SampleDesc.Quality = 0;

		&level,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

};

		else if (e.type == SDL_KEYDOWN)

	ConstantLight    pntLight; //点光源

		D3D_DRIVER_TYPE_HARDWARE,

	m_pSwapChain = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

		}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Quit();

	//vector<Vertex> vertex_t;

			//Select surfaces based on key press





	//テクスチャ読み込み

	if (!reader.Warning().empty())

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	for (size_t s = 0; s < shapes.size(); s++)

	//頂点バッファ作成

	for (int j = 0; j < icount; j++)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	Vertex* pVList = new Vertex[vcount];

			case SDLK_RIGHT:



	WORD   icount = indexList.size();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Width = rect.Width();



	{

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pDepthStencilTexture);

	//頂点バッファ作成

	SDL_DestroyTexture(tex);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

		if (!reader.Error().empty())

			default:

		flags,

	D3D11_SAMPLER_DESC smpDesc;

	m_pSwapChain->Present(0, 0);

			case SDLK_LEFT:

		SDL_RenderPresent(ren);

}

	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4X4 view;

	float    farZ = 100.0f;

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	D3D11_BUFFER_DESC ibDesc;

			case SDLK_UP:

	m_pSwapChain = NULL;

		return hr;

	SDL_DestroyRenderer(ren);







	if (FAILED(hr))

			{

	cbDesc.StructureByteStride = 0;

	{

	::GetClientRect(hwnd, &rect);



	}

			default:



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vrData.pSysMem = &pVList[0];



		return hr;

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

CD3DTest::~CD3DTest()

		delete[] pIList;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	LoadObj(vertexlist, indexList);

		flags,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

}

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.StructureByteStride = 0;

		1,

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.SampleDesc.Count = 1;

	//頂点バッファ作成

	SDL_DestroyWindow(win);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	float    nearZ = 0.1f;

#include <iostream>

	}



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.SysMemSlicePitch = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

	XMFLOAT4 ambient;           //環境(r,g,b)

	}



	irData.SysMemSlicePitch = 0;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		D3D_DRIVER_TYPE_HARDWARE,

	//インデックスバッファ作成

	std::string inputfile = "test.obj";

	//ピクセルシェーダー生成

	m_pTextureView = NULL;

	dsDesc.Format = txDesc.Format;

			break;

		cout << "SDL_INIT_ERROR" << endl;

	{



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	auto& shapes = reader.GetShapes();

	D3D11_SUBRESOURCE_DATA irData;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

	m_pIndexBuffer = NULL;

			for (size_t v = 0; v < num_vertices; v++)



			}

		&attrib,

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	tinyobj::ObjReaderConfig reader_config;

	//頂点レイアウト作成

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



			}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pDevice);

};

	XMFLOAT4 ambient;           //環境(r,g,b)

{

	SDL_Event e;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		{

	D3D11_SUBRESOURCE_DATA vrData;

		{

	}

	WORD   icount = indexList.size();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	/*

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pInputLayout = NULL;

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	int     vcount = vertexlist.size();



	pBackBuffer->Release();

	D3D11_SUBRESOURCE_DATA vrData;

#ifdef _DEBUG

	SAFE_RELEASE(m_pVertexShader);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4X4 view;

	m_Viewport.MaxDepth = 1.0f;

		&m_pImmediateContext);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (m_pImmediateContext)

		SDL_RenderClear(ren);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		R"(cube.obj)");

	m_pTexture = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		return 1;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

	{

			case SDLK_DOWN:

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return 1;

	SDL_Quit();

		return hr;

		{

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	cbDesc.CPUAccessFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	::GetClientRect(hwnd, &rect);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < num_vertices; v++)

	m_pIndexBuffer = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pRenderTargetView);







	{

				vertex.push_back(vertex_tmp);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

#include <iostream>

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	ZeroMemory(&txDesc, sizeof(txDesc));

	//vector<WORD> index_t;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	scDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pRenderTargetView);

	ibDesc.StructureByteStride = 0;



				break;



		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_DestroyWindow(win);



	cbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	if (FAILED(hr))

	D3D11_SAMPLER_DESC smpDesc;



	m_IndexCount = icount;

	SDL_DestroyTexture(tex);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

#include <SDL.h>

void CD3DTest::Render()

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		pVList[i] = vertexlist[i];



	auto& attrib = reader.GetAttrib();

	HRESULT              hr;





	D3D11_BUFFER_DESC vbDesc;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		KEY_PRESS_SURFACE_RIGHT,

{



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.Width = (FLOAT)rect.Width();

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	if (FAILED(hr))

	txDesc.MipLevels = 1;

}
			//Select surfaces based on key press

	if (FAILED(hr))

}

	enum KeyPressSurfaces

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	UINT strides = sizeof(Vertex);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&scDesc,

	txDesc.Width = rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	Release();

}



	SDL_DestroyWindow(win);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	return 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		&materials,



#include "DirectXManager.h"

	SAFE_RELEASE(m_pIndexBuffer);

	irData.pSysMem = &pIList[0];

/*

	if (FAILED(hr))

			default:

		if (!ret)

			exit(1);



	vector<Vertex> vertexlist;

	vector<Vertex> vertexlist;

	//Clean up our objects and quit

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

		else if (e.type == SDL_KEYDOWN)

	//ビューポート設定

	//Clean up our objects and quit

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				break;



		return hr;





	XMFLOAT4 ambient;           //環境(r,g,b)





				break;



	Vertex* pVList = new Vertex[vcount];

		return hr;



	}*/

	scDesc.BufferCount = 1;

	delete[] pVList;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pSwapChain->Present(0, 0);

	float    fov = XMConvertToRadians(20.0f);



	}



	cbDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

int SEGMENT = 36;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

		&m_pSwapChain,

	for (int j = 0; j < icount; j++)

	//テクスチャ読み込み

	txDesc.CPUAccessFlags = 0;





		&error,

	}

				break;

				WORD index = idx.vertex_index;



				// access to vertex

		if (!reader.Error().empty())

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		// Loop over faces(polygon)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL level;

		&attrib,

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		SDL_Delay(1000);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	for (int j = 0; j < icount; j++)





		{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	std::string imagePath = "hello.bmp";

	D3D11_BUFFER_DESC vbDesc;

			case SDLK_LEFT:

			case SDLK_LEFT:

	{



	//頂点レイアウト作成

};

			index_offset += num_vertices;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		SDL_RenderPresent(ren);

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMaterial {

	//vector<WORD> index_t;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pVertexBuffer);

	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.MinDepth = 0.0f;

	//First we need to start up SDL, and make sure it went ok

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_LEFT,

	ConstantMatrixBuffer cmb;

	float    nearZ = 0.1f;



		&m_pImmediateContext);

	m_pTextureView = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

 */

	txDesc.MiscFlags = 0;



	ConstantLightBuffer clb;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	return;

	ID3D11Texture2D* pBackBuffer;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_RIGHT,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	scDesc.Windowed = TRUE;



	ZeroMemory(&txDesc, sizeof(txDesc));

	vbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				break;

		return hr;

				WORD index = idx.vertex_index;

	SDL_Event e;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	enum KeyPressSurfaces





	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	dsDesc.Format = txDesc.Format;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	::GetClientRect(hwnd, &rect);

	m_pTexture = NULL;

struct ConstantMaterial {

	scDesc.OutputWindow = hwnd;

				break;



	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pPixelShader);



};

			case SDLK_RIGHT:

	UINT offsets = 0;

		return hr;

	CRect                rect;

	//頂点シェーダー生成



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vrData.pSysMem = &pVList[0];

int main(int, char**)

	{

		SDL_Delay(1000);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pVertexShader);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		return hr;

	//Key press surfaces constants

		pIList[j] = indexList[j];

	Release();

	//Vertex* pVList = new Vertex[vcount];



			{

	m_pInputLayout = NULL;

	scDesc.Windowed = TRUE;



				break;

		if (!reader.Error().empty())

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	auto& shapes = reader.GetShapes();

	std::string error;

		pVList[i] = vertexlist[i];

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	m_pDevice = NULL;

}

	WORD* pIList = new WORD[icount];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//頂点レイアウト作成

struct ConstantMaterial {

	SDL_FreeSurface(suf);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



struct ConstantLight {

		KEY_PRESS_SURFACE_DOWN,

struct ConstantMaterial {

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (m_pImmediateContext)

	scDesc.BufferDesc.Height = rect.Height();

	{

 */

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.StructureByteStride = 0;



		&scDesc,



	delete[] pIList;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D_FEATURE_LEVEL level;

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			//Select surfaces based on key press

{

HRESULT CD3DTest::Create(HWND hwnd)







	SAFE_RELEASE(m_pTexture);

	SDL_FreeSurface(suf);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

		SDL_RenderPresent(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D_FEATURE_LEVEL level;

	SDL_Quit();

	cbDesc.StructureByteStride = 0;



	}

	m_Viewport.TopLeftX = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

		if (!reader.Error().empty())

	m_Viewport.Width = (FLOAT)rect.Width();

				break;





	DXGI_SWAP_CHAIN_DESC scDesc;

	//頂点バッファ作成

		return hr;



	SDL_FreeSurface(bmp);

	tinyobj::attrib_t attrib;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	tinyobj::attrib_t attrib;

		}

	ConstantMatrixBuffer cmb;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	SDL_DestroyTexture(tex);

	scDesc.BufferDesc.Width = rect.Width();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

		size_t index_offset = 0;

	}

		SDL_Delay(1000);

	//定数バッファ作成

	irData.SysMemSlicePitch = 0;



{

	m_Viewport.TopLeftX = 0;

	{

	//vector<Vertex> vertex_t;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

	SDL_FreeSurface(suf);

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pDevice);

			case SDLK_RIGHT:

	vrData.pSysMem = &pVList[0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <SDL.h>

	txDesc.ArraySize = 1;

	tinyobj::ObjReaderConfig reader_config;









	//vector<Vertex> vertex_t;

	XMFLOAT4X4 view;



		&materials,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	scDesc.SampleDesc.Count = 1;

	SDL_DestroyRenderer(ren);

	txDesc.MipLevels = 1;

}

	WORD   icount = indexList.size();

			{

	vbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_UP,

	m_Angle += XMConvertToRadians(1.0f);

	if (!reader.Warning().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	dsDesc.Texture2D.MipSlice = 0;



	m_pDevice = NULL;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			switch (e.key.keysym.sym)

	XMStoreFloat4(&clb.eyePos, eye);





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		exit(1);

	enum KeyPressSurfaces

	while (SDL_PollEvent(&e) != 0)





	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	irData.pSysMem = &pIList[0];

		return hr;

using std::cout; using std::endl;

	// Loop over shapes

void CD3DTest::Render()

		&shapes,

	txDesc.Width = rect.Width();



	float    nearZ = 0.1f;

	txDesc.SampleDesc.Count = 1;

	}

	/*

	scDesc.BufferDesc.Width = rect.Width();

	m_pSampler = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pLevels,



	std::string inputfile = "test.obj";

	ConstantMatrixBuffer cmb;

	//Clean up our objects and quit

				break;

	txDesc.MiscFlags = 0;

#define TINYOBJLOADER_IMPLEMENTATION

{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	auto& attrib = reader.GetAttrib();

CD3DTest::CD3DTest()

	}



		{

	}

		//User requests quit

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

		pLevels,

CD3DTest::~CD3DTest()

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	std::vector<tinyobj::material_t> materials;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.ambient, lightAmbient);

	auto& shapes = reader.GetShapes();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		return hr;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMFLOAT4X4 projection;

};

		SDL_RenderClear(ren);



				vertex.push_back(vertex_tmp);

	m_Viewport.TopLeftY = 0;

	//First we need to start up SDL, and make sure it went ok

		SDL_RenderClear(ren);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pIndexBuffer = NULL;

		&m_pDevice,



int main(int, char**)

				// access to vertex



	SDL_DestroyTexture(tex);



	std::string error;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT offsets = 0;

			// Loop over vertices in the face.

}

	if (FAILED(hr))

	//vector<WORD> index_t;

	return 0;

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t tx =

		KEY_PRESS_SURFACE_RIGHT,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pRenderTargetView);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SDL_Quit();

			for (size_t v = 0; v < num_vertices; v++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

/*

	ZeroMemory(&txDesc, sizeof(txDesc));

	for (int j = 0; j < icount; j++)



	ConstantMaterial material; //物体の質感



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

	if (FAILED(hr))

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	return 0;

		&error,

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			default:

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		// Loop over faces(polygon)

		return 1;

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

		pVList[i] = vertexlist[i];

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		KEY_PRESS_SURFACE_DEFAULT,

	{

	XMFLOAT4X4 world;

	m_pDepthStencilView = NULL;

	//Clean up our objects and quit

		return hr;

			{

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

#endif

	tinyobj::attrib_t attrib;

	m_Angle += XMConvertToRadians(1.0f);

				tinyobj::real_t tx =

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pPixelShader);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		size_t index_offset = 0;  // インデントのオフセット

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	return 0;

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pIndexBuffer);



	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		&m_pImmediateContext);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		size_t index_offset = 0;

#endif





{



	UINT offsets = 0;

		&m_pSwapChain,

int SEGMENT = 36;

	HRESULT              hr;

	txDesc.SampleDesc.Quality = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	vector<WORD> indexList;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

	dsDesc.Texture2D.MipSlice = 0;





	tinyobj::attrib_t attrib;

	DXGI_SWAP_CHAIN_DESC scDesc;



			case SDLK_DOWN:

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			}

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	std::vector<tinyobj::shape_t> shapes;



	XMFLOAT4X4 world;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_DestroyTexture(tex);

		}

CD3DTest::~CD3DTest()



	m_VertexCount = 0;

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pIndexBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	bool ret = tinyobj::LoadObj(

	}

		R"(cube.obj)");

	SDL_DestroyTexture(tex);

		&m_pSwapChain,

		R"(cube.obj)");

	}



	D3D_FEATURE_LEVEL level;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

			index_offset += num_vertices;





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				WORD index = idx.vertex_index;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pIndexBuffer = NULL;

}

	float    nearZ = 0.1f;



	auto& materials = reader.GetMaterials();

{

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

	m_pTextureView = NULL;

	m_pSampler = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	//頂点バッファ作成

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

void CD3DTest::Render()

	cbDesc.CPUAccessFlags = 0;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	D3D11_SUBRESOURCE_DATA vrData;

				tinyobj::real_t tx =

#include <SDL.h>

	float    nearZ = 0.1f;

		return hr;

		return hr;



		}

	std::string error;

				vertex.push_back(vertex_tmp);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		size_t index_offset = 0;

				break;

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SAFE_RELEASE(m_pTextureView);

		&shapes,



	m_Viewport.TopLeftY = 0;

	Release();

	m_VertexCount = 0;

	if (FAILED(hr))

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

{

	//First we need to start up SDL, and make sure it went ok

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::string inputfile = "test.obj";

{



	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	scDesc.OutputWindow = hwnd;

				WORD index = idx.vertex_index;

	D3D11_SUBRESOURCE_DATA vrData;

			{



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.eyePos, eye);



	auto& materials = reader.GetMaterials();

			case SDLK_DOWN:





		cout << "SDL_INIT_ERROR" << endl;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		KEY_PRESS_SURFACE_LEFT,

		pIList[j] = indexList[j];

}

		SDL_RenderPresent(ren);

	m_pVertexBuffer = NULL;

	ConstantLightBuffer clb;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	// Loop over shapes

	//ピクセルシェーダー生成

	{

	SDL_DestroyRenderer(ren);

			switch (e.key.keysym.sym)

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pInputLayout);

		SDL_Delay(1000);

	CRect                rect;

	{

	dsDesc.Format = txDesc.Format;

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





	hr = D3D11CreateDeviceAndSwapChain(NULL,

		NULL,

	SDL_DestroyTexture(tex);

		return hr;

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		&m_pDevice,

	enum KeyPressSurfaces

#include <SDL.h>

			index_offset += fv;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_BUFFER_DESC vbDesc;

	{



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

		}

	SAFE_RELEASE(m_pSampler);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

	SDL_Quit();



	//頂点レイアウト作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))



	SDL_Event e;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		&error,





	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

	for (int j = 0; j < icount; j++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	return;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (!reader.Warning().empty())

			{

	UINT flags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		1,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





	hr = D3D11CreateDeviceAndSwapChain(NULL,

		m_pImmediateContext->ClearState();



	SDL_DestroyRenderer(ren);





		&error,

	cbDesc.MiscFlags = 0;

	XMFLOAT4X4 world;

{





	Release();

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.BufferCount = 1;

		delete[] pVList;

			case SDLK_DOWN:

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				tinyobj::real_t tx =



	SDL_DestroyWindow(win);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

	for (int j = 0; j < icount; j++)

	ConstantMaterial material; //物体の質感

	return hr;

	SDL_DestroyRenderer(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



				indexlist.push_back(index);



	//定数バッファ作成



	txDesc.ArraySize = 1;

using std::cout; using std::endl;

}

			case SDLK_LEFT:



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		if (e.type == SDL_QUIT)

		D3D11_SDK_VERSION,

	auto& materials = reader.GetMaterials();

				tinyobj::real_t tx =

			index_offset += num_vertices;

		{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	delete[] pVList;

	{



	scDesc.BufferDesc.Width = rect.Width();

	m_pRenderTargetView = NULL;

}

	SAFE_RELEASE(m_pDepthStencilTexture);

		{

};



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	SDL_Quit();

	if (FAILED(hr))

};

	m_pDevice = NULL;

		pIList[j] = indexList[j];

}

}

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.Windowed = TRUE;

	{

			case SDLK_RIGHT:

	SDL_FreeSurface(suf);

		exit(1);

	HRESULT              hr;

		return hr;

	//インデックスバッファ作成

	return;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		//User requests quit

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pRenderTargetView);





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	auto& shapes = reader.GetShapes();



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	std::string imagePath = "hello.bmp";

			for (size_t v = 0; v < num_vertices; v++)



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

{

	m_Viewport.TopLeftY = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	ID3D11Texture2D* pBackBuffer;

	//Vertex* pVList = new Vertex[vcount];

	ID3D11Texture2D* pBackBuffer;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.TopLeftY = 0;

		&scDesc,

	SAFE_RELEASE(m_pRenderTargetView);

#include <SDL.h>

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

	dsDesc.Format = txDesc.Format;

		NULL,

		if (!reader.Error().empty())

	if (!error.empty())



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	//Vertex* pVList = new Vertex[vcount];



				break;

	::GetClientRect(hwnd, &rect);

		{



#define TINYOBJLOADER_IMPLEMENTATION

		1,

			{



	return 0;

	//深度ステンシルバッファ作成

		NULL,



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//Clean up our objects and quit



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	WORD* pIList = new WORD[icount];

	ConstantMaterial material; //物体の質感

	XMFLOAT4 pos;               //座標(x,y,z)





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

}

	D3D11_SAMPLER_DESC smpDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pTexture = NULL;

				WORD index = idx.vertex_index;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);



		{



		SDL_RenderPresent(ren);

	//頂点レイアウト作成

	SDL_FreeSurface(suf);

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

	if (!reader.ParseFromFile(inputfile, reader_config))

		if (!ret)

			// Loop over vertices in the face.

	XMFLOAT4 pos;               //座標(x,y,z)

	for (const auto& shape : shapes)



	txDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	m_pIndexBuffer = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

void CD3DTest::Release()

		delete[] pVList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	for (int j = 0; j < icount; j++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	HRESULT              hr;





	float    farZ = 100.0f;

	return;



	ID3D11Texture2D* pBackBuffer;

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

 * Lesson 1: Hello World!

	pBackBuffer->Release();

	{

	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&shapes,

		1,

			{



		{

		return hr;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&m_pImmediateContext);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





		delete[] pIList;

	ID3D11Texture2D* pBackBuffer;

	//Key press surfaces constants

	D3D11_BUFFER_DESC vbDesc;



		SDL_Delay(1000);

	auto& materials = reader.GetMaterials();

				vertex.push_back(vertex_tmp);

		&attrib,

	scDesc.BufferDesc.Width = rect.Width();

	}

		&scDesc,

	ibDesc.StructureByteStride = 0;

	SDL_Event e;

	vbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::string error;

	if (!error.empty())

	D3D11_TEXTURE2D_DESC txDesc;





	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		&m_pSwapChain,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



			index_offset += num_vertices;

 */

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.MiscFlags = 0;

				break;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

HRESULT CD3DTest::Create(HWND hwnd)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

};

{





{

	//テクスチャ読み込み



	for (int i = 0; i < vcount; i++)

	return 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&m_pDevice,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext = NULL;



		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

		&scDesc,

	SDL_DestroyRenderer(ren);

	if (!reader.Warning().empty())

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC cbDesc;

	m_IndexCount = icount;

	SDL_Quit();

	ibDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				break;

	SDL_FreeSurface(suf);

		delete[] pIList;



#include <SDL.h>

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

};

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4X4 projection;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.OutputWindow = hwnd;



	XMFLOAT4 ambient;           //環境(r,g,b)


