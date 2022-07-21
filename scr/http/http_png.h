				indexlist.push_back(idx.vertex_index);

	scDesc.Windowed = TRUE;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&m_pImmediateContext);



}

	SAFE_RELEASE(m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_LEFT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	float    fov = XMConvertToRadians(20.0f);



		return hr;

			case SDLK_LEFT:

}

		if (!reader.Error().empty())



	for (const auto& shape : shapes)

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pInputLayout);

	m_pSwapChain = NULL;

		&attrib,







	/*

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pSampler = NULL;

	txDesc.Width = rect.Width();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pTextureView = NULL;

};

	{



	txDesc.Width = rect.Width();





	XMFLOAT4         ambient;  //環境光(r,g,b)





	scDesc.BufferCount = 1;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			default:

		SDL_RenderCopy(ren, tex, NULL, NULL);

			{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vrData.pSysMem = &pVList[0];

	//Key press surfaces constants

		&m_pSwapChain,

	m_pSampler = NULL;

		KEY_PRESS_SURFACE_TOTAL



	SDL_DestroyRenderer(ren);

			}

		return hr;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&level,



		&materials,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemSlicePitch = 0;





	for (int j = 0; j < icount; j++)

	auto& materials = reader.GetMaterials();

		size_t index_offset = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

int main(int, char**)

	}

	D3D11_SAMPLER_DESC smpDesc;

		SDL_Delay(1000);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	vbDesc.CPUAccessFlags = 0;

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	{

				break;

	m_pPixelShader = NULL;

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





		{



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_DestroyTexture(tex);

	txDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_VertexCount = 0;

	auto& attrib = reader.GetAttrib();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMFLOAT4X4 view;



	int     vcount = vertexlist.size();



	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





		//User requests quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





{

	ibDesc.CPUAccessFlags = 0;



struct ConstantMatrixBuffer {

void CD3DTest::Release()

	//vector<WORD> index_t;

		return hr;

	D3D11_BUFFER_DESC ibDesc;

	return 0;

	cbDesc.CPUAccessFlags = 0;



	ConstantMaterial material; //物体の質感

	{

	D3D11_BUFFER_DESC cbDesc;

	//Clean up our objects and quit

	{

		}

		&m_pDevice,



	auto& attrib = reader.GetAttrib();

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	SAFE_RELEASE(m_pMatrixBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				WORD index = idx.vertex_index;

	//頂点レイアウト作成

	if (FAILED(hr))



		&materials,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	SDL_Event e;

	ID3D11Texture2D* pBackBuffer;

		return hr;



	txDesc.MipLevels = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//ピクセルシェーダー生成

	txDesc.MiscFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		//User presses a key

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		&level,



	}

		if (!reader.Error().empty())

			case SDLK_DOWN:

	SAFE_RELEASE(m_pDevice);

	m_pIndexBuffer = NULL;

	//頂点レイアウト作成

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SDL_FreeSurface(suf);

	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pInputLayout = NULL;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	delete[] pIList;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

	if (!reader.Warning().empty())

	XMStoreFloat4(&clb.eyePos, eye);

	}

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	float    nearZ = 0.1f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_IndexCount = 0;

	return;

	{

	for (int i = 0; i < 3; i++)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pVertexShader = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		SDL_RenderPresent(ren);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



			case SDLK_LEFT:

			for (size_t v = 0; v < num_vertices; v++)

	m_Viewport.TopLeftY = 0;

		SDL_RenderClear(ren);

			}

		m_pImmediateContext->ClearState();

				indexlist.push_back(index);

				tinyobj::real_t ty =

	XMFLOAT4 diffuse;           //拡散(r,g,b)







	}

int main(int, char**)



		return hr;



	LoadObj(vertexlist, indexList);





	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;



	CRect                rect;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ID3D11Texture2D* pBackBuffer;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::vector<tinyobj::shape_t> shapes;

				break;

				WORD index = idx.vertex_index;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_FreeSurface(bmp);

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_RenderClear(ren);

	ibDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	std::string inputfile = "test.obj";

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.SampleDesc.Count = 1;

	m_pDevice = NULL;



		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

	if (FAILED(hr))



		size_t index_offset = 0;

	txDesc.MiscFlags = 0;

	SDL_DestroyRenderer(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))





	//深度ステンシルバッファ作成

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pRenderTargetView = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vector<Vertex> vertexlist;

	WORD* pIList = new WORD[icount];

	if (!reader.ParseFromFile(inputfile, reader_config))





	XMFLOAT4X4 world;



	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_Delay(1000);

	ConstantMaterial material; //物体の質感

	float    farZ = 100.0f;

			exit(1);

	//テクスチャ読み込み

		return 1;

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}



	//頂点シェーダー生成

		return hr;





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

		return hr;

	}

	//ピクセルシェーダー生成

	//Create Index

	XMFLOAT4X4 world;

{

	{

	DXGI_SWAP_CHAIN_DESC scDesc;



	cbDesc.StructureByteStride = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//Key press surfaces constants

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		1,



	{



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//深度ステンシルバッファ作成

	auto& attrib = reader.GetAttrib();

{

	SAFE_RELEASE(m_pTextureView);



	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pIndexBuffer);





 * Lesson 1: Hello World!

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	vrData.SysMemPitch = 0;

{

	XMFLOAT4 specular;          //反射(r,g,b)

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

			// Loop over vertices in the face.

	float    fov = XMConvertToRadians(20.0f);

			}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

	{







	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.CPUAccessFlags = 0;

void CD3DTest::Release()

	ConstantMatrixBuffer cmb;

	D3D_FEATURE_LEVEL level;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))



#include <iostream>

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Angle += XMConvertToRadians(1.0f);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	UINT flags = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				break;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	tinyobj::attrib_t attrib;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//Vertex* pVList = new Vertex[vcount];

	for (const auto& shape : shapes)

		D3D_DRIVER_TYPE_HARDWARE,

	{

		return hr;



	delete[] pVList;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

		{

	if (!reader.ParseFromFile(inputfile, reader_config))

	D3D11_BUFFER_DESC vbDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		&m_pImmediateContext);

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		pLevels,

	SAFE_RELEASE(m_pDevice);



	m_Viewport.Height = (FLOAT)rect.Height();

	D3D11_BUFFER_DESC vbDesc;

			exit(1);

	m_pDevice = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

void CD3DTest::Release()

	// Loop over shapes

		}

{

	m_IndexCount = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	return;

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



{

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	// Loop over shapes



		}



		1,

		KEY_PRESS_SURFACE_DEFAULT,



		exit(1);

#include <SDL.h>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_RenderClear(ren);

		pVList[i] = vertexlist[i];

				WORD index = idx.vertex_index;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		pVList[i] = vertexlist[i];

		size_t index_offset = 0;



	if (FAILED(hr))

	SDL_DestroyTexture(tex);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ConstantMaterial material; //物体の質感

		return hr;

	vrData.SysMemPitch = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				break;

{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		pIList[j] = indexList[j];



		return hr;

	ConstantMaterial material; //物体の質感

	//頂点バッファ作成

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.Windowed = TRUE;

	D3D_FEATURE_LEVEL level;



	SDL_FreeSurface(bmp);

	auto& shapes = reader.GetShapes();

	m_Viewport.MinDepth = 0.0f;

	D3D_FEATURE_LEVEL level;

			index_offset += fv;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		KEY_PRESS_SURFACE_UP,



}
		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.MiscFlags = 0;



}

	float    farZ = 100.0f;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDevice);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&materials,

	{

	return 0;

		&m_pDevice,



		pIList[j] = indexList[j];

	//Clean up our objects and quit

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

#endif

				break;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_DestroyTexture(tex);

	delete[] pVList;



};

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	//vector<WORD> index_t;



	{

		return hr;

CD3DTest::~CD3DTest()

		1,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	scDesc.SampleDesc.Count = 1;

	D3D11_SAMPLER_DESC smpDesc;

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext = NULL;



	m_pLightBuffer = NULL;

	ibDesc.StructureByteStride = 0;



	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		if (!ret)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

	}



	XMFLOAT4         ambient;  //環境光(r,g,b)

#endif

		}



	SAFE_RELEASE(m_pLightBuffer);

	int     vcount = vertexlist.size();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	{

	m_VertexCount = vcount;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (!reader.Warning().empty())

	return 0;

		}





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Event e;

	for (size_t s = 0; s < shapes.size(); s++)

	vector<Vertex> vertexlist;

			// Loop over vertices in the face.

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			switch (e.key.keysym.sym)

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			break;



	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pVertexBuffer);

	{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.MiscFlags = 0;

				indexlist.push_back(idx.vertex_index);

		&shapes,





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	std::vector<tinyobj::material_t> materials;

			index_offset += num_vertices;

				break;

	m_pSampler = NULL;

	auto& attrib = reader.GetAttrib();

	//Create Index

	ID3D11Texture2D* pBackBuffer;

{

	txDesc.ArraySize = 1;

	auto& shapes = reader.GetShapes();

	vector<Vertex> vertexlist;

	if (!reader.ParseFromFile(inputfile, reader_config))





		pIList[j] = indexList[j];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	HRESULT              hr;

	scDesc.BufferCount = 1;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vector<WORD> indexList;

	SDL_Quit();

	tinyobj::ObjReader reader;

{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_TOTAL

	//テクスチャ読み込み

		SDL_RenderPresent(ren);

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

		}

		cout << "SDL_INIT_ERROR" << endl;

	}

		SDL_RenderClear(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pInputLayout);

HRESULT CD3DTest::Create(HWND hwnd)



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

struct ConstantLightBuffer {

	scDesc.OutputWindow = hwnd;

	m_Viewport.Width = (FLOAT)rect.Width();

	float    nearZ = 0.1f;

	m_pVertexShader = NULL;

				break;



		pLevels,

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	delete[] pVList;

		else if (e.type == SDL_KEYDOWN)





	SAFE_RELEASE(m_pVertexShader);

	//First we need to start up SDL, and make sure it went ok

	std::string imagePath = "hello.bmp";





	}



	D3D11_BUFFER_DESC cbDesc;



	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	SDL_DestroyTexture(tex);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

{

		&level,

	XMFLOAT4 ambient;           //環境(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.Width = rect.Width();



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.CPUAccessFlags = 0;

	{

	//ピクセルシェーダー生成

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.eyePos, eye);

	m_IndexCount = 0;

		SDL_Delay(1000);

	XMStoreFloat4(&clb.eyePos, eye);

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.Height = rect.Height();



CD3DTest::CD3DTest()

	cbDesc.MiscFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SDL_FreeSurface(suf);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		// Loop over faces(polygon)



		if (!ret)



			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	{

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pSwapChain->Present(0, 0);



	m_pImmediateContext = NULL;

{

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMStoreFloat4(&clb.ambient, lightAmbient);

	delete[] pVList;

}

#include <SDL.h>

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	float    nearZ = 0.1f;





	if (FAILED(hr))



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	//vector<Vertex> vertex_t;

			{

	tinyobj::ObjReaderConfig reader_config;

			// Loop over vertices in the face.

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pTexture = NULL;

void CD3DTest::Release()

	while (SDL_PollEvent(&e) != 0)

	m_pDepthStencilView = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)





	m_IndexCount = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

	txDesc.ArraySize = 1;

	if (FAILED(hr))



	vector<Vertex> vertexlist;

	cbDesc.CPUAccessFlags = 0;



#include "DirectXManager.h"

	ConstantLight    pntLight; //点光源



	if (m_pImmediateContext)

	txDesc.SampleDesc.Quality = 0;





		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pRenderTargetView);

HRESULT CD3DTest::Create(HWND hwnd)



	D3D11_SUBRESOURCE_DATA irData;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pImmediateContext);

	vector<WORD> indexList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.SampleDesc.Quality = 0;

	//vector<Vertex> vertex_t;



	scDesc.BufferDesc.Height = rect.Height();

		SDL_Delay(1000);



		return 1;

	SDL_Quit();

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	if (!error.empty())



/*

}
	ConstantMatrixBuffer cmb;

		pVList[i] = vertexlist[i];

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pDevice);

	enum KeyPressSurfaces

				break;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	delete[] pVList;



	ConstantMatrixBuffer cmb;





	SAFE_RELEASE(m_pVertexBuffer);



int main(int, char**)



		{

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyRenderer(ren);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

	cbDesc.MiscFlags = 0;



{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		size_t index_offset = 0;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pTextureView = NULL;

		//User requests quit

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pRenderTargetView = NULL;

		exit(1);

		}





		flags,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	std::string inputfile = "test.obj";

	m_Viewport.MinDepth = 0.0f;

		if (!ret)

	D3D11_BUFFER_DESC vbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	::GetClientRect(hwnd, &rect);

		SDL_RenderPresent(ren);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

}



{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))



	m_pSwapChain = NULL;

		}

	}

	pBackBuffer->Release();

 */



		&scDesc,

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4X4 view;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	/*



	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	SAFE_RELEASE(m_pSampler);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_LEFT:

	tinyobj::ObjReaderConfig reader_config;



	m_pLightBuffer = NULL;



	std::string inputfile = "test.obj";

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ibDesc.CPUAccessFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pDevice = NULL;

			case SDLK_UP:

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

void CD3DTest::Release()

				// access to vertex

};

	float    farZ = 100.0f;

	auto& shapes = reader.GetShapes();

};

	scDesc.BufferCount = 1;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_LEFT:

	m_pDepthStencilTexture = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

				break;



	SAFE_RELEASE(m_pTextureView);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			{

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (FAILED(hr))

};

		size_t index_offset = 0;

	m_pRenderTargetView = NULL;



	SDL_DestroyWindow(win);



	{



		SDL_RenderClear(ren);

void CD3DTest::Release()

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pSwapChain);

		&m_pSwapChain,

		return hr;

	//vector<Vertex> vertex_t;

		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pLightBuffer);

#include <iostream>

	irData.SysMemPitch = 0;

using std::cout; using std::endl;

int main(int, char**)

	m_VertexCount = 0;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	D3D11_BUFFER_DESC ibDesc;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <iostream>

		&error,

	SAFE_RELEASE(m_pLightBuffer);

	for (const auto& shape : shapes)



}



	SAFE_RELEASE(m_pDevice);



	if (FAILED(hr))

	auto& shapes = reader.GetShapes();



	SDL_FreeSurface(bmp);

				break;



			// Loop over vertices in the face.

	delete[] pVList;

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(

		return hr;

			}



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;



		&shapes,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	txDesc.Width = rect.Width();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	ibDesc.StructureByteStride = 0;

			case SDLK_UP:

	float    fov = XMConvertToRadians(20.0f);

		size_t index_offset = 0;  // インデントのオフセット



	cbDesc.MiscFlags = 0;

	scDesc.Windowed = TRUE;

			index_offset += num_vertices;





		&m_pImmediateContext);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);

	m_pVertexShader = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ibDesc.CPUAccessFlags = 0;



		delete[] pVList;

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pInputLayout = NULL;



	txDesc.Width = rect.Width();

}

	WORD   icount = indexList.size();

	UINT strides = sizeof(Vertex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		m_pImmediateContext->ClearState();

	return hr;

	SAFE_RELEASE(m_pRenderTargetView);

		else if (e.type == SDL_KEYDOWN)



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//ビューポート設定

	D3D11_BUFFER_DESC ibDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	float    nearZ = 0.1f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		&materials,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_VertexCount = vcount;

				WORD index = idx.vertex_index;

	D3D11_SUBRESOURCE_DATA vrData;

	}

	m_Viewport.TopLeftX = 0;

	//頂点シェーダー生成

		if (!reader.Error().empty())

	SDL_FreeSurface(suf);

	dsDesc.Format = txDesc.Format;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	vrData.SysMemSlicePitch = 0;

			switch (e.key.keysym.sym)

			case SDLK_UP:



	}



	D3D_FEATURE_LEVEL level;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			}

{

	txDesc.ArraySize = 1;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		}

	}

	txDesc.SampleDesc.Quality = 0;

	if (!error.empty())

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

#ifdef _DEBUG

	UINT flags = 0;

		KEY_PRESS_SURFACE_TOTAL

			for (size_t v = 0; v < fv; v++)

	//vector<Vertex> vertex_t;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Vertex* pVList = new Vertex[vcount];

	//定数バッファ作成

		{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//First we need to start up SDL, and make sure it went ok

	//テクスチャ読み込み

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;

#endif

	D3D11_SAMPLER_DESC smpDesc;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



}

	SAFE_RELEASE(m_pTexture);

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	//頂点シェーダー生成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		KEY_PRESS_SURFACE_TOTAL

		return hr;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}

	m_Viewport.TopLeftY = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vrData.SysMemSlicePitch = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

{

				break;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

struct ConstantLightBuffer {



	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	}

		}



using std::cout; using std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

	float    nearZ = 0.1f;

	return 0;

	txDesc.Height = rect.Height();

	std::string inputfile = "test.obj";

	UINT flags = 0;





	std::vector<tinyobj::shape_t> shapes;



	XMStoreFloat4(&clb.ambient, lightAmbient);

{

			index_offset += fv;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

struct ConstantLight {

using std::cout; using std::endl;

		NULL,

	m_pDepthStencilTexture = NULL;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	LoadObj(vertexlist, indexList);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t ty =

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	UINT offsets = 0;



		return 1;

CD3DTest::CD3DTest()

int main(int, char**)

 * Lesson 1: Hello World!



	m_IndexCount = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		KEY_PRESS_SURFACE_DEFAULT,

	ConstantLight    pntLight; //点光源

	scDesc.BufferCount = 1;

	std::string error;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	m_pMatrixBuffer = NULL;

	//テクスチャ読み込み

		}



	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderClear(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pVertexBuffer);



	SDL_DestroyRenderer(ren);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		1,

};

	for (int i = 0; i < vcount; i++)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	bool ret = tinyobj::LoadObj(

	txDesc.Width = rect.Width();

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





		return hr;

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	m_pVertexBuffer = NULL;

		return hr;

	ibDesc.MiscFlags = 0;

		&materials,

	{

	ibDesc.MiscFlags = 0;

	{

		SDL_RenderPresent(ren);



	SAFE_RELEASE(m_pRenderTargetView);

		}



			}

	scDesc.BufferDesc.Height = rect.Height();

			}

		&materials,

	//ピクセルシェーダー生成

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			case SDLK_DOWN:

		{

};



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	Release();

	txDesc.Width = rect.Width();

		return 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemPitch = 0;









	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				break;

	{

		{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	return 0;

	SAFE_RELEASE(m_pSampler);

	bool ret = tinyobj::LoadObj(

	//ピクセルシェーダー生成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			case SDLK_RIGHT:



	ZeroMemory(&txDesc, sizeof(txDesc));



	}*/

		flags,



	for (size_t s = 0; s < shapes.size(); s++)



	::ZeroMemory(&scDesc, sizeof(scDesc));



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				break;

int main(int, char**)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//テクスチャ読み込み



	auto& shapes = reader.GetShapes();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.MipLevels = 1;

		&m_pDevice,

	float    farZ = 100.0f;

		return 1;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	{

		{

};

	m_pMatrixBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	txDesc.MiscFlags = 0;

		{

{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	//vector<WORD> index_t;

	scDesc.OutputWindow = hwnd;

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyTexture(tex);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		D3D11_SDK_VERSION,

		SDL_RenderClear(ren);



	tinyobj::attrib_t attrib;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pIndexBuffer);

	pBackBuffer->Release();

	SAFE_RELEASE(m_pRenderTargetView);

				break;

	D3D11_SUBRESOURCE_DATA vrData;

	{

	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(suf);

		}

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Quit();

	D3D_FEATURE_LEVEL level;



				WORD index = idx.vertex_index;

	std::string error;

CD3DTest::~CD3DTest()



	//頂点バッファ作成

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ZeroMemory(&txDesc, sizeof(txDesc));

			switch (e.key.keysym.sym)

	XMStoreFloat4(&clb.material.specular, materialSpecular);



		SDL_RenderPresent(ren);



	XMStoreFloat4(&clb.ambient, lightAmbient);

{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_Viewport.Height = (FLOAT)rect.Height();



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		size_t index_offset = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (m_pImmediateContext)

		&error,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	txDesc.SampleDesc.Count = 1;

	//Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t ty =

	{

				indexlist.push_back(index);

	HRESULT              hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	for (int i = 0; i < 3; i++)

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	CRect                rect;



	m_VertexCount = vcount;



	//深度ステンシルバッファ作成

	};

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	Release();



CD3DTest::~CD3DTest()



	m_pImmediateContext = NULL;

}

		KEY_PRESS_SURFACE_DOWN,



	float    fov = XMConvertToRadians(20.0f);

	}



		delete[] pIList;

			case SDLK_RIGHT:

		KEY_PRESS_SURFACE_DOWN,

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_FreeSurface(suf);

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



CD3DTest::~CD3DTest()

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

int main(int, char**)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA vrData;

	{



	{

	m_IndexCount = 0;

	txDesc.MiscFlags = 0;



	cbDesc.StructureByteStride = 0;

	ibDesc.MiscFlags = 0;

	{



{

	vector<WORD> indexList;

	}





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

}

		return 1;

				break;

	m_IndexCount = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		}

	SDL_DestroyWindow(win);



	if (!error.empty())

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_DEFAULT,



		// Loop over faces(polygon)

			case SDLK_DOWN:

#include <SDL.h>

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_Viewport.MaxDepth = 1.0f;



	m_pIndexBuffer = NULL;

	scDesc.OutputWindow = hwnd;

int main(int, char**)

	std::string error;

	vbDesc.StructureByteStride = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

			{

	m_pSampler = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



}
	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	}

int main(int, char**)

	Vertex* pVList = new Vertex[vcount];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_DestroyRenderer(ren);



		}

};



	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				break;

		delete[] pIList;



	Vertex* pVList = new Vertex[vcount];

		return hr;



{

	SDL_Quit();





	m_pDepthStencilView = NULL;

		KEY_PRESS_SURFACE_TOTAL

		{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	Release();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::string error;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		&m_pDevice,

};



		size_t index_offset = 0;

#include <SDL.h>

	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	return 0;



	txDesc.MiscFlags = 0;

	vrData.pSysMem = &pVList[0];

	{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	D3D11_SUBRESOURCE_DATA irData;

				WORD index = idx.vertex_index;

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{



	auto& shapes = reader.GetShapes();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Vertex* pVList = new Vertex[vcount];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



}



	int     vcount = vertexlist.size();





	cbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::material_t> materials;

	ibDesc.CPUAccessFlags = 0;

		if (e.type == SDL_QUIT)

			//Select surfaces based on key press



}





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	Release();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	float    nearZ = 0.1f;

	//ピクセルシェーダー生成

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	txDesc.SampleDesc.Count = 1;

			switch (e.key.keysym.sym)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);





{

	vector<Vertex> vertexlist;

		return hr;

		return hr;

		&level,

		SDL_RenderCopy(ren, tex, NULL, NULL);





struct ConstantMaterial {

		}

	if (FAILED(hr))

				tinyobj::real_t tx =

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		&shapes,

}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pMatrixBuffer = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.MinDepth = 0.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_TEXTURE2D_DESC txDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pLightBuffer = NULL;

		&attrib,



	std::string inputfile = "test.obj";

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		}



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//深度ステンシルバッファ作成

	cbDesc.StructureByteStride = 0;

	txDesc.Height = rect.Height();

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_BUFFER_DESC ibDesc;

	Release();



	{

	CRect                rect;

	//Key press surfaces constants

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&m_pDevice,

	}

		// Loop over faces(polygon)

		KEY_PRESS_SURFACE_DEFAULT,

struct ConstantLightBuffer {

	{

	}

};

		&error,

	SDL_DestroyRenderer(ren);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMFLOAT4X4 projection;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	float    nearZ = 0.1f;

	{

		}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_DestroyRenderer(ren);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	//頂点シェーダー生成



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferDesc.Height = rect.Height();



	vbDesc.MiscFlags = 0;

	//定数バッファ作成

			// Loop over vertices in the face.

		pVList[i] = vertexlist[i];



		size_t index_offset = 0;

	m_pVertexBuffer = NULL;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))



		return hr;

			default:

	vrData.SysMemPitch = 0;

				break;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		{

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	return 0;

	return hr;

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

	for (int i = 0; i < vcount; i++)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		flags,

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	//Clean up our objects and quit

	m_pInputLayout = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.CPUAccessFlags = 0;



			case SDLK_RIGHT:

	XMFLOAT4X4 world;

	//定数バッファ作成

	SAFE_RELEASE(m_pLightBuffer);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include <SDL.h>

		&shapes,



	{

		KEY_PRESS_SURFACE_UP,

	m_Viewport.Height = (FLOAT)rect.Height();

{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		D3D_DRIVER_TYPE_HARDWARE,

				break;

	UINT offsets = 0;



		&level,

	m_pVertexBuffer = NULL;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	irData.SysMemSlicePitch = 0;



	D3D11_TEXTURE2D_DESC txDesc;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ConstantMaterial material; //物体の質感

		&shapes,

			exit(1);

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}

	tinyobj::attrib_t attrib;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_DOWN,

	ID3D11Texture2D* pBackBuffer;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pInputLayout = NULL;



		{

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_RIGHT:

	//Create Index

	m_pImmediateContext = NULL;

	}

	m_pInputLayout = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	float    fov = XMConvertToRadians(20.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				break;

		if (!reader.Error().empty())

	scDesc.BufferDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_TOTAL

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				// access to vertex

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_RenderClear(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	WORD* pIList = new WORD[icount];

{

		KEY_PRESS_SURFACE_RIGHT,



	XMStoreFloat4(&clb.ambient, lightAmbient);

}

};

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

{

	vrData.pSysMem = &pVList[0];

struct ConstantLight {

		&scDesc,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pTexture);

	};

		&m_pImmediateContext);

using std::cout; using std::endl;

	ConstantMaterial material; //物体の質感

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&m_pDevice,



	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pVertexShader);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

		SDL_RenderClear(ren);





	SDL_Quit();

/*

{

	DXGI_SWAP_CHAIN_DESC scDesc;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//深度ステンシルバッファ作成

}

		{



{



	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_Viewport.Height = (FLOAT)rect.Height();

	bool ret = tinyobj::LoadObj(

			{





		KEY_PRESS_SURFACE_UP,

	//vector<Vertex> vertex_t;



	//頂点レイアウト作成

	Vertex* pVList = new Vertex[vcount];

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;



	m_Viewport.TopLeftY = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pImmediateContext);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pIndexBuffer = NULL;



		delete[] pVList;

void CD3DTest::Release()

		&scDesc,

	txDesc.Height = rect.Height();

	irData.SysMemSlicePitch = 0;

	HRESULT              hr;

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	reader_config.mtl_search_path = "./"; // Path to material files

		KEY_PRESS_SURFACE_DEFAULT,



			case SDLK_RIGHT:

		{

		&scDesc,



	txDesc.ArraySize = 1;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			default:

	XMStoreFloat4(&clb.ambient, lightAmbient);

	txDesc.MiscFlags = 0;

{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

int main(int, char**)



			}



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				WORD index = idx.vertex_index;

				break;

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_RIGHT:

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pVertexBuffer);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pLightBuffer = NULL;

struct ConstantMaterial {

	tinyobj::attrib_t attrib;

	//頂点バッファ作成

		return hr;





	//頂点シェーダー生成

		return hr;

	return;

			}

			{

int SEGMENT = 36;

	vector<WORD> indexList;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pPixelShader = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyTexture(tex);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	m_pDepthStencilTexture = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pSwapChain);



using std::cout; using std::endl;



	Vertex* pVList = new Vertex[vcount];

	D3D11_SAMPLER_DESC smpDesc;

	}

	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_DOWN,



};

struct ConstantMatrixBuffer {

	m_pMatrixBuffer = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pInputLayout = NULL;

}



		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	std::string imagePath = "hello.bmp";

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



struct ConstantMatrixBuffer {



			index_offset += fv;



		&m_pImmediateContext);

	ConstantLightBuffer clb;





		return hr;

	}

			for (size_t v = 0; v < num_vertices; v++)

	hr = D3D11CreateDeviceAndSwapChain(NULL,





	WORD   icount = indexList.size();

	ibDesc.MiscFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

}

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4X4 world;

	m_pInputLayout = NULL;

	}



	SAFE_RELEASE(m_pIndexBuffer);

		SDL_RenderPresent(ren);



		&materials,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	tinyobj::ObjReaderConfig reader_config;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

		exit(1);

				WORD index = idx.vertex_index;

	txDesc.SampleDesc.Count = 1;

	m_Viewport.TopLeftY = 0;

	float    fov = XMConvertToRadians(20.0f);

	float    nearZ = 0.1f;



	vrData.SysMemSlicePitch = 0;

	ibDesc.StructureByteStride = 0;

	tinyobj::attrib_t attrib;

	ibDesc.CPUAccessFlags = 0;

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pTexture = NULL;

		m_pImmediateContext->ClearState();

				break;

	//頂点レイアウト作成

	if (!error.empty())

{

int main(int, char**)

	}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pInputLayout);





	m_pInputLayout = NULL;

struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pLightBuffer = NULL;

				indexlist.push_back(index);

int SEGMENT = 36;

		&materials,

		return 1;

	}

		return hr;

	ibDesc.CPUAccessFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;



}

	}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pDepthStencilTexture = NULL;

	cbDesc.StructureByteStride = 0;

struct ConstantMaterial {

		R"(cube.obj)");

	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.TopLeftX = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pDepthStencilView = NULL;

	//Clean up our objects and quit

 */

}

		}



				vertex.push_back(vertex_tmp);

		{



	XMFLOAT4X4 projection;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	WORD* pIList = new WORD[icount];

	D3D11_SUBRESOURCE_DATA vrData;

	vbDesc.MiscFlags = 0;

	{



}

};

struct ConstantMaterial {

	//ピクセルシェーダー生成



	bool ret = tinyobj::LoadObj(

		pIList[j] = indexList[j];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))



		&attrib,



	txDesc.MipLevels = 1;

	tinyobj::ObjReader reader;

	txDesc.MiscFlags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.SampleDesc.Count = 1;



			int num_vertices = shape.mesh.num_face_vertices[f];

	}



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMFLOAT4         eyePos;   //視点座標

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.MiscFlags = 0;





	m_pMatrixBuffer = NULL;



	/*



	{

	D3D_FEATURE_LEVEL level;

		{

		KEY_PRESS_SURFACE_TOTAL





	}

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		return hr;

	vrData.pSysMem = &pVList[0];

{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ibDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			for (size_t v = 0; v < fv; v++)

	ibDesc.MiscFlags = 0;

		}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_IndexCount = icount;

	UINT flags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			{

		//User requests quit

			default:

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

};

		SDL_RenderPresent(ren);

			break;

	return hr;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			case SDLK_DOWN:

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4X4 projection;

CD3DTest::~CD3DTest()



	//頂点レイアウト作成

	XMFLOAT4X4 world;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		size_t index_offset = 0;

		return hr;

{

	}

	while (SDL_PollEvent(&e) != 0)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ibDesc.MiscFlags = 0;

		pIList[j] = indexList[j];





	scDesc.SampleDesc.Count = 1;

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (FAILED(hr))



		}

	SAFE_RELEASE(m_pDepthStencilView);

		}

		KEY_PRESS_SURFACE_UP,

	if (FAILED(hr))

				tinyobj::real_t ty =



	//First we need to start up SDL, and make sure it went ok





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t ty =

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			case SDLK_LEFT:

	m_pSampler = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		{

				tinyobj::real_t ty =

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT flags = 0;

	m_VertexCount = vcount;

		KEY_PRESS_SURFACE_DEFAULT,

	m_Viewport.TopLeftY = 0;

	D3D11_SAMPLER_DESC smpDesc;

	enum KeyPressSurfaces

			// Loop over vertices in the face.

#ifdef _DEBUG

			}

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))



	std::vector<tinyobj::material_t> materials;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	dsDesc.Format = txDesc.Format;

	}

	HRESULT              hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				break;

	vbDesc.CPUAccessFlags = 0;

}



	scDesc.Windowed = TRUE;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				vertex.push_back(vertex_tmp);





	XMFLOAT4X4 world;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_pPixelShader = NULL;

	m_pPixelShader = NULL;





	irData.SysMemSlicePitch = 0;

	delete[] pVList;

			index_offset += num_vertices;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		if (!ret)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

 */

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	m_pImmediateContext = NULL;

{

		return hr;

	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.CPUAccessFlags = 0;

	return 0;

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_BUFFER_DESC cbDesc;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	auto& materials = reader.GetMaterials();

	dsDesc.Texture2D.MipSlice = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;



		if (!reader.Error().empty())

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4X4 world;

	LoadObj(vertexlist, indexList);

	XMStoreFloat4(&clb.eyePos, eye);

	D3D11_SAMPLER_DESC smpDesc;

			index_offset += fv;

		if (!reader.Error().empty())

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_IndexCount = 0;



struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



			case SDLK_UP:

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);



		D3D_DRIVER_TYPE_HARDWARE,

		KEY_PRESS_SURFACE_LEFT,

		exit(1);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		}

	txDesc.CPUAccessFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

{

			{

	XMFLOAT4 specular;          //反射(r,g,b)

			//Select surfaces based on key press

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4X4 world;

	if (!error.empty())

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		pIList[j] = indexList[j];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pMatrixBuffer = NULL;

	txDesc.ArraySize = 1;



	D3D11_TEXTURE2D_DESC txDesc;

	}

		D3D11_SDK_VERSION,

}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

struct ConstantMaterial {

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

void CD3DTest::Render()

}

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

		// Loop over faces(polygon)

		pIList[j] = indexList[j];

	ConstantLightBuffer clb;

	ConstantMatrixBuffer cmb;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	WORD   icount = indexList.size();

		KEY_PRESS_SURFACE_DEFAULT,

 * Lesson 1: Hello World!



		size_t index_offset = 0;





{

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.MiscFlags = 0;



	m_pInputLayout = NULL;

	m_pPixelShader = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);







	cbDesc.StructureByteStride = 0;

	{

	D3D11_SAMPLER_DESC smpDesc;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	pBackBuffer->Release();

int SEGMENT = 36;

		&error,

	SDL_DestroyRenderer(ren);



}

	scDesc.BufferDesc.Height = rect.Height();

	/*

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				break;

	return hr;

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))

		pLevels,

{

		&scDesc,

	if (!error.empty())



		return hr;



	//Key press surfaces constants

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		SDL_RenderPresent(ren);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	scDesc.SampleDesc.Quality = 0;

	}

		return hr;





	txDesc.MiscFlags = 0;

		&scDesc,

	txDesc.ArraySize = 1;

				indexlist.push_back(index);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	//ピクセルシェーダー生成

		return hr;



	//テクスチャ読み込み

	{

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))





				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#endif

	//ビューポート設定

		KEY_PRESS_SURFACE_DOWN,

		R"(cube.obj)");

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_DEFAULT,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.MiscFlags = 0;



	//Key press surfaces constants





	cbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC ibDesc;



	SAFE_RELEASE(m_pDepthStencilView);

	//Clean up our objects and quit

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pIndexBuffer);





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		}

	auto& shapes = reader.GetShapes();

	m_pTexture = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_Delay(1000);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	Release();



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

	if (FAILED(hr))

			}

	irData.pSysMem = &pIList[0];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	if (FAILED(hr))



			index_offset += fv;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.MiscFlags = 0;

	Release();

	m_pRenderTargetView = NULL;

			//Select surfaces based on key press

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    farZ = 100.0f;

	m_VertexCount = 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	WORD   icount = indexList.size();

		pLevels,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		//User requests quit

		size_t index_offset = 0;  // インデントのオフセット

	}



	UINT offsets = 0;



{



			}

		//User presses a key

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	vector<WORD> indexList;

		&error,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				// access to vertex





	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			case SDLK_RIGHT:

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	UINT strides = sizeof(Vertex);



	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pLightBuffer);

				vertex.push_back(vertex_tmp);

		{





	return;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_IndexCount = icount;

			// Loop over vertices in the face.

	m_pSwapChain->Present(0, 0);

	float    farZ = 100.0f;

	std::vector<tinyobj::shape_t> shapes;

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	float    farZ = 100.0f;

	XMFLOAT4X4 world;

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4X4 projection;

	//ビューポート設定



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

struct ConstantMaterial {

	SDL_DestroyRenderer(ren);

	m_Viewport.TopLeftX = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pPixelShader);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pLightBuffer);

		{

}



	scDesc.BufferCount = 1;

	//ピクセルシェーダー生成

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感



};

	m_pRenderTargetView = NULL;

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pRenderTargetView);

void CD3DTest::Release()

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (int i = 0; i < 3; i++)



	SAFE_RELEASE(m_pImmediateContext);

		SDL_RenderClear(ren);

				// access to vertex

			}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		flags,

	pBackBuffer->Release();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

int main(int, char**)

	vector<WORD> indexList;



			for (size_t v = 0; v < fv; v++)



	DXGI_SWAP_CHAIN_DESC scDesc;

				// access to vertex

{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext = NULL;

		1,

		return hr;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

	cbDesc.StructureByteStride = 0;

	m_IndexCount = 0;

	SAFE_RELEASE(m_pSwapChain);



	ConstantMaterial material; //物体の質感

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

	{

	m_pVertexShader = NULL;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	std::string error;

	vector<Vertex> vertexlist;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_DestroyRenderer(ren);

	irData.SysMemPitch = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	cbDesc.StructureByteStride = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyRenderer(ren);

		&level,

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pSwapChain);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	for (int i = 0; i < 3; i++)

	D3D11_BUFFER_DESC cbDesc;

	{



	XMStoreFloat4(&clb.eyePos, eye);

	//vector<WORD> index_t;

	irData.SysMemSlicePitch = 0;

	D3D11_SAMPLER_DESC smpDesc;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	if (FAILED(hr))

	if (FAILED(hr))



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	return;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Event e;

	for (int i = 0; i < 3; i++)

	//Create Index

	XMFLOAT4X4 view;

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t tx =



	{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

{

	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];

	return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

}





	scDesc.BufferDesc.Width = rect.Width();

				break;

		//User presses a key

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pMatrixBuffer);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		if (!reader.Error().empty())

	m_pVertexBuffer = NULL;

	WORD* pIList = new WORD[icount];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

#endif





		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	pBackBuffer->Release();



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_Event e;

	ConstantLight    pntLight; //点光源

	for (const auto& shape : shapes)

		return 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_FreeSurface(bmp);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	::GetClientRect(hwnd, &rect);

		size_t index_offset = 0;  // インデントのオフセット



	// Loop over shapes

	SDL_DestroyTexture(tex);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	std::string inputfile = "test.obj";

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	D3D11_SAMPLER_DESC smpDesc;

	SDL_DestroyTexture(tex);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_Delay(1000);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	reader_config.mtl_search_path = "./"; // Path to material files

	Vertex* pVList = new Vertex[vcount];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	//インデックスバッファ作成

			case SDLK_RIGHT:

	//ビューポート設定

	float    farZ = 100.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_Viewport.TopLeftX = 0;

	std::vector<tinyobj::material_t> materials;

		}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pInputLayout);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{

	XMFLOAT4X4 view;



				break;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	Release();

{



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{

	SAFE_RELEASE(m_pSwapChain);



		return hr;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pSwapChain);



	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#include <SDL.h>

	{



		1,







		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

#include <iostream>

	//定数バッファ作成

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vbDesc.MiscFlags = 0;

	}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	m_pInputLayout = NULL;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#include "DirectXManager.h"

	D3D11_BUFFER_DESC ibDesc;

HRESULT CD3DTest::Create(HWND hwnd)

		if (!reader.Error().empty())

		pVList[i] = vertexlist[i];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	auto& shapes = reader.GetShapes();

	scDesc.BufferCount = 1;

	txDesc.MiscFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMFLOAT4 specular;          //反射(r,g,b)





	//テクスチャ読み込み

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	//頂点シェーダー生成

	scDesc.Windowed = TRUE;

	ibDesc.StructureByteStride = 0;

	m_pMatrixBuffer = NULL;

		//User presses a key

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	std::vector<tinyobj::shape_t> shapes;

	}

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		if (!reader.Error().empty())

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

		if (e.type == SDL_QUIT)

	}

	SAFE_RELEASE(m_pTextureView);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

#include <SDL.h>

	delete[] pVList;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		if (!reader.Error().empty())

};

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	scDesc.SampleDesc.Quality = 0;



		{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		cout << "SDL_INIT_ERROR" << endl;

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pImmediateContext);



	}

	std::vector<tinyobj::shape_t> shapes;



	delete[] pVList;

	WORD   icount = indexList.size();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	XMStoreFloat4(&clb.eyePos, eye);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			for (size_t v = 0; v < num_vertices; v++)

		KEY_PRESS_SURFACE_DEFAULT,

	m_pSwapChain = NULL;

	vrData.SysMemSlicePitch = 0;



	if (!error.empty())







				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pInputLayout);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	::GetClientRect(hwnd, &rect);

		delete[] pIList;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	SDL_Quit();

		if (e.type == SDL_QUIT)



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	vbDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	while (SDL_PollEvent(&e) != 0)

	SDL_DestroyRenderer(ren);

	irData.SysMemPitch = 0;

	if (FAILED(hr))

	float    farZ = 100.0f;

	//First we need to start up SDL, and make sure it went ok



	m_Viewport.MaxDepth = 1.0f;

	scDesc.BufferDesc.Width = rect.Width();



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pSwapChain);



		pVList[i] = vertexlist[i];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	irData.SysMemSlicePitch = 0;

};

		R"(cube.obj)");

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_DestroyWindow(win);

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

 */

	::GetClientRect(hwnd, &rect);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pDepthStencilView);

		&m_pSwapChain,

	SDL_DestroyWindow(win);

		exit(1);

	m_pSwapChain = NULL;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//Key press surfaces constants

	pBackBuffer->Release();

};



	cbDesc.MiscFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

			switch (e.key.keysym.sym)



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.StructureByteStride = 0;

	float    nearZ = 0.1f;



	for (int i = 0; i < 3; i++)

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_BUFFER_DESC ibDesc;

	}

	//Key press surfaces constants

	XMFLOAT4X4 world;

	//頂点バッファ作成



	m_pVertexShader = NULL;

	{

		if (!reader.Error().empty())

	irData.pSysMem = &pIList[0];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

int SEGMENT = 36;

		return hr;

			default:

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		SDL_RenderPresent(ren);

	//Clean up our objects and quit

		exit(1);

	dsDesc.Texture2D.MipSlice = 0;

		&m_pSwapChain,

	}

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		R"(cube.obj)");

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_SUBRESOURCE_DATA vrData;

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pTexture);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	m_VertexCount = vcount;

	ibDesc.MiscFlags = 0;

	tinyobj::ObjReader reader;

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	if (FAILED(hr))

				tinyobj::real_t tx =

	float    aspect = m_Viewport.Width / m_Viewport.Height;





				// access to vertex

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderClear(ren);

	delete[] pVList;





	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

int main(int, char**)





	float    farZ = 100.0f;

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))



	ibDesc.MiscFlags = 0;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);



	WORD* pIList = new WORD[icount];

	scDesc.BufferDesc.Height = rect.Height();

	//深度ステンシルバッファ作成

	scDesc.SampleDesc.Quality = 0;

	cbDesc.CPUAccessFlags = 0;

		&scDesc,

int main(int, char**)

		SDL_RenderPresent(ren);



};

	return 0;

	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pSwapChain);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	dsDesc.Texture2D.MipSlice = 0;

#include <SDL.h>

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

	{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		D3D_DRIVER_TYPE_HARDWARE,

	// Loop over shapes

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	return 0;



	tinyobj::attrib_t attrib;

	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pMatrixBuffer = NULL;

#endif



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		{

#define TINYOBJLOADER_IMPLEMENTATION

			index_offset += num_vertices;





#define TINYOBJLOADER_IMPLEMENTATION



	{





int main(int, char**)

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_DOWN:

		D3D_DRIVER_TYPE_HARDWARE,



	tinyobj::attrib_t attrib;

				break;

	bool ret = tinyobj::LoadObj(

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

{

		1,

	ConstantLightBuffer clb;

	float    fov = XMConvertToRadians(20.0f);

	}

			index_offset += num_vertices;

	float    nearZ = 0.1f;

	SDL_DestroyTexture(tex);

			// Loop over vertices in the face.



	{



	m_pVertexBuffer = NULL;



		return hr;

	SDL_Event e;

	ConstantMatrixBuffer cmb;



		return 1;

	SDL_DestroyRenderer(ren);





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	SAFE_RELEASE(m_pPixelShader);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

	D3D11_BUFFER_DESC ibDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	txDesc.Height = rect.Height();

{

	txDesc.ArraySize = 1;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (size_t s = 0; s < shapes.size(); s++)

	DXGI_SWAP_CHAIN_DESC scDesc;



	D3D11_SAMPLER_DESC smpDesc;

		if (!reader.Error().empty())

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemSlicePitch = 0;

#include <SDL.h>

	SAFE_RELEASE(m_pDevice);

	auto& shapes = reader.GetShapes();

	if (!reader.ParseFromFile(inputfile, reader_config))

	}

	//First we need to start up SDL, and make sure it went ok





	XMFLOAT4         eyePos;   //視点座標

		exit(1);

	D3D11_BUFFER_DESC vbDesc;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		flags,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		R"(cube.obj)");

	SAFE_RELEASE(m_pIndexBuffer);

				// access to vertex

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_DOWN,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ibDesc.StructureByteStride = 0;



{

#include <SDL.h>

HRESULT CD3DTest::Create(HWND hwnd)

	SDL_DestroyRenderer(ren);

	XMFLOAT4 specular;          //反射(r,g,b)

		SDL_Delay(1000);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



		return hr;

			break;



	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Quit();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		{

}

	delete[] pVList;

		return hr;







	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	{



		KEY_PRESS_SURFACE_RIGHT,

		return hr;

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4         eyePos;   //視点座標

	ibDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDepthStencilTexture);

		pIList[j] = indexList[j];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SAFE_RELEASE(m_pTexture);

		}

	cbDesc.MiscFlags = 0;



void CD3DTest::Release()

		&attrib,

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (FAILED(hr))



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	if (FAILED(hr))

	m_pVertexBuffer = NULL;

		return hr;





	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	m_Viewport.TopLeftY = 0;

	tinyobj::ObjReader reader;

	float    nearZ = 0.1f;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.Windowed = TRUE;

		else if (e.type == SDL_KEYDOWN)

/*

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

}

	enum KeyPressSurfaces

		return hr;

int SEGMENT = 36;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				indexlist.push_back(idx.vertex_index);



	vrData.SysMemPitch = 0;

	//vector<WORD> index_t;

	m_IndexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	for (size_t s = 0; s < shapes.size(); s++)

			}





	{

		cout << "SDL_INIT_ERROR" << endl;

struct ConstantLight {

	float    nearZ = 0.1f;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

	delete[] pVList;

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

				vertex.push_back(vertex_tmp);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&materials,

	XMFLOAT4X4 world;

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	txDesc.MiscFlags = 0;



	CRect                rect;

		return hr;

	m_pTexture = NULL;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pDevice);

	Vertex* pVList = new Vertex[vcount];

	//vector<Vertex> vertex_t;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	Release();

{



		else if (e.type == SDL_KEYDOWN)



	vbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

	}

	//深度ステンシルバッファ作成

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::string error;



			index_offset += num_vertices;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

 */



	m_IndexCount = icount;



	enum KeyPressSurfaces

		pVList[i] = vertexlist[i];





	pBackBuffer->Release();

			for (size_t v = 0; v < fv; v++)

	{

	vrData.pSysMem = &pVList[0];



	vector<WORD> indexList;

		&attrib,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pSwapChain);

	vbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::shape_t> shapes;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Quit();

	SDL_FreeSurface(bmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderClear(ren);

	m_pPixelShader = NULL;

	irData.pSysMem = &pIList[0];

				break;

	m_pInputLayout = NULL;



	D3D11_BUFFER_DESC cbDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_FreeSurface(bmp);

	if (!reader.ParseFromFile(inputfile, reader_config))

};

			exit(1);

#include <SDL.h>

	//テクスチャ読み込み







	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	if (FAILED(hr))



	{

	Release();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vbDesc.MiscFlags = 0;



		return hr;

	std::vector<tinyobj::shape_t> shapes;

	{

struct ConstantMaterial {



		SDL_Delay(1000);

	}

	Release();



#ifdef _DEBUG

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	UINT strides = sizeof(Vertex);

			for (size_t v = 0; v < num_vertices; v++)

using std::cout; using std::endl;

	}

	return;

	irData.pSysMem = &pIList[0];

	return;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		{





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		delete[] pIList;

	if (FAILED(hr))



	SAFE_RELEASE(m_pTextureView);

	cbDesc.StructureByteStride = 0;

	vrData.SysMemPitch = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		D3D_DRIVER_TYPE_HARDWARE,

	CRect                rect;







		D3D_DRIVER_TYPE_HARDWARE,



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		delete[] pVList;

	delete[] pIList;

		//User requests quit

	cbDesc.StructureByteStride = 0;

struct ConstantLight {

		return hr;

	tinyobj::ObjReaderConfig reader_config;

	//vector<WORD> index_t;

	m_pIndexBuffer = NULL;

		return hr;

	scDesc.OutputWindow = hwnd;

	//頂点バッファ作成

				WORD index = idx.vertex_index;



	reader_config.mtl_search_path = "./"; // Path to material files

	scDesc.SampleDesc.Count = 1;

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		}

			for (size_t v = 0; v < num_vertices; v++)

		m_pImmediateContext->ClearState();



		&scDesc,

	auto& shapes = reader.GetShapes();



	ibDesc.MiscFlags = 0;

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pImmediateContext);





	dsDesc.Texture2D.MipSlice = 0;

	m_pVertexBuffer = NULL;

	{

	for (int j = 0; j < icount; j++)

	D3D11_SUBRESOURCE_DATA irData;

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

struct ConstantMaterial {

		SDL_RenderCopy(ren, tex, NULL, NULL);

	dsDesc.Texture2D.MipSlice = 0;

		return hr;

	m_pPixelShader = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{



	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

CD3DTest::~CD3DTest()

				// access to vertex

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Quit();

	SAFE_RELEASE(m_pDepthStencilView);

	WORD   icount = indexList.size();

	SDL_DestroyTexture(tex);

	}

	m_Viewport.Width = (FLOAT)rect.Width();

void CD3DTest::Render()

	vector<Vertex> vertexlist;

		SDL_Delay(1000);

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

		&m_pDevice,

	/*

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	float    farZ = 100.0f;



	std::vector<tinyobj::material_t> materials;

	txDesc.SampleDesc.Count = 1;

	}

	::ZeroMemory(&scDesc, sizeof(scDesc));

		SDL_Delay(1000);

}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}
	vector<Vertex> vertexlist;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	reader_config.mtl_search_path = "./"; // Path to material files

#include <iostream>

	SDL_Event e;



			{

	XMFLOAT4X4 view;

			int num_vertices = shape.mesh.num_face_vertices[f];

	for (int i = 0; i < 3; i++)

		{

struct ConstantMatrixBuffer {

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (!error.empty())

		&error,

		&shapes,

	if (!error.empty())

		SDL_RenderClear(ren);

				break;

};





	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4X4 world;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

	SAFE_RELEASE(m_pInputLayout);

				vertex.push_back(vertex_tmp);

				WORD index = idx.vertex_index;





{





	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vrData.pSysMem = &pVList[0];



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pTextureView = NULL;

	m_pDevice = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	irData.SysMemPitch = 0;

			default:

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			for (size_t v = 0; v < num_vertices; v++)

{

	SDL_DestroyWindow(win);





	m_pVertexBuffer = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	return hr;

	SAFE_RELEASE(m_pDevice);

	float    fov = XMConvertToRadians(20.0f);

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();

		&materials,





	scDesc.Windowed = TRUE;



			break;



		return hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	return 0;

	}



	scDesc.SampleDesc.Quality = 0;



 * Lesson 1: Hello World!



	for (const auto& shape : shapes)

	SAFE_RELEASE(m_pRenderTargetView);



	//頂点バッファ作成

	//vector<Vertex> vertex_t;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				WORD index = idx.vertex_index;

	SDL_Event e;

		KEY_PRESS_SURFACE_UP,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

			case SDLK_UP:

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_SUBRESOURCE_DATA irData;

	SAFE_RELEASE(m_pVertexBuffer);

}






	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			{

	irData.SysMemPitch = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ID3D11Texture2D* pBackBuffer;

		return hr;

	}

	SAFE_RELEASE(m_pVertexBuffer);

			switch (e.key.keysym.sym)

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

		size_t index_offset = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	vector<Vertex> vertexlist;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	//Clean up our objects and quit

	::ZeroMemory(&scDesc, sizeof(scDesc));

	D3D11_TEXTURE2D_DESC txDesc;



	scDesc.BufferDesc.Width = rect.Width();

		// Loop over faces(polygon)

int main(int, char**)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	scDesc.OutputWindow = hwnd;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_Angle += XMConvertToRadians(1.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::ObjReader reader;



	std::string inputfile = "test.obj";

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	HRESULT              hr;

			// Loop over vertices in the face.

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SDL_DestroyRenderer(ren);

		flags,

	m_IndexCount = 0;

			for (size_t v = 0; v < num_vertices; v++)

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pDepthStencilView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





	if (FAILED(hr))



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

		delete[] pVList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

void CD3DTest::Render()

		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		cout << "SDL_INIT_ERROR" << endl;

}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_IndexCount = 0;

	m_Viewport.TopLeftY = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyRenderer(ren);

		&attrib,

				vertex.push_back(vertex_tmp);

		SDL_RenderClear(ren);

	delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		// Loop over faces(polygon)





	SAFE_RELEASE(m_pVertexBuffer);

				WORD index = idx.vertex_index;

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pPixelShader);

	m_VertexCount = 0;



	m_Viewport.TopLeftX = 0;

};

	m_VertexCount = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//ピクセルシェーダー生成

		return hr;

				indexlist.push_back(idx.vertex_index);



	tinyobj::attrib_t attrib;

	cbDesc.StructureByteStride = 0;

	tinyobj::ObjReader reader;



	m_pSwapChain->Present(0, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.ArraySize = 1;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	Vertex* pVList = new Vertex[vcount];

{

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,

	// Loop over shapes

		exit(1);

		KEY_PRESS_SURFACE_DEFAULT,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pDepthStencilTexture = NULL;

			switch (e.key.keysym.sym)

		if (!ret)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pMatrixBuffer = NULL;

	irData.SysMemPitch = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//vector<WORD> index_t;

	auto& materials = reader.GetMaterials();

	D3D11_SUBRESOURCE_DATA vrData;



	{

	Release();



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_IndexCount = icount;

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	txDesc.MiscFlags = 0;

	vbDesc.StructureByteStride = 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

				// access to vertex

				tinyobj::real_t ty =

		&materials,

		SDL_RenderPresent(ren);

	}

	//頂点レイアウト作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	for (size_t s = 0; s < shapes.size(); s++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//頂点シェーダー生成

		}

#include <SDL.h>

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext = NULL;

	float    farZ = 100.0f;

}

		{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

			case SDLK_RIGHT:

	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4X4 view;

	m_pDepthStencilView = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		KEY_PRESS_SURFACE_RIGHT,

}

		if (!reader.Error().empty())





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

	SAFE_RELEASE(m_pRenderTargetView);

	txDesc.SampleDesc.Count = 1;

	Vertex* pVList = new Vertex[vcount];

		&m_pSwapChain,







	ibDesc.CPUAccessFlags = 0;

	{

	//vector<Vertex> vertex_t;

#include <iostream>

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

				WORD index = idx.vertex_index;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.Height = rect.Height();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_IndexCount = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D_FEATURE_LEVEL level;

{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return 1;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	std::string error;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (!error.empty())

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4X4 world;

	if (FAILED(hr))

	SDL_FreeSurface(suf);

	::ZeroMemory(&scDesc, sizeof(scDesc));



#include <SDL.h>

		return hr;



 * Lesson 1: Hello World!

		}

	scDesc.BufferDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

{

	{

	irData.SysMemSlicePitch = 0;

		m_pImmediateContext->ClearState();

	return 0;



	m_pRenderTargetView = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha







	//インデックスバッファ作成

		exit(1);

		SDL_RenderPresent(ren);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	{

		D3D_DRIVER_TYPE_HARDWARE,

}

 */

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

	WORD* pIList = new WORD[icount];

				break;



	m_pDevice = NULL;

		return hr;





		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	vrData.pSysMem = &pVList[0];





	XMFLOAT4X4 projection;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		}

				WORD index = idx.vertex_index;

				vertex.push_back(vertex_tmp);

		pIList[j] = indexList[j];

};

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))



		{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

		delete[] pIList;

void CD3DTest::Render()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ibDesc.CPUAccessFlags = 0;

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				tinyobj::real_t ty =



	auto& shapes = reader.GetShapes();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	return 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		SDL_RenderClear(ren);

	m_IndexCount = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//vector<Vertex> vertex_t;

		1,

	SAFE_RELEASE(m_pTextureView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,



	m_pDepthStencilTexture = NULL;

	//vector<WORD> index_t;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);







				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D11_BUFFER_DESC vbDesc;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pVertexShader);

		SDL_RenderPresent(ren);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		&scDesc,



#include "DirectXManager.h"

#include <iostream>

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyRenderer(ren);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	dsDesc.Format = txDesc.Format;

			int num_vertices = shape.mesh.num_face_vertices[f];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	for (const auto& shape : shapes)

	XMFLOAT4X4 view;

	enum KeyPressSurfaces

			//Select surfaces based on key press

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	ibDesc.ByteWidth = sizeof(WORD) * icount;



			}

	vbDesc.StructureByteStride = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



};

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;

			for (size_t v = 0; v < fv; v++)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferCount = 1;



	for (int i = 0; i < vcount; i++)



	std::vector<tinyobj::material_t> materials;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ID3D11Texture2D* pBackBuffer;

#include "DirectXManager.h"

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4X4 projection;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	}*/





	D3D11_SAMPLER_DESC smpDesc;

HRESULT CD3DTest::Create(HWND hwnd)

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pSampler);

	}



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		}



				tinyobj::real_t ty =

	if (FAILED(hr))

	{

	D3D11_BUFFER_DESC ibDesc;







				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	return hr;



void CD3DTest::Release()

		{

		SDL_Delay(1000);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//深度ステンシルバッファ作成

	return 0;

	int     vcount = vertexlist.size();

	if (FAILED(hr))

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

	return hr;

			// Loop over vertices in the face.

	SDL_DestroyTexture(tex);

#include <iostream>

	m_pImmediateContext = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	WORD   icount = indexList.size();

	m_pTexture = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	}

	scDesc.Windowed = TRUE;

	pBackBuffer->Release();

	if (!reader.Warning().empty())

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			case SDLK_DOWN:

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDepthStencilView = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.ArraySize = 1;



	m_VertexCount = vcount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		{





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

HRESULT CD3DTest::Create(HWND hwnd)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ConstantMaterial material; //物体の質感



	for (size_t s = 0; s < shapes.size(); s++)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pInputLayout = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//Create Index

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::vector<tinyobj::material_t> materials;

		&materials,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

 * Lesson 1: Hello World!

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	std::string inputfile = "test.obj";

		NULL,

	vbDesc.MiscFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		pIList[j] = indexList[j];

	SDL_DestroyTexture(tex);

CD3DTest::~CD3DTest()

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

HRESULT CD3DTest::Create(HWND hwnd)

		//User presses a key

	//First we need to start up SDL, and make sure it went ok

		R"(cube.obj)");

				break;

	if (FAILED(hr))

	Release();

		NULL,

	}

	SAFE_RELEASE(m_pTexture);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pVertexShader);

	irData.SysMemSlicePitch = 0;

	m_VertexCount = 0;

/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_IndexCount = 0;



	if (FAILED(hr))

	if (FAILED(hr))

		}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	auto& shapes = reader.GetShapes();



	ZeroMemory(&dsDesc, sizeof(dsDesc));

			case SDLK_RIGHT:

	::GetClientRect(hwnd, &rect);





		&m_pImmediateContext);

		{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4X4 projection;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

struct ConstantLight {

		SDL_RenderClear(ren);

	float    farZ = 100.0f;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (int i = 0; i < vcount; i++)

	txDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

using std::cout; using std::endl;

CD3DTest::CD3DTest()

	}

	vbDesc.CPUAccessFlags = 0;

	tinyobj::ObjReader reader;

				break;







	for (int j = 0; j < icount; j++)



	{

		SDL_Delay(1000);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	D3D11_BUFFER_DESC cbDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	std::string error;



	irData.SysMemSlicePitch = 0;



	scDesc.BufferDesc.Width = rect.Width();



		return hr;

	//Vertex* pVList = new Vertex[vcount];

	}



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (m_pImmediateContext)

	SDL_DestroyTexture(tex);

		{

	{

	//Clean up our objects and quit

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	SAFE_RELEASE(m_pDepthStencilView);

	D3D11_TEXTURE2D_DESC txDesc;

			{

				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	irData.SysMemPitch = 0;

				WORD index = idx.vertex_index;

		1,

	UINT offsets = 0;

	float    nearZ = 0.1f;

				// access to vertex

	m_pTextureView = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.CPUAccessFlags = 0;

 * Lesson 1: Hello World!

	m_pLightBuffer = NULL;

	m_pPixelShader = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



			switch (e.key.keysym.sym)

		SDL_RenderPresent(ren);

				// access to vertex

		D3D_DRIVER_TYPE_HARDWARE,



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

};

	//Key press surfaces constants

};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

}
	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

	m_Angle += XMConvertToRadians(1.0f);

			{

		{

			index_offset += fv;



}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		SDL_RenderClear(ren);

		&m_pSwapChain,

		size_t index_offset = 0;  // インデントのオフセット

		&m_pSwapChain,

	m_VertexCount = vcount;

	auto& materials = reader.GetMaterials();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.SampleDesc.Count = 1;



}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	cbDesc.CPUAccessFlags = 0;

		return hr;

		&m_pSwapChain,

	return 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		size_t index_offset = 0;  // インデントのオフセット



		KEY_PRESS_SURFACE_LEFT,

{

	D3D11_TEXTURE2D_DESC txDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//頂点シェーダー生成



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	Vertex* pVList = new Vertex[vcount];



	}



		return hr;

	vrData.pSysMem = &pVList[0];

	m_IndexCount = icount;

			for (size_t v = 0; v < fv; v++)

{





	cbDesc.CPUAccessFlags = 0;

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pImmediateContext);





	auto& materials = reader.GetMaterials();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pImmediateContext);

		if (!reader.Error().empty())





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		if (!ret)

		KEY_PRESS_SURFACE_TOTAL

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_IndexCount = icount;

	/*

	cbDesc.CPUAccessFlags = 0;

#include <iostream>

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pVertexShader = NULL;

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pDepthStencilView);

	txDesc.ArraySize = 1;

	m_pDevice = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	std::string error;

}

	WORD* pIList = new WORD[icount];



	ibDesc.CPUAccessFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





		pVList[i] = vertexlist[i];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		pLevels,

	SAFE_RELEASE(m_pSampler);

	//Vertex* pVList = new Vertex[vcount];

		&m_pSwapChain,

	}

#include "DirectXManager.h"

	Vertex* pVList = new Vertex[vcount];



		&error,

				break;



				vertex.push_back(vertex_tmp);

	for (int j = 0; j < icount; j++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



				tinyobj::real_t ty =

				break;

#include <iostream>

			case SDLK_LEFT:

	}

				indexlist.push_back(index);



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

#ifdef _DEBUG

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	float    fov = XMConvertToRadians(20.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	HRESULT              hr;

}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	Vertex* pVList = new Vertex[vcount];

	std::string error;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

	UINT flags = 0;

	dsDesc.Format = txDesc.Format;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (!reader.Warning().empty())

CD3DTest::~CD3DTest()

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	HRESULT              hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

void CD3DTest::Render()

		NULL,

};



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_DestroyRenderer(ren);

	m_VertexCount = vcount;

	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User requests quit

	if (FAILED(hr))

int SEGMENT = 36;

	ibDesc.MiscFlags = 0;

void CD3DTest::Render()

		&m_pDevice,

	if (FAILED(hr))

		}







	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





		return hr;

		delete[] pIList;

		D3D11_SDK_VERSION,

	bool ret = tinyobj::LoadObj(

	{

	m_pDevice = NULL;

		return hr;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4 ambient;           //環境(r,g,b)

int SEGMENT = 36;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.MipLevels = 1;

				break;

		cout << "SDL_INIT_ERROR" << endl;





	SDL_FreeSurface(suf);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

#include <SDL.h>

		}

	SAFE_RELEASE(m_pSwapChain);

	D3D11_SUBRESOURCE_DATA vrData;

#include "DirectXManager.h"

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				break;

		if (!ret)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			}

	//Vertex* pVList = new Vertex[vcount];

#include <SDL.h>

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	//vector<Vertex> vertex_t;

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t ty =

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	}



	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//Key press surfaces constants

		delete[] pIList;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			default:

		&shapes,



	scDesc.BufferCount = 1;

{

	if (FAILED(hr))

		&materials,

	XMFLOAT4 specular;          //反射(r,g,b)



	vector<Vertex> vertexlist;

	return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;



	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	vbDesc.StructureByteStride = 0;

	for (const auto& shape : shapes)

	}

	std::vector<tinyobj::shape_t> shapes;

}

}

{

	m_pPixelShader = NULL;

	txDesc.CPUAccessFlags = 0;

#endif

				indexlist.push_back(idx.vertex_index);

	delete[] pVList;

	SDL_FreeSurface(bmp);

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//テクスチャ読み込み

	SDL_DestroyRenderer(ren);

		SDL_Delay(1000);

	D3D11_BUFFER_DESC vbDesc;

		}

	}



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

};

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



			case SDLK_RIGHT:

{

	tinyobj::attrib_t attrib;

	txDesc.MipLevels = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SAFE_RELEASE(m_pVertexShader);

		size_t index_offset = 0;  // インデントのオフセット

	for (const auto& shape : shapes)

	m_pSwapChain = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

#include <iostream>

	cbDesc.MiscFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pInputLayout = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	LoadObj(vertexlist, indexList);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

};

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}

	m_pSampler = NULL;



	D3D11_BUFFER_DESC cbDesc;



	//Create Index

	XMFLOAT4         ambient;  //環境光(r,g,b)



			break;

		D3D11_SDK_VERSION,

	XMFLOAT4X4 world;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		KEY_PRESS_SURFACE_DOWN,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}

};





	flags |= D3D11_CREATE_DEVICE_DEBUG;

		m_pImmediateContext->ClearState();

		//User requests quit

		pVList[i] = vertexlist[i];

	XMFLOAT4X4 projection;



		return hr;



	if (FAILED(hr))

		exit(1);

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (FAILED(hr))

#include <SDL.h>

	ibDesc.CPUAccessFlags = 0;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		KEY_PRESS_SURFACE_LEFT,

	txDesc.Height = rect.Height();

	//vector<WORD> index_t;

	float    nearZ = 0.1f;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	irData.SysMemSlicePitch = 0;

	m_pDepthStencilView = NULL;

	D3D_FEATURE_LEVEL level;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



HRESULT CD3DTest::Create(HWND hwnd)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		pVList[i] = vertexlist[i];

	std::string error;



		if (!reader.Error().empty())

		return hr;

		return hr;

	txDesc.Height = rect.Height();

			}

	SDL_DestroyTexture(tex);





	D3D11_BUFFER_DESC cbDesc;

	m_pDepthStencilTexture = NULL;

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}

{

	XMFLOAT4X4 world;

	SDL_DestroyTexture(tex);



		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			index_offset += fv;

	{

	m_pIndexBuffer = NULL;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pImmediateContext);

			}

	{



	XMFLOAT4 ambient;           //環境(r,g,b)

			switch (e.key.keysym.sym)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	enum KeyPressSurfaces

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (!error.empty())



	ID3D11Texture2D* pBackBuffer;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

 * Lesson 1: Hello World!

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.Width = (FLOAT)rect.Width();

{

		return hr;

	ConstantLightBuffer clb;

	std::string error;

		&attrib,

	ibDesc.MiscFlags = 0;

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	float    farZ = 100.0f;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	dsDesc.Texture2D.MipSlice = 0;

	//頂点シェーダー生成

			case SDLK_UP:

	for (int j = 0; j < icount; j++)

	}

	vbDesc.CPUAccessFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return 1;

	if (FAILED(hr))

	//定数バッファ作成

	txDesc.MiscFlags = 0;

	irData.SysMemPitch = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	/*

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_VertexCount = vcount;

	m_pTexture = NULL;

	txDesc.SampleDesc.Quality = 0;

		&shapes,

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

int SEGMENT = 36;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.CPUAccessFlags = 0;

	ConstantMaterial material; //物体の質感



		return hr;

		if (!reader.Error().empty())

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vrData.SysMemSlicePitch = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pTexture);

		&level,

	if (FAILED(hr))

	{



{

	}

	SDL_FreeSurface(suf);



	m_pSwapChain->Present(0, 0);



	m_pSampler = NULL;

	{



	{

			for (size_t v = 0; v < fv; v++)

	{

				tinyobj::real_t ty =



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <iostream>

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pDevice);

	if (!reader.Warning().empty())

	Release();

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_VertexCount = vcount;

	txDesc.Width = rect.Width();



	cbDesc.CPUAccessFlags = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	txDesc.ArraySize = 1;

			//Select surfaces based on key press



		{

			exit(1);

		if (!ret)

	UINT flags = 0;

}

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//深度ステンシルバッファ作成

	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pTexture);

	//Vertex* pVList = new Vertex[vcount];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	delete[] pVList;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		cout << "SDL_INIT_ERROR" << endl;

	float    nearZ = 0.1f;

	{

#include <SDL.h>

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	{



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	if (!error.empty())

			case SDLK_UP:

	//vector<Vertex> vertex_t;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	scDesc.SampleDesc.Count = 1;

		}



		NULL,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		delete[] pIList;

		}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,



		SDL_RenderPresent(ren);

	cbDesc.MiscFlags = 0;

	cbDesc.MiscFlags = 0;

	tinyobj::ObjReader reader;

				WORD index = idx.vertex_index;



	ZeroMemory(&txDesc, sizeof(txDesc));



		//User presses a key

				break;

			exit(1);

	Vertex* pVList = new Vertex[vcount];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);





	m_pVertexShader = NULL;

{

	std::string imagePath = "hello.bmp";

	XMFLOAT4         ambient;  //環境光(r,g,b)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{



	{

	m_pSwapChain->Present(0, 0);

 */

	WORD   icount = indexList.size();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.StructureByteStride = 0;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	LoadObj(vertexlist, indexList);

	SDL_DestroyWindow(win);





	pBackBuffer->Release();

	SAFE_RELEASE(m_pSampler);

	m_pDevice = NULL;

	ConstantLightBuffer clb;





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

	SDL_Event e;

		if (!reader.Error().empty())

			}

				indexlist.push_back(idx.vertex_index);



				tinyobj::real_t ty =



	{

	m_IndexCount = 0;

	vector<Vertex> vertexlist;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ZeroMemory(&txDesc, sizeof(txDesc));









	vector<WORD> indexList;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		if (!reader.Error().empty())

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

struct ConstantLightBuffer {

		return hr;

	txDesc.SampleDesc.Count = 1;

using std::cout; using std::endl;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		{



using std::cout; using std::endl;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		if (!ret)

};

		pVList[i] = vertexlist[i];



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

#include "DirectXManager.h"

		&m_pSwapChain,

		flags,

	}

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_IndexCount = icount;

	Release();

	//Key press surfaces constants

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	Release();

		pIList[j] = indexList[j];

	}

			switch (e.key.keysym.sym)

	}

};

	auto& materials = reader.GetMaterials();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

{

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.MaxDepth = 1.0f;

				break;

		SDL_RenderPresent(ren);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.MinDepth = 0.0f;

	txDesc.SampleDesc.Quality = 0;

	}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		1,

	m_pSwapChain = NULL;

void CD3DTest::Render()

	m_Viewport.TopLeftX = 0;



	vbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	Release();

		flags,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

}

	m_pInputLayout = NULL;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_BUFFER_DESC cbDesc;



	scDesc.BufferDesc.Height = rect.Height();

	//Key press surfaces constants



	m_pTextureView = NULL;



	SAFE_RELEASE(m_pImmediateContext);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pLightBuffer = NULL;



		KEY_PRESS_SURFACE_RIGHT,

	irData.SysMemSlicePitch = 0;

	scDesc.BufferDesc.Height = rect.Height();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	std::string imagePath = "hello.bmp";

	D3D11_BUFFER_DESC vbDesc;





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	txDesc.CPUAccessFlags = 0;





	for (size_t s = 0; s < shapes.size(); s++)

		&attrib,



		pIList[j] = indexList[j];

{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext = NULL;



	std::vector<tinyobj::shape_t> shapes;

};

	//Create Index

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	Release();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMFLOAT4         eyePos;   //視点座標

	WORD* pIList = new WORD[icount];

{



};

	vbDesc.StructureByteStride = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



}
	}

				tinyobj::real_t tx =

	/*

	cbDesc.StructureByteStride = 0;

	{

		size_t index_offset = 0;  // インデントのオフセット



	Release();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

	while (SDL_PollEvent(&e) != 0)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))

				WORD index = idx.vertex_index;



};

	m_Angle += XMConvertToRadians(1.0f);





	m_pSampler = NULL;



	m_pSwapChain->Present(0, 0);





		if (e.type == SDL_QUIT)

		else if (e.type == SDL_KEYDOWN)



	ConstantLight    pntLight; //点光源

	tinyobj::ObjReader reader;



		return hr;

	}

	UINT strides = sizeof(Vertex);

	}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	std::string error;

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&m_pSwapChain,



	SAFE_RELEASE(m_pRenderTargetView);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		size_t index_offset = 0;

			}

	m_pImmediateContext = NULL;

	if (FAILED(hr))



	}*/

}

#include <SDL.h>

		return 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	irData.SysMemSlicePitch = 0;

		return 1;

		{

	SDL_DestroyTexture(tex);

using std::cout; using std::endl;

		size_t index_offset = 0;  // インデントのオフセット



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyTexture(tex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	float    nearZ = 0.1f;

}

{

	XMFLOAT4X4 view;

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },


