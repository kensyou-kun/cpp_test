	Release();

		flags,

	tinyobj::ObjReaderConfig reader_config;



			{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



using std::cout; using std::endl;

	ibDesc.CPUAccessFlags = 0;





	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pTextureView);

{

		delete[] pIList;

void CD3DTest::Release()

				WORD index = idx.vertex_index;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;







CD3DTest::~CD3DTest()



	SDL_DestroyWindow(win);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pLightBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	WORD* pIList = new WORD[icount];

	SDL_DestroyWindow(win);

	txDesc.Height = rect.Height();

		&shapes,

{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		pIList[j] = indexList[j];

int SEGMENT = 36;

	m_Viewport.TopLeftX = 0;

	SDL_Quit();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4 ambient;           //環境(r,g,b)

#include "DirectXManager.h"

		&scDesc,

	//テクスチャ読み込み

	m_Viewport.TopLeftY = 0;

	m_pTextureView = NULL;

		if (!ret)

	scDesc.BufferDesc.Width = rect.Width();

		SDL_RenderClear(ren);



	float    fov = XMConvertToRadians(20.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		{

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_DestroyRenderer(ren);

	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

struct ConstantMaterial {

{

int main(int, char**)

	//First we need to start up SDL, and make sure it went ok



	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{

	float    fov = XMConvertToRadians(20.0f);

	}*/

	vbDesc.StructureByteStride = 0;

	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vector<Vertex> vertexlist;

	SDL_DestroyRenderer(ren);

	txDesc.MipLevels = 1;



		return hr;

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		KEY_PRESS_SURFACE_TOTAL

	//テクスチャ読み込み

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	CRect                rect;





	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SAFE_RELEASE(m_pTexture);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

}





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		R"(cube.obj)");

		&materials,

	SAFE_RELEASE(m_pMatrixBuffer);



	txDesc.SampleDesc.Quality = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pIndexBuffer);

}

	vrData.SysMemSlicePitch = 0;



	scDesc.SampleDesc.Quality = 0;



	auto& attrib = reader.GetAttrib();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





		size_t index_offset = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	txDesc.ArraySize = 1;

		}

};

		return hr;

		delete[] pIList;

		D3D_DRIVER_TYPE_HARDWARE,



	if (FAILED(hr))

			case SDLK_UP:

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		D3D11_SDK_VERSION,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		D3D_DRIVER_TYPE_HARDWARE,



			// Loop over vertices in the face.



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_Viewport.Height = (FLOAT)rect.Height();

	//テクスチャ読み込み

	};

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	if (!reader.ParseFromFile(inputfile, reader_config))



struct ConstantLight {

		}

	m_IndexCount = 0;

	SDL_Event e;

	if (FAILED(hr))

			//Select surfaces based on key press

	txDesc.MipLevels = 1;

	return 0;

			}

	//Create Index

	{

		if (e.type == SDL_QUIT)

		if (e.type == SDL_QUIT)

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

	//定数バッファ作成

	if (m_pImmediateContext)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D11_BUFFER_DESC cbDesc;



	dsDesc.Texture2D.MipSlice = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

	D3D11_SAMPLER_DESC smpDesc;



		return hr;

int main(int, char**)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

			exit(1);

			index_offset += num_vertices;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



				break;

	//ピクセルシェーダー生成

	m_pImmediateContext = NULL;

	txDesc.MipLevels = 1;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	for (int j = 0; j < icount; j++)



	vrData.SysMemPitch = 0;

	SDL_FreeSurface(bmp);

	SDL_Event e;

	txDesc.ArraySize = 1;

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		size_t index_offset = 0;





	{

	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SDL_Event e;



			case SDLK_DOWN:

	if (FAILED(hr))



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pSampler = NULL;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				break;

#include "DirectXManager.h"

			//Select surfaces based on key press

	return;

	return hr;





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		return hr;

	D3D_FEATURE_LEVEL level;

	SDL_FreeSurface(bmp);



	SAFE_RELEASE(m_pInputLayout);



	}

}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

int main(int, char**)



{

	/*

	tinyobj::ObjReaderConfig reader_config;

};

struct ConstantLight {

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

/*

				// access to vertex

	XMFLOAT4X4 view;

	if (FAILED(hr))

}

	scDesc.OutputWindow = hwnd;

	scDesc.BufferCount = 1;







	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vector<WORD> indexList;

void CD3DTest::Render()

	if (FAILED(hr))

}



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//頂点シェーダー生成



}

	m_pLightBuffer = NULL;

{

		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.MiscFlags = 0;

	m_VertexCount = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	Release();

	cbDesc.StructureByteStride = 0;

		1,



			}

	UINT strides = sizeof(Vertex);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{

	m_pSampler = NULL;

			case SDLK_LEFT:

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		delete[] pIList;



	CRect                rect;

	{

			int num_vertices = shape.mesh.num_face_vertices[f];



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pIndexBuffer = NULL;



		KEY_PRESS_SURFACE_TOTAL



	if (FAILED(hr))



		{

};



		&scDesc,



	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	HRESULT              hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t tx =

	//インデックスバッファ作成

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_Delay(1000);

	//Key press surfaces constants

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

		}

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	auto& attrib = reader.GetAttrib();

	scDesc.BufferDesc.Width = rect.Width();

	auto& shapes = reader.GetShapes();

	{

	if (FAILED(hr))

	std::vector<tinyobj::shape_t> shapes;





	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	if (FAILED(hr))

			{



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				break;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ibDesc.CPUAccessFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;







	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pSwapChain = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				// access to vertex



				indexlist.push_back(idx.vertex_index);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	scDesc.BufferDesc.Width = rect.Width();

		// Loop over faces(polygon)

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		{

			index_offset += fv;

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.MiscFlags = 0;

}
	SAFE_RELEASE(m_pTexture);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//First we need to start up SDL, and make sure it went ok

		}



	if (FAILED(hr))

}

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	XMStoreFloat4(&clb.eyePos, eye);

		SDL_RenderPresent(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	UINT offsets = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (!error.empty())

CD3DTest::CD3DTest()

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	std::string error;

	D3D11_BUFFER_DESC vbDesc;

	txDesc.ArraySize = 1;

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pInputLayout);



	reader_config.mtl_search_path = "./"; // Path to material files

	{







	HRESULT              hr;

	SDL_FreeSurface(suf);

	scDesc.BufferCount = 1;

				indexlist.push_back(index);

#ifdef _DEBUG

		&materials,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





	XMFLOAT4X4 view;

	//テクスチャ読み込み

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		SDL_RenderClear(ren);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ConstantLight    pntLight; //点光源

	SDL_DestroyWindow(win);

	{

CD3DTest::CD3DTest()

	if (FAILED(hr))

	SDL_DestroyWindow(win);

				tinyobj::real_t tx =

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pSwapChain = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

 * Lesson 1: Hello World!

		&materials,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	pBackBuffer->Release();

	m_Viewport.MinDepth = 0.0f;

				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;

	m_pSwapChain->Present(0, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	scDesc.SampleDesc.Quality = 0;

	m_IndexCount = icount;

		}

		KEY_PRESS_SURFACE_UP,

			}

	if (FAILED(hr))



	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

struct ConstantMaterial {

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ibDesc.StructureByteStride = 0;



	XMFLOAT4 specular;          //反射(r,g,b)

	m_pIndexBuffer = NULL;

	float    farZ = 100.0f;

		}

		&m_pDevice,

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

	}*/



		if (!ret)

		return 1;





	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.StructureByteStride = 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	SDL_DestroyTexture(tex);

	std::vector<tinyobj::material_t> materials;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ibDesc.MiscFlags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	//テクスチャ読み込み

		//User presses a key

	{



	scDesc.Windowed = TRUE;

	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			switch (e.key.keysym.sym)

		}

	vrData.pSysMem = &pVList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}



		return hr;

int SEGMENT = 36;

		pLevels,

	D3D11_SUBRESOURCE_DATA irData;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



				break;

		SDL_RenderClear(ren);

		size_t index_offset = 0;  // インデントのオフセット



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				vertex.push_back(vertex_tmp);





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SAFE_RELEASE(m_pPixelShader);

				// access to vertex

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};

	irData.pSysMem = &pIList[0];



	vector<WORD> indexList;





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.OutputWindow = hwnd;

#ifdef _DEBUG

		pIList[j] = indexList[j];

	//ピクセルシェーダー生成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::string error;

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

void CD3DTest::Release()



};

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4X4 world;

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				// access to vertex

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pSampler);

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t tx =



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

	auto& shapes = reader.GetShapes();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string error;

	std::string inputfile = "test.obj";

				break;

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	{

			//Select surfaces based on key press

	scDesc.SampleDesc.Count = 1;

	{

				indexlist.push_back(idx.vertex_index);



	m_pRenderTargetView = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

 */

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				break;

};

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	Vertex* pVList = new Vertex[vcount];

	{

	Release();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	{

	//Create Index

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pLightBuffer = NULL;

	irData.SysMemPitch = 0;

	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vrData.SysMemSlicePitch = 0;

		exit(1);

	SAFE_RELEASE(m_pVertexShader);

};



	SAFE_RELEASE(m_pTexture);

		if (e.type == SDL_QUIT)



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

	{

	SDL_FreeSurface(bmp);

	SDL_DestroyWindow(win);

			break;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pIndexBuffer);

	D3D_FEATURE_LEVEL level;



struct ConstantMatrixBuffer {





			{

		if (!reader.Error().empty())

	ibDesc.CPUAccessFlags = 0;

void CD3DTest::Render()

		return hr;



		return hr;

			for (size_t v = 0; v < num_vertices; v++)

}





	vrData.SysMemSlicePitch = 0;

struct ConstantLightBuffer {

	tinyobj::ObjReaderConfig reader_config;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	return 0;

	{

}

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyWindow(win);

	if (!error.empty())

		&m_pDevice,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string error;

	SDL_DestroyTexture(tex);

		&level,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





{

#include "DirectXManager.h"

		return hr;

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D_FEATURE_LEVEL level;

	SDL_Event e;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pInputLayout);



		SDL_RenderPresent(ren);



#include <iostream>

void CD3DTest::Release()

	SDL_DestroyWindow(win);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)



	if (FAILED(hr))





	//Clean up our objects and quit

}

	scDesc.OutputWindow = hwnd;

}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		// Loop over faces(polygon)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

		&m_pSwapChain,

	D3D11_TEXTURE2D_DESC txDesc;

	m_Viewport.Height = (FLOAT)rect.Height();

	delete[] pVList;

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



			case SDLK_UP:



	std::vector<tinyobj::material_t> materials;

		&scDesc,

	SDL_FreeSurface(bmp);



	tinyobj::ObjReader reader;

			{

#endif



	SAFE_RELEASE(m_pRenderTargetView);

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4 pos;               //座標(x,y,z)

		size_t index_offset = 0;

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pPixelShader);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ConstantLight    pntLight; //点光源

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		return 1;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

	Release();



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	::ZeroMemory(&scDesc, sizeof(scDesc));

{



	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

			//Select surfaces based on key press



	ConstantLightBuffer clb;

		NULL,

		D3D11_SDK_VERSION,

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

	ConstantLight    pntLight; //点光源

	txDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

	//Vertex* pVList = new Vertex[vcount];

	for (int i = 0; i < vcount; i++)

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





	vbDesc.MiscFlags = 0;



	XMFLOAT4 ambient;           //環境(r,g,b)

	txDesc.MiscFlags = 0;

	}

			case SDLK_DOWN:

		delete[] pVList;



	//First we need to start up SDL, and make sure it went ok

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_Delay(1000);

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyTexture(tex);





	std::string error;

	for (int i = 0; i < 3; i++)

			{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	vbDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

		&scDesc,



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	SAFE_RELEASE(m_pVertexShader);



	//vector<WORD> index_t;

	txDesc.SampleDesc.Count = 1;



			case SDLK_UP:



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

void CD3DTest::Release()



	XMFLOAT4X4 projection;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;



	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				indexlist.push_back(idx.vertex_index);

	{

#include <SDL.h>

		&m_pSwapChain,

	ID3D11Texture2D* pBackBuffer;





				break;

	cbDesc.StructureByteStride = 0;

		size_t index_offset = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

	XMFLOAT4 specular;          //反射(r,g,b)



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	tinyobj::attrib_t attrib;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		SDL_RenderPresent(ren);

	m_VertexCount = vcount;

		return hr;

	m_pSampler = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		flags,

	txDesc.Width = rect.Width();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

};

	SAFE_RELEASE(m_pSampler);

struct ConstantLightBuffer {

		{

	m_pDevice = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		KEY_PRESS_SURFACE_RIGHT,

	//vector<Vertex> vertex_t;

			case SDLK_UP:

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





		&m_pImmediateContext);

struct ConstantMatrixBuffer {

		&shapes,

	vbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

#include "DirectXManager.h"

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_DOWN:

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				WORD index = idx.vertex_index;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ibDesc.MiscFlags = 0;

			index_offset += num_vertices;

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

 * Lesson 1: Hello World!

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& attrib = reader.GetAttrib();

		&error,

	//vector<Vertex> vertex_t;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		//User requests quit



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	scDesc.SampleDesc.Quality = 0;

	m_pInputLayout = NULL;



				indexlist.push_back(idx.vertex_index);

		//User requests quit

	m_VertexCount = vcount;

			index_offset += num_vertices;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	if (FAILED(hr))





		if (!ret)



	//Create Index

			case SDLK_LEFT:

	txDesc.ArraySize = 1;

	//Key press surfaces constants

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		{

		&error,



	return 0;

	dsDesc.Texture2D.MipSlice = 0;

	{

	dsDesc.Format = txDesc.Format;

	//First we need to start up SDL, and make sure it went ok

	{

	// Loop over shapes

			index_offset += fv;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		SDL_RenderClear(ren);

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pSampler);

		SDL_RenderPresent(ren);

			case SDLK_RIGHT:



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

{



	return 0;

		{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ID3D11Texture2D* pBackBuffer;



	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		{

	SAFE_RELEASE(m_pVertexShader);



		{





		SDL_RenderClear(ren);

				break;

		KEY_PRESS_SURFACE_TOTAL

};

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

int main(int, char**)

	scDesc.Windowed = TRUE;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.MiscFlags = 0;

{

	if (!error.empty())

	pBackBuffer->Release();

		flags,

		size_t index_offset = 0;

	m_pInputLayout = NULL;

	m_pImmediateContext = NULL;

	return 0;

		exit(1);

	for (const auto& shape : shapes)

}



	m_pImmediateContext = NULL;

	for (const auto& shape : shapes)

	tinyobj::ObjReaderConfig reader_config;



	//Clean up our objects and quit

	m_pRenderTargetView = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			}



	cbDesc.MiscFlags = 0;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	delete[] pIList;

			exit(1);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	int     vcount = vertexlist.size();

	if (FAILED(hr))

	m_VertexCount = vcount;

	{

	std::vector<tinyobj::material_t> materials;

	}

		D3D_DRIVER_TYPE_HARDWARE,

	//インデックスバッファ作成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

{

	scDesc.SampleDesc.Quality = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	SAFE_RELEASE(m_pMatrixBuffer);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	{

};

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	delete[] pIList;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	float    nearZ = 0.1f;

	{

{

	cbDesc.MiscFlags = 0;

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.SampleDesc.Count = 1;

}

	m_pDevice = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	tinyobj::ObjReaderConfig reader_config;

}

		{

	CRect                rect;



	SDL_Quit();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

		}

		return hr;

	return 0;





		&shapes,

		return hr;

int SEGMENT = 36;



	vector<Vertex> vertexlist;

		pVList[i] = vertexlist[i];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::attrib_t attrib;

	m_Viewport.TopLeftX = 0;

	}

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	tinyobj::attrib_t attrib;

			}

	SDL_DestroyTexture(tex);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	scDesc.Windowed = TRUE;

				break;

	scDesc.BufferCount = 1;

		{

		pLevels,

	vbDesc.StructureByteStride = 0;

}

	m_pRenderTargetView = NULL;

		else if (e.type == SDL_KEYDOWN)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#include "DirectXManager.h"

		SDL_Delay(1000);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	{

	m_Viewport.Width = (FLOAT)rect.Width();



	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			switch (e.key.keysym.sym)

			}

	hr = D3D11CreateDeviceAndSwapChain(NULL,





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	scDesc.BufferCount = 1;

		size_t index_offset = 0;

	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_IndexCount = icount;

			{

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_DEFAULT,

		}

	::GetClientRect(hwnd, &rect);

	}

	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

}

		SDL_Delay(1000);

	{

{

	SAFE_RELEASE(m_pVertexBuffer);



}



	UINT strides = sizeof(Vertex);

	//頂点レイアウト作成

		&shapes,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL level;



	m_pImmediateContext = NULL;

		return hr;

	cbDesc.StructureByteStride = 0;



	vrData.pSysMem = &pVList[0];

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}



	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	{

	ibDesc.MiscFlags = 0;

	m_pDevice = NULL;



	SDL_DestroyWindow(win);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	int     vcount = vertexlist.size();

		SDL_RenderPresent(ren);



	txDesc.MipLevels = 1;

#include "DirectXManager.h"

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		delete[] pIList;

			index_offset += num_vertices;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pVertexBuffer);

				break;

	pBackBuffer->Release();

	ibDesc.ByteWidth = sizeof(WORD) * icount;



CD3DTest::CD3DTest()





	XMFLOAT4 pos;               //座標(x,y,z)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		size_t index_offset = 0;  // インデントのオフセット

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

struct ConstantMaterial {

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			index_offset += fv;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))





		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D_FEATURE_LEVEL level;

{

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		else if (e.type == SDL_KEYDOWN)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pSampler);

	if (!reader.ParseFromFile(inputfile, reader_config))

	vrData.SysMemSlicePitch = 0;

CD3DTest::CD3DTest()

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		else if (e.type == SDL_KEYDOWN)

	m_pRenderTargetView = NULL;

	XMFLOAT4 pos;               //座標(x,y,z)



	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

		return hr;

		pLevels,

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;



	m_pSwapChain = NULL;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	SDL_DestroyTexture(tex);



	D3D_FEATURE_LEVEL level;

			}



	{



			index_offset += num_vertices;

	m_pVertexBuffer = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		return hr;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pDevice,

	m_pTextureView = NULL;

#include "DirectXManager.h"

		{

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

		NULL,





	m_pTexture = NULL;

		NULL,

	//Create Index

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//Clean up our objects and quit

	scDesc.Windowed = TRUE;

		//User requests quit

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.SampleDesc.Quality = 0;

		if (!reader.Error().empty())

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{



struct ConstantMatrixBuffer {

	float    fov = XMConvertToRadians(20.0f);



	D3D11_BUFFER_DESC ibDesc;

	{

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	delete[] pVList;

	SDL_DestroyTexture(tex);







		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	auto& shapes = reader.GetShapes();

#include <iostream>

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ConstantMaterial material; //物体の質感

	m_Viewport.TopLeftY = 0;

	m_pIndexBuffer = NULL;



	std::vector<tinyobj::shape_t> shapes;

	m_VertexCount = 0;

struct ConstantLightBuffer {

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	txDesc.Width = rect.Width();

	vbDesc.MiscFlags = 0;

		}

		//User requests quit

	//First we need to start up SDL, and make sure it went ok

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pIndexBuffer);

		&materials,

using std::cout; using std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pSampler);

};

	if (FAILED(hr))



	{

	delete[] pIList;

struct ConstantLight {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))



	std::string error;

};

	}

	{





	//深度ステンシルバッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	std::vector<tinyobj::material_t> materials;

	//頂点レイアウト作成

	m_Viewport.MinDepth = 0.0f;

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pDevice);



	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	irData.SysMemSlicePitch = 0;

	m_IndexCount = 0;

	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

	m_pLightBuffer = NULL;

	//頂点シェーダー生成





	}

{

		return hr;



	if (FAILED(hr))

				WORD index = idx.vertex_index;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		delete[] pVList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//Vertex* pVList = new Vertex[vcount];

	ID3D11Texture2D* pBackBuffer;

	DXGI_SWAP_CHAIN_DESC scDesc;



	{

int main(int, char**)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4X4 world;

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);



	ibDesc.MiscFlags = 0;

		return hr;

	float    fov = XMConvertToRadians(20.0f);

		pVList[i] = vertexlist[i];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



#include "DirectXManager.h"



		m_pImmediateContext->ClearState();

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	pBackBuffer->Release();

	XMFLOAT4 specular;          //反射(r,g,b)



	m_pSampler = NULL;

			case SDLK_DOWN:



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

CD3DTest::CD3DTest()

}

	::GetClientRect(hwnd, &rect);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vbDesc.StructureByteStride = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	return 0;

	std::string imagePath = "hello.bmp";

	// Loop over shapes

		return 1;

	txDesc.MiscFlags = 0;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

}


	{

	//vector<Vertex> vertex_t;

		SDL_Delay(1000);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	cbDesc.MiscFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

};



}

	m_pRenderTargetView = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pTexture);



			//Select surfaces based on key press

 */

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		else if (e.type == SDL_KEYDOWN)



	m_pMatrixBuffer = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		delete[] pIList;

#endif



	}

	}

	vrData.SysMemSlicePitch = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vrData.SysMemSlicePitch = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	return;

	}





				tinyobj::real_t tx =

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}*/

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		R"(cube.obj)");

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pInputLayout = NULL;

	txDesc.MipLevels = 1;

		&shapes,

	float    farZ = 100.0f;

		&attrib,

{

	return 0;

	SAFE_RELEASE(m_pTexture);

		pIList[j] = indexList[j];

}

		KEY_PRESS_SURFACE_TOTAL

	m_pPixelShader = NULL;



	scDesc.Windowed = TRUE;

	HRESULT              hr;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&m_pImmediateContext);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pIndexBuffer);

struct ConstantLight {





		cout << "SDL_INIT_ERROR" << endl;

		return hr;

}

				WORD index = idx.vertex_index;

		D3D_DRIVER_TYPE_HARDWARE,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.MiscFlags = 0;

};

	D3D11_SAMPLER_DESC smpDesc;

	SDL_DestroyRenderer(ren);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	}

	m_pSampler = NULL;

	D3D11_TEXTURE2D_DESC txDesc;



}

	delete[] pVList;







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pTextureView);

		KEY_PRESS_SURFACE_LEFT,

	m_pSwapChain = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pTextureView);

	//Create Index

#ifdef _DEBUG

	ZeroMemory(&dsDesc, sizeof(dsDesc));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

/*

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	cbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_IndexCount = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_Angle += XMConvertToRadians(1.0f);

	//ピクセルシェーダー生成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4X4 view;



	ZeroMemory(&txDesc, sizeof(txDesc));

	pBackBuffer->Release();



	SAFE_RELEASE(m_pTexture);

		}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.BufferDesc.Height = rect.Height();

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	txDesc.CPUAccessFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain = NULL;

				break;

	txDesc.CPUAccessFlags = 0;

				// access to vertex

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			case SDLK_LEFT:



	m_pMatrixBuffer = NULL;

		SDL_RenderPresent(ren);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		&m_pSwapChain,

	if (FAILED(hr))

		exit(1);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!ret)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	float    farZ = 100.0f;

		return hr;

		R"(cube.obj)");

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_Event e;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

		return hr;

	{

	m_pSampler = NULL;





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	Vertex* pVList = new Vertex[vcount];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pVertexShader = NULL;

	std::string error;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.CPUAccessFlags = 0;

};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



			case SDLK_LEFT:

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

	D3D11_BUFFER_DESC vbDesc;

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	float    farZ = 100.0f;



		exit(1);

	SAFE_RELEASE(m_pVertexShader);

	//インデックスバッファ作成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4(&clb.eyePos, eye);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_UP,

	m_pDevice = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	D3D11_BUFFER_DESC cbDesc;

	vector<WORD> indexList;

	for (const auto& shape : shapes)

	{

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			for (size_t v = 0; v < num_vertices; v++)

	{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vrData.SysMemSlicePitch = 0;

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Quit();

	{

	pBackBuffer->Release();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	}

{





	if (!reader.Warning().empty())

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	reader_config.mtl_search_path = "./"; // Path to material files

			switch (e.key.keysym.sym)

	m_pMatrixBuffer = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pVertexBuffer);

	//深度ステンシルバッファ作成

	cbDesc.MiscFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

HRESULT CD3DTest::Create(HWND hwnd)

		pVList[i] = vertexlist[i];

	txDesc.MipLevels = 1;



}

};

		&scDesc,





	XMFLOAT4 specular;          //反射(r,g,b)

{

		&scDesc,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	//頂点レイアウト作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (int j = 0; j < icount; j++)

	ibDesc.CPUAccessFlags = 0;

			{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	/*

	if (FAILED(hr))

	//ピクセルシェーダー生成



		cout << "SDL_INIT_ERROR" << endl;

		{

		&materials,



	if (FAILED(hr))



			{

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	HRESULT              hr;

				break;



	{

	for (int i = 0; i < 3; i++)

	//インデックスバッファ作成

	vbDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//テクスチャ読み込み

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				break;

		exit(1);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

struct ConstantMatrixBuffer {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				indexlist.push_back(idx.vertex_index);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

				tinyobj::real_t tx =

		exit(1);

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t tx =

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			case SDLK_LEFT:



	UINT strides = sizeof(Vertex);

	ibDesc.CPUAccessFlags = 0;

struct ConstantLight {

	m_pDepthStencilTexture = NULL;

	{



	SDL_Event e;

};

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

{

	std::string inputfile = "test.obj";

		&scDesc,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	if (!reader.Warning().empty())

		{

	SDL_DestroyRenderer(ren);

	vector<Vertex> vertexlist;

	WORD* pIList = new WORD[icount];

#include <iostream>

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

	tinyobj::attrib_t attrib;

	}

				break;

		return hr;

				WORD index = idx.vertex_index;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vrData.SysMemPitch = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_Viewport.TopLeftX = 0;

void CD3DTest::Render()

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			default:

	//Key press surfaces constants

		else if (e.type == SDL_KEYDOWN)



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	::ZeroMemory(&scDesc, sizeof(scDesc));





	tinyobj::ObjReader reader;

	vbDesc.MiscFlags = 0;



	if (m_pImmediateContext)

	if (FAILED(hr))



	SDL_FreeSurface(bmp);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

};

	m_Viewport.Height = (FLOAT)rect.Height();

	txDesc.Usage = D3D11_USAGE_DEFAULT;







	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	//頂点シェーダー生成

	}

	{

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	if (!reader.Warning().empty())

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

{





	m_Viewport.Height = (FLOAT)rect.Height();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	float    farZ = 100.0f;

		size_t index_offset = 0;

	return 0;



}

	std::string imagePath = "hello.bmp";

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&m_pImmediateContext);



	m_IndexCount = 0;

	txDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_TOTAL



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	delete[] pVList;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	D3D11_SUBRESOURCE_DATA vrData;

}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{



	return 0;

	//vector<Vertex> vertex_t;

		&m_pSwapChain,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_pLightBuffer = NULL;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				tinyobj::real_t tx =

	m_pSampler = NULL;



	ConstantMaterial material; //物体の質感



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

}

		cout << "SDL_INIT_ERROR" << endl;

	m_pTextureView = NULL;

#include <SDL.h>



	CRect                rect;

	UINT offsets = 0;

	{



}

	auto& shapes = reader.GetShapes();



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#endif

	{

	tinyobj::attrib_t attrib;



	Release();

				indexlist.push_back(idx.vertex_index);

	scDesc.SampleDesc.Count = 1;

	{





				indexlist.push_back(idx.vertex_index);

			exit(1);

	tinyobj::attrib_t attrib;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}
	m_VertexCount = vcount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pLightBuffer);

	if (FAILED(hr))

			case SDLK_RIGHT:

	if (!reader.ParseFromFile(inputfile, reader_config))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))



	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			//Select surfaces based on key press

	D3D11_BUFFER_DESC ibDesc;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			for (size_t v = 0; v < fv; v++)

	pBackBuffer->Release();



	//テクスチャ読み込み

		}

};



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		&level,

	ID3D11Texture2D* pBackBuffer;



		&scDesc,

	SDL_DestroyTexture(tex);

	m_pSwapChain = NULL;

		&m_pImmediateContext);

};

	if (FAILED(hr))

	m_pLightBuffer = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	float    farZ = 100.0f;

#include <SDL.h>



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	irData.SysMemSlicePitch = 0;

	vbDesc.MiscFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.Height = rect.Height();



				break;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pSwapChain,

	m_pVertexBuffer = NULL;



	SAFE_RELEASE(m_pPixelShader);

				WORD index = idx.vertex_index;

	HRESULT              hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			case SDLK_DOWN:





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.MiscFlags = 0;

	{

				WORD index = idx.vertex_index;

			}

	}*/

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (!reader.ParseFromFile(inputfile, reader_config))



		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

};

		m_pImmediateContext->ClearState();

		SDL_RenderPresent(ren);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vbDesc.StructureByteStride = 0;

{

			//Select surfaces based on key press

 * Lesson 1: Hello World!

	{

	{



	SAFE_RELEASE(m_pTextureView);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

};

}

	irData.pSysMem = &pIList[0];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

				// access to vertex

#endif

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Viewport.MaxDepth = 1.0f;

		}

		cout << "SDL_INIT_ERROR" << endl;

{

	cbDesc.MiscFlags = 0;



	m_Viewport.MaxDepth = 1.0f;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_IndexCount = 0;





		return hr;

		return 1;

	SDL_FreeSurface(bmp);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//First we need to start up SDL, and make sure it went ok

	ConstantMaterial material; //物体の質感



	{



	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	}



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	};

	m_IndexCount = icount;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_FreeSurface(bmp);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	delete[] pIList;

			case SDLK_RIGHT:

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_Viewport.MaxDepth = 1.0f;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	float    fov = XMConvertToRadians(20.0f);

	auto& materials = reader.GetMaterials();



	if (FAILED(hr))

	//インデックスバッファ作成

	if (!reader.Warning().empty())





	::GetClientRect(hwnd, &rect);

		exit(1);



}

	SDL_Quit();

		&materials,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

struct ConstantLight {

	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pTexture);

				// access to vertex



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{





			case SDLK_LEFT:



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			}

#include "DirectXManager.h"



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_RenderPresent(ren);

	//定数バッファ作成

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	auto& materials = reader.GetMaterials();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	CRect                rect;

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pTextureView);



#include <iostream>

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	float    farZ = 100.0f;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				break;

	{





	if (!error.empty())

#include <iostream>

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		flags,



	//vector<WORD> index_t;

	SAFE_RELEASE(m_pPixelShader);

	//Create Index

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_DOWN,

	};

		}



		SDL_RenderClear(ren);

	//頂点シェーダー生成



	m_pInputLayout = NULL;

	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_LEFT:

}

	delete[] pVList;

		&attrib,

		&error,

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	D3D11_BUFFER_DESC ibDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	vbDesc.CPUAccessFlags = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//Vertex* pVList = new Vertex[vcount];

	SDL_DestroyWindow(win);



			default:

		}

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//vector<Vertex> vertex_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		SDL_RenderCopy(ren, tex, NULL, NULL);



				vertex.push_back(vertex_tmp);



	}

	}

	{

			{

	vbDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Quality = 0;

				indexlist.push_back(index);

	cbDesc.MiscFlags = 0;

		delete[] pVList;

	}

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	if (m_pImmediateContext)



	}

	{

				tinyobj::real_t tx =

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pInputLayout);

	m_pInputLayout = NULL;



			break;

		SDL_RenderClear(ren);

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pTextureView);

};

CD3DTest::~CD3DTest()

			for (size_t v = 0; v < fv; v++)



	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	vbDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);

	HRESULT              hr;

	{



	UINT offsets = 0;

	}

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





			case SDLK_RIGHT:

		return hr;

	scDesc.BufferCount = 1;

	if (FAILED(hr))

	//インデックスバッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

	std::string error;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;







	//頂点レイアウト作成



#include <iostream>

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	auto& attrib = reader.GetAttrib();

	//深度ステンシルバッファ作成

				// access to vertex



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (!reader.ParseFromFile(inputfile, reader_config))



		KEY_PRESS_SURFACE_LEFT,



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t tx =

		delete[] pVList;

	{



		&m_pSwapChain,

	scDesc.Windowed = TRUE;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	ConstantMaterial material; //物体の質感



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	SAFE_RELEASE(m_pMatrixBuffer);



			// Loop over vertices in the face.

};

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pTextureView);



	D3D11_SUBRESOURCE_DATA irData;



	//Create Index

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	{





CD3DTest::~CD3DTest()





	XMFLOAT4X4 projection;

	m_pMatrixBuffer = NULL;

	pBackBuffer->Release();





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pPixelShader = NULL;

	/*

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



#define TINYOBJLOADER_IMPLEMENTATION

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



				tinyobj::real_t ty =

	delete[] pVList;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_pDevice = NULL;

		D3D11_SDK_VERSION,

	vbDesc.MiscFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pSampler);



};

		if (e.type == SDL_QUIT)

	return hr;

	D3D11_SUBRESOURCE_DATA vrData;



		if (!reader.Error().empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	vbDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pIndexBuffer = NULL;



	SAFE_RELEASE(m_pRenderTargetView);

	};





	reader_config.mtl_search_path = "./"; // Path to material files

	Release();



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pPixelShader = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		{

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantMatrixBuffer cmb;

	std::string inputfile = "test.obj";

	return 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//インデックスバッファ作成





		}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pRenderTargetView = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

 */

			}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ConstantLightBuffer clb;



	m_pTexture = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	//Create Index

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pDepthStencilView = NULL;

		}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	return hr;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

int SEGMENT = 36;

		return hr;



	}

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pDevice);

	m_Viewport.MinDepth = 0.0f;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& materials = reader.GetMaterials();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	bool ret = tinyobj::LoadObj(



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

	m_pDevice = NULL;



	m_VertexCount = vcount;

	cbDesc.StructureByteStride = 0;



	if (FAILED(hr))



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pLightBuffer);

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		delete[] pVList;

{

	m_pTextureView = NULL;

		&shapes,

		return 1;



	SAFE_RELEASE(m_pInputLayout);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_Delay(1000);

};

	std::string inputfile = "test.obj";

	//深度ステンシルバッファ作成

	if (FAILED(hr))

	{

			index_offset += fv;



		return hr;

		delete[] pVList;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		D3D_DRIVER_TYPE_HARDWARE,

};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}



		return hr;

	}

	std::vector<tinyobj::material_t> materials;



		{



		//User requests quit

	m_Viewport.MaxDepth = 1.0f;

		if (!reader.Error().empty())

				// access to vertex

		NULL,

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	return hr;

		D3D11_SDK_VERSION,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.Width = (FLOAT)rect.Width();





		KEY_PRESS_SURFACE_UP,

{

	ibDesc.StructureByteStride = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4X4 world;



}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return;

	enum KeyPressSurfaces



	ConstantMaterial material; //物体の質感

				break;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	XMFLOAT4X4 projection;

	XMFLOAT4X4 view;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)

/*



		size_t index_offset = 0;



	SAFE_RELEASE(m_pLightBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		else if (e.type == SDL_KEYDOWN)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ConstantMatrixBuffer cmb;





	delete[] pIList;

	float    nearZ = 0.1f;

	SDL_FreeSurface(suf);

	m_VertexCount = vcount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.MinDepth = 0.0f;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	delete[] pIList;

	scDesc.OutputWindow = hwnd;

	irData.SysMemPitch = 0;

		return hr;

	std::string error;







				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_FreeSurface(suf);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		{



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(suf);







			}

#include "DirectXManager.h"

	SDL_DestroyTexture(tex);



	ZeroMemory(&txDesc, sizeof(txDesc));

	if (!error.empty())

	m_IndexCount = icount;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				WORD index = idx.vertex_index;



	UINT flags = 0;

	SAFE_RELEASE(m_pTextureView);

	return hr;

			case SDLK_UP:

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	//インデックスバッファ作成

	};

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	SAFE_RELEASE(m_pTexture);

		SDL_RenderPresent(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pMatrixBuffer = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];





		SDL_RenderClear(ren);

	{

		//User presses a key

	{

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



			case SDLK_DOWN:



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	UINT strides = sizeof(Vertex);

{

		delete[] pVList;

	DXGI_SWAP_CHAIN_DESC scDesc;



	}*/

};

		delete[] pIList;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	txDesc.MipLevels = 1;

	txDesc.MipLevels = 1;

#ifdef _DEBUG

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

		}



	txDesc.MipLevels = 1;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.ByteWidth = sizeof(WORD) * icount;





#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ibDesc.StructureByteStride = 0;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.SampleDesc.Quality = 0;

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	{

	if (FAILED(hr))

		{

		&m_pSwapChain,

	irData.SysMemSlicePitch = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//First we need to start up SDL, and make sure it went ok

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vector<Vertex> vertexlist;

	m_pPixelShader = NULL;

	m_pMatrixBuffer = NULL;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pSwapChain);

		return hr;





#include <SDL.h>

		KEY_PRESS_SURFACE_DEFAULT,



			default:

	std::vector<tinyobj::shape_t> shapes;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vector<WORD> indexList;

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		//User requests quit

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	ibDesc.CPUAccessFlags = 0;

	//First we need to start up SDL, and make sure it went ok

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//頂点シェーダー生成

		else if (e.type == SDL_KEYDOWN)

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	};



		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

			}

	std::vector<tinyobj::material_t> materials;

	txDesc.CPUAccessFlags = 0;

#include <SDL.h>

	m_pPixelShader = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);







	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t tx =

			}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_Viewport.TopLeftX = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_DestroyRenderer(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#include <iostream>





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		size_t index_offset = 0;  // インデントのオフセット

	}

{

				WORD index = idx.vertex_index;



	}

		&level,



		&materials,

struct ConstantMatrixBuffer {

		{



	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4 specular;          //反射(r,g,b)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	delete[] pIList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				indexlist.push_back(index);

};

	WORD   icount = indexList.size();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_Angle += XMConvertToRadians(1.0f);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		SDL_Delay(1000);

 */

	SDL_Quit();

	m_pSwapChain = NULL;

				break;

HRESULT CD3DTest::Create(HWND hwnd)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	tinyobj::attrib_t attrib;





	//ピクセルシェーダー生成

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	Release();

	{





				tinyobj::real_t ty =

	ID3D11Texture2D* pBackBuffer;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_Viewport.TopLeftX = 0;

	m_pDepthStencilTexture = NULL;

		&scDesc,







		SDL_RenderClear(ren);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//インデックスバッファ作成

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//ビューポート設定

	m_pDevice = NULL;



				WORD index = idx.vertex_index;

	m_pInputLayout = NULL;

	txDesc.SampleDesc.Count = 1;



		KEY_PRESS_SURFACE_DOWN,



	m_pImmediateContext = NULL;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_Viewport.Height = (FLOAT)rect.Height();

	return hr;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	//頂点レイアウト作成

	{

			}

	delete[] pVList;

{

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pSampler);

	scDesc.BufferDesc.Height = rect.Height();



			//Select surfaces based on key press

	m_Viewport.TopLeftY = 0;

				break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_pDevice = NULL;

	UINT offsets = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	}

			index_offset += num_vertices;

		flags,

	return 0;

	{

		&m_pDevice,

	SAFE_RELEASE(m_pIndexBuffer);



 */

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

};

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			//Select surfaces based on key press

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

			case SDLK_RIGHT:

	std::string error;

#endif

	m_Viewport.Height = (FLOAT)rect.Height();

	m_Viewport.Height = (FLOAT)rect.Height();

	vector<Vertex> vertexlist;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pMatrixBuffer = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}



{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	reader_config.mtl_search_path = "./"; // Path to material files

			int num_vertices = shape.mesh.num_face_vertices[f];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		NULL,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	vector<WORD> indexList;

	tinyobj::attrib_t attrib;

	SDL_DestroyTexture(tex);

	m_Viewport.MaxDepth = 1.0f;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&m_pSwapChain,



	}

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))



	//First we need to start up SDL, and make sure it went ok



	scDesc.Windowed = TRUE;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



#include <SDL.h>



		if (!reader.Error().empty())

	SAFE_RELEASE(m_pVertexShader);

	ID3D11Texture2D* pBackBuffer;

	UINT strides = sizeof(Vertex);

	//テクスチャ読み込み

}

	cbDesc.MiscFlags = 0;

	//頂点レイアウト作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//頂点シェーダー生成



		SDL_RenderClear(ren);

	ConstantMaterial material; //物体の質感

#ifdef _DEBUG

	vbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

}

struct ConstantMaterial {

		SDL_Delay(1000);

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}





	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.Windowed = TRUE;

	m_pSwapChain = NULL;





	//定数バッファ作成

	txDesc.MiscFlags = 0;

	return 0;

	SDL_Event e;

#include "DirectXManager.h"

	SAFE_RELEASE(m_pTexture);

		&error,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pSwapChain);

	}

		KEY_PRESS_SURFACE_TOTAL

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemSlicePitch = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

	for (int j = 0; j < icount; j++)

			int num_vertices = shape.mesh.num_face_vertices[f];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		pIList[j] = indexList[j];



		// Loop over faces(polygon)







	auto& shapes = reader.GetShapes();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	}

	HRESULT              hr;

	cbDesc.CPUAccessFlags = 0;

	SDL_Quit();





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		KEY_PRESS_SURFACE_LEFT,



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.MiscFlags = 0;



	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

};

	tinyobj::ObjReader reader;

			int num_vertices = shape.mesh.num_face_vertices[f];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::string imagePath = "hello.bmp";

			switch (e.key.keysym.sym)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		SDL_Delay(1000);

	SAFE_RELEASE(m_pDepthStencilView);



		}

		exit(1);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

}

		return hr;

};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		delete[] pIList;





	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 pos;               //座標(x,y,z)

				indexlist.push_back(idx.vertex_index);







	XMFLOAT4X4 projection;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_VertexCount = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

};

	if (FAILED(hr))

		{

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pLightBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);

}

};

	SDL_Event e;

		KEY_PRESS_SURFACE_RIGHT,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#include <SDL.h>

	m_pVertexShader = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

				// access to vertex

	m_Viewport.MaxDepth = 1.0f;

	m_pVertexBuffer = NULL;



	{

				WORD index = idx.vertex_index;

	SDL_DestroyRenderer(ren);

	if (m_pImmediateContext)

	tinyobj::ObjReader reader;

		return hr;



		SDL_RenderPresent(ren);

	{

	return hr;

	// Loop over shapes

				break;

	m_pSwapChain->Present(0, 0);

		size_t index_offset = 0;

		SDL_RenderPresent(ren);

	m_Viewport.MaxDepth = 1.0f;

}

	tinyobj::ObjReader reader;



	irData.SysMemPitch = 0;

};

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantLight {

	m_pTexture = NULL;

	{

	Release();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

		return hr;

		}





	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_VertexCount = vcount;



			}

			case SDLK_LEFT:



			exit(1);

	m_Viewport.Width = (FLOAT)rect.Width();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				// access to vertex

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pRenderTargetView);

		&m_pDevice,





			index_offset += num_vertices;

		KEY_PRESS_SURFACE_UP,





		return hr;

	if (!error.empty())



				break;

	Vertex* pVList = new Vertex[vcount];

}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		KEY_PRESS_SURFACE_DOWN,

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4         eyePos;   //視点座標

}

	m_pLightBuffer = NULL;

struct ConstantMaterial {

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	ID3D11Texture2D* pBackBuffer;

	vector<Vertex> vertexlist;

		if (e.type == SDL_QUIT)



				indexlist.push_back(idx.vertex_index);

	{

		return hr;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		1,



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pVertexBuffer);

	scDesc.OutputWindow = hwnd;

	vrData.SysMemSlicePitch = 0;



	m_Viewport.TopLeftY = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		// Loop over faces(polygon)

	SDL_Quit();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			case SDLK_LEFT:



			case SDLK_UP:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	//深度ステンシルバッファ作成

	m_VertexCount = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		R"(cube.obj)");



{

	scDesc.OutputWindow = hwnd;

		SDL_RenderClear(ren);



}



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//深度ステンシルバッファ作成

	D3D11_TEXTURE2D_DESC txDesc;



			exit(1);


