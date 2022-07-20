

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				// access to vertex

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pImmediateContext);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pTextureView);

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	enum KeyPressSurfaces

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_FreeSurface(bmp);

};

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.CPUAccessFlags = 0;



	/*

};

			//Select surfaces based on key press



	{

	for (int j = 0; j < icount; j++)





		//User requests quit

	}

struct ConstantLightBuffer {

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//定数バッファ作成





	txDesc.MipLevels = 1;

	for (int i = 0; i < 3; i++)

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vector<WORD> indexList;

	{

	m_pLightBuffer = NULL;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	for (int j = 0; j < icount; j++)

	ibDesc.MiscFlags = 0;

#include <iostream>

	SAFE_RELEASE(m_pSwapChain);

	{

	txDesc.Height = rect.Height();

	D3D_FEATURE_LEVEL level;

	SDL_DestroyTexture(tex);

	//First we need to start up SDL, and make sure it went ok

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

}

	txDesc.SampleDesc.Quality = 0;



		KEY_PRESS_SURFACE_LEFT,

	scDesc.SampleDesc.Quality = 0;

struct ConstantLight {

	tinyobj::ObjReaderConfig reader_config;

	}

	m_Viewport.Height = (FLOAT)rect.Height();

	scDesc.BufferDesc.Height = rect.Height();

	::GetClientRect(hwnd, &rect);





	{

		else if (e.type == SDL_KEYDOWN)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				indexlist.push_back(idx.vertex_index);

	ConstantLight    pntLight; //点光源

	//ビューポート設定

};

	txDesc.SampleDesc.Quality = 0;







	reader_config.mtl_search_path = "./"; // Path to material files

	tinyobj::attrib_t attrib;



		size_t index_offset = 0;

		SDL_RenderClear(ren);

	for (const auto& shape : shapes)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		NULL,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		return hr;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.CPUAccessFlags = 0;



	scDesc.SampleDesc.Quality = 0;

{

	SAFE_RELEASE(m_pImmediateContext);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pTexture);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				// access to vertex

		return hr;



	cbDesc.CPUAccessFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_UP,



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	scDesc.BufferDesc.Width = rect.Width();

	//深度ステンシルバッファ作成

	m_pTexture = NULL;

			}

		D3D11_SDK_VERSION,

		return hr;

	ID3D11Texture2D* pBackBuffer;

	m_pTextureView = NULL;

	m_pSampler = NULL;

};



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//インデックスバッファ作成

	scDesc.Windowed = TRUE;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}
			index_offset += fv;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_DestroyTexture(tex);

	dsDesc.Format = txDesc.Format;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

		{

	txDesc.Height = rect.Height();

	txDesc.ArraySize = 1;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				indexlist.push_back(index);



	scDesc.OutputWindow = hwnd;

	txDesc.Width = rect.Width();

	m_Viewport.Height = (FLOAT)rect.Height();

	{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	//頂点バッファ作成

	}







	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		}

#include <iostream>

	XMFLOAT4X4 view;

		SDL_RenderPresent(ren);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

HRESULT CD3DTest::Create(HWND hwnd)

		KEY_PRESS_SURFACE_UP,

		// Loop over faces(polygon)

		1,

	SAFE_RELEASE(m_pDevice);

	tinyobj::ObjReader reader;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pSwapChain = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			for (size_t v = 0; v < fv; v++)

		return hr;



			}

	{

				indexlist.push_back(idx.vertex_index);

	m_pDevice = NULL;

		SDL_RenderPresent(ren);

	XMFLOAT4         eyePos;   //視点座標

			switch (e.key.keysym.sym)



	}





			case SDLK_UP:

	if (FAILED(hr))

	}





	/*

	SDL_DestroyRenderer(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pTexture);

	SDL_Quit();

	//vector<Vertex> vertex_t;

	scDesc.BufferCount = 1;

}

		{



		&level,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_BUFFER_DESC vbDesc;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				WORD index = idx.vertex_index;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			{

	enum KeyPressSurfaces

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&error,

	std::string error;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4 specular;          //反射(r,g,b)

	};

	m_pVertexShader = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_RenderPresent(ren);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pSampler = NULL;

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pInputLayout);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



 * Lesson 1: Hello World!



				indexlist.push_back(idx.vertex_index);

	}*/



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		&m_pImmediateContext);

	m_pRenderTargetView = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTextureView = NULL;

	/*

			}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.ArraySize = 1;

		size_t index_offset = 0;  // インデントのオフセット

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	XMFLOAT4X4 view;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}*/

{



	//Clean up our objects and quit

	UINT offsets = 0;

	m_pSwapChain = NULL;



int main(int, char**)

	m_Viewport.MaxDepth = 1.0f;

{

		NULL,

		R"(cube.obj)");

	//vector<Vertex> vertex_t;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantMaterial {

	m_pVertexShader = NULL;

	return 0;

	/*

		return hr;

	m_pInputLayout = NULL;

				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pMatrixBuffer);

	m_pIndexBuffer = NULL;

		SDL_RenderPresent(ren);

	/*

	if (FAILED(hr))

		&attrib,



}

		}

	ibDesc.StructureByteStride = 0;

	SDL_DestroyTexture(tex);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_DestroyRenderer(ren);



	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&m_pDevice,

}



	SDL_Quit();

int main(int, char**)

		}

	// Loop over shapes



	pBackBuffer->Release();

	SDL_FreeSurface(suf);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	SAFE_RELEASE(m_pLightBuffer);

	m_IndexCount = icount;

				break;

	XMFLOAT4 ambient;           //環境(r,g,b)





	ibDesc.StructureByteStride = 0;

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{





void CD3DTest::Render()

	}





		return hr;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		else if (e.type == SDL_KEYDOWN)

	};



	SDL_Event e;

				break;

	m_pSwapChain->Present(0, 0);

				break;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	scDesc.BufferCount = 1;

	m_pVertexShader = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ZeroMemory(&txDesc, sizeof(txDesc));

struct ConstantLightBuffer {

	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyWindow(win);

	WORD* pIList = new WORD[icount];

	//Vertex* pVList = new Vertex[vcount];

 * Lesson 1: Hello World!

	m_pTextureView = NULL;

		return hr;

		//User requests quit



	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

	SDL_Event e;

	hr = D3D11CreateDeviceAndSwapChain(NULL,





{

int main(int, char**)

		}

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pLightBuffer);

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 specular;          //反射(r,g,b)



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SAFE_RELEASE(m_pInputLayout);

	}





	UINT strides = sizeof(Vertex);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pVertexShader);

	ibDesc.ByteWidth = sizeof(WORD) * icount;







}



	tinyobj::ObjReaderConfig reader_config;

		{

			case SDLK_RIGHT:

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	CRect                rect;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	UINT flags = 0;

	m_pSampler = NULL;

	bool ret = tinyobj::LoadObj(

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

 */



	scDesc.BufferDesc.Height = rect.Height();

	vector<WORD> indexList;

		&level,

		SDL_RenderCopy(ren, tex, NULL, NULL);



			//Select surfaces based on key press



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



{





	delete[] pIList;

			// Loop over vertices in the face.



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			index_offset += num_vertices;

	//vector<WORD> index_t;

			{





		KEY_PRESS_SURFACE_UP,

	SDL_DestroyTexture(tex);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			index_offset += fv;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	if (FAILED(hr))



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pPixelShader);

	CRect                rect;

		{

	//ピクセルシェーダー生成

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	m_pSwapChain = NULL;

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pVertexBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

/*



			{

	txDesc.SampleDesc.Count = 1;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftX = 0;

		}

	XMStoreFloat4(&clb.ambient, lightAmbient);



	{

	D3D_FEATURE_LEVEL level;

	for (int i = 0; i < 3; i++)

	for (int i = 0; i < 3; i++)

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	std::vector<tinyobj::material_t> materials;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			break;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		if (!reader.Error().empty())

	m_Viewport.MaxDepth = 1.0f;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			case SDLK_DOWN:

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.ArraySize = 1;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	XMStoreFloat4(&clb.eyePos, eye);

	for (const auto& shape : shapes)

				tinyobj::real_t ty =

	m_Viewport.MaxDepth = 1.0f;

		}

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

		NULL,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		delete[] pVList;

	scDesc.BufferDesc.Width = rect.Width();

	vector<WORD> indexList;

{

	//Create Index

		KEY_PRESS_SURFACE_RIGHT,

		}



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pRenderTargetView);



		{

	for (const auto& shape : shapes)

	D3D_FEATURE_LEVEL level;

	vrData.pSysMem = &pVList[0];

struct ConstantMatrixBuffer {

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

using std::cout; using std::endl;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    nearZ = 0.1f;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyTexture(tex);

		// Loop over faces(polygon)

	m_pDepthStencilView = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.StructureByteStride = 0;



	XMFLOAT4 specular;          //反射(r,g,b)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





}

	std::vector<tinyobj::shape_t> shapes;









		KEY_PRESS_SURFACE_UP,

CD3DTest::CD3DTest()

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D11_SAMPLER_DESC smpDesc;

			index_offset += num_vertices;

	cbDesc.MiscFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	cbDesc.StructureByteStride = 0;

	vbDesc.StructureByteStride = 0;

{

	m_pDevice = NULL;

	{

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	for (int j = 0; j < icount; j++)

		&level,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	}



	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	auto& shapes = reader.GetShapes();

#define TINYOBJLOADER_IMPLEMENTATION



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pRenderTargetView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (m_pImmediateContext)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		// Loop over faces(polygon)

				break;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	float    fov = XMConvertToRadians(20.0f);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;

	irData.pSysMem = &pIList[0];

}

{

	XMFLOAT4 pos;               //座標(x,y,z)

		&shapes,

	SDL_DestroyWindow(win);

HRESULT CD3DTest::Create(HWND hwnd)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4X4 view;

}

	vrData.SysMemSlicePitch = 0;

	// Loop over shapes

			{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}



		size_t index_offset = 0;  // インデントのオフセット



{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (!reader.Warning().empty())

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vrData.pSysMem = &pVList[0];







	SDL_FreeSurface(suf);

	scDesc.SampleDesc.Quality = 0;

	//First we need to start up SDL, and make sure it went ok

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			break;





		SDL_RenderCopy(ren, tex, NULL, NULL);

	ID3D11Texture2D* pBackBuffer;

			case SDLK_LEFT:

	D3D11_SUBRESOURCE_DATA vrData;

		KEY_PRESS_SURFACE_DOWN,

			// Loop over vertices in the face.



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	Release();

	//First we need to start up SDL, and make sure it went ok

		SDL_RenderPresent(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	CRect                rect;

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	/*



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	m_pMatrixBuffer = NULL;

};

 * Lesson 1: Hello World!



{

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_UP,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pSampler = NULL;

void CD3DTest::Release()



	XMFLOAT4         eyePos;   //視点座標



	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))







				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];







	SAFE_RELEASE(m_pDepthStencilTexture);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		R"(cube.obj)");

		{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantMaterial material; //物体の質感

	//テクスチャ読み込み

		SDL_Delay(1000);

void CD3DTest::Release()

			{

struct ConstantLight {



	std::string inputfile = "test.obj";

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (m_pImmediateContext)

#include "DirectXManager.h"





	::ZeroMemory(&scDesc, sizeof(scDesc));

#include <SDL.h>

	m_pDepthStencilTexture = NULL;

	txDesc.CPUAccessFlags = 0;



	scDesc.OutputWindow = hwnd;

		KEY_PRESS_SURFACE_RIGHT,



		else if (e.type == SDL_KEYDOWN)

	m_Viewport.MinDepth = 0.0f;

	m_IndexCount = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	auto& attrib = reader.GetAttrib();



	txDesc.Usage = D3D11_USAGE_DEFAULT;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_FreeSurface(bmp);

	//深度ステンシルバッファ作成



	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				// access to vertex

		return 1;

		}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.Width = rect.Width();

	//Vertex* pVList = new Vertex[vcount];

struct ConstantLight {



	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pIndexBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

int SEGMENT = 36;

	int     vcount = vertexlist.size();

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;



	if (!reader.Warning().empty())

				break;

		if (!ret)

	if (FAILED(hr))



	return hr;

	return 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}
	LoadObj(vertexlist, indexList);



		m_pImmediateContext->ClearState();





	SAFE_RELEASE(m_pLightBuffer);

		&level,

	SDL_DestroyTexture(tex);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_IndexCount = icount;

				WORD index = idx.vertex_index;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	enum KeyPressSurfaces

	float    fov = XMConvertToRadians(20.0f);

}
		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pTextureView);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pPixelShader = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	::GetClientRect(hwnd, &rect);

		{



	if (FAILED(hr))

				indexlist.push_back(index);

{



		SDL_RenderPresent(ren);

	tinyobj::ObjReaderConfig reader_config;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	delete[] pVList;

	enum KeyPressSurfaces

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&level,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4X4 projection;

		{

		&materials,

	vbDesc.CPUAccessFlags = 0;

	LoadObj(vertexlist, indexList);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

	cbDesc.CPUAccessFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vector<Vertex> vertexlist;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pVertexBuffer = NULL;

	//ビューポート設定

	D3D_FEATURE_LEVEL level;

	vector<WORD> indexList;

	//頂点シェーダー生成

	UINT offsets = 0;

		SDL_Delay(1000);

	cbDesc.MiscFlags = 0;

		flags,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		&m_pSwapChain,

	cbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

/*

	return;

	SAFE_RELEASE(m_pTextureView);

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

};

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				// access to vertex

	m_pIndexBuffer = NULL;

	m_IndexCount = 0;



	}

				break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_DOWN:

			index_offset += num_vertices;

		//User requests quit



	m_IndexCount = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			for (size_t v = 0; v < fv; v++)

		return hr;

	vector<Vertex> vertexlist;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyTexture(tex);

	tinyobj::attrib_t attrib;

		}



	SDL_DestroyRenderer(ren);

	SDL_Quit();

		exit(1);

}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D_FEATURE_LEVEL level;

			case SDLK_LEFT:

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyRenderer(ren);

	m_pIndexBuffer = NULL;

	ConstantLightBuffer clb;









	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vrData.SysMemSlicePitch = 0;



			{

		SDL_RenderPresent(ren);



void CD3DTest::Render()

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		&shapes,

	{

	dsDesc.Format = txDesc.Format;

	}

	SDL_FreeSurface(suf);







}
	float    farZ = 100.0f;

		pIList[j] = indexList[j];

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_DEFAULT,

 */

	enum KeyPressSurfaces

{

}
	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t tx =

		return hr;

	{

			for (size_t v = 0; v < num_vertices; v++)

		KEY_PRESS_SURFACE_UP,

			index_offset += num_vertices;

	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

#include <iostream>

{

	m_pInputLayout = NULL;

	//定数バッファ作成



	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	auto& attrib = reader.GetAttrib();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		{

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (!reader.Warning().empty())

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	irData.pSysMem = &pIList[0];

	scDesc.OutputWindow = hwnd;

		size_t index_offset = 0;  // インデントのオフセット



 */

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	ConstantMaterial material; //物体の質感

				tinyobj::real_t ty =





		return hr;

	SAFE_RELEASE(m_pDevice);



	cbDesc.CPUAccessFlags = 0;

	WORD* pIList = new WORD[icount];



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			for (size_t v = 0; v < fv; v++)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },







	D3D11_TEXTURE2D_DESC txDesc;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	};

	tinyobj::ObjReader reader;





int main(int, char**)

	{

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		size_t index_offset = 0;  // インデントのオフセット



	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		delete[] pVList;

				break;

			}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_UP,

	D3D_FEATURE_LEVEL level;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}



	SAFE_RELEASE(m_pVertexShader);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

	dsDesc.Format = txDesc.Format;





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	m_pTextureView = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		KEY_PRESS_SURFACE_DEFAULT,

			index_offset += num_vertices;

	m_pTextureView = NULL;

/*

	//Key press surfaces constants

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pSampler = NULL;



		SDL_RenderClear(ren);

};

	vrData.pSysMem = &pVList[0];

}

	vrData.SysMemPitch = 0;

	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		return hr;

	}

int main(int, char**)

	}



		delete[] pVList;

	vbDesc.MiscFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	SDL_DestroyTexture(tex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				break;

	if (FAILED(hr))

	SDL_Quit();



		{

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ibDesc.CPUAccessFlags = 0;

	auto& attrib = reader.GetAttrib();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Quit();

	::GetClientRect(hwnd, &rect);

	m_pVertexBuffer = NULL;

	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		NULL,

	}*/



		KEY_PRESS_SURFACE_RIGHT,

		}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

	CRect                rect;





				// access to vertex

	{

		if (!reader.Error().empty())



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			}

	return 0;

	SDL_DestroyTexture(tex);

		{

	XMStoreFloat4(&clb.eyePos, eye);



	for (const auto& shape : shapes)



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pDepthStencilView);

	txDesc.ArraySize = 1;

		NULL,

	{

	{

	Release();

int SEGMENT = 36;

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_RIGHT,

	tinyobj::ObjReader reader;

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;

	if (!reader.Warning().empty())

		if (!reader.Error().empty())



}

	if (FAILED(hr))

struct ConstantMaterial {

	float    fov = XMConvertToRadians(20.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	std::vector<tinyobj::material_t> materials;

		&shapes,

		delete[] pIList;

	if (!reader.ParseFromFile(inputfile, reader_config))

	{

	m_Viewport.Height = (FLOAT)rect.Height();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_IndexCount = icount;

	D3D11_BUFFER_DESC ibDesc;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		&shapes,

	for (const auto& shape : shapes)

		}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		}

		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	m_pVertexBuffer = NULL;

	m_Viewport.TopLeftY = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		&scDesc,



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pInputLayout);



#define TINYOBJLOADER_IMPLEMENTATION

	HRESULT              hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

{

	SAFE_RELEASE(m_pDepthStencilView);

}
	//ビューポート設定

	XMFLOAT4X4 world;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D_FEATURE_LEVEL level;

	if (FAILED(hr))

		exit(1);

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pImmediateContext);

	if (FAILED(hr))

	float    nearZ = 0.1f;

	SDL_DestroyRenderer(ren);

	m_pTexture = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

#include <iostream>

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//ビューポート設定



	}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		pVList[i] = vertexlist[i];

	vrData.pSysMem = &pVList[0];

	tinyobj::ObjReader reader;

	scDesc.OutputWindow = hwnd;

	// Loop over shapes

	irData.pSysMem = &pIList[0];



	if (FAILED(hr))

	if (m_pImmediateContext)

	//頂点シェーダー生成

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



{

	}

		m_pImmediateContext->ClearState();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pVertexShader = NULL;

	LoadObj(vertexlist, indexList);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{

	scDesc.BufferDesc.Width = rect.Width();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.MiscFlags = 0;

		R"(cube.obj)");

		delete[] pIList;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//頂点バッファ作成

	D3D_FEATURE_LEVEL level;

		&m_pSwapChain,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			exit(1);



	ConstantMaterial material; //物体の質感

	scDesc.Windowed = TRUE;



};



		return hr;



	SAFE_RELEASE(m_pSwapChain);

	std::string imagePath = "hello.bmp";





		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pSwapChain,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		//User requests quit

	ID3D11Texture2D* pBackBuffer;

}

		&shapes,





	HRESULT              hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				break;

	SAFE_RELEASE(m_pPixelShader);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



}

	dsDesc.Format = txDesc.Format;

		return hr;

	D3D11_SUBRESOURCE_DATA irData;



	D3D11_BUFFER_DESC vbDesc;

			{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pSampler = NULL;

	SAFE_RELEASE(m_pDevice);

{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	D3D11_BUFFER_DESC ibDesc;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	scDesc.Windowed = TRUE;

		{



			//Select surfaces based on key press

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D11_BUFFER_DESC vbDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.CPUAccessFlags = 0;

}
	m_pPixelShader = NULL;

			{

		}



#ifdef _DEBUG







	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

};

		//User presses a key

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





using std::cout; using std::endl;



	Release();

		if (e.type == SDL_QUIT)

		delete[] pVList;

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Height = rect.Height();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



				break;

		KEY_PRESS_SURFACE_LEFT,

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

		&error,

	for (const auto& shape : shapes)

	m_pTexture = NULL;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_Viewport.Width = (FLOAT)rect.Width();





	{

	txDesc.SampleDesc.Quality = 0;

struct ConstantLight {

		}

	dsDesc.Format = txDesc.Format;

	if (FAILED(hr))

		{

void CD3DTest::Render()

		SDL_RenderClear(ren);



				WORD index = idx.vertex_index;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vector<WORD> indexList;

}
	scDesc.OutputWindow = hwnd;

	//Clean up our objects and quit

		&m_pSwapChain,

	m_VertexCount = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))



	if (!reader.ParseFromFile(inputfile, reader_config))

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4X4 world;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	UINT flags = 0;

		return hr;



			// Loop over vertices in the face.





		return hr;

	{



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//ピクセルシェーダー生成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pVertexShader);



	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pDepthStencilTexture);

	for (const auto& shape : shapes)

		pVList[i] = vertexlist[i];



	if (!error.empty())

	for (int i = 0; i < 3; i++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	float    farZ = 100.0f;

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);



		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <iostream>

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	UINT strides = sizeof(Vertex);

		delete[] pIList;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.MipLevels = 1;

	Vertex* pVList = new Vertex[vcount];

};

	delete[] pVList;

struct ConstantLightBuffer {



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ibDesc.CPUAccessFlags = 0;

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

}
			}

	tinyobj::ObjReader reader;



	m_pTexture = NULL;

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			switch (e.key.keysym.sym)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	enum KeyPressSurfaces

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.Height = rect.Height();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	D3D11_SUBRESOURCE_DATA irData;

	//定数バッファ作成

				break;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ConstantLight    pntLight; //点光源

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			case SDLK_UP:



	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pSwapChain);

		pVList[i] = vertexlist[i];

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	std::string error;

				indexlist.push_back(idx.vertex_index);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		// Loop over faces(polygon)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_TEXTURE2D_DESC txDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#include <SDL.h>

	delete[] pIList;

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	SDL_Quit();

struct ConstantMaterial {

	ConstantMaterial material; //物体の質感

struct ConstantLightBuffer {

	m_pIndexBuffer = NULL;

	delete[] pIList;

	SAFE_RELEASE(m_pVertexShader);

	}

	SAFE_RELEASE(m_pVertexBuffer);

			{

		return hr;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

{

	if (FAILED(hr))

	SDL_FreeSurface(bmp);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//インデックスバッファ作成





	D3D11_BUFFER_DESC vbDesc;

		&m_pSwapChain,



	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.StructureByteStride = 0;

	Release();

	ibDesc.MiscFlags = 0;

	m_pDevice = NULL;

		}



 */

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}*/

		&level,

	std::string inputfile = "test.obj";



	float    fov = XMConvertToRadians(20.0f);

	tinyobj::attrib_t attrib;



	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pTexture);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	Release();

	SAFE_RELEASE(m_pLightBuffer);



	UINT offsets = 0;

HRESULT CD3DTest::Create(HWND hwnd)

		exit(1);

				tinyobj::real_t ty =

	cbDesc.MiscFlags = 0;

	scDesc.OutputWindow = hwnd;

				break;

	m_Viewport.TopLeftY = 0;

		&m_pSwapChain,



	//定数バッファ作成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	UINT strides = sizeof(Vertex);

	::ZeroMemory(&scDesc, sizeof(scDesc));



};

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

				// access to vertex



{

		size_t index_offset = 0;  // インデントのオフセット



		flags,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				WORD index = idx.vertex_index;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				indexlist.push_back(idx.vertex_index);

		return hr;

	//頂点レイアウト作成



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			{

		&level,

	Vertex* pVList = new Vertex[vcount];

			index_offset += fv;

		&m_pImmediateContext);

	{

				vertex.push_back(vertex_tmp);

	ibDesc.StructureByteStride = 0;

	{

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))

int main(int, char**)



	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4X4 projection;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.ArraySize = 1;

		return hr;



int main(int, char**)

	{

	scDesc.OutputWindow = hwnd;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pDepthStencilTexture = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





 * Lesson 1: Hello World!

			case SDLK_RIGHT:

struct ConstantMaterial {

	UINT flags = 0;

	//Vertex* pVList = new Vertex[vcount];

};

	float    nearZ = 0.1f;

	WORD* pIList = new WORD[icount];

		&attrib,

	D3D11_BUFFER_DESC ibDesc;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

			int num_vertices = shape.mesh.num_face_vertices[f];

}

	auto& materials = reader.GetMaterials();



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (const auto& shape : shapes)





	m_Viewport.Width = (FLOAT)rect.Width();

	LoadObj(vertexlist, indexList);

struct ConstantMatrixBuffer {

	{

	// Loop over shapes

	m_pSwapChain->Present(0, 0);

	scDesc.OutputWindow = hwnd;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	return 0;

	pBackBuffer->Release();

	}

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

}

	//Clean up our objects and quit

		size_t index_offset = 0;

	vbDesc.CPUAccessFlags = 0;

};

	ibDesc.MiscFlags = 0;

}

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pDepthStencilTexture = NULL;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	scDesc.BufferDesc.Height = rect.Height();

		pIList[j] = indexList[j];





	cbDesc.StructureByteStride = 0;

	m_pTextureView = NULL;

		&m_pDevice,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!reader.ParseFromFile(inputfile, reader_config))

	vrData.SysMemPitch = 0;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			// Loop over vertices in the face.

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferDesc.Height = rect.Height();

	{

				// access to vertex

	m_Viewport.TopLeftY = 0;

	//定数バッファ作成

	SAFE_RELEASE(m_pIndexBuffer);



	DXGI_SWAP_CHAIN_DESC scDesc;

	DXGI_SWAP_CHAIN_DESC scDesc;

	//インデックスバッファ作成

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



			{

	}





	CRect                rect;

		&attrib,



	XMFLOAT4 diffuse;           //拡散(r,g,b)



};

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//Clean up our objects and quit

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	Vertex* pVList = new Vertex[vcount];

			{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pLightBuffer);

	cbDesc.MiscFlags = 0;

		//User presses a key

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	float    fov = XMConvertToRadians(20.0f);

		&m_pImmediateContext);

#include <SDL.h>

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyRenderer(ren);



	txDesc.SampleDesc.Quality = 0;



			switch (e.key.keysym.sym)

		return hr;

				indexlist.push_back(index);

	XMFLOAT4         eyePos;   //視点座標

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.MiscFlags = 0;

		pIList[j] = indexList[j];

	return 0;

struct ConstantLightBuffer {



			index_offset += fv;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		{

	SDL_Quit();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.OutputWindow = hwnd;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Width = rect.Width();

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b)

	XMFLOAT4 pos;               //座標(x,y,z)

	tinyobj::ObjReaderConfig reader_config;

	m_IndexCount = icount;

				// access to vertex

	int     vcount = vertexlist.size();

	cbDesc.MiscFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)



		{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			switch (e.key.keysym.sym)



{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			case SDLK_RIGHT:

		pVList[i] = vertexlist[i];

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pDevice);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&error,

	irData.SysMemSlicePitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#define TINYOBJLOADER_IMPLEMENTATION

		//User presses a key

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	m_pVertexBuffer = NULL;



	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pVertexBuffer);

		pVList[i] = vertexlist[i];

	ID3D11Texture2D* pBackBuffer;

	SDL_DestroyWindow(win);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT offsets = 0;

		SDL_Delay(1000);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_DestroyTexture(tex);

	vector<WORD> indexList;

	SAFE_RELEASE(m_pDevice);

				WORD index = idx.vertex_index;

#include <SDL.h>



	delete[] pIList;

		}

CD3DTest::~CD3DTest()

#include <iostream>

		return hr;

	if (FAILED(hr))

		}

			case SDLK_LEFT:

	cbDesc.MiscFlags = 0;



	m_pSwapChain = NULL;

		return hr;

int SEGMENT = 36;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//頂点バッファ作成

	SAFE_RELEASE(m_pInputLayout);

	txDesc.SampleDesc.Count = 1;

			case SDLK_LEFT:

	cbDesc.StructureByteStride = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));







	ibDesc.CPUAccessFlags = 0;

	{

	{



	XMFLOAT4 attenuate;         //減衰(a,b,c)



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	std::string inputfile = "test.obj";

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (int j = 0; j < icount; j++)

struct ConstantMaterial {

				WORD index = idx.vertex_index;

		&scDesc,

	// Loop over shapes

 */



		return hr;





	m_Viewport.Width = (FLOAT)rect.Width();





	m_Viewport.Height = (FLOAT)rect.Height();





struct ConstantLight {

		KEY_PRESS_SURFACE_UP,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.OutputWindow = hwnd;

	SDL_DestroyRenderer(ren);

		D3D11_SDK_VERSION,

{

	SDL_DestroyTexture(tex);



	SAFE_RELEASE(m_pSwapChain);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string inputfile = "test.obj";





			{

	m_VertexCount = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pPixelShader);

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	while (SDL_PollEvent(&e) != 0)

	//First we need to start up SDL, and make sure it went ok



		SDL_RenderClear(ren);

				vertex.push_back(vertex_tmp);



	}

	for (int j = 0; j < icount; j++)

	m_pTexture = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	{

		&error,

				WORD index = idx.vertex_index;

				vertex.push_back(vertex_tmp);

	SDL_Quit();

		cout << "SDL_INIT_ERROR" << endl;

			for (size_t v = 0; v < fv; v++)





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

		R"(cube.obj)");

		return hr;



	{

	m_pDepthStencilView = NULL;

		return hr;

	float    farZ = 100.0f;

void CD3DTest::Release()



{

				vertex.push_back(vertex_tmp);



		{



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{



				WORD index = idx.vertex_index;

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pVertexBuffer = NULL;

		return hr;

	if (FAILED(hr))

		return hr;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMFLOAT4 pos;               //座標(x,y,z)

			{



		return hr;

	m_pImmediateContext = NULL;





		&error,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_IndexCount = icount;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	::GetClientRect(hwnd, &rect);

				// access to vertex



	irData.pSysMem = &pIList[0];

	m_Angle += XMConvertToRadians(1.0f);



	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pTextureView = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

struct ConstantLightBuffer {



	m_IndexCount = icount;

		{

	XMFLOAT4         eyePos;   //視点座標

			int num_vertices = shape.mesh.num_face_vertices[f];

}

	HRESULT              hr;



				tinyobj::real_t ty =

	if (m_pImmediateContext)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		if (!ret)



{

	if (FAILED(hr))



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

void CD3DTest::Render()

	{

	SDL_DestroyWindow(win);

	ZeroMemory(&txDesc, sizeof(txDesc));

		KEY_PRESS_SURFACE_DEFAULT,





	scDesc.SampleDesc.Count = 1;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

	//Clean up our objects and quit

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	HRESULT              hr;



	return;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDepthStencilTexture);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	D3D_FEATURE_LEVEL level;

	std::string inputfile = "test.obj";

};

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

		flags,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

#ifdef _DEBUG

struct ConstantMaterial {

	vbDesc.MiscFlags = 0;



}

	XMFLOAT4X4 view;

	SDL_DestroyTexture(tex);

}



	irData.pSysMem = &pIList[0];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	m_Angle += XMConvertToRadians(1.0f);





	if (m_pImmediateContext)



	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t tx =

	return 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

			{

		}

};

	{

	m_pRenderTargetView = NULL;

	{

			}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		R"(cube.obj)");

			case SDLK_RIGHT:

		//User presses a key



 */

		return hr;

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

		//User presses a key



		pIList[j] = indexList[j];



				break;

		return hr;

				indexlist.push_back(idx.vertex_index);

		KEY_PRESS_SURFACE_UP,



	txDesc.ArraySize = 1;



	SAFE_RELEASE(m_pVertexBuffer);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	pBackBuffer->Release();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//First we need to start up SDL, and make sure it went ok

		&level,



		return 1;

	float    nearZ = 0.1f;

	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	delete[] pIList;

		}

	if (FAILED(hr))



	D3D_FEATURE_LEVEL level;

		return hr;

				break;

	//テクスチャ読み込み

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pVertexShader = NULL;

	scDesc.Windowed = TRUE;

	m_IndexCount = 0;

	SAFE_RELEASE(m_pTexture);

	::GetClientRect(hwnd, &rect);

#include <SDL.h>



		return hr;

	XMFLOAT4X4 projection;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	irData.pSysMem = &pIList[0];

	ibDesc.MiscFlags = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;



	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pSwapChain = NULL;



			switch (e.key.keysym.sym)

			}

	//頂点バッファ作成



	m_pSwapChain = NULL;

	//深度ステンシルバッファ作成

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_Delay(1000);

	ConstantMaterial material; //物体の質感

int main(int, char**)

			default:



	return;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

 * Lesson 1: Hello World!



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	scDesc.SampleDesc.Quality = 0;

	{



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();



	if (FAILED(hr))

	}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





				break;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)







	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_LEFT,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



		return 1;





	float    fov = XMConvertToRadians(20.0f);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pDepthStencilView = NULL;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		pLevels,

	//ピクセルシェーダー生成

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_DestroyTexture(tex);

	m_VertexCount = 0;

	pBackBuffer->Release();

	m_pVertexBuffer = NULL;

}


			for (size_t v = 0; v < num_vertices; v++)

		&m_pSwapChain,

		return 1;



#endif



	m_pSampler = NULL;

				WORD index = idx.vertex_index;

	SDL_Quit();

	//ビューポート設定

		SDL_Delay(1000);

	if (FAILED(hr))



	//ビューポート設定

	};

	std::string imagePath = "hello.bmp";

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_Event e;



	vrData.pSysMem = &pVList[0];

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

		{

	return 0;

	ConstantLightBuffer clb;

	XMFLOAT4X4 projection;



		}

{



#ifdef _DEBUG

		if (e.type == SDL_QUIT)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D_FEATURE_LEVEL level;



	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);









	vrData.SysMemPitch = 0;

	m_pDepthStencilView = NULL;



	CRect                rect;



				// access to vertex

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;

		&scDesc,

}



CD3DTest::CD3DTest()





	D3D_FEATURE_LEVEL level;

void CD3DTest::Render()

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	ibDesc.StructureByteStride = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



CD3DTest::~CD3DTest()

		if (e.type == SDL_QUIT)

		{

	tinyobj::ObjReaderConfig reader_config;

	// Loop over shapes

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	cbDesc.CPUAccessFlags = 0;

	//Vertex* pVList = new Vertex[vcount];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t tx =

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pSampler);



				// access to vertex



	}

	Release();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_UP,

{

	m_pImmediateContext = NULL;

			}

	m_Viewport.TopLeftY = 0;

	{



	/*





	m_pDepthStencilView = NULL;

	m_pRenderTargetView = NULL;

	Vertex* pVList = new Vertex[vcount];

			for (size_t v = 0; v < num_vertices; v++)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



#ifdef _DEBUG

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	pBackBuffer->Release();





		NULL,

	SAFE_RELEASE(m_pSwapChain);

	vbDesc.MiscFlags = 0;

	delete[] pVList;

#include <SDL.h>

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pVertexShader = NULL;

	}



	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

	ZeroMemory(&txDesc, sizeof(txDesc));

 */

void CD3DTest::Release()

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	m_pPixelShader = NULL;

/*

{

	m_pTexture = NULL;

	/*

	txDesc.SampleDesc.Quality = 0;

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	return hr;

	txDesc.CPUAccessFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyTexture(tex);

				break;

		&scDesc,





		KEY_PRESS_SURFACE_RIGHT,



	tinyobj::attrib_t attrib;

	//First we need to start up SDL, and make sure it went ok



	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

				WORD index = idx.vertex_index;



/*



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_BUFFER_DESC ibDesc;

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		KEY_PRESS_SURFACE_TOTAL

CD3DTest::CD3DTest()



	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//インデックスバッファ作成

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 attenuate;         //減衰(a,b,c)







	scDesc.OutputWindow = hwnd;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

	{

#include <SDL.h>

	{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		return hr;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	XMFLOAT4         eyePos;   //視点座標

	WORD* pIList = new WORD[icount];

int main(int, char**)

	cbDesc.CPUAccessFlags = 0;

	HRESULT              hr;



			case SDLK_DOWN:

		size_t index_offset = 0;  // インデントのオフセット

	auto& attrib = reader.GetAttrib();





	m_pIndexBuffer = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

/*

	return 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);



	//Create Index

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//頂点レイアウト作成



	XMFLOAT4X4 world;

CD3DTest::~CD3DTest()

	::GetClientRect(hwnd, &rect);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	auto& materials = reader.GetMaterials();



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	std::string inputfile = "test.obj";

void CD3DTest::Render()

	cbDesc.StructureByteStride = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}



		}





	//インデックスバッファ作成

		m_pImmediateContext->ClearState();

	m_Viewport.MinDepth = 0.0f;

	ConstantLight    pntLight; //点光源

		flags,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	std::string imagePath = "hello.bmp";

		exit(1);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		SDL_Delay(1000);

	txDesc.CPUAccessFlags = 0;

			exit(1);

	scDesc.BufferCount = 1;

	cbDesc.CPUAccessFlags = 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC cbDesc;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyWindow(win);

		pLevels,

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

		return hr;

		pIList[j] = indexList[j];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	SAFE_RELEASE(m_pDepthStencilTexture);

	}





				// access to vertex

{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#ifdef _DEBUG

#include "DirectXManager.h"

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

	D3D11_SUBRESOURCE_DATA vrData;





	ConstantLight    pntLight; //点光源

	::GetClientRect(hwnd, &rect);

		KEY_PRESS_SURFACE_RIGHT,

	m_Viewport.TopLeftY = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	ZeroMemory(&txDesc, sizeof(txDesc));

	{

		}



	m_pSwapChain->Present(0, 0);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

}

	SAFE_RELEASE(m_pIndexBuffer);

		KEY_PRESS_SURFACE_RIGHT,

		1,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	D3D11_BUFFER_DESC cbDesc;



	if (!error.empty())



		&materials,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		NULL,

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

		&m_pImmediateContext);



	scDesc.BufferDesc.Width = rect.Width();

		return 1;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	// Loop over shapes

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;

	m_pDepthStencilView = NULL;

	auto& attrib = reader.GetAttrib();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&shapes,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;



	ID3D11Texture2D* pBackBuffer;

	vector<Vertex> vertexlist;

		&m_pImmediateContext);

	float    fov = XMConvertToRadians(20.0f);

	m_Angle += XMConvertToRadians(1.0f);





	cbDesc.MiscFlags = 0;



			// Loop over vertices in the face.

	//Clean up our objects and quit



		{

	ConstantLight    pntLight; //点光源

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_DestroyWindow(win);

			//Select surfaces based on key press

	HRESULT              hr;

	D3D11_TEXTURE2D_DESC txDesc;

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	while (SDL_PollEvent(&e) != 0)

	{

	//Key press surfaces constants



	//vector<WORD> index_t;

	XMFLOAT4X4 view;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pDevice = NULL;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	SDL_Event e;

				break;

	//テクスチャ読み込み

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	if (!error.empty())

	auto& attrib = reader.GetAttrib();

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_BUFFER_DESC vbDesc;

	UINT strides = sizeof(Vertex);

{



	SAFE_RELEASE(m_pSwapChain);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		}

	{

int SEGMENT = 36;

	m_Angle += XMConvertToRadians(1.0f);

	m_pSampler = NULL;

	HRESULT              hr;

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyTexture(tex);

			case SDLK_LEFT:

	cbDesc.CPUAccessFlags = 0;

	vbDesc.StructureByteStride = 0;

 */





		return hr;

	ConstantLight    pntLight; //点光源

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	m_Viewport.TopLeftY = 0;

	vrData.pSysMem = &pVList[0];

		size_t index_offset = 0;  // インデントのオフセット

CD3DTest::CD3DTest()

		}



};

};

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

	//Key press surfaces constants

		KEY_PRESS_SURFACE_DOWN,

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;

	m_pVertexShader = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pMatrixBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		&m_pDevice,

	//First we need to start up SDL, and make sure it went ok

	SDL_DestroyWindow(win);

	//ビューポート設定

{

	//深度ステンシルバッファ作成



	return 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		&shapes,

		if (e.type == SDL_QUIT)

	for (size_t s = 0; s < shapes.size(); s++)

#include <iostream>

	for (int j = 0; j < icount; j++)



				// access to vertex

		R"(cube.obj)");



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		}

};





	m_Viewport.MaxDepth = 1.0f;

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_UP,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	enum KeyPressSurfaces

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMFLOAT4 ambient;           //環境(r,g,b)

		&materials,

	CRect                rect;

		return 1;



	scDesc.SampleDesc.Count = 1;

{

	dsDesc.Texture2D.MipSlice = 0;

	D3D11_SAMPLER_DESC smpDesc;



	{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	//Clean up our objects and quit

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pInputLayout = NULL;

#endif

void CD3DTest::Render()

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	irData.SysMemSlicePitch = 0;

	CRect                rect;

			case SDLK_LEFT:

		flags,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pSampler = NULL;

}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{

	ConstantMatrixBuffer cmb;

	//テクスチャ読み込み

		&attrib,

	m_Viewport.TopLeftY = 0;

				WORD index = idx.vertex_index;

	for (int j = 0; j < icount; j++)

	m_pInputLayout = NULL;

		// Loop over faces(polygon)


