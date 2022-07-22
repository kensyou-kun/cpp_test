			case SDLK_UP:



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		//User requests quit







	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.MiscFlags = 0;



		{







	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantLightBuffer {

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



{

	SDL_FreeSurface(bmp);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



}
	m_pImmediateContext = NULL;

	vector<Vertex> vertexlist;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ConstantMaterial material; //物体の質感

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	txDesc.ArraySize = 1;

{





	{

using std::cout; using std::endl;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	dsDesc.Texture2D.MipSlice = 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ConstantLight    pntLight; //点光源

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	if (FAILED(hr))

	float    farZ = 100.0f;



		cout << "SDL_INIT_ERROR" << endl;

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

	//vector<Vertex> vertex_t;

	}



		NULL,

	m_pSwapChain->Present(0, 0);

				indexlist.push_back(index);

		&shapes,

	{

#endif

	//頂点バッファ作成

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_DestroyTexture(tex);

	{

#include <iostream>

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			switch (e.key.keysym.sym)

		&shapes,

	//深度ステンシルバッファ作成

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	// Loop over shapes



		&level,

		else if (e.type == SDL_KEYDOWN)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 pos;               //座標(x,y,z)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	//Vertex* pVList = new Vertex[vcount];

	auto& shapes = reader.GetShapes();

			{

	Release();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		NULL,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	}



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Quit();

		else if (e.type == SDL_KEYDOWN)

	{

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pTextureView);



	D3D11_BUFFER_DESC ibDesc;

	{



	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	float    nearZ = 0.1f;

	D3D11_TEXTURE2D_DESC txDesc;

		&scDesc,

	{

	return;

	txDesc.Height = rect.Height();

	ConstantLightBuffer clb;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ibDesc.CPUAccessFlags = 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ConstantLight    pntLight; //点光源

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			{



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	HRESULT              hr;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	bool ret = tinyobj::LoadObj(



{



	XMStoreFloat4(&clb.material.specular, materialSpecular);







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	irData.SysMemPitch = 0;

	vrData.SysMemSlicePitch = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





CD3DTest::~CD3DTest()

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_VertexCount = vcount;

			}

	}



				break;

	std::string inputfile = "test.obj";



	scDesc.Windowed = TRUE;





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.CPUAccessFlags = 0;

		SDL_RenderPresent(ren);

	m_pIndexBuffer = NULL;

	m_Viewport.MinDepth = 0.0f;

	}

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.Windowed = TRUE;

	if (FAILED(hr))



	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok



	vrData.SysMemSlicePitch = 0;

	m_pTexture = NULL;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pTexture);



	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

			// Loop over vertices in the face.



		if (e.type == SDL_QUIT)





	}

				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

			default:

		pVList[i] = vertexlist[i];

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

#include <iostream>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

struct ConstantLight {

			index_offset += num_vertices;

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.MipLevels = 1;

		{



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		pIList[j] = indexList[j];

	{

	{

	pBackBuffer->Release();

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



};

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pImmediateContext);

	m_pTextureView = NULL;

	D3D11_BUFFER_DESC ibDesc;

	WORD* pIList = new WORD[icount];

	m_Viewport.Height = (FLOAT)rect.Height();



	std::vector<tinyobj::shape_t> shapes;

				indexlist.push_back(idx.vertex_index);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))





	{



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//ビューポート設定

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.SampleDesc.Quality = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderPresent(ren);

	CRect                rect;

		R"(cube.obj)");

		}

	SDL_DestroyRenderer(ren);

		pLevels,



			case SDLK_LEFT:

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);







	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

	return 0;

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pRenderTargetView);

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			// Loop over vertices in the face.

	LoadObj(vertexlist, indexList);

		R"(cube.obj)");

		}

	scDesc.Windowed = TRUE;



	//ピクセルシェーダー生成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		&level,

	}

	}

#include "DirectXManager.h"

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pIndexBuffer);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			index_offset += num_vertices;

	//頂点バッファ作成

#ifdef _DEBUG

	if (FAILED(hr))

	//vector<WORD> index_t;

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	// Loop over shapes

	cbDesc.MiscFlags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





/*

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		pVList[i] = vertexlist[i];

		1,

	pBackBuffer->Release();

	if (FAILED(hr))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	std::vector<tinyobj::material_t> materials;



	SDL_Quit();

	ZeroMemory(&txDesc, sizeof(txDesc));



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_TOTAL





	if (FAILED(hr))

	SDL_DestroyWindow(win);

		delete[] pIList;

				break;

			for (size_t v = 0; v < fv; v++)

		SDL_Delay(1000);



}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	//Vertex* pVList = new Vertex[vcount];



	//Key press surfaces constants



#ifdef _DEBUG



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};



			//Select surfaces based on key press

		return hr;

	{

	m_Viewport.MaxDepth = 1.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{

		1,



}

	txDesc.Height = rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	SDL_FreeSurface(suf);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}*/

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	float    farZ = 100.0f;

	return;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	HRESULT              hr;

	tinyobj::attrib_t attrib;

	ZeroMemory(&txDesc, sizeof(txDesc));

		&materials,

	ConstantMaterial material; //物体の質感





		}

}

		&materials,

	m_pSwapChain = NULL;



	vbDesc.StructureByteStride = 0;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	ConstantLightBuffer clb;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			exit(1);

	SDL_Quit();

			int num_vertices = shape.mesh.num_face_vertices[f];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

using std::cout; using std::endl;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





		KEY_PRESS_SURFACE_LEFT,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pIndexBuffer = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");







	m_pInputLayout = NULL;

	{

 */

	SAFE_RELEASE(m_pSampler);

}

{

	return 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pVertexShader);

		//User presses a key

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

	//Create Index



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			for (size_t v = 0; v < fv; v++)

	//Clean up our objects and quit

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

	Vertex* pVList = new Vertex[vcount];

};

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	std::string error;

	}

	SAFE_RELEASE(m_pDepthStencilView);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	//頂点レイアウト作成

		&materials,

	//Key press surfaces constants

				WORD index = idx.vertex_index;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (m_pImmediateContext)

	SDL_DestroyTexture(tex);





	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.eyePos, eye);

			{

	ibDesc.CPUAccessFlags = 0;

	m_pPixelShader = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	// Loop over shapes

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&level,

}

	//Vertex* pVList = new Vertex[vcount];

		return hr;

	txDesc.SampleDesc.Quality = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

				WORD index = idx.vertex_index;

	txDesc.Height = rect.Height();

	XMFLOAT4X4 projection;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.CPUAccessFlags = 0;

	txDesc.Height = rect.Height();

	auto& attrib = reader.GetAttrib();





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//ピクセルシェーダー生成

	SDL_DestroyRenderer(ren);





	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pInputLayout);

	D3D11_BUFFER_DESC cbDesc;

		&m_pSwapChain,

	m_pSampler = NULL;

			case SDLK_UP:

	{

	m_pDevice = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			case SDLK_UP:

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ConstantMaterial material; //物体の質感



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			}

#include <iostream>

	vbDesc.MiscFlags = 0;

	m_pMatrixBuffer = NULL;





	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		SDL_RenderClear(ren);

	//vector<WORD> index_t;

	if (FAILED(hr))

}

	float    farZ = 100.0f;

	scDesc.BufferCount = 1;

		&error,



	m_VertexCount = 0;





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				// access to vertex

{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



				// access to vertex

			{

			// Loop over vertices in the face.

		&error,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





	cbDesc.StructureByteStride = 0;

	}*/

	D3D11_BUFFER_DESC ibDesc;

		//User presses a key

	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	//深度ステンシルバッファ作成

	m_pIndexBuffer = NULL;

}



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		delete[] pVList;

void CD3DTest::Release()

	UINT offsets = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//定数バッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

		flags,





	//頂点レイアウト作成

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	SDL_Quit();

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pPixelShader);

		return hr;

		return hr;

	scDesc.OutputWindow = hwnd;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	SAFE_RELEASE(m_pSampler);



}

		// Loop over faces(polygon)

		pVList[i] = vertexlist[i];

	HRESULT              hr;

/*

	for (int i = 0; i < vcount; i++)

		}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	UINT strides = sizeof(Vertex);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





		{

		flags,

	}

	dsDesc.Format = txDesc.Format;

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

};

	}

	enum KeyPressSurfaces

	tinyobj::attrib_t attrib;

	}*/

		{

		pLevels,



	scDesc.Windowed = TRUE;

		}

#endif

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

	ConstantMaterial material; //物体の質感

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

			default:

	if (FAILED(hr))

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

		R"(cube.obj)");

#include <iostream>

	cbDesc.StructureByteStride = 0;

	Release();

}



	vrData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

	if (FAILED(hr))

struct ConstantLight {

			{

	std::string inputfile = "test.obj";

{

	reader_config.mtl_search_path = "./"; // Path to material files



	UINT offsets = 0;

	}

			{

	//Clean up our objects and quit



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		if (e.type == SDL_QUIT)

	pBackBuffer->Release();

	cbDesc.MiscFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



				// access to vertex

			case SDLK_DOWN:

		m_pImmediateContext->ClearState();

				break;

	ibDesc.CPUAccessFlags = 0;

};

	SAFE_RELEASE(m_pSampler);

	/*

	m_pRenderTargetView = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

		exit(1);



	m_pDepthStencilTexture = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		D3D11_SDK_VERSION,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

		pIList[j] = indexList[j];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	//深度ステンシルバッファ作成



	SAFE_RELEASE(m_pDepthStencilTexture);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	CRect                rect;

	txDesc.SampleDesc.Count = 1;

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&m_pDevice,

}
			{

		}

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.StructureByteStride = 0;

	pBackBuffer->Release();

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

	UINT strides = sizeof(Vertex);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

}



	SDL_DestroyTexture(tex);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vector<WORD> indexList;

	vrData.pSysMem = &pVList[0];

		&error,



		}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&m_pImmediateContext);

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.eyePos, eye);

			case SDLK_UP:

		}

	auto& attrib = reader.GetAttrib();



int main(int, char**)



	m_pDepthStencilView = NULL;

		pIList[j] = indexList[j];

	txDesc.Width = rect.Width();

	reader_config.mtl_search_path = "./"; // Path to material files

	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			{

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			// Loop over vertices in the face.

			exit(1);

	}

		}









	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&m_pImmediateContext);

};

	txDesc.MiscFlags = 0;

				// access to vertex





	m_Viewport.Width = (FLOAT)rect.Width();

	irData.SysMemPitch = 0;

	ConstantLightBuffer clb;

	//First we need to start up SDL, and make sure it went ok

		return hr;

	tinyobj::attrib_t attrib;

HRESULT CD3DTest::Create(HWND hwnd)

		&m_pImmediateContext);

	}

	{

	{

	if (FAILED(hr))

	m_pLightBuffer = NULL;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		&shapes,

		SDL_RenderClear(ren);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			}



	}

	//インデックスバッファ作成

	}

	{

	if (FAILED(hr))

		return hr;

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				indexlist.push_back(idx.vertex_index);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//頂点レイアウト作成

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	D3D11_BUFFER_DESC vbDesc;

	m_pLightBuffer = NULL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	std::vector<tinyobj::material_t> materials;





	SAFE_RELEASE(m_pImmediateContext);



	//vector<Vertex> vertex_t;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pVertexShader);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

int main(int, char**)

	if (FAILED(hr))

	m_pDevice = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 ambient;           //環境(r,g,b)

HRESULT CD3DTest::Create(HWND hwnd)

	return 0;

	float    fov = XMConvertToRadians(20.0f);

	{

	if (!reader.Warning().empty())

	D3D11_BUFFER_DESC ibDesc;

	scDesc.SampleDesc.Quality = 0;

	CRect                rect;

				vertex.push_back(vertex_tmp);

	SDL_Quit();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	return 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}

			}

	delete[] pIList;



	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		return hr;

using std::cout; using std::endl;

	SAFE_RELEASE(m_pTextureView);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			// Loop over vertices in the face.



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

void CD3DTest::Release()



		return hr;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	vrData.pSysMem = &pVList[0];

	scDesc.BufferCount = 1;

	//テクスチャ読み込み

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pDepthStencilView = NULL;

}
	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

#include <SDL.h>

	scDesc.BufferCount = 1;

	CRect                rect;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pSampler = NULL;

		KEY_PRESS_SURFACE_LEFT,

	}

struct ConstantMaterial {

	m_pDepthStencilView = NULL;

	return 0;



{



	m_pPixelShader = NULL;



};

	cbDesc.MiscFlags = 0;





		&scDesc,





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {

	return 0;

void CD3DTest::Render()

	LoadObj(vertexlist, indexList);

};



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		}

#ifdef _DEBUG

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}

		return hr;

		delete[] pVList;

	ZeroMemory(&txDesc, sizeof(txDesc));





	SDL_DestroyWindow(win);

		pIList[j] = indexList[j];



	{

#include "DirectXManager.h"

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.SampleDesc.Count = 1;

		delete[] pIList;

	SAFE_RELEASE(m_pRenderTargetView);

	D3D_FEATURE_LEVEL level;

			}

			case SDLK_DOWN:

	}

	m_pDepthStencilTexture = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_BUFFER_DESC vbDesc;

	WORD* pIList = new WORD[icount];

		R"(cube.obj)");

}

		&level,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

 * Lesson 1: Hello World!

		&level,

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pTexture);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_DestroyTexture(tex);

	m_pDepthStencilTexture = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Format = txDesc.Format;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



#include <SDL.h>

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	{

{

	txDesc.Width = rect.Width();

struct ConstantLight {

}



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	bool ret = tinyobj::LoadObj(

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTextureView);



	SDL_DestroyRenderer(ren);

	m_pImmediateContext = NULL;

			}

/*

				tinyobj::real_t ty =

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4 pos;               //座標(x,y,z)

	{

	}



	}





 */

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	HRESULT              hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

 */



	std::string error;

		SDL_RenderClear(ren);



	delete[] pIList;



	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	auto& shapes = reader.GetShapes();

}

}

	vrData.SysMemSlicePitch = 0;

	auto& materials = reader.GetMaterials();

	// Loop over shapes

	SAFE_RELEASE(m_pRenderTargetView);

CD3DTest::CD3DTest()

	CRect                rect;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.MiscFlags = 0;

	vector<Vertex> vertexlist;

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_RIGHT,

	txDesc.CPUAccessFlags = 0;

	WORD   icount = indexList.size();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (!reader.ParseFromFile(inputfile, reader_config))

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pIndexBuffer);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<WORD> index_t;

	vbDesc.MiscFlags = 0;



	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

	if (FAILED(hr))



	cbDesc.MiscFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			}



	m_pMatrixBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	tinyobj::attrib_t attrib;

	m_pDepthStencilView = NULL;

				break;

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pVertexShader = NULL;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//頂点バッファ作成

HRESULT CD3DTest::Create(HWND hwnd)

	m_Viewport.MaxDepth = 1.0f;

{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4         eyePos;   //視点座標

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		else if (e.type == SDL_KEYDOWN)

	ConstantMaterial material; //物体の質感

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	std::vector<tinyobj::shape_t> shapes;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	{

	// Loop over shapes

	}

	float    fov = XMConvertToRadians(20.0f);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_VertexCount = 0;

	m_pPixelShader = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.MipLevels = 1;



	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

		SDL_RenderPresent(ren);



	SDL_Event e;



	cbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	float    nearZ = 0.1f;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{

		&materials,

}

	/*

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		}



};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

#include <iostream>





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	UINT flags = 0;

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);





		return hr;

		R"(cube.obj)");

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.MiscFlags = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

		}

	ConstantLight    pntLight; //点光源

		size_t index_offset = 0;

	dsDesc.Format = txDesc.Format;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pDevice);

	//Clean up our objects and quit

CD3DTest::CD3DTest()

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_DEFAULT,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

int SEGMENT = 36;

	SAFE_RELEASE(m_pMatrixBuffer);

CD3DTest::~CD3DTest()

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyTexture(tex);

	txDesc.SampleDesc.Quality = 0;

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pDepthStencilTexture);

	Vertex* pVList = new Vertex[vcount];

using std::cout; using std::endl;

	irData.pSysMem = &pIList[0];





	SDL_DestroyWindow(win);

		SDL_RenderClear(ren);



CD3DTest::~CD3DTest()



	delete[] pIList;

	SDL_Event e;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	ConstantMatrixBuffer cmb;

	}

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



		&m_pImmediateContext);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



			}

		return 1;

		size_t index_offset = 0;

	scDesc.SampleDesc.Count = 1;

		exit(1);



CD3DTest::~CD3DTest()

	//ビューポート設定

	//Clean up our objects and quit



	vector<WORD> indexList;

				indexlist.push_back(idx.vertex_index);



	float    fov = XMConvertToRadians(20.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	UINT strides = sizeof(Vertex);

	{

		return hr;



		return hr;

	if (FAILED(hr))

};

void CD3DTest::Release()



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	Release();





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

				break;

};

	{

		SDL_RenderClear(ren);

		&shapes,

CD3DTest::CD3DTest()

		SDL_RenderPresent(ren);

	{

		}

	SDL_DestroyTexture(tex);

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pPixelShader = NULL;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_FreeSurface(bmp);



	m_pInputLayout = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

int main(int, char**)

		if (!ret)



{

	int     vcount = vertexlist.size();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.SampleDesc.Count = 1;

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.MaxDepth = 1.0f;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pDevice = NULL;

	m_pLightBuffer = NULL;

	ID3D11Texture2D* pBackBuffer;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	txDesc.Width = rect.Width();

			index_offset += num_vertices;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		if (e.type == SDL_QUIT)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	m_pSampler = NULL;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	for (size_t s = 0; s < shapes.size(); s++)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		size_t index_offset = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		delete[] pVList;

	{

using std::cout; using std::endl;

	if (m_pImmediateContext)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	//頂点シェーダー生成



	}

	XMFLOAT4X4 projection;

{

	if (!error.empty())

	m_Viewport.MaxDepth = 1.0f;

	txDesc.CPUAccessFlags = 0;



		if (!reader.Error().empty())

	for (const auto& shape : shapes)

		size_t index_offset = 0;





	txDesc.SampleDesc.Quality = 0;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





	if (FAILED(hr))



	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pIList;

				vertex.push_back(vertex_tmp);

			// Loop over vertices in the face.

	{

	}

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.MiscFlags = 0;

		NULL,

	txDesc.MipLevels = 1;

{

				break;

	scDesc.Windowed = TRUE;

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ID3D11Texture2D* pBackBuffer;

	m_Angle += XMConvertToRadians(1.0f);

	m_Viewport.MaxDepth = 1.0f;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		{



	//Vertex* pVList = new Vertex[vcount];

	DXGI_SWAP_CHAIN_DESC scDesc;

		flags,

	for (int i = 0; i < vcount; i++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//Clean up our objects and quit

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D_FEATURE_LEVEL level;

	}



	float    nearZ = 0.1f;

	irData.SysMemPitch = 0;



	SDL_FreeSurface(bmp);

	}

	//vector<Vertex> vertex_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.MipLevels = 1;





	auto& attrib = reader.GetAttrib();

	std::string imagePath = "hello.bmp";

		m_pImmediateContext->ClearState();

	{

	//深度ステンシルバッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

				break;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::string inputfile = "test.obj";

	//vector<WORD> index_t;

		&m_pSwapChain,

	//ビューポート設定

	}

	{

struct ConstantLightBuffer {

		&m_pImmediateContext);

				tinyobj::real_t ty =

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	return 0;

int main(int, char**)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	float    nearZ = 0.1f;

	irData.SysMemSlicePitch = 0;

	tinyobj::ObjReaderConfig reader_config;









				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_TOTAL

		KEY_PRESS_SURFACE_LEFT,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	::GetClientRect(hwnd, &rect);

	//テクスチャ読み込み

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{







	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}

	SDL_Event e;



	}

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

		cout << "SDL_INIT_ERROR" << endl;

	float    farZ = 100.0f;

	std::vector<tinyobj::material_t> materials;

		&attrib,

			for (size_t v = 0; v < num_vertices; v++)

	ID3D11Texture2D* pBackBuffer;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

#ifdef _DEBUG

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_LEFT,

	m_pDevice = NULL;

	//深度ステンシルバッファ作成

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

}

	}

	m_VertexCount = vcount;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D11_SUBRESOURCE_DATA irData;





	m_pSampler = NULL;

	}



		}

		&m_pSwapChain,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;

	}



	txDesc.CPUAccessFlags = 0;

		}

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

{

			{

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pDepthStencilView = NULL;

{

	tinyobj::attrib_t attrib;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vector<Vertex> vertexlist;

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{



	std::vector<tinyobj::shape_t> shapes;

	}

		return hr;

	delete[] pIList;

		}

		SDL_RenderCopy(ren, tex, NULL, NULL);

			index_offset += num_vertices;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	txDesc.Height = rect.Height();

	SDL_Quit();

	XMFLOAT4X4 projection;

	vbDesc.MiscFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	{

struct ConstantMatrixBuffer {

	ibDesc.StructureByteStride = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

		return hr;





			}

		{

	{

	if (FAILED(hr))

		SDL_RenderPresent(ren);



	WORD* pIList = new WORD[icount];



	{

	//Clean up our objects and quit

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	m_Viewport.TopLeftX = 0;

				vertex.push_back(vertex_tmp);

			default:



		}



		return hr;

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				break;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

}

	SAFE_RELEASE(m_pRenderTargetView);

	std::string inputfile = "test.obj";

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_BUFFER_DESC ibDesc;

	m_pSwapChain = NULL;

	return 0;

	m_pDevice = NULL;

	cbDesc.CPUAccessFlags = 0;

	cbDesc.StructureByteStride = 0;

	XMFLOAT4X4 projection;



		D3D11_SDK_VERSION,

	//ピクセルシェーダー生成

			for (size_t v = 0; v < num_vertices; v++)

CD3DTest::CD3DTest()

		return hr;

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	cbDesc.StructureByteStride = 0;



	m_pSwapChain = NULL;





		}



	scDesc.BufferDesc.Height = rect.Height();



	//頂点シェーダー生成

		KEY_PRESS_SURFACE_TOTAL

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pTextureView = NULL;

	vbDesc.StructureByteStride = 0;



	return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vrData.SysMemSlicePitch = 0;

	if (!reader.Warning().empty())

	ConstantMatrixBuffer cmb;

	//Clean up our objects and quit



	m_Viewport.TopLeftY = 0;



	//ビューポート設定



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (!ret)

	if (FAILED(hr))

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pLightBuffer = NULL;

		{









	return 0;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//First we need to start up SDL, and make sure it went ok



	}

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t tx =

		&m_pSwapChain,

		return hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

 * Lesson 1: Hello World!

#define TINYOBJLOADER_IMPLEMENTATION

	m_pVertexShader = NULL;

	m_pSwapChain->Present(0, 0);

	ConstantLightBuffer clb;

	ibDesc.MiscFlags = 0;

{

}

	m_pSwapChain->Present(0, 0);

	Release();

				// access to vertex



	for (const auto& shape : shapes)

struct ConstantMatrixBuffer {

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	vrData.SysMemSlicePitch = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		}

	XMFLOAT4 pos;               //座標(x,y,z)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//Clean up our objects and quit





	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<Vertex> vertex_t;



	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4(&clb.material.specular, materialSpecular);





	{



		size_t index_offset = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&m_pDevice,

		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				WORD index = idx.vertex_index;

	auto& shapes = reader.GetShapes();

	m_Viewport.Height = (FLOAT)rect.Height();

	return 0;

}



			//Select surfaces based on key press

	return hr;

struct ConstantLight {



	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pSwapChain = NULL;

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	ibDesc.ByteWidth = sizeof(WORD) * icount;







	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

		1,

		}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		&m_pSwapChain,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//Create Index

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))



	SAFE_RELEASE(m_pPixelShader);

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	Release();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//Create Index

	m_pDepthStencilTexture = NULL;

	m_pSwapChain = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_TOTAL

	txDesc.SampleDesc.Quality = 0;

	scDesc.BufferCount = 1;

			for (size_t v = 0; v < fv; v++)

	SDL_FreeSurface(bmp);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include <SDL.h>

		}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::string error;

	XMFLOAT4X4 projection;

	txDesc.SampleDesc.Count = 1;

{

	scDesc.OutputWindow = hwnd;

				vertex.push_back(vertex_tmp);

			case SDLK_LEFT:

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}



{

		flags,

	SDL_FreeSurface(bmp);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.Windowed = TRUE;

	auto& attrib = reader.GetAttrib();

		1,

	m_IndexCount = icount;

		SDL_RenderClear(ren);

		&materials,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

}
	m_pSwapChain = NULL;







		//User presses a key

		if (!reader.Error().empty())

		KEY_PRESS_SURFACE_LEFT,





struct ConstantMatrixBuffer {

	D3D11_BUFFER_DESC cbDesc;



		D3D_DRIVER_TYPE_HARDWARE,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	UINT offsets = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		{



	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

		}



	SDL_Event e;



		return hr;

}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	vrData.SysMemPitch = 0;





	UINT offsets = 0;

	cbDesc.CPUAccessFlags = 0;





struct ConstantLight {



	if (FAILED(hr))

		NULL,

	if (FAILED(hr))

		//User requests quit

	if (!reader.ParseFromFile(inputfile, reader_config))

				vertex.push_back(vertex_tmp);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		cout << "SDL_INIT_ERROR" << endl;

	//頂点バッファ作成



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

HRESULT CD3DTest::Create(HWND hwnd)



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	for (const auto& shape : shapes)

{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	D3D11_SUBRESOURCE_DATA vrData;

			case SDLK_DOWN:

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



{

		return hr;



	WORD* pIList = new WORD[icount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pImmediateContext);





	vbDesc.StructureByteStride = 0;

	m_VertexCount = vcount;

	delete[] pIList;

				tinyobj::real_t ty =

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.StructureByteStride = 0;

	SDL_Event e;

		exit(1);

	::GetClientRect(hwnd, &rect);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		pIList[j] = indexList[j];

	bool ret = tinyobj::LoadObj(

		else if (e.type == SDL_KEYDOWN)

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pRenderTargetView);

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&m_pSwapChain,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		}

};

	scDesc.BufferDesc.Height = rect.Height();

	return hr;

	UINT strides = sizeof(Vertex);

	vector<Vertex> vertexlist;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	D3D11_SUBRESOURCE_DATA vrData;



#include <SDL.h>

};

		&shapes,

	SDL_DestroyWindow(win);

	WORD* pIList = new WORD[icount];

			index_offset += num_vertices;

	}*/

	float    farZ = 100.0f;





		return hr;

		SDL_RenderClear(ren);

	m_pPixelShader = NULL;

	m_Viewport.MaxDepth = 1.0f;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		return hr;

		size_t index_offset = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	scDesc.BufferCount = 1;

}
	{

};

		return hr;

	scDesc.SampleDesc.Count = 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.MiscFlags = 0;

	}

	SDL_FreeSurface(bmp);

	//頂点レイアウト作成

	SDL_Quit();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_VertexCount = 0;

/*

		return hr;

	txDesc.CPUAccessFlags = 0;

	m_Viewport.MaxDepth = 1.0f;



	SDL_Event e;

	m_Angle += XMConvertToRadians(1.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.SampleDesc.Quality = 0;



		NULL,

{

		SDL_RenderClear(ren);

			index_offset += num_vertices;

	std::vector<tinyobj::material_t> materials;

	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

	if (FAILED(hr))

			}

	dsDesc.Format = txDesc.Format;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)

		KEY_PRESS_SURFACE_DOWN,

	for (size_t s = 0; s < shapes.size(); s++)

			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	if (FAILED(hr))

	m_pTextureView = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pDevice = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&m_pDevice,



	cbDesc.StructureByteStride = 0;



	UINT flags = 0;

int SEGMENT = 36;

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	pBackBuffer->Release();

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_RenderClear(ren);

#ifdef _DEBUG

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pSwapChain = NULL;



	return 0;



	XMStoreFloat4(&clb.eyePos, eye);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		SDL_RenderPresent(ren);

{

		flags,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	txDesc.SampleDesc.Quality = 0;

	txDesc.Height = rect.Height();

	auto& shapes = reader.GetShapes();

		&shapes,

		}

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

int main(int, char**)





	if (!reader.Warning().empty())

		return hr;

				tinyobj::real_t tx =

	m_pVertexBuffer = NULL;

			case SDLK_DOWN:

	while (SDL_PollEvent(&e) != 0)

	}

	scDesc.BufferCount = 1;



		KEY_PRESS_SURFACE_DEFAULT,

/*

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (!reader.Warning().empty())

			}

	SAFE_RELEASE(m_pImmediateContext);

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



			}



	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		SDL_RenderPresent(ren);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

{

	WORD* pIList = new WORD[icount];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	UINT flags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.BufferCount = 1;

	pBackBuffer->Release();

	SDL_Quit();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.eyePos, eye);

	for (int i = 0; i < 3; i++)

	// Loop over shapes

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	float    fov = XMConvertToRadians(20.0f);

	HRESULT              hr;

	{



	if (!error.empty())

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

#include <SDL.h>

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	delete[] pVList;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::vector<tinyobj::shape_t> shapes;



	for (size_t s = 0; s < shapes.size(); s++)

		KEY_PRESS_SURFACE_TOTAL

struct ConstantLight {

	txDesc.SampleDesc.Count = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

using std::cout; using std::endl;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemPitch = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Quit();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



				indexlist.push_back(index);

	{

	txDesc.ArraySize = 1;



			break;

	cbDesc.MiscFlags = 0;

		}

	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferDesc.Width = rect.Width();

		{



				tinyobj::real_t tx =

	{

	for (size_t s = 0; s < shapes.size(); s++)



	vrData.SysMemSlicePitch = 0;



		m_pImmediateContext->ClearState();



		cout << "SDL_INIT_ERROR" << endl;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

CD3DTest::~CD3DTest()

 */

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pTexture);



	}*/

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& materials = reader.GetMaterials();

	//テクスチャ読み込み



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

#include <iostream>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	//インデックスバッファ作成

	m_pTexture = NULL;

	txDesc.Width = rect.Width();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.MiscFlags = 0;

		SDL_RenderPresent(ren);



		return hr;

	XMFLOAT4X4 world;





	if (FAILED(hr))

			}

	return 0;

			case SDLK_RIGHT:

		1,

			exit(1);

	scDesc.SampleDesc.Count = 1;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		KEY_PRESS_SURFACE_LEFT,



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//vector<WORD> index_t;

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pDepthStencilView);



	if (FAILED(hr))

	m_Viewport.Width = (FLOAT)rect.Width();

	m_VertexCount = 0;

	}

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	m_pTexture = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		SDL_Delay(1000);

		D3D11_SDK_VERSION,

		return hr;

	return;

	irData.SysMemSlicePitch = 0;

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	{

{

struct ConstantLight {

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				break;

		&materials,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//First we need to start up SDL, and make sure it went ok



	std::vector<tinyobj::material_t> materials;

	XMFLOAT4X4 view;

	auto& attrib = reader.GetAttrib();

		return hr;



	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4         eyePos;   //視点座標

			case SDLK_RIGHT:

void CD3DTest::Render()

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	return;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		{



		pIList[j] = indexList[j];





	//定数バッファ作成

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pDepthStencilTexture = NULL;

	{

				tinyobj::real_t tx =

	}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Quit();

	std::string imagePath = "hello.bmp";

		&shapes,



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.SysMemSlicePitch = 0;

	m_pDepthStencilTexture = NULL;

	}

		size_t index_offset = 0;

		pLevels,





		KEY_PRESS_SURFACE_LEFT,

	D3D11_SUBRESOURCE_DATA vrData;

	m_pSwapChain = NULL;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

int SEGMENT = 36;

	for (size_t s = 0; s < shapes.size(); s++)

	{

	auto& materials = reader.GetMaterials();

	delete[] pVList;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			index_offset += fv;

	}

	{



	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pPixelShader = NULL;

		SDL_RenderClear(ren);

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	vrData.SysMemPitch = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

	{

	SAFE_RELEASE(m_pSwapChain);

}
CD3DTest::~CD3DTest()

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.BufferDesc.Height = rect.Height();

	m_VertexCount = 0;

	}

	enum KeyPressSurfaces

			for (size_t v = 0; v < num_vertices; v++)

		size_t index_offset = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	//深度ステンシルバッファ作成

				tinyobj::real_t tx =

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::real_t tx =

	cbDesc.CPUAccessFlags = 0;

};

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	tinyobj::ObjReader reader;

#include "DirectXManager.h"



	m_pIndexBuffer = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.StructureByteStride = 0;

		return hr;



	scDesc.OutputWindow = hwnd;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	SDL_DestroyWindow(win);

	for (int i = 0; i < 3; i++)

	SDL_DestroyRenderer(ren);

			{

				vertex.push_back(vertex_tmp);



	m_VertexCount = vcount;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pPixelShader = NULL;

	UINT flags = 0;

	Release();

		//User presses a key

};

	//Key press surfaces constants

		{

			for (size_t v = 0; v < fv; v++)





		&materials,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	std::string error;



				break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Quit();

	//First we need to start up SDL, and make sure it went ok

	scDesc.SampleDesc.Count = 1;

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	if (FAILED(hr))

	m_VertexCount = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			int num_vertices = shape.mesh.num_face_vertices[f];



			}



	//頂点バッファ作成

	if (!reader.Warning().empty())



	ConstantMatrixBuffer cmb;

		}

			case SDLK_UP:



	SDL_DestroyRenderer(ren);



	XMFLOAT4X4 world;



	scDesc.SampleDesc.Count = 1;

		return hr;

	m_IndexCount = 0;

	if (m_pImmediateContext)

		&level,

struct ConstantLight {



	SDL_Event e;



		&scDesc,

	SDL_FreeSurface(bmp);



	}

#endif



	if (FAILED(hr))



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	for (size_t s = 0; s < shapes.size(); s++)

	UINT offsets = 0;

	txDesc.Height = rect.Height();

	txDesc.MipLevels = 1;

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	if (!error.empty())

	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

		// Loop over faces(polygon)

	SDL_DestroyWindow(win);

	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.StructureByteStride = 0;

	//頂点シェーダー生成

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	UINT strides = sizeof(Vertex);

{

}

	}*/

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				indexlist.push_back(index);

		delete[] pVList;

		&m_pImmediateContext);



	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				indexlist.push_back(idx.vertex_index);



		D3D_DRIVER_TYPE_HARDWARE,

		1,

	m_IndexCount = icount;

	//ピクセルシェーダー生成

		return 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	}

	std::vector<tinyobj::material_t> materials;

	LoadObj(vertexlist, indexList);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.OutputWindow = hwnd;

		&level,

	m_pTexture = NULL;



		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.Windowed = TRUE;



	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	if (FAILED(hr))

	delete[] pVList;



	UINT offsets = 0;

	std::string error;



	if (FAILED(hr))

		}

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pSampler);

	vbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(suf);

	delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	WORD   icount = indexList.size();

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

	}

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	Release();

	UINT strides = sizeof(Vertex);



	vrData.SysMemSlicePitch = 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	//Clean up our objects and quit

	HRESULT              hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_BUFFER_DESC cbDesc;

 * Lesson 1: Hello World!

	m_VertexCount = vcount;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//インデックスバッファ作成

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pDevice = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

	ConstantMatrixBuffer cmb;



		&materials,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

	//Clean up our objects and quit

	m_pDevice = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





		size_t index_offset = 0;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			// Loop over vertices in the face.

	SAFE_RELEASE(m_pSwapChain);

				indexlist.push_back(index);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



 */



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

	//vector<Vertex> vertex_t;

	if (FAILED(hr))



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	auto& shapes = reader.GetShapes();



	ConstantMaterial material; //物体の質感



	//First we need to start up SDL, and make sure it went ok

	SDL_DestroyRenderer(ren);

	m_pSwapChain = NULL;

	ConstantLightBuffer clb;



	vector<WORD> indexList;

		return hr;

}

	//Create Index

	m_pSwapChain = NULL;

				indexlist.push_back(idx.vertex_index);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			switch (e.key.keysym.sym)

	//頂点レイアウト作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{



	auto& attrib = reader.GetAttrib();

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	ConstantMaterial material; //物体の質感

	if (m_pImmediateContext)

		return hr;



	m_pDepthStencilTexture = NULL;

		NULL,

	bool ret = tinyobj::LoadObj(

		}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	{







	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		//User presses a key

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		D3D11_SDK_VERSION,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	ConstantLightBuffer clb;

	while (SDL_PollEvent(&e) != 0)

	if (m_pImmediateContext)

	// Loop over shapes

	m_Angle += XMConvertToRadians(1.0f);

}

{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMatrixBuffer cmb;

		return 1;

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.MipLevels = 1;

#include <SDL.h>

		pLevels,





		SDL_RenderCopy(ren, tex, NULL, NULL);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4(&clb.eyePos, eye);

	m_pDevice = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		{



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	UINT offsets = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}





	txDesc.Height = rect.Height();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		}





		pVList[i] = vertexlist[i];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.MiscFlags = 0;

	HRESULT              hr;

	//頂点シェーダー生成

	std::string inputfile = "test.obj";

	/*

}

		D3D11_SDK_VERSION,

	ibDesc.MiscFlags = 0;

		// Loop over faces(polygon)



	scDesc.BufferCount = 1;



	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//深度ステンシルバッファ作成

	return;

		{

	m_pTextureView = NULL;

	{



		&m_pImmediateContext);

	if (FAILED(hr))

int main(int, char**)

		SDL_RenderPresent(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	delete[] pIList;

		return hr;

	}



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vector<WORD> indexList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	}

		{

	for (size_t s = 0; s < shapes.size(); s++)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			switch (e.key.keysym.sym)

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

	m_pPixelShader = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int SEGMENT = 36;



	}

		KEY_PRESS_SURFACE_DOWN,



{

};

	std::string inputfile = "test.obj";

	Release();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	XMStoreFloat4(&clb.eyePos, eye);

	}

				break;

	m_IndexCount = icount;

	vbDesc.CPUAccessFlags = 0;

			case SDLK_RIGHT:

	//深度ステンシルバッファ作成

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	};

		}

		pIList[j] = indexList[j];

	SDL_DestroyTexture(tex);

	SDL_Quit();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.OutputWindow = hwnd;

			switch (e.key.keysym.sym)

		return hr;

	//vector<Vertex> vertex_t;

	return 0;

	std::string imagePath = "hello.bmp";

	//vector<WORD> index_t;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&attrib,

	m_pInputLayout = NULL;

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	Release();

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				// access to vertex

	/*

		size_t index_offset = 0;

	vrData.SysMemPitch = 0;

	txDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	txDesc.SampleDesc.Count = 1;



	D3D11_SUBRESOURCE_DATA irData;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

{

{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

int main(int, char**)





		else if (e.type == SDL_KEYDOWN)

	ConstantMatrixBuffer cmb;

	m_Viewport.TopLeftX = 0;

		}

};

	float    farZ = 100.0f;

				break;

	txDesc.SampleDesc.Count = 1;

};

	irData.SysMemPitch = 0;

	SDL_FreeSurface(suf);





#define TINYOBJLOADER_IMPLEMENTATION

				indexlist.push_back(idx.vertex_index);



	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	m_IndexCount = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{



	scDesc.BufferDesc.Width = rect.Width();

	txDesc.Width = rect.Width();



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.SampleDesc.Quality = 0;

		KEY_PRESS_SURFACE_DOWN,



	if (FAILED(hr))

			index_offset += fv;

	vbDesc.MiscFlags = 0;



		return hr;

	float    fov = XMConvertToRadians(20.0f);

	if (!error.empty())

	vrData.pSysMem = &pVList[0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			{

	if (FAILED(hr))

	//Key press surfaces constants

				tinyobj::real_t ty =

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//ピクセルシェーダー生成

		m_pImmediateContext->ClearState();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	while (SDL_PollEvent(&e) != 0)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_DEFAULT,

	m_pMatrixBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_Delay(1000);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}





	SAFE_RELEASE(m_pSwapChain);

	}



		}

	//Create Index

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		&level,

	if (FAILED(hr))







	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			default:

	std::vector<tinyobj::material_t> materials;

	int     vcount = vertexlist.size();

		&m_pImmediateContext);

		return hr;



	{



	SAFE_RELEASE(m_pSampler);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pIndexBuffer = NULL;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

#include <iostream>

struct ConstantMatrixBuffer {



	std::vector<tinyobj::material_t> materials;

		return hr;



	if (FAILED(hr))



	scDesc.SampleDesc.Count = 1;





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_Viewport.MinDepth = 0.0f;

		SDL_RenderPresent(ren);

		&shapes,

				WORD index = idx.vertex_index;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pIndexBuffer = NULL;



	scDesc.SampleDesc.Quality = 0;

				break;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

}







	int     vcount = vertexlist.size();



		1,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	for (const auto& shape : shapes)

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	tinyobj::ObjReaderConfig reader_config;

#ifdef _DEBUG

int SEGMENT = 36;

	SDL_Quit();

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (!error.empty())

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_Viewport.MinDepth = 0.0f;

	//定数バッファ作成

		return hr;

};

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_FreeSurface(bmp);

	SDL_FreeSurface(bmp);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMFLOAT4 ambient;           //環境(r,g,b)

				WORD index = idx.vertex_index;

		}

			case SDLK_LEFT:

	SAFE_RELEASE(m_pImmediateContext);

	D3D11_BUFFER_DESC ibDesc;

		//User presses a key



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	}*/

	SAFE_RELEASE(m_pImmediateContext);

	//Create Index

	SDL_DestroyTexture(tex);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

int main(int, char**)

	std::string imagePath = "hello.bmp";

	auto& shapes = reader.GetShapes();

	D3D11_BUFFER_DESC ibDesc;

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pDepthStencilTexture);

	float    nearZ = 0.1f;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	{

		return 1;

		}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

using std::cout; using std::endl;

	m_pSwapChain = NULL;

#include "DirectXManager.h"



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

/*

	SDL_DestroyRenderer(ren);

			//Select surfaces based on key press

}

	SAFE_RELEASE(m_pVertexShader);

	}



	SAFE_RELEASE(m_pRenderTargetView);

	//頂点シェーダー生成

	pBackBuffer->Release();

	}

			default:

/*



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{





	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.StructureByteStride = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

	delete[] pVList;

	SDL_DestroyTexture(tex);

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//インデックスバッファ作成

{

	m_pDepthStencilView = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			// Loop over vertices in the face.

	}

	//First we need to start up SDL, and make sure it went ok

};



		{

	vbDesc.StructureByteStride = 0;

		flags,

		SDL_Delay(1000);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

}

	}

			// Loop over vertices in the face.

			// Loop over vertices in the face.

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//頂点バッファ作成

	vector<WORD> indexList;



	cbDesc.CPUAccessFlags = 0;

		return hr;

	HRESULT              hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{



	SAFE_RELEASE(m_pRenderTargetView);

	float    nearZ = 0.1f;

		R"(cube.obj)");

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pTextureView = NULL;





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pDepthStencilView = NULL;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	// Loop over shapes

	SDL_FreeSurface(bmp);



		D3D11_SDK_VERSION,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	delete[] pIList;





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

			default:

	//頂点レイアウト作成

#include <SDL.h>

	scDesc.OutputWindow = hwnd;

	return;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{





struct ConstantLightBuffer {

	if (FAILED(hr))

}
		SDL_Delay(1000);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	std::vector<tinyobj::shape_t> shapes;

	}



}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			default:

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{



	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.Windowed = TRUE;

}

		flags,

			{

	//テクスチャ読み込み



	txDesc.SampleDesc.Quality = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	::GetClientRect(hwnd, &rect);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		pVList[i] = vertexlist[i];

	}*/



	D3D11_SUBRESOURCE_DATA vrData;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;

	SDL_DestroyWindow(win);

	if (FAILED(hr))

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		// Loop over faces(polygon)

}

int SEGMENT = 36;





			// Loop over vertices in the face.

	std::string inputfile = "test.obj";

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pRenderTargetView);

		}

	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	scDesc.SampleDesc.Count = 1;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		NULL,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{



	cbDesc.StructureByteStride = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	for (int j = 0; j < icount; j++)

	scDesc.SampleDesc.Quality = 0;

	}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				indexlist.push_back(index);

	SAFE_RELEASE(m_pSwapChain);

}

				break;

		delete[] pIList;

				// access to vertex



	SAFE_RELEASE(m_pTexture);



		pLevels,

	}



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	//テクスチャ読み込み

	m_IndexCount = icount;





		pIList[j] = indexList[j];

	//インデックスバッファ作成

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

struct ConstantLight {

	scDesc.SampleDesc.Quality = 0;

		return hr;

	SAFE_RELEASE(m_pLightBuffer);

		SDL_Delay(1000);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

struct ConstantMatrixBuffer {

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = icount;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	txDesc.SampleDesc.Count = 1;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pMatrixBuffer = NULL;

	m_pInputLayout = NULL;

	ConstantLight    pntLight; //点光源

	//Clean up our objects and quit

	{



		return hr;





#endif

}



		&shapes,

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

		&materials,

	LoadObj(vertexlist, indexList);

	txDesc.ArraySize = 1;

	m_Viewport.MinDepth = 0.0f;

		R"(cube.obj)");

		return hr;

		SDL_RenderPresent(ren);

	std::string imagePath = "hello.bmp";



	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <iostream>

		NULL,



	auto& shapes = reader.GetShapes();

	SDL_DestroyWindow(win);

		{

		}

	if (FAILED(hr))



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pLightBuffer);

	if (m_pImmediateContext)

			}

	if (FAILED(hr))

	UINT offsets = 0;

	m_Viewport.MaxDepth = 1.0f;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	dsDesc.Format = txDesc.Format;

	std::string imagePath = "hello.bmp";

	m_pRenderTargetView = NULL;

		}

/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)

		&shapes,

		{

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	ZeroMemory(&dsDesc, sizeof(dsDesc));





				// access to vertex



		&m_pDevice,

	{

	txDesc.SampleDesc.Quality = 0;

	vrData.SysMemSlicePitch = 0;

#endif

#include <SDL.h>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//テクスチャ読み込み

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	vrData.SysMemSlicePitch = 0;

	txDesc.ArraySize = 1;

}



		return hr;

				WORD index = idx.vertex_index;

int main(int, char**)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	scDesc.Windowed = TRUE;

		KEY_PRESS_SURFACE_DOWN,

	WORD* pIList = new WORD[icount];

	{

		return hr;

	for (int j = 0; j < icount; j++)



	//Key press surfaces constants



		{

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	tinyobj::ObjReader reader;

int main(int, char**)

struct ConstantLightBuffer {

using std::cout; using std::endl;

	scDesc.OutputWindow = hwnd;

	CRect                rect;

	//Key press surfaces constants

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return hr;

		return hr;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	SAFE_RELEASE(m_pSwapChain);

	//頂点レイアウト作成

		m_pImmediateContext->ClearState();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	std::string error;



}

		{



	scDesc.OutputWindow = hwnd;

	{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_VertexCount = 0;

	SAFE_RELEASE(m_pTextureView);



int SEGMENT = 36;

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

/*

		&materials,

			default:

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		//User presses a key



		pIList[j] = indexList[j];

	m_pSwapChain = NULL;

{



	irData.SysMemSlicePitch = 0;

int main(int, char**)

	Release();

		if (!ret)

	XMFLOAT4X4 world;

		SDL_RenderPresent(ren);

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexBuffer);

}



				// access to vertex

	std::string error;



	vbDesc.MiscFlags = 0;

			}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

struct ConstantLightBuffer {

	txDesc.MiscFlags = 0;



void CD3DTest::Render()

{

	ibDesc.MiscFlags = 0;

	ConstantMatrixBuffer cmb;

	{



			break;

	txDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			case SDLK_UP:

	{



	scDesc.BufferCount = 1;





}
		{

		flags,

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.MipLevels = 1;

	}

		return hr;

	tinyobj::ObjReaderConfig reader_config;



	XMStoreFloat4(&clb.eyePos, eye);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	ZeroMemory(&txDesc, sizeof(txDesc));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



			default:

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				WORD index = idx.vertex_index;

#endif

	if (FAILED(hr))

	// Loop over shapes

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//頂点レイアウト作成



	m_pTextureView = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	D3D11_BUFFER_DESC ibDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	vbDesc.CPUAccessFlags = 0;

CD3DTest::~CD3DTest()

	irData.SysMemPitch = 0;

		D3D11_SDK_VERSION,



	//定数バッファ作成



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	std::string error;

	XMFLOAT4 pos;               //座標(x,y,z)





	m_Viewport.MaxDepth = 1.0f;

	float    nearZ = 0.1f;

#ifdef _DEBUG

int SEGMENT = 36;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			}

	auto& shapes = reader.GetShapes();

		1,

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	if (FAILED(hr))



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

				WORD index = idx.vertex_index;

	}



	std::string imagePath = "hello.bmp";

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;

		NULL,



		1,

{

	scDesc.SampleDesc.Count = 1;

		D3D11_SDK_VERSION,

		&m_pSwapChain,

	if (FAILED(hr))

		pIList[j] = indexList[j];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		{

	WORD* pIList = new WORD[icount];



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;



			case SDLK_UP:

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.CPUAccessFlags = 0;

		&scDesc,

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pImmediateContext);

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTexture = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	{



	}

	D3D11_TEXTURE2D_DESC txDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	irData.pSysMem = &pIList[0];

	float    nearZ = 0.1f;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		if (!ret)

	txDesc.CPUAccessFlags = 0;



	};





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	return 0;

	SAFE_RELEASE(m_pVertexShader);

	ConstantLight    pntLight; //点光源

	//Key press surfaces constants

	float    farZ = 100.0f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_IndexCount = icount;

			case SDLK_UP:

	txDesc.Width = rect.Width();

		{

			}

		}

	SDL_DestroyWindow(win);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_VertexCount = vcount;

	D3D11_BUFFER_DESC cbDesc;

#include <iostream>

	UINT offsets = 0;

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

		SDL_RenderClear(ren);

	}

	vector<WORD> indexList;

	irData.SysMemSlicePitch = 0;

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

		KEY_PRESS_SURFACE_UP,

	}

	//頂点レイアウト作成

	//頂点バッファ作成

}

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	HRESULT              hr;

	D3D11_BUFFER_DESC vbDesc;

 */



			for (size_t v = 0; v < fv; v++)

		delete[] pIList;

	SAFE_RELEASE(m_pDepthStencilTexture);

	UINT strides = sizeof(Vertex);

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string inputfile = "test.obj";

			default:

#endif

	if (FAILED(hr))

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderPresent(ren);



		KEY_PRESS_SURFACE_DOWN,

	}

		SDL_Delay(1000);

#include "DirectXManager.h"

		&level,



		m_pImmediateContext->ClearState();

		}

			}



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	auto& attrib = reader.GetAttrib();

{



	m_pInputLayout = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			}

void CD3DTest::Release()

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	XMStoreFloat4(&clb.eyePos, eye);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_DOWN,

	txDesc.SampleDesc.Quality = 0;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pDepthStencilView);





	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext = NULL;

	//Create Index

};

	D3D11_BUFFER_DESC cbDesc;

}



	std::vector<tinyobj::material_t> materials;

				indexlist.push_back(index);





	SDL_Quit();

{

	m_VertexCount = vcount;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		cout << "SDL_INIT_ERROR" << endl;

	SDL_DestroyTexture(tex);

	m_pTexture = NULL;

		else if (e.type == SDL_KEYDOWN)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	{

			{

				vertex.push_back(vertex_tmp);



	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		//User presses a key

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

struct ConstantMaterial {

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//インデックスバッファ作成

	m_pRenderTargetView = NULL;

	{

};

		SDL_RenderCopy(ren, tex, NULL, NULL);

{

			//Select surfaces based on key press

	for (int j = 0; j < icount; j++)

};

 * Lesson 1: Hello World!

				break;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pTexture);

		}

	vector<Vertex> vertexlist;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{

};



	SDL_FreeSurface(suf);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vbDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;

	float    nearZ = 0.1f;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_Delay(1000);

	SAFE_RELEASE(m_pSwapChain);

}

int main(int, char**)

	cbDesc.CPUAccessFlags = 0;

	std::string error;

CD3DTest::CD3DTest()

		return hr;

	txDesc.ArraySize = 1;

				// access to vertex

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			}

	m_pInputLayout = NULL;

	}

	CRect                rect;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.StructureByteStride = 0;

				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	return 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.MiscFlags = 0;

	}

		}

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

/*

	m_VertexCount = vcount;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.Height = (FLOAT)rect.Height();



			case SDLK_UP:



		&m_pDevice,

			for (size_t v = 0; v < fv; v++)

	return;



	XMFLOAT4X4 view;

	D3D11_SUBRESOURCE_DATA vrData;

	for (int i = 0; i < vcount; i++)

	Vertex* pVList = new Vertex[vcount];



 * Lesson 1: Hello World!

	//vector<WORD> index_t;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <iostream>





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);







	std::string inputfile = "test.obj";

				break;

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

	for (int j = 0; j < icount; j++)



	m_Viewport.Height = (FLOAT)rect.Height();

	int     vcount = vertexlist.size();

		size_t index_offset = 0;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		}

};

	XMFLOAT4 pos;               //座標(x,y,z)

	m_Viewport.TopLeftY = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{

	m_pDevice = NULL;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//Key press surfaces constants

	SDL_DestroyTexture(tex);

	//Clean up our objects and quit

	D3D11_SUBRESOURCE_DATA vrData;

	//First we need to start up SDL, and make sure it went ok

	ConstantLight    pntLight; //点光源

				break;

	//頂点レイアウト作成

	txDesc.SampleDesc.Count = 1;

				// access to vertex

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

CD3DTest::CD3DTest()

		return hr;

{

	SAFE_RELEASE(m_pImmediateContext);

		return hr;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			// Loop over vertices in the face.

		if (!reader.Error().empty())

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pVertexBuffer = NULL;

struct ConstantMaterial {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			case SDLK_UP:

	m_pVertexShader = NULL;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				break;



		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

};

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	// Loop over shapes

{

	return 0;

	m_pDevice = NULL;





	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pTextureView);

}

				tinyobj::real_t ty =

}

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				break;

				vertex.push_back(vertex_tmp);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pSampler = NULL;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



using std::cout; using std::endl;

	SDL_Event e;

	SAFE_RELEASE(m_pTexture);

using std::cout; using std::endl;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		SDL_RenderClear(ren);

	if (FAILED(hr))

{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	for (size_t s = 0; s < shapes.size(); s++)

#include <iostream>

	Release();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		D3D11_SDK_VERSION,

		size_t index_offset = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

{

{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				// access to vertex

	if (!reader.ParseFromFile(inputfile, reader_config))

	//Vertex* pVList = new Vertex[vcount];

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderPresent(ren);

	Release();

#include "DirectXManager.h"

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//頂点レイアウト作成

	}

	for (int i = 0; i < 3; i++)

	ID3D11Texture2D* pBackBuffer;

		KEY_PRESS_SURFACE_DEFAULT,

	std::vector<tinyobj::shape_t> shapes;



			switch (e.key.keysym.sym)

		size_t index_offset = 0;  // インデントのオフセット

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	irData.SysMemPitch = 0;



				break;



	std::string error;

			default:

	SAFE_RELEASE(m_pVertexShader);

	vbDesc.MiscFlags = 0;

	m_pSwapChain = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pPixelShader);



	enum KeyPressSurfaces

	SDL_FreeSurface(bmp);

		&m_pDevice,





{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

{

	scDesc.BufferCount = 1;

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;

		}

		return hr;

	enum KeyPressSurfaces

	dsDesc.Format = txDesc.Format;

	//頂点レイアウト作成

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pImmediateContext);



		R"(cube.obj)");

		{

struct ConstantLightBuffer {







	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	ibDesc.CPUAccessFlags = 0;



};

	m_pSwapChain = NULL;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemSlicePitch = 0;

		return 1;

	SDL_Quit();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		{

		return hr;

	auto& attrib = reader.GetAttrib();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

 * Lesson 1: Hello World!

		&m_pDevice,

#include <SDL.h>

	m_Viewport.MinDepth = 0.0f;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	delete[] pVList;

	m_pImmediateContext = NULL;

	m_pVertexShader = NULL;

	XMFLOAT4X4 projection;

		D3D11_SDK_VERSION,

	//インデックスバッファ作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

			switch (e.key.keysym.sym)

	ID3D11Texture2D* pBackBuffer;

		SDL_RenderPresent(ren);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

CD3DTest::~CD3DTest()

	//Key press surfaces constants

	delete[] pVList;

	int     vcount = vertexlist.size();

	auto& materials = reader.GetMaterials();

	cbDesc.CPUAccessFlags = 0;

	std::string imagePath = "hello.bmp";

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	WORD* pIList = new WORD[icount];

	irData.pSysMem = &pIList[0];



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	UINT offsets = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pDevice);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	delete[] pIList;

}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	CRect                rect;

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferCount = 1;



HRESULT CD3DTest::Create(HWND hwnd)

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	bool ret = tinyobj::LoadObj(

	//Key press surfaces constants

	}

	CRect                rect;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				break;



		//User requests quit

	for (size_t s = 0; s < shapes.size(); s++)

void CD3DTest::Render()





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SAFE_RELEASE(m_pDepthStencilView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	tinyobj::ObjReader reader;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D_FEATURE_LEVEL level;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pDepthStencilView = NULL;





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ID3D11Texture2D* pBackBuffer;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	if (!error.empty())

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ibDesc.MiscFlags = 0;

{

	std::vector<tinyobj::material_t> materials;



	vbDesc.StructureByteStride = 0;

	{

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4         eyePos;   //視点座標

		else if (e.type == SDL_KEYDOWN)

	m_Viewport.TopLeftX = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 specular;          //反射(r,g,b)

			default:

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	return 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	return 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_RenderPresent(ren);



	SDL_DestroyTexture(tex);

	irData.SysMemSlicePitch = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				vertex.push_back(vertex_tmp);



};

	}



#endif

	{

		KEY_PRESS_SURFACE_DOWN,

}
	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.MiscFlags = 0;

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	float    fov = XMConvertToRadians(20.0f);



	delete[] pIList;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	tinyobj::attrib_t attrib;

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				WORD index = idx.vertex_index;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				indexlist.push_back(idx.vertex_index);

	m_Viewport.TopLeftX = 0;

			{

	SAFE_RELEASE(m_pSwapChain);

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pVertexShader);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderPresent(ren);

}

		}

	m_pImmediateContext = NULL;



		&m_pImmediateContext);



	txDesc.MipLevels = 1;

};

			{

		&m_pDevice,

				break;

struct ConstantMaterial {



	scDesc.BufferDesc.Width = rect.Width();

	SDL_Event e;

		delete[] pVList;

	if (FAILED(hr))

		size_t index_offset = 0;

	XMFLOAT4X4 view;

	scDesc.Windowed = TRUE;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			case SDLK_RIGHT:

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	D3D11_TEXTURE2D_DESC txDesc;

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

}
		pVList[i] = vertexlist[i];

	SDL_FreeSurface(bmp);




