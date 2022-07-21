	irData.SysMemPitch = 0;

};

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}

		SDL_Delay(1000);

	XMFLOAT4 specular;          //反射(r,g,b)

	ConstantMatrixBuffer cmb;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

struct ConstantLightBuffer {

};

#include <SDL.h>

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			index_offset += num_vertices;

		//User requests quit

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{

		return hr;

	}



		pIList[j] = indexList[j];

		SDL_Delay(1000);



	if (FAILED(hr))



		KEY_PRESS_SURFACE_DOWN,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点シェーダー生成

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}

		//User presses a key



	m_pSwapChain->Present(0, 0);

};

		&scDesc,

	SAFE_RELEASE(m_pMatrixBuffer);



	}*/

	//インデックスバッファ作成

		return hr;

		{

	vbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	delete[] pIList;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

/*



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	SAFE_RELEASE(m_pTexture);

	SDL_DestroyRenderer(ren);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_DestroyWindow(win);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ID3D11Texture2D* pBackBuffer;



	SAFE_RELEASE(m_pTexture);

	m_Viewport.TopLeftX = 0;



	scDesc.OutputWindow = hwnd;





	}

	cbDesc.CPUAccessFlags = 0;

	m_pIndexBuffer = NULL;



	//頂点バッファ作成

	UINT offsets = 0;

		KEY_PRESS_SURFACE_TOTAL



	bool ret = tinyobj::LoadObj(

	txDesc.Height = rect.Height();

	//ビューポート設定

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pTextureView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		delete[] pVList;

	txDesc.SampleDesc.Quality = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_RIGHT,

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pPixelShader);

 */



		// Loop over faces(polygon)

	std::string inputfile = "test.obj";

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	{

	Vertex* pVList = new Vertex[vcount];



	SAFE_RELEASE(m_pTextureView);

#include <SDL.h>

struct ConstantLightBuffer {

			{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

};

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		KEY_PRESS_SURFACE_TOTAL

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

		&level,

	UINT offsets = 0;

	SDL_DestroyRenderer(ren);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ibDesc.CPUAccessFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		if (!ret)

CD3DTest::CD3DTest()

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

	std::string error;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	tinyobj::attrib_t attrib;

	SDL_Quit();

	m_Viewport.Width = (FLOAT)rect.Width();



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_BUFFER_DESC vbDesc;

	D3D_FEATURE_LEVEL level;

		//User presses a key

	//vector<WORD> index_t;

	}

		return hr;

	WORD* pIList = new WORD[icount];

#endif



			{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))



	HRESULT              hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.StructureByteStride = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				WORD index = idx.vertex_index;

	tinyobj::ObjReader reader;

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	irData.SysMemPitch = 0;

			}

	}

	//ピクセルシェーダー生成

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

	HRESULT              hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			{

	scDesc.Windowed = TRUE;

	scDesc.BufferDesc.Width = rect.Width();

		flags,

		D3D_DRIVER_TYPE_HARDWARE,



	{



	m_Angle += XMConvertToRadians(1.0f);

			{

	SAFE_RELEASE(m_pInputLayout);

		{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pLightBuffer);

		// Loop over faces(polygon)

struct ConstantLight {

 */

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	SDL_DestroyRenderer(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	//Key press surfaces constants

	irData.SysMemPitch = 0;

		delete[] pVList;

	dsDesc.Format = txDesc.Format;



			break;

		pIList[j] = indexList[j];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.BufferCount = 1;

		&scDesc,

	m_pVertexBuffer = NULL;

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			break;

	//インデックスバッファ作成

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	std::string imagePath = "hello.bmp";

	XMFLOAT4X4 world;

		//User presses a key

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		{

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pDepthStencilTexture);

	//Create Index



	DXGI_SWAP_CHAIN_DESC scDesc;

		}

struct ConstantLight {

	return hr;

		m_pImmediateContext->ClearState();



	m_IndexCount = icount;

		return hr;

	return 0;

 * Lesson 1: Hello World!

	vrData.pSysMem = &pVList[0];



	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderClear(ren);

	m_pInputLayout = NULL;



	vrData.SysMemSlicePitch = 0;

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pRenderTargetView);

#endif



		return 1;

		else if (e.type == SDL_KEYDOWN)

	//Clean up our objects and quit



		KEY_PRESS_SURFACE_RIGHT,

	Vertex* pVList = new Vertex[vcount];

	ConstantMaterial material; //物体の質感

	txDesc.MiscFlags = 0;

	Release();

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pDepthStencilView);



	while (SDL_PollEvent(&e) != 0)

	int     vcount = vertexlist.size();



	{

		&attrib,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D11_SUBRESOURCE_DATA vrData;

			}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

			case SDLK_LEFT:

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			for (size_t v = 0; v < fv; v++)

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pMatrixBuffer);

}

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				break;



	//First we need to start up SDL, and make sure it went ok



				tinyobj::real_t tx =

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

	txDesc.Height = rect.Height();



		// Loop over faces(polygon)

	cbDesc.MiscFlags = 0;

				break;

	auto& materials = reader.GetMaterials();

		SDL_RenderPresent(ren);

		return hr;



		KEY_PRESS_SURFACE_DEFAULT,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

			// Loop over vertices in the face.

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	::GetClientRect(hwnd, &rect);

	vector<Vertex> vertexlist;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.Windowed = TRUE;

		SDL_RenderClear(ren);

			index_offset += fv;

	m_pRenderTargetView = NULL;

		return hr;

}


	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//頂点レイアウト作成

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			break;

		KEY_PRESS_SURFACE_TOTAL

	DXGI_SWAP_CHAIN_DESC scDesc;

	}

	if (m_pImmediateContext)

	auto& materials = reader.GetMaterials();



	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok

		if (!ret)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	SAFE_RELEASE(m_pImmediateContext);

{

	for (size_t s = 0; s < shapes.size(); s++)

			exit(1);

	ibDesc.MiscFlags = 0;

/*



	SAFE_RELEASE(m_pSampler);

		return hr;



	tinyobj::ObjReader reader;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.eyePos, eye);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_VertexCount = vcount;

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		KEY_PRESS_SURFACE_UP,

	txDesc.Height = rect.Height();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pPixelShader);

	}



	XMFLOAT4X4 world;

		return hr;



				// access to vertex



	cbDesc.MiscFlags = 0;

	auto& materials = reader.GetMaterials();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	float    farZ = 100.0f;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	// Loop over shapes

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;



		KEY_PRESS_SURFACE_UP,



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		exit(1);





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

	m_pSwapChain = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pTextureView);

		return hr;



	m_VertexCount = 0;

	SDL_DestroyWindow(win);

	};

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pVertexBuffer);

				vertex.push_back(vertex_tmp);

			{

				tinyobj::real_t ty =

			// Loop over vertices in the face.



		KEY_PRESS_SURFACE_UP,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				break;

	return 0;

	if (FAILED(hr))



		}

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	scDesc.SampleDesc.Count = 1;



	//インデックスバッファ作成

	m_IndexCount = icount;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



{

			//Select surfaces based on key press

	delete[] pIList;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;



	cbDesc.MiscFlags = 0;





	{

		&m_pDevice,



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





	ID3D11Texture2D* pBackBuffer;

	//深度ステンシルバッファ作成

int main(int, char**)

	m_Viewport.MaxDepth = 1.0f;

}

#include <iostream>

		return hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

{

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

		SDL_RenderClear(ren);

	txDesc.MipLevels = 1;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	{

	bool ret = tinyobj::LoadObj(

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	std::string imagePath = "hello.bmp";

	}





		else if (e.type == SDL_KEYDOWN)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



		SDL_RenderClear(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

			//Select surfaces based on key press



	XMFLOAT4X4 projection;



		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

int main(int, char**)

		SDL_RenderPresent(ren);

	auto& attrib = reader.GetAttrib();



	//vector<Vertex> vertex_t;

	txDesc.SampleDesc.Count = 1;



		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



				break;

		return 1;

			case SDLK_RIGHT:







	{

	SAFE_RELEASE(m_pVertexBuffer);

	LoadObj(vertexlist, indexList);

		// Loop over faces(polygon)

			switch (e.key.keysym.sym)

	D3D11_BUFFER_DESC cbDesc;

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ConstantMatrixBuffer cmb;



		&m_pImmediateContext);

		flags,



	//ピクセルシェーダー生成

		KEY_PRESS_SURFACE_LEFT,

		if (!ret)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Quit();

	auto& attrib = reader.GetAttrib();

CD3DTest::~CD3DTest()

	ConstantLight    pntLight; //点光源

			}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	CRect                rect;

	}

	SDL_DestroyRenderer(ren);

};

	m_VertexCount = 0;

	cbDesc.StructureByteStride = 0;

	{

	m_pIndexBuffer = NULL;



	{

	{



	}

	UINT flags = 0;

		R"(cube.obj)");



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		if (!ret)



	SAFE_RELEASE(m_pTextureView);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vector<WORD> indexList;

		pIList[j] = indexList[j];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_TOTAL

void CD3DTest::Release()





	return;

	tinyobj::ObjReaderConfig reader_config;

{



		}



	m_Viewport.Height = (FLOAT)rect.Height();

	}

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SDL_DestroyWindow(win);

#include <iostream>



		KEY_PRESS_SURFACE_DEFAULT,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SAFE_RELEASE(m_pTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}
	//ビューポート設定

#include <iostream>

	//vector<WORD> index_t;

}



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			default:

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}*/

			case SDLK_RIGHT:

		return hr;

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (m_pImmediateContext)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	HRESULT              hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

			case SDLK_LEFT:

	//ビューポート設定



	if (FAILED(hr))

	}

		return hr;

	scDesc.BufferDesc.Height = rect.Height();

	txDesc.MipLevels = 1;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//頂点バッファ作成

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pRenderTargetView);

	UINT offsets = 0;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

{

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



int main(int, char**)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pTextureView);

	tinyobj::ObjReaderConfig reader_config;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		D3D11_SDK_VERSION,

};

	ibDesc.StructureByteStride = 0;



		return hr;







	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	std::string imagePath = "hello.bmp";



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&attrib,

	XMFLOAT4 pos;               //座標(x,y,z)

	Vertex* pVList = new Vertex[vcount];

	std::vector<tinyobj::material_t> materials;

		{



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		SDL_Delay(1000);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		pIList[j] = indexList[j];

		NULL,

		if (!reader.Error().empty())

			index_offset += fv;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	ConstantLightBuffer clb;

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pInputLayout);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

	vbDesc.MiscFlags = 0;

	for (int i = 0; i < vcount; i++)

	m_pIndexBuffer = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	while (SDL_PollEvent(&e) != 0)

	Release();

	m_pSampler = NULL;

	dsDesc.Format = txDesc.Format;

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	delete[] pVList;

	Vertex* pVList = new Vertex[vcount];



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

	//Key press surfaces constants

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

struct ConstantMaterial {

	}

	D3D11_BUFFER_DESC ibDesc;



		&attrib,



		return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	enum KeyPressSurfaces

		return hr;

		{

#include "DirectXManager.h"

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pVertexBuffer);

			break;

	D3D11_BUFFER_DESC vbDesc;



		if (e.type == SDL_QUIT)



	pBackBuffer->Release();

	irData.SysMemSlicePitch = 0;

	}

	scDesc.BufferDesc.Width = rect.Width();

		&m_pImmediateContext);

#include "DirectXManager.h"

	}



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

{

			{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	int     vcount = vertexlist.size();

	delete[] pIList;

	m_pPixelShader = NULL;

	m_pRenderTargetView = NULL;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	if (FAILED(hr))

	{



	m_pDevice = NULL;



	std::string inputfile = "test.obj";

	m_pTexture = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		&m_pSwapChain,

				break;

	Release();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			int num_vertices = shape.mesh.num_face_vertices[f];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//頂点バッファ作成

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	XMFLOAT4         eyePos;   //視点座標

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			case SDLK_LEFT:

	{

	{



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				// access to vertex

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				WORD index = idx.vertex_index;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	return 0;

	scDesc.BufferCount = 1;

	m_pSwapChain->Present(0, 0);



	//Create Index

			case SDLK_RIGHT:

			case SDLK_DOWN:



	SAFE_RELEASE(m_pDevice);



	XMFLOAT4 specular;          //反射(r,g,b)

	m_Viewport.MinDepth = 0.0f;

		delete[] pIList;

	{



	for (int i = 0; i < vcount; i++)

	m_pDepthStencilView = NULL;

	std::vector<tinyobj::shape_t> shapes;





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	D3D11_SUBRESOURCE_DATA irData;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	pBackBuffer->Release();

			switch (e.key.keysym.sym)

		SDL_RenderPresent(ren);

	//頂点バッファ作成

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				// access to vertex

	m_pIndexBuffer = NULL;

	return hr;



	scDesc.OutputWindow = hwnd;

	m_Viewport.MaxDepth = 1.0f;

				vertex.push_back(vertex_tmp);

	}

		if (!ret)

	cbDesc.CPUAccessFlags = 0;



	m_pInputLayout = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	irData.SysMemPitch = 0;

	if (FAILED(hr))

	Release();

using std::cout; using std::endl;

	SDL_DestroyWindow(win);

	m_pTextureView = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pInputLayout);

	m_pLightBuffer = NULL;

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		D3D_DRIVER_TYPE_HARDWARE,

	{

	reader_config.mtl_search_path = "./"; // Path to material files

		&m_pSwapChain,

	scDesc.SampleDesc.Quality = 0;

		// Loop over faces(polygon)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	txDesc.Width = rect.Width();

			index_offset += fv;

	XMFLOAT4 specular;          //反射(r,g,b)

		{



	m_pRenderTargetView = NULL;



{

	scDesc.Windowed = TRUE;

	Release();

	m_pSwapChain = NULL;

	ConstantLight    pntLight; //点光源

		m_pImmediateContext->ClearState();



	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);



	for (int i = 0; i < 3; i++)

		{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ConstantLight    pntLight; //点光源

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

void CD3DTest::Release()



	::GetClientRect(hwnd, &rect);

	for (size_t s = 0; s < shapes.size(); s++)

		{

}

#endif



	SDL_DestroyWindow(win);

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

			case SDLK_UP:

	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}

	m_pRenderTargetView = NULL;

#include <iostream>

			}

	Vertex* pVList = new Vertex[vcount];



		return hr;

	scDesc.OutputWindow = hwnd;

{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

CD3DTest::~CD3DTest()

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}*/

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	delete[] pIList;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_Viewport.Width = (FLOAT)rect.Width();

		else if (e.type == SDL_KEYDOWN)

		SDL_RenderPresent(ren);

	for (int j = 0; j < icount; j++)

		return hr;

	int     vcount = vertexlist.size();



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

		{

	SAFE_RELEASE(m_pInputLayout);

	SDL_DestroyRenderer(ren);

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

void CD3DTest::Release()

			default:

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	DXGI_SWAP_CHAIN_DESC scDesc;

		size_t index_offset = 0;  // インデントのオフセット

	//ピクセルシェーダー生成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		pLevels,

			}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_Viewport.TopLeftY = 0;

	{

			for (size_t v = 0; v < fv; v++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.MiscFlags = 0;

	D3D11_TEXTURE2D_DESC txDesc;



	/*

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (m_pImmediateContext)

	ConstantMatrixBuffer cmb;

};



		&error,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	if (m_pImmediateContext)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 world;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//インデックスバッファ作成

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderPresent(ren);

	m_pSwapChain->Present(0, 0);

	txDesc.Width = rect.Width();

	m_Viewport.MinDepth = 0.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.MiscFlags = 0;

	UINT flags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	txDesc.CPUAccessFlags = 0;

	m_pLightBuffer = NULL;





	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

using std::cout; using std::endl;



	m_Angle += XMConvertToRadians(1.0f);

	txDesc.Height = rect.Height();

	//Clean up our objects and quit

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		}

 */



	m_pImmediateContext = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#include <SDL.h>

				break;

	return hr;

	ConstantLight    pntLight; //点光源

#include <SDL.h>

		cout << "SDL_INIT_ERROR" << endl;

	scDesc.OutputWindow = hwnd;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	cbDesc.MiscFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext = NULL;

				// access to vertex

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pSampler = NULL;

			default:

		return hr;



struct ConstantLightBuffer {

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();

	//インデックスバッファ作成

	{



			index_offset += fv;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//First we need to start up SDL, and make sure it went ok

	for (int i = 0; i < 3; i++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				// access to vertex

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

#include <iostream>

		size_t index_offset = 0;  // インデントのオフセット

	//テクスチャ読み込み

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

CD3DTest::~CD3DTest()

	CRect                rect;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		&level,

	//vector<Vertex> vertex_t;

	/*







		&m_pImmediateContext);

#include <iostream>

	m_pTextureView = NULL;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	m_pSampler = NULL;

		&error,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyRenderer(ren);

#include "DirectXManager.h"

	if (FAILED(hr))

		SDL_RenderClear(ren);

	return;

void CD3DTest::Release()

	//Create Index

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

 */

void CD3DTest::Render()

	UINT offsets = 0;



	return;

	return 0;

	}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

 */

			case SDLK_DOWN:



		{

	XMFLOAT4 specular;          //反射(r,g,b)





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	//vector<WORD> index_t;



	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	WORD   icount = indexList.size();

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

	UINT strides = sizeof(Vertex);

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pVertexBuffer);



	{

	std::vector<tinyobj::shape_t> shapes;

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	Release();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SDL_DestroyRenderer(ren);

	txDesc.SampleDesc.Quality = 0;

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pImmediateContext);

{

				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);



struct ConstantLightBuffer {

	SAFE_RELEASE(m_pLightBuffer);

	vector<WORD> indexList;



		delete[] pVList;

CD3DTest::CD3DTest()

}

	HRESULT              hr;

	CRect                rect;

	SDL_DestroyRenderer(ren);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<WORD> indexList;







	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))



	int     vcount = vertexlist.size();

		&error,

	ibDesc.CPUAccessFlags = 0;



	ibDesc.CPUAccessFlags = 0;

	return;

{

		delete[] pVList;

	ConstantMatrixBuffer cmb;

	// Loop over shapes

	ibDesc.MiscFlags = 0;



		KEY_PRESS_SURFACE_DEFAULT,

	if (!reader.Warning().empty())

		&m_pDevice,

		KEY_PRESS_SURFACE_LEFT,

	irData.pSysMem = &pIList[0];

	{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			// Loop over vertices in the face.



	cbDesc.MiscFlags = 0;

		//User presses a key



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

struct ConstantLight {

				indexlist.push_back(idx.vertex_index);

			case SDLK_LEFT:



struct ConstantLightBuffer {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



};

	m_Viewport.TopLeftX = 0;

	cbDesc.StructureByteStride = 0;

{

	SDL_FreeSurface(suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return hr;



	return 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{

	// Loop over shapes

			}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			{

		SDL_RenderClear(ren);

void CD3DTest::Release()

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

};

	}



		// Loop over faces(polygon)

				// access to vertex

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pImmediateContext);

				break;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	dsDesc.Texture2D.MipSlice = 0;

		&m_pImmediateContext);

				// access to vertex

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pTexture);

	std::string error;

		SDL_RenderClear(ren);

		{

HRESULT CD3DTest::Create(HWND hwnd)

	auto& shapes = reader.GetShapes();

			// Loop over vertices in the face.

};

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	m_Viewport.MaxDepth = 1.0f;



	}

	auto& materials = reader.GetMaterials();

	m_pVertexShader = NULL;

		exit(1);

				break;

	vbDesc.MiscFlags = 0;

		}

	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

}



};



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4X4 world;



	SDL_DestroyTexture(tex);

	SDL_DestroyRenderer(ren);

		&attrib,



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			{

		exit(1);

	//Key press surfaces constants

struct ConstantLightBuffer {



	XMFLOAT4 specular;          //反射(r,g,b)

}

	std::string inputfile = "test.obj";

			}

	SDL_DestroyRenderer(ren);

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

		SDL_RenderClear(ren);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_VertexCount = 0;



	m_Viewport.MaxDepth = 1.0f;

	m_pSwapChain->Present(0, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))

};

			case SDLK_LEFT:

	float    fov = XMConvertToRadians(20.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		flags,

		D3D_DRIVER_TYPE_HARDWARE,

	for (size_t s = 0; s < shapes.size(); s++)



		return hr;

	}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	UINT offsets = 0;

		R"(cube.obj)");

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMFLOAT4X4 view;

		&error,

	std::string imagePath = "hello.bmp";

				vertex.push_back(vertex_tmp);

	}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pTexture);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.SampleDesc.Quality = 0;

	while (SDL_PollEvent(&e) != 0)





				indexlist.push_back(idx.vertex_index);

	tinyobj::ObjReader reader;

	txDesc.SampleDesc.Quality = 0;

	for (int i = 0; i < vcount; i++)



int SEGMENT = 36;

	auto& attrib = reader.GetAttrib();

struct ConstantMatrixBuffer {

	std::string inputfile = "test.obj";



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

			case SDLK_LEFT:





		&scDesc,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//定数バッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.TopLeftY = 0;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_LEFT,



	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//ピクセルシェーダー生成

	auto& attrib = reader.GetAttrib();

}
	irData.SysMemSlicePitch = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&attrib,



	Release();

	SAFE_RELEASE(m_pIndexBuffer);

		pLevels,





	SAFE_RELEASE(m_pRenderTargetView);

		return 1;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	/*

	float    farZ = 100.0f;

		return hr;



	//Key press surfaces constants

		return hr;

	//Key press surfaces constants

	if (FAILED(hr))

			}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.MiscFlags = 0;

int SEGMENT = 36;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	UINT flags = 0;



	Release();





		return hr;

	return 0;

	}

	// Loop over shapes

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyTexture(tex);

	D3D11_SUBRESOURCE_DATA irData;

		return hr;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantMaterial {

{



		&level,





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.MiscFlags = 0;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Key press surfaces constants

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	float    farZ = 100.0f;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	{

	if (FAILED(hr))



	if (FAILED(hr))

	SDL_Quit();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	std::string error;





	{

			case SDLK_DOWN:

	//深度ステンシルバッファ作成

		R"(cube.obj)");



	SAFE_RELEASE(m_pInputLayout);



{

	vrData.SysMemSlicePitch = 0;

	vbDesc.StructureByteStride = 0;

	// Loop over shapes

			{

	txDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		return hr;

	m_pMatrixBuffer = NULL;

		SDL_RenderPresent(ren);

	ibDesc.CPUAccessFlags = 0;

};

	//インデックスバッファ作成

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	XMFLOAT4 specular;          //反射(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		SDL_RenderPresent(ren);

{





	//Clean up our objects and quit

		return hr;

	ID3D11Texture2D* pBackBuffer;

				indexlist.push_back(idx.vertex_index);

			index_offset += num_vertices;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				WORD index = idx.vertex_index;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	reader_config.mtl_search_path = "./"; // Path to material files

	m_Viewport.Height = (FLOAT)rect.Height();

	CRect                rect;





}



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.SampleDesc.Count = 1;

		pVList[i] = vertexlist[i];

	//Create Index

	m_pImmediateContext = NULL;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Angle += XMConvertToRadians(1.0f);

};

#define TINYOBJLOADER_IMPLEMENTATION

		else if (e.type == SDL_KEYDOWN)

	SDL_FreeSurface(suf);



	m_Viewport.Height = (FLOAT)rect.Height();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		cout << "SDL_INIT_ERROR" << endl;

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	enum KeyPressSurfaces



		flags,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;





	m_Viewport.Width = (FLOAT)rect.Width();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				vertex.push_back(vertex_tmp);

};

	UINT strides = sizeof(Vertex);





#include <SDL.h>



	txDesc.MipLevels = 1;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Event e;

};

	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

 * Lesson 1: Hello World!

	std::string inputfile = "test.obj";

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

void CD3DTest::Render()

	if (FAILED(hr))

	}

		SDL_RenderPresent(ren);



	SDL_Quit();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

}

	SAFE_RELEASE(m_pInputLayout);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vrData.SysMemSlicePitch = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		&error,

				indexlist.push_back(idx.vertex_index);

	SDL_DestroyTexture(tex);

				break;

			}

			exit(1);





	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//ピクセルシェーダー生成

	for (int i = 0; i < vcount; i++)

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Viewport.TopLeftY = 0;

	//頂点レイアウト作成

				indexlist.push_back(idx.vertex_index);



	SDL_DestroyWindow(win);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	float    farZ = 100.0f;





	//頂点シェーダー生成

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

using std::cout; using std::endl;

	SAFE_RELEASE(m_pVertexShader);

	//Create Index

				break;

{



#include <SDL.h>

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





	m_pImmediateContext = NULL;

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string error;

	m_pDepthStencilTexture = NULL;

	m_pInputLayout = NULL;



	m_pRenderTargetView = NULL;

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferCount = 1;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int main(int, char**)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	SDL_Event e;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//First we need to start up SDL, and make sure it went ok



/*

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pImmediateContext);



	irData.SysMemPitch = 0;

}

 * Lesson 1: Hello World!

	for (int j = 0; j < icount; j++)

		{



		//User requests quit

}

	if (!error.empty())

};

	scDesc.OutputWindow = hwnd;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

void CD3DTest::Render()

	SAFE_RELEASE(m_pVertexShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	float    nearZ = 0.1f;



	SAFE_RELEASE(m_pVertexShader);

	float    nearZ = 0.1f;

	//vector<WORD> index_t;

	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);



		m_pImmediateContext->ClearState();



		if (!reader.Error().empty())

#include <iostream>

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

struct ConstantMatrixBuffer {

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		{

	}

	m_Viewport.MaxDepth = 1.0f;



	Release();

			}

	m_pMatrixBuffer = NULL;

};

#include <SDL.h>

	m_Viewport.MaxDepth = 1.0f;

	//頂点レイアウト作成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	txDesc.MipLevels = 1;

	vbDesc.StructureByteStride = 0;

	for (int i = 0; i < vcount; i++)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	std::string imagePath = "hello.bmp";



	}

	LoadObj(vertexlist, indexList);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	bool ret = tinyobj::LoadObj(





		D3D_DRIVER_TYPE_HARDWARE,





	// Loop over shapes

		{

	}

				WORD index = idx.vertex_index;

	m_pTexture = NULL;



	ConstantMatrixBuffer cmb;

	scDesc.BufferDesc.Height = rect.Height();

		flags,



	m_pDepthStencilView = NULL;

				tinyobj::real_t ty =

	if (!error.empty())

	return;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pRenderTargetView);



		SDL_Delay(1000);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	auto& attrib = reader.GetAttrib();

	//First we need to start up SDL, and make sure it went ok



		return hr;



	SAFE_RELEASE(m_pDepthStencilView);

	//頂点レイアウト作成

		delete[] pIList;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			}

	txDesc.MipLevels = 1;



	{



			case SDLK_RIGHT:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		exit(1);

	if (FAILED(hr))

#endif



	m_pSwapChain = NULL;





CD3DTest::CD3DTest()

#include <SDL.h>

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	SDL_DestroyTexture(tex);

			case SDLK_RIGHT:

		return hr;



		return hr;

	txDesc.Width = rect.Width();

#define TINYOBJLOADER_IMPLEMENTATION

	txDesc.SampleDesc.Quality = 0;

	cbDesc.CPUAccessFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		cout << "SDL_INIT_ERROR" << endl;



	WORD   icount = indexList.size();

	if (FAILED(hr))

				indexlist.push_back(index);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ID3D11Texture2D* pBackBuffer;

	std::string error;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			}

			case SDLK_DOWN:

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

struct ConstantLight {

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	vbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_RIGHT,



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	float    nearZ = 0.1f;

	pBackBuffer->Release();



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	Release();

	UINT flags = 0;

		m_pImmediateContext->ClearState();

	//頂点レイアウト作成

	SDL_Event e;

		return hr;

	delete[] pIList;





#endif

	scDesc.SampleDesc.Quality = 0;

			}



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				// access to vertex

};

	/*

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		delete[] pIList;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



		return hr;

	m_VertexCount = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//深度ステンシルバッファ作成

	float    farZ = 100.0f;



		else if (e.type == SDL_KEYDOWN)

	m_IndexCount = icount;

HRESULT CD3DTest::Create(HWND hwnd)

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		&level,

			for (size_t v = 0; v < num_vertices; v++)

	UINT offsets = 0;

	m_VertexCount = vcount;

		{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	for (const auto& shape : shapes)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.OutputWindow = hwnd;

	{



	m_IndexCount = 0;

	std::string error;

{

	scDesc.BufferDesc.Height = rect.Height();

			for (size_t v = 0; v < fv; v++)

	vrData.SysMemSlicePitch = 0;

	vector<WORD> indexList;

	auto& shapes = reader.GetShapes();



			break;

				tinyobj::real_t ty =

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pVertexBuffer = NULL;

		&shapes,

	XMFLOAT4         ambient;  //環境光(r,g,b)

		// Loop over faces(polygon)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);



	}

{



	scDesc.Windowed = TRUE;

	XMFLOAT4 ambient;           //環境(r,g,b)

	//Clean up our objects and quit

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pSampler);

	scDesc.OutputWindow = hwnd;

		exit(1);

	if (FAILED(hr))



	}

	//Vertex* pVList = new Vertex[vcount];



CD3DTest::CD3DTest()

	txDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))



		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		D3D_DRIVER_TYPE_HARDWARE,

				vertex.push_back(vertex_tmp);

	ConstantLightBuffer clb;

	ibDesc.StructureByteStride = 0;



	dsDesc.Format = txDesc.Format;

}

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		}



	ibDesc.ByteWidth = sizeof(WORD) * icount;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

using std::cout; using std::endl;

	UINT strides = sizeof(Vertex);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

int main(int, char**)

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	WORD   icount = indexList.size();

	if (FAILED(hr))

	m_pTexture = NULL;

struct ConstantMaterial {

#endif

	WORD* pIList = new WORD[icount];

		pIList[j] = indexList[j];

	Vertex* pVList = new Vertex[vcount];

	ConstantLight    pntLight; //点光源

	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];









	}



	DXGI_SWAP_CHAIN_DESC scDesc;

	delete[] pIList;

	}



			case SDLK_RIGHT:

	}*/

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			break;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#include "DirectXManager.h"

		size_t index_offset = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	m_pVertexShader = NULL;

	UINT offsets = 0;

{

		}



		KEY_PRESS_SURFACE_UP,

	m_pDevice = NULL;

				tinyobj::real_t tx =

	cbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		KEY_PRESS_SURFACE_TOTAL

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pDepthStencilTexture = NULL;







	//頂点シェーダー生成

	m_pTexture = NULL;



			}

#include <SDL.h>

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	return 0;

}

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	if (FAILED(hr))

#include <SDL.h>

	SAFE_RELEASE(m_pPixelShader);

				// access to vertex

	scDesc.Windowed = TRUE;

		return hr;



	std::string imagePath = "hello.bmp";

		flags,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//頂点レイアウト作成

#include "DirectXManager.h"

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	auto& materials = reader.GetMaterials();

	XMFLOAT4 specular;          //反射(r,g,b)

		}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//頂点バッファ作成

}

		return 1;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#include <SDL.h>

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pSwapChain->Present(0, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		KEY_PRESS_SURFACE_RIGHT,

	//頂点シェーダー生成

	txDesc.MipLevels = 1;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{



			{

	auto& materials = reader.GetMaterials();

	XMFLOAT4X4 projection;

	txDesc.Width = rect.Width();

#endif

#include <iostream>

		{

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		SDL_RenderClear(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.ArraySize = 1;

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	while (SDL_PollEvent(&e) != 0)

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

		KEY_PRESS_SURFACE_UP,

		return hr;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pPixelShader);

	scDesc.OutputWindow = hwnd;

	}

		}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	m_pRenderTargetView = NULL;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			int num_vertices = shape.mesh.num_face_vertices[f];

				// access to vertex

	float    nearZ = 0.1f;

				break;





	m_pDepthStencilView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_FreeSurface(suf);

			case SDLK_UP:

	SAFE_RELEASE(m_pTexture);

		&materials,

	SDL_Quit();

#ifdef _DEBUG

/*

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		KEY_PRESS_SURFACE_RIGHT,

};

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

			case SDLK_RIGHT:

	//Clean up our objects and quit

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	txDesc.MipLevels = 1;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_FreeSurface(bmp);

		KEY_PRESS_SURFACE_DEFAULT,

				vertex.push_back(vertex_tmp);

	if (m_pImmediateContext)



	m_pLightBuffer = NULL;

	scDesc.BufferDesc.Width = rect.Width();



		SDL_RenderClear(ren);

		}

	if (FAILED(hr))



	{

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t tx =

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	return 0;

};

	delete[] pVList;

	vrData.SysMemSlicePitch = 0;

	m_pPixelShader = NULL;

		return hr;

			}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pVertexShader);

	std::string inputfile = "test.obj";



		return hr;

			for (size_t v = 0; v < fv; v++)

	m_pVertexBuffer = NULL;

		size_t index_offset = 0;

	//Clean up our objects and quit



		D3D_DRIVER_TYPE_HARDWARE,

		}

	cbDesc.MiscFlags = 0;



	//vector<WORD> index_t;

	m_Viewport.TopLeftY = 0;

		pIList[j] = indexList[j];

	scDesc.SampleDesc.Count = 1;

			{

			// Loop over vertices in the face.

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (!reader.Warning().empty())



	m_pLightBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SAFE_RELEASE(m_pDepthStencilTexture);

	::GetClientRect(hwnd, &rect);

#define TINYOBJLOADER_IMPLEMENTATION

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



{

	ConstantLight    pntLight; //点光源

	WORD   icount = indexList.size();

			case SDLK_RIGHT:

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_FreeSurface(bmp);



#include <SDL.h>



	m_VertexCount = vcount;

		if (!ret)

	vrData.SysMemPitch = 0;

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.material.specular, materialSpecular);

int main(int, char**)

	//vector<Vertex> vertex_t;



int main(int, char**)



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_FreeSurface(suf);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

struct ConstantLightBuffer {



struct ConstantLightBuffer {

	SAFE_RELEASE(m_pVertexShader);

	ibDesc.MiscFlags = 0;



	SDL_FreeSurface(suf);

	}

#include <iostream>

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	D3D_FEATURE_LEVEL level;

	//インデックスバッファ作成

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



			{



	SDL_FreeSurface(bmp);

		pIList[j] = indexList[j];

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMatrixBuffer cmb;



		return hr;

		}

	}



	scDesc.SampleDesc.Quality = 0;

	SDL_DestroyWindow(win);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		}



	SAFE_RELEASE(m_pMatrixBuffer);

	m_IndexCount = 0;

int main(int, char**)

	ConstantMatrixBuffer cmb;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

}
	if (FAILED(hr))

			{

		KEY_PRESS_SURFACE_RIGHT,

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		{

	SDL_FreeSurface(bmp);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			case SDLK_RIGHT:

	XMStoreFloat4(&clb.eyePos, eye);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

#define TINYOBJLOADER_IMPLEMENTATION

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		else if (e.type == SDL_KEYDOWN)

CD3DTest::CD3DTest()

	txDesc.Height = rect.Height();

	{



	Release();

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pInputLayout);

	while (SDL_PollEvent(&e) != 0)

		&m_pImmediateContext);

	scDesc.BufferDesc.Height = rect.Height();

#define TINYOBJLOADER_IMPLEMENTATION

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	/*

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	}



	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

	WORD   icount = indexList.size();

	txDesc.SampleDesc.Quality = 0;

	std::vector<tinyobj::shape_t> shapes;

struct ConstantMaterial {

int main(int, char**)



	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



		return hr;

	WORD   icount = indexList.size();



	m_Viewport.MaxDepth = 1.0f;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pLightBuffer);

			{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	delete[] pIList;



	float    farZ = 100.0f;

		m_pImmediateContext->ClearState();

	pBackBuffer->Release();

		}

	}

	return 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





struct ConstantLight {

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pSampler = NULL;

		return hr;

	if (!error.empty())

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

	//Key press surfaces constants

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pIndexBuffer = NULL;

	m_IndexCount = icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	//頂点バッファ作成



	vrData.SysMemPitch = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				WORD index = idx.vertex_index;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				break;

	m_Viewport.TopLeftX = 0;



	delete[] pVList;

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

{

	XMFLOAT4 specular;          //反射(r,g,b)



	m_pRenderTargetView = NULL;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&materials,

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



		if (!reader.Error().empty())

	XMFLOAT4         ambient;  //環境光(r,g,b)



	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

		if (!ret)

	XMFLOAT4X4 view;

HRESULT CD3DTest::Create(HWND hwnd)



		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

void CD3DTest::Render()

			}

		// Loop over faces(polygon)



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		KEY_PRESS_SURFACE_DEFAULT,

	/*

		return hr;



	SAFE_RELEASE(m_pVertexShader);







	if (FAILED(hr))





	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

};

	//Vertex* pVList = new Vertex[vcount];

	for (size_t s = 0; s < shapes.size(); s++)

		&m_pImmediateContext);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pRenderTargetView = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		&error,



	}

	LoadObj(vertexlist, indexList);

	}

		pVList[i] = vertexlist[i];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	std::string inputfile = "test.obj";



}
	SDL_Event e;

			case SDLK_DOWN:

	//深度ステンシルバッファ作成

void CD3DTest::Render()

	irData.SysMemSlicePitch = 0;

		&level,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	UINT strides = sizeof(Vertex);



			exit(1);

	for (const auto& shape : shapes)



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pDepthStencilView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vrData.pSysMem = &pVList[0];

}

	//Key press surfaces constants

{

		&shapes,



		R"(cube.obj)");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (!reader.Warning().empty())

			case SDLK_UP:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

CD3DTest::~CD3DTest()





				tinyobj::real_t ty =

	XMFLOAT4 ambient;           //環境(r,g,b)

		KEY_PRESS_SURFACE_DEFAULT,

			default:

	//Create Index

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

};

	return;

	WORD   icount = indexList.size();



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{



	}

	m_pLightBuffer = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		&m_pSwapChain,

	float    farZ = 100.0f;

	dsDesc.Texture2D.MipSlice = 0;

		}

	tinyobj::attrib_t attrib;

	SDL_DestroyRenderer(ren);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#include <iostream>

	SAFE_RELEASE(m_pInputLayout);

				// access to vertex

	if (FAILED(hr))

	m_pRenderTargetView = NULL;

	cbDesc.MiscFlags = 0;

	dsDesc.Format = txDesc.Format;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;

		{



		{

	SDL_DestroyRenderer(ren);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	dsDesc.Texture2D.MipSlice = 0;



		//User requests quit

				// access to vertex

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vrData.SysMemPitch = 0;



void CD3DTest::Release()

	//vector<Vertex> vertex_t;



				tinyobj::real_t ty =

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pIndexBuffer);



		// Loop over faces(polygon)

	m_pLightBuffer = NULL;

{

		size_t index_offset = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (FAILED(hr))



	ConstantLight    pntLight; //点光源

		delete[] pVList;

	ConstantMatrixBuffer cmb;

		&scDesc,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

#include "DirectXManager.h"

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//頂点シェーダー生成

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pSampler = NULL;

		SDL_RenderClear(ren);

	txDesc.MiscFlags = 0;





			//Select surfaces based on key press

		R"(cube.obj)");

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyRenderer(ren);

	irData.pSysMem = &pIList[0];

	D3D11_BUFFER_DESC cbDesc;



	std::vector<tinyobj::shape_t> shapes;



}



	scDesc.OutputWindow = hwnd;



	//定数バッファ作成

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pTexture = NULL;

};

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (!reader.Warning().empty())

	float    farZ = 100.0f;

	if (FAILED(hr))

	{



	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

	/*

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t tx =

	txDesc.Height = rect.Height();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	// Loop over shapes

		SDL_Delay(1000);

	dsDesc.Texture2D.MipSlice = 0;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pDepthStencilTexture = NULL;





 * Lesson 1: Hello World!

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return 1;

			switch (e.key.keysym.sym)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	std::string error;

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_Delay(1000);

	float    farZ = 100.0f;



	SAFE_RELEASE(m_pRenderTargetView);

			int num_vertices = shape.mesh.num_face_vertices[f];

	Release();

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		SDL_RenderClear(ren);

	txDesc.MipLevels = 1;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ibDesc.ByteWidth = sizeof(WORD) * icount;







		return 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.SampleDesc.Count = 1;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))

			index_offset += fv;

	m_pPixelShader = NULL;

	auto& shapes = reader.GetShapes();

	cbDesc.StructureByteStride = 0;

				indexlist.push_back(idx.vertex_index);



	}



	m_pInputLayout = NULL;

#include <SDL.h>

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

 * Lesson 1: Hello World!

	if (FAILED(hr))

	m_pTexture = NULL;

	{



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4X4 view;

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

}

	txDesc.Height = rect.Height();

		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//テクスチャ読み込み

			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

};

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pTextureView);

		return hr;

};



	if (FAILED(hr))



	std::string inputfile = "test.obj";

	m_pVertexShader = NULL;

			}

	SAFE_RELEASE(m_pDepthStencilTexture);



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pDevice = NULL;

	irData.SysMemSlicePitch = 0;

	Release();

	txDesc.MipLevels = 1;

	m_Viewport.TopLeftY = 0;

	//テクスチャ読み込み

		size_t index_offset = 0;

		{

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

	{

	{

	SDL_Quit();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		}

	m_Viewport.TopLeftY = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pSwapChain);

		pVList[i] = vertexlist[i];

	m_IndexCount = 0;



	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pTexture);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

};

	}

		pVList[i] = vertexlist[i];

	if (!reader.Warning().empty())

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



CD3DTest::CD3DTest()

	UINT offsets = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pDepthStencilTexture = NULL;

}



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pVertexBuffer);

	float    fov = XMConvertToRadians(20.0f);

	//Create Index

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float    fov = XMConvertToRadians(20.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	dsDesc.Texture2D.MipSlice = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	scDesc.Windowed = TRUE;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	for (const auto& shape : shapes)

	::ZeroMemory(&scDesc, sizeof(scDesc));

		{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	auto& shapes = reader.GetShapes();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pVertexShader);

			default:

	}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_Viewport.Height = (FLOAT)rect.Height();

		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#endif

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//Clean up our objects and quit

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	if (FAILED(hr))

struct ConstantMatrixBuffer {

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.ambient, lightAmbient);

	::GetClientRect(hwnd, &rect);

		SDL_RenderClear(ren);

 */

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





		flags,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	//頂点バッファ作成

	if (!error.empty())

	//ピクセルシェーダー生成

	SDL_DestroyRenderer(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);



		pIList[j] = indexList[j];

				break;

	for (int i = 0; i < vcount; i++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

		//User requests quit

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	D3D11_BUFFER_DESC cbDesc;













	WORD   icount = indexList.size();

 */

}

	SDL_DestroyTexture(tex);

	dsDesc.Format = txDesc.Format;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	irData.SysMemPitch = 0;

	{

		//User requests quit

	}



	m_pInputLayout = NULL;

	if (m_pImmediateContext)



	XMFLOAT4         ambient;  //環境光(r,g,b)



			case SDLK_LEFT:



CD3DTest::CD3DTest()

		else if (e.type == SDL_KEYDOWN)

	D3D11_BUFFER_DESC vbDesc;

	SDL_Quit();



	txDesc.MipLevels = 1;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		m_pImmediateContext->ClearState();

	m_pDevice = NULL;

			{

	SAFE_RELEASE(m_pVertexShader);



	D3D11_TEXTURE2D_DESC txDesc;





	vector<WORD> indexList;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_IndexCount = 0;

	}



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))



		return hr;

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.Width = rect.Width();

	::GetClientRect(hwnd, &rect);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	ibDesc.MiscFlags = 0;

	//Key press surfaces constants

	dsDesc.Texture2D.MipSlice = 0;

	m_pLightBuffer = NULL;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha







		if (!reader.Error().empty())

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4(&clb.ambient, lightAmbient);

};

		SDL_RenderClear(ren);

	txDesc.SampleDesc.Quality = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	DXGI_SWAP_CHAIN_DESC scDesc;

		1,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

void CD3DTest::Release()

#endif

		return hr;



		&m_pDevice,

		SDL_Delay(1000);

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	cbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vrData.SysMemPitch = 0;



	m_pImmediateContext = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

			index_offset += num_vertices;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		delete[] pVList;



			{





	}

	tinyobj::ObjReaderConfig reader_config;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	ConstantMatrixBuffer cmb;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	vbDesc.MiscFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			{

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	vrData.pSysMem = &pVList[0];

				vertex.push_back(vertex_tmp);

	//First we need to start up SDL, and make sure it went ok

	UINT flags = 0;

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pIndexBuffer);

	auto& shapes = reader.GetShapes();

	std::vector<tinyobj::material_t> materials;

		//User requests quit

		return hr;

		}



	D3D11_BUFFER_DESC ibDesc;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		&level,

		m_pImmediateContext->ClearState();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

struct ConstantMatrixBuffer {

	XMFLOAT4         ambient;  //環境光(r,g,b)

		KEY_PRESS_SURFACE_UP,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t tx =

	HRESULT              hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//定数バッファ作成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pSampler = NULL;

	XMFLOAT4X4 world;



	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&m_pImmediateContext);

		m_pImmediateContext->ClearState();

	irData.SysMemPitch = 0;



			default:

		return hr;

	cbDesc.CPUAccessFlags = 0;

#include <SDL.h>

	//頂点シェーダー生成

	SAFE_RELEASE(m_pRenderTargetView);

 */

	CRect                rect;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

#ifdef _DEBUG



		SDL_RenderPresent(ren);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         ambient;  //環境光(r,g,b)

}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	WORD* pIList = new WORD[icount];

	txDesc.ArraySize = 1;



	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			exit(1);

	auto& materials = reader.GetMaterials();

				// access to vertex

		//User requests quit

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pTexture = NULL;

	m_pDepthStencilTexture = NULL;

			index_offset += num_vertices;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pPixelShader);

	m_pDepthStencilView = NULL;

	{

	D3D11_BUFFER_DESC ibDesc;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SDL_DestroyRenderer(ren);

		flags,



}

	{

{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_Delay(1000);





	SAFE_RELEASE(m_pDepthStencilView);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



{

			switch (e.key.keysym.sym)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		if (!ret)



			}





	XMFLOAT4 pos;               //座標(x,y,z)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pDevice);



	//vector<Vertex> vertex_t;

	m_pTexture = NULL;





	tinyobj::attrib_t attrib;

				break;

				break;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_FreeSurface(bmp);

		SDL_RenderPresent(ren);

	vbDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	}

};

			}

	SDL_DestroyRenderer(ren);



	float    farZ = 100.0f;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pMatrixBuffer = NULL;

	delete[] pIList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	// Loop over shapes

	}

	//vector<WORD> index_t;

	//ビューポート設定

	}

	//Create Index

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	{

				break;



	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.ArraySize = 1;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

	txDesc.Height = rect.Height();



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&shapes,



	XMFLOAT4X4 world;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vrData.pSysMem = &pVList[0];

	::ZeroMemory(&scDesc, sizeof(scDesc));

HRESULT CD3DTest::Create(HWND hwnd)



	if (FAILED(hr))

	m_IndexCount = 0;

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			}

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	irData.pSysMem = &pIList[0];

	m_pMatrixBuffer = NULL;

		//User presses a key

		D3D11_SDK_VERSION,

	if (m_pImmediateContext)

	scDesc.OutputWindow = hwnd;

	float    fov = XMConvertToRadians(20.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_RenderClear(ren);

	{

HRESULT CD3DTest::Create(HWND hwnd)

			exit(1);

		pVList[i] = vertexlist[i];



				// access to vertex

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.MipLevels = 1;

	return 0;

	{

	D3D11_SAMPLER_DESC smpDesc;

		{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	txDesc.Height = rect.Height();

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	if (FAILED(hr))

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	float    farZ = 100.0f;



}

		{

	scDesc.BufferDesc.Height = rect.Height();

};

	txDesc.CPUAccessFlags = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	SDL_Quit();



		{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	DXGI_SWAP_CHAIN_DESC scDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_DEFAULT,



	pBackBuffer->Release();

		return hr;

		{

		SDL_RenderClear(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

CD3DTest::CD3DTest()

	tinyobj::ObjReader reader;

	if (FAILED(hr))





	}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	{



	vrData.pSysMem = &pVList[0];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	HRESULT              hr;



	if (FAILED(hr))

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	return 0;

	auto& materials = reader.GetMaterials();

};

			switch (e.key.keysym.sym)

	//定数バッファ作成

 */



	}



	vrData.pSysMem = &pVList[0];

	while (SDL_PollEvent(&e) != 0)



				indexlist.push_back(index);

};

	//Key press surfaces constants



{

				indexlist.push_back(idx.vertex_index);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	UINT flags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pDepthStencilView);

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}



				indexlist.push_back(idx.vertex_index);

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	ID3D11Texture2D* pBackBuffer;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	ConstantLight    pntLight; //点光源



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





		//User presses a key

{

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





		}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	return 0;

	return 0;

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4X4 view;

	txDesc.Width = rect.Width();

	float    fov = XMConvertToRadians(20.0f);

				break;

	return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	}

	enum KeyPressSurfaces

				break;

	delete[] pIList;

	XMFLOAT4 specular;          //反射(r,g,b)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pVertexBuffer = NULL;

				break;

	return hr;

	};

				// access to vertex







		NULL,

{

	SDL_DestroyRenderer(ren);

	for (int i = 0; i < vcount; i++)



		return hr;

	//vector<Vertex> vertex_t;

		KEY_PRESS_SURFACE_UP,



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.OutputWindow = hwnd;



	scDesc.BufferDesc.Width = rect.Width();

#include "DirectXManager.h"

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.Windowed = TRUE;

	if (FAILED(hr))



	}

				vertex.push_back(vertex_tmp);

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	m_pVertexShader = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_RenderClear(ren);

	m_pRenderTargetView = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.Width = rect.Width();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	//Key press surfaces constants



	ConstantMaterial material; //物体の質感

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	vrData.SysMemPitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pLightBuffer = NULL;

		if (!ret)

	txDesc.Width = rect.Width();

		return hr;

	m_pVertexShader = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		}

CD3DTest::~CD3DTest()

		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.ambient, lightAmbient);

			case SDLK_RIGHT:



	for (int j = 0; j < icount; j++)

	irData.pSysMem = &pIList[0];



		return hr;



	auto& materials = reader.GetMaterials();



	txDesc.Width = rect.Width();

		SDL_RenderCopy(ren, tex, NULL, NULL);

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			for (size_t v = 0; v < num_vertices; v++)



	m_Viewport.TopLeftX = 0;



		&attrib,

	m_Viewport.MinDepth = 0.0f;

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4 pos;               //座標(x,y,z)

		if (e.type == SDL_QUIT)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	/*



	D3D11_BUFFER_DESC cbDesc;

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	/*





	if (FAILED(hr))

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_TOTAL

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		}



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	txDesc.ArraySize = 1;

}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SAFE_RELEASE(m_pTextureView);

		&attrib,

	dsDesc.Format = txDesc.Format;

		if (e.type == SDL_QUIT)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	tinyobj::ObjReader reader;

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))



#ifdef _DEBUG

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	vrData.pSysMem = &pVList[0];



struct ConstantMatrixBuffer {

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&shapes,





	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t ty =

	XMStoreFloat4(&clb.eyePos, eye);

				// access to vertex

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

int SEGMENT = 36;

	D3D11_TEXTURE2D_DESC txDesc;

void CD3DTest::Release()

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    nearZ = 0.1f;

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

};

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_BUFFER_DESC cbDesc;

	tinyobj::attrib_t attrib;

	Vertex* pVList = new Vertex[vcount];





			case SDLK_DOWN:

	for (int i = 0; i < 3; i++)

	ConstantLight    pntLight; //点光源

		delete[] pVList;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			for (size_t v = 0; v < fv; v++)



	return 0;

	return hr;

	{

	irData.SysMemSlicePitch = 0;

	auto& shapes = reader.GetShapes();

			for (size_t v = 0; v < num_vertices; v++)





	dsDesc.Format = txDesc.Format;







		{

}



	Release();

			{

		pIList[j] = indexList[j];

		}

		return hr;



		&level,

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//vector<Vertex> vertex_t;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//Key press surfaces constants

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::vector<tinyobj::shape_t> shapes;

	std::string error;

	scDesc.BufferDesc.Height = rect.Height();

				break;



		pLevels,

	//Clean up our objects and quit

	if (FAILED(hr))

		if (!ret)

 * Lesson 1: Hello World!

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	UINT strides = sizeof(Vertex);



	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pDepthStencilTexture);

	return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



struct ConstantMaterial {

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.MipLevels = 1;

	cbDesc.CPUAccessFlags = 0;

		&m_pDevice,

	SDL_DestroyWindow(win);

HRESULT CD3DTest::Create(HWND hwnd)

		D3D11_SDK_VERSION,

	if (FAILED(hr))



#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.StructureByteStride = 0;

			case SDLK_UP:

	if (FAILED(hr))

		return hr;







	m_Viewport.Height = (FLOAT)rect.Height();







	m_Viewport.Width = (FLOAT)rect.Width();

	float    farZ = 100.0f;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantLight {

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pInputLayout = NULL;

		if (e.type == SDL_QUIT)

	dsDesc.Format = txDesc.Format;



	SAFE_RELEASE(m_pVertexBuffer);

	//Create Index

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_FreeSurface(suf);

#include <iostream>

		return hr;

	txDesc.Height = rect.Height();

	dsDesc.Format = txDesc.Format;



		&level,

		SDL_Delay(1000);



	if (!reader.ParseFromFile(inputfile, reader_config))

		&scDesc,

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



			index_offset += fv;

	for (int i = 0; i < 3; i++)



	{

#endif

		D3D_DRIVER_TYPE_HARDWARE,

		pVList[i] = vertexlist[i];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&m_pSwapChain,





	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pSwapChain = NULL;

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{

		&materials,

	WORD* pIList = new WORD[icount];

using std::cout; using std::endl;

	HRESULT              hr;



	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		size_t index_offset = 0;

	m_IndexCount = 0;

	}



}



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferCount = 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	//Key press surfaces constants

 * Lesson 1: Hello World!

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			//Select surfaces based on key press

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	tinyobj::attrib_t attrib;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vector<Vertex> vertexlist;

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_TOTAL

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		}

				break;

	float    farZ = 100.0f;

	if (FAILED(hr))

/*



		&error,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	return 0;

struct ConstantMatrixBuffer {

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;





	};

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		NULL,

	if (FAILED(hr))



	SAFE_RELEASE(m_pTexture);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		R"(cube.obj)");

		return hr;

		&level,

	//Clean up our objects and quit

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

int main(int, char**)

		KEY_PRESS_SURFACE_LEFT,

	txDesc.CPUAccessFlags = 0;

	}

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				break;

	//First we need to start up SDL, and make sure it went ok

{

	if (!error.empty())











	//ビューポート設定

{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		}

		SDL_RenderPresent(ren);

	LoadObj(vertexlist, indexList);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





struct ConstantMaterial {

			}



		pLevels,

};

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		else if (e.type == SDL_KEYDOWN)

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		&level,



	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pRenderTargetView);





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pVertexBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

	if (!reader.ParseFromFile(inputfile, reader_config))



	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			// Loop over vertices in the face.



	//vector<WORD> index_t;

	scDesc.BufferCount = 1;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	D3D11_SUBRESOURCE_DATA irData;





	::GetClientRect(hwnd, &rect);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	txDesc.MiscFlags = 0;

	std::string error;

	SDL_Event e;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_DEFAULT,

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	XMFLOAT4 specular;          //反射(r,g,b)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

 */

};

	XMStoreFloat4(&clb.eyePos, eye);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_Viewport.MaxDepth = 1.0f;

	SDL_Quit();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	ID3D11Texture2D* pBackBuffer;

	//vector<WORD> index_t;

			// Loop over vertices in the face.

	tinyobj::ObjReaderConfig reader_config;

	// Loop over shapes

	Release();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pDevice = NULL;



	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ConstantLight    pntLight; //点光源

}

	vrData.pSysMem = &pVList[0];







		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	UINT flags = 0;

	std::string error;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	D3D11_TEXTURE2D_DESC txDesc;

	int     vcount = vertexlist.size();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

};



		&materials,

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	}

	m_pDepthStencilTexture = NULL;

	cbDesc.StructureByteStride = 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pTextureView);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				WORD index = idx.vertex_index;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

	tinyobj::ObjReaderConfig reader_config;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	for (int i = 0; i < vcount; i++)

		&m_pImmediateContext);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	{





	UINT flags = 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

int SEGMENT = 36;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		if (e.type == SDL_QUIT)

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	reader_config.mtl_search_path = "./"; // Path to material files

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	// Loop over shapes

				break;

};

};

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	dsDesc.Format = txDesc.Format;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok

	m_pDevice = NULL;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



			index_offset += num_vertices;



		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

	m_Viewport.Height = (FLOAT)rect.Height();



	D3D11_BUFFER_DESC vbDesc;

	::GetClientRect(hwnd, &rect);

	SDL_FreeSurface(suf);

			//Select surfaces based on key press

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	cbDesc.StructureByteStride = 0;



	irData.pSysMem = &pIList[0];



	D3D_FEATURE_LEVEL level;

		delete[] pVList;

	SAFE_RELEASE(m_pPixelShader);

	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



		&m_pSwapChain,

	}

	SAFE_RELEASE(m_pDevice);

{

	scDesc.SampleDesc.Count = 1;

				break;

	ID3D11Texture2D* pBackBuffer;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		delete[] pIList;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

	Release();

	m_pDevice = NULL;

	D3D11_SUBRESOURCE_DATA irData;

	{

	cbDesc.StructureByteStride = 0;

	{

	m_pSwapChain = NULL;

			}

	//頂点バッファ作成

		size_t index_offset = 0;  // インデントのオフセット

	//インデックスバッファ作成

	//ビューポート設定

};





#endif

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		KEY_PRESS_SURFACE_DEFAULT,

void CD3DTest::Render()

		SDL_Delay(1000);



		SDL_RenderPresent(ren);



		return hr;

	scDesc.BufferCount = 1;

	vrData.SysMemSlicePitch = 0;

		D3D11_SDK_VERSION,



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

void CD3DTest::Render()

{

	D3D11_SAMPLER_DESC smpDesc;

			index_offset += fv;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	int     vcount = vertexlist.size();

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			{

	for (int j = 0; j < icount; j++)

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	irData.SysMemSlicePitch = 0;

	vbDesc.CPUAccessFlags = 0;

				break;



	XMStoreFloat4(&clb.ambient, lightAmbient);



	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		&scDesc,



		return hr;

	if (FAILED(hr))

	return;

	//テクスチャ読み込み



	XMStoreFloat4(&clb.eyePos, eye);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//ピクセルシェーダー生成



	D3D11_SAMPLER_DESC smpDesc;

};

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				tinyobj::real_t ty =

	UINT flags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

		return hr;



	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		// Loop over faces(polygon)



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

		}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		&level,

	m_pImmediateContext = NULL;

	ibDesc.MiscFlags = 0;



HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		return hr;



				break;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	hr = D3D11CreateDeviceAndSwapChain(NULL,

	for (const auto& shape : shapes)

	cbDesc.StructureByteStride = 0;





	SDL_FreeSurface(bmp);

	reader_config.mtl_search_path = "./"; // Path to material files

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	D3D11_SUBRESOURCE_DATA vrData;

		&error,

	XMFLOAT4X4 projection;

	irData.SysMemPitch = 0;

	CRect                rect;

	//頂点バッファ作成

		exit(1);

			index_offset += fv;

#include <SDL.h>

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

void CD3DTest::Render()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			}

	CRect                rect;

{

	//定数バッファ作成

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

		&m_pImmediateContext);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ConstantMatrixBuffer cmb;

	D3D11_BUFFER_DESC ibDesc;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		NULL,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			case SDLK_DOWN:

		flags,

		exit(1);

	vbDesc.CPUAccessFlags = 0;

	m_pMatrixBuffer = NULL;

			switch (e.key.keysym.sym)

	m_pPixelShader = NULL;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	ConstantLightBuffer clb;

	vrData.pSysMem = &pVList[0];

	{

	scDesc.BufferCount = 1;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}



	m_VertexCount = vcount;

	cbDesc.StructureByteStride = 0;

		if (!reader.Error().empty())

	return 0;

	{



	m_pIndexBuffer = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	SDL_FreeSurface(bmp);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Key press surfaces constants

		return hr;



	{

	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Height = rect.Height();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

		return hr;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	vector<Vertex> vertexlist;

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pTexture);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#ifdef _DEBUG

	if (!error.empty())





};

	//Create Index

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

		SDL_RenderClear(ren);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	irData.pSysMem = &pIList[0];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//頂点シェーダー生成

			case SDLK_LEFT:

	std::vector<tinyobj::material_t> materials;

	{

		SDL_RenderClear(ren);



		return hr;



	m_pSwapChain = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	float    fov = XMConvertToRadians(20.0f);



	//定数バッファ作成

using std::cout; using std::endl;

	SDL_DestroyWindow(win);



	std::string imagePath = "hello.bmp";

			index_offset += num_vertices;

		KEY_PRESS_SURFACE_TOTAL



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	vrData.SysMemPitch = 0;





}
	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.CPUAccessFlags = 0;

		pIList[j] = indexList[j];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





				WORD index = idx.vertex_index;

	bool ret = tinyobj::LoadObj(





	XMFLOAT4 ambient;           //環境(r,g,b)

	}

	m_pVertexBuffer = NULL;

		&attrib,

		if (!ret)

#include <SDL.h>

		return hr;

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	//Key press surfaces constants

				tinyobj::real_t ty =

CD3DTest::CD3DTest()

				indexlist.push_back(idx.vertex_index);

		&materials,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

{



	SDL_FreeSurface(bmp);

	XMFLOAT4 specular;          //反射(r,g,b)



	UINT strides = sizeof(Vertex);



	//Clean up our objects and quit

		else if (e.type == SDL_KEYDOWN)

		&m_pImmediateContext);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		else if (e.type == SDL_KEYDOWN)

		return hr;

		SDL_RenderPresent(ren);

{

#include "DirectXManager.h"

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	SAFE_RELEASE(m_pMatrixBuffer);

		return hr;

	SAFE_RELEASE(m_pInputLayout);





int main(int, char**)

	pBackBuffer->Release();

	XMFLOAT4X4 projection;



	SDL_Quit();

	m_pImmediateContext = NULL;




