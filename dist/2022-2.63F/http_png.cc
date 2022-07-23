	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		&shapes,



		KEY_PRESS_SURFACE_LEFT,

	}

	Release();

				indexlist.push_back(idx.vertex_index);

			case SDLK_DOWN:

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

#include "DirectXManager.h"

}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	for (int i = 0; i < 3; i++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	delete[] pIList;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

};



			case SDLK_UP:

				tinyobj::real_t ty =

	for (size_t s = 0; s < shapes.size(); s++)

		pVList[i] = vertexlist[i];



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//ビューポート設定

	SDL_FreeSurface(bmp);

	}







	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&scDesc,

			{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

		//User presses a key

	SAFE_RELEASE(m_pDevice);

	}

	ibDesc.StructureByteStride = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	HRESULT              hr;

			index_offset += fv;





	auto& shapes = reader.GetShapes();

	}

			exit(1);

	SAFE_RELEASE(m_pVertexBuffer);

	WORD* pIList = new WORD[icount];

			index_offset += num_vertices;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	XMFLOAT4 attenuate;         //減衰(a,b,c)



	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



				break;

	Release();

	//First we need to start up SDL, and make sure it went ok

		SDL_RenderPresent(ren);

		if (!reader.Error().empty())

{



	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&shapes,

	WORD* pIList = new WORD[icount];

		{



}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t tx =





		D3D_DRIVER_TYPE_HARDWARE,

	m_pSwapChain->Present(0, 0);



void CD3DTest::Render()

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		&materials,

		pLevels,

		size_t index_offset = 0;  // インデントのオフセット

}

				break;

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点レイアウト作成

	if (!error.empty())

#define TINYOBJLOADER_IMPLEMENTATION

			case SDLK_DOWN:



	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_DOWN,

			exit(1);

		KEY_PRESS_SURFACE_LEFT,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

		}



	SDL_DestroyTexture(tex);

	m_Viewport.TopLeftX = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

	cbDesc.StructureByteStride = 0;

	std::string inputfile = "test.obj";

		}

	XMFLOAT4 attenuate;         //減衰(a,b,c)



		{



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}



	m_pLightBuffer = NULL;

		&m_pDevice,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	// Loop over shapes



	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		SDL_Delay(1000);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4         ambient;  //環境光(r,g,b)

		{

};



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;

		return hr;

	float    fov = XMConvertToRadians(20.0f);

			case SDLK_DOWN:

		&m_pImmediateContext);



		pLevels,

	SDL_DestroyRenderer(ren);

#endif

	m_Angle += XMConvertToRadians(1.0f);

		if (!ret)

	D3D_FEATURE_LEVEL level;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_DestroyTexture(tex);

		{

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//Vertex* pVList = new Vertex[vcount];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{



				tinyobj::real_t ty =





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

}

	m_IndexCount = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			exit(1);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		&m_pSwapChain,

		//User requests quit

	D3D11_SUBRESOURCE_DATA vrData;

	WORD   icount = indexList.size();

	cbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}*/

{

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include "DirectXManager.h"

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		SDL_Delay(1000);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

		exit(1);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		&error,





	pBackBuffer->Release();

	if (!reader.Warning().empty())

	::GetClientRect(hwnd, &rect);

	m_pDevice = NULL;



	vrData.pSysMem = &pVList[0];

	/*

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		pLevels,

			}

	m_pImmediateContext = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				// access to vertex

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	std::string inputfile = "test.obj";

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

		&level,

	XMFLOAT4X4 world;

	bool ret = tinyobj::LoadObj(

	ID3D11Texture2D* pBackBuffer;

	auto& shapes = reader.GetShapes();

	ibDesc.ByteWidth = sizeof(WORD) * icount;



}

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};



		size_t index_offset = 0;  // インデントのオフセット

		&error,

		&error,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_Viewport.MaxDepth = 1.0f;

	int     vcount = vertexlist.size();

	}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	LoadObj(vertexlist, indexList);





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		else if (e.type == SDL_KEYDOWN)

		D3D11_SDK_VERSION,

{



		delete[] pVList;

	SAFE_RELEASE(m_pVertexShader);



	while (SDL_PollEvent(&e) != 0)

	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			default:

}

			}

		&m_pDevice,

		return hr;

	m_pSwapChain = NULL;

CD3DTest::CD3DTest()

	{



struct ConstantMaterial {



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				break;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	std::string imagePath = "hello.bmp";

		}

	cbDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				WORD index = idx.vertex_index;

	SDL_FreeSurface(suf);

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_UP,



	{

	SDL_Event e;

};

	SDL_Event e;



	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_DEFAULT,

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	delete[] pVList;

	{



	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	/*

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pTexture);

	D3D11_BUFFER_DESC ibDesc;

	}



	for (int i = 0; i < vcount; i++)

	//ピクセルシェーダー生成



	m_Viewport.TopLeftX = 0;

	cbDesc.StructureByteStride = 0;

		pVList[i] = vertexlist[i];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

	LoadObj(vertexlist, indexList);

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pMatrixBuffer);

			break;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pSampler);



	ibDesc.StructureByteStride = 0;

		if (e.type == SDL_QUIT)



	LoadObj(vertexlist, indexList);



				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	for (const auto& shape : shapes)

	Release();

	D3D11_SUBRESOURCE_DATA vrData;

	std::string inputfile = "test.obj";



struct ConstantMatrixBuffer {



	Vertex* pVList = new Vertex[vcount];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	std::string inputfile = "test.obj";

	//定数バッファ作成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	UINT strides = sizeof(Vertex);



				// access to vertex

}



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		&m_pImmediateContext);

		if (e.type == SDL_QUIT)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext = NULL;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		if (!ret)

				break;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pSampler = NULL;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D_FEATURE_LEVEL level;



}

	if (FAILED(hr))

	vector<WORD> indexList;

	tinyobj::ObjReader reader;

	cbDesc.CPUAccessFlags = 0;

	m_pTexture = NULL;



		return hr;

};



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pInputLayout = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		else if (e.type == SDL_KEYDOWN)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		}

#include <SDL.h>

	SAFE_RELEASE(m_pTexture);

				indexlist.push_back(idx.vertex_index);

	auto& attrib = reader.GetAttrib();

	m_pTexture = NULL;

		return hr;

	auto& materials = reader.GetMaterials();

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



#endif

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pImmediateContext);

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	return hr;

	for (const auto& shape : shapes)

	}

			default:

				// access to vertex

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



		KEY_PRESS_SURFACE_TOTAL



			index_offset += num_vertices;

	txDesc.Width = rect.Width();

	std::string inputfile = "test.obj";

	SDL_DestroyRenderer(ren);

	reader_config.mtl_search_path = "./"; // Path to material files



		{

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pDepthStencilView = NULL;

	scDesc.BufferCount = 1;

	cbDesc.MiscFlags = 0;

		&m_pDevice,

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_DestroyRenderer(ren);



	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		}

	return 0;

	SDL_Event e;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	irData.SysMemPitch = 0;



	{



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				break;

	m_pSwapChain->Present(0, 0);



int SEGMENT = 36;

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pMatrixBuffer);

int main(int, char**)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



		return hr;

	float    farZ = 100.0f;

	if (FAILED(hr))

using std::cout; using std::endl;

		&m_pSwapChain,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	HRESULT              hr;

	}

	std::string inputfile = "test.obj";

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_Delay(1000);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	return hr;



	pBackBuffer->Release();

	// Loop over shapes



	{



		delete[] pVList;

	//深度ステンシルバッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//First we need to start up SDL, and make sure it went ok

	D3D11_TEXTURE2D_DESC txDesc;

#include "DirectXManager.h"



	cbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.Width = rect.Width();

	if (!reader.ParseFromFile(inputfile, reader_config))

struct ConstantMaterial {



	m_pDepthStencilTexture = NULL;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 pos;               //座標(x,y,z)

	vrData.SysMemPitch = 0;

	vrData.pSysMem = &pVList[0];

	//Create Index





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		delete[] pIList;

	//Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			}

	if (!reader.Warning().empty())

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	auto& shapes = reader.GetShapes();

	XMFLOAT4 specular;          //反射(r,g,b)





	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))



		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//vector<WORD> index_t;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		pIList[j] = indexList[j];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_DestroyRenderer(ren);

	auto& attrib = reader.GetAttrib();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	dsDesc.Texture2D.MipSlice = 0;

int main(int, char**)

	::ZeroMemory(&scDesc, sizeof(scDesc));



	scDesc.Windowed = TRUE;

	scDesc.OutputWindow = hwnd;

	SDL_Quit();

	LoadObj(vertexlist, indexList);

				indexlist.push_back(index);



	m_VertexCount = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



int main(int, char**)

	scDesc.SampleDesc.Count = 1;



			{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.StructureByteStride = 0;

/*

	{



	int     vcount = vertexlist.size();

int main(int, char**)

			default:



			//Select surfaces based on key press

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		cout << "SDL_INIT_ERROR" << endl;

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

			exit(1);

}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_Delay(1000);

		size_t index_offset = 0;

			}



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4X4 view;

			break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.MiscFlags = 0;

	CRect                rect;



	float    farZ = 100.0f;

	for (int i = 0; i < vcount; i++)

	m_pInputLayout = NULL;

	txDesc.SampleDesc.Count = 1;



	}

	tinyobj::attrib_t attrib;



		SDL_RenderCopy(ren, tex, NULL, NULL);

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		SDL_RenderPresent(ren);



{

		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantMatrixBuffer cmb;

	auto& shapes = reader.GetShapes();

	}*/

	{

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		&shapes,



		SDL_RenderCopy(ren, tex, NULL, NULL);

		&error,

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::real_t tx =

	{



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL level;

	delete[] pIList;

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&m_pDevice,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



				// access to vertex

	std::string error;

	ID3D11Texture2D* pBackBuffer;

	//インデックスバッファ作成

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		flags,

	SAFE_RELEASE(m_pPixelShader);





	int     vcount = vertexlist.size();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_RenderClear(ren);

	//ピクセルシェーダー生成

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//インデックスバッファ作成

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				WORD index = idx.vertex_index;

}
	return 0;



	ConstantLight    pntLight; //点光源



	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	ConstantLightBuffer clb;

		//User presses a key

	delete[] pVList;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <iostream>



	txDesc.MiscFlags = 0;



	//Create Index

				break;

	XMStoreFloat4(&clb.eyePos, eye);

	//テクスチャ読み込み

	SAFE_RELEASE(m_pDevice);

		}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	::GetClientRect(hwnd, &rect);

{



		return hr;

	cbDesc.MiscFlags = 0;

	LoadObj(vertexlist, indexList);

	txDesc.CPUAccessFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			}

		return hr;

		if (e.type == SDL_QUIT)

	SDL_FreeSurface(bmp);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

			index_offset += num_vertices;







		&m_pSwapChain,





		if (e.type == SDL_QUIT)

		&m_pImmediateContext);

	{



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Texture2D.MipSlice = 0;

	pBackBuffer->Release();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (!reader.ParseFromFile(inputfile, reader_config))





	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	while (SDL_PollEvent(&e) != 0)

			exit(1);

	while (SDL_PollEvent(&e) != 0)

	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	return 0;

#ifdef _DEBUG

	SAFE_RELEASE(m_pInputLayout);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





		KEY_PRESS_SURFACE_DOWN,

	}

			{

int SEGMENT = 36;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		exit(1);

				tinyobj::real_t ty =

};

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	SAFE_RELEASE(m_pSwapChain);



		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		size_t index_offset = 0;  // インデントのオフセット

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

};



	auto& materials = reader.GetMaterials();

	SDL_DestroyWindow(win);

	WORD* pIList = new WORD[icount];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_IndexCount = 0;



	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	WORD* pIList = new WORD[icount];

	m_pSwapChain->Present(0, 0);

	scDesc.SampleDesc.Quality = 0;

}

	ID3D11Texture2D* pBackBuffer;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	return;

				tinyobj::real_t tx =

	//頂点バッファ作成

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	{

	//Clean up our objects and quit

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_VertexCount = 0;

	if (FAILED(hr))

				break;

		return hr;

	cbDesc.StructureByteStride = 0;

	m_pSwapChain->Present(0, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);

	m_Viewport.MaxDepth = 1.0f;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

};

	SDL_DestroyRenderer(ren);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t ty =

	txDesc.SampleDesc.Count = 1;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDepthStencilView);



}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (!reader.Warning().empty())

		&m_pDevice,

	return;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	auto& shapes = reader.GetShapes();

	m_pVertexShader = NULL;

	m_pDepthStencilView = NULL;

		}

	XMFLOAT4X4 projection;

	vbDesc.MiscFlags = 0;

	Release();

	WORD* pIList = new WORD[icount];

	m_IndexCount = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

	return;

	m_pDepthStencilView = NULL;

	cbDesc.StructureByteStride = 0;

	return 0;

	if (FAILED(hr))

	//インデックスバッファ作成

	if (FAILED(hr))

	//ピクセルシェーダー生成

	m_IndexCount = icount;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))

	{



		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4X4 view;

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

struct ConstantLightBuffer {



	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))



	vrData.SysMemSlicePitch = 0;

	bool ret = tinyobj::LoadObj(

		return hr;

	for (int i = 0; i < 3; i++)

	//ビューポート設定

		SDL_RenderCopy(ren, tex, NULL, NULL);

	}



};

		if (!ret)

		KEY_PRESS_SURFACE_DOWN,

	ConstantMatrixBuffer cmb;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

HRESULT CD3DTest::Create(HWND hwnd)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		exit(1);

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pSwapChain);

	vrData.pSysMem = &pVList[0];



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



				break;

	if (FAILED(hr))



	m_IndexCount = icount;

				break;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	};



{



/*

		SDL_Delay(1000);

}

	irData.SysMemPitch = 0;

	}

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

}

	txDesc.MipLevels = 1;

	vrData.SysMemPitch = 0;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pInputLayout);

	tinyobj::attrib_t attrib;

};

#include "DirectXManager.h"

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (!error.empty())

	vector<Vertex> vertexlist;

		return hr;



		m_pImmediateContext->ClearState();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vbDesc.StructureByteStride = 0;



		flags,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&m_pDevice,

	CRect                rect;

	SAFE_RELEASE(m_pTextureView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			index_offset += num_vertices;





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		R"(cube.obj)");

	//Key press surfaces constants

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_BUFFER_DESC cbDesc;

{





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		&level,



	vrData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_TOTAL



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//頂点バッファ作成





		}



	{

 */

	SAFE_RELEASE(m_pMatrixBuffer);

		KEY_PRESS_SURFACE_RIGHT,

				vertex.push_back(vertex_tmp);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}



int main(int, char**)

		{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	txDesc.SampleDesc.Count = 1;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pSwapChain->Present(0, 0);

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t tx =

	D3D11_TEXTURE2D_DESC txDesc;

	return 0;

	ConstantMaterial material; //物体の質感

#include <SDL.h>



	//Key press surfaces constants

		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4X4 projection;

		size_t index_offset = 0;  // インデントのオフセット

}

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderCopy(ren, tex, NULL, NULL);

#include <SDL.h>

	vector<WORD> indexList;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		D3D11_SDK_VERSION,

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pTextureView);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}





	{

				break;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

 * Lesson 1: Hello World!

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_RIGHT,

		return hr;

	}

	m_pSampler = NULL;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			}



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

/*

	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



#include <SDL.h>



		}

		return hr;

	ibDesc.MiscFlags = 0;

	vbDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		{

			break;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			}

			break;

	SDL_Quit();



	m_pLightBuffer = NULL;

			case SDLK_DOWN:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{



		KEY_PRESS_SURFACE_DOWN,



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

 * Lesson 1: Hello World!

	//テクスチャ読み込み



	//vector<Vertex> vertex_t;



	std::string inputfile = "test.obj";

{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}



		}

		else if (e.type == SDL_KEYDOWN)

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_DOWN,

	D3D11_BUFFER_DESC vbDesc;





 * Lesson 1: Hello World!

	m_Viewport.TopLeftY = 0;

	D3D11_BUFFER_DESC cbDesc;



	ibDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		return hr;



	}

#include <SDL.h>

			case SDLK_RIGHT:

			}

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	reader_config.mtl_search_path = "./"; // Path to material files

		{

};

struct ConstantLight {

			switch (e.key.keysym.sym)

		return hr;

	SDL_DestroyWindow(win);

{

	{

	cbDesc.CPUAccessFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&scDesc,

	delete[] pIList;



		&level,

	return 0;





#include <iostream>



int main(int, char**)

			//Select surfaces based on key press

	ibDesc.CPUAccessFlags = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pDepthStencilView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	ibDesc.CPUAccessFlags = 0;

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

};

	SDL_FreeSurface(suf);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	std::string inputfile = "test.obj";

	delete[] pVList;

		&error,

#ifdef _DEBUG

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.MiscFlags = 0;



	ID3D11Texture2D* pBackBuffer;

			switch (e.key.keysym.sym)

	SDL_DestroyTexture(tex);

 * Lesson 1: Hello World!

		}

	SAFE_RELEASE(m_pTextureView);

	return 0;

	m_Viewport.TopLeftX = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

	dsDesc.Format = txDesc.Format;



	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			int num_vertices = shape.mesh.num_face_vertices[f];

}

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	//First we need to start up SDL, and make sure it went ok

	ZeroMemory(&txDesc, sizeof(txDesc));

		&attrib,

				WORD index = idx.vertex_index;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			case SDLK_LEFT:

	{

#include "DirectXManager.h"



	m_pDepthStencilTexture = NULL;

	txDesc.SampleDesc.Quality = 0;

	vrData.SysMemPitch = 0;

		&attrib,

using std::cout; using std::endl;

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

				break;

	//頂点バッファ作成

	//インデックスバッファ作成





	dsDesc.Format = txDesc.Format;

		&materials,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	SAFE_RELEASE(m_pTextureView);

				break;

#ifdef _DEBUG

		}

	std::vector<tinyobj::material_t> materials;

	}

		return hr;

	m_pDepthStencilView = NULL;





				vertex.push_back(vertex_tmp);

	D3D11_BUFFER_DESC cbDesc;



	//ビューポート設定

		return hr;

		return hr;

	m_Angle += XMConvertToRadians(1.0f);

		return hr;

	//ビューポート設定

		&m_pImmediateContext);

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.SampleDesc.Count = 1;

	//vector<WORD> index_t;

	ID3D11Texture2D* pBackBuffer;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	}

}

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

}

}

	}

	vrData.SysMemPitch = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	SDL_DestroyWindow(win);

	D3D11_TEXTURE2D_DESC txDesc;

		}



};

			case SDLK_UP:

		KEY_PRESS_SURFACE_UP,

	//頂点レイアウト作成



		if (!ret)

		}

	if (!error.empty())

	m_pIndexBuffer = NULL;

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	D3D11_SAMPLER_DESC smpDesc;

struct ConstantMaterial {



				indexlist.push_back(idx.vertex_index);

	for (int j = 0; j < icount; j++)

	float    farZ = 100.0f;

	{

	{

	scDesc.SampleDesc.Quality = 0;

	SDL_Quit();

			exit(1);

using std::cout; using std::endl;



	SDL_DestroyRenderer(ren);

	LoadObj(vertexlist, indexList);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			index_offset += num_vertices;

		//User requests quit

	SAFE_RELEASE(m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.ByteWidth = sizeof(WORD) * icount;

#include "DirectXManager.h"

	SAFE_RELEASE(m_pSampler);

			}

	SAFE_RELEASE(m_pSwapChain);

	irData.pSysMem = &pIList[0];



	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.MinDepth = 0.0f;

#include <iostream>

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	m_pVertexBuffer = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	//インデックスバッファ作成



		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::vector<tinyobj::shape_t> shapes;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	CRect                rect;

	SAFE_RELEASE(m_pDepthStencilTexture);

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.CPUAccessFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Angle += XMConvertToRadians(1.0f);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	return 0;

	m_pSwapChain->Present(0, 0);

	{

		flags,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



}

		KEY_PRESS_SURFACE_DEFAULT,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (m_pImmediateContext)



			index_offset += num_vertices;

			}

	SAFE_RELEASE(m_pRenderTargetView);



	m_pImmediateContext = NULL;

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)



	SDL_DestroyWindow(win);

};

	LoadObj(vertexlist, indexList);

	XMFLOAT4         eyePos;   //視点座標

	SDL_Quit();

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pDevice);

	m_Viewport.TopLeftX = 0;



	txDesc.MipLevels = 1;

	SDL_Quit();

		size_t index_offset = 0;  // インデントのオフセット

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	dsDesc.Format = txDesc.Format;

		KEY_PRESS_SURFACE_DOWN,

	txDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

	//インデックスバッファ作成

	//ビューポート設定

};



	ConstantMatrixBuffer cmb;

				// access to vertex

	UINT strides = sizeof(Vertex);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.CPUAccessFlags = 0;

			index_offset += fv;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			case SDLK_DOWN:

	tinyobj::ObjReader reader;

	if (FAILED(hr))



		{

CD3DTest::CD3DTest()

				WORD index = idx.vertex_index;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float    fov = XMConvertToRadians(20.0f);

	std::vector<tinyobj::shape_t> shapes;

{

		size_t index_offset = 0;

		&attrib,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{



	CRect                rect;

			}

	vbDesc.MiscFlags = 0;

		delete[] pIList;



		return hr;

				WORD index = idx.vertex_index;

	m_Viewport.MinDepth = 0.0f;

	m_Viewport.TopLeftY = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			}

	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Viewport.TopLeftY = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

	//テクスチャ読み込み

	SAFE_RELEASE(m_pMatrixBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	vector<Vertex> vertexlist;

	int     vcount = vertexlist.size();



				tinyobj::real_t tx =

		KEY_PRESS_SURFACE_TOTAL

	//ビューポート設定



	for (int i = 0; i < vcount; i++)

			// Loop over vertices in the face.

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}

		flags,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Quit();

		}

	D3D11_BUFFER_DESC ibDesc;

		{



}
	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_DestroyTexture(tex);

		return hr;

		&m_pDevice,

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			case SDLK_LEFT:



	//深度ステンシルバッファ作成

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	D3D11_TEXTURE2D_DESC txDesc;



struct ConstantLightBuffer {

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

		}

	scDesc.SampleDesc.Count = 1;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

#include <SDL.h>

		NULL,

	txDesc.SampleDesc.Quality = 0;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	SDL_FreeSurface(bmp);

				vertex.push_back(vertex_tmp);

	}



	vrData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;



	pBackBuffer->Release();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	scDesc.Windowed = TRUE;

void CD3DTest::Release()

	m_Viewport.TopLeftY = 0;



	m_pRenderTargetView = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4X4 world;

	}

	//定数バッファ作成

		return hr;

	{



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_Delay(1000);

		}



	WORD   icount = indexList.size();

{

		SDL_Delay(1000);

		SDL_Delay(1000);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				break;



		&m_pSwapChain,



	if (FAILED(hr))



	::ZeroMemory(&scDesc, sizeof(scDesc));

{

	ibDesc.MiscFlags = 0;



				// access to vertex

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		{

	SAFE_RELEASE(m_pVertexBuffer);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		if (!ret)

		SDL_RenderClear(ren);

	m_pPixelShader = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	WORD* pIList = new WORD[icount];

	SDL_DestroyTexture(tex);

	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantLightBuffer {



		//User presses a key

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	WORD* pIList = new WORD[icount];

#ifdef _DEBUG









	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pDevice);

		KEY_PRESS_SURFACE_TOTAL



struct ConstantMatrixBuffer {



	cbDesc.CPUAccessFlags = 0;

	m_Viewport.MaxDepth = 1.0f;





	txDesc.SampleDesc.Quality = 0;

	{



};



	if (FAILED(hr))

		{

	D3D11_SUBRESOURCE_DATA vrData;



	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);





	//インデックスバッファ作成

	m_Viewport.Height = (FLOAT)rect.Height();

				break;

void CD3DTest::Release()

	{



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		pIList[j] = indexList[j];



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	auto& attrib = reader.GetAttrib();





				WORD index = idx.vertex_index;

	if (FAILED(hr))

	};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pInputLayout = NULL;



	XMFLOAT4 specular;          //反射(r,g,b)



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		if (e.type == SDL_QUIT)

			{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	return 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	std::string inputfile = "test.obj";



	enum KeyPressSurfaces

		&level,

	if (FAILED(hr))

		if (e.type == SDL_QUIT)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	for (int i = 0; i < 3; i++)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pIndexBuffer = NULL;

	txDesc.ArraySize = 1;

	D3D11_SUBRESOURCE_DATA irData;

		cout << "SDL_INIT_ERROR" << endl;



		SDL_RenderClear(ren);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		pVList[i] = vertexlist[i];

	m_IndexCount = icount;

				indexlist.push_back(index);

			}

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferCount = 1;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	for (int j = 0; j < icount; j++)

	//vector<WORD> index_t;

/*

	//Key press surfaces constants

		1,

	tinyobj::attrib_t attrib;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		&level,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		m_pImmediateContext->ClearState();

	vector<Vertex> vertexlist;





	//頂点シェーダー生成

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vector<Vertex> vertexlist;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.CPUAccessFlags = 0;

			}



	//深度ステンシルバッファ作成

	scDesc.Windowed = TRUE;

				WORD index = idx.vertex_index;

#include "DirectXManager.h"

};

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyWindow(win);

	m_pMatrixBuffer = NULL;

	m_pMatrixBuffer = NULL;

		return hr;

			{

	//ピクセルシェーダー生成

	D3D11_BUFFER_DESC ibDesc;



		delete[] pIList;



struct ConstantLight {



	tinyobj::ObjReader reader;

	D3D11_BUFFER_DESC cbDesc;

#include <SDL.h>







	m_pVertexBuffer = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				indexlist.push_back(idx.vertex_index);

	}





	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		{

		KEY_PRESS_SURFACE_DEFAULT,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}



	//頂点シェーダー生成

	SDL_FreeSurface(bmp);

	//ピクセルシェーダー生成





		{

				WORD index = idx.vertex_index;

			exit(1);





	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.eyePos, eye);

	//Vertex* pVList = new Vertex[vcount];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));



};

	{

	m_pDevice = NULL;

		return hr;



		{

	{

	D3D11_TEXTURE2D_DESC txDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SDL_Quit();



	SDL_FreeSurface(bmp);

	if (FAILED(hr))







struct ConstantMatrixBuffer {

HRESULT CD3DTest::Create(HWND hwnd)



	m_pSwapChain->Present(0, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	float    nearZ = 0.1f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

int SEGMENT = 36;

	m_Viewport.TopLeftX = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::vector<tinyobj::material_t> materials;

		pVList[i] = vertexlist[i];

	SDL_DestroyTexture(tex);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.ArraySize = 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		{

	dsDesc.Format = txDesc.Format;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		pVList[i] = vertexlist[i];

	if (FAILED(hr))



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				break;

	Release();

	if (FAILED(hr))

	{

	dsDesc.Texture2D.MipSlice = 0;

	}*/

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	{

			}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_FreeSurface(suf);

		KEY_PRESS_SURFACE_RIGHT,

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{





	while (SDL_PollEvent(&e) != 0)



	SAFE_RELEASE(m_pTexture);

	dsDesc.Format = txDesc.Format;

		{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}

		if (!ret)

	ConstantLight    pntLight; //点光源

	auto& shapes = reader.GetShapes();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	SDL_FreeSurface(bmp);



	irData.SysMemSlicePitch = 0;

		&m_pSwapChain,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				vertex.push_back(vertex_tmp);



		&materials,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pDepthStencilView = NULL;

		if (!ret)



	cbDesc.StructureByteStride = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLightBuffer clb;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				tinyobj::real_t ty =

		}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.MiscFlags = 0;

	}



		SDL_RenderClear(ren);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			index_offset += fv;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//頂点シェーダー生成

		if (!reader.Error().empty())



	float    farZ = 100.0f;

	//vector<WORD> index_t;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

/*

	//定数バッファ作成

}

/*



#ifdef _DEBUG

	vector<WORD> indexList;

	{

		}

				WORD index = idx.vertex_index;

	if (!reader.ParseFromFile(inputfile, reader_config))



		SDL_RenderCopy(ren, tex, NULL, NULL);

	reader_config.mtl_search_path = "./"; // Path to material files



		pLevels,

	m_pVertexShader = NULL;



	//Create Index

		//User requests quit



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_DestroyWindow(win);

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

void CD3DTest::Release()

				// access to vertex

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		cout << "SDL_INIT_ERROR" << endl;

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		{

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::vector<tinyobj::shape_t> shapes;



#include <SDL.h>



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pDepthStencilView = NULL;

	std::string inputfile = "test.obj";

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pVertexShader = NULL;

	SDL_Quit();

			// Loop over vertices in the face.

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

using std::cout; using std::endl;

		SDL_RenderClear(ren);

};



{

	m_pMatrixBuffer = NULL;





	m_pMatrixBuffer = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	dsDesc.Format = txDesc.Format;

	SDL_FreeSurface(suf);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pVertexBuffer);

	m_VertexCount = 0;


