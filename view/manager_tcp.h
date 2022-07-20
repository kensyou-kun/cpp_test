



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		1,

	m_IndexCount = icount;

};

	//First we need to start up SDL, and make sure it went ok

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			index_offset += fv;

#ifdef _DEBUG

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_DestroyTexture(tex);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	XMFLOAT4X4 world;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	bool ret = tinyobj::LoadObj(

 * Lesson 1: Hello World!

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



				indexlist.push_back(idx.vertex_index);

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	ConstantLight    pntLight; //点光源



	SAFE_RELEASE(m_pLightBuffer);





};

	//vector<Vertex> vertex_t;

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		//User requests quit

int main(int, char**)

				break;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			exit(1);

				vertex.push_back(vertex_tmp);

	D3D11_SAMPLER_DESC smpDesc;



	{

			}



	}

	//テクスチャ読み込み



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return 1;

	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

		if (!reader.Error().empty())

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	{

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	XMFLOAT4X4 projection;



{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

/*



	m_Viewport.Width = (FLOAT)rect.Width();

	}

				break;

	SAFE_RELEASE(m_pPixelShader);

		&attrib,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				vertex.push_back(vertex_tmp);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	if (!reader.Warning().empty())



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//頂点シェーダー生成

	{

	XMFLOAT4 ambient;           //環境(r,g,b)

	//頂点シェーダー生成

		return hr;





	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		NULL,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	::GetClientRect(hwnd, &rect);



}

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

		return 1;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				indexlist.push_back(idx.vertex_index);

				indexlist.push_back(idx.vertex_index);

		KEY_PRESS_SURFACE_DOWN,



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





				vertex.push_back(vertex_tmp);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		D3D11_SDK_VERSION,

	m_VertexCount = 0;

	// Loop over shapes

using std::cout; using std::endl;



	SAFE_RELEASE(m_pImmediateContext);

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





		{

#include "DirectXManager.h"



	//テクスチャ読み込み

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			for (size_t v = 0; v < fv; v++)

		SDL_Delay(1000);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	m_pSampler = NULL;



				break;



	}



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//Create Index

	std::string imagePath = "hello.bmp";

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.StructureByteStride = 0;

	txDesc.SampleDesc.Quality = 0;





	//ビューポート設定

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pImmediateContext);



	SAFE_RELEASE(m_pImmediateContext);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Event e;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		pIList[j] = indexList[j];

{



		return hr;

	//定数バッファ作成

	irData.pSysMem = &pIList[0];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pTextureView = NULL;

			}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	// Loop over shapes

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	auto& shapes = reader.GetShapes();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pInputLayout = NULL;

	if (FAILED(hr))

}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		else if (e.type == SDL_KEYDOWN)

		pLevels,

	UINT flags = 0;

}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	D3D11_BUFFER_DESC vbDesc;

		return hr;







	LoadObj(vertexlist, indexList);

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftY = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	};



{

		&level,

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		if (!reader.Error().empty())

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				break;



	m_Viewport.MinDepth = 0.0f;

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pLightBuffer);

				break;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_DEFAULT,

	UINT strides = sizeof(Vertex);

	return 0;

	{



#include "DirectXManager.h"

	}

				tinyobj::real_t tx =

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (!reader.Warning().empty())

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

		{

	{

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		size_t index_offset = 0;  // インデントのオフセット



	::GetClientRect(hwnd, &rect);



	SDL_Quit();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

	D3D11_BUFFER_DESC vbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			exit(1);

	m_pSwapChain->Present(0, 0);



		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点シェーダー生成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//ビューポート設定

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		}



		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;



	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.Windowed = TRUE;

	ibDesc.StructureByteStride = 0;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&materials,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	Release();

	m_pSwapChain->Present(0, 0);

			{



	ibDesc.MiscFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.MinDepth = 0.0f;

		}

	D3D11_SUBRESOURCE_DATA irData;

		return 1;

		return hr;





				break;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			index_offset += fv;

	for (int i = 0; i < vcount; i++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_DestroyWindow(win);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

	ID3D11Texture2D* pBackBuffer;

	std::string imagePath = "hello.bmp";

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	irData.pSysMem = &pIList[0];

		return hr;

	cbDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}*/

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		KEY_PRESS_SURFACE_RIGHT,

	if (FAILED(hr))

			case SDLK_LEFT:

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pTexture);

	}

	XMStoreFloat4(&clb.eyePos, eye);



		&materials,

	txDesc.MiscFlags = 0;

			default:

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

		SDL_RenderPresent(ren);

	int     vcount = vertexlist.size();



	m_Viewport.Height = (FLOAT)rect.Height();

	D3D11_BUFFER_DESC ibDesc;

	for (int i = 0; i < vcount; i++)

	vrData.SysMemSlicePitch = 0;

}

	{

	WORD   icount = indexList.size();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				vertex.push_back(vertex_tmp);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			{

	ConstantLight    pntLight; //点光源

#include "DirectXManager.h"

				WORD index = idx.vertex_index;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#ifdef _DEBUG

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4X4 view;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





int main(int, char**)

	m_pInputLayout = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_IndexCount = icount;

}

		flags,

	}

		}

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		delete[] pIList;

	m_pSwapChain = NULL;

	ConstantLightBuffer clb;

	auto& materials = reader.GetMaterials();



	m_Viewport.Height = (FLOAT)rect.Height();



	cbDesc.MiscFlags = 0;

	ConstantLight    pntLight; //点光源

	ibDesc.MiscFlags = 0;

	txDesc.MipLevels = 1;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#include <iostream>

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	//Clean up our objects and quit

	XMFLOAT4         ambient;  //環境光(r,g,b)

	}*/

	pBackBuffer->Release();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pInputLayout);





		&materials,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4X4 world;



	SDL_DestroyWindow(win);

		return hr;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	dsDesc.Format = txDesc.Format;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	XMStoreFloat4(&clb.eyePos, eye);

	ID3D11Texture2D* pBackBuffer;

struct ConstantLight {



	int     vcount = vertexlist.size();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	ibDesc.MiscFlags = 0;

	SDL_Quit();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	SDL_Quit();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_Quit();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	tinyobj::ObjReaderConfig reader_config;





	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	/*

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			exit(1);

};

		{

	ZeroMemory(&txDesc, sizeof(txDesc));

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))





	//頂点シェーダー生成

		exit(1);

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		}

	std::string imagePath = "hello.bmp";

				// access to vertex

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (const auto& shape : shapes)

	irData.SysMemSlicePitch = 0;

				break;





	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.BufferCount = 1;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	if (!reader.ParseFromFile(inputfile, reader_config))

	}

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_BUFFER_DESC ibDesc;

 * Lesson 1: Hello World!



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pIndexBuffer = NULL;

	scDesc.SampleDesc.Quality = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//First we need to start up SDL, and make sure it went ok



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	auto& shapes = reader.GetShapes();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	UINT offsets = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

		if (!reader.Error().empty())

#include "DirectXManager.h"

	Release();

	//ピクセルシェーダー生成

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		{





	vbDesc.CPUAccessFlags = 0;

			default:

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				break;

		{

	m_Viewport.Height = (FLOAT)rect.Height();





}

		&scDesc,

				break;

		}

		}

	D3D11_BUFFER_DESC cbDesc;



			}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pInputLayout);

	int     vcount = vertexlist.size();



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	Release();

	m_pVertexBuffer = NULL;



	m_Viewport.Width = (FLOAT)rect.Width();



	SAFE_RELEASE(m_pRenderTargetView);

	m_Angle += XMConvertToRadians(1.0f);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_IndexCount = icount;

				vertex.push_back(vertex_tmp);





	txDesc.ArraySize = 1;

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (!error.empty())

	SDL_Quit();



	UINT flags = 0;

		SDL_RenderPresent(ren);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				WORD index = idx.vertex_index;

	};

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pSampler);



	m_pTextureView = NULL;

	auto& shapes = reader.GetShapes();

		//User requests quit







	flags |= D3D11_CREATE_DEVICE_DEBUG;

};

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Quit();

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pRenderTargetView = NULL;



	SDL_Quit();

void CD3DTest::Render()

		// Loop over faces(polygon)



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			}

	auto& attrib = reader.GetAttrib();

			// Loop over vertices in the face.





				indexlist.push_back(idx.vertex_index);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	vrData.pSysMem = &pVList[0];





	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

struct ConstantLightBuffer {

};

	DXGI_SWAP_CHAIN_DESC scDesc;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			for (size_t v = 0; v < num_vertices; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	LoadObj(vertexlist, indexList);

		cout << "SDL_INIT_ERROR" << endl;

	irData.pSysMem = &pIList[0];





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_SUBRESOURCE_DATA vrData;

		D3D_DRIVER_TYPE_HARDWARE,

				break;

		&m_pSwapChain,

	}

	SAFE_RELEASE(m_pMatrixBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pLightBuffer);

		&error,

			index_offset += num_vertices;

#include <iostream>

	auto& shapes = reader.GetShapes();

		return hr;

		return hr;

{

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pMatrixBuffer = NULL;

{

	SDL_DestroyRenderer(ren);

	while (SDL_PollEvent(&e) != 0)

	LoadObj(vertexlist, indexList);

	//定数バッファ作成



};

}





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.MiscFlags = 0;

		{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_Viewport.TopLeftY = 0;

			case SDLK_DOWN:

		SDL_RenderClear(ren);

{

}



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pDepthStencilView);

{

	//vector<WORD> index_t;

	XMFLOAT4X4 world;

	auto& attrib = reader.GetAttrib();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pInputLayout = NULL;

	//テクスチャ読み込み



	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.SampleDesc.Quality = 0;

	m_pLightBuffer = NULL;





}

	vector<Vertex> vertexlist;

			case SDLK_RIGHT:





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::string inputfile = "test.obj";

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			exit(1);



		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			case SDLK_DOWN:

struct ConstantMatrixBuffer {

	SDL_DestroyWindow(win);

				// access to vertex

	int     vcount = vertexlist.size();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	std::vector<tinyobj::material_t> materials;

	txDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	WORD   icount = indexList.size();

		SDL_Delay(1000);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	WORD* pIList = new WORD[icount];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

struct ConstantLightBuffer {

		pVList[i] = vertexlist[i];



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//Key press surfaces constants

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

		KEY_PRESS_SURFACE_UP,

		D3D_DRIVER_TYPE_HARDWARE,

{

	m_pDepthStencilView = NULL;

	m_Angle += XMConvertToRadians(1.0f);



/*

				indexlist.push_back(idx.vertex_index);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	vbDesc.CPUAccessFlags = 0;



	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			{



	std::string inputfile = "test.obj";

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	return 0;

	scDesc.BufferCount = 1;

	vector<Vertex> vertexlist;



		return hr;



{

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



CD3DTest::CD3DTest()

	Release();

using std::cout; using std::endl;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		NULL,



				break;



	}

	}*/

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_RenderClear(ren);



	std::string imagePath = "hello.bmp";

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pVertexBuffer);

	std::vector<tinyobj::material_t> materials;

		&m_pSwapChain,

				break;

	vector<Vertex> vertexlist;

{

	SAFE_RELEASE(m_pTextureView);

	}

		KEY_PRESS_SURFACE_RIGHT,



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pIndexBuffer = NULL;

	WORD   icount = indexList.size();

};

	SAFE_RELEASE(m_pInputLayout);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{



		exit(1);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			//Select surfaces based on key press

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4X4 projection;

	ibDesc.CPUAccessFlags = 0;

		//User presses a key

		if (e.type == SDL_QUIT)

	//インデックスバッファ作成

	SAFE_RELEASE(m_pLightBuffer);

	m_pDepthStencilTexture = NULL;

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

	Release();

	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.MiscFlags = 0;

{

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pInputLayout);

	SDL_Quit();

	UINT offsets = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	Release();







	//Create Index

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			for (size_t v = 0; v < num_vertices; v++)

	// Loop over shapes

};

		if (e.type == SDL_QUIT)

				break;

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

		delete[] pVList;

	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

			index_offset += fv;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	vrData.pSysMem = &pVList[0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		&level,



	XMFLOAT4         ambient;  //環境光(r,g,b)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t ty =

	D3D11_SAMPLER_DESC smpDesc;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//インデックスバッファ作成



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

	return hr;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	int     vcount = vertexlist.size();



{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.StructureByteStride = 0;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vector<WORD> indexList;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

				tinyobj::real_t ty =

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			}

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	D3D11_SUBRESOURCE_DATA vrData;

	vrData.SysMemPitch = 0;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

			}

		{



/*

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.MiscFlags = 0;



	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Width = rect.Width();

		return hr;

}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{



	CRect                rect;



	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		size_t index_offset = 0;

	//Create Index

		{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pInputLayout);



		return 1;

	m_pTextureView = NULL;

	{

void CD3DTest::Release()

	std::string imagePath = "hello.bmp";

			exit(1);

	std::string inputfile = "test.obj";



	m_Viewport.TopLeftX = 0;



	//ビューポート設定

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderPresent(ren);

		SDL_Delay(1000);

	scDesc.BufferDesc.Width = rect.Width();

	std::vector<tinyobj::material_t> materials;

		&m_pDevice,

		return hr;

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	ConstantLightBuffer clb;

	vbDesc.MiscFlags = 0;

	m_VertexCount = vcount;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//頂点シェーダー生成

		return hr;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

		//User requests quit

		else if (e.type == SDL_KEYDOWN)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pTexture = NULL;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ConstantLight    pntLight; //点光源

				break;



	Vertex* pVList = new Vertex[vcount];

		pIList[j] = indexList[j];

				// access to vertex

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		&materials,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_Viewport.TopLeftY = 0;

		else if (e.type == SDL_KEYDOWN)

			}

	m_Viewport.MaxDepth = 1.0f;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		if (e.type == SDL_QUIT)

}

		{

};

	dsDesc.Texture2D.MipSlice = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return 1;

	scDesc.BufferDesc.Width = rect.Width();

	}

void CD3DTest::Render()



	txDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.CPUAccessFlags = 0;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//Clean up our objects and quit



		delete[] pIList;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pDevice);

	vbDesc.StructureByteStride = 0;

				vertex.push_back(vertex_tmp);

				break;





{

		{

#include "DirectXManager.h"

	SDL_DestroyWindow(win);

	if (!error.empty())



	XMFLOAT4 diffuse;           //拡散(r,g,b)



		//User presses a key

				break;

	scDesc.BufferCount = 1;

}

	{

struct ConstantMatrixBuffer {



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pVertexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pInputLayout);

		SDL_Delay(1000);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		R"(cube.obj)");

	{

	m_pMatrixBuffer = NULL;

	}

	m_pImmediateContext = NULL;

	bool ret = tinyobj::LoadObj(

		return 1;

		R"(cube.obj)");

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.SampleDesc.Count = 1;

	}

{

		size_t index_offset = 0;



	}

	{

	for (size_t s = 0; s < shapes.size(); s++)



	m_pSampler = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMFLOAT4X4 world;

	if (!error.empty())

	if (FAILED(hr))

			}

HRESULT CD3DTest::Create(HWND hwnd)

	m_pInputLayout = NULL;

	txDesc.Width = rect.Width();

		SDL_RenderPresent(ren);

	if (FAILED(hr))

	txDesc.Width = rect.Width();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D11_BUFFER_DESC cbDesc;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

	SDL_Quit();

HRESULT CD3DTest::Create(HWND hwnd)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return hr;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.BufferDesc.Width = rect.Width();

			case SDLK_DOWN:

	//Vertex* pVList = new Vertex[vcount];



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{



		size_t index_offset = 0;

	};

	SAFE_RELEASE(m_pDevice);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	WORD   icount = indexList.size();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

int SEGMENT = 36;

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_DestroyTexture(tex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pSwapChain->Present(0, 0);

	vector<WORD> indexList;

	m_pLightBuffer = NULL;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

struct ConstantLight {

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D11_BUFFER_DESC cbDesc;

		if (!ret)

};

	vbDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();

	m_Viewport.TopLeftY = 0;

	m_pSwapChain->Present(0, 0);

{

	tinyobj::ObjReaderConfig reader_config;

	D3D11_SUBRESOURCE_DATA vrData;





	vrData.SysMemSlicePitch = 0;

}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





		{

#include <SDL.h>



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (!error.empty())

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!reader.Error().empty())

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pSampler = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	{



	m_Angle += XMConvertToRadians(1.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::vector<tinyobj::material_t> materials;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

struct ConstantLightBuffer {



struct ConstantMaterial {

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantLightBuffer clb;

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty =



	XMStoreFloat4(&clb.eyePos, eye);

			{





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



struct ConstantMatrixBuffer {

	//深度ステンシルバッファ作成

		{

		&scDesc,

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

int main(int, char**)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pInputLayout);

	std::vector<tinyobj::material_t> materials;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4X4 projection;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	HRESULT              hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	cbDesc.CPUAccessFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);

		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	for (const auto& shape : shapes)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.CPUAccessFlags = 0;

	vector<Vertex> vertexlist;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	for (const auto& shape : shapes)



}

}

}

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pInputLayout);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	auto& attrib = reader.GetAttrib();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

	if (!error.empty())

	{

		if (e.type == SDL_QUIT)



			{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}*/

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			exit(1);

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	SDL_Event e;

			exit(1);

	SDL_DestroyWindow(win);

	SDL_Quit();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

CD3DTest::CD3DTest()

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





	scDesc.SampleDesc.Quality = 0;

	m_pTextureView = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	tinyobj::ObjReader reader;

	}

		}

		SDL_Delay(1000);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.MiscFlags = 0;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.StructureByteStride = 0;



	SAFE_RELEASE(m_pInputLayout);



	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Quit();





	m_pImmediateContext = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

int main(int, char**)

		pVList[i] = vertexlist[i];



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);





	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	D3D11_TEXTURE2D_DESC txDesc;



	auto& materials = reader.GetMaterials();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	for (const auto& shape : shapes)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

int main(int, char**)

	m_pTexture = NULL;

	scDesc.SampleDesc.Count = 1;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	auto& materials = reader.GetMaterials();





	ibDesc.MiscFlags = 0;

		pIList[j] = indexList[j];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	SDL_FreeSurface(suf);





	Release();

	XMFLOAT4 specular;          //反射(r,g,b)



{

				break;



};

}

		size_t index_offset = 0;  // インデントのオフセット



	SDL_DestroyRenderer(ren);

}

	reader_config.mtl_search_path = "./"; // Path to material files

		size_t index_offset = 0;

	}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	Vertex* pVList = new Vertex[vcount];

	vbDesc.CPUAccessFlags = 0;

	if (!error.empty())

		delete[] pVList;

	// Loop over shapes

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

				break;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//Create Index

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	return hr;

	ibDesc.StructureByteStride = 0;

				break;

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	if (!reader.ParseFromFile(inputfile, reader_config))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		if (!ret)



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDevice = NULL;





	cbDesc.CPUAccessFlags = 0;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	scDesc.BufferCount = 1;

	txDesc.ArraySize = 1;

	// Loop over shapes

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&m_pImmediateContext);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pVertexShader);

	m_pInputLayout = NULL;





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



			exit(1);

	for (int i = 0; i < vcount; i++)

	txDesc.ArraySize = 1;

	m_Viewport.MinDepth = 0.0f;

	dsDesc.Texture2D.MipSlice = 0;



	{



	}

		exit(1);

	{

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

		&error,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Quit();



	}

int main(int, char**)

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pDevice);







		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//Key press surfaces constants

struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pDevice);

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return hr;

	m_pDepthStencilTexture = NULL;



	CRect                rect;

		D3D11_SDK_VERSION,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

void CD3DTest::Render()



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pInputLayout);



	HRESULT              hr;

	irData.SysMemSlicePitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SDL_Quit();

	{

	XMFLOAT4X4 view;

		//User presses a key



	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

CD3DTest::~CD3DTest()

	std::vector<tinyobj::material_t> materials;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}

		{

	vector<WORD> indexList;

	m_pRenderTargetView = NULL;

	txDesc.CPUAccessFlags = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//深度ステンシルバッファ作成

		pVList[i] = vertexlist[i];

	//Create Index

	SDL_DestroyRenderer(ren);

		}

	vector<WORD> indexList;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





	enum KeyPressSurfaces

		&shapes,

	{

	D3D11_SUBRESOURCE_DATA irData;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pLightBuffer = NULL;





	LoadObj(vertexlist, indexList);

	vrData.SysMemSlicePitch = 0;

		{

	txDesc.Width = rect.Width();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pDevice);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 projection;

	vbDesc.StructureByteStride = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				break;



	//vector<Vertex> vertex_t;



	return hr;

}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



}

	Release();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Event e;

		if (!ret)

	SAFE_RELEASE(m_pPixelShader);

	ZeroMemory(&txDesc, sizeof(txDesc));

		flags,

struct ConstantLightBuffer {



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

	for (int i = 0; i < 3; i++)



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

/*

	scDesc.BufferDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_DOWN,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		//User requests quit



	float    farZ = 100.0f;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		SDL_Delay(1000);

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_FreeSurface(suf);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_Delay(1000);



	std::string imagePath = "hello.bmp";

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		}

	scDesc.BufferDesc.Height = rect.Height();



		{

	UINT offsets = 0;



		return hr;

	//インデックスバッファ作成

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyTexture(tex);

}

	{

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	HRESULT              hr;

	{

#include <iostream>

			// Loop over vertices in the face.

				break;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

	//テクスチャ読み込み

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int SEGMENT = 36;

struct ConstantMatrixBuffer {



};

	//vector<WORD> index_t;

CD3DTest::CD3DTest()

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

	D3D11_BUFFER_DESC ibDesc;



	{

		SDL_RenderClear(ren);

		//User presses a key



	cbDesc.MiscFlags = 0;

		&m_pSwapChain,

	scDesc.BufferCount = 1;

	irData.SysMemPitch = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	return hr;

				break;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//頂点シェーダー生成

		SDL_Delay(1000);

	m_IndexCount = icount;

				break;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				vertex.push_back(vertex_tmp);



	if (FAILED(hr))

		D3D11_SDK_VERSION,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Event e;

	std::string error;

	Vertex* pVList = new Vertex[vcount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	m_Viewport.MinDepth = 0.0f;

	{

	vrData.pSysMem = &pVList[0];

				break;



	ConstantMaterial material; //物体の質感



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

		1,



	::GetClientRect(hwnd, &rect);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		pIList[j] = indexList[j];

		SDL_Delay(1000);

}

		if (!ret)

};

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.StructureByteStride = 0;





	//頂点レイアウト作成

	Release();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pIndexBuffer);



}

	vbDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ConstantLightBuffer clb;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	for (const auto& shape : shapes)

int main(int, char**)

	ConstantMatrixBuffer cmb;

}

		{

	XMFLOAT4 pos;               //座標(x,y,z)

		//User requests quit

	enum KeyPressSurfaces

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	for (const auto& shape : shapes)

		KEY_PRESS_SURFACE_RIGHT,

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pDevice);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

struct ConstantLight {

	}



};



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.Width = rect.Width();

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Quit();

{

			case SDLK_DOWN:

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

using std::cout; using std::endl;

	m_pDevice = NULL;

	SAFE_RELEASE(m_pSwapChain);

	Release();

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	float    farZ = 100.0f;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.StructureByteStride = 0;

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		KEY_PRESS_SURFACE_DOWN,

	vbDesc.StructureByteStride = 0;

		return hr;





		pIList[j] = indexList[j];



	//頂点バッファ作成

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				// access to vertex

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	vrData.SysMemSlicePitch = 0;

	m_pSwapChain = NULL;





	scDesc.BufferDesc.Height = rect.Height();



			}





	vrData.SysMemPitch = 0;



	m_VertexCount = vcount;

{

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	{

		pLevels,

				break;

	//インデックスバッファ作成



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		&error,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_BUFFER_DESC vbDesc;

	//インデックスバッファ作成

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.MinDepth = 0.0f;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pLightBuffer = NULL;

		//User presses a key

			// Loop over vertices in the face.

	XMStoreFloat4(&clb.eyePos, eye);

	vector<WORD> indexList;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::string inputfile = "test.obj";

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vbDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;

		size_t index_offset = 0;  // インデントのオフセット

}


			case SDLK_RIGHT:

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			{

};

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//vector<WORD> index_t;

	m_Viewport.MinDepth = 0.0f;



	SAFE_RELEASE(m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//Vertex* pVList = new Vertex[vcount];

}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



		R"(cube.obj)");



}

	Vertex* pVList = new Vertex[vcount];

	WORD* pIList = new WORD[icount];

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.MipLevels = 1;

	float    fov = XMConvertToRadians(20.0f);

	for (int i = 0; i < vcount; i++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Key press surfaces constants

				tinyobj::real_t ty =

	}*/

	SDL_DestroyTexture(tex);

	{

			index_offset += fv;

		exit(1);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.ArraySize = 1;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

			}

				vertex.push_back(vertex_tmp);

	ConstantMaterial material; //物体の質感

	vector<WORD> indexList;

	txDesc.SampleDesc.Quality = 0;

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		if (!ret)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	scDesc.BufferDesc.Height = rect.Height();

	}

struct ConstantLightBuffer {

	//Clean up our objects and quit

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



int main(int, char**)



	};

{



		pLevels,



		}

	CRect                rect;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

};

		&shapes,



		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

	reader_config.mtl_search_path = "./"; // Path to material files

 */



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (!error.empty())

}
	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		&m_pImmediateContext);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	auto& shapes = reader.GetShapes();

				// access to vertex

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pPixelShader);



				WORD index = idx.vertex_index;

		1,

	{

		delete[] pIList;



	cbDesc.StructureByteStride = 0;

		NULL,



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		return hr;

	}

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		KEY_PRESS_SURFACE_RIGHT,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;





	m_pDepthStencilTexture = NULL;

	m_VertexCount = vcount;

		KEY_PRESS_SURFACE_TOTAL

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pSwapChain);





				WORD index = idx.vertex_index;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA vrData;



				vertex.push_back(vertex_tmp);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

void CD3DTest::Render()

			}

		&level,

		exit(1);



	D3D11_BUFFER_DESC vbDesc;

	{

	}

	Vertex* pVList = new Vertex[vcount];

		if (!reader.Error().empty())

			index_offset += num_vertices;



	if (FAILED(hr))

	m_pVertexShader = NULL;

	}

	//定数バッファ作成



		//User requests quit

	//頂点レイアウト作成

				// access to vertex

		pLevels,

{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <iostream>



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pDepthStencilView);



	}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);







	SAFE_RELEASE(m_pIndexBuffer);

		D3D11_SDK_VERSION,

#include "DirectXManager.h"

	for (const auto& shape : shapes)

	ZeroMemory(&txDesc, sizeof(txDesc));



 */



	SDL_Quit();

	//インデックスバッファ作成

		&shapes,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	/*

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

};

	// Loop over shapes

	if (!error.empty())



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				// access to vertex

	cbDesc.StructureByteStride = 0;

	SDL_Quit();

		return hr;

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//頂点レイアウト作成

{





	cbDesc.MiscFlags = 0;

#include "DirectXManager.h"

			default:

		KEY_PRESS_SURFACE_LEFT,

	{

		if (e.type == SDL_QUIT)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.SampleDesc.Quality = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pDepthStencilTexture = NULL;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyWindow(win);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



}

		KEY_PRESS_SURFACE_RIGHT,

		NULL,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pSwapChain);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx =

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&scDesc,

}









	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

	if (FAILED(hr))

{

	txDesc.ArraySize = 1;

		SDL_RenderClear(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_IndexCount = icount;

{

	//ピクセルシェーダー生成

	{

				tinyobj::real_t ty =

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		// Loop over faces(polygon)

{

};

			// Loop over vertices in the face.

		D3D11_SDK_VERSION,

				tinyobj::real_t ty =

	return 0;

	m_Angle += XMConvertToRadians(1.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

 * Lesson 1: Hello World!

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (int j = 0; j < icount; j++)

	for (const auto& shape : shapes)



	if (!reader.ParseFromFile(inputfile, reader_config))



}



				break;



				break;

		SDL_RenderPresent(ren);



	HRESULT              hr;

	cbDesc.StructureByteStride = 0;







		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//頂点バッファ作成



				break;

		}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

{

	cbDesc.MiscFlags = 0;

		{



	if (FAILED(hr))



	};

	return 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{

		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

	SDL_DestroyWindow(win);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		if (!ret)

	m_IndexCount = icount;



	SAFE_RELEASE(m_pDevice);

	}

	}

}


	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;









	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pDevice);

	m_IndexCount = icount;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Viewport.TopLeftX = 0;

		cout << "SDL_INIT_ERROR" << endl;

	std::string imagePath = "hello.bmp";

		SDL_RenderClear(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	CRect                rect;

	m_pPixelShader = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))

	m_pTextureView = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);





	tinyobj::attrib_t attrib;

 */

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	irData.SysMemSlicePitch = 0;

		{

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&attrib,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_Angle += XMConvertToRadians(1.0f);

	D3D_FEATURE_LEVEL level;



	vrData.SysMemSlicePitch = 0;

	D3D11_SUBRESOURCE_DATA irData;

	//Clean up our objects and quit

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.eyePos, eye);

		SDL_RenderClear(ren);



		return hr;

	txDesc.SampleDesc.Quality = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

		return hr;

	return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_DestroyTexture(tex);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))

	if (!reader.Warning().empty())

		SDL_RenderPresent(ren);

			case SDLK_UP:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

};

			}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pDevice);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



#endif

	float    fov = XMConvertToRadians(20.0f);

		{

	std::string inputfile = "test.obj";

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;



#include <iostream>

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

void CD3DTest::Release()

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.MiscFlags = 0;

		return hr;

	m_pMatrixBuffer = NULL;

	return 0;



		delete[] pVList;

	m_VertexCount = 0;



{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

};



	{

	txDesc.SampleDesc.Quality = 0;



	vrData.pSysMem = &pVList[0];

	WORD* pIList = new WORD[icount];

struct ConstantMaterial {

				break;

	D3D11_TEXTURE2D_DESC txDesc;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	{

	dsDesc.Texture2D.MipSlice = 0;

struct ConstantLightBuffer {

}
void CD3DTest::Release()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		SDL_RenderClear(ren);

CD3DTest::CD3DTest()

			case SDLK_RIGHT:

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//頂点シェーダー生成

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.MiscFlags = 0;

		{

		m_pImmediateContext->ClearState();

CD3DTest::~CD3DTest()

	cbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

#endif



	if (SDL_Init(SDL_INIT_VIDEO != 0))

			for (size_t v = 0; v < num_vertices; v++)

		//User presses a key

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		size_t index_offset = 0;  // インデントのオフセット

	std::string error;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (int j = 0; j < icount; j++)

};

	}

	WORD* pIList = new WORD[icount];

			index_offset += fv;



	m_pImmediateContext = NULL;



	SAFE_RELEASE(m_pPixelShader);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	delete[] pIList;

		&attrib,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ConstantLightBuffer clb;

			case SDLK_DOWN:

	if (FAILED(hr))



CD3DTest::~CD3DTest()

			}

		return 1;

struct ConstantLight {

			exit(1);

int main(int, char**)

				break;

	cbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&m_pImmediateContext);

	irData.pSysMem = &pIList[0];



	};





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	//ピクセルシェーダー生成

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

	{

	return hr;

	XMFLOAT4X4 world;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	Release();

#define TINYOBJLOADER_IMPLEMENTATION

};

	//ピクセルシェーダー生成

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	::GetClientRect(hwnd, &rect);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

{

		SDL_RenderPresent(ren);

		&level,

}
	cbDesc.CPUAccessFlags = 0;

	if (!error.empty())

	vector<Vertex> vertexlist;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		&materials,

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pMatrixBuffer = NULL;

		m_pImmediateContext->ClearState();

	}

	vbDesc.StructureByteStride = 0;

};

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 * Lesson 1: Hello World!

	ConstantMatrixBuffer cmb;

		&materials,



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			case SDLK_LEFT:

struct ConstantMaterial {

		if (!reader.Error().empty())

		return hr;

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Event e;

using std::cout; using std::endl;

		if (!reader.Error().empty())

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	{

	m_pSampler = NULL;

	D3D11_SAMPLER_DESC smpDesc;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	irData.pSysMem = &pIList[0];

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pDepthStencilTexture = NULL;

		&materials,



}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ZeroMemory(&txDesc, sizeof(txDesc));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			break;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			{



	m_pLightBuffer = NULL;



	//頂点バッファ作成

	//Vertex* pVList = new Vertex[vcount];

	//頂点バッファ作成

			break;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			switch (e.key.keysym.sym)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pRenderTargetView);



	SAFE_RELEASE(m_pTexture);

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pRenderTargetView);





	vbDesc.StructureByteStride = 0;

	int     vcount = vertexlist.size();

	{



};

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		return hr;

	SAFE_RELEASE(m_pDevice);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	WORD   icount = indexList.size();

	{

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

		{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		SDL_RenderPresent(ren);

	D3D11_SUBRESOURCE_DATA vrData;

			default:

	m_Viewport.TopLeftY = 0;

			}

		//User presses a key

	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantLight {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

CD3DTest::CD3DTest()

		SDL_RenderPresent(ren);

	ConstantLight    pntLight; //点光源

		D3D_DRIVER_TYPE_HARDWARE,

}

		&scDesc,

	CRect                rect;

{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.OutputWindow = hwnd;

	delete[] pIList;

	ibDesc.StructureByteStride = 0;

	/*

	m_pVertexBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

 */

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

				break;

	}

	::GetClientRect(hwnd, &rect);

	//定数バッファ作成

	if (FAILED(hr))





	SDL_DestroyRenderer(ren);

}

	txDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pSwapChain);

	txDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	{



	//Key press surfaces constants

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMFLOAT4         ambient;  //環境光(r,g,b)

				vertex.push_back(vertex_tmp);

	m_Viewport.MinDepth = 0.0f;

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 world;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			default:

#ifdef _DEBUG

	//Create Index



	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vector<WORD> indexList;



			case SDLK_RIGHT:

			exit(1);

	return hr;

		&m_pImmediateContext);

	D3D11_BUFFER_DESC cbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		flags,

};

				vertex.push_back(vertex_tmp);

	//vector<WORD> index_t;

	SDL_Event e;

			{







}

	if (FAILED(hr))

		&level,

	scDesc.SampleDesc.Quality = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

HRESULT CD3DTest::Create(HWND hwnd)

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	enum KeyPressSurfaces

	irData.SysMemSlicePitch = 0;

	m_VertexCount = 0;

	txDesc.SampleDesc.Quality = 0;

		&m_pImmediateContext);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);







		NULL,

	}

		pIList[j] = indexList[j];

				// access to vertex

	scDesc.OutputWindow = hwnd;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		//User presses a key

		pLevels,

	{

	ibDesc.StructureByteStride = 0;



	txDesc.Width = rect.Width();



	ibDesc.MiscFlags = 0;

	XMFLOAT4X4 projection;

			}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

		return hr;

			}

	{

		&m_pDevice,

	}

	::GetClientRect(hwnd, &rect);

			{

				WORD index = idx.vertex_index;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ibDesc.CPUAccessFlags = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		flags,

	m_VertexCount = vcount;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	txDesc.MiscFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



			index_offset += num_vertices;

	HRESULT              hr;



	UINT strides = sizeof(Vertex);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_UP,



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Create Index

	{

	bool ret = tinyobj::LoadObj(

		&materials,

			switch (e.key.keysym.sym)

			{

	//ピクセルシェーダー生成



		&scDesc,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (size_t s = 0; s < shapes.size(); s++)

	D3D11_TEXTURE2D_DESC txDesc;

	//頂点バッファ作成

			for (size_t v = 0; v < fv; v++)

		return hr;

	m_pSwapChain = NULL;

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

using std::cout; using std::endl;

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))







		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

#include "DirectXManager.h"

	{

	return 0;

	m_Viewport.MinDepth = 0.0f;



#define TINYOBJLOADER_IMPLEMENTATION

		&shapes,

			case SDLK_RIGHT:

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	if (FAILED(hr))

		}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

{



	XMStoreFloat4(&clb.material.specular, materialSpecular);





		// Loop over faces(polygon)

		exit(1);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;

	SDL_DestroyTexture(tex);

			//Select surfaces based on key press

struct ConstantLight {

 * Lesson 1: Hello World!

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		SDL_RenderClear(ren);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	m_pTextureView = NULL;

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4X4 world;

	//Vertex* pVList = new Vertex[vcount];

	tinyobj::ObjReader reader;



	vector<WORD> indexList;

	auto& shapes = reader.GetShapes();

#include "DirectXManager.h"

	return hr;



	SDL_Quit();

	SAFE_RELEASE(m_pIndexBuffer);

#include "DirectXManager.h"

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_Viewport.Width = (FLOAT)rect.Width();

	::GetClientRect(hwnd, &rect);



}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		&m_pDevice,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	for (size_t s = 0; s < shapes.size(); s++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pSwapChain->Present(0, 0);



void CD3DTest::Render()

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

		D3D11_SDK_VERSION,

		flags,

		{

		return hr;

	if (FAILED(hr))



	}

	//定数バッファ作成

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	vrData.SysMemPitch = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	SDL_DestroyRenderer(ren);

	vrData.SysMemSlicePitch = 0;

{

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pDevice);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4X4 projection;

	{

	m_pVertexShader = NULL;

		return hr;

	scDesc.BufferCount = 1;

	Release();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_RenderPresent(ren);

};

	return;

	vbDesc.MiscFlags = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	txDesc.CPUAccessFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	int     vcount = vertexlist.size();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pRenderTargetView);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext = NULL;





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	{

	}*/

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

	}

		//User presses a key

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}*/



	ibDesc.MiscFlags = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vbDesc.MiscFlags = 0;

}

		size_t index_offset = 0;  // インデントのオフセット

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		}



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		&m_pDevice,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	float    nearZ = 0.1f;

		KEY_PRESS_SURFACE_DOWN,

	{

	{

		if (!reader.Error().empty())

				vertex.push_back(vertex_tmp);

		return hr;

	{

		KEY_PRESS_SURFACE_TOTAL

	m_pTexture = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.Windowed = TRUE;

			}

	XMFLOAT4 specular;          //反射(r,g,b)



	Release();



			//Select surfaces based on key press

	UINT flags = 0;

		&attrib,

	m_IndexCount = icount;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::ObjReaderConfig reader_config;

	SDL_Event e;

		return hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	txDesc.MiscFlags = 0;

		delete[] pIList;



	m_pImmediateContext = NULL;







		else if (e.type == SDL_KEYDOWN)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pTexture = NULL;

int main(int, char**)

	}

	if (FAILED(hr))

		size_t index_offset = 0;

	m_pVertexShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

				indexlist.push_back(index);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	scDesc.SampleDesc.Count = 1;



		SDL_Delay(1000);

		KEY_PRESS_SURFACE_RIGHT,

}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	// Loop over shapes

	//ビューポート設定

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	Release();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

		&m_pSwapChain,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

struct ConstantMaterial {

		KEY_PRESS_SURFACE_TOTAL

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	txDesc.CPUAccessFlags = 0;





	m_pVertexShader = NULL;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User requests quit





	D3D11_BUFFER_DESC ibDesc;

 */





	m_Angle += XMConvertToRadians(1.0f);

};

int main(int, char**)

	{

	if (FAILED(hr))

{

				vertex.push_back(vertex_tmp);

		&level,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

void CD3DTest::Render()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	return 0;

		return 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	::ZeroMemory(&scDesc, sizeof(scDesc));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	ConstantMatrixBuffer cmb;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vector<WORD> indexList;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Quit();



	{

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pDepthStencilView = NULL;

	while (SDL_PollEvent(&e) != 0)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)





				indexlist.push_back(index);



	m_pIndexBuffer = NULL;

	cbDesc.MiscFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },







	SAFE_RELEASE(m_pDevice);

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



				break;

		{

	}



		size_t index_offset = 0;  // インデントのオフセット

	}

	vrData.pSysMem = &pVList[0];

		return hr;

	m_Viewport.TopLeftX = 0;



	txDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pInputLayout = NULL;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	CRect                rect;

	//vector<Vertex> vertex_t;

		pVList[i] = vertexlist[i];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//頂点バッファ作成

		return hr;



			// Loop over vertices in the face.

	SAFE_RELEASE(m_pMatrixBuffer);

#include "DirectXManager.h"



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	irData.SysMemPitch = 0;

	m_pDepthStencilTexture = NULL;

	}



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&m_pDevice,

		return hr;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_pTextureView = NULL;

	SDL_DestroyTexture(tex);

	//Vertex* pVList = new Vertex[vcount];



	ConstantLightBuffer clb;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.Windowed = TRUE;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		&m_pDevice,

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	dsDesc.Format = txDesc.Format;

		SDL_RenderPresent(ren);

	m_Viewport.MinDepth = 0.0f;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

	for (int i = 0; i < 3; i++)

	XMFLOAT4 ambient;           //環境(r,g,b)

		1,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	while (SDL_PollEvent(&e) != 0)

		return hr;

	if (FAILED(hr))

			default:

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	delete[] pVList;

CD3DTest::~CD3DTest()

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	txDesc.MipLevels = 1;





	SDL_DestroyTexture(tex);

	int     vcount = vertexlist.size();

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	//インデックスバッファ作成

	}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

CD3DTest::CD3DTest()

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pMatrixBuffer = NULL;



	if (FAILED(hr))

		return 1;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pSampler);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SDL_DestroyRenderer(ren);

	SDL_DestroyRenderer(ren);





	scDesc.BufferCount = 1;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pPixelShader = NULL;

	ConstantLight    pntLight; //点光源

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//Vertex* pVList = new Vertex[vcount];

	Vertex* pVList = new Vertex[vcount];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	auto& attrib = reader.GetAttrib();

	m_pInputLayout = NULL;

		&m_pSwapChain,



	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	auto& shapes = reader.GetShapes();

	m_pSwapChain->Present(0, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			for (size_t v = 0; v < num_vertices; v++)

	ConstantLightBuffer clb;

			{

	D3D11_TEXTURE2D_DESC txDesc;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pSampler = NULL;

	{

	SAFE_RELEASE(m_pLightBuffer);

		//User presses a key

	return;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}

			exit(1);

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT strides = sizeof(Vertex);







	m_pDevice = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	D3D11_SAMPLER_DESC smpDesc;

	SDL_DestroyWindow(win);



	std::vector<tinyobj::shape_t> shapes;

}



void CD3DTest::Release()

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	for (size_t s = 0; s < shapes.size(); s++)

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

	cbDesc.MiscFlags = 0;

	//vector<WORD> index_t;

/*

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	{

	if (m_pImmediateContext)



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	auto& materials = reader.GetMaterials();

	m_pImmediateContext = NULL;

	//ピクセルシェーダー生成

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	if (!reader.Warning().empty())



		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pSwapChain->Present(0, 0);

	for (int i = 0; i < 3; i++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//vector<Vertex> vertex_t;

		KEY_PRESS_SURFACE_RIGHT,



		return hr;



	//vector<Vertex> vertex_t;

 */

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.Windowed = TRUE;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		NULL,

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	m_pTexture = NULL;

		//User requests quit

				// access to vertex

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

void CD3DTest::Release()

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (const auto& shape : shapes)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{

	{



		if (e.type == SDL_QUIT)

	m_pMatrixBuffer = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string inputfile = "test.obj";

	//vector<WORD> index_t;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



{

	}

	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pIndexBuffer);





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	int     vcount = vertexlist.size();

	{

		if (!ret)



	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

}

#endif

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



 * Lesson 1: Hello World!

	{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	return;

	{

		D3D11_SDK_VERSION,



	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(suf);

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;



	//頂点レイアウト作成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	m_pSwapChain->Present(0, 0);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))



int main(int, char**)

	HRESULT              hr;

			index_offset += fv;

void CD3DTest::Render()

		}

	ConstantLightBuffer clb;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	return 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	Release();

	UINT strides = sizeof(Vertex);

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext = NULL;

				break;

{

	tinyobj::attrib_t attrib;

	return 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		//User requests quit



	m_Angle += XMConvertToRadians(1.0f);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	tinyobj::attrib_t attrib;

				// access to vertex

	m_Angle += XMConvertToRadians(1.0f);



	ibDesc.MiscFlags = 0;

		return 1;

	enum KeyPressSurfaces



	{



	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

		//User presses a key

	//テクスチャ読み込み

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	D3D11_BUFFER_DESC vbDesc;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





		&m_pImmediateContext);

	vrData.pSysMem = &pVList[0];

#define TINYOBJLOADER_IMPLEMENTATION

	m_pDepthStencilView = NULL;



		&m_pSwapChain,

	}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	Vertex* pVList = new Vertex[vcount];



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



				tinyobj::real_t tx =

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pInputLayout);

int SEGMENT = 36;

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4X4 view;

};

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <iostream>

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	HRESULT              hr;





	if (!reader.ParseFromFile(inputfile, reader_config))

	vbDesc.MiscFlags = 0;





	delete[] pIList;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		size_t index_offset = 0;  // インデントのオフセット

	float    fov = XMConvertToRadians(20.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.MiscFlags = 0;

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4X4 world;

	vrData.SysMemPitch = 0;



struct ConstantLight {

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			case SDLK_LEFT:

	D3D_FEATURE_LEVEL level;

	cbDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pDevice);

		//User presses a key



	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	return;



	if (!error.empty())

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_RenderPresent(ren);

	UINT offsets = 0;



#include <iostream>

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	//定数バッファ作成



	SDL_DestroyTexture(tex);

	SDL_Event e;

	txDesc.MiscFlags = 0;

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pRenderTargetView);



HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#include <SDL.h>

	XMFLOAT4X4 view;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pLevels,

}

	// Loop over shapes

		if (e.type == SDL_QUIT)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	return 0;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

 * Lesson 1: Hello World!





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pTextureView);

	UINT flags = 0;





	}



};

	D3D_FEATURE_LEVEL level;

	CRect                rect;

		{



	m_pTextureView = NULL;

		cout << "SDL_INIT_ERROR" << endl;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

	enum KeyPressSurfaces



		{

	{



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_SAMPLER_DESC smpDesc;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			//Select surfaces based on key press

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		D3D_DRIVER_TYPE_HARDWARE,

		&m_pDevice,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	while (SDL_PollEvent(&e) != 0)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;









		{

	ibDesc.MiscFlags = 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		else if (e.type == SDL_KEYDOWN)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

}

		KEY_PRESS_SURFACE_LEFT,

		{



				tinyobj::real_t tx =

	irData.SysMemSlicePitch = 0;

			case SDLK_RIGHT:

	txDesc.Width = rect.Width();

	vbDesc.CPUAccessFlags = 0;

		pIList[j] = indexList[j];

		// Loop over faces(polygon)

			case SDLK_LEFT:

	m_pSwapChain = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.Width = rect.Width();

	//Vertex* pVList = new Vertex[vcount];

				break;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				// access to vertex

	if (!reader.Warning().empty())

		return hr;

#include "DirectXManager.h"



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	Release();

		SDL_RenderClear(ren);

		NULL,

	cbDesc.StructureByteStride = 0;

 */

{





{

	//vector<Vertex> vertex_t;



	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	dsDesc.Format = txDesc.Format;

	SDL_Event e;

};



	flags |= D3D11_CREATE_DEVICE_DEBUG;





	//vector<Vertex> vertex_t;

	for (int j = 0; j < icount; j++)

		return hr;



		return hr;

	m_pMatrixBuffer = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.BufferDesc.Height = rect.Height();

		return hr;

		SDL_Delay(1000);

{

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	tinyobj::attrib_t attrib;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	{

	XMFLOAT4X4 view;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	pBackBuffer->Release();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::vector<tinyobj::shape_t> shapes;

		R"(cube.obj)");

	m_VertexCount = 0;

	}

		KEY_PRESS_SURFACE_LEFT,

		&materials,

	m_pRenderTargetView = NULL;



}



			for (size_t v = 0; v < fv; v++)

	{

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	};

	m_pInputLayout = NULL;

	XMFLOAT4X4 view;



{

	m_pDepthStencilView = NULL;

	//頂点レイアウト作成



	dsDesc.Format = txDesc.Format;



	}

	txDesc.MiscFlags = 0;

	vector<Vertex> vertexlist;

	SDL_DestroyRenderer(ren);

	WORD   icount = indexList.size();

	D3D11_SUBRESOURCE_DATA irData;

 * Lesson 1: Hello World!

	scDesc.Windowed = TRUE;

	XMFLOAT4X4 world;



void CD3DTest::Render()

		delete[] pIList;

	dsDesc.Texture2D.MipSlice = 0;



	}

	m_pTextureView = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pLightBuffer = NULL;



	return hr;





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			{

using std::cout; using std::endl;

	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_SUBRESOURCE_DATA vrData;

	}

	tinyobj::attrib_t attrib;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pInputLayout = NULL;



	//Create Index

	{

	txDesc.SampleDesc.Quality = 0;

		if (e.type == SDL_QUIT)





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	WORD* pIList = new WORD[icount];

		1,

	//First we need to start up SDL, and make sure it went ok

	return hr;

		return hr;



	::GetClientRect(hwnd, &rect);

	WORD   icount = indexList.size();

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4         eyePos;   //視点座標

	D3D11_BUFFER_DESC ibDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_VertexCount = vcount;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (m_pImmediateContext)

 */

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    farZ = 100.0f;

	SDL_DestroyWindow(win);

		return 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pIndexBuffer);

#include <SDL.h>

		NULL,

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMaterial {

	Release();

	while (SDL_PollEvent(&e) != 0)



	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

struct ConstantMatrixBuffer {

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	CRect                rect;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#ifdef _DEBUG

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <iostream>

	txDesc.MiscFlags = 0;

	m_VertexCount = vcount;

	LoadObj(vertexlist, indexList);

		1,

	m_pSampler = NULL;

		D3D11_SDK_VERSION,

using std::cout; using std::endl;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT strides = sizeof(Vertex);

	XMFLOAT4 specular;          //反射(r,g,b)

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.SampleDesc.Count = 1;

			}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

}

	}

			// Loop over vertices in the face.

				WORD index = idx.vertex_index;







				tinyobj::real_t tx =

	m_pTextureView = NULL;

	std::string inputfile = "test.obj";

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pSwapChain);

	}





	LoadObj(vertexlist, indexList);

	{

		if (!reader.Error().empty())

	// Loop over shapes

	ConstantLight    pntLight; //点光源

	for (size_t s = 0; s < shapes.size(); s++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	dsDesc.Texture2D.MipSlice = 0;

		{

{

		return hr;

		// Loop over faces(polygon)



		NULL,

	ConstantLight    pntLight; //点光源

			}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::string imagePath = "hello.bmp";

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pVertexBuffer);



	{

		SDL_Delay(1000);

		&level,



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },







	}

	m_pTextureView = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext = NULL;

	scDesc.SampleDesc.Quality = 0;

/*

			index_offset += fv;

		&m_pImmediateContext);

	//深度ステンシルバッファ作成

	XMStoreFloat4(&clb.eyePos, eye);

		//User presses a key

}

	m_pDepthStencilTexture = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



void CD3DTest::Render()

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

{

	UINT offsets = 0;

			// Loop over vertices in the face.



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	}

	ConstantLightBuffer clb;

	}

using std::cout; using std::endl;

		return hr;



	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		exit(1);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pSwapChain);



	m_pSwapChain->Present(0, 0);



}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ID3D11Texture2D* pBackBuffer;

	vrData.SysMemSlicePitch = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&error,

	}

				break;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return 1;

		if (e.type == SDL_QUIT)

	m_pRenderTargetView = NULL;

	m_pMatrixBuffer = NULL;

	return 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//テクスチャ読み込み

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4 ambient;           //環境(r,g,b)



{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexBuffer = NULL;

		if (e.type == SDL_QUIT)

		&m_pDevice,

	pBackBuffer->Release();

	cbDesc.StructureByteStride = 0;

		return hr;

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



			}

	txDesc.ArraySize = 1;

	D3D11_SUBRESOURCE_DATA vrData;

	for (size_t s = 0; s < shapes.size(); s++)

		D3D_DRIVER_TYPE_HARDWARE,

}

	D3D11_BUFFER_DESC cbDesc;

	//頂点シェーダー生成

	//Clean up our objects and quit



	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.OutputWindow = hwnd;

		SDL_RenderPresent(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	UINT flags = 0;

	vrData.pSysMem = &pVList[0];

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

			break;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	scDesc.SampleDesc.Count = 1;

		SDL_Delay(1000);





	return;



	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	tinyobj::attrib_t attrib;

	m_IndexCount = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			{





	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

	SDL_DestroyWindow(win);

	//ピクセルシェーダー生成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	for (int i = 0; i < 3; i++)

	vector<WORD> indexList;

			index_offset += num_vertices;

		}

	{

				break;

				break;

			break;



	//ビューポート設定

	int     vcount = vertexlist.size();

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{

	/*

	D3D11_SAMPLER_DESC smpDesc;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT strides = sizeof(Vertex);



			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.StructureByteStride = 0;

void CD3DTest::Render()

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	irData.SysMemSlicePitch = 0;

		&level,



		exit(1);

	scDesc.BufferDesc.Width = rect.Width();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pSampler = NULL;

	std::string error;

};

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;





	{







	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	if (FAILED(hr))





		R"(cube.obj)");

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pTexture);

		{

#include <iostream>

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pDepthStencilView = NULL;

};

	XMFLOAT4         eyePos;   //視点座標



	if (FAILED(hr))

	if (!reader.Warning().empty())



	for (int j = 0; j < icount; j++)

	//インデックスバッファ作成



	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pInputLayout);

	SDL_FreeSurface(suf);

	//First we need to start up SDL, and make sure it went ok



		pVList[i] = vertexlist[i];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



			default:

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pImmediateContext = NULL;

	}

	irData.SysMemPitch = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (m_pImmediateContext)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantLight    pntLight; //点光源

	m_pSwapChain->Present(0, 0);

	m_pVertexShader = NULL;

	pBackBuffer->Release();

	if (!reader.Warning().empty())

	//vector<WORD> index_t;

	//ピクセルシェーダー生成

	for (const auto& shape : shapes)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	XMFLOAT4X4 projection;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_IndexCount = icount;

	auto& shapes = reader.GetShapes();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User presses a key

	D3D11_SUBRESOURCE_DATA irData;



#include <SDL.h>

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pSwapChain = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{

#include <iostream>



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_Viewport.TopLeftY = 0;

	//インデックスバッファ作成

	Release();

		}

			index_offset += num_vertices;



	::GetClientRect(hwnd, &rect);

	scDesc.OutputWindow = hwnd;

			case SDLK_RIGHT:



	D3D11_SUBRESOURCE_DATA irData;

		&scDesc,

CD3DTest::CD3DTest()

	return;

	//深度ステンシルバッファ作成

		}

	scDesc.BufferDesc.Width = rect.Width();

	SDL_DestroyWindow(win);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pDepthStencilTexture = NULL;

	for (int i = 0; i < 3; i++)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.pSysMem = &pVList[0];

struct ConstantMaterial {

				break;

	//First we need to start up SDL, and make sure it went ok

	D3D11_BUFFER_DESC cbDesc;

	Vertex* pVList = new Vertex[vcount];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	}

		//User requests quit

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	return;

	txDesc.CPUAccessFlags = 0;

	m_pDepthStencilTexture = NULL;

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_LEFT,

	return 0;



	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pTextureView);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			switch (e.key.keysym.sym)



	m_VertexCount = vcount;

		return hr;



	auto& attrib = reader.GetAttrib();

		return hr;

	};





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}



			exit(1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		//User presses a key

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		SDL_Delay(1000);

	bool ret = tinyobj::LoadObj(

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	m_pMatrixBuffer = NULL;

{

	Vertex* pVList = new Vertex[vcount];

	for (int j = 0; j < icount; j++)

	tinyobj::ObjReader reader;



	HRESULT              hr;

	bool ret = tinyobj::LoadObj(



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{





		return hr;

	tinyobj::ObjReader reader;

				tinyobj::real_t ty =



struct ConstantLightBuffer {

		return 1;



	SAFE_RELEASE(m_pDevice);

	SDL_FreeSurface(suf);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		D3D11_SDK_VERSION,

};

	if (FAILED(hr))



	m_pInputLayout = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	for (const auto& shape : shapes)

	if (!reader.Warning().empty())

		{



		}

#include "DirectXManager.h"

	SDL_DestroyTexture(tex);

			case SDLK_LEFT:

CD3DTest::CD3DTest()

				break;

	}

		size_t index_offset = 0;  // インデントのオフセット

	auto& attrib = reader.GetAttrib();

CD3DTest::CD3DTest()

	auto& shapes = reader.GetShapes();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pTexture);

	SDL_FreeSurface(suf);

#include "DirectXManager.h"

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			//Select surfaces based on key press

	m_Viewport.MinDepth = 0.0f;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_DestroyWindow(win);

	XMFLOAT4X4 world;

				break;

			// Loop over vertices in the face.

		return hr;





	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyRenderer(ren);



	UINT strides = sizeof(Vertex);

}

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

			}

#include <iostream>

	{

int main(int, char**)

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pVertexShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	};



	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	std::string imagePath = "hello.bmp";

		}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.MiscFlags = 0;

				break;

struct ConstantLight {

}

	m_pVertexBuffer = NULL;





	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_TOTAL

	txDesc.ArraySize = 1;

		return hr;

	cbDesc.StructureByteStride = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	vrData.SysMemSlicePitch = 0;

	}

	SAFE_RELEASE(m_pVertexBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	//Key press surfaces constants



	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	Release();

	delete[] pVList;

		{



		return hr;

	SDL_DestroyWindow(win);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Quality = 0;

	ConstantLight    pntLight; //点光源

		delete[] pIList;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vector<Vertex> vertexlist;

		pVList[i] = vertexlist[i];





				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成



using std::cout; using std::endl;

				indexlist.push_back(index);

{



	{

			index_offset += num_vertices;

	DXGI_SWAP_CHAIN_DESC scDesc;



	return 0;

	CRect                rect;



	SAFE_RELEASE(m_pRenderTargetView);

				break;

	XMFLOAT4         ambient;  //環境光(r,g,b)





	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





		if (!ret)

	if (m_pImmediateContext)

	tinyobj::ObjReaderConfig reader_config;

			//Select surfaces based on key press

	SAFE_RELEASE(m_pSwapChain);

	ConstantLight    pntLight; //点光源

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{



	std::string inputfile = "test.obj";

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	scDesc.Windowed = TRUE;

	m_Viewport.TopLeftY = 0;

	XMFLOAT4         eyePos;   //視点座標

	ibDesc.StructureByteStride = 0;

		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	delete[] pVList;

	SAFE_RELEASE(m_pSampler);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SAFE_RELEASE(m_pMatrixBuffer);



	m_pSwapChain->Present(0, 0);



 * Lesson 1: Hello World!

	m_IndexCount = icount;

 */

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}







				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				indexlist.push_back(idx.vertex_index);



{

	m_pRenderTargetView = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		R"(cube.obj)");

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





		&m_pSwapChain,



	D3D_FEATURE_LEVEL level;

		KEY_PRESS_SURFACE_DEFAULT,

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//深度ステンシルバッファ作成

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t tx =

	return 0;

	{



				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#ifdef _DEBUG

				break;



	SAFE_RELEASE(m_pIndexBuffer);

	}

				break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	UINT offsets = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

int main(int, char**)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vbDesc.MiscFlags = 0;



	cbDesc.MiscFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}

	XMFLOAT4X4 view;

		return hr;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			switch (e.key.keysym.sym)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pSwapChain->Present(0, 0);

			//Select surfaces based on key press

		KEY_PRESS_SURFACE_LEFT,

		flags,

}

#include "DirectXManager.h"



	if (FAILED(hr))



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

};

	enum KeyPressSurfaces



int main(int, char**)

	SDL_DestroyWindow(win);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			{



	XMFLOAT4X4 world;





	ibDesc.MiscFlags = 0;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float    fov = XMConvertToRadians(20.0f);

		return 1;

		}



	for (size_t s = 0; s < shapes.size(); s++)







	ConstantMatrixBuffer cmb;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_Angle += XMConvertToRadians(1.0f);



	return;

	cbDesc.MiscFlags = 0;



		}

			break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				WORD index = idx.vertex_index;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Viewport.Width = (FLOAT)rect.Width();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

void CD3DTest::Render()

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

	SAFE_RELEASE(m_pTextureView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	scDesc.BufferDesc.Width = rect.Width();

			case SDLK_UP:

	{

		}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		{

	m_Viewport.MinDepth = 0.0f;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pSwapChain);

	DXGI_SWAP_CHAIN_DESC scDesc;

HRESULT CD3DTest::Create(HWND hwnd)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		size_t index_offset = 0;

	{

		{

	SAFE_RELEASE(m_pDepthStencilView);



void CD3DTest::Release()

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		}

	SDL_DestroyWindow(win);

	CRect                rect;

		return hr;

	cbDesc.StructureByteStride = 0;

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

		return hr;

	cbDesc.MiscFlags = 0;

/*

struct ConstantMaterial {

		{

		SDL_RenderClear(ren);





/*



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	scDesc.SampleDesc.Count = 1;

	ConstantMatrixBuffer cmb;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyWindow(win);

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}

	tinyobj::ObjReaderConfig reader_config;

};

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

	std::vector<tinyobj::shape_t> shapes;

	SDL_Event e;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vector<Vertex> vertexlist;

	m_IndexCount = icount;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		cout << "SDL_INIT_ERROR" << endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t tx =

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				break;

	vbDesc.StructureByteStride = 0;

	m_IndexCount = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

		&level,

		exit(1);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		SDL_RenderClear(ren);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return 1;

	vrData.SysMemPitch = 0;

int main(int, char**)

	m_pLightBuffer = NULL;

	{

}

	vrData.SysMemSlicePitch = 0;

				WORD index = idx.vertex_index;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	//Vertex* pVList = new Vertex[vcount];

}

#include <iostream>

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.Height = rect.Height();

	m_IndexCount = icount;

#include "DirectXManager.h"

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	m_pInputLayout = NULL;

	delete[] pVList;

	//Vertex* pVList = new Vertex[vcount];



	m_IndexCount = icount;

		flags,



	UINT strides = sizeof(Vertex);

	m_Viewport.TopLeftX = 0;

	m_pInputLayout = NULL;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

		return hr;

}

	SAFE_RELEASE(m_pRenderTargetView);

	if (!error.empty())

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4X4 view;

	SDL_DestroyTexture(tex);

	std::vector<tinyobj::shape_t> shapes;

}

{

	scDesc.OutputWindow = hwnd;

			}

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

 * Lesson 1: Hello World!



	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

				break;

				vertex.push_back(vertex_tmp);

			for (size_t v = 0; v < fv; v++)

	{

}

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pLightBuffer);

	};

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

	}



struct ConstantMatrixBuffer {

CD3DTest::CD3DTest()

	XMFLOAT4 pos;               //座標(x,y,z)

{

	XMFLOAT4X4 view;

		size_t index_offset = 0;



			//Select surfaces based on key press

int main(int, char**)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	m_pInputLayout = NULL;

		pIList[j] = indexList[j];



	};

int main(int, char**)



HRESULT CD3DTest::Create(HWND hwnd)

		KEY_PRESS_SURFACE_TOTAL

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			}

	if (FAILED(hr))

	//頂点レイアウト作成

/*

using std::cout; using std::endl;

				break;

	D3D11_BUFFER_DESC ibDesc;

	m_Viewport.Width = (FLOAT)rect.Width();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

int main(int, char**)

		&m_pDevice,









	tinyobj::ObjReader reader;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pTexture = NULL;



	m_pRenderTargetView = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



			//Select surfaces based on key press

	m_pInputLayout = NULL;

		pLevels,

	UINT strides = sizeof(Vertex);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User requests quit

{

	SDL_Event e;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		{





	m_pSwapChain->Present(0, 0);

	m_IndexCount = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	for (int j = 0; j < icount; j++)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	auto& attrib = reader.GetAttrib();

	ConstantMatrixBuffer cmb;

	WORD* pIList = new WORD[icount];

		&level,

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::string inputfile = "test.obj";

	ConstantMatrixBuffer cmb;

	//頂点シェーダー生成

	};

	txDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pVertexShader = NULL;





	XMFLOAT4         eyePos;   //視点座標



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	return 0;

HRESULT CD3DTest::Create(HWND hwnd)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.MipLevels = 1;

	ConstantLightBuffer clb;

				break;

	//vector<WORD> index_t;

	LoadObj(vertexlist, indexList);

	m_pRenderTargetView = NULL;

	Release();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

		return hr;

#include <SDL.h>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		{

};

				tinyobj::real_t ty =

	ConstantLightBuffer clb;



	std::string imagePath = "hello.bmp";

	if (SDL_Init(SDL_INIT_VIDEO != 0))

};



	{

}

	m_VertexCount = vcount;

struct ConstantMaterial {

	m_IndexCount = 0;

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;



struct ConstantLight {

	if (FAILED(hr))

				indexlist.push_back(index);

		KEY_PRESS_SURFACE_UP,



	cbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC cbDesc;



	m_pLightBuffer = NULL;

				WORD index = idx.vertex_index;



	scDesc.Windowed = TRUE;

	if (!reader.ParseFromFile(inputfile, reader_config))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



};

	ConstantLight    pntLight; //点光源

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			case SDLK_RIGHT:



	//vector<WORD> index_t;



		KEY_PRESS_SURFACE_DOWN,

	m_pRenderTargetView = NULL;



	Release();

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//頂点シェーダー生成

	}

		{

	SDL_DestroyWindow(win);

	m_Viewport.MinDepth = 0.0f;

		KEY_PRESS_SURFACE_DOWN,

		exit(1);



	SAFE_RELEASE(m_pPixelShader);

		R"(cube.obj)");

	SAFE_RELEASE(m_pDevice);

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pVertexShader);

	ibDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

}

		D3D_DRIVER_TYPE_HARDWARE,

		delete[] pIList;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	return;

{

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		SDL_RenderClear(ren);

	{

	ibDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}



{

				WORD index = idx.vertex_index;

	float    farZ = 100.0f;

	UINT strides = sizeof(Vertex);

			break;

		if (e.type == SDL_QUIT)





	//頂点レイアウト作成

	cbDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{





	XMFLOAT4 diffuse;           //拡散(r,g,b)

 */



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pDevice = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pMatrixBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pVertexBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

		KEY_PRESS_SURFACE_DEFAULT,

			switch (e.key.keysym.sym)

		SDL_RenderPresent(ren);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return 1;



			index_offset += num_vertices;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

};

		return hr;

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))



	DXGI_SWAP_CHAIN_DESC scDesc;

		R"(cube.obj)");

#include <iostream>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

CD3DTest::~CD3DTest()

	//テクスチャ読み込み

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return hr;

using std::cout; using std::endl;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_DEFAULT,



{

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);



	for (int i = 0; i < 3; i++)

 */

		SDL_Delay(1000);

			{





	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	for (const auto& shape : shapes)

	std::vector<tinyobj::shape_t> shapes;

void CD3DTest::Render()

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

int main(int, char**)



	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pTexture);

	ZeroMemory(&txDesc, sizeof(txDesc));

}



	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		1,

		delete[] pVList;

	txDesc.Height = rect.Height();

#include "DirectXManager.h"

	SAFE_RELEASE(m_pImmediateContext);

	if (!reader.ParseFromFile(inputfile, reader_config))

		&materials,

	irData.SysMemSlicePitch = 0;

		NULL,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



#endif

	//vector<Vertex> vertex_t;

	{

	SDL_FreeSurface(suf);

				break;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 ambient;           //環境(r,g,b)

	//頂点シェーダー生成



#define TINYOBJLOADER_IMPLEMENTATION

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantLightBuffer clb;

#ifdef _DEBUG

	m_pTextureView = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	//頂点レイアウト作成

		NULL,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		SDL_Delay(1000);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	for (int i = 0; i < 3; i++)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	//頂点シェーダー生成

	}

void CD3DTest::Release()



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.MaxDepth = 1.0f;

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pTextureView);

	m_pDevice = NULL;

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pDepthStencilView = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		}

	auto& materials = reader.GetMaterials();





	D3D_FEATURE_LEVEL level;



#include <SDL.h>

		//User requests quit

	SAFE_RELEASE(m_pVertexShader);

	scDesc.OutputWindow = hwnd;

				vertex.push_back(vertex_tmp);



		return hr;

				indexlist.push_back(idx.vertex_index);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

using std::cout; using std::endl;

	UINT flags = 0;

	m_pPixelShader = NULL;



	if (FAILED(hr))



	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

	if (!error.empty())

	return 0;

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	SAFE_RELEASE(m_pTexture);

		pVList[i] = vertexlist[i];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.SampleDesc.Count = 1;

		SDL_RenderClear(ren);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

};



	if (FAILED(hr))

	}



	scDesc.BufferCount = 1;

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

 */

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

#endif



	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pPixelShader = NULL;

				WORD index = idx.vertex_index;

		}

	//定数バッファ作成

	m_pIndexBuffer = NULL;

		SDL_Delay(1000);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_RenderClear(ren);

			for (size_t v = 0; v < num_vertices; v++)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	WORD   icount = indexList.size();

		SDL_Delay(1000);

	{

#include <iostream>

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#include <SDL.h>

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		if (e.type == SDL_QUIT)

	// Loop over shapes

	}

				WORD index = idx.vertex_index;

};

	m_pRenderTargetView = NULL;

			default:

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		return hr;

	vector<Vertex> vertexlist;

				break;



	{

	scDesc.BufferCount = 1;

		//User presses a key

	{

	//ビューポート設定

		return 1;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

void CD3DTest::Release()

	//vector<WORD> index_t;

	ibDesc.StructureByteStride = 0;



	m_pLightBuffer = NULL;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

	bool ret = tinyobj::LoadObj(

			switch (e.key.keysym.sym)

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;



	txDesc.ArraySize = 1;

	scDesc.OutputWindow = hwnd;



		&m_pImmediateContext);

	dsDesc.Format = txDesc.Format;

			// Loop over vertices in the face.



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//vector<WORD> index_t;

CD3DTest::~CD3DTest()

		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);

			index_offset += fv;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

		return hr;

		KEY_PRESS_SURFACE_TOTAL

#include <iostream>

		NULL,





			switch (e.key.keysym.sym)

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	{

		}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

		SDL_RenderClear(ren);

	m_pImmediateContext = NULL;

	return hr;

	}

	vector<WORD> indexList;

		{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{

		return hr;

		if (!ret)

	WORD* pIList = new WORD[icount];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#include <iostream>

	SDL_FreeSurface(bmp);

}
				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pVertexShader);



{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

struct ConstantMaterial {

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	XMFLOAT4         ambient;  //環境光(r,g,b)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_FreeSurface(bmp);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	return 0;

				tinyobj::real_t tx =



	{

	//頂点シェーダー生成


