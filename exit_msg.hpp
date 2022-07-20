	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

int main(int, char**)

	cbDesc.MiscFlags = 0;

			case SDLK_DOWN:

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	if (FAILED(hr))

{

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

	for (int i = 0; i < 3; i++)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	Release();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		//User requests quit





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

int main(int, char**)

		SDL_Delay(1000);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);





{

		{

		pVList[i] = vertexlist[i];



		&attrib,



	//vector<Vertex> vertex_t;

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pVertexBuffer);

	{

}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.Height = rect.Height();



}

	int     vcount = vertexlist.size();

		// Loop over faces(polygon)



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		KEY_PRESS_SURFACE_LEFT,

		}

				tinyobj::real_t tx =

	}

	if (FAILED(hr))

				break;



}





		KEY_PRESS_SURFACE_DOWN,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//ピクセルシェーダー生成





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyTexture(tex);



	dsDesc.Format = txDesc.Format;

	SDL_DestroyTexture(tex);

	{







	{

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	SAFE_RELEASE(m_pTextureView);

		cout << "SDL_INIT_ERROR" << endl;

	m_pSwapChain->Present(0, 0);

};

	{



	DXGI_SWAP_CHAIN_DESC scDesc;

};



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

	if (!error.empty())

	ibDesc.CPUAccessFlags = 0;

		NULL,

		{

			}

	ibDesc.StructureByteStride = 0;

}

	cbDesc.CPUAccessFlags = 0;

			break;

		SDL_Delay(1000);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//頂点バッファ作成

		return hr;

	return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	txDesc.MiscFlags = 0;

struct ConstantMatrixBuffer {

			}

			for (size_t v = 0; v < num_vertices; v++)

}

	//vector<Vertex> vertex_t;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	delete[] pIList;

	if (FAILED(hr))

	{

			case SDLK_UP:

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_FreeSurface(bmp);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

int SEGMENT = 36;

{

	SDL_DestroyRenderer(ren);

	CRect                rect;

	vector<WORD> indexList;

	if (FAILED(hr))

	if (FAILED(hr))

	D3D11_BUFFER_DESC vbDesc;

		return hr;

		pLevels,

	std::vector<tinyobj::shape_t> shapes;

			{





		{

	XMStoreFloat4(&clb.eyePos, eye);

	{



	{



	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{



	//インデックスバッファ作成

	UINT strides = sizeof(Vertex);

	m_pDepthStencilView = NULL;





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	auto& shapes = reader.GetShapes();

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		delete[] pVList;



	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		size_t index_offset = 0;





	while (SDL_PollEvent(&e) != 0)

			case SDLK_UP:

	m_pSwapChain = NULL;

	pBackBuffer->Release();

		size_t index_offset = 0;  // インデントのオフセット

	std::string error;



	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSampler);

				// access to vertex

			}

		D3D_DRIVER_TYPE_HARDWARE,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	txDesc.ArraySize = 1;

	XMFLOAT4X4 view;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	D3D11_SAMPLER_DESC smpDesc;

void CD3DTest::Release()

	txDesc.ArraySize = 1;

		flags,

		R"(cube.obj)");

	UINT strides = sizeof(Vertex);

		SDL_RenderClear(ren);

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}

	Release();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		return hr;

		return hr;

	if (FAILED(hr))

	{

	if (FAILED(hr))



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.StructureByteStride = 0;



	scDesc.Windowed = TRUE;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		}

	irData.SysMemPitch = 0;





		&error,



	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	UINT offsets = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

/*

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	std::vector<tinyobj::material_t> materials;

	if (m_pImmediateContext)

		D3D_DRIVER_TYPE_HARDWARE,



#include <SDL.h>

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	tinyobj::attrib_t attrib;



	return;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		size_t index_offset = 0;

			{



	std::string imagePath = "hello.bmp";



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_FreeSurface(suf);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pDepthStencilTexture = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

#include <SDL.h>



		{



	if (FAILED(hr))

				tinyobj::real_t ty =

	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC vbDesc;

	D3D11_SUBRESOURCE_DATA vrData;

			for (size_t v = 0; v < fv; v++)

	return hr;

		return hr;





 */

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				indexlist.push_back(idx.vertex_index);

	ibDesc.CPUAccessFlags = 0;

			case SDLK_UP:

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_FreeSurface(bmp);

using std::cout; using std::endl;



			// Loop over vertices in the face.





			case SDLK_DOWN:

	XMFLOAT4         eyePos;   //視点座標

		&scDesc,



	txDesc.SampleDesc.Quality = 0;



		{

	std::string imagePath = "hello.bmp";

	WORD* pIList = new WORD[icount];

	txDesc.Width = rect.Width();



	m_pVertexBuffer = NULL;

	float    farZ = 100.0f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pDevice = NULL;



		SDL_RenderClear(ren);





	};



		SDL_RenderPresent(ren);

	return;

	SDL_DestroyTexture(tex);

	txDesc.Height = rect.Height();

	m_pTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pTextureView = NULL;

	{



	//Vertex* pVList = new Vertex[vcount];

	//First we need to start up SDL, and make sure it went ok

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#include "DirectXManager.h"

	std::string imagePath = "hello.bmp";

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		SDL_RenderClear(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.BufferCount = 1;

#include <SDL.h>

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

	reader_config.mtl_search_path = "./"; // Path to material files

	scDesc.BufferCount = 1;



			for (size_t v = 0; v < num_vertices; v++)

		SDL_Delay(1000);





	SDL_FreeSurface(suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		return 1;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.SampleDesc.Quality = 0;

	UINT offsets = 0;

	if (FAILED(hr))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		delete[] pVList;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//ビューポート設定

	D3D11_SAMPLER_DESC smpDesc;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (int i = 0; i < vcount; i++)



	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyTexture(tex);

		return hr;

				tinyobj::real_t tx =

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	int     vcount = vertexlist.size();

	scDesc.SampleDesc.Quality = 0;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pTexture);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pRenderTargetView = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ConstantLight    pntLight; //点光源

		}

		{



	cbDesc.MiscFlags = 0;

	{



	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pVertexShader = NULL;

			}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_RenderPresent(ren);

	ConstantMaterial material; //物体の質感



	m_Viewport.TopLeftY = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pSwapChain);

				break;

	SDL_Quit();

				break;

	UINT offsets = 0;

		SDL_RenderClear(ren);



	for (size_t s = 0; s < shapes.size(); s++)

	vector<WORD> indexList;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

			case SDLK_UP:

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	CRect                rect;

	vrData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



CD3DTest::CD3DTest()

	txDesc.SampleDesc.Count = 1;

	pBackBuffer->Release();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	XMFLOAT4 pos;               //座標(x,y,z)



				break;



		//User presses a key

	m_IndexCount = icount;

{

		{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			index_offset += num_vertices;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pIndexBuffer);



		return hr;

	//テクスチャ読み込み

	for (int j = 0; j < icount; j++)







	m_pTextureView = NULL;



	enum KeyPressSurfaces

	ConstantMatrixBuffer cmb;

			//Select surfaces based on key press





		D3D11_SDK_VERSION,

	{



		exit(1);

	float    nearZ = 0.1f;



	if (FAILED(hr))



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



};

		return hr;

	}

		}

	vrData.pSysMem = &pVList[0];

{





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		}





	}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ibDesc.CPUAccessFlags = 0;

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

};



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



};

				break;

	std::vector<tinyobj::material_t> materials;

		return hr;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		&shapes,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	std::string imagePath = "hello.bmp";

		&shapes,

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_LEFT,

	scDesc.BufferCount = 1;

	if (!reader.Warning().empty())

	cbDesc.StructureByteStride = 0;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

{

	//First we need to start up SDL, and make sure it went ok

}

	//頂点レイアウト作成

		//User requests quit

	//vector<Vertex> vertex_t;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

#ifdef _DEBUG

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pSwapChain);

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pImmediateContext);

		&m_pImmediateContext);



	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	int     vcount = vertexlist.size();

}



			{

	dsDesc.Texture2D.MipSlice = 0;

}

	if (FAILED(hr))

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	tinyobj::attrib_t attrib;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				break;



	SAFE_RELEASE(m_pTextureView);

	for (const auto& shape : shapes)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				vertex.push_back(vertex_tmp);

		return hr;

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

	tinyobj::attrib_t attrib;

	m_pPixelShader = NULL;

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		D3D11_SDK_VERSION,

	if (FAILED(hr))

struct ConstantLightBuffer {

	::GetClientRect(hwnd, &rect);

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	ibDesc.CPUAccessFlags = 0;

void CD3DTest::Release()

	m_pDepthStencilView = NULL;

				break;

	return 0;

	float    nearZ = 0.1f;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Event e;

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pPixelShader = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pSampler);

		return hr;

	SDL_DestroyWindow(win);

	txDesc.SampleDesc.Quality = 0;

	HRESULT              hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

{

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pLightBuffer = NULL;

		&scDesc,

		}

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

		{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	tinyobj::ObjReaderConfig reader_config;



	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC ibDesc;



	SAFE_RELEASE(m_pVertexShader);

	m_pDepthStencilTexture = NULL;

		if (e.type == SDL_QUIT)

	vrData.SysMemPitch = 0;

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.CPUAccessFlags = 0;

		{

	SAFE_RELEASE(m_pSwapChain);



		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.Width = rect.Width();

		&m_pSwapChain,

	m_Viewport.Height = (FLOAT)rect.Height();

				break;

	vrData.SysMemSlicePitch = 0;

		return hr;



			}

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	return 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderClear(ren);

};

	txDesc.MiscFlags = 0;



		if (e.type == SDL_QUIT)

	m_pSwapChain->Present(0, 0);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			exit(1);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

		&m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pDepthStencilView);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

}

	irData.SysMemPitch = 0;

		delete[] pVList;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Angle += XMConvertToRadians(1.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SDL_DestroyTexture(tex);

	//ピクセルシェーダー生成

	bool ret = tinyobj::LoadObj(

	m_Viewport.Height = (FLOAT)rect.Height();





	XMStoreFloat4(&clb.eyePos, eye);





		{

	{

	txDesc.SampleDesc.Quality = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	scDesc.Windowed = TRUE;



	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.SampleDesc.Count = 1;



	//頂点シェーダー生成

		KEY_PRESS_SURFACE_DOWN,

		{

	if (!error.empty())

	SAFE_RELEASE(m_pTexture);

		R"(cube.obj)");



	if (FAILED(hr))



		delete[] pVList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		}

	m_pDepthStencilView = NULL;

	/*

using std::cout; using std::endl;

#include <iostream>



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pLightBuffer = NULL;

	return hr;

	txDesc.SampleDesc.Quality = 0;

		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		NULL,



	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	vector<Vertex> vertexlist;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				vertex.push_back(vertex_tmp);

	m_pLightBuffer = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

}

 * Lesson 1: Hello World!

			}

	//vector<WORD> index_t;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4X4 projection;

	SDL_Quit();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//Create Index

		size_t index_offset = 0;  // インデントのオフセット

	Release();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pVertexShader);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t tx =

	vbDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	HRESULT              hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	}



	m_pIndexBuffer = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMFLOAT4X4 world;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

#ifdef _DEBUG

 */

				WORD index = idx.vertex_index;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (m_pImmediateContext)



	vector<WORD> indexList;

	//インデックスバッファ作成

		{

		KEY_PRESS_SURFACE_RIGHT,

		&scDesc,

struct ConstantLightBuffer {

	dsDesc.Format = txDesc.Format;

	Vertex* pVList = new Vertex[vcount];

	for (int i = 0; i < 3; i++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantLightBuffer clb;

	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_RIGHT,

			// Loop over vertices in the face.

				break;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	::GetClientRect(hwnd, &rect);

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderClear(ren);

	XMFLOAT4X4 view;

		// Loop over faces(polygon)

	m_VertexCount = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		SDL_Delay(1000);

	ibDesc.StructureByteStride = 0;

		&materials,

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyTexture(tex);

	vector<WORD> indexList;

	//頂点レイアウト作成

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t ty =

		return hr;

	{

	SAFE_RELEASE(m_pIndexBuffer);





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		else if (e.type == SDL_KEYDOWN)

	//Key press surfaces constants

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	scDesc.BufferCount = 1;

	D3D11_SUBRESOURCE_DATA vrData;

	reader_config.mtl_search_path = "./"; // Path to material files

		size_t index_offset = 0;

	irData.SysMemSlicePitch = 0;

int SEGMENT = 36;

		flags,

	SAFE_RELEASE(m_pVertexShader);

{

			{

		KEY_PRESS_SURFACE_UP,

	D3D11_BUFFER_DESC cbDesc;



struct ConstantMaterial {

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		{

	m_pSwapChain = NULL;



			{

	m_pMatrixBuffer = NULL;

	//インデックスバッファ作成

		{



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pSwapChain = NULL;

	{



	scDesc.BufferDesc.Width = rect.Width();

 * Lesson 1: Hello World!



using std::cout; using std::endl;

		&attrib,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	SAFE_RELEASE(m_pImmediateContext);

{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	D3D11_SUBRESOURCE_DATA vrData;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&m_pSwapChain,



}

		return hr;

	m_pDevice = NULL;

	D3D11_SAMPLER_DESC smpDesc;

	}

	std::vector<tinyobj::shape_t> shapes;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	m_pVertexBuffer = NULL;

	XMFLOAT4X4 projection;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			exit(1);

		// Loop over faces(polygon)

		}

#include "DirectXManager.h"



		}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string error;

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pRenderTargetView);

			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pDevice = NULL;

	txDesc.SampleDesc.Quality = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Release()

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{



struct ConstantMatrixBuffer {

	if (FAILED(hr))

		if (!reader.Error().empty())

		SDL_RenderClear(ren);

		{

		size_t index_offset = 0;

		NULL,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.StructureByteStride = 0;



			for (size_t v = 0; v < fv; v++)

	m_pLightBuffer = NULL;

				tinyobj::real_t tx =

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	m_pSwapChain = NULL;

#include <SDL.h>



	m_pTextureView = NULL;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <SDL.h>

			case SDLK_LEFT:

	m_Viewport.Height = (FLOAT)rect.Height();

#include "DirectXManager.h"

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pDepthStencilView);

{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		{

}

	Release();

	delete[] pVList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyWindow(win);



	ConstantMaterial material; //物体の質感

	m_VertexCount = vcount;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

#ifdef _DEBUG



	}

	/*

	ConstantLight    pntLight; //点光源

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//First we need to start up SDL, and make sure it went ok

	auto& shapes = reader.GetShapes();

	txDesc.SampleDesc.Count = 1;

	m_pSwapChain = NULL;

		if (!ret)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		NULL,



		return hr;

};

	SAFE_RELEASE(m_pDepthStencilView);

	if (!reader.ParseFromFile(inputfile, reader_config))

{

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		R"(cube.obj)");

	m_pImmediateContext = NULL;

	enum KeyPressSurfaces

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	WORD   icount = indexList.size();

		return hr;

	UINT flags = 0;



}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		pIList[j] = indexList[j];



		&m_pSwapChain,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			exit(1);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				indexlist.push_back(index);



	D3D11_BUFFER_DESC cbDesc;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyWindow(win);

				WORD index = idx.vertex_index;

 * Lesson 1: Hello World!

	UINT flags = 0;

				break;



	D3D_FEATURE_LEVEL level;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	// Loop over shapes

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4X4 projection;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}
	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_Viewport.Width = (FLOAT)rect.Width();



	dsDesc.Format = txDesc.Format;



		{

	vrData.pSysMem = &pVList[0];

		// Loop over faces(polygon)



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Quit();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			case SDLK_DOWN:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	}

	int     vcount = vertexlist.size();

struct ConstantLightBuffer {

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;

	}



	m_pDepthStencilView = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	UINT strides = sizeof(Vertex);

		R"(cube.obj)");

struct ConstantMatrixBuffer {

	auto& materials = reader.GetMaterials();

CD3DTest::~CD3DTest()

	vector<Vertex> vertexlist;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4X4 world;



	if (!error.empty())



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pVertexBuffer);

	//ビューポート設定

	ID3D11Texture2D* pBackBuffer;



	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);









	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SAFE_RELEASE(m_pDepthStencilView);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				break;

	}

	SDL_FreeSurface(suf);

}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.OutputWindow = hwnd;

	//vector<Vertex> vertex_t;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		KEY_PRESS_SURFACE_RIGHT,

#ifdef _DEBUG

	::ZeroMemory(&scDesc, sizeof(scDesc));

}

	std::vector<tinyobj::material_t> materials;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

{

	return hr;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			{

	WORD   icount = indexList.size();

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pInputLayout);

	SDL_DestroyWindow(win);

		&scDesc,



		1,



		{



	m_Viewport.Width = (FLOAT)rect.Width();



	float    nearZ = 0.1f;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				indexlist.push_back(index);

int main(int, char**)

CD3DTest::CD3DTest()

	if (FAILED(hr))

	if (FAILED(hr))

			case SDLK_UP:



	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;



	SDL_Quit();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));





	//Key press surfaces constants



	flags |= D3D11_CREATE_DEVICE_DEBUG;

				indexlist.push_back(idx.vertex_index);

	txDesc.CPUAccessFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files



		{

	txDesc.MipLevels = 1;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pLightBuffer = NULL;



	cbDesc.CPUAccessFlags = 0;

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 pos;               //座標(x,y,z)



	m_Viewport.TopLeftY = 0;



	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);



	if (!reader.Warning().empty())



		SDL_RenderCopy(ren, tex, NULL, NULL);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT strides = sizeof(Vertex);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//ビューポート設定

	SAFE_RELEASE(m_pSwapChain);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	for (int j = 0; j < icount; j++)

	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pSampler);

int SEGMENT = 36;

	m_pDepthStencilView = NULL;



	m_pPixelShader = NULL;

	cbDesc.MiscFlags = 0;







	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	while (SDL_PollEvent(&e) != 0)

	SDL_Quit();



		KEY_PRESS_SURFACE_UP,

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pDepthStencilTexture);

	tinyobj::ObjReader reader;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pTextureView = NULL;



struct ConstantMatrixBuffer {

void CD3DTest::Release()

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (!error.empty())

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pSampler);

	SDL_Event e;

	ConstantMatrixBuffer cmb;

	//vector<Vertex> vertex_t;

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			}

		SDL_RenderClear(ren);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::string inputfile = "test.obj";

	//定数バッファ作成

	return hr;

#include <SDL.h>

	if (FAILED(hr))

		}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	for (int j = 0; j < icount; j++)



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

#include "DirectXManager.h"

	return;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

			case SDLK_RIGHT:

			default:

		//User requests quit

	D3D11_SUBRESOURCE_DATA vrData;

	::GetClientRect(hwnd, &rect);

				break;

	{

				// access to vertex

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.SampleDesc.Count = 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



void CD3DTest::Render()

	SDL_DestroyTexture(tex);

	return hr;

	XMFLOAT4X4 world;

		SDL_Delay(1000);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pDevice);

		return hr;





	return 0;

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pTexture);

	Release();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	txDesc.MipLevels = 1;

	WORD   icount = indexList.size();

	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.SampleDesc.Count = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	};

		return hr;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		exit(1);

	std::string error;

		}

	D3D11_SUBRESOURCE_DATA vrData;

	for (const auto& shape : shapes)





	}

	vrData.pSysMem = &pVList[0];

	m_pRenderTargetView = NULL;

	}*/

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		pLevels,

		return hr;

	m_VertexCount = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		&materials,

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	{

				WORD index = idx.vertex_index;



	//頂点シェーダー生成

	//深度ステンシルバッファ作成

}

		pVList[i] = vertexlist[i];

};

	scDesc.Windowed = TRUE;



	SDL_DestroyRenderer(ren);

	m_Viewport.TopLeftX = 0;

		SDL_RenderClear(ren);



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		1,

	DXGI_SWAP_CHAIN_DESC scDesc;





		KEY_PRESS_SURFACE_TOTAL



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		{

				break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

#include <iostream>

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.ArraySize = 1;

	for (int i = 0; i < vcount; i++)

			//Select surfaces based on key press

};

	scDesc.Windowed = TRUE;

			case SDLK_RIGHT:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	Release();

	if (!reader.Warning().empty())





	float    farZ = 100.0f;

				break;

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

}

				indexlist.push_back(index);

	}



				vertex.push_back(vertex_tmp);

			int num_vertices = shape.mesh.num_face_vertices[f];

		&scDesc,

		&materials,

	m_pVertexShader = NULL;

				vertex.push_back(vertex_tmp);

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pIndexBuffer);

			case SDLK_UP:

			}

		&m_pImmediateContext);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	if (FAILED(hr))



				break;

	auto& shapes = reader.GetShapes();



	::GetClientRect(hwnd, &rect);

	//頂点バッファ作成



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);







		SDL_RenderClear(ren);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

		SDL_RenderClear(ren);

	delete[] pIList;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.MiscFlags = 0;

			index_offset += fv;

void CD3DTest::Release()



	}

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		if (!ret)

	//深度ステンシルバッファ作成

	WORD   icount = indexList.size();

	scDesc.BufferDesc.Width = rect.Width();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	irData.pSysMem = &pIList[0];

	m_VertexCount = vcount;

			// Loop over vertices in the face.



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::attrib_t attrib;

				break;

	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.MiscFlags = 0;



	{



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&level,

	m_pInputLayout = NULL;

	}*/



	txDesc.ArraySize = 1;





	LoadObj(vertexlist, indexList);

int SEGMENT = 36;

		&m_pDevice,

		KEY_PRESS_SURFACE_RIGHT,

	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	if (FAILED(hr))



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 */

		//User presses a key

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_TOTAL

CD3DTest::~CD3DTest()

	vector<WORD> indexList;





	irData.SysMemSlicePitch = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		}

	{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	float    nearZ = 0.1f;

		&level,

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	m_pMatrixBuffer = NULL;



	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pMatrixBuffer);

			//Select surfaces based on key press



	std::string error;



	WORD   icount = indexList.size();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;

	scDesc.SampleDesc.Quality = 0;



	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ConstantMaterial material; //物体の質感

			{

		}

	//ピクセルシェーダー生成

				// access to vertex

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return 0;

		SDL_RenderPresent(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	txDesc.MiscFlags = 0;



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	return 0;



	SDL_DestroyTexture(tex);

				indexlist.push_back(idx.vertex_index);

	HRESULT              hr;

	scDesc.SampleDesc.Quality = 0;

			{



	SAFE_RELEASE(m_pIndexBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.StructureByteStride = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	m_Viewport.TopLeftY = 0;

	//深度ステンシルバッファ作成



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Width = rect.Width();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	CRect                rect;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	return 0;



	CRect                rect;

	std::string inputfile = "test.obj";

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.OutputWindow = hwnd;

		SDL_RenderClear(ren);



	//Key press surfaces constants

	// Loop over shapes

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	return 0;

	ConstantLightBuffer clb;

	XMFLOAT4X4 view;

		KEY_PRESS_SURFACE_LEFT,

		D3D11_SDK_VERSION,

	if (FAILED(hr))

	{

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

		// Loop over faces(polygon)

	{

	D3D11_BUFFER_DESC ibDesc;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	float    farZ = 100.0f;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

#include "DirectXManager.h"

		D3D11_SDK_VERSION,

			break;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

struct ConstantMatrixBuffer {

	//ピクセルシェーダー生成

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pTexture = NULL;

	ConstantLight    pntLight; //点光源



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderPresent(ren);

				break;





	txDesc.SampleDesc.Count = 1;

				// access to vertex

int main(int, char**)

			{

	vrData.SysMemPitch = 0;

	auto& shapes = reader.GetShapes();

			switch (e.key.keysym.sym)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		KEY_PRESS_SURFACE_RIGHT,



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ConstantLight    pntLight; //点光源

			case SDLK_DOWN:



		SDL_RenderPresent(ren);

	{



	m_pSwapChain->Present(0, 0);

{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_RenderClear(ren);



#include <iostream>



	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	//ピクセルシェーダー生成

	m_IndexCount = icount;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	m_pLightBuffer = NULL;



		pIList[j] = indexList[j];

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				// access to vertex



{

		&shapes,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

		return hr;



	HRESULT              hr;

	scDesc.BufferDesc.Width = rect.Width();

		pIList[j] = indexList[j];

		return hr;

	ConstantMaterial material; //物体の質感







		}

	SAFE_RELEASE(m_pImmediateContext);



	XMFLOAT4 diffuse;           //拡散(r,g,b)



};

	SAFE_RELEASE(m_pTextureView);

	vbDesc.CPUAccessFlags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





using std::cout; using std::endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



			default:

	return;

				break;

	SDL_DestroyWindow(win);

	XMFLOAT4 ambient;           //環境(r,g,b)



		1,



			// Loop over vertices in the face.

	HRESULT              hr;

	D3D11_BUFFER_DESC vbDesc;

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pDepthStencilTexture = NULL;

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_SAMPLER_DESC smpDesc;

	if (m_pImmediateContext)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	for (const auto& shape : shapes)

		SDL_RenderClear(ren);





	vbDesc.CPUAccessFlags = 0;

		&attrib,



	m_Viewport.MaxDepth = 1.0f;



	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vrData.SysMemSlicePitch = 0;

	SDL_Quit();



};





		KEY_PRESS_SURFACE_DOWN,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	WORD* pIList = new WORD[icount];

	LoadObj(vertexlist, indexList);

		return hr;

	auto& attrib = reader.GetAttrib();

	m_Viewport.TopLeftY = 0;

	{



		pLevels,

				break;

	D3D11_SAMPLER_DESC smpDesc;



	irData.SysMemPitch = 0;

	return hr;

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}

		{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pPixelShader);



		{

	XMFLOAT4X4 projection;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			default:

	D3D_FEATURE_LEVEL level;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;





	WORD   icount = indexList.size();



			switch (e.key.keysym.sym)

	m_pMatrixBuffer = NULL;

				break;

		}

	SDL_FreeSurface(suf);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;

	}

	D3D11_BUFFER_DESC cbDesc;

		KEY_PRESS_SURFACE_UP,

	{

	txDesc.SampleDesc.Count = 1;

	}

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	{

	cbDesc.CPUAccessFlags = 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

		if (!reader.Error().empty())

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.TopLeftX = 0;

	if (!error.empty())

		{

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	}

		return hr;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	float    farZ = 100.0f;

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	std::string inputfile = "test.obj";

	m_pIndexBuffer = NULL;

	ConstantLight    pntLight; //点光源

	cbDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Quality = 0;

{

	cbDesc.MiscFlags = 0;



	m_Viewport.MinDepth = 0.0f;

#include "DirectXManager.h"

				vertex.push_back(vertex_tmp);

}
	m_pImmediateContext = NULL;



	}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ConstantMatrixBuffer cmb;

	D3D11_SUBRESOURCE_DATA vrData;



{

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferCount = 1;

	}

		D3D11_SDK_VERSION,

	cbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		size_t index_offset = 0;

	ibDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

		SDL_RenderPresent(ren);

	m_pRenderTargetView = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 world;

void CD3DTest::Render()

		return hr;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		else if (e.type == SDL_KEYDOWN)

void CD3DTest::Render()



	vector<WORD> indexList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	if (FAILED(hr))

	XMFLOAT4X4 view;

			case SDLK_UP:



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#endif

			switch (e.key.keysym.sym)



		m_pImmediateContext->ClearState();

	scDesc.SampleDesc.Count = 1;



	scDesc.Windowed = TRUE;



		return hr;



	if (!error.empty())

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 ambient;           //環境(r,g,b)

{





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



				vertex.push_back(vertex_tmp);

#ifdef _DEBUG

	m_VertexCount = vcount;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

	for (int i = 0; i < 3; i++)

	irData.SysMemPitch = 0;



				indexlist.push_back(idx.vertex_index);

	std::vector<tinyobj::material_t> materials;

	D3D11_TEXTURE2D_DESC txDesc;

	UINT offsets = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MiscFlags = 0;

	}

		{

		else if (e.type == SDL_KEYDOWN)





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



				break;

	UINT offsets = 0;

		return hr;

	{

};

	cbDesc.StructureByteStride = 0;



		pVList[i] = vertexlist[i];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	txDesc.SampleDesc.Count = 1;

	{

	auto& attrib = reader.GetAttrib();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	float    farZ = 100.0f;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

	{

	m_pImmediateContext = NULL;



			switch (e.key.keysym.sym)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			switch (e.key.keysym.sym)

};

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

#include <iostream>

	ibDesc.MiscFlags = 0;

	XMFLOAT4X4 world;

	XMFLOAT4         eyePos;   //視点座標



	SAFE_RELEASE(m_pDepthStencilTexture);





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		flags,

	m_Viewport.Height = (FLOAT)rect.Height();

	{



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_FreeSurface(suf);

	ConstantLightBuffer clb;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				indexlist.push_back(index);

			int num_vertices = shape.mesh.num_face_vertices[f];

	vrData.pSysMem = &pVList[0];

	Release();

		R"(cube.obj)");

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.CPUAccessFlags = 0;

	float    nearZ = 0.1f;

	cbDesc.MiscFlags = 0;

CD3DTest::CD3DTest()



	m_pIndexBuffer = NULL;

}

/*



#include <SDL.h>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	WORD   icount = indexList.size();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#include <SDL.h>

	auto& shapes = reader.GetShapes();



{

	ID3D11Texture2D* pBackBuffer;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				vertex.push_back(vertex_tmp);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			exit(1);

		return hr;

	SDL_FreeSurface(bmp);

	SDL_DestroyWindow(win);

	//深度ステンシルバッファ作成









				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		}



				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_DEFAULT,

#include <iostream>

		size_t index_offset = 0;  // インデントのオフセット

			}

	ibDesc.MiscFlags = 0;

}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	irData.SysMemSlicePitch = 0;

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		size_t index_offset = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	auto& materials = reader.GetMaterials();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		m_pImmediateContext->ClearState();



		delete[] pIList;

	bool ret = tinyobj::LoadObj(

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		NULL,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vbDesc.CPUAccessFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;

	//Clean up our objects and quit

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_FreeSurface(suf);

#include "DirectXManager.h"

	{

	m_pDepthStencilTexture = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	auto& attrib = reader.GetAttrib();

		R"(cube.obj)");

		m_pImmediateContext->ClearState();



#endif

	for (int i = 0; i < 3; i++)

	vector<Vertex> vertexlist;

	}





			break;

struct ConstantMatrixBuffer {

				// access to vertex

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	HRESULT              hr;

	for (int i = 0; i < vcount; i++)



	//頂点レイアウト作成



	auto& materials = reader.GetMaterials();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	CRect                rect;

	//頂点バッファ作成

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pPixelShader);

	//ビューポート設定

	//定数バッファ作成



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		cout << "SDL_INIT_ERROR" << endl;



	while (SDL_PollEvent(&e) != 0)





	scDesc.Windowed = TRUE;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_IndexCount = icount;

		SDL_RenderPresent(ren);

	{

	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.eyePos, eye);

		pIList[j] = indexList[j];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//定数バッファ作成



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		if (!ret)

	if (FAILED(hr))



	scDesc.BufferDesc.Width = rect.Width();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		SDL_Delay(1000);



	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#include <iostream>

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pLightBuffer = NULL;

{

				break;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//vector<Vertex> vertex_t;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				indexlist.push_back(idx.vertex_index);

			}

void CD3DTest::Release()





	//Vertex* pVList = new Vertex[vcount];

	float    farZ = 100.0f;

	vrData.SysMemPitch = 0;

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			exit(1);

#include <iostream>

	}

}



	m_VertexCount = vcount;



		}



		delete[] pIList;

		exit(1);

	scDesc.BufferCount = 1;

	for (size_t s = 0; s < shapes.size(); s++)

	};

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		&attrib,



	txDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	reader_config.mtl_search_path = "./"; // Path to material files



	ID3D11Texture2D* pBackBuffer;

		&m_pSwapChain,

{

	auto& shapes = reader.GetShapes();



	D3D11_BUFFER_DESC cbDesc;





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

};

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	m_pDevice = NULL;

	ConstantMatrixBuffer cmb;

		&m_pDevice,

		}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!reader.Error().empty())

		return hr;



};



	//Clean up our objects and quit

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4 specular;          //反射(r,g,b)

}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	::GetClientRect(hwnd, &rect);

}

	m_Viewport.TopLeftY = 0;

	for (size_t s = 0; s < shapes.size(); s++)



#include "DirectXManager.h"

		SDL_RenderPresent(ren);

				indexlist.push_back(idx.vertex_index);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.StructureByteStride = 0;

	m_pInputLayout = NULL;



	tinyobj::attrib_t attrib;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	dsDesc.Format = txDesc.Format;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	float    farZ = 100.0f;

	pBackBuffer->Release();

	// Loop over shapes



		}

	auto& materials = reader.GetMaterials();



	SDL_DestroyRenderer(ren);

	HRESULT              hr;

	//ビューポート設定



	};

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;



	SDL_DestroyTexture(tex);

	UINT offsets = 0;

	{

		return hr;

				break;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

	m_pTextureView = NULL;

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.MiscFlags = 0;

	ConstantMatrixBuffer cmb;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pRenderTargetView = NULL;

		exit(1);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pRenderTargetView);



	UINT flags = 0;

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pSwapChain);

	//頂点シェーダー生成

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	m_IndexCount = icount;

	bool ret = tinyobj::LoadObj(

	std::vector<tinyobj::shape_t> shapes;

	auto& materials = reader.GetMaterials();

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	//Clean up our objects and quit

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexBuffer);

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

		return hr;

	SAFE_RELEASE(m_pTextureView);



			case SDLK_UP:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	}

	if (m_pImmediateContext)

		R"(cube.obj)");

			}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC cbDesc;

				vertex.push_back(vertex_tmp);

		D3D_DRIVER_TYPE_HARDWARE,

	}*/

	::GetClientRect(hwnd, &rect);

				// access to vertex

	D3D_FEATURE_LEVEL level;



		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pSwapChain = NULL;



};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	tinyobj::attrib_t attrib;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				// access to vertex

	D3D11_BUFFER_DESC vbDesc;

	HRESULT              hr;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.MinDepth = 0.0f;

	SAFE_RELEASE(m_pDepthStencilView);

		&error,



	m_pMatrixBuffer = NULL;



	vector<WORD> indexList;

		m_pImmediateContext->ClearState();



	SAFE_RELEASE(m_pDepthStencilTexture);



	}

	SAFE_RELEASE(m_pSampler);







	auto& attrib = reader.GetAttrib();

	{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}
	txDesc.SampleDesc.Quality = 0;

	//Clean up our objects and quit



		SDL_RenderPresent(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	scDesc.OutputWindow = hwnd;

	};

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pSampler);

			index_offset += num_vertices;

}

		return hr;







	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D11_BUFFER_DESC cbDesc;

	{

		}



	while (SDL_PollEvent(&e) != 0)

/*

	SAFE_RELEASE(m_pSampler);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//Create Index

		return hr;

	XMFLOAT4X4 view;

				// access to vertex

		&m_pDevice,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;







	ConstantMatrixBuffer cmb;

struct ConstantMatrixBuffer {



	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			case SDLK_LEFT:

	m_pTextureView = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pSwapChain);

		1,

	WORD   icount = indexList.size();



	//ピクセルシェーダー生成

	SDL_FreeSurface(bmp);



	D3D11_BUFFER_DESC cbDesc;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	scDesc.OutputWindow = hwnd;

		pLevels,

	WORD   icount = indexList.size();

{



			switch (e.key.keysym.sym)





			for (size_t v = 0; v < num_vertices; v++)

		size_t index_offset = 0;  // インデントのオフセット

CD3DTest::~CD3DTest()



		SDL_Delay(1000);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	m_pTexture = NULL;

			case SDLK_UP:

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



int SEGMENT = 36;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

};



	return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



struct ConstantMatrixBuffer {

	tinyobj::attrib_t attrib;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User requests quit

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			case SDLK_RIGHT:

		{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_IndexCount = icount;

	txDesc.Height = rect.Height();

	XMStoreFloat4(&clb.eyePos, eye);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		delete[] pVList;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}

	bool ret = tinyobj::LoadObj(

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_Delay(1000);



	D3D11_SAMPLER_DESC smpDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				WORD index = idx.vertex_index;

	irData.pSysMem = &pIList[0];

	/*

	SAFE_RELEASE(m_pDepthStencilTexture);

	reader_config.mtl_search_path = "./"; // Path to material files

	std::vector<tinyobj::material_t> materials;

	}



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	while (SDL_PollEvent(&e) != 0)

	return 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

			default:

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

struct ConstantMatrixBuffer {

	for (int j = 0; j < icount; j++)

/*



	float    nearZ = 0.1f;

#include "DirectXManager.h"

		}

	m_Viewport.Width = (FLOAT)rect.Width();

	ibDesc.MiscFlags = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	tinyobj::attrib_t attrib;



		{

int main(int, char**)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			exit(1);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	SDL_Quit();

	//テクスチャ読み込み



#endif

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_LEFT:

	m_pIndexBuffer = NULL;

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pMatrixBuffer);

	}

			exit(1);



	m_pSampler = NULL;

}

	txDesc.ArraySize = 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

{



	std::vector<tinyobj::material_t> materials;

	}

	SAFE_RELEASE(m_pPixelShader);

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			case SDLK_DOWN:





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.SampleDesc.Quality = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

			case SDLK_UP:

		}



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	SAFE_RELEASE(m_pSampler);



	SAFE_RELEASE(m_pVertexShader);

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_UP,



	m_pLightBuffer = NULL;

	m_pIndexBuffer = NULL;

	m_pSwapChain->Present(0, 0);

	//頂点シェーダー生成



	LoadObj(vertexlist, indexList);

	ID3D11Texture2D* pBackBuffer;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			case SDLK_RIGHT:

	irData.SysMemSlicePitch = 0;

int main(int, char**)

}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{



	m_IndexCount = icount;

}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	Vertex* pVList = new Vertex[vcount];

	std::string error;









	m_pVertexShader = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.SampleDesc.Quality = 0;

 */

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_Delay(1000);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	tinyobj::ObjReaderConfig reader_config;

	//インデックスバッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&error,

	for (const auto& shape : shapes)



	for (int j = 0; j < icount; j++)

		&scDesc,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	if (!reader.Warning().empty())

{

	auto& materials = reader.GetMaterials();

	{

		return hr;

	m_pSwapChain = NULL;

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pSwapChain);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_Quit();

	}

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}*/

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pDevice);



	delete[] pVList;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		R"(cube.obj)");



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.MinDepth = 0.0f;

};

		1,

		{

	SDL_FreeSurface(suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}



 */

}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.ArraySize = 1;



	}*/

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

CD3DTest::CD3DTest()

	auto& materials = reader.GetMaterials();

	SDL_Quit();

		KEY_PRESS_SURFACE_RIGHT,

#ifdef _DEBUG

		KEY_PRESS_SURFACE_DEFAULT,

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_DestroyTexture(tex);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





};



	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	}*/

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		&materials,

	m_IndexCount = 0;





};





		return 1;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			default:



	{

CD3DTest::~CD3DTest()

	m_pImmediateContext = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			case SDLK_DOWN:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	ID3D11Texture2D* pBackBuffer;



		return hr;

	float    fov = XMConvertToRadians(20.0f);

		}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pVertexBuffer = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

/*



				break;



struct ConstantMatrixBuffer {



	for (const auto& shape : shapes)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < vcount; i++)



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

				break;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&error,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	for (int j = 0; j < icount; j++)





	while (SDL_PollEvent(&e) != 0)



	if (FAILED(hr))

		}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pRenderTargetView = NULL;

	//vector<Vertex> vertex_t;

	XMFLOAT4X4 world;

	ibDesc.MiscFlags = 0;

 * Lesson 1: Hello World!

struct ConstantLightBuffer {

	int     vcount = vertexlist.size();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	CRect                rect;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferCount = 1;



	SDL_DestroyRenderer(ren);

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	txDesc.SampleDesc.Count = 1;

	//テクスチャ読み込み





	//インデックスバッファ作成

	m_pSampler = NULL;

	std::vector<tinyobj::material_t> materials;





	ZeroMemory(&txDesc, sizeof(txDesc));

	vrData.SysMemSlicePitch = 0;



	m_pSwapChain->Present(0, 0);

	cbDesc.MiscFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_LEFT:

	D3D11_SUBRESOURCE_DATA irData;





		SDL_RenderClear(ren);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (int i = 0; i < vcount; i++)

CD3DTest::CD3DTest()

		&attrib,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MipLevels = 1;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	irData.pSysMem = &pIList[0];

		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SAFE_RELEASE(m_pDevice);

	CRect                rect;

			// Loop over vertices in the face.



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

struct ConstantLight {





	UINT flags = 0;

	SDL_Event e;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	enum KeyPressSurfaces

		return hr;

	txDesc.MipLevels = 1;

#include <SDL.h>

	UINT offsets = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



#include <SDL.h>



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

}

	//頂点レイアウト作成



	{





	ConstantLight    pntLight; //点光源

	//Clean up our objects and quit

}

		}

	ConstantMatrixBuffer cmb;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			case SDLK_RIGHT:

	tinyobj::ObjReader reader;

	vector<Vertex> vertexlist;

		//User requests quit



	scDesc.BufferCount = 1;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

}


	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

{

	m_pVertexShader = NULL;

	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	cbDesc.StructureByteStride = 0;

	{

				// access to vertex



		return hr;

		&level,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	//vector<Vertex> vertex_t;

	m_pIndexBuffer = NULL;

	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_Viewport.MaxDepth = 1.0f;



#include <SDL.h>

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D11_TEXTURE2D_DESC txDesc;

#include "DirectXManager.h"

	//Key press surfaces constants

	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			{

	LoadObj(vertexlist, indexList);







	ConstantMaterial material; //物体の質感

	ConstantMatrixBuffer cmb;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC cbDesc;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

 * Lesson 1: Hello World!

			case SDLK_UP:

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	if (FAILED(hr))

	vector<WORD> indexList;

	int     vcount = vertexlist.size();

	}

#endif

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



			}



	}

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		{





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	DXGI_SWAP_CHAIN_DESC scDesc;

int main(int, char**)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}



	auto& attrib = reader.GetAttrib();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&attrib,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	enum KeyPressSurfaces



	}

	std::string inputfile = "test.obj";

	D3D11_SUBRESOURCE_DATA irData;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

	for (const auto& shape : shapes)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	int     vcount = vertexlist.size();

			{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

				break;





	vbDesc.StructureByteStride = 0;

			// Loop over vertices in the face.



}

	ConstantMaterial material; //物体の質感

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx =





	SAFE_RELEASE(m_pInputLayout);

				// access to vertex

	XMFLOAT4         eyePos;   //視点座標



	for (int i = 0; i < vcount; i++)

using std::cout; using std::endl;

		}



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

struct ConstantMatrixBuffer {



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_FreeSurface(suf);

	if (FAILED(hr))

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pLightBuffer);



	UINT offsets = 0;

	delete[] pVList;







	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

	//First we need to start up SDL, and make sure it went ok

	}

	//ピクセルシェーダー生成



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

struct ConstantLight {

	m_Viewport.TopLeftY = 0;

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	delete[] pVList;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext = NULL;

		}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	D3D11_SUBRESOURCE_DATA vrData;

}

	vrData.pSysMem = &pVList[0];

	{

	XMFLOAT4         eyePos;   //視点座標





		return hr;

	txDesc.Height = rect.Height();



		delete[] pIList;

	ConstantLightBuffer clb;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.SampleDesc.Count = 1;



	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

			{



	m_pDevice = NULL;

	ConstantMatrixBuffer cmb;



		cout << "SDL_INIT_ERROR" << endl;

	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pLightBuffer = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pMatrixBuffer);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	std::string inputfile = "test.obj";

		SDL_RenderClear(ren);

	m_pSwapChain = NULL;



			case SDLK_DOWN:

		SDL_RenderClear(ren);





	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.StructureByteStride = 0;

		return hr;

	enum KeyPressSurfaces



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	WORD   icount = indexList.size();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#include "DirectXManager.h"

	m_pPixelShader = NULL;

			default:

	//インデックスバッファ作成

			break;

#include <SDL.h>

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

	XMFLOAT4X4 projection;



		return hr;

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



				vertex.push_back(vertex_tmp);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	WORD   icount = indexList.size();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.Windowed = TRUE;







{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//ビューポート設定

	txDesc.Height = rect.Height();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return 0;





	vrData.SysMemPitch = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	};

	//深度ステンシルバッファ作成

		&level,

	D3D_FEATURE_LEVEL level;

	// Loop over shapes

	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	tinyobj::ObjReaderConfig reader_config;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		pIList[j] = indexList[j];

	m_Viewport.Width = (FLOAT)rect.Width();

				// access to vertex

	return hr;



CD3DTest::~CD3DTest()



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	Release();

			index_offset += fv;



	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

		&level,

	txDesc.SampleDesc.Quality = 0;

		return hr;

	txDesc.Width = rect.Width();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		pVList[i] = vertexlist[i];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				break;

	ConstantMatrixBuffer cmb;

	}

	SDL_Event e;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		{

	auto& materials = reader.GetMaterials();

	for (const auto& shape : shapes)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	while (SDL_PollEvent(&e) != 0)

		KEY_PRESS_SURFACE_RIGHT,

	{

			//Select surfaces based on key press

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	txDesc.MiscFlags = 0;

		&error,



		&materials,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		return hr;







		KEY_PRESS_SURFACE_DEFAULT,



	bool ret = tinyobj::LoadObj(

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_BUFFER_DESC cbDesc;



				vertex.push_back(vertex_tmp);

		size_t index_offset = 0;

 * Lesson 1: Hello World!

	}

	//頂点シェーダー生成

void CD3DTest::Release()

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))

				break;

	tinyobj::attrib_t attrib;



	SAFE_RELEASE(m_pDevice);

	std::string imagePath = "hello.bmp";

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D11_SUBRESOURCE_DATA irData;

	std::vector<tinyobj::shape_t> shapes;



	SAFE_RELEASE(m_pSwapChain);

	HRESULT              hr;

	vrData.pSysMem = &pVList[0];



		R"(cube.obj)");

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		m_pImmediateContext->ClearState();

	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.StructureByteStride = 0;



};

			// Loop over vertices in the face.

			case SDLK_UP:

		{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//Create Index

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pSwapChain);

	m_pInputLayout = NULL;

	m_Viewport.MaxDepth = 1.0f;

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pDevice);

	D3D11_SUBRESOURCE_DATA irData;





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		if (e.type == SDL_QUIT)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	SDL_Event e;

	vbDesc.StructureByteStride = 0;

	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_Delay(1000);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&materials,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderClear(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		NULL,

int main(int, char**)

	ibDesc.MiscFlags = 0;

	SDL_DestroyTexture(tex);

	ConstantMaterial material; //物体の質感



	//ビューポート設定

	XMFLOAT4         ambient;  //環境光(r,g,b)

		else if (e.type == SDL_KEYDOWN)

#include "DirectXManager.h"



	UINT flags = 0;

			exit(1);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	HRESULT              hr;

		return hr;

	m_pImmediateContext = NULL;

	SDL_FreeSurface(suf);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.CPUAccessFlags = 0;

		&attrib,

				WORD index = idx.vertex_index;

	m_pVertexShader = NULL;

	}

};

	for (int i = 0; i < vcount; i++)

		&error,

	//インデックスバッファ作成

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	std::string error;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//テクスチャ読み込み

	D3D11_SUBRESOURCE_DATA irData;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

#endif

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pPixelShader);

	SDL_DestroyTexture(tex);

}



	SAFE_RELEASE(m_pSwapChain);

};



				break;



		flags,





	XMFLOAT4 pos;               //座標(x,y,z)

	D3D11_BUFFER_DESC cbDesc;

	CRect                rect;

		cout << "SDL_INIT_ERROR" << endl;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.Width = rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::attrib_t attrib;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	Release();

		D3D_DRIVER_TYPE_HARDWARE,



	D3D_FEATURE_LEVEL level;

	//インデックスバッファ作成

	scDesc.Windowed = TRUE;

	return hr;







	//Create Index

	m_pDepthStencilView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

#include <iostream>

	}

	tinyobj::ObjReader reader;

	UINT flags = 0;

			}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	WORD* pIList = new WORD[icount];

	{

}

	m_VertexCount = vcount;

	dsDesc.Format = txDesc.Format;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			case SDLK_UP:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pPixelShader);

	irData.pSysMem = &pIList[0];



	m_pInputLayout = NULL;

	}

		if (e.type == SDL_QUIT)

};

	{

	D3D_FEATURE_LEVEL level;

	//ピクセルシェーダー生成

	auto& shapes = reader.GetShapes();



	m_pTexture = NULL;

	SDL_DestroyTexture(tex);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

	SAFE_RELEASE(m_pSampler);

	txDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		delete[] pVList;







	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		D3D11_SDK_VERSION,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;

	m_IndexCount = 0;

	UINT strides = sizeof(Vertex);

				vertex.push_back(vertex_tmp);

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pDevice);

	txDesc.Width = rect.Width();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

};

{

	enum KeyPressSurfaces

			case SDLK_LEFT:

		1,

	{



	cbDesc.StructureByteStride = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferCount = 1;

	return hr;

				vertex.push_back(vertex_tmp);

		{

	}

		return hr;

	for (const auto& shape : shapes)





		}



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

			index_offset += num_vertices;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	enum KeyPressSurfaces

	SDL_DestroyTexture(tex);



	//頂点シェーダー生成



	std::string error;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Event e;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

	m_pSwapChain = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#include <iostream>

	D3D11_BUFFER_DESC cbDesc;

	delete[] pIList;

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_VertexCount = vcount;

	scDesc.BufferCount = 1;

			{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	txDesc.Height = rect.Height();

		{

		}

		&m_pDevice,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



#ifdef _DEBUG

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

struct ConstantMatrixBuffer {



			index_offset += fv;





	{

#endif



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			// Loop over vertices in the face.

	SAFE_RELEASE(m_pSwapChain);

	}

#include <iostream>

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			case SDLK_DOWN:

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t ty =



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





		{



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

void CD3DTest::Render()





	Release();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

struct ConstantLight {

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	UINT offsets = 0;

	if (FAILED(hr))

#include <SDL.h>

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	vbDesc.CPUAccessFlags = 0;

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		m_pImmediateContext->ClearState();

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

struct ConstantLight {

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	std::string error;

	//インデックスバッファ作成

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		&materials,

	//Vertex* pVList = new Vertex[vcount];

		SDL_Delay(1000);

			case SDLK_LEFT:

	irData.pSysMem = &pIList[0];



	scDesc.Windowed = TRUE;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

 * Lesson 1: Hello World!



	if (FAILED(hr))

			{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.eyePos, eye);



	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

				indexlist.push_back(idx.vertex_index);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.MiscFlags = 0;

		&shapes,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

{

		pIList[j] = indexList[j];

	//テクスチャ読み込み

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



};





	for (size_t s = 0; s < shapes.size(); s++)



	vbDesc.MiscFlags = 0;

 */

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		&scDesc,

	cbDesc.CPUAccessFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pIndexBuffer);



			int num_vertices = shape.mesh.num_face_vertices[f];

{

		{

	for (const auto& shape : shapes)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

				vertex.push_back(vertex_tmp);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_Viewport.MaxDepth = 1.0f;

		&scDesc,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_VertexCount = 0;



#include <SDL.h>

	SAFE_RELEASE(m_pPixelShader);

			{



		return hr;

		}

int SEGMENT = 36;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

	tinyobj::ObjReaderConfig reader_config;

#include <SDL.h>

	//頂点シェーダー生成



	D3D11_SAMPLER_DESC smpDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{



#include <iostream>

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	//頂点バッファ作成

	return hr;

	//First we need to start up SDL, and make sure it went ok



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		{



		KEY_PRESS_SURFACE_TOTAL

	txDesc.Height = rect.Height();

			// Loop over vertices in the face.

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	tinyobj::attrib_t attrib;

	scDesc.BufferCount = 1;

	ConstantMatrixBuffer cmb;

		return 1;

	ZeroMemory(&txDesc, sizeof(txDesc));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pTextureView);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_IndexCount = icount;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	txDesc.MiscFlags = 0;

struct ConstantLightBuffer {

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

	}

	ConstantMaterial material; //物体の質感

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

#include <iostream>

	SAFE_RELEASE(m_pTexture);

	dsDesc.Format = txDesc.Format;



 * Lesson 1: Hello World!

			}

	UINT offsets = 0;

				WORD index = idx.vertex_index;

 * Lesson 1: Hello World!



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ConstantMatrixBuffer cmb;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_VertexCount = vcount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	WORD* pIList = new WORD[icount];



		return hr;

{

				break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<WORD> indexList;

	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

	}

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Quit();

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_FreeSurface(bmp);

				// access to vertex

};

	SDL_DestroyTexture(tex);

			}



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}

	if (FAILED(hr))

				WORD index = idx.vertex_index;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

			switch (e.key.keysym.sym)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		}

	for (int j = 0; j < icount; j++)

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_RIGHT:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

#include <iostream>

	ConstantMatrixBuffer cmb;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	txDesc.MiscFlags = 0;

	if (FAILED(hr))

		flags,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	Vertex* pVList = new Vertex[vcount];

	SDL_DestroyTexture(tex);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	// Loop over shapes

#include "DirectXManager.h"

	//テクスチャ読み込み



 */

		return hr;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);











{

		if (!ret)

	}





};



	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pVertexShader = NULL;

	m_IndexCount = icount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			}

}

	if (FAILED(hr))

{

			}



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (!error.empty())

#endif



	dsDesc.Format = txDesc.Format;

/*



}



	m_pInputLayout = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	tinyobj::attrib_t attrib;

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		&m_pDevice,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDepthStencilView);

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pDepthStencilView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	Vertex* pVList = new Vertex[vcount];

		return hr;

	delete[] pVList;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pDepthStencilView);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//頂点バッファ作成

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				WORD index = idx.vertex_index;

}

	//テクスチャ読み込み

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vector<Vertex> vertexlist;

		return hr;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

CD3DTest::CD3DTest()



/*



	SDL_DestroyRenderer(ren);

using std::cout; using std::endl;

	UINT flags = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



struct ConstantMaterial {

		return hr;

{

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	::GetClientRect(hwnd, &rect);

	int     vcount = vertexlist.size();

	return 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	if (!error.empty())

	SDL_DestroyTexture(tex);

{



	for (int i = 0; i < vcount; i++)









	ID3D11Texture2D* pBackBuffer;



	m_Viewport.TopLeftX = 0;

		//User requests quit



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vbDesc.MiscFlags = 0;



		//User requests quit

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	return;

		KEY_PRESS_SURFACE_RIGHT,

	reader_config.mtl_search_path = "./"; // Path to material files

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//深度ステンシルバッファ作成

		return 1;

struct ConstantLightBuffer {

		{

	Release();

	if (FAILED(hr))

#include <iostream>

	m_VertexCount = 0;

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	if (FAILED(hr))

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	// Loop over shapes

		&materials,

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ConstantLight    pntLight; //点光源

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		exit(1);

	// Loop over shapes

	vbDesc.MiscFlags = 0;

	std::string error;



	D3D11_SUBRESOURCE_DATA irData;

	//頂点シェーダー生成



	SDL_DestroyRenderer(ren);

		SDL_RenderPresent(ren);

	txDesc.MipLevels = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.SampleDesc.Count = 1;

struct ConstantMatrixBuffer {

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_Viewport.Width = (FLOAT)rect.Width();

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);







	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (!error.empty())

	{



	std::string imagePath = "hello.bmp";

	m_Viewport.Height = (FLOAT)rect.Height();

	}

		NULL,



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ibDesc.StructureByteStride = 0;

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



}
		//User requests quit

	txDesc.CPUAccessFlags = 0;

				indexlist.push_back(index);



	if (!reader.Warning().empty())

};

	m_Viewport.Height = (FLOAT)rect.Height();

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC cbDesc;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			}

	vrData.SysMemPitch = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	irData.SysMemPitch = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	WORD* pIList = new WORD[icount];



		return hr;

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			{



	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);



	XMFLOAT4X4 view;



{







	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				tinyobj::real_t ty =



	std::string error;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pTexture = NULL;

	XMFLOAT4X4 world;

		return hr;

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{



	scDesc.SampleDesc.Quality = 0;



	SAFE_RELEASE(m_pSampler);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;


