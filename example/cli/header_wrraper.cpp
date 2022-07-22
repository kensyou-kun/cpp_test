				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

	HRESULT              hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				vertex.push_back(vertex_tmp);

		else if (e.type == SDL_KEYDOWN)

				break;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::string inputfile = "test.obj";



	SDL_DestroyTexture(tex);



	txDesc.Height = rect.Height();

	};

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string error;

	};



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		{

	m_Viewport.Height = (FLOAT)rect.Height();

		&level,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	float    fov = XMConvertToRadians(20.0f);



	SAFE_RELEASE(m_pIndexBuffer);





	{

	ConstantLightBuffer clb;



		return hr;

	m_IndexCount = icount;

		}

	SAFE_RELEASE(m_pImmediateContext);

	m_Angle += XMConvertToRadians(1.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	}

	{

			switch (e.key.keysym.sym)



	m_pDevice = NULL;

	std::string imagePath = "hello.bmp";

	m_pVertexShader = NULL;



		//User requests quit

};

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Quit();





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		SDL_Delay(1000);

	SDL_DestroyRenderer(ren);

				break;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pDevice = NULL;

			default:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));

struct ConstantMatrixBuffer {

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pSampler = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.MiscFlags = 0;

	int     vcount = vertexlist.size();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.MinDepth = 0.0f;

			case SDLK_RIGHT:

		if (!ret)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.SampleDesc.Quality = 0;

	vrData.SysMemPitch = 0;

	if (FAILED(hr))

	HRESULT              hr;



	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

using std::cout; using std::endl;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pTexture);

		}

		pVList[i] = vertexlist[i];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		if (e.type == SDL_QUIT)

				indexlist.push_back(index);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	irData.SysMemSlicePitch = 0;



		return hr;

	auto& shapes = reader.GetShapes();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pDepthStencilTexture = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	auto& shapes = reader.GetShapes();



	SDL_Quit();

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexShader);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    farZ = 100.0f;

		{

	ID3D11Texture2D* pBackBuffer;

#include "DirectXManager.h"



	{

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User requests quit



	if (FAILED(hr))

	SDL_Quit();

		}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Height = rect.Height();

	}

				tinyobj::real_t tx =

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pSwapChain);

}

	irData.SysMemPitch = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				break;

	ConstantLight    pntLight; //点光源

				// access to vertex

	m_pImmediateContext = NULL;

		size_t index_offset = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (!error.empty())

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return hr;



	SDL_Event e;

	std::string inputfile = "test.obj";

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferCount = 1;

	}



	cbDesc.MiscFlags = 0;

	}

	//定数バッファ作成



	//テクスチャ読み込み

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_DestroyRenderer(ren);

	vbDesc.StructureByteStride = 0;

	{

	return hr;

	txDesc.Height = rect.Height();

		}

	delete[] pVList;

	m_pIndexBuffer = NULL;

	irData.pSysMem = &pIList[0];

	{

}


	return 0;

		return hr;



struct ConstantMaterial {

	};

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pVertexShader);

{

		// Loop over faces(polygon)

	cbDesc.StructureByteStride = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantMaterial material; //物体の質感

	std::string error;

				break;

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pIndexBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

		NULL,

	tinyobj::ObjReader reader;

	m_VertexCount = 0;



#ifdef _DEBUG

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

{

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pVertexBuffer = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

int SEGMENT = 36;

		return hr;

	//頂点レイアウト作成

		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

int main(int, char**)

struct ConstantMatrixBuffer {

	Vertex* pVList = new Vertex[vcount];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

int SEGMENT = 36;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.TopLeftX = 0;

	m_Viewport.TopLeftY = 0;

{

	return hr;

	HRESULT              hr;

	//頂点レイアウト作成

	LoadObj(vertexlist, indexList);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.Width = rect.Width();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	scDesc.SampleDesc.Count = 1;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

		return hr;

				indexlist.push_back(index);

			case SDLK_RIGHT:

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//頂点バッファ作成

	//テクスチャ読み込み

}

		exit(1);

		return hr;

			case SDLK_DOWN:



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.specular, materialSpecular);







	SDL_DestroyWindow(win);

	Release();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.SampleDesc.Quality = 0;

		return hr;

		return hr;



	if (FAILED(hr))

	{

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;

	{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

{

	//テクスチャ読み込み

 */



		delete[] pIList;

	Vertex* pVList = new Vertex[vcount];

}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			exit(1);

		// Loop over faces(polygon)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyTexture(tex);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pIndexBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	D3D11_BUFFER_DESC cbDesc;

		&m_pDevice,

		if (!ret)

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				indexlist.push_back(index);

		//User requests quit

	SDL_DestroyRenderer(ren);

			index_offset += num_vertices;





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	bool ret = tinyobj::LoadObj(

	}

		R"(cube.obj)");

	for (int i = 0; i < vcount; i++)

	vector<Vertex> vertexlist;



	if (FAILED(hr))

struct ConstantLight {

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (FAILED(hr))

		return hr;

{

	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				break;

	//vector<WORD> index_t;

		return hr;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		&m_pDevice,

	{

	{

		KEY_PRESS_SURFACE_RIGHT,

	while (SDL_PollEvent(&e) != 0)

				WORD index = idx.vertex_index;

struct ConstantLightBuffer {

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Quit();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

		//User requests quit

			}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

			{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#ifdef _DEBUG

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	delete[] pVList;

	scDesc.Windowed = TRUE;

	{



			case SDLK_LEFT:

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

		}

	ibDesc.ByteWidth = sizeof(WORD) * icount;



{

	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4X4 world;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			break;

		return hr;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

HRESULT CD3DTest::Create(HWND hwnd)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT offsets = 0;

	SDL_DestroyRenderer(ren);

	if (m_pImmediateContext)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ConstantMatrixBuffer cmb;



	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//First we need to start up SDL, and make sure it went ok

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_FreeSurface(suf);

	if (!reader.ParseFromFile(inputfile, reader_config))

		cout << "SDL_INIT_ERROR" << endl;

HRESULT CD3DTest::Create(HWND hwnd)

	for (int j = 0; j < icount; j++)

		size_t index_offset = 0;



	while (SDL_PollEvent(&e) != 0)

		R"(cube.obj)");

	m_pDevice = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.StructureByteStride = 0;



	}*/

	SAFE_RELEASE(m_pDepthStencilTexture);

	};

	pBackBuffer->Release();

	{



	if (FAILED(hr))

	Release();

	m_Viewport.TopLeftX = 0;

		delete[] pVList;

	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));



			case SDLK_LEFT:



				break;



	//インデックスバッファ作成

	SDL_Quit();



	ZeroMemory(&txDesc, sizeof(txDesc));

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			// Loop over vertices in the face.

		SDL_RenderClear(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);



		else if (e.type == SDL_KEYDOWN)







	SAFE_RELEASE(m_pDepthStencilTexture);



	D3D11_BUFFER_DESC cbDesc;

		return hr;

	SAFE_RELEASE(m_pLightBuffer);

	if (!reader.Warning().empty())

	//テクスチャ読み込み

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_DestroyRenderer(ren);

	cbDesc.CPUAccessFlags = 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

	auto& materials = reader.GetMaterials();

		flags,

	{





	{

		&m_pSwapChain,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

	//Clean up our objects and quit

#endif



int main(int, char**)

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (e.type == SDL_QUIT)

 * Lesson 1: Hello World!





 */

	m_pInputLayout = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::string inputfile = "test.obj";

			{

		SDL_RenderPresent(ren);

		if (e.type == SDL_QUIT)

	delete[] pIList;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return 1;

		return hr;



	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexBuffer);

int main(int, char**)

	SAFE_RELEASE(m_pImmediateContext);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	auto& shapes = reader.GetShapes();

		pLevels,



			for (size_t v = 0; v < fv; v++)

				indexlist.push_back(index);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			for (size_t v = 0; v < fv; v++)

	{

 */

		&attrib,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	ConstantMatrixBuffer cmb;

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	ZeroMemory(&txDesc, sizeof(txDesc));





	SDL_DestroyWindow(win);



		else if (e.type == SDL_KEYDOWN)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	txDesc.ArraySize = 1;

	//定数バッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	UINT flags = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)



	vrData.SysMemSlicePitch = 0;

	SDL_DestroyRenderer(ren);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

}

	m_pTexture = NULL;

	if (FAILED(hr))

	SDL_Event e;

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





		&error,

	m_pDepthStencilTexture = NULL;

struct ConstantLight {

		SDL_RenderPresent(ren);

	//Create Index



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



};

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_DestroyTexture(tex);

				break;

struct ConstantLight {



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

{



	m_pInputLayout = NULL;

			case SDLK_UP:

	for (int j = 0; j < icount; j++)



	D3D11_SUBRESOURCE_DATA irData;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_BUFFER_DESC ibDesc;

	irData.SysMemPitch = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

		return hr;

	float    fov = XMConvertToRadians(20.0f);



}

			{

	m_pSwapChain = NULL;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4 pos;               //座標(x,y,z)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	ID3D11Texture2D* pBackBuffer;

		if (!reader.Error().empty())



	m_pDepthStencilTexture = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





		KEY_PRESS_SURFACE_TOTAL

	cbDesc.CPUAccessFlags = 0;

			case SDLK_DOWN:

	//テクスチャ読み込み

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderClear(ren);

	D3D11_SAMPLER_DESC smpDesc;

		pIList[j] = indexList[j];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pTextureView);

		&level,

		size_t index_offset = 0;  // インデントのオフセット

	m_pIndexBuffer = NULL;



	{

	m_Angle += XMConvertToRadians(1.0f);

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	{

	}*/



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

};

	SAFE_RELEASE(m_pVertexBuffer);

	//深度ステンシルバッファ作成



	cbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);

	cbDesc.MiscFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			index_offset += fv;

	ZeroMemory(&txDesc, sizeof(txDesc));

		{

		return hr;

	ibDesc.StructureByteStride = 0;

	cbDesc.StructureByteStride = 0;





	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

		return hr;

	txDesc.MiscFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			index_offset += num_vertices;

	std::string error;

			break;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))



	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

#include <SDL.h>

	txDesc.SampleDesc.Count = 1;



#ifdef _DEBUG

	cbDesc.MiscFlags = 0;



	std::string imagePath = "hello.bmp";

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	D3D11_BUFFER_DESC ibDesc;



		&level,

		if (!ret)

		pVList[i] = vertexlist[i];

			case SDLK_LEFT:

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			}



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<WORD> indexList;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_DestroyRenderer(ren);

		return hr;

				indexlist.push_back(index);

	UINT strides = sizeof(Vertex);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



{





	D3D11_BUFFER_DESC ibDesc;

	{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4X4 projection;

	m_pDevice = NULL;

	//深度ステンシルバッファ作成

			{

	{

	ibDesc.CPUAccessFlags = 0;

	tinyobj::ObjReader reader;

	m_Viewport.TopLeftY = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





	m_pInputLayout = NULL;

	//First we need to start up SDL, and make sure it went ok

	UINT offsets = 0;

	SAFE_RELEASE(m_pRenderTargetView);



	SAFE_RELEASE(m_pPixelShader);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

			{

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//vector<WORD> index_t;

	vrData.SysMemPitch = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vbDesc.CPUAccessFlags = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);







	ZeroMemory(&txDesc, sizeof(txDesc));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	bool ret = tinyobj::LoadObj(

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include <iostream>



		&attrib,

	HRESULT              hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D11_BUFFER_DESC cbDesc;

};

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





		if (!ret)

	float    nearZ = 0.1f;

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.OutputWindow = hwnd;

		{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	txDesc.ArraySize = 1;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



			{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	cbDesc.StructureByteStride = 0;

				break;

	tinyobj::ObjReader reader;

	m_VertexCount = vcount;

	while (SDL_PollEvent(&e) != 0)



	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pTexture);

	D3D11_BUFFER_DESC cbDesc;







	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		&materials,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	txDesc.SampleDesc.Quality = 0;

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;



		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_IndexCount = icount;



	txDesc.Width = rect.Width();

	m_pVertexBuffer = NULL;

{

	pBackBuffer->Release();

	return;



		KEY_PRESS_SURFACE_LEFT,

	pBackBuffer->Release();

				indexlist.push_back(index);

	tinyobj::ObjReader reader;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



{

#endif

	m_pDevice = NULL;

}



	for (int j = 0; j < icount; j++)

		{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				// access to vertex

	dsDesc.Format = txDesc.Format;

		return hr;

	vrData.pSysMem = &pVList[0];

			{

				tinyobj::real_t tx =

CD3DTest::~CD3DTest()

	std::vector<tinyobj::shape_t> shapes;



	if (SDL_Init(SDL_INIT_VIDEO != 0))



		R"(cube.obj)");

	m_pTextureView = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

CD3DTest::~CD3DTest()

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&materials,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pDepthStencilTexture);

	irData.SysMemSlicePitch = 0;



			{



	HRESULT              hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pInputLayout = NULL;

	std::string error;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	txDesc.Height = rect.Height();

	//頂点レイアウト作成

				// access to vertex

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ConstantMaterial material; //物体の質感

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	ZeroMemory(&txDesc, sizeof(txDesc));

		pIList[j] = indexList[j];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

#include <iostream>

			int num_vertices = shape.mesh.num_face_vertices[f];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	::GetClientRect(hwnd, &rect);

	std::vector<tinyobj::shape_t> shapes;

	m_Viewport.TopLeftY = 0;

	m_pVertexShader = NULL;

		size_t index_offset = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_SUBRESOURCE_DATA irData;

	tinyobj::ObjReader reader;

		if (!reader.Error().empty())

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;



				WORD index = idx.vertex_index;



	txDesc.SampleDesc.Quality = 0;

		&error,



	for (const auto& shape : shapes)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = D3D11CreateDeviceAndSwapChain(NULL,





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	delete[] pIList;



		KEY_PRESS_SURFACE_TOTAL

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

		if (!ret)

		KEY_PRESS_SURFACE_LEFT,

	dsDesc.Format = txDesc.Format;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		{



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	Release();



	cbDesc.CPUAccessFlags = 0;

	// Loop over shapes

	scDesc.Windowed = TRUE;

CD3DTest::CD3DTest()

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		{

void CD3DTest::Render()

	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	D3D11_SUBRESOURCE_DATA vrData;



	if (!reader.Warning().empty())

	//Key press surfaces constants

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	tinyobj::ObjReader reader;

 */

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				break;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		pVList[i] = vertexlist[i];



	}

		}



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pDevice);

		delete[] pVList;

	m_Viewport.MinDepth = 0.0f;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);



		1,



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{







			break;

		return hr;

	LoadObj(vertexlist, indexList);

	scDesc.OutputWindow = hwnd;

}


	m_pSwapChain->Present(0, 0);

	irData.SysMemSlicePitch = 0;

	//Vertex* pVList = new Vertex[vcount];

{



	m_pTexture = NULL;

	if (FAILED(hr))

	return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	WORD* pIList = new WORD[icount];



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				break;

	ConstantMatrixBuffer cmb;

	vrData.SysMemPitch = 0;

		exit(1);



	vrData.SysMemPitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	vbDesc.StructureByteStride = 0;

		//User requests quit

		NULL,

	{

	SAFE_RELEASE(m_pImmediateContext);

	txDesc.ArraySize = 1;

	vector<WORD> indexList;

	XMFLOAT4X4 world;

		delete[] pIList;

	txDesc.SampleDesc.Count = 1;



		return hr;

	cbDesc.CPUAccessFlags = 0;

		SDL_RenderClear(ren);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	scDesc.OutputWindow = hwnd;

	return hr;



	{

	XMStoreFloat4(&clb.eyePos, eye);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	//Vertex* pVList = new Vertex[vcount];

int main(int, char**)

	if (FAILED(hr))

	txDesc.Width = rect.Width();

		{



	D3D11_SUBRESOURCE_DATA irData;

	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyRenderer(ren);

	m_pIndexBuffer = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





		1,

	SAFE_RELEASE(m_pImmediateContext);

		if (!ret)

		//User presses a key

			case SDLK_UP:

	DXGI_SWAP_CHAIN_DESC scDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Format = txDesc.Format;

	m_pSampler = NULL;

	m_pTextureView = NULL;

	SDL_Event e;



				break;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t tx =

	m_Viewport.MinDepth = 0.0f;

			case SDLK_RIGHT:



	cbDesc.MiscFlags = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			default:



		&m_pImmediateContext);

	if (!reader.ParseFromFile(inputfile, reader_config))

		m_pImmediateContext->ClearState();

	irData.SysMemPitch = 0;



	if (!error.empty())



	txDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pPixelShader);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//頂点レイアウト作成

	if (!reader.Warning().empty())

		SDL_RenderClear(ren);



	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		return hr;

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	std::string inputfile = "test.obj";

	Release();

	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMFLOAT4X4 world;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		SDL_RenderClear(ren);

	if (FAILED(hr))

	WORD* pIList = new WORD[icount];

	m_Viewport.Height = (FLOAT)rect.Height();





	D3D11_SUBRESOURCE_DATA vrData;

	}*/

	if (FAILED(hr))

	m_pSampler = NULL;

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	std::vector<tinyobj::shape_t> shapes;

 * Lesson 1: Hello World!



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		KEY_PRESS_SURFACE_RIGHT,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



#include "DirectXManager.h"

	m_Viewport.TopLeftY = 0;

	Release();



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (m_pImmediateContext)

	scDesc.SampleDesc.Quality = 0;



	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



}

			}

	dsDesc.Format = txDesc.Format;

	}

struct ConstantLight {

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

	m_IndexCount = 0;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

	m_pTexture = NULL;

			}

		KEY_PRESS_SURFACE_TOTAL

	Vertex* pVList = new Vertex[vcount];

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		//User presses a key

	m_Viewport.MinDepth = 0.0f;

			case SDLK_UP:

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Quit();

	cbDesc.MiscFlags = 0;

	{

	reader_config.mtl_search_path = "./"; // Path to material files

}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	txDesc.MiscFlags = 0;

	}

	UINT offsets = 0;

	dsDesc.Texture2D.MipSlice = 0;

		SDL_RenderPresent(ren);

	m_pInputLayout = NULL;



		{



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

void CD3DTest::Release()

	m_pMatrixBuffer = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



			// Loop over vertices in the face.

			}

	txDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMFLOAT4X4 projection;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	m_pTexture = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		//User presses a key

	}*/

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{



	ibDesc.CPUAccessFlags = 0;

	tinyobj::attrib_t attrib;

		//User presses a key

	SDL_DestroyRenderer(ren);

	vbDesc.CPUAccessFlags = 0;

void CD3DTest::Render()



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		delete[] pIList;

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	vector<Vertex> vertexlist;

	m_pPixelShader = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_FreeSurface(suf);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;



	scDesc.OutputWindow = hwnd;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				// access to vertex

		// Loop over faces(polygon)

};

	txDesc.MipLevels = 1;

	{

	//深度ステンシルバッファ作成

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	WORD   icount = indexList.size();

	m_pPixelShader = NULL;

		SDL_RenderPresent(ren);

		&materials,

	{

		delete[] pIList;

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pSampler);

	//Create Index

				break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{

			}

		SDL_RenderPresent(ren);

	float    nearZ = 0.1f;

	m_pSwapChain->Present(0, 0);



CD3DTest::~CD3DTest()

	XMFLOAT4         ambient;  //環境光(r,g,b)







	SAFE_RELEASE(m_pInputLayout);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		delete[] pIList;

struct ConstantLightBuffer {

	::ZeroMemory(&scDesc, sizeof(scDesc));

	float    nearZ = 0.1f;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	while (SDL_PollEvent(&e) != 0)

	D3D11_BUFFER_DESC vbDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

	}

	}

	{

		&m_pSwapChain,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	enum KeyPressSurfaces

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



			exit(1);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



#include <iostream>

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	Release();

	m_IndexCount = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#endif



	D3D11_SUBRESOURCE_DATA vrData;

		delete[] pIList;

};

	m_pDepthStencilView = NULL;

			}

	SAFE_RELEASE(m_pDepthStencilTexture);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	for (const auto& shape : shapes)

	}



		// Loop over faces(polygon)

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

CD3DTest::CD3DTest()

	m_pTextureView = NULL;

			{

	irData.pSysMem = &pIList[0];

	if (!reader.Warning().empty())

				// access to vertex



}

	auto& attrib = reader.GetAttrib();

	m_Viewport.Height = (FLOAT)rect.Height();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pVertexShader);



	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		pIList[j] = indexList[j];



	m_Viewport.MinDepth = 0.0f;

	m_pInputLayout = NULL;

		SDL_Delay(1000);

	tinyobj::ObjReaderConfig reader_config;

		return 1;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	reader_config.mtl_search_path = "./"; // Path to material files

{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.SampleDesc.Count = 1;

		&scDesc,

	m_pSampler = NULL;

	SDL_DestroyWindow(win);



		}

	//ビューポート設定

	//ビューポート設定

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		m_pImmediateContext->ClearState();

using std::cout; using std::endl;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

	};

using std::cout; using std::endl;

	irData.pSysMem = &pIList[0];

	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	/*

	SDL_FreeSurface(suf);

	XMFLOAT4 specular;          //反射(r,g,b)

/*

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



			index_offset += fv;

	m_pRenderTargetView = NULL;

		}

	txDesc.SampleDesc.Count = 1;



	if (FAILED(hr))

	UINT strides = sizeof(Vertex);



};

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.StructureByteStride = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	irData.pSysMem = &pIList[0];

};





	{

	m_pSampler = NULL;

	cbDesc.StructureByteStride = 0;

#include <SDL.h>

	auto& shapes = reader.GetShapes();

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t tx =

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SAFE_RELEASE(m_pPixelShader);

		{

				break;

	if (FAILED(hr))

CD3DTest::CD3DTest()

		R"(cube.obj)");

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;



	if (FAILED(hr))

		SDL_Delay(1000);

	return 0;

	SAFE_RELEASE(m_pRenderTargetView);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

				// access to vertex

	//Create Index

	}

	//テクスチャ読み込み

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	Release();

				indexlist.push_back(index);

void CD3DTest::Release()

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

}

			{

	m_Viewport.MaxDepth = 1.0f;



#include "DirectXManager.h"







				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);

	std::string imagePath = "hello.bmp";

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();



		{

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 world;

	while (SDL_PollEvent(&e) != 0)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

			//Select surfaces based on key press

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.Windowed = TRUE;

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	irData.SysMemSlicePitch = 0;

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		KEY_PRESS_SURFACE_UP,

	m_pLightBuffer = NULL;

				WORD index = idx.vertex_index;

	DXGI_SWAP_CHAIN_DESC scDesc;



	m_pDevice = NULL;

		if (!reader.Error().empty())

		delete[] pIList;

	cbDesc.MiscFlags = 0;



		}

}







	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{

		}

	txDesc.MipLevels = 1;

		if (!reader.Error().empty())

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

};





		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

			}

		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		pVList[i] = vertexlist[i];

#include <SDL.h>

		&m_pImmediateContext);

struct ConstantLightBuffer {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		if (!ret)



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	irData.SysMemPitch = 0;

	//頂点レイアウト作成

}

		}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,

	return 0;



	dsDesc.Format = txDesc.Format;

		KEY_PRESS_SURFACE_UP,

		return hr;

			case SDLK_DOWN:



#include <iostream>



	m_pVertexShader = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vrData.SysMemPitch = 0;

	m_pSwapChain = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				WORD index = idx.vertex_index;

	vector<WORD> indexList;



	Release();

	m_pLightBuffer = NULL;

		SDL_RenderPresent(ren);

	LoadObj(vertexlist, indexList);

		size_t index_offset = 0;

				WORD index = idx.vertex_index;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	m_IndexCount = 0;

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//テクスチャ読み込み

		return 1;

	XMFLOAT4 specular;          //反射(r,g,b)



		pIList[j] = indexList[j];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

 * Lesson 1: Hello World!

	}

			switch (e.key.keysym.sym)

	ibDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLightBuffer clb;

			{



	D3D11_SUBRESOURCE_DATA vrData;



	SAFE_RELEASE(m_pTextureView);

	{

	txDesc.CPUAccessFlags = 0;

	}

		KEY_PRESS_SURFACE_RIGHT,

	cbDesc.CPUAccessFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

				indexlist.push_back(index);

int main(int, char**)

		return hr;

			}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		// Loop over faces(polygon)

		SDL_RenderPresent(ren);



	float    farZ = 100.0f;

	m_Viewport.MinDepth = 0.0f;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		}



		return hr;

	}

			{



	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))

}

	if (FAILED(hr))



	vector<WORD> indexList;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		&scDesc,



	txDesc.ArraySize = 1;





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		return hr;

	{

	UINT flags = 0;



				break;

	scDesc.SampleDesc.Quality = 0;

}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	txDesc.MiscFlags = 0;

	{







	while (SDL_PollEvent(&e) != 0)



		KEY_PRESS_SURFACE_DOWN,



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				// access to vertex



				WORD index = idx.vertex_index;

	tinyobj::attrib_t attrib;

		{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				break;

	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User requests quit

#include "DirectXManager.h"

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//頂点レイアウト作成

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pRenderTargetView);

				WORD index = idx.vertex_index;

	txDesc.ArraySize = 1;

{

	if (FAILED(hr))

	{

 */

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

{

		}

{

	XMFLOAT4         eyePos;   //視点座標

	SDL_Event e;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pDepthStencilView);

		delete[] pVList;

	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_LEFT,

	cbDesc.StructureByteStride = 0;



	scDesc.BufferCount = 1;

	scDesc.BufferDesc.Height = rect.Height();

	std::string error;

	//ビューポート設定

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pImmediateContext);

	}

	m_pMatrixBuffer = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

CD3DTest::~CD3DTest()

		return hr;



	Release();

	/*

		&shapes,

		&shapes,

	}

	Vertex* pVList = new Vertex[vcount];

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);







	if (FAILED(hr))

			//Select surfaces based on key press

	bool ret = tinyobj::LoadObj(



	HRESULT              hr;

			index_offset += num_vertices;

		&error,

	//First we need to start up SDL, and make sure it went ok

	for (int i = 0; i < vcount; i++)



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pSampler = NULL;



		&attrib,



		cout << "SDL_INIT_ERROR" << endl;

			index_offset += fv;

CD3DTest::CD3DTest()



	Release();

	scDesc.SampleDesc.Count = 1;

		}

	m_pLightBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_FreeSurface(bmp);

			//Select surfaces based on key press



		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pIndexBuffer = NULL;

	m_pVertexBuffer = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (!reader.Warning().empty())

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	D3D11_BUFFER_DESC ibDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.MiscFlags = 0;

	tinyobj::ObjReader reader;



	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			{

	{

	m_pSampler = NULL;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	tinyobj::ObjReaderConfig reader_config;

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	}



	UINT offsets = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

using std::cout; using std::endl;





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		size_t index_offset = 0;

		// Loop over faces(polygon)

#include <iostream>

		if (!reader.Error().empty())

	if (!error.empty())

{







	bool ret = tinyobj::LoadObj(

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_Viewport.TopLeftX = 0;

		{



		KEY_PRESS_SURFACE_LEFT,

			// Loop over vertices in the face.

	txDesc.Height = rect.Height();

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_DestroyTexture(tex);

			exit(1);



	ConstantLight    pntLight; //点光源

}

		{

	cbDesc.CPUAccessFlags = 0;

	m_pRenderTargetView = NULL;

		//User requests quit

int SEGMENT = 36;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	Release();



		{

#include <SDL.h>

	Release();

				tinyobj::real_t ty =



			default:

	{

		KEY_PRESS_SURFACE_DEFAULT,

	return 0;

			//Select surfaces based on key press



	//ピクセルシェーダー生成

		flags,

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDevice = NULL;





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	UINT flags = 0;

	SAFE_RELEASE(m_pVertexShader);



	SAFE_RELEASE(m_pTexture);



			default:

	bool ret = tinyobj::LoadObj(

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	std::string error;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pVertexShader);

	m_pSwapChain = NULL;

	ibDesc.CPUAccessFlags = 0;

		return hr;

	m_pTexture = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	auto& shapes = reader.GetShapes();

#include <SDL.h>

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyWindow(win);

}

	ibDesc.StructureByteStride = 0;

		SDL_RenderPresent(ren);

	SDL_FreeSurface(suf);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.OutputWindow = hwnd;

		&error,

			// Loop over vertices in the face.

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vbDesc.CPUAccessFlags = 0;

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

};

	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

	m_pMatrixBuffer = NULL;

}

	return hr;







#include <SDL.h>

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Release();

struct ConstantLightBuffer {

			case SDLK_DOWN:

		1,

struct ConstantLightBuffer {

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

};

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//頂点バッファ作成

	//Clean up our objects and quit

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	auto& attrib = reader.GetAttrib();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		//User presses a key

	SAFE_RELEASE(m_pInputLayout);





	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

}
		flags,

	dsDesc.Format = txDesc.Format;

	SDL_DestroyRenderer(ren);

	std::string error;

	ConstantLight    pntLight; //点光源

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

#include <iostream>



	WORD   icount = indexList.size();



	if (FAILED(hr))

	//深度ステンシルバッファ作成

	UINT offsets = 0;

		pIList[j] = indexList[j];

	//vector<Vertex> vertex_t;



		KEY_PRESS_SURFACE_RIGHT,

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;







	scDesc.SampleDesc.Quality = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	SAFE_RELEASE(m_pTexture);

struct ConstantMatrixBuffer {

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		else if (e.type == SDL_KEYDOWN)

			int num_vertices = shape.mesh.num_face_vertices[f];

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	XMFLOAT4X4 view;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





struct ConstantMatrixBuffer {

	txDesc.MiscFlags = 0;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		KEY_PRESS_SURFACE_TOTAL

	tinyobj::ObjReader reader;

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

		delete[] pVList;

		return hr;

				WORD index = idx.vertex_index;







	reader_config.mtl_search_path = "./"; // Path to material files

}

{



	}

	std::string imagePath = "hello.bmp";



	irData.pSysMem = &pIList[0];

}
		return hr;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pMatrixBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		D3D11_SDK_VERSION,

	vector<WORD> indexList;

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SAFE_RELEASE(m_pInputLayout);

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	pBackBuffer->Release();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.StructureByteStride = 0;

	scDesc.OutputWindow = hwnd;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pDepthStencilTexture = NULL;

	{

	ibDesc.CPUAccessFlags = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		&m_pSwapChain,

	vbDesc.StructureByteStride = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}



		KEY_PRESS_SURFACE_LEFT,

/*

	XMFLOAT4 attenuate;         //減衰(a,b,c)

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderClear(ren);

		return hr;

	ibDesc.StructureByteStride = 0;

	{



				tinyobj::real_t tx =



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		&m_pImmediateContext);

	auto& attrib = reader.GetAttrib();



CD3DTest::~CD3DTest()

CD3DTest::CD3DTest()

	CRect                rect;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			index_offset += fv;

			exit(1);

	m_pRenderTargetView = NULL;



			}



	float    fov = XMConvertToRadians(20.0f);

		return 1;





	vrData.SysMemPitch = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	Release();

	ConstantMatrixBuffer cmb;



	return;

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pIndexBuffer);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&m_pDevice,



		// Loop over faces(polygon)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

 * Lesson 1: Hello World!

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

		// Loop over faces(polygon)

CD3DTest::~CD3DTest()

	m_pRenderTargetView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);



};

	auto& materials = reader.GetMaterials();



	pBackBuffer->Release();





		return hr;



	ConstantLightBuffer clb;





	std::vector<tinyobj::material_t> materials;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SAFE_RELEASE(m_pDepthStencilView);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.StructureByteStride = 0;

	vbDesc.StructureByteStride = 0;

	vbDesc.MiscFlags = 0;

};

		{

};



	SDL_DestroyRenderer(ren);

	XMFLOAT4X4 world;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		delete[] pIList;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	scDesc.BufferCount = 1;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_VertexCount = vcount;



	tinyobj::attrib_t attrib;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&attrib,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}

	{



	/*

	//First we need to start up SDL, and make sure it went ok

void CD3DTest::Release()


