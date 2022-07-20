#include <SDL.h>

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{





			switch (e.key.keysym.sym)

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pImmediateContext);

	}

		}

			{

		SDL_RenderPresent(ren);

	int     vcount = vertexlist.size();

			}

	}

	}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	enum KeyPressSurfaces

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

		KEY_PRESS_SURFACE_RIGHT,

	}

		}

	SAFE_RELEASE(m_pVertexShader);

	float    nearZ = 0.1f;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	};

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				break;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		SDL_Delay(1000);

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	::GetClientRect(hwnd, &rect);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	tinyobj::ObjReaderConfig reader_config;

	::GetClientRect(hwnd, &rect);



	ConstantLight    pntLight; //点光源

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <iostream>



	scDesc.SampleDesc.Count = 1;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	pBackBuffer->Release();

	m_Angle += XMConvertToRadians(1.0f);

	int     vcount = vertexlist.size();



	m_IndexCount = icount;





	reader_config.mtl_search_path = "./"; // Path to material files



	}





	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	vector<WORD> indexList;

	WORD* pIList = new WORD[icount];

	return hr;

	XMFLOAT4 specular;          //反射(r,g,b)



			{

	m_pTextureView = NULL;

	return 0;

	std::string error;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			{

	m_IndexCount = icount;

			// Loop over vertices in the face.

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	while (SDL_PollEvent(&e) != 0)

	//vector<Vertex> vertex_t;





	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ibDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ID3D11Texture2D* pBackBuffer;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Create Index

	m_pImmediateContext = NULL;

{







	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				vertex.push_back(vertex_tmp);





		&m_pImmediateContext);

		pVList[i] = vertexlist[i];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	//Clean up our objects and quit

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pMatrixBuffer);



	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//テクスチャ読み込み



				indexlist.push_back(index);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

			{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				WORD index = idx.vertex_index;

			{

		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_SAMPLER_DESC smpDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

 */

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pDevice);

	m_pSampler = NULL;



	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyWindow(win);

	for (int j = 0; j < icount; j++)

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	auto& shapes = reader.GetShapes();

		return hr;

	for (int j = 0; j < icount; j++)

	m_IndexCount = icount;



		1,

	vector<WORD> indexList;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

#include <SDL.h>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pRenderTargetView = NULL;

	m_Viewport.TopLeftX = 0;

		delete[] pIList;





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		{

		delete[] pIList;

				tinyobj::real_t tx =

	//First we need to start up SDL, and make sure it went ok

			break;

		}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{

		}

		{



	for (size_t s = 0; s < shapes.size(); s++)

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	txDesc.CPUAccessFlags = 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	cbDesc.CPUAccessFlags = 0;

				indexlist.push_back(index);

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t tx =

	SDL_DestroyRenderer(ren);

		//User presses a key

#include <iostream>

void CD3DTest::Render()

	auto& shapes = reader.GetShapes();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 world;

	SDL_Quit();



	D3D11_TEXTURE2D_DESC txDesc;

	//Create Index

	scDesc.SampleDesc.Quality = 0;





	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pVertexShader);

	SDL_DestroyTexture(tex);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&scDesc,

	//インデックスバッファ作成





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_RenderClear(ren);

	m_Viewport.MaxDepth = 1.0f;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMFLOAT4         eyePos;   //視点座標

		return hr;





{

	SAFE_RELEASE(m_pDevice);



}

	SAFE_RELEASE(m_pDepthStencilView);



HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ibDesc.MiscFlags = 0;



		&level,

		&attrib,



		{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	SAFE_RELEASE(m_pLightBuffer);

	auto& shapes = reader.GetShapes();





	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_FreeSurface(suf);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			}

	cbDesc.StructureByteStride = 0;

	//頂点シェーダー生成

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	scDesc.BufferCount = 1;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



			for (size_t v = 0; v < fv; v++)

	vrData.pSysMem = &pVList[0];

int main(int, char**)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			exit(1);

			index_offset += fv;





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;

};

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	while (SDL_PollEvent(&e) != 0)

		return hr;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	int     vcount = vertexlist.size();

		SDL_RenderClear(ren);

	XMFLOAT4X4 world;





	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



			//Select surfaces based on key press





	SAFE_RELEASE(m_pVertexShader);

	m_pPixelShader = NULL;

		}

{

	m_Viewport.MinDepth = 0.0f;

		&shapes,

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4X4 world;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



};





	SDL_Quit();

	txDesc.MiscFlags = 0;



			switch (e.key.keysym.sym)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SDL_Quit();



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftX = 0;

		&attrib,

	std::vector<tinyobj::material_t> materials;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_TEXTURE2D_DESC txDesc;

	auto& materials = reader.GetMaterials();

	for (int i = 0; i < 3; i++)

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	//ビューポート設定

	ConstantLightBuffer clb;

};

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

				indexlist.push_back(idx.vertex_index);

	ConstantMatrixBuffer cmb;

		{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

		SDL_RenderClear(ren);

	SDL_DestroyRenderer(ren);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (m_pImmediateContext)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		return hr;

			}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	tinyobj::ObjReaderConfig reader_config;

{

	for (int j = 0; j < icount; j++)



	//頂点シェーダー生成



		&scDesc,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





		SDL_Delay(1000);

		NULL,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain = NULL;

	for (int j = 0; j < icount; j++)

}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	};

#include <iostream>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))



			{

	int     vcount = vertexlist.size();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	}

		SDL_Delay(1000);

#endif

	dsDesc.Texture2D.MipSlice = 0;

			exit(1);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_DestroyRenderer(ren);



	//First we need to start up SDL, and make sure it went ok

	ibDesc.MiscFlags = 0;



		}

	ibDesc.CPUAccessFlags = 0;

	WORD   icount = indexList.size();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			}

			// Loop over vertices in the face.

{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vector<WORD> indexList;

}



	m_pSampler = NULL;



	cbDesc.CPUAccessFlags = 0;



HRESULT CD3DTest::Create(HWND hwnd)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			default:

{

	m_pLightBuffer = NULL;



		SDL_RenderClear(ren);

	SDL_Quit();

#include <iostream>

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#include <iostream>

		exit(1);

int main(int, char**)

			for (size_t v = 0; v < fv; v++)

	m_Viewport.MinDepth = 0.0f;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	vbDesc.StructureByteStride = 0;

	//First we need to start up SDL, and make sure it went ok

				break;

		if (e.type == SDL_QUIT)



struct ConstantLightBuffer {

	m_Viewport.TopLeftY = 0;

	SDL_Quit();

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

CD3DTest::CD3DTest()



struct ConstantLightBuffer {

	float    fov = XMConvertToRadians(20.0f);

int main(int, char**)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_Delay(1000);

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		//User requests quit



void CD3DTest::Render()



		pIList[j] = indexList[j];

		//User requests quit

			case SDLK_LEFT:



	//Key press surfaces constants

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	}

			case SDLK_RIGHT:



	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pSampler);

	//テクスチャ読み込み

	txDesc.Width = rect.Width();



	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pIndexBuffer);

	ibDesc.CPUAccessFlags = 0;

	}

	{

			int num_vertices = shape.mesh.num_face_vertices[f];



	Release();

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		size_t index_offset = 0;  // インデントのオフセット

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				break;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

};

		exit(1);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	if (FAILED(hr))

	D3D11_BUFFER_DESC ibDesc;





	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

using std::cout; using std::endl;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		delete[] pVList;



	m_pTexture = NULL;

	m_pImmediateContext = NULL;



	SAFE_RELEASE(m_pMatrixBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

	//Create Index

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{



	SAFE_RELEASE(m_pTextureView);





	DXGI_SWAP_CHAIN_DESC scDesc;

}

	D3D11_SUBRESOURCE_DATA vrData;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	enum KeyPressSurfaces



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_Angle += XMConvertToRadians(1.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	scDesc.BufferCount = 1;

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	dsDesc.Texture2D.MipSlice = 0;

		1,

	auto& shapes = reader.GetShapes();

	D3D11_SUBRESOURCE_DATA irData;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}





	SDL_Quit();

		&attrib,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





		}

	//Key press surfaces constants

	auto& shapes = reader.GetShapes();

	cbDesc.CPUAccessFlags = 0;



#include <iostream>

		flags,



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemPitch = 0;



int main(int, char**)

			case SDLK_DOWN:

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//First we need to start up SDL, and make sure it went ok

				// access to vertex



		delete[] pVList;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//Clean up our objects and quit

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);

	}

	scDesc.OutputWindow = hwnd;

	auto& shapes = reader.GetShapes();

			//Select surfaces based on key press



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4 ambient;           //環境(r,g,b)

				vertex.push_back(vertex_tmp);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.OutputWindow = hwnd;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

		exit(1);

	m_pRenderTargetView = NULL;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&materials,



	scDesc.SampleDesc.Count = 1;

#include "DirectXManager.h"

	SDL_FreeSurface(suf);

		//User requests quit

		size_t index_offset = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			for (size_t v = 0; v < fv; v++)

	vector<WORD> indexList;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



#include <SDL.h>



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D11_SAMPLER_DESC smpDesc;

		&level,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Quit();

	m_Viewport.MinDepth = 0.0f;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	m_IndexCount = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	SDL_DestroyWindow(win);

};

	WORD   icount = indexList.size();



	vrData.pSysMem = &pVList[0];

	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//vector<Vertex> vertex_t;



		{

		return hr;

		{

	if (!error.empty())



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

	m_pSwapChain = NULL;



	m_pInputLayout = NULL;

				indexlist.push_back(index);

	DXGI_SWAP_CHAIN_DESC scDesc;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext = NULL;



			}





	SDL_DestroyTexture(tex);

	return 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





	SAFE_RELEASE(m_pVertexBuffer);



	std::vector<tinyobj::material_t> materials;

		{

	cbDesc.CPUAccessFlags = 0;

		&error,

	m_VertexCount = vcount;



	txDesc.Width = rect.Width();

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	::GetClientRect(hwnd, &rect);

CD3DTest::CD3DTest()

		return hr;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

			case SDLK_RIGHT:

	tinyobj::attrib_t attrib;



#define TINYOBJLOADER_IMPLEMENTATION



	tinyobj::ObjReaderConfig reader_config;

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	float    farZ = 100.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D11_SDK_VERSION,



		&shapes,



		&materials,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			switch (e.key.keysym.sym)

			}

	XMStoreFloat4(&clb.eyePos, eye);

	while (SDL_PollEvent(&e) != 0)

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))

		pLevels,

	//定数バッファ作成



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ConstantLight    pntLight; //点光源

	while (SDL_PollEvent(&e) != 0)

	m_pDepthStencilTexture = NULL;

	//頂点シェーダー生成

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.MiscFlags = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.SampleDesc.Count = 1;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//Clean up our objects and quit

		m_pImmediateContext->ClearState();



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#ifdef _DEBUG

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

struct ConstantMaterial {

	SAFE_RELEASE(m_pDepthStencilTexture);





	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4         eyePos;   //視点座標



		&shapes,

	WORD* pIList = new WORD[icount];

	m_Viewport.TopLeftY = 0;

{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



{

	scDesc.SampleDesc.Count = 1;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//Create Index

	}

	// Loop over shapes

#include <iostream>

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pTextureView);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	HRESULT              hr;

	m_Viewport.Height = (FLOAT)rect.Height();

}

	UINT strides = sizeof(Vertex);

		{

	m_Viewport.MinDepth = 0.0f;

	D3D11_BUFFER_DESC cbDesc;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//Key press surfaces constants

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				break;

		KEY_PRESS_SURFACE_TOTAL

		&level,

	};

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pInputLayout);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}



	SAFE_RELEASE(m_pDepthStencilView);

	dsDesc.Texture2D.MipSlice = 0;

	m_pIndexBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

struct ConstantMaterial {



	pBackBuffer->Release();

		{

	LoadObj(vertexlist, indexList);





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}



	XMFLOAT4X4 view;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Viewport.TopLeftY = 0;

		pVList[i] = vertexlist[i];

{

{

	D3D11_SUBRESOURCE_DATA irData;

	for (const auto& shape : shapes)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	vector<WORD> indexList;

				// access to vertex

	SDL_DestroyTexture(tex);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	vrData.SysMemSlicePitch = 0;

#include <SDL.h>

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	return hr;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//vector<Vertex> vertex_t;

int main(int, char**)

	float    fov = XMConvertToRadians(20.0f);



	txDesc.MiscFlags = 0;

		}

	}*/

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pTextureView = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (!reader.Warning().empty())

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

HRESULT CD3DTest::Create(HWND hwnd)

				vertex.push_back(vertex_tmp);

	{



	if (FAILED(hr))

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



				WORD index = idx.vertex_index;



		cout << "SDL_INIT_ERROR" << endl;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_BUFFER_DESC ibDesc;

void CD3DTest::Release()

	m_IndexCount = icount;





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (m_pImmediateContext)



	std::string inputfile = "test.obj";

	flags |= D3D11_CREATE_DEVICE_DEBUG;

}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext = NULL;

		cout << "SDL_INIT_ERROR" << endl;



	SDL_Event e;

	scDesc.Windowed = TRUE;

	bool ret = tinyobj::LoadObj(

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

			index_offset += fv;

	SDL_DestroyRenderer(ren);



	m_Viewport.MinDepth = 0.0f;

		return hr;

		SDL_RenderClear(ren);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	D3D11_BUFFER_DESC vbDesc;

	m_pTexture = NULL;

	HRESULT              hr;

				vertex.push_back(vertex_tmp);

	}

	{

		if (!reader.Error().empty())



};



	if (FAILED(hr))

				break;

			case SDLK_UP:



	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.OutputWindow = hwnd;

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pImmediateContext);

	SDL_DestroyWindow(win);



	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferCount = 1;

};

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

	m_pDevice = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vbDesc.StructureByteStride = 0;





	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::attrib_t attrib;

	}

	std::string error;

	SDL_DestroyWindow(win);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		}

	HRESULT              hr;





	ibDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         eyePos;   //視点座標



	return 0;

	m_pInputLayout = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_SAMPLER_DESC smpDesc;



				WORD index = idx.vertex_index;

				vertex.push_back(vertex_tmp);

				break;

	XMFLOAT4X4 view;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pVertexBuffer = NULL;

			case SDLK_DOWN:

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		delete[] pVList;

	std::vector<tinyobj::shape_t> shapes;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	scDesc.BufferDesc.Width = rect.Width();

		exit(1);





	UINT offsets = 0;

	SAFE_RELEASE(m_pTexture);

	m_Viewport.Height = (FLOAT)rect.Height();





	scDesc.SampleDesc.Count = 1;





	SAFE_RELEASE(m_pPixelShader);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





		SDL_RenderPresent(ren);



	//Clean up our objects and quit



	return 0;



				WORD index = idx.vertex_index;



	};

	ConstantLightBuffer clb;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

			case SDLK_UP:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//頂点シェーダー生成

int SEGMENT = 36;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	UINT flags = 0;

	txDesc.SampleDesc.Count = 1;

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		1,

			index_offset += num_vertices;

	if (FAILED(hr))

	SDL_DestroyWindow(win);



		return hr;

	}

			for (size_t v = 0; v < fv; v++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4X4 world;



	SDL_FreeSurface(suf);

		size_t index_offset = 0;

	Release();

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	vrData.SysMemPitch = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pPixelShader);





	//vector<WORD> index_t;

	Release();

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4X4 projection;

	txDesc.SampleDesc.Quality = 0;

	enum KeyPressSurfaces



	SAFE_RELEASE(m_pInputLayout);

	}*/

	return;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_SAMPLER_DESC smpDesc;

	{

		}

#include <iostream>

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

 * Lesson 1: Hello World!

		}

		}

{

				break;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	float    fov = XMConvertToRadians(20.0f);



}




	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	txDesc.ArraySize = 1;

				break;

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t ty =

		{

	txDesc.SampleDesc.Quality = 0;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

		return hr;

			for (size_t v = 0; v < fv; v++)

				vertex.push_back(vertex_tmp);

	enum KeyPressSurfaces

	SDL_Quit();



	if (FAILED(hr))

/*

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pTextureView);

	auto& shapes = reader.GetShapes();

		SDL_Delay(1000);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		pIList[j] = indexList[j];

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pVertexBuffer);

struct ConstantMaterial {

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

				// access to vertex

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

	txDesc.CPUAccessFlags = 0;

	//vector<Vertex> vertex_t;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Angle += XMConvertToRadians(1.0f);



	CRect                rect;

				break;

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	delete[] pVList;

		SDL_RenderClear(ren);

{

		return hr;

		D3D11_SDK_VERSION,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.MiscFlags = 0;

		SDL_RenderClear(ren);

	if (FAILED(hr))

				break;

		}

	SDL_DestroyRenderer(ren);

			case SDLK_LEFT:

	int     vcount = vertexlist.size();

	{

			{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		cout << "SDL_INIT_ERROR" << endl;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::shape_t> shapes;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vbDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4X4 projection;

			default:



	XMFLOAT4 pos;               //座標(x,y,z)

	m_pDevice = NULL;

	vrData.SysMemSlicePitch = 0;

	ConstantLightBuffer clb;

	if (!reader.ParseFromFile(inputfile, reader_config))

			{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





	m_pDepthStencilView = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#include <SDL.h>

struct ConstantMaterial {

	m_pImmediateContext = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	Release();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			{



		pLevels,



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&m_pDevice,

		return hr;

	cbDesc.StructureByteStride = 0;

{

	scDesc.BufferDesc.Height = rect.Height();

		pIList[j] = indexList[j];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



int SEGMENT = 36;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	CRect                rect;

void CD3DTest::Release()

	SDL_DestroyRenderer(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			//Select surfaces based on key press

			int num_vertices = shape.mesh.num_face_vertices[f];

int main(int, char**)

}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTexture = NULL;







	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





		}

	//Key press surfaces constants

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		return hr;



	for (const auto& shape : shapes)

	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC vbDesc;



	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ibDesc.CPUAccessFlags = 0;

				// access to vertex

				break;

	ibDesc.StructureByteStride = 0;

};

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#ifdef _DEBUG

			for (size_t v = 0; v < num_vertices; v++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



using std::cout; using std::endl;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderClear(ren);

		&shapes,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pIndexBuffer);

		m_pImmediateContext->ClearState();

}



				tinyobj::real_t tx =

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.CPUAccessFlags = 0;

#endif

	SDL_DestroyRenderer(ren);

	m_Viewport.MaxDepth = 1.0f;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

};



};

	dsDesc.Texture2D.MipSlice = 0;

#include "DirectXManager.h"

	CRect                rect;

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

/*

	for (int j = 0; j < icount; j++)

		&attrib,

#include <SDL.h>

	//ピクセルシェーダー生成



	SAFE_RELEASE(m_pRenderTargetView);

		return hr;

	{

};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				break;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.Width = rect.Width();

		pIList[j] = indexList[j];

	}

			// Loop over vertices in the face.



	reader_config.mtl_search_path = "./"; // Path to material files

	{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

using std::cout; using std::endl;

		return hr;

			case SDLK_LEFT:

	for (const auto& shape : shapes)

	D3D11_BUFFER_DESC cbDesc;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	int     vcount = vertexlist.size();

	scDesc.BufferCount = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	//ピクセルシェーダー生成

	{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

};

		}

}
	::GetClientRect(hwnd, &rect);

				// access to vertex

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMFLOAT4X4 view;

	for (int j = 0; j < icount; j++)



{



		1,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pSwapChain = NULL;



	{

int SEGMENT = 36;

		NULL,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 pos;               //座標(x,y,z)

			case SDLK_RIGHT:

struct ConstantMatrixBuffer {

	UINT strides = sizeof(Vertex);

	float    fov = XMConvertToRadians(20.0f);

			for (size_t v = 0; v < num_vertices; v++)



	}

	//First we need to start up SDL, and make sure it went ok



		return hr;

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	WORD   icount = indexList.size();

		pIList[j] = indexList[j];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				vertex.push_back(vertex_tmp);

	m_pTexture = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&shapes,



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pLightBuffer = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



 * Lesson 1: Hello World!

	/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (!error.empty())

		//User presses a key

	SAFE_RELEASE(m_pInputLayout);

};

}

		// Loop over faces(polygon)

	float    nearZ = 0.1f;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ibDesc.StructureByteStride = 0;

	m_Viewport.TopLeftY = 0;

struct ConstantMatrixBuffer {

		return hr;

	SAFE_RELEASE(m_pInputLayout);

			{

	vbDesc.CPUAccessFlags = 0;

		&m_pDevice,

			switch (e.key.keysym.sym)

				vertex.push_back(vertex_tmp);



#define TINYOBJLOADER_IMPLEMENTATION



		R"(cube.obj)");

	m_pSwapChain = NULL;

	//頂点レイアウト作成

		pVList[i] = vertexlist[i];

		KEY_PRESS_SURFACE_DEFAULT,

	//vector<WORD> index_t;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return 1;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

void CD3DTest::Render()

	::ZeroMemory(&scDesc, sizeof(scDesc));

		&m_pImmediateContext);

		if (!ret)

 */

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext = NULL;



				// access to vertex

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	UINT flags = 0;

CD3DTest::~CD3DTest()

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Vertex* pVList = new Vertex[vcount];

	m_VertexCount = 0;

#include <iostream>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		{

		SDL_RenderPresent(ren);

	}



int main(int, char**)

		{

	txDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			}





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				WORD index = idx.vertex_index;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	for (int i = 0; i < 3; i++)

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



HRESULT CD3DTest::Create(HWND hwnd)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	auto& materials = reader.GetMaterials();

	//Create Index

	txDesc.CPUAccessFlags = 0;

			case SDLK_UP:



HRESULT CD3DTest::Create(HWND hwnd)

		//User presses a key

	std::vector<tinyobj::shape_t> shapes;

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	cbDesc.MiscFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include "DirectXManager.h"

	if (FAILED(hr))

	if (m_pImmediateContext)

	scDesc.BufferDesc.Width = rect.Width();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.ParseFromFile(inputfile, reader_config))



{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	auto& materials = reader.GetMaterials();



	m_IndexCount = 0;

	Release();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	if (!error.empty())

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pMatrixBuffer = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	float    fov = XMConvertToRadians(20.0f);



#include <SDL.h>

	cbDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			index_offset += fv;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



			case SDLK_UP:

	std::string error;

	SAFE_RELEASE(m_pSwapChain);

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pTexture);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

#endif

};

	//定数バッファ作成

#include <SDL.h>

	txDesc.SampleDesc.Count = 1;

		return hr;

		exit(1);

}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#include <iostream>

	if (FAILED(hr))



		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.Width = rect.Width();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	dsDesc.Texture2D.MipSlice = 0;

				indexlist.push_back(index);

	XMStoreFloat4(&clb.eyePos, eye);

	}

			}



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

			// Loop over vertices in the face.

		&m_pSwapChain,

				break;



		KEY_PRESS_SURFACE_DOWN,

	D3D11_BUFFER_DESC vbDesc;

	if (!reader.ParseFromFile(inputfile, reader_config))

	//Clean up our objects and quit

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ConstantMaterial material; //物体の質感

	if (!reader.Warning().empty())

	//インデックスバッファ作成

	m_Viewport.MaxDepth = 1.0f;

	};

	std::vector<tinyobj::shape_t> shapes;

			{

	if (!reader.Warning().empty())

struct ConstantMaterial {

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	//Clean up our objects and quit

	m_Angle += XMConvertToRadians(1.0f);

#include <SDL.h>

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





			//Select surfaces based on key press



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	vbDesc.MiscFlags = 0;

	m_IndexCount = 0;

	HRESULT              hr;

	SAFE_RELEASE(m_pSampler);

	m_Viewport.Width = (FLOAT)rect.Width();





	scDesc.BufferDesc.Width = rect.Width();

struct ConstantMatrixBuffer {

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	};

		size_t index_offset = 0;

	ConstantLight    pntLight; //点光源

		if (!ret)

	}

	m_pIndexBuffer = NULL;

			{

			// Loop over vertices in the face.

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	tinyobj::ObjReader reader;

		//User requests quit

	D3D11_SUBRESOURCE_DATA irData;

	m_Viewport.Width = (FLOAT)rect.Width();



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				indexlist.push_back(index);



	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	vector<Vertex> vertexlist;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

}
	m_pTexture = NULL;

	m_pSwapChain = NULL;

	std::vector<tinyobj::shape_t> shapes;

}

		return hr;



	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	float    nearZ = 0.1f;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	D3D11_TEXTURE2D_DESC txDesc;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pTextureView);





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//vector<WORD> index_t;



		//User presses a key

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pRenderTargetView);

}

	m_pDevice = NULL;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

}



	ConstantLightBuffer clb;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

using std::cout; using std::endl;

		KEY_PRESS_SURFACE_DOWN,

	dsDesc.Format = txDesc.Format;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vrData.pSysMem = &pVList[0];

			case SDLK_LEFT:

	std::string inputfile = "test.obj";

	SDL_DestroyTexture(tex);

	//頂点レイアウト作成

	m_Angle += XMConvertToRadians(1.0f);

	D3D11_BUFFER_DESC vbDesc;





	txDesc.MiscFlags = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	std::string inputfile = "test.obj";

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		KEY_PRESS_SURFACE_TOTAL

struct ConstantMaterial {

	std::string imagePath = "hello.bmp";

	m_pRenderTargetView = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

		SDL_Delay(1000);

	if (FAILED(hr))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	std::string imagePath = "hello.bmp";







	vbDesc.StructureByteStride = 0;

	}

	cbDesc.MiscFlags = 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilView = NULL;

	if (!reader.Warning().empty())

	if (FAILED(hr))

	SDL_Quit();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

		&attrib,

 * Lesson 1: Hello World!

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pSwapChain = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	cbDesc.MiscFlags = 0;

		&attrib,

	XMStoreFloat4(&clb.eyePos, eye);

	{

#include <iostream>

	for (int j = 0; j < icount; j++)



	}

	std::vector<tinyobj::shape_t> shapes;

	}

			case SDLK_UP:

	auto& shapes = reader.GetShapes();

	vector<WORD> indexList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//Key press surfaces constants

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Create Index

		if (e.type == SDL_QUIT)

			case SDLK_RIGHT:

			index_offset += num_vertices;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_VertexCount = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	m_pTexture = NULL;

	SDL_DestroyWindow(win);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;





	vbDesc.StructureByteStride = 0;

		//User presses a key

	UINT offsets = 0;

	scDesc.BufferDesc.Height = rect.Height();

	auto& materials = reader.GetMaterials();

	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

struct ConstantLightBuffer {

	}

struct ConstantLightBuffer {

	{

			index_offset += num_vertices;

		size_t index_offset = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

CD3DTest::~CD3DTest()

	//Create Index

void CD3DTest::Render()



			{

	D3D11_BUFFER_DESC ibDesc;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		}



	cbDesc.StructureByteStride = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pTextureView);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pDepthStencilView);

	m_Viewport.TopLeftY = 0;



	{



	D3D11_BUFFER_DESC cbDesc;





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

	if (FAILED(hr))

		&scDesc,

	return 0;

	//ピクセルシェーダー生成

	m_Viewport.Height = (FLOAT)rect.Height();

				break;

	SDL_DestroyRenderer(ren);

	}

 * Lesson 1: Hello World!

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

CD3DTest::CD3DTest()

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&scDesc,

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			default:

	m_pDepthStencilTexture = NULL;

		{

	vector<Vertex> vertexlist;

	Vertex* pVList = new Vertex[vcount];



	float    aspect = m_Viewport.Width / m_Viewport.Height;



			default:

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};

	UINT strides = sizeof(Vertex);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	UINT offsets = 0;

		&materials,

	return 0;



		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Event e;







{

		return hr;

{

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4         eyePos;   //視点座標

#include <SDL.h>

	{

	for (size_t s = 0; s < shapes.size(); s++)



	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#include <SDL.h>







				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		}







	//vector<WORD> index_t;

	m_Viewport.TopLeftX = 0;

int main(int, char**)

	vector<Vertex> vertexlist;

		// Loop over faces(polygon)

		pLevels,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		{

	for (int i = 0; i < 3; i++)

	m_pImmediateContext = NULL;

	delete[] pVList;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			}

	if (FAILED(hr))

}

	WORD* pIList = new WORD[icount];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

struct ConstantLightBuffer {

			index_offset += fv;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	// Loop over shapes

	//Vertex* pVList = new Vertex[vcount];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_DestroyTexture(tex);

	XMFLOAT4 attenuate;         //減衰(a,b,c)



				break;

	ConstantMatrixBuffer cmb;

	std::string inputfile = "test.obj";

#include <iostream>

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.Windowed = TRUE;

CD3DTest::~CD3DTest()

		}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_Viewport.MinDepth = 0.0f;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	}

	return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{

	}



	if (FAILED(hr))

	m_pLightBuffer = NULL;

		delete[] pVList;

	SAFE_RELEASE(m_pSwapChain);

	m_IndexCount = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	{



	vector<Vertex> vertexlist;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	LoadObj(vertexlist, indexList);

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Quality = 0;

	{

	SAFE_RELEASE(m_pImmediateContext);

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	std::string imagePath = "hello.bmp";

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.ArraySize = 1;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	DXGI_SWAP_CHAIN_DESC scDesc;

	float    nearZ = 0.1f;

		delete[] pIList;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    nearZ = 0.1f;

}


				// access to vertex

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	if (FAILED(hr))

	XMFLOAT4X4 world;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

	delete[] pIList;

	//vector<Vertex> vertex_t;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pInputLayout = NULL;

	HRESULT              hr;

	enum KeyPressSurfaces

				break;

		delete[] pIList;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	txDesc.Height = rect.Height();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_IndexCount = icount;

	SDL_DestroyWindow(win);

		KEY_PRESS_SURFACE_LEFT,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



			for (size_t v = 0; v < fv; v++)

	//インデックスバッファ作成





	}*/

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vrData.SysMemPitch = 0;



	float    nearZ = 0.1f;

		KEY_PRESS_SURFACE_TOTAL

		SDL_RenderPresent(ren);

#include <SDL.h>

};

	{

	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//vector<WORD> index_t;

#include <SDL.h>

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	SAFE_RELEASE(m_pMatrixBuffer);

	{

	m_pImmediateContext = NULL;

				WORD index = idx.vertex_index;

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void CD3DTest::Release()



#ifdef _DEBUG

		&error,

	CRect                rect;

	m_pDepthStencilTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	int     vcount = vertexlist.size();







	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

			// Loop over vertices in the face.

		SDL_RenderClear(ren);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b)



	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pSwapChain);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		pIList[j] = indexList[j];

	m_pInputLayout = NULL;

		&m_pDevice,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.CPUAccessFlags = 0;



HRESULT CD3DTest::Create(HWND hwnd)

	m_pSampler = NULL;

		return hr;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4X4 view;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pDepthStencilView = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				WORD index = idx.vertex_index;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	bool ret = tinyobj::LoadObj(







		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	// Loop over shapes

}

				vertex.push_back(vertex_tmp);

	}*/

	scDesc.SampleDesc.Count = 1;

		pLevels,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	std::vector<tinyobj::material_t> materials;

		&attrib,

	SDL_Quit();

	m_pImmediateContext = NULL;

		return hr;

			for (size_t v = 0; v < fv; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&materials,

	SAFE_RELEASE(m_pRenderTargetView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	XMStoreFloat4(&clb.eyePos, eye);

	ConstantMaterial material; //物体の質感

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	{



	//定数バッファ作成



	}

	{



	m_IndexCount = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	LoadObj(vertexlist, indexList);



HRESULT CD3DTest::Create(HWND hwnd)

	m_Viewport.TopLeftX = 0;

		return hr;

	txDesc.ArraySize = 1;

	if (FAILED(hr))

	{

 */

	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D_FEATURE_LEVEL level;





		KEY_PRESS_SURFACE_RIGHT,

		D3D11_SDK_VERSION,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		D3D11_SDK_VERSION,



	scDesc.Windowed = TRUE;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	return 0;



	vbDesc.MiscFlags = 0;

	m_pMatrixBuffer = NULL;

	}

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4 ambient;           //環境(r,g,b)



				vertex.push_back(vertex_tmp);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

using std::cout; using std::endl;

				break;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	delete[] pIList;



	}



		m_pImmediateContext->ClearState();

	vector<WORD> indexList;

			exit(1);

	SAFE_RELEASE(m_pInputLayout);

		&m_pImmediateContext);



	{

			{

	m_pLightBuffer = NULL;



	{

	txDesc.Height = rect.Height();

	}

		1,



		SDL_RenderClear(ren);

		if (!ret)





	XMFLOAT4 ambient;           //環境(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		pIList[j] = indexList[j];

	SDL_Quit();

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pTextureView = NULL;

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (!error.empty())

	if (!reader.ParseFromFile(inputfile, reader_config))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	SAFE_RELEASE(m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}

		KEY_PRESS_SURFACE_TOTAL

	return 0;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	irData.pSysMem = &pIList[0];



				// access to vertex

	/*

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ID3D11Texture2D* pBackBuffer;

	m_pRenderTargetView = NULL;

	//ピクセルシェーダー生成

			index_offset += num_vertices;



	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&m_pImmediateContext);

#define TINYOBJLOADER_IMPLEMENTATION

			for (size_t v = 0; v < fv; v++)

	std::vector<tinyobj::shape_t> shapes;





			{

	UINT strides = sizeof(Vertex);

		}

	{

		if (e.type == SDL_QUIT)

	m_pMatrixBuffer = NULL;

void CD3DTest::Release()



	float    nearZ = 0.1f;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

		flags,

	auto& attrib = reader.GetAttrib();

		size_t index_offset = 0;

		KEY_PRESS_SURFACE_LEFT,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_RenderClear(ren);

	vector<WORD> indexList;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pMatrixBuffer);





#define TINYOBJLOADER_IMPLEMENTATION



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_pSwapChain->Present(0, 0);

	txDesc.SampleDesc.Count = 1;

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pTexture = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		KEY_PRESS_SURFACE_DOWN,

		return hr;

		&attrib,

	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			default:

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	std::string error;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyRenderer(ren);

};

#include <SDL.h>

		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		R"(cube.obj)");

	m_Viewport.Width = (FLOAT)rect.Width();

	ConstantMatrixBuffer cmb;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		size_t index_offset = 0;  // インデントのオフセット

	m_pSampler = NULL;



	std::vector<tinyobj::shape_t> shapes;

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	delete[] pIList;

	//Create Index

	}

	txDesc.MiscFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	float    nearZ = 0.1f;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4X4 projection;

		SDL_RenderClear(ren);

	delete[] pVList;

		exit(1);

	//ビューポート設定

		D3D11_SDK_VERSION,

				tinyobj::real_t tx =

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

{



	/*

			exit(1);





	WORD* pIList = new WORD[icount];

	tinyobj::ObjReader reader;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ConstantMatrixBuffer cmb;

	SDL_FreeSurface(bmp);

		return hr;

	if (FAILED(hr))

	//ビューポート設定

	m_pTexture = NULL;

	}

	Vertex* pVList = new Vertex[vcount];



	tinyobj::attrib_t attrib;



	SDL_DestroyWindow(win);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	for (int i = 0; i < vcount; i++)

	XMFLOAT4 specular;          //反射(r,g,b)

	std::string error;

	//Clean up our objects and quit

	//Create Index

		D3D_DRIVER_TYPE_HARDWARE,



			case SDLK_RIGHT:

	vbDesc.MiscFlags = 0;

	UINT offsets = 0;



				break;

	SDL_Event e;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	//インデックスバッファ作成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

CD3DTest::~CD3DTest()





		1,



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	enum KeyPressSurfaces

			case SDLK_LEFT:

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext = NULL;

	enum KeyPressSurfaces

	D3D11_BUFFER_DESC vbDesc;

		{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DOWN,

	}

		KEY_PRESS_SURFACE_DOWN,



	m_pSampler = NULL;

	m_pTextureView = NULL;



		SDL_RenderCopy(ren, tex, NULL, NULL);

		NULL,

}

	UINT strides = sizeof(Vertex);

	txDesc.SampleDesc.Quality = 0;

	SDL_DestroyTexture(tex);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				WORD index = idx.vertex_index;



	//頂点シェーダー生成

	//vector<WORD> index_t;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pDevice);

		&level,

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 projection;

	XMFLOAT4X4 world;



	SAFE_RELEASE(m_pTextureView);

	}

	{



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



using std::cout; using std::endl;

{

#include "DirectXManager.h"

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);







		//User presses a key

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pRenderTargetView);

		}

	dsDesc.Format = txDesc.Format;



		&m_pSwapChain,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

 * Lesson 1: Hello World!

				break;

		&shapes,

	{

	D3D11_SUBRESOURCE_DATA irData;

	scDesc.BufferCount = 1;

	m_pIndexBuffer = NULL;



	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D_FEATURE_LEVEL level;



				tinyobj::real_t ty =



			for (size_t v = 0; v < fv; v++)

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		NULL,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_FreeSurface(suf);

	// Loop over shapes

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		//User presses a key

	if (FAILED(hr))

	//Clean up our objects and quit

	delete[] pVList;



				break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pIndexBuffer);

			case SDLK_UP:



};

				break;

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pIndexBuffer = NULL;

	SDL_DestroyRenderer(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





			{



			break;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

{



	std::string inputfile = "test.obj";

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pTexture);

}
	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



			int num_vertices = shape.mesh.num_face_vertices[f];

	dsDesc.Texture2D.MipSlice = 0;

	}

	Vertex* pVList = new Vertex[vcount];



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Quit();

	SDL_Event e;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_VertexCount = 0;

int main(int, char**)

		m_pImmediateContext->ClearState();

#include <SDL.h>

	//定数バッファ作成

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::string inputfile = "test.obj";

{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



}

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

			{

	{

}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

};

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				indexlist.push_back(idx.vertex_index);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4X4 view;

	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];

int main(int, char**)

CD3DTest::CD3DTest()

	m_pDepthStencilTexture = NULL;

	m_pRenderTargetView = NULL;

	{

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





		{

		return hr;

CD3DTest::CD3DTest()





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				WORD index = idx.vertex_index;

		&level,



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				vertex.push_back(vertex_tmp);

struct ConstantMaterial {

	m_pSwapChain = NULL;



	}

	SAFE_RELEASE(m_pImmediateContext);







		cout << "SDL_INIT_ERROR" << endl;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

	}

	scDesc.OutputWindow = hwnd;



		&error,

	}

	//Key press surfaces constants

	SDL_Event e;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_VertexCount = vcount;

	vrData.SysMemPitch = 0;



	SDL_FreeSurface(bmp);

	m_IndexCount = icount;

		if (!reader.Error().empty())

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			}

			}

	if (FAILED(hr))



	while (SDL_PollEvent(&e) != 0)

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.CPUAccessFlags = 0;

}

		&materials,

{



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	int     vcount = vertexlist.size();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pMatrixBuffer = NULL;

		1,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    nearZ = 0.1f;

	txDesc.SampleDesc.Quality = 0;



	UINT strides = sizeof(Vertex);

		KEY_PRESS_SURFACE_DOWN,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//ピクセルシェーダー生成

	scDesc.BufferCount = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	}

		return hr;

	if (m_pImmediateContext)

		}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	dsDesc.Format = txDesc.Format;

	{





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

#endif

		R"(cube.obj)");

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.BufferCount = 1;



	XMFLOAT4X4 view;

		pIList[j] = indexList[j];

HRESULT CD3DTest::Create(HWND hwnd)



			case SDLK_LEFT:

			case SDLK_UP:

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_IndexCount = icount;

			for (size_t v = 0; v < fv; v++)

	while (SDL_PollEvent(&e) != 0)

		{

}

	reader_config.mtl_search_path = "./"; // Path to material files





{

	// Loop over shapes

				break;

	SDL_DestroyTexture(tex);



	tinyobj::ObjReader reader;

	m_pVertexBuffer = NULL;



struct ConstantMaterial {

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//インデックスバッファ作成

		&level,

	m_pSampler = NULL;

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	SDL_DestroyRenderer(ren);

	m_pImmediateContext = NULL;



		KEY_PRESS_SURFACE_TOTAL

				break;

		pVList[i] = vertexlist[i];

				WORD index = idx.vertex_index;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		return hr;

		SDL_Delay(1000);

	m_pImmediateContext = NULL;

	m_pPixelShader = NULL;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{



	//Create Index



		return hr;

	auto& shapes = reader.GetShapes();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemSlicePitch = 0;

	::GetClientRect(hwnd, &rect);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			}

	D3D11_BUFFER_DESC cbDesc;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyTexture(tex);

	{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_TEXTURE2D_DESC txDesc;



	m_Viewport.MinDepth = 0.0f;

	enum KeyPressSurfaces

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		1,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

};

		{





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = vcount;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		KEY_PRESS_SURFACE_DOWN,

			exit(1);

	XMFLOAT4         ambient;  //環境光(r,g,b)

 * Lesson 1: Hello World!

	//頂点レイアウト作成

	m_pVertexShader = NULL;

	std::vector<tinyobj::material_t> materials;

}

struct ConstantMatrixBuffer {



	}

 * Lesson 1: Hello World!

	std::string imagePath = "hello.bmp";

	ConstantLight    pntLight; //点光源

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

}

				// access to vertex

	ConstantMaterial material; //物体の質感



{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		1,



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	}

		if (e.type == SDL_QUIT)

	XMFLOAT4         ambient;  //環境光(r,g,b)



	//vector<WORD> index_t;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				WORD index = idx.vertex_index;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		else if (e.type == SDL_KEYDOWN)

	m_pSwapChain = NULL;

				break;

	XMFLOAT4X4 view;

			case SDLK_LEFT:

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





{

	SAFE_RELEASE(m_pRenderTargetView);

	dsDesc.Format = txDesc.Format;

				// access to vertex

	SAFE_RELEASE(m_pVertexBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t tx =

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



}

	txDesc.Width = rect.Width();

		SDL_RenderClear(ren);

	for (int j = 0; j < icount; j++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	for (int j = 0; j < icount; j++)

			//Select surfaces based on key press

	cbDesc.MiscFlags = 0;

		return hr;

};

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_DestroyWindow(win);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	auto& shapes = reader.GetShapes();

	XMFLOAT4X4 world;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//First we need to start up SDL, and make sure it went ok



	{



{

	m_pSwapChain->Present(0, 0);



	{

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pRenderTargetView);

int main(int, char**)

	vrData.SysMemPitch = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

 */

	m_VertexCount = vcount;

	if (FAILED(hr))



		return hr;

	UINT flags = 0;

	}

	cbDesc.StructureByteStride = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);



		{



			index_offset += fv;

{

	SAFE_RELEASE(m_pSwapChain);

			}

	auto& materials = reader.GetMaterials();

	m_pDepthStencilTexture = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))





		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		KEY_PRESS_SURFACE_LEFT,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

	}*/

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

			{

		SDL_RenderPresent(ren);

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		KEY_PRESS_SURFACE_LEFT,

	vector<WORD> indexList;

		pLevels,

	if (FAILED(hr))



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4         eyePos;   //視点座標

}
	D3D11_TEXTURE2D_DESC txDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	delete[] pIList;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pPixelShader = NULL;

	D3D_FEATURE_LEVEL level;

	tinyobj::ObjReader reader;

		return 1;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



}



	{



	cbDesc.MiscFlags = 0;

	auto& shapes = reader.GetShapes();

			{

	auto& materials = reader.GetMaterials();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





			break;

	SAFE_RELEASE(m_pDevice);

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		KEY_PRESS_SURFACE_TOTAL

	m_pTexture = NULL;

	m_pSampler = NULL;

{

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			{

	scDesc.OutputWindow = hwnd;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pDevice = NULL;

 * Lesson 1: Hello World!

		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	cbDesc.StructureByteStride = 0;

	//頂点レイアウト作成

	SAFE_RELEASE(m_pMatrixBuffer);



		{

		pVList[i] = vertexlist[i];



HRESULT CD3DTest::Create(HWND hwnd)



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		}



	SAFE_RELEASE(m_pPixelShader);

		else if (e.type == SDL_KEYDOWN)

	ConstantLightBuffer clb;

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	return hr;

		{

		KEY_PRESS_SURFACE_UP,

	SDL_DestroyRenderer(ren);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			{

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pTextureView);



	txDesc.Width = rect.Width();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vrData.pSysMem = &pVList[0];

		}







	{

		return hr;

#include "DirectXManager.h"

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	Release();

			switch (e.key.keysym.sym)



	m_pDepthStencilTexture = NULL;

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	for (const auto& shape : shapes)

}

	SDL_DestroyWindow(win);

		return 1;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	std::string error;



#endif

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

#include <iostream>

		&m_pImmediateContext);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vrData.pSysMem = &pVList[0];

	if (m_pImmediateContext)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		D3D11_SDK_VERSION,

	SDL_FreeSurface(suf);

				break;



	m_pRenderTargetView = NULL;

	m_pVertexShader = NULL;



	if (m_pImmediateContext)

		if (!reader.Error().empty())

	SDL_Quit();

	}

	//定数バッファ作成

		return hr;

	m_pVertexShader = NULL;

	return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pVertexShader = NULL;

	}

	}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.ArraySize = 1;

	{

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pSampler);

	SDL_FreeSurface(suf);

{

#endif

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	cbDesc.CPUAccessFlags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

}
		&m_pSwapChain,

			case SDLK_DOWN:





	vrData.SysMemPitch = 0;

	Release();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_DestroyRenderer(ren);

		}

	}

			exit(1);

	scDesc.SampleDesc.Quality = 0;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

	m_pMatrixBuffer = NULL;

	}

	}

	{

		m_pImmediateContext->ClearState();

	pBackBuffer->Release();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

		return hr;

	if (FAILED(hr))

		// Loop over faces(polygon)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	irData.SysMemSlicePitch = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	};

};

		delete[] pVList;

	std::vector<tinyobj::shape_t> shapes;

			int num_vertices = shape.mesh.num_face_vertices[f];

	{



	m_pImmediateContext = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

	scDesc.OutputWindow = hwnd;



 * Lesson 1: Hello World!



#endif

		&level,

		cout << "SDL_INIT_ERROR" << endl;



		flags,

int main(int, char**)



	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_Viewport.MaxDepth = 1.0f;

	SDL_DestroyWindow(win);



	ConstantMaterial material; //物体の質感

		m_pImmediateContext->ClearState();

}

	auto& attrib = reader.GetAttrib();

	}

				tinyobj::real_t tx =

		delete[] pVList;

	if (!reader.Warning().empty())

	m_Angle += XMConvertToRadians(1.0f);

	scDesc.OutputWindow = hwnd;



		}

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

};



		return hr;

	m_VertexCount = vcount;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		SDL_RenderPresent(ren);

	XMFLOAT4X4 world;



	ibDesc.MiscFlags = 0;





		return hr;

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_IndexCount = 0;

	if (FAILED(hr))

	//テクスチャ読み込み

	txDesc.Height = rect.Height();

	XMFLOAT4X4 projection;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		SDL_RenderPresent(ren);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pVertexShader = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		//User presses a key

		D3D11_SDK_VERSION,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//vector<WORD> index_t;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ConstantLightBuffer clb;

			index_offset += num_vertices;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			index_offset += num_vertices;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Viewport.MinDepth = 0.0f;



		&m_pDevice,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Quit();



#define TINYOBJLOADER_IMPLEMENTATION

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pVertexBuffer);





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vbDesc.CPUAccessFlags = 0;

	{

	m_pInputLayout = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			index_offset += fv;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		NULL,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b)

			break;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_Viewport.TopLeftX = 0;

	SDL_DestroyRenderer(ren);

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))



				tinyobj::real_t ty =

			{

#include <SDL.h>

	m_pVertexShader = NULL;

	XMFLOAT4         eyePos;   //視点座標

	std::string inputfile = "test.obj";

	scDesc.BufferCount = 1;

	ConstantLightBuffer clb;

		return hr;

		pLevels,

	SAFE_RELEASE(m_pVertexShader);

		// Loop over faces(polygon)

	for (size_t s = 0; s < shapes.size(); s++)



	{







			//Select surfaces based on key press

	dsDesc.Texture2D.MipSlice = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_TOTAL

	SDL_Quit();

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext = NULL;

	{

	//頂点バッファ作成

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//インデックスバッファ作成

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_LEFT,

		return hr;



	SAFE_RELEASE(m_pInputLayout);





	if (!reader.ParseFromFile(inputfile, reader_config))



	XMFLOAT4X4 view;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vrData.SysMemSlicePitch = 0;

				// access to vertex

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		&m_pSwapChain,



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_Viewport.MaxDepth = 1.0f;

	while (SDL_PollEvent(&e) != 0)

{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



			int num_vertices = shape.mesh.num_face_vertices[f];

		&scDesc,



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				vertex.push_back(vertex_tmp);





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			for (size_t v = 0; v < fv; v++)

			}

	m_VertexCount = vcount;

		pIList[j] = indexList[j];

			exit(1);

	//頂点シェーダー生成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				break;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ConstantMatrixBuffer cmb;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SAFE_RELEASE(m_pInputLayout);



			for (size_t v = 0; v < fv; v++)

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	std::string inputfile = "test.obj";

		exit(1);

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderPresent(ren);

			{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ZeroMemory(&txDesc, sizeof(txDesc));

	return 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Quit();

int main(int, char**)

			// Loop over vertices in the face.

	{



	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.ambient, lightAmbient);



struct ConstantMatrixBuffer {

	D3D_FEATURE_LEVEL level;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDevice);

	txDesc.MiscFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}





 */



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

		KEY_PRESS_SURFACE_DOWN,

		if (e.type == SDL_QUIT)

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{

		if (e.type == SDL_QUIT)

	};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	float    farZ = 100.0f;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	D3D_FEATURE_LEVEL level;

		pIList[j] = indexList[j];

};



	m_Angle += XMConvertToRadians(1.0f);

		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		cout << "SDL_INIT_ERROR" << endl;

		SDL_RenderClear(ren);

	txDesc.SampleDesc.Count = 1;

	cbDesc.StructureByteStride = 0;

		return hr;



	cbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	};

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.Height = rect.Height();



	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	//頂点シェーダー生成

	m_Viewport.MaxDepth = 1.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pIndexBuffer = NULL;



			break;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ibDesc.MiscFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)



	SAFE_RELEASE(m_pSwapChain);

	HRESULT              hr;

	scDesc.BufferDesc.Height = rect.Height();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ConstantLightBuffer clb;

	m_VertexCount = vcount;

			}

	std::string imagePath = "hello.bmp";

};

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (!error.empty())

	ConstantLight    pntLight; //点光源

CD3DTest::~CD3DTest()

	for (int j = 0; j < icount; j++)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pMatrixBuffer = NULL;

	//Vertex* pVList = new Vertex[vcount];

		return hr;

	//vector<WORD> index_t;

	m_pVertexBuffer = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

}

		NULL,

	if (!reader.ParseFromFile(inputfile, reader_config))

	//Vertex* pVList = new Vertex[vcount];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))



		m_pImmediateContext->ClearState();

	vrData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pSwapChain->Present(0, 0);

	irData.SysMemSlicePitch = 0;

			case SDLK_UP:

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext = NULL;

		//User presses a key

		return hr;

	txDesc.SampleDesc.Count = 1;

	//ビューポート設定

	bool ret = tinyobj::LoadObj(

	XMFLOAT4         ambient;  //環境光(r,g,b)

HRESULT CD3DTest::Create(HWND hwnd)

	if (!reader.ParseFromFile(inputfile, reader_config))

	WORD* pIList = new WORD[icount];

	std::string imagePath = "hello.bmp";

	m_pVertexBuffer = NULL;

				break;

	D3D_FEATURE_LEVEL level;

	Vertex* pVList = new Vertex[vcount];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&attrib,

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

using std::cout; using std::endl;



	txDesc.ArraySize = 1;

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	tinyobj::ObjReader reader;

	if (FAILED(hr))

	m_pSwapChain = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		KEY_PRESS_SURFACE_UP,

	m_Viewport.MinDepth = 0.0f;

int SEGMENT = 36;



		KEY_PRESS_SURFACE_DOWN,

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_DEFAULT,

	std::vector<tinyobj::shape_t> shapes;

	SDL_FreeSurface(bmp);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		&m_pDevice,

};

		D3D_DRIVER_TYPE_HARDWARE,

	for (int j = 0; j < icount; j++)

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		}

	txDesc.ArraySize = 1;

		&materials,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::string error;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	dsDesc.Format = txDesc.Format;

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pMatrixBuffer = NULL;

	//ビューポート設定

		delete[] pIList;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;

		}

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_SUBRESOURCE_DATA vrData;



}
	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	vrData.SysMemPitch = 0;

{

	vbDesc.CPUAccessFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

		{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	{

	auto& shapes = reader.GetShapes();





				WORD index = idx.vertex_index;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

 */

	//vector<Vertex> vertex_t;

};



	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	scDesc.OutputWindow = hwnd;

				WORD index = idx.vertex_index;

				break;

				WORD index = idx.vertex_index;

	scDesc.BufferDesc.Width = rect.Width();

		D3D_DRIVER_TYPE_HARDWARE,





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.StructureByteStride = 0;

int SEGMENT = 36;

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	XMFLOAT4 pos;               //座標(x,y,z)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	m_pTexture = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//Key press surfaces constants

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pTextureView = NULL;

	SDL_DestroyWindow(win);

	txDesc.MipLevels = 1;

	SDL_DestroyTexture(tex);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





		if (e.type == SDL_QUIT)

			case SDLK_UP:

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//ピクセルシェーダー生成

	std::string inputfile = "test.obj";

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	}



		KEY_PRESS_SURFACE_RIGHT,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	Vertex* pVList = new Vertex[vcount];



	vector<Vertex> vertexlist;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		}



		SDL_Delay(1000);

		&scDesc,

}

	D3D11_BUFFER_DESC ibDesc;

		delete[] pIList;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pVertexBuffer);

	}



	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pDepthStencilTexture);





}
	ibDesc.ByteWidth = sizeof(WORD) * icount;

		size_t index_offset = 0;

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_Viewport.MinDepth = 0.0f;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4 specular;          //反射(r,g,b)

				break;

	if (FAILED(hr))

		1,

			index_offset += fv;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	dsDesc.Format = txDesc.Format;

	if (m_pImmediateContext)

		D3D11_SDK_VERSION,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	if (!reader.Warning().empty())

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyTexture(tex);

	}

		delete[] pIList;





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext = NULL;

				break;





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{



		SDL_RenderCopy(ren, tex, NULL, NULL);



	::GetClientRect(hwnd, &rect);

}

	m_Viewport.TopLeftY = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

{

	{

	if (FAILED(hr))

	Release();

	D3D11_SUBRESOURCE_DATA irData;

	//テクスチャ読み込み

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	float    farZ = 100.0f;



				vertex.push_back(vertex_tmp);

		SDL_RenderClear(ren);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4X4 world;

	LoadObj(vertexlist, indexList);

		&shapes,

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.MiscFlags = 0;

	return 0;

		return hr;

	//Clean up our objects and quit

	txDesc.MiscFlags = 0;

	//Create Index

		&attrib,

		if (!ret)

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pLightBuffer);

	WORD* pIList = new WORD[icount];

		D3D_DRIVER_TYPE_HARDWARE,

	UINT flags = 0;

{

	if (FAILED(hr))

	m_pPixelShader = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#include <SDL.h>



	scDesc.BufferCount = 1;

 * Lesson 1: Hello World!



		}

		SDL_Delay(1000);

	m_pSwapChain->Present(0, 0);

			}

	// Loop over shapes

		pIList[j] = indexList[j];

	D3D11_BUFFER_DESC ibDesc;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

}



struct ConstantLight {

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}



{

	{

	cbDesc.MiscFlags = 0;

	{

	vrData.SysMemPitch = 0;

		}

	m_pLightBuffer = NULL;

	D3D11_BUFFER_DESC ibDesc;

				indexlist.push_back(idx.vertex_index);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Quit();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float    farZ = 100.0f;

	/*



			switch (e.key.keysym.sym)



	m_Viewport.TopLeftX = 0;

	scDesc.SampleDesc.Quality = 0;

	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t ty =

	m_IndexCount = icount;



			{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	tinyobj::attrib_t attrib;

	m_pSwapChain->Present(0, 0);

		KEY_PRESS_SURFACE_LEFT,

	m_pSwapChain->Present(0, 0);

		}

	vector<WORD> indexList;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.SampleDesc.Quality = 0;

		{

				// access to vertex

}

	txDesc.MiscFlags = 0;

	txDesc.Height = rect.Height();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pLightBuffer);

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

{



	//Key press surfaces constants

	m_IndexCount = icount;

	scDesc.Windowed = TRUE;

	for (size_t s = 0; s < shapes.size(); s++)

	return hr;

	vector<Vertex> vertexlist;



	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Quit();

		&m_pImmediateContext);

	vbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			}

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.Width = rect.Width();

		&m_pSwapChain,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	UINT flags = 0;

		//User presses a key

	vbDesc.CPUAccessFlags = 0;

			exit(1);

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext = NULL;

	//First we need to start up SDL, and make sure it went ok

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4X4 world;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		size_t index_offset = 0;  // インデントのオフセット

#include <SDL.h>



	D3D11_BUFFER_DESC cbDesc;

	pBackBuffer->Release();

			exit(1);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	return;

	XMStoreFloat4(&clb.ambient, lightAmbient);





		}

	SAFE_RELEASE(m_pInputLayout);

	}



	txDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	delete[] pIList;

		D3D11_SDK_VERSION,

		{



	cbDesc.CPUAccessFlags = 0;





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				WORD index = idx.vertex_index;

		delete[] pVList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return 1;

		1,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		else if (e.type == SDL_KEYDOWN)







	}



	LoadObj(vertexlist, indexList);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



{

	scDesc.BufferCount = 1;

	{

	//First we need to start up SDL, and make sure it went ok



using std::cout; using std::endl;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		D3D11_SDK_VERSION,

	}

};

	{



#include <iostream>

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,



	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pImmediateContext);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		KEY_PRESS_SURFACE_DOWN,

	m_Viewport.MinDepth = 0.0f;

	std::vector<tinyobj::material_t> materials;

	m_pTextureView = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	vbDesc.StructureByteStride = 0;

	LoadObj(vertexlist, indexList);

	SDL_FreeSurface(bmp);

	SDL_DestroyWindow(win);

	auto& attrib = reader.GetAttrib();

	std::vector<tinyobj::material_t> materials;

	Release();



	ibDesc.CPUAccessFlags = 0;

	if (!error.empty())

	::GetClientRect(hwnd, &rect);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Quit();





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	auto& materials = reader.GetMaterials();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	auto& attrib = reader.GetAttrib();

				break;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pMatrixBuffer = NULL;

			break;

	UINT flags = 0;

	Release();



		SDL_RenderClear(ren);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_Delay(1000);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vbDesc.CPUAccessFlags = 0;

	return;

	//ピクセルシェーダー生成

	/*

	SDL_Event e;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		SDL_Delay(1000);

	dsDesc.Texture2D.MipSlice = 0;

			{



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

	std::string imagePath = "hello.bmp";

		&error,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	std::vector<tinyobj::material_t> materials;

	{





		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	if (FAILED(hr))

	}*/

	}

	SAFE_RELEASE(m_pSwapChain);

			// Loop over vertices in the face.

	::ZeroMemory(&scDesc, sizeof(scDesc));

		SDL_RenderPresent(ren);

	cbDesc.StructureByteStride = 0;

	return 0;

	//深度ステンシルバッファ作成

	//定数バッファ作成

	m_pSwapChain = NULL;

	m_VertexCount = 0;



	::GetClientRect(hwnd, &rect);



#include <SDL.h>



	/*

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//Clean up our objects and quit

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t ty =

}

	SAFE_RELEASE(m_pSwapChain);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

	}*/

	auto& attrib = reader.GetAttrib();

		if (!ret)

				break;

		SDL_Delay(1000);

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyRenderer(ren);

	//Create Index

	txDesc.CPUAccessFlags = 0;

{

	{

	//定数バッファ作成

{

		//User presses a key

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			// Loop over vertices in the face.

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	scDesc.BufferDesc.Width = rect.Width();



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.SysMemSlicePitch = 0;

		return hr;





struct ConstantLightBuffer {

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		SDL_RenderClear(ren);

	return 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	txDesc.SampleDesc.Quality = 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

using std::cout; using std::endl;

	UINT offsets = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#include <SDL.h>

#ifdef _DEBUG

		D3D11_SDK_VERSION,

	m_IndexCount = icount;

	//頂点レイアウト作成



	delete[] pIList;

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



{

struct ConstantLight {

{

		SDL_RenderCopy(ren, tex, NULL, NULL);



	float    nearZ = 0.1f;

		if (!reader.Error().empty())

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



				break;

	for (int j = 0; j < icount; j++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pVertexShader = NULL;

		&attrib,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4 specular;          //反射(r,g,b)

	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

	vrData.SysMemPitch = 0;

	scDesc.OutputWindow = hwnd;



#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

 * Lesson 1: Hello World!

		//User presses a key

	WORD   icount = indexList.size();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#include <SDL.h>



	m_pDevice = NULL;

	{

				indexlist.push_back(idx.vertex_index);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ZeroMemory(&txDesc, sizeof(txDesc));



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

	Release();



	m_Viewport.TopLeftX = 0;

		size_t index_offset = 0;  // インデントのオフセット

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	auto& materials = reader.GetMaterials();

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





		//User requests quit

		}

		SDL_Delay(1000);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		}



}

	reader_config.mtl_search_path = "./"; // Path to material files

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	auto& materials = reader.GetMaterials();



		&m_pDevice,

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

	SAFE_RELEASE(m_pTexture);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//Key press surfaces constants

		else if (e.type == SDL_KEYDOWN)

void CD3DTest::Release()





	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



{

 */

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	SAFE_RELEASE(m_pVertexShader);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pDepthStencilView);



		delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.MiscFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



			break;

	//深度ステンシルバッファ作成

	D3D11_BUFFER_DESC cbDesc;

	UINT flags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#ifdef _DEBUG

	m_pSampler = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//頂点レイアウト作成

	std::vector<tinyobj::shape_t> shapes;

	return 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pInputLayout = NULL;

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pLightBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			break;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		delete[] pVList;

	txDesc.ArraySize = 1;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	float    fov = XMConvertToRadians(20.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	for (size_t s = 0; s < shapes.size(); s++)

	}

	cbDesc.CPUAccessFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));



				// access to vertex





		SDL_RenderCopy(ren, tex, NULL, NULL);

		pIList[j] = indexList[j];



		return hr;



	vrData.SysMemPitch = 0;



	m_Viewport.MaxDepth = 1.0f;

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			case SDLK_LEFT:

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

#include <SDL.h>

	};

	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_DEFAULT,

	ID3D11Texture2D* pBackBuffer;

	}*/

	vector<WORD> indexList;

	cbDesc.CPUAccessFlags = 0;



	txDesc.Width = rect.Width();

};

	m_Viewport.MaxDepth = 1.0f;



	SAFE_RELEASE(m_pVertexShader);





	txDesc.MiscFlags = 0;

			switch (e.key.keysym.sym)

		{



	std::string inputfile = "test.obj";



	}

		delete[] pIList;

	reader_config.mtl_search_path = "./"; // Path to material files

		&error,

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}*/

		return 1;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4X4 view;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			{

	XMFLOAT4X4 world;

	vrData.SysMemPitch = 0;

}



	{

/*

		&scDesc,

{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))







		&m_pDevice,

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4         ambient;  //環境光(r,g,b)



#endif

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				break;

	m_pMatrixBuffer = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}



		{

	SAFE_RELEASE(m_pLightBuffer);



	int     vcount = vertexlist.size();



	SAFE_RELEASE(m_pVertexBuffer);

		SDL_RenderClear(ren);

	m_pTexture = NULL;



		return hr;

	}

	vrData.SysMemSlicePitch = 0;

				break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t ty =

	txDesc.Height = rect.Height();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			int num_vertices = shape.mesh.num_face_vertices[f];





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;



		&m_pSwapChain,

		SDL_RenderPresent(ren);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	HRESULT              hr;

	std::string error;

		SDL_Delay(1000);

	{

	auto& shapes = reader.GetShapes();

	return 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		else if (e.type == SDL_KEYDOWN)

	D3D11_BUFFER_DESC vbDesc;

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		{

		return hr;

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



			index_offset += fv;

		pVList[i] = vertexlist[i];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	return hr;

	SAFE_RELEASE(m_pInputLayout);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	std::string inputfile = "test.obj";

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)



	}

		R"(cube.obj)");



	XMFLOAT4X4 world;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pLightBuffer = NULL;



		{



		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		delete[] pVList;

struct ConstantMatrixBuffer {

		}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Event e;

	vrData.SysMemPitch = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];





	txDesc.MipLevels = 1;

		return hr;

				tinyobj::real_t tx =

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



#include <iostream>

	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4 pos;               //座標(x,y,z)

		{

{





	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

	std::vector<tinyobj::material_t> materials;

	UINT flags = 0;

	XMFLOAT4X4 view;



		&m_pSwapChain,

	ibDesc.CPUAccessFlags = 0;

	enum KeyPressSurfaces

	m_pSampler = NULL;

void CD3DTest::Release()

				break;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Quit();

	SDL_Event e;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_FreeSurface(suf);

		return hr;

		}



		pLevels,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pSwapChain->Present(0, 0);

			case SDLK_RIGHT:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	{

{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		SDL_RenderClear(ren);



	{

		{

	m_Viewport.TopLeftX = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	float    nearZ = 0.1f;

	ConstantLightBuffer clb;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//深度ステンシルバッファ作成

	txDesc.Height = rect.Height();





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMFLOAT4X4 world;

	if (FAILED(hr))



			exit(1);

	m_Viewport.TopLeftX = 0;

	int     vcount = vertexlist.size();

	m_pLightBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		cout << "SDL_INIT_ERROR" << endl;

#include <SDL.h>

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);







				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

		{



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//テクスチャ読み込み

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				indexlist.push_back(idx.vertex_index);



		return hr;

struct ConstantMatrixBuffer {

void CD3DTest::Render()

				break;

	scDesc.BufferDesc.Height = rect.Height();

	SDL_FreeSurface(suf);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	m_pTextureView = NULL;

	cbDesc.MiscFlags = 0;

}



	SAFE_RELEASE(m_pSwapChain);

	//vector<Vertex> vertex_t;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pDevice = NULL;

	if (m_pImmediateContext)

	{

	for (int i = 0; i < vcount; i++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4         eyePos;   //視点座標

		R"(cube.obj)");

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	::ZeroMemory(&scDesc, sizeof(scDesc));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_Viewport.Height = (FLOAT)rect.Height();

	vrData.SysMemSlicePitch = 0;

{



				WORD index = idx.vertex_index;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

			exit(1);



		size_t index_offset = 0;  // インデントのオフセット

	{

	cbDesc.CPUAccessFlags = 0;

{

				indexlist.push_back(idx.vertex_index);



	m_pTexture = NULL;

	{

	m_pVertexShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	txDesc.ArraySize = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pDevice = NULL;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ID3D11Texture2D* pBackBuffer;

#include <SDL.h>

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

			exit(1);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

	{

		return hr;

	txDesc.Height = rect.Height();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pSampler = NULL;

	ibDesc.MiscFlags = 0;

{

#define TINYOBJLOADER_IMPLEMENTATION

	//定数バッファ作成

		&level,



struct ConstantLightBuffer {

CD3DTest::~CD3DTest()



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	m_pMatrixBuffer = NULL;

	m_pInputLayout = NULL;

	//Clean up our objects and quit

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	return 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	WORD* pIList = new WORD[icount];

	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_RIGHT:

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float    fov = XMConvertToRadians(20.0f);

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	m_Viewport.MinDepth = 0.0f;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	for (const auto& shape : shapes)

	D3D_FEATURE_LEVEL level;

	{

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_BUFFER_DESC cbDesc;



}

	delete[] pIList;

	//頂点レイアウト作成



	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

CD3DTest::~CD3DTest()



				tinyobj::real_t ty =



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	//Vertex* pVList = new Vertex[vcount];

struct ConstantLightBuffer {

	}







	txDesc.CPUAccessFlags = 0;





		&m_pDevice,

	XMFLOAT4X4 projection;

	if (m_pImmediateContext)

	//Vertex* pVList = new Vertex[vcount];

	SDL_Event e;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SAFE_RELEASE(m_pRenderTargetView);



	m_pSwapChain = NULL;



	return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pRenderTargetView);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		//User presses a key

#define TINYOBJLOADER_IMPLEMENTATION

};



		&m_pSwapChain,

#define TINYOBJLOADER_IMPLEMENTATION

		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	vbDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_IndexCount = icount;

{

#include "DirectXManager.h"

		SDL_Delay(1000);



	SAFE_RELEASE(m_pMatrixBuffer);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				// access to vertex

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

			}

}

	//Key press surfaces constants

	m_VertexCount = vcount;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			exit(1);

	ibDesc.CPUAccessFlags = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))



	if (FAILED(hr))

	m_pRenderTargetView = NULL;

			default:

		exit(1);



#include <SDL.h>

	//頂点レイアウト作成

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Height = rect.Height();

	SDL_DestroyTexture(tex);

			//Select surfaces based on key press



			}

#include <SDL.h>

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	/*

		&attrib,

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pSampler = NULL;

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (m_pImmediateContext)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pVertexShader);

		SDL_Delay(1000);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pPixelShader);

				WORD index = idx.vertex_index;


