	{

			}

	m_Viewport.MinDepth = 0.0f;

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pTexture);

	WORD* pIList = new WORD[icount];

	return 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	}

/*



	std::vector<tinyobj::shape_t> shapes;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		return 1;









		delete[] pIList;



	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	ibDesc.StructureByteStride = 0;

		&level,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		&scDesc,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		&error,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

{

	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			break;

	scDesc.BufferDesc.Width = rect.Width();

#include <SDL.h>

	};

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		flags,

		&shapes,

		}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	float    fov = XMConvertToRadians(20.0f);



		if (e.type == SDL_QUIT)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	if (!error.empty())

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	vector<WORD> indexList;

		}

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4         ambient;  //環境光(r,g,b)





	SAFE_RELEASE(m_pIndexBuffer);

		{

	txDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pPixelShader);

		D3D_DRIVER_TYPE_HARDWARE,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	}



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	SDL_DestroyTexture(tex);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}



	m_pInputLayout = NULL;

int main(int, char**)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	bool ret = tinyobj::LoadObj(

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

};



	m_Viewport.Height = (FLOAT)rect.Height();

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	delete[] pIList;

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_Event e;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	Release();

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 world;

		{





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Height = rect.Height();

		{

	Vertex* pVList = new Vertex[vcount];



	{



	auto& shapes = reader.GetShapes();

	return hr;



CD3DTest::CD3DTest()

	cbDesc.MiscFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		m_pImmediateContext->ClearState();

	if (!reader.ParseFromFile(inputfile, reader_config))

		D3D_DRIVER_TYPE_HARDWARE,

	return hr;



	return 0;

				WORD index = idx.vertex_index;

	vbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		pLevels,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	auto& shapes = reader.GetShapes();



	XMFLOAT4 ambient;           //環境(r,g,b)



	cbDesc.MiscFlags = 0;

		SDL_Delay(1000);

		}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pTextureView = NULL;

	SDL_DestroyTexture(tex);

	D3D11_TEXTURE2D_DESC txDesc;

	LoadObj(vertexlist, indexList);

			// Loop over vertices in the face.

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

};

{





struct ConstantMaterial {

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				// access to vertex

	vbDesc.MiscFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			{

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			//Select surfaces based on key press

	std::vector<tinyobj::shape_t> shapes;

				break;

	D3D11_SUBRESOURCE_DATA vrData;

	}

#endif

			index_offset += fv;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	ConstantMatrixBuffer cmb;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

#include <iostream>

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

};

	}

	{

	//深度ステンシルバッファ作成

};



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	txDesc.Height = rect.Height();

	reader_config.mtl_search_path = "./"; // Path to material files

	m_IndexCount = 0;

	SDL_DestroyRenderer(ren);

	{

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pIndexBuffer);

	tinyobj::attrib_t attrib;





	m_Angle += XMConvertToRadians(1.0f);

		&level,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

				break;

	//Key press surfaces constants

	DXGI_SWAP_CHAIN_DESC scDesc;

		m_pImmediateContext->ClearState();

	ConstantLight    pntLight; //点光源

	cbDesc.StructureByteStride = 0;

	m_pDepthStencilTexture = NULL;



	m_IndexCount = 0;



	cbDesc.StructureByteStride = 0;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	std::string imagePath = "hello.bmp";

	std::vector<tinyobj::material_t> materials;

	SAFE_RELEASE(m_pSwapChain);

	{

				vertex.push_back(vertex_tmp);

	dsDesc.Format = txDesc.Format;



		{

	//頂点バッファ作成

		if (!reader.Error().empty())

	txDesc.Width = rect.Width();

			break;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



				indexlist.push_back(index);

	DXGI_SWAP_CHAIN_DESC scDesc;

		R"(cube.obj)");



	m_VertexCount = vcount;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

			//Select surfaces based on key press



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

		return hr;

		}

	if (!error.empty())

	XMFLOAT4 pos;               //座標(x,y,z)

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_RenderClear(ren);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		m_pImmediateContext->ClearState();

				// access to vertex

	delete[] pIList;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		D3D_DRIVER_TYPE_HARDWARE,



using std::cout; using std::endl;

	ID3D11Texture2D* pBackBuffer;



	delete[] pIList;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		pVList[i] = vertexlist[i];

		return hr;

	{

{

	//頂点バッファ作成





	ID3D11Texture2D* pBackBuffer;

	m_pTexture = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pMatrixBuffer);

			default:

	//vector<Vertex> vertex_t;

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pRenderTargetView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	Release();



	SAFE_RELEASE(m_pImmediateContext);

	m_pLightBuffer = NULL;

	delete[] pIList;





	vbDesc.CPUAccessFlags = 0;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//インデックスバッファ作成

	// Loop over shapes

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

				vertex.push_back(vertex_tmp);

		return hr;



	SDL_Event e;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	SDL_DestroyTexture(tex);

 */

		}





int main(int, char**)



		pVList[i] = vertexlist[i];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;



				vertex.push_back(vertex_tmp);

		return hr;

	float    farZ = 100.0f;





	//定数バッファ作成

}

{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



{

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexShader);

			exit(1);



			case SDLK_UP:

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantLight {

int SEGMENT = 36;

	return;

	SAFE_RELEASE(m_pLightBuffer);



	//Clean up our objects and quit

	vrData.SysMemPitch = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//定数バッファ作成

};

			switch (e.key.keysym.sym)

	{

	{

	dsDesc.Format = txDesc.Format;

	txDesc.Width = rect.Width();

{



	dsDesc.Format = txDesc.Format;



		return hr;

			exit(1);

	m_pVertexShader = NULL;

			default:





#endif

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pPixelShader);







	for (int j = 0; j < icount; j++)



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

 * Lesson 1: Hello World!

		KEY_PRESS_SURFACE_UP,

{

	XMFLOAT4X4 view;



				break;

		}



{

			{





		D3D_DRIVER_TYPE_HARDWARE,

	m_pDepthStencilView = NULL;

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))



	irData.SysMemSlicePitch = 0;

	D3D11_SUBRESOURCE_DATA vrData;

		if (e.type == SDL_QUIT)



	m_pMatrixBuffer = NULL;

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::string error;



	};

	vector<WORD> indexList;

		&level,



	}







	SAFE_RELEASE(m_pLightBuffer);

	enum KeyPressSurfaces



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	WORD   icount = indexList.size();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	/*

	m_pVertexBuffer = NULL;

			case SDLK_UP:

	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				break;

		return hr;



#include "DirectXManager.h"

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pVertexBuffer = NULL;

	XMFLOAT4X4 projection;

	irData.SysMemPitch = 0;

};

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User presses a key

	vrData.SysMemSlicePitch = 0;

			break;



			case SDLK_DOWN:



	m_pMatrixBuffer = NULL;



}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点シェーダー生成

	//Vertex* pVList = new Vertex[vcount];





	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.OutputWindow = hwnd;

		return hr;

		}

		if (!reader.Error().empty())

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

		else if (e.type == SDL_KEYDOWN)

	//First we need to start up SDL, and make sure it went ok





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			index_offset += num_vertices;

	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D_FEATURE_LEVEL level;



	SDL_FreeSurface(bmp);

	txDesc.MipLevels = 1;



				break;

		if (!reader.Error().empty())

#include <SDL.h>



	cbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC vbDesc;

	//頂点シェーダー生成

	XMFLOAT4         eyePos;   //視点座標

		delete[] pVList;

	vrData.SysMemSlicePitch = 0;

	m_pTexture = NULL;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



#include "DirectXManager.h"





	WORD   icount = indexList.size();

		{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pDevice);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC ibDesc;

		return hr;

		&materials,

	}

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

struct ConstantLightBuffer {

	if (FAILED(hr))

struct ConstantMaterial {

	return 0;

	SAFE_RELEASE(m_pDevice);





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

			index_offset += num_vertices;

	SAFE_RELEASE(m_pVertexBuffer);

		}

		}

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Event e;

	{

			//Select surfaces based on key press

	CRect                rect;

	LoadObj(vertexlist, indexList);

				break;

	SDL_Quit();

	CRect                rect;

int SEGMENT = 36;

	cbDesc.CPUAccessFlags = 0;

{

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))





	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		KEY_PRESS_SURFACE_RIGHT,

	if (!reader.Warning().empty())

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	scDesc.BufferDesc.Height = rect.Height();

	D3D_FEATURE_LEVEL level;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}

	scDesc.BufferCount = 1;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		delete[] pVList;

				break;

	Release();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

		return hr;

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4 specular;          //反射(r,g,b)

	irData.SysMemPitch = 0;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



#endif

	return;

	m_Viewport.MinDepth = 0.0f;

	std::vector<tinyobj::shape_t> shapes;

	//Create Index

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			//Select surfaces based on key press



				tinyobj::real_t ty =

	ConstantMaterial material; //物体の質感

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

	tinyobj::ObjReader reader;

#include <iostream>

	m_IndexCount = 0;

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//ビューポート設定

		{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}



	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	delete[] pVList;

	m_Angle += XMConvertToRadians(1.0f);

	//Key press surfaces constants

	vbDesc.StructureByteStride = 0;

		delete[] pIList;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			index_offset += num_vertices;

#include "DirectXManager.h"

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

	m_Viewport.MaxDepth = 1.0f;



	while (SDL_PollEvent(&e) != 0)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

{

	scDesc.BufferCount = 1;



{

			//Select surfaces based on key press

	m_IndexCount = icount;

	txDesc.ArraySize = 1;

				tinyobj::real_t tx =

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	irData.pSysMem = &pIList[0];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pDepthStencilTexture = NULL;











	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.CPUAccessFlags = 0;









		// Loop over faces(polygon)

	m_pMatrixBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

CD3DTest::~CD3DTest()

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			switch (e.key.keysym.sym)

	::ZeroMemory(&scDesc, sizeof(scDesc));



	scDesc.SampleDesc.Quality = 0;



	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		delete[] pIList;

			switch (e.key.keysym.sym)

	for (const auto& shape : shapes)

	{

	//ピクセルシェーダー生成

	for (const auto& shape : shapes)

	{

#ifdef _DEBUG

			break;

			{



	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,



}



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	ConstantMaterial material; //物体の質感

		return hr;

		{

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	::GetClientRect(hwnd, &rect);

		&m_pSwapChain,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

struct ConstantMaterial {

		}



	delete[] pIList;





{

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	auto& attrib = reader.GetAttrib();



		{

	m_pSwapChain->Present(0, 0);

	SDL_DestroyRenderer(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	for (int i = 0; i < vcount; i++)



	txDesc.ArraySize = 1;

/*

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//深度ステンシルバッファ作成

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

#include <iostream>

		return hr;

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	WORD* pIList = new WORD[icount];

 */

		return hr;

	vrData.pSysMem = &pVList[0];



	SDL_Quit();

	}

{



	};

			for (size_t v = 0; v < num_vertices; v++)

	{



{

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}

	m_IndexCount = 0;

	scDesc.SampleDesc.Quality = 0;

	SDL_Quit();



	m_Viewport.MaxDepth = 1.0f;

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext = NULL;

	{



	for (const auto& shape : shapes)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	CRect                rect;

		// Loop over faces(polygon)

	for (const auto& shape : shapes)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

{

#endif

	m_pDepthStencilTexture = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

int main(int, char**)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		}

	float    fov = XMConvertToRadians(20.0f);

	int     vcount = vertexlist.size();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	m_pSampler = NULL;

{

	SAFE_RELEASE(m_pTexture);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		pIList[j] = indexList[j];

	scDesc.BufferCount = 1;



	ibDesc.StructureByteStride = 0;

	m_pLightBuffer = NULL;

	std::string error;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			case SDLK_LEFT:

	//テクスチャ読み込み

	SDL_DestroyRenderer(ren);

};

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pRenderTargetView);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		flags,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			index_offset += num_vertices;

using std::cout; using std::endl;

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::real_t ty =

	}

		&error,

	if (FAILED(hr))



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pVertexBuffer);

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

 */

{

	ibDesc.MiscFlags = 0;

	m_pIndexBuffer = NULL;

	ConstantLight    pntLight; //点光源

	//First we need to start up SDL, and make sure it went ok



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			default:

		return hr;

	m_pIndexBuffer = NULL;

		{

	m_VertexCount = vcount;

		{

	//頂点レイアウト作成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



{

struct ConstantMatrixBuffer {

	bool ret = tinyobj::LoadObj(

	}

	float    farZ = 100.0f;

	m_pSwapChain->Present(0, 0);

	{

	m_pMatrixBuffer = NULL;

	txDesc.SampleDesc.Quality = 0;

};

	SDL_DestroyTexture(tex);



		KEY_PRESS_SURFACE_LEFT,

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderCopy(ren, tex, NULL, NULL);

}

	delete[] pIList;



	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	auto& attrib = reader.GetAttrib();

{

				break;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		{

	m_pDepthStencilView = NULL;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ty =

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	SDL_Event e;

	cbDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	if (m_pImmediateContext)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



{

 * Lesson 1: Hello World!

	ConstantMaterial material; //物体の質感

}

/*



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	auto& attrib = reader.GetAttrib();

	tinyobj::attrib_t attrib;

			{



	for (const auto& shape : shapes)



	m_Viewport.MinDepth = 0.0f;

	std::string error;

	}

	scDesc.OutputWindow = hwnd;

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	return;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		return hr;



	for (int i = 0; i < vcount; i++)







	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

void CD3DTest::Render()

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		exit(1);



	m_pDepthStencilTexture = NULL;



{



	ConstantLight    pntLight; //点光源

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

		return hr;

CD3DTest::CD3DTest()

	{

				WORD index = idx.vertex_index;



	std::string imagePath = "hello.bmp";

	SDL_DestroyTexture(tex);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_DEFAULT,

	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	m_pRenderTargetView = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pVertexShader = NULL;

	//Key press surfaces constants



	{

	{

	SAFE_RELEASE(m_pSwapChain);



		return hr;

				break;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pDepthStencilView = NULL;

			case SDLK_UP:

	return 0;

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pInputLayout);

	irData.SysMemSlicePitch = 0;



		&scDesc,

	if (!error.empty())

		&m_pDevice,

	std::vector<tinyobj::material_t> materials;

	ConstantLightBuffer clb;

	if (!reader.ParseFromFile(inputfile, reader_config))

	//Create Index

	reader_config.mtl_search_path = "./"; // Path to material files

	irData.SysMemSlicePitch = 0;

	//頂点レイアウト作成



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Event e;

		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (m_pImmediateContext)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&m_pImmediateContext);

		&m_pDevice,

	std::string error;



	::GetClientRect(hwnd, &rect);

			}

				tinyobj::real_t ty =

			{



				tinyobj::real_t ty =

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	scDesc.Windowed = TRUE;

				vertex.push_back(vertex_tmp);

	}

	vector<Vertex> vertexlist;

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pPixelShader);

		if (e.type == SDL_QUIT)

	D3D11_BUFFER_DESC cbDesc;



		&scDesc,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_Delay(1000);

	D3D11_BUFFER_DESC ibDesc;

		}





	if (FAILED(hr))

		}

	m_pLightBuffer = NULL;

			{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		R"(cube.obj)");

	//頂点レイアウト作成

	}

	m_VertexCount = 0;

			case SDLK_RIGHT:



	int     vcount = vertexlist.size();

				indexlist.push_back(index);

	if (FAILED(hr))

		return hr;

	m_pSwapChain = NULL;

	{

			default:

	Vertex* pVList = new Vertex[vcount];

	tinyobj::ObjReader reader;

			for (size_t v = 0; v < fv; v++)

	txDesc.MipLevels = 1;

	// Loop over shapes

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	CRect                rect;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (!error.empty())

#include <SDL.h>

			{

	ibDesc.CPUAccessFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC cbDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			{

{



		{

	m_pTexture = NULL;

		}

		cout << "SDL_INIT_ERROR" << endl;

{



	XMFLOAT4 specular;          //反射(r,g,b)

int SEGMENT = 36;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexShader = NULL;

	tinyobj::attrib_t attrib;

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

		return hr;

	m_pDevice = NULL;

			{

};





	//vector<Vertex> vertex_t;





};

			default:





	txDesc.SampleDesc.Count = 1;

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext = NULL;



	SDL_FreeSurface(suf);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	//ビューポート設定

struct ConstantMaterial {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	enum KeyPressSurfaces

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			{

		pLevels,



	{

	SAFE_RELEASE(m_pVertexBuffer);

		R"(cube.obj)");





	//ピクセルシェーダー生成

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferDesc.Width = rect.Width();

	D3D11_BUFFER_DESC vbDesc;

		return hr;









	auto& shapes = reader.GetShapes();



	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ibDesc.CPUAccessFlags = 0;

	{



	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		}

	//ピクセルシェーダー生成

	scDesc.BufferCount = 1;

		pIList[j] = indexList[j];

}

	scDesc.OutputWindow = hwnd;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

	vrData.pSysMem = &pVList[0];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	irData.pSysMem = &pIList[0];

	scDesc.OutputWindow = hwnd;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		else if (e.type == SDL_KEYDOWN)

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4X4 projection;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			break;

	delete[] pVList;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

HRESULT CD3DTest::Create(HWND hwnd)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			{

	scDesc.BufferDesc.Height = rect.Height();



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_BUFFER_DESC cbDesc;



	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

 */

		{

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Event e;

		&m_pImmediateContext);

}

				tinyobj::real_t tx =



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	{

	D3D_FEATURE_LEVEL level;

		D3D11_SDK_VERSION,

	XMStoreFloat4(&clb.eyePos, eye);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

#define TINYOBJLOADER_IMPLEMENTATION



	ibDesc.MiscFlags = 0;



	m_Viewport.Height = (FLOAT)rect.Height();

	UINT offsets = 0;

				WORD index = idx.vertex_index;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilTexture = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4X4 projection;

}

	scDesc.BufferCount = 1;

#ifdef _DEBUG

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::string imagePath = "hello.bmp";

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SAFE_RELEASE(m_pSwapChain);

		//User presses a key

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}

			default:

				// access to vertex

	vrData.SysMemSlicePitch = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

#ifdef _DEBUG

	cbDesc.CPUAccessFlags = 0;

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

int main(int, char**)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		&m_pImmediateContext);

		SDL_RenderPresent(ren);



	SAFE_RELEASE(m_pSwapChain);



	WORD   icount = indexList.size();

void CD3DTest::Render()

				// access to vertex

	float    fov = XMConvertToRadians(20.0f);

		size_t index_offset = 0;

	m_pVertexBuffer = NULL;

	m_pRenderTargetView = NULL;





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

		return hr;

	txDesc.SampleDesc.Count = 1;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			index_offset += num_vertices;

	D3D11_BUFFER_DESC cbDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	irData.pSysMem = &pIList[0];

		KEY_PRESS_SURFACE_RIGHT,

	}

	auto& shapes = reader.GetShapes();



{

	SAFE_RELEASE(m_pDevice);

	txDesc.CPUAccessFlags = 0;

	m_pInputLayout = NULL;



	m_pDevice = NULL;

	irData.SysMemPitch = 0;

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_Viewport.MaxDepth = 1.0f;

	return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.ArraySize = 1;

	m_pDepthStencilView = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		KEY_PRESS_SURFACE_DEFAULT,



			break;

				break;

	txDesc.ArraySize = 1;



		return hr;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D_FEATURE_LEVEL level;

	cbDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	D3D11_SAMPLER_DESC smpDesc;

	m_VertexCount = vcount;





	reader_config.mtl_search_path = "./"; // Path to material files

int main(int, char**)

	m_pInputLayout = NULL;

	scDesc.SampleDesc.Quality = 0;

	//First we need to start up SDL, and make sure it went ok

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

struct ConstantLightBuffer {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pLightBuffer = NULL;

		&scDesc,

	if (FAILED(hr))

		return hr;

		&m_pImmediateContext);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//テクスチャ読み込み

struct ConstantMaterial {

}



	m_IndexCount = icount;

	m_pImmediateContext = NULL;

				tinyobj::real_t tx =

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (!error.empty())

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_DestroyRenderer(ren);

		{







			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);





	{

	//Vertex* pVList = new Vertex[vcount];



	//インデックスバッファ作成

	ibDesc.MiscFlags = 0;

		if (!ret)

	m_pMatrixBuffer = NULL;

	if (!error.empty())

			default:



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

struct ConstantLight {

	m_pRenderTargetView = NULL;

			}

	ibDesc.MiscFlags = 0;



	for (int j = 0; j < icount; j++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.Height = (FLOAT)rect.Height();

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				// access to vertex

	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	cbDesc.MiscFlags = 0;

		return hr;

	m_pTextureView = NULL;

			switch (e.key.keysym.sym)

	}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	SAFE_RELEASE(m_pSampler);



		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		//User requests quit



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	std::vector<tinyobj::shape_t> shapes;

	m_VertexCount = 0;

	};

	m_pPixelShader = NULL;

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



		{

		return hr;



	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	};



	SAFE_RELEASE(m_pMatrixBuffer);

		&materials,

	if (FAILED(hr))



	m_pPixelShader = NULL;

	XMFLOAT4X4 world;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	enum KeyPressSurfaces

	m_pDepthStencilTexture = NULL;

	auto& attrib = reader.GetAttrib();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

	if (FAILED(hr))

	//Clean up our objects and quit

				break;

		SDL_RenderPresent(ren);

	scDesc.SampleDesc.Quality = 0;



			case SDLK_DOWN:

	cbDesc.MiscFlags = 0;

	for (int i = 0; i < 3; i++)





		SDL_RenderCopy(ren, tex, NULL, NULL);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_RenderPresent(ren);

			}

				vertex.push_back(vertex_tmp);



using std::cout; using std::endl;

	cbDesc.StructureByteStride = 0;

		&scDesc,

CD3DTest::~CD3DTest()

	HRESULT              hr;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		delete[] pVList;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			default:

	if (FAILED(hr))



			//Select surfaces based on key press



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	m_pTextureView = NULL;

		&m_pSwapChain,

	m_Viewport.MaxDepth = 1.0f;

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	LoadObj(vertexlist, indexList);

				WORD index = idx.vertex_index;

	ibDesc.StructureByteStride = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		{

		&m_pSwapChain,

}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

};

	scDesc.BufferCount = 1;

	for (int i = 0; i < vcount; i++)

	Vertex* pVList = new Vertex[vcount];



				break;

#include <SDL.h>

		&m_pDevice,







	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}



	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



			switch (e.key.keysym.sym)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.Width = (FLOAT)rect.Width();

			}

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pMatrixBuffer = NULL;

	//テクスチャ読み込み

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderPresent(ren);



	D3D11_SUBRESOURCE_DATA irData;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			}

	std::vector<tinyobj::material_t> materials;

	m_pLightBuffer = NULL;

	if (FAILED(hr))



	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_LEFT,

	m_VertexCount = 0;

	{



			for (size_t v = 0; v < num_vertices; v++)







	//ビューポート設定

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vector<Vertex> vertexlist;

	//インデックスバッファ作成

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	}*/

		D3D11_SDK_VERSION,



	//頂点シェーダー生成

	SDL_Event e;









				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	delete[] pIList;

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		pLevels,

	txDesc.SampleDesc.Quality = 0;

	scDesc.SampleDesc.Count = 1;

	scDesc.Windowed = TRUE;

#include <SDL.h>

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	irData.pSysMem = &pIList[0];

	//頂点レイアウト作成



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4 pos;               //座標(x,y,z)

	Release();

	scDesc.Windowed = TRUE;

CD3DTest::~CD3DTest()

{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pVertexShader);

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pTexture);

	vrData.SysMemPitch = 0;

	//vector<Vertex> vertex_t;

	m_pInputLayout = NULL;

				vertex.push_back(vertex_tmp);

		return hr;

		&shapes,

	SAFE_RELEASE(m_pVertexShader);

	scDesc.SampleDesc.Count = 1;

	}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		KEY_PRESS_SURFACE_DOWN,

	//頂点シェーダー生成

				vertex.push_back(vertex_tmp);

	XMFLOAT4         eyePos;   //視点座標

	m_pMatrixBuffer = NULL;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;



	};



	//Key press surfaces constants

	return;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		m_pImmediateContext->ClearState();

	scDesc.Windowed = TRUE;



	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}*/

		NULL,

				tinyobj::real_t ty =







			for (size_t v = 0; v < fv; v++)

	//vector<WORD> index_t;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))



	return 0;



	{

		SDL_RenderClear(ren);

	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		delete[] pIList;



	SAFE_RELEASE(m_pInputLayout);

			// Loop over vertices in the face.

	auto& attrib = reader.GetAttrib();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		// Loop over faces(polygon)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

#define TINYOBJLOADER_IMPLEMENTATION

			int num_vertices = shape.mesh.num_face_vertices[f];

	std::string error;

	txDesc.Height = rect.Height();

void CD3DTest::Render()

		size_t index_offset = 0;  // インデントのオフセット

	irData.SysMemSlicePitch = 0;

		exit(1);

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ConstantLightBuffer clb;

	if (FAILED(hr))





	cbDesc.MiscFlags = 0;

	txDesc.SampleDesc.Quality = 0;

	ConstantMatrixBuffer cmb;

	ID3D11Texture2D* pBackBuffer;

		KEY_PRESS_SURFACE_LEFT,

		}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			default:

	irData.pSysMem = &pIList[0];

		return hr;

	SDL_DestroyTexture(tex);

		return hr;







	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





		NULL,



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

int main(int, char**)



	m_Viewport.Height = (FLOAT)rect.Height();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		1,

	SAFE_RELEASE(m_pPixelShader);

#include <iostream>

}

{

	delete[] pVList;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_UP:

		{

			switch (e.key.keysym.sym)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	vbDesc.StructureByteStride = 0;





	XMFLOAT4 ambient;           //環境(r,g,b)

	::ZeroMemory(&scDesc, sizeof(scDesc));



			index_offset += fv;

	XMStoreFloat4(&clb.eyePos, eye);

	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_DEFAULT,

			}

		KEY_PRESS_SURFACE_UP,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	irData.pSysMem = &pIList[0];

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

 * Lesson 1: Hello World!



	while (SDL_PollEvent(&e) != 0)

		SDL_RenderPresent(ren);

	}

	D3D11_BUFFER_DESC vbDesc;

	m_pDepthStencilTexture = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

 */



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	{



	//頂点バッファ作成

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	//vector<Vertex> vertex_t;

/*

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		&m_pSwapChain,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	DXGI_SWAP_CHAIN_DESC scDesc;

			//Select surfaces based on key press

	{

	if (FAILED(hr))

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pTextureView = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;







	LoadObj(vertexlist, indexList);

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

#endif

	}

		return hr;

		D3D11_SDK_VERSION,



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pInputLayout = NULL;

	irData.SysMemPitch = 0;

			case SDLK_UP:

	SAFE_RELEASE(m_pVertexBuffer);

			}

	irData.SysMemPitch = 0;

	m_Angle += XMConvertToRadians(1.0f);



};



		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pDepthStencilView);

	m_pDevice = NULL;

	m_IndexCount = 0;

		return hr;

	}

	tinyobj::attrib_t attrib;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		size_t index_offset = 0;





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	}

	{

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

	float    fov = XMConvertToRadians(20.0f);

	txDesc.CPUAccessFlags = 0;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		}



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))



{

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	}

		m_pImmediateContext->ClearState();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				WORD index = idx.vertex_index;

	ZeroMemory(&txDesc, sizeof(txDesc));



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}

	Vertex* pVList = new Vertex[vcount];

		&error,

		return hr;

struct ConstantLightBuffer {

{

	if (FAILED(hr))

	SDL_FreeSurface(suf);

				break;







		&attrib,



		//User requests quit

	m_IndexCount = icount;

			{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pPixelShader = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		return hr;

};

}





	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pVertexShader);



	SDL_DestroyTexture(tex);

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		exit(1);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Width = (FLOAT)rect.Width();



CD3DTest::~CD3DTest()





	SDL_Event e;

	if (FAILED(hr))

		return hr;

		flags,

struct ConstantMaterial {

	m_pTexture = NULL;

}

	}

{

		exit(1);

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	//Create Index

	SAFE_RELEASE(m_pIndexBuffer);

		//User presses a key



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D11_BUFFER_DESC cbDesc;



		if (e.type == SDL_QUIT)

	for (int i = 0; i < 3; i++)



	scDesc.OutputWindow = hwnd;

		}

	irData.SysMemPitch = 0;

	m_pSampler = NULL;

	XMFLOAT4X4 view;

	SDL_Quit();

		SDL_RenderClear(ren);

		SDL_Delay(1000);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	/*

	SDL_Quit();



			//Select surfaces based on key press

		cout << "SDL_INIT_ERROR" << endl;

struct ConstantMatrixBuffer {

	};

		SDL_RenderClear(ren);

	//テクスチャ読み込み



 * Lesson 1: Hello World!

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	float    farZ = 100.0f;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	SAFE_RELEASE(m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.Width = rect.Width();



		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

 */

struct ConstantMaterial {

			index_offset += num_vertices;

				// access to vertex

}
	m_pIndexBuffer = NULL;

}



	D3D11_BUFFER_DESC ibDesc;





		size_t index_offset = 0;  // インデントのオフセット



	{

		1,

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	irData.SysMemPitch = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			int num_vertices = shape.mesh.num_face_vertices[f];

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain = NULL;

		if (!reader.Error().empty())

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

 * Lesson 1: Hello World!

{



	std::string imagePath = "hello.bmp";

				indexlist.push_back(index);

struct ConstantLight {

	}



	if (FAILED(hr))

	auto& materials = reader.GetMaterials();



	scDesc.SampleDesc.Count = 1;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	UINT flags = 0;

	}



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		pIList[j] = indexList[j];

	{



	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_Event e;

	m_pSwapChain->Present(0, 0);

	irData.SysMemPitch = 0;

	txDesc.Width = rect.Width();

		&m_pImmediateContext);



	while (SDL_PollEvent(&e) != 0)





			break;

	m_pIndexBuffer = NULL;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	m_VertexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.Windowed = TRUE;

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pDevice = NULL;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4X4 world;



			break;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	bool ret = tinyobj::LoadObj(

	}

	};

	delete[] pVList;

	if (FAILED(hr))



			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.MiscFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	ibDesc.StructureByteStride = 0;

}
	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}



			index_offset += num_vertices;

	//頂点レイアウト作成

			case SDLK_UP:

	return 0;



	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return 1;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		}

		1,

	for (size_t s = 0; s < shapes.size(); s++)

}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				indexlist.push_back(index);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&level,

				vertex.push_back(vertex_tmp);

	scDesc.SampleDesc.Quality = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				// access to vertex



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&m_pDevice,



		flags,



			case SDLK_DOWN:

		return hr;

		pLevels,

		return hr;

	if (FAILED(hr))

	//Key press surfaces constants

{

{

	{

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	enum KeyPressSurfaces

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pDepthStencilView = NULL;

	UINT strides = sizeof(Vertex);



	::ZeroMemory(&scDesc, sizeof(scDesc));

		{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_VertexCount = vcount;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			{



	scDesc.BufferDesc.Height = rect.Height();

	//定数バッファ作成

{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_Quit();



	ZeroMemory(&txDesc, sizeof(txDesc));

			case SDLK_LEFT:

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vbDesc.MiscFlags = 0;

	m_IndexCount = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				// access to vertex

	vrData.SysMemPitch = 0;

			index_offset += num_vertices;

	//Vertex* pVList = new Vertex[vcount];

			}



			case SDLK_DOWN:



	dsDesc.Format = txDesc.Format;



		R"(cube.obj)");





	if (FAILED(hr))

		SDL_Delay(1000);



		&materials,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				break;

	vbDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	for (int i = 0; i < vcount; i++)

	ibDesc.StructureByteStride = 0;

	CRect                rect;

/*

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	delete[] pIList;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },







		return hr;

			for (size_t v = 0; v < fv; v++)

}
	txDesc.Height = rect.Height();

CD3DTest::~CD3DTest()

	scDesc.BufferCount = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

struct ConstantLightBuffer {

	}



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

	UINT offsets = 0;

	m_pInputLayout = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

CD3DTest::~CD3DTest()

struct ConstantLightBuffer {



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#include <iostream>

		return hr;

	SAFE_RELEASE(m_pMatrixBuffer);

	if (!reader.Warning().empty())



#include <SDL.h>

	}



}

	ConstantLightBuffer clb;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	CRect                rect;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_Delay(1000);

	{



	cbDesc.CPUAccessFlags = 0;

	m_pSampler = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

		1,

		if (!ret)

	};

	scDesc.BufferCount = 1;

		&m_pDevice,

	m_pIndexBuffer = NULL;

			for (size_t v = 0; v < fv; v++)

	//Vertex* pVList = new Vertex[vcount];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4(&clb.eyePos, eye);

	enum KeyPressSurfaces

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pRenderTargetView = NULL;

	{

		return hr;

	{

		if (!ret)



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4X4 view;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&error,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

				tinyobj::real_t tx =

	m_pSwapChain->Present(0, 0);

		if (e.type == SDL_QUIT)



	if (!error.empty())



	irData.SysMemPitch = 0;

	/*

	m_Viewport.MinDepth = 0.0f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		SDL_Delay(1000);

		{





	cbDesc.CPUAccessFlags = 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

{

	{



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vbDesc.CPUAccessFlags = 0;

{

	scDesc.Windowed = TRUE;



	cbDesc.MiscFlags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

		pLevels,

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

			{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			int num_vertices = shape.mesh.num_face_vertices[f];

#include <iostream>

	SAFE_RELEASE(m_pVertexBuffer);

	irData.SysMemSlicePitch = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		KEY_PRESS_SURFACE_DOWN,



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	SDL_Event e;

CD3DTest::CD3DTest()

	ConstantLightBuffer clb;

#include <iostream>

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pSwapChain);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



#endif

			index_offset += fv;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

}

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_DestroyWindow(win);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		1,

	m_VertexCount = 0;

	HRESULT              hr;

		&m_pSwapChain,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;

	if (m_pImmediateContext)

	{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pSampler = NULL;



		R"(cube.obj)");

	}



	SDL_DestroyRenderer(ren);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ConstantLight    pntLight; //点光源

	if (FAILED(hr))



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pSwapChain = NULL;

		D3D11_SDK_VERSION,





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	CRect                rect;

	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_TOTAL

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.SampleDesc.Count = 1;

	float    nearZ = 0.1f;

	WORD   icount = indexList.size();

	vrData.SysMemSlicePitch = 0;

}

		{



	//Key press surfaces constants

		D3D11_SDK_VERSION,

#include "DirectXManager.h"



	UINT strides = sizeof(Vertex);

			case SDLK_DOWN:

			default:

	flags |= D3D11_CREATE_DEVICE_DEBUG;


