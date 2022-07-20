	tinyobj::ObjReaderConfig reader_config;







	LoadObj(vertexlist, indexList);

	m_IndexCount = 0;

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.StructureByteStride = 0;

{







		D3D_DRIVER_TYPE_HARDWARE,

				tinyobj::real_t tx =

	Release();

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.BufferCount = 1;

		&error,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_UP,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pSwapChain = NULL;

		return hr;



{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	scDesc.BufferDesc.Height = rect.Height();



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	delete[] pVList;



	vrData.SysMemPitch = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	XMFLOAT4X4 projection;

		SDL_RenderClear(ren);

/*

		SDL_Delay(1000);

		&error,

	XMFLOAT4X4 world;

	//インデックスバッファ作成



	//vector<Vertex> vertex_t;

using std::cout; using std::endl;





	{



	m_pSwapChain = NULL;

};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		return hr;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

			default:

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//インデックスバッファ作成

	while (SDL_PollEvent(&e) != 0)

	WORD* pIList = new WORD[icount];

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	auto& shapes = reader.GetShapes();

	float    farZ = 100.0f;

 */



	cbDesc.MiscFlags = 0;

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4         eyePos;   //視点座標



{



	}

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

}





	txDesc.Height = rect.Height();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	for (int j = 0; j < icount; j++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



			index_offset += num_vertices;

	m_pVertexShader = NULL;

				WORD index = idx.vertex_index;

	if (FAILED(hr))

		pVList[i] = vertexlist[i];

void CD3DTest::Release()

		R"(cube.obj)");

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pPixelShader);



	ibDesc.CPUAccessFlags = 0;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ConstantLight    pntLight; //点光源

	m_pLightBuffer = NULL;

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	// Loop over shapes

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	m_Viewport.MaxDepth = 1.0f;

		SDL_Delay(1000);

				break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	txDesc.SampleDesc.Quality = 0;

struct ConstantMatrixBuffer {

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pImmediateContext);

	for (int i = 0; i < vcount; i++)

CD3DTest::~CD3DTest()





		if (e.type == SDL_QUIT)

		SDL_RenderPresent(ren);

			case SDLK_UP:



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{

		}

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

		{

	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			case SDLK_UP:

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	std::string error;



	WORD* pIList = new WORD[icount];

	cbDesc.CPUAccessFlags = 0;

				tinyobj::real_t tx =

int SEGMENT = 36;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pTexture = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_FreeSurface(suf);

int main(int, char**)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

#define TINYOBJLOADER_IMPLEMENTATION

{



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pPixelShader = NULL;



				// access to vertex



		D3D_DRIVER_TYPE_HARDWARE,

	UINT flags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			// Loop over vertices in the face.

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

HRESULT CD3DTest::Create(HWND hwnd)

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTextureView);



			for (size_t v = 0; v < fv; v++)

	// Loop over shapes

	}

		return hr;





	vrData.pSysMem = &pVList[0];

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	vrData.SysMemSlicePitch = 0;

};

			switch (e.key.keysym.sym)

	}

	scDesc.Windowed = TRUE;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SDL_FreeSurface(suf);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	WORD   icount = indexList.size();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))



	XMFLOAT4 attenuate;         //減衰(a,b,c)



	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_Angle += XMConvertToRadians(1.0f);

			index_offset += num_vertices;

	//Key press surfaces constants



	dsDesc.Texture2D.MipSlice = 0;

	m_pSwapChain->Present(0, 0);

	//Clean up our objects and quit

int main(int, char**)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	SDL_DestroyWindow(win);

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&materials,

	scDesc.BufferDesc.Height = rect.Height();

	::ZeroMemory(&scDesc, sizeof(scDesc));

				break;

	XMFLOAT4X4 world;

		&m_pDevice,

		{



				break;

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vrData.SysMemPitch = 0;

		{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_VertexCount = vcount;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		{

			for (size_t v = 0; v < fv; v++)





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pSampler = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

				indexlist.push_back(idx.vertex_index);

	//vector<WORD> index_t;

		}

	tinyobj::ObjReader reader;



};





	D3D_FEATURE_LEVEL level;

	{

		{

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		//User requests quit

	{

	cbDesc.MiscFlags = 0;





	bool ret = tinyobj::LoadObj(

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	scDesc.OutputWindow = hwnd;





	m_pTexture = NULL;

	SAFE_RELEASE(m_pTextureView);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	UINT flags = 0;

	dsDesc.Format = txDesc.Format;

				break;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         eyePos;   //視点座標

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点レイアウト作成

			// Loop over vertices in the face.

	SAFE_RELEASE(m_pIndexBuffer);



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.StructureByteStride = 0;



	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	delete[] pIList;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

	tinyobj::ObjReader reader;

	::ZeroMemory(&scDesc, sizeof(scDesc));



		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	scDesc.OutputWindow = hwnd;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	float    nearZ = 0.1f;



	txDesc.ArraySize = 1;

				break;

		SDL_RenderClear(ren);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pTextureView = NULL;

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

		//User presses a key

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

HRESULT CD3DTest::Create(HWND hwnd)

				indexlist.push_back(idx.vertex_index);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			{

		return hr;

};

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

struct ConstantMatrixBuffer {



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.StructureByteStride = 0;

	{

	//頂点レイアウト作成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	{



			{

	SDL_FreeSurface(bmp);

				break;

	vbDesc.MiscFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		1,

	SDL_DestroyTexture(tex);

	txDesc.SampleDesc.Count = 1;

	delete[] pVList;

	//定数バッファ作成



		SDL_RenderClear(ren);

		}

	}

	}

	irData.SysMemSlicePitch = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string inputfile = "test.obj";

		&materials,



	SDL_DestroyTexture(tex);

	scDesc.BufferDesc.Height = rect.Height();

		&scDesc,





		NULL,

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pDepthStencilTexture = NULL;



	for (int i = 0; i < vcount; i++)

	enum KeyPressSurfaces

	XMFLOAT4X4 world;



	irData.SysMemPitch = 0;

		{



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&materials,





	//頂点レイアウト作成

	SAFE_RELEASE(m_pVertexBuffer);



	SAFE_RELEASE(m_pLightBuffer);



	pBackBuffer->Release();

};

	XMStoreFloat4(&clb.ambient, lightAmbient);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		D3D11_SDK_VERSION,

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

int main(int, char**)

	m_pSampler = NULL;

	enum KeyPressSurfaces

	m_pSampler = NULL;

			for (size_t v = 0; v < num_vertices; v++)



	return;

	m_pDepthStencilTexture = NULL;



	//Vertex* pVList = new Vertex[vcount];

	//ピクセルシェーダー生成

	//First we need to start up SDL, and make sure it went ok

		return hr;



	SAFE_RELEASE(m_pRenderTargetView);

	cbDesc.CPUAccessFlags = 0;

	{

}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	// Loop over shapes

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4X4 world;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_BUFFER_DESC vbDesc;

	cbDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			default:

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

	}



		return hr;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pMatrixBuffer = NULL;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



#include <iostream>

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pTexture = NULL;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

{

	tinyobj::attrib_t attrib;

	SDL_DestroyWindow(win);

	//vector<WORD> index_t;

	delete[] pVList;



	vrData.pSysMem = &pVList[0];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





	SDL_Event e;

}



	m_Viewport.MaxDepth = 1.0f;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

#ifdef _DEBUG

	for (int j = 0; j < icount; j++)

		delete[] pVList;

	delete[] pVList;

		{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t tx =

		R"(cube.obj)");

		delete[] pIList;

		return 1;





			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		&shapes,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	pBackBuffer->Release();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		SDL_RenderPresent(ren);

}
};

	XMFLOAT4 pos;               //座標(x,y,z)



		return hr;

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	dsDesc.Format = txDesc.Format;

#define TINYOBJLOADER_IMPLEMENTATION





	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4 pos;               //座標(x,y,z)

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Vertex* pVList = new Vertex[vcount];



}

				break;

		&materials,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMFLOAT4 pos;               //座標(x,y,z)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{

	{

	ConstantMaterial material; //物体の質感

struct ConstantMatrixBuffer {

	m_Viewport.TopLeftY = 0;

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			exit(1);

	Release();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			switch (e.key.keysym.sym)

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Key press surfaces constants

#include <SDL.h>

	m_pDevice = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vrData.pSysMem = &pVList[0];



		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				break;

	XMFLOAT4 pos;               //座標(x,y,z)

			case SDLK_DOWN:

	scDesc.OutputWindow = hwnd;

		KEY_PRESS_SURFACE_RIGHT,

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pDevice);

				indexlist.push_back(index);

	ConstantLight    pntLight; //点光源

	scDesc.SampleDesc.Quality = 0;

	return;

		}

		cout << "SDL_INIT_ERROR" << endl;

	delete[] pIList;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{



	{

	tinyobj::ObjReaderConfig reader_config;

	//ピクセルシェーダー生成

/*

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

#include <SDL.h>

		return hr;



	}

	D3D11_SUBRESOURCE_DATA irData;

};

	LoadObj(vertexlist, indexList);



		else if (e.type == SDL_KEYDOWN)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

	delete[] pIList;

{

	}

CD3DTest::CD3DTest()

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	irData.SysMemSlicePitch = 0;



		SDL_RenderPresent(ren);

		return hr;



		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.Windowed = TRUE;

	return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.BufferDesc.Width = rect.Width();

	{

		return hr;

#ifdef _DEBUG

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	tinyobj::ObjReaderConfig reader_config;

		return hr;

	txDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_DOWN,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	for (const auto& shape : shapes)

	//vector<WORD> index_t;

			}



				// access to vertex



	ConstantMaterial material; //物体の質感

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	txDesc.Width = rect.Width();

	cbDesc.CPUAccessFlags = 0;

	m_pSwapChain->Present(0, 0);

	}



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    farZ = 100.0f;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMFLOAT4         eyePos;   //視点座標

	std::string inputfile = "test.obj";

	WORD   icount = indexList.size();

		size_t index_offset = 0;  // インデントのオフセット

	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.Width = rect.Width();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	for (size_t s = 0; s < shapes.size(); s++)

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

};



	CRect                rect;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.StructureByteStride = 0;

	m_IndexCount = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	//インデックスバッファ作成

	vector<Vertex> vertexlist;

	m_IndexCount = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.BufferDesc.Height = rect.Height();

	return 0;

	irData.SysMemSlicePitch = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

 * Lesson 1: Hello World!

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_FreeSurface(suf);



	SAFE_RELEASE(m_pVertexShader);

	bool ret = tinyobj::LoadObj(

			break;

			case SDLK_RIGHT:

	};

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_DestroyTexture(tex);



};

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		cout << "SDL_INIT_ERROR" << endl;

	SAFE_RELEASE(m_pTextureView);

		//User presses a key

	m_pImmediateContext = NULL;



	{

	};

	}

	auto& materials = reader.GetMaterials();

	return;



		{

			{

	txDesc.SampleDesc.Quality = 0;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	pBackBuffer->Release();

		return hr;



			index_offset += fv;

		SDL_Delay(1000);

				vertex.push_back(vertex_tmp);

	SDL_Quit();



	{



	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pVertexBuffer);

	D3D11_TEXTURE2D_DESC txDesc;

	// Loop over shapes

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		}

	m_pVertexShader = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

		KEY_PRESS_SURFACE_DOWN,

		KEY_PRESS_SURFACE_RIGHT,



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pSampler = NULL;



		else if (e.type == SDL_KEYDOWN)



	return 0;

			switch (e.key.keysym.sym)

	SDL_Quit();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	//Vertex* pVList = new Vertex[vcount];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



			break;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	ConstantMatrixBuffer cmb;

	//Clean up our objects and quit

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_DestroyRenderer(ren);

	XMFLOAT4         eyePos;   //視点座標

	{



	if (!error.empty())

	m_Viewport.TopLeftX = 0;

		m_pImmediateContext->ClearState();



				indexlist.push_back(index);

struct ConstantMaterial {

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		}

#ifdef _DEBUG

		return hr;

	D3D_FEATURE_LEVEL level;

	//Key press surfaces constants

	SDL_DestroyRenderer(ren);

CD3DTest::~CD3DTest()

	txDesc.Width = rect.Width();

	{



		}

	if (FAILED(hr))

		&scDesc,

	SDL_DestroyRenderer(ren);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	if (!reader.Warning().empty())

				tinyobj::real_t tx =

	auto& attrib = reader.GetAttrib();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	WORD* pIList = new WORD[icount];



			break;

	scDesc.OutputWindow = hwnd;

				WORD index = idx.vertex_index;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			switch (e.key.keysym.sym)

struct ConstantMaterial {

	SAFE_RELEASE(m_pDevice);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D11_BUFFER_DESC vbDesc;

	m_pDepthStencilView = NULL;

{

			case SDLK_DOWN:

	if (FAILED(hr))

		SDL_RenderClear(ren);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

	std::string imagePath = "hello.bmp";

				vertex.push_back(vertex_tmp);

	std::string imagePath = "hello.bmp";

	txDesc.MiscFlags = 0;

CD3DTest::CD3DTest()



			index_offset += num_vertices;



	ID3D11Texture2D* pBackBuffer;



	//vector<WORD> index_t;

	m_pMatrixBuffer = NULL;

	m_pIndexBuffer = NULL;

	}

		else if (e.type == SDL_KEYDOWN)

	UINT offsets = 0;

	{

	return;

	{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

 */

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		//User presses a key

		{

		SDL_Delay(1000);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC vbDesc;

	//頂点レイアウト作成

	reader_config.mtl_search_path = "./"; // Path to material files

	std::vector<tinyobj::material_t> materials;





	scDesc.SampleDesc.Quality = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pSwapChain = NULL;



	SAFE_RELEASE(m_pImmediateContext);

	for (int i = 0; i < 3; i++)

				break;



			index_offset += fv;

	for (int i = 0; i < vcount; i++)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





#endif

}

	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	irData.SysMemPitch = 0;

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	while (SDL_PollEvent(&e) != 0)

}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	{

		&shapes,









		1,

	m_Viewport.Height = (FLOAT)rect.Height();

		&attrib,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];



	Vertex* pVList = new Vertex[vcount];

#include <SDL.h>



{



		R"(cube.obj)");

	SAFE_RELEASE(m_pVertexShader);

	vector<WORD> indexList;

		R"(cube.obj)");

	};

				break;

{

	SDL_DestroyTexture(tex);

				tinyobj::real_t tx =

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	/*

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		m_pImmediateContext->ClearState();

				break;

	if (FAILED(hr))

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

				WORD index = idx.vertex_index;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				indexlist.push_back(index);





	{

struct ConstantMaterial {

	auto& materials = reader.GetMaterials();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

using std::cout; using std::endl;

	SAFE_RELEASE(m_pLightBuffer);



	m_IndexCount = 0;

	}



	//ビューポート設定



	{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_TEXTURE2D_DESC txDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{

}

	dsDesc.Texture2D.MipSlice = 0;

		delete[] pIList;

	m_pMatrixBuffer = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_FreeSurface(suf);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#include <iostream>

	XMStoreFloat4(&clb.eyePos, eye);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	txDesc.SampleDesc.Count = 1;



{



	if (FAILED(hr))

	}

	ConstantMaterial material; //物体の質感

	CRect                rect;

		&m_pImmediateContext);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.TopLeftY = 0;

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

 * Lesson 1: Hello World!

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_VertexCount = 0;

	m_Viewport.TopLeftX = 0;



	auto& materials = reader.GetMaterials();

		SDL_RenderCopy(ren, tex, NULL, NULL);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	txDesc.Height = rect.Height();

	m_pImmediateContext = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

	SDL_Quit();

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	SAFE_RELEASE(m_pTexture);

		KEY_PRESS_SURFACE_RIGHT,



	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferCount = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	delete[] pIList;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!reader.Warning().empty())

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pVertexBuffer = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_FreeSurface(suf);

	scDesc.SampleDesc.Count = 1;

	tinyobj::ObjReader reader;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		}

	//深度ステンシルバッファ作成

	scDesc.OutputWindow = hwnd;



	SDL_DestroyWindow(win);

	cbDesc.MiscFlags = 0;

	m_pPixelShader = NULL;

	txDesc.MipLevels = 1;

	DXGI_SWAP_CHAIN_DESC scDesc;

#endif

	ConstantLightBuffer clb;

			default:

	txDesc.MiscFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





		&materials,

		{

		{



		pVList[i] = vertexlist[i];

};

CD3DTest::~CD3DTest()

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

	}

using std::cout; using std::endl;

		SDL_RenderCopy(ren, tex, NULL, NULL);

HRESULT CD3DTest::Create(HWND hwnd)

{

	cbDesc.CPUAccessFlags = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		size_t index_offset = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	HRESULT              hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	SDL_Quit();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	/*

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pInputLayout);

	CRect                rect;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (!reader.Warning().empty())

	}



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	txDesc.CPUAccessFlags = 0;



}

	irData.SysMemPitch = 0;

		return hr;



	//vector<WORD> index_t;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

				// access to vertex



			//Select surfaces based on key press

	return 0;

	cbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pDepthStencilView);





struct ConstantLightBuffer {

		if (e.type == SDL_QUIT)

struct ConstantMaterial {

		if (!reader.Error().empty())



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	for (int i = 0; i < 3; i++)



	SDL_DestroyRenderer(ren);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				// access to vertex



	}

	SAFE_RELEASE(m_pTextureView);

CD3DTest::CD3DTest()

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	SAFE_RELEASE(m_pLightBuffer);

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	SAFE_RELEASE(m_pRenderTargetView);



	pBackBuffer->Release();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexShader = NULL;

	//Key press surfaces constants

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4         eyePos;   //視点座標



#define TINYOBJLOADER_IMPLEMENTATION

#include <SDL.h>



		exit(1);

			for (size_t v = 0; v < num_vertices; v++)



	WORD* pIList = new WORD[icount];

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

}

	LoadObj(vertexlist, indexList);

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	auto& shapes = reader.GetShapes();

		{

	m_pPixelShader = NULL;

	m_pVertexBuffer = NULL;

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pTextureView);



#endif







	//頂点シェーダー生成



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	}



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

int SEGMENT = 36;

	vector<Vertex> vertexlist;



				break;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



#include <iostream>

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//定数バッファ作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//頂点バッファ作成

	cbDesc.CPUAccessFlags = 0;

		&scDesc,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_DOWN,

	std::string inputfile = "test.obj";

	for (const auto& shape : shapes)

		pVList[i] = vertexlist[i];

				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4X4 world;

		//User requests quit

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		delete[] pIList;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	for (int j = 0; j < icount; j++)

	m_pSampler = NULL;

		return hr;

 * Lesson 1: Hello World!



	{

		return hr;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

			}



CD3DTest::~CD3DTest()



	XMFLOAT4X4 projection;

{

	vector<WORD> indexList;



	ID3D11Texture2D* pBackBuffer;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4         eyePos;   //視点座標

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

void CD3DTest::Render()

	cbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

 */

	}









	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

};

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::vector<tinyobj::shape_t> shapes;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!reader.ParseFromFile(inputfile, reader_config))

		pLevels,

}

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_Viewport.MaxDepth = 1.0f;

				// access to vertex

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	float    farZ = 100.0f;



	XMFLOAT4X4 view;

				break;

	if (FAILED(hr))



	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	txDesc.ArraySize = 1;

	SDL_DestroyWindow(win);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	{

	{

				WORD index = idx.vertex_index;



	{

{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	vector<Vertex> vertexlist;

			//Select surfaces based on key press



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

int main(int, char**)

		cout << "SDL_INIT_ERROR" << endl;

		//User requests quit

		KEY_PRESS_SURFACE_RIGHT,

	Release();

		&level,

	delete[] pVList;

		{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;







	SAFE_RELEASE(m_pDepthStencilTexture);

}
	tinyobj::attrib_t attrib;

}

	for (const auto& shape : shapes)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pSampler = NULL;

	Release();

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



			default:

{

		}

	}

			//Select surfaces based on key press

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

		exit(1);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		&attrib,

	Release();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		delete[] pIList;

			//Select surfaces based on key press

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

CD3DTest::~CD3DTest()



	int     vcount = vertexlist.size();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

	// Loop over shapes

	D3D_FEATURE_LEVEL level;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pVertexShader = NULL;

	dsDesc.Format = txDesc.Format;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

	auto& shapes = reader.GetShapes();



void CD3DTest::Render()

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

};

	vrData.SysMemPitch = 0;

	D3D11_BUFFER_DESC vbDesc;

struct ConstantLight {



	Release();

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pIndexBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			int num_vertices = shape.mesh.num_face_vertices[f];

			{



	m_Viewport.TopLeftX = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	{





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

	ID3D11Texture2D* pBackBuffer;

	m_pDepthStencilTexture = NULL;

	SDL_Event e;

	m_pSwapChain = NULL;

	m_VertexCount = vcount;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		&m_pImmediateContext);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	dsDesc.Format = txDesc.Format;

				tinyobj::real_t tx =

			case SDLK_RIGHT:







	vrData.SysMemPitch = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	vector<WORD> indexList;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;



			switch (e.key.keysym.sym)

	}

	}

	{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	Release();



	DXGI_SWAP_CHAIN_DESC scDesc;

	for (int j = 0; j < icount; j++)

	//頂点バッファ作成

int SEGMENT = 36;



	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	WORD* pIList = new WORD[icount];



		&materials,

	::GetClientRect(hwnd, &rect);

	D3D11_SUBRESOURCE_DATA irData;

	m_pPixelShader = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	dsDesc.Format = txDesc.Format;



	std::vector<tinyobj::shape_t> shapes;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.CPUAccessFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vrData.SysMemPitch = 0;

			case SDLK_DOWN:

	std::string inputfile = "test.obj";

	ID3D11Texture2D* pBackBuffer;

	UINT strides = sizeof(Vertex);

		KEY_PRESS_SURFACE_DOWN,

	std::string error;

}



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&m_pDevice,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{



		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

};

	ibDesc.CPUAccessFlags = 0;

 * Lesson 1: Hello World!



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

		R"(cube.obj)");

		}

	SAFE_RELEASE(m_pTexture);



	delete[] pIList;

		flags,

void CD3DTest::Render()

	UINT strides = sizeof(Vertex);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

		1,

	vector<Vertex> vertexlist;

	//ピクセルシェーダー生成

		&m_pSwapChain,

	SAFE_RELEASE(m_pMatrixBuffer);

		if (!ret)



		if (e.type == SDL_QUIT)

	scDesc.Windowed = TRUE;

}

	for (const auto& shape : shapes)



	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pDevice);

	tinyobj::ObjReaderConfig reader_config;

			case SDLK_RIGHT:

	m_pPixelShader = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ConstantMaterial material; //物体の質感



	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	std::vector<tinyobj::shape_t> shapes;



	if (FAILED(hr))

		delete[] pIList;

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		&error,





		}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			for (size_t v = 0; v < num_vertices; v++)

	Vertex* pVList = new Vertex[vcount];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



/*



	txDesc.CPUAccessFlags = 0;

		&shapes,

	{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	D3D_FEATURE_LEVEL level;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.BufferCount = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



#define TINYOBJLOADER_IMPLEMENTATION



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			break;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//テクスチャ読み込み

	delete[] pIList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		//User presses a key

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		if (e.type == SDL_QUIT)

	m_pTexture = NULL;

	//頂点シェーダー生成

				break;

	Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Quit();

	{





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	}



	tinyobj::ObjReader reader;

	}

	//vector<WORD> index_t;

	vbDesc.MiscFlags = 0;

	return;

	SDL_DestroyTexture(tex);



	m_Viewport.TopLeftY = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.ArraySize = 1;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			break;

	ibDesc.CPUAccessFlags = 0;

		}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//vector<Vertex> vertex_t;

	bool ret = tinyobj::LoadObj(

	tinyobj::ObjReaderConfig reader_config;



	std::string inputfile = "test.obj";



		//User presses a key

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ConstantLight    pntLight; //点光源

	auto& shapes = reader.GetShapes();



	};



		cout << "SDL_INIT_ERROR" << endl;

	txDesc.SampleDesc.Count = 1;

CD3DTest::CD3DTest()

	}

	ibDesc.CPUAccessFlags = 0;

	for (int i = 0; i < vcount; i++)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}



	D3D_FEATURE_LEVEL level;

 */



	delete[] pVList;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pDepthStencilView);

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		delete[] pVList;

		{

	scDesc.OutputWindow = hwnd;

	txDesc.MiscFlags = 0;

		SDL_Delay(1000);

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

		SDL_Delay(1000);

		return hr;

	SDL_Quit();

	//定数バッファ作成



	}

	}

	//vector<WORD> index_t;

			for (size_t v = 0; v < fv; v++)

				break;

	if (FAILED(hr))

				break;

		return 1;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	Release();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	for (int i = 0; i < 3; i++)

};

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	{

	std::string inputfile = "test.obj";





	UINT flags = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





		KEY_PRESS_SURFACE_RIGHT,



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			// Loop over vertices in the face.

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		NULL,

	txDesc.SampleDesc.Count = 1;

	delete[] pVList;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	scDesc.BufferDesc.Width = rect.Width();

	{



	for (int i = 0; i < 3; i++)

	SDL_Event e;

	{

				break;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.TopLeftY = 0;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



{

	scDesc.BufferCount = 1;

			// Loop over vertices in the face.

};

#define TINYOBJLOADER_IMPLEMENTATION



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;



	SDL_Event e;

	DXGI_SWAP_CHAIN_DESC scDesc;

				break;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			for (size_t v = 0; v < fv; v++)

	return 0;

#endif

	if (FAILED(hr))

			default:

	{

			case SDLK_DOWN:

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4X4 view;

	auto& materials = reader.GetMaterials();

}

	cbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_VertexCount = 0;

	}

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_pDepthStencilView = NULL;



	}

	WORD   icount = indexList.size();

	txDesc.SampleDesc.Count = 1;

	m_pTexture = NULL;



	tinyobj::ObjReader reader;

	m_pTextureView = NULL;

		&scDesc,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//Create Index

		if (!reader.Error().empty())

			{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Format = txDesc.Format;

	cbDesc.CPUAccessFlags = 0;

#endif

		return hr;

	//Key press surfaces constants

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		m_pImmediateContext->ClearState();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





int main(int, char**)

				break;

 * Lesson 1: Hello World!

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	UINT flags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	pBackBuffer->Release();

void CD3DTest::Render()

	std::string inputfile = "test.obj";

		{

#include <iostream>

	SAFE_RELEASE(m_pDepthStencilTexture);

	tinyobj::attrib_t attrib;

	}

struct ConstantLightBuffer {



	auto& materials = reader.GetMaterials();





	m_pSwapChain = NULL;

	//頂点シェーダー生成

			case SDLK_UP:

	m_pIndexBuffer = NULL;



	//頂点レイアウト作成

CD3DTest::CD3DTest()





	m_VertexCount = vcount;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	vbDesc.CPUAccessFlags = 0;

				break;



				tinyobj::real_t tx =

	ibDesc.MiscFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

void CD3DTest::Release()

	D3D11_SUBRESOURCE_DATA irData;

	if (FAILED(hr))



			index_offset += fv;



CD3DTest::~CD3DTest()

{



		{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	irData.SysMemPitch = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&m_pSwapChain,



	XMFLOAT4 pos;               //座標(x,y,z)

		pVList[i] = vertexlist[i];

	m_pInputLayout = NULL;

	m_pVertexBuffer = NULL;



			}

				tinyobj::real_t ty =

	//ビューポート設定

		size_t index_offset = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				break;



	if (FAILED(hr))

using std::cout; using std::endl;



				// access to vertex

	tinyobj::attrib_t attrib;



	auto& shapes = reader.GetShapes();

			{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	{

	txDesc.SampleDesc.Quality = 0;

	//テクスチャ読み込み

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pDevice = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SDL_DestroyRenderer(ren);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

		flags,

	{

	vbDesc.StructureByteStride = 0;

	while (SDL_PollEvent(&e) != 0)

	scDesc.SampleDesc.Count = 1;

	for (const auto& shape : shapes)



	SDL_DestroyWindow(win);

		SDL_Delay(1000);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ConstantMaterial material; //物体の質感

	scDesc.SampleDesc.Quality = 0;

	for (int j = 0; j < icount; j++)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.BufferDesc.Width = rect.Width();

	UINT strides = sizeof(Vertex);

	//Create Index

		SDL_RenderPresent(ren);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		&materials,

		return hr;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t ty =

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	auto& shapes = reader.GetShapes();

}

}

	D3D11_BUFFER_DESC vbDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};

	Release();

	m_pPixelShader = NULL;

	m_pDepthStencilView = NULL;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			{

	SDL_Quit();

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pMatrixBuffer);

	}

	tinyobj::attrib_t attrib;

			{

	//ピクセルシェーダー生成

	ID3D11Texture2D* pBackBuffer;

	{



	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			}

}

		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				indexlist.push_back(index);

		return hr;

		}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



				indexlist.push_back(index);



CD3DTest::~CD3DTest()

	//頂点バッファ作成

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

	SDL_DestroyWindow(win);

{

			{

		{

		KEY_PRESS_SURFACE_UP,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	scDesc.BufferDesc.Height = rect.Height();

	if (!reader.Warning().empty())

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

				break;

	return 0;

	float    farZ = 100.0f;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_Event e;

		pVList[i] = vertexlist[i];

		pVList[i] = vertexlist[i];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);







			{

				tinyobj::real_t tx =



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4X4 projection;

				indexlist.push_back(index);

		//User requests quit

	ConstantMaterial material; //物体の質感

	m_pMatrixBuffer = NULL;





	auto& materials = reader.GetMaterials();

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		exit(1);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	txDesc.Width = rect.Width();

	DXGI_SWAP_CHAIN_DESC scDesc;

 */

	{

	vrData.SysMemSlicePitch = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	float    nearZ = 0.1f;

	ibDesc.CPUAccessFlags = 0;

				break;

		{



}



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		KEY_PRESS_SURFACE_LEFT,

	dsDesc.Texture2D.MipSlice = 0;

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pVertexShader);

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

			{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pDevice = NULL;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pMatrixBuffer);

		pIList[j] = indexList[j];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	m_pMatrixBuffer = NULL;

	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	txDesc.Width = rect.Width();

	XMFLOAT4X4 world;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	m_pVertexShader = NULL;

	txDesc.ArraySize = 1;

	vector<Vertex> vertexlist;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < num_vertices; v++)





}

		NULL,

	m_pLightBuffer = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_RIGHT,

CD3DTest::CD3DTest()

	m_pImmediateContext = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		}

	UINT strides = sizeof(Vertex);

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	SAFE_RELEASE(m_pSampler);

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pImmediateContext);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Texture2D.MipSlice = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



struct ConstantMatrixBuffer {

		return hr;

	}

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pDepthStencilTexture);

	{



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	ibDesc.StructureByteStride = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//vector<Vertex> vertex_t;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

}


}

	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.SampleDesc.Quality = 0;

	std::string error;

	m_pSwapChain->Present(0, 0);

	//深度ステンシルバッファ作成

void CD3DTest::Render()

	pBackBuffer->Release();

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	SAFE_RELEASE(m_pLightBuffer);

void CD3DTest::Release()

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	ConstantMatrixBuffer cmb;

				tinyobj::real_t tx =

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pTexture);

};

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	D3D11_TEXTURE2D_DESC txDesc;

		KEY_PRESS_SURFACE_UP,

				break;

	cbDesc.MiscFlags = 0;

		delete[] pIList;

#include "DirectXManager.h"



	for (int j = 0; j < icount; j++)

	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyWindow(win);

	m_Viewport.Width = (FLOAT)rect.Width();

	std::string inputfile = "test.obj";

	vrData.pSysMem = &pVList[0];



	m_pSampler = NULL;

	SDL_DestroyWindow(win);

	auto& attrib = reader.GetAttrib();

	m_IndexCount = 0;

	SAFE_RELEASE(m_pTexture);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&materials,

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

		{



		delete[] pIList;

				break;

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	LoadObj(vertexlist, indexList);



	auto& attrib = reader.GetAttrib();





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		cout << "SDL_INIT_ERROR" << endl;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	}

 * Lesson 1: Hello World!

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





		pVList[i] = vertexlist[i];

	txDesc.SampleDesc.Count = 1;

		return hr;

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))



	scDesc.OutputWindow = hwnd;

}



	m_pTexture = NULL;

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		KEY_PRESS_SURFACE_DEFAULT,

			}

	SAFE_RELEASE(m_pVertexBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

};

	std::string imagePath = "hello.bmp";

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	std::vector<tinyobj::material_t> materials;



	if (FAILED(hr))



	delete[] pIList;



		&level,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	}

	if (m_pImmediateContext)

	SDL_FreeSurface(bmp);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			case SDLK_UP:

		{



};

	txDesc.CPUAccessFlags = 0;



	SDL_FreeSurface(suf);

	XMFLOAT4X4 world;

			break;

				WORD index = idx.vertex_index;

		&m_pSwapChain,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pRenderTargetView = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





			default:



	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



			for (size_t v = 0; v < fv; v++)

	while (SDL_PollEvent(&e) != 0)

			for (size_t v = 0; v < fv; v++)

	//ビューポート設定



	D3D11_BUFFER_DESC cbDesc;

	//定数バッファ作成





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pDepthStencilView);

	m_pIndexBuffer = NULL;

int main(int, char**)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		cout << "SDL_INIT_ERROR" << endl;

	HRESULT              hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ConstantMaterial material; //物体の質感

	m_pImmediateContext = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	float    farZ = 100.0f;

	//Create Index

		NULL,

	tinyobj::attrib_t attrib;

	m_pPixelShader = NULL;

	m_IndexCount = 0;

			index_offset += fv;

	SDL_FreeSurface(suf);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	m_pSampler = NULL;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_IndexCount = 0;

				vertex.push_back(vertex_tmp);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;

	vbDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		//User presses a key



	SDL_FreeSurface(suf);

struct ConstantMaterial {



}

	m_pSwapChain->Present(0, 0);

		{

	m_Viewport.TopLeftX = 0;

	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);



	/*



	m_pVertexBuffer = NULL;

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	tinyobj::ObjReaderConfig reader_config;

	std::string error;

	if (m_pImmediateContext)

	//vector<WORD> index_t;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	auto& materials = reader.GetMaterials();

		return hr;

	m_VertexCount = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pSampler = NULL;

		return hr;

	Release();

				break;

		&level,

{



			case SDLK_RIGHT:



	for (size_t s = 0; s < shapes.size(); s++)

	return 0;

	{

	SAFE_RELEASE(m_pSwapChain);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		size_t index_offset = 0;

	}

	}



	XMStoreFloat4(&clb.ambient, lightAmbient);

	float    fov = XMConvertToRadians(20.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	}



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&scDesc,

	int     vcount = vertexlist.size();

		return hr;

	SDL_DestroyTexture(tex);

}





			// Loop over vertices in the face.

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			{



	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

};



		cout << "SDL_INIT_ERROR" << endl;

	std::vector<tinyobj::shape_t> shapes;

	ConstantMatrixBuffer cmb;

	m_VertexCount = 0;

	//頂点バッファ作成





}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;



	scDesc.Windowed = TRUE;

};

	}

			index_offset += fv;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

	}

	{

}

	if (FAILED(hr))

		return hr;

		return hr;

		{

	while (SDL_PollEvent(&e) != 0)

	}

/*

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	irData.pSysMem = &pIList[0];

		cout << "SDL_INIT_ERROR" << endl;

	txDesc.MipLevels = 1;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;



	XMStoreFloat4(&clb.ambient, lightAmbient);

#include <iostream>

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pTextureView = NULL;

	if (FAILED(hr))

		return hr;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_SAMPLER_DESC smpDesc;

		cout << "SDL_INIT_ERROR" << endl;



		m_pImmediateContext->ClearState();

			int num_vertices = shape.mesh.num_face_vertices[f];

}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderPresent(ren);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pTextureView = NULL;

	}



	auto& materials = reader.GetMaterials();

		KEY_PRESS_SURFACE_LEFT,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			int num_vertices = shape.mesh.num_face_vertices[f];



	m_Angle += XMConvertToRadians(1.0f);

	vector<WORD> indexList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				// access to vertex

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	{

	{

		delete[] pVList;

	return;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pVertexBuffer);



	//Clean up our objects and quit



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//頂点レイアウト作成

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);







	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

		return 1;

	txDesc.CPUAccessFlags = 0;

				// access to vertex

	m_Viewport.Height = (FLOAT)rect.Height();

CD3DTest::CD3DTest()



		KEY_PRESS_SURFACE_DEFAULT,

	m_pVertexBuffer = NULL;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);







	SAFE_RELEASE(m_pTextureView);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pVertexShader = NULL;

			}

	float    farZ = 100.0f;

	SDL_FreeSurface(bmp);

	SDL_DestroyTexture(tex);

		return hr;

			{

			switch (e.key.keysym.sym)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	LoadObj(vertexlist, indexList);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	if (!reader.Warning().empty())



{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}

	bool ret = tinyobj::LoadObj(

	ID3D11Texture2D* pBackBuffer;



	//頂点シェーダー生成



		size_t index_offset = 0;

	m_pTextureView = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))

		SDL_RenderPresent(ren);

}
				indexlist.push_back(idx.vertex_index);

	if (FAILED(hr))

};

	SAFE_RELEASE(m_pPixelShader);

{

void CD3DTest::Render()

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	UINT flags = 0;



		cout << "SDL_INIT_ERROR" << endl;

				break;

#endif

	SAFE_RELEASE(m_pIndexBuffer);

		&level,

	D3D11_TEXTURE2D_DESC txDesc;

}



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		SDL_Delay(1000);



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		exit(1);



	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.MiscFlags = 0;

			{

				break;

	{

		cout << "SDL_INIT_ERROR" << endl;

	SDL_DestroyRenderer(ren);

/*



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SDL_Event e;

};

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	txDesc.SampleDesc.Count = 1;

	D3D11_TEXTURE2D_DESC txDesc;

	}

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	D3D_FEATURE_LEVEL level;

				break;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.CPUAccessFlags = 0;

		return hr;

	//Create Index

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



#include <iostream>

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

void CD3DTest::Render()

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



struct ConstantMatrixBuffer {

			index_offset += fv;

		//User requests quit

		SDL_RenderClear(ren);

}



	D3D11_BUFFER_DESC cbDesc;



	m_pTexture = NULL;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

void CD3DTest::Release()

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	for (int i = 0; i < 3; i++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemSlicePitch = 0;



				WORD index = idx.vertex_index;



				tinyobj::real_t tx =

	bool ret = tinyobj::LoadObj(

	txDesc.CPUAccessFlags = 0;





{



			}

		NULL,

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pDepthStencilTexture);

 */

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pRenderTargetView);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

	};

	//vector<Vertex> vertex_t;

	bool ret = tinyobj::LoadObj(

	txDesc.SampleDesc.Count = 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

	if (FAILED(hr))



	DXGI_SWAP_CHAIN_DESC scDesc;

				break;

	D3D11_TEXTURE2D_DESC txDesc;

	m_IndexCount = icount;

	m_VertexCount = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	dsDesc.Texture2D.MipSlice = 0;



	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	Release();



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

CD3DTest::CD3DTest()

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pRenderTargetView);

int main(int, char**)

	reader_config.mtl_search_path = "./"; // Path to material files

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	Release();

	XMFLOAT4X4 world;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.MinDepth = 0.0f;



		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	tinyobj::ObjReader reader;

CD3DTest::~CD3DTest()



	int     vcount = vertexlist.size();







	m_pIndexBuffer = NULL;

	UINT offsets = 0;

			case SDLK_RIGHT:

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



};

	XMFLOAT4X4 projection;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	WORD* pIList = new WORD[icount];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D11_SUBRESOURCE_DATA vrData;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_Viewport.MaxDepth = 1.0f;

 */

};





	ibDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

};

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



		delete[] pIList;

	scDesc.Windowed = TRUE;

	auto& shapes = reader.GetShapes();

	return hr;

		delete[] pIList;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

using std::cout; using std::endl;

	cbDesc.MiscFlags = 0;

	m_pDepthStencilView = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderPresent(ren);

	D3D11_BUFFER_DESC ibDesc;



		if (!reader.Error().empty())



		// Loop over faces(polygon)

	}

	SDL_DestroyTexture(tex);



	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pLightBuffer);



		m_pImmediateContext->ClearState();



	m_Viewport.TopLeftY = 0;

	m_pDepthStencilTexture = NULL;

			case SDLK_LEFT:

	m_Viewport.Height = (FLOAT)rect.Height();



	//vector<WORD> index_t;

		}

	Release();

	txDesc.ArraySize = 1;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		pIList[j] = indexList[j];



	ZeroMemory(&txDesc, sizeof(txDesc));

	float    nearZ = 0.1f;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		D3D11_SDK_VERSION,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pLightBuffer = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.Windowed = TRUE;

				WORD index = idx.vertex_index;

	scDesc.BufferDesc.Width = rect.Width();





	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))





	XMFLOAT4X4 view;

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//First we need to start up SDL, and make sure it went ok

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.ambient, lightAmbient);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		NULL,

		return hr;

		}

	m_Viewport.MinDepth = 0.0f;



	if (FAILED(hr))

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int SEGMENT = 36;

	D3D11_BUFFER_DESC vbDesc;

			for (size_t v = 0; v < num_vertices; v++)

	m_pLightBuffer = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

			{

	m_pTexture = NULL;

		size_t index_offset = 0;  // インデントのオフセット

		SDL_Delay(1000);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.Windowed = TRUE;

	{

	scDesc.SampleDesc.Count = 1;

{

		SDL_RenderPresent(ren);

	m_Viewport.Width = (FLOAT)rect.Width();

{

		SDL_RenderPresent(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_FreeSurface(suf);

	//頂点バッファ作成

	delete[] pIList;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL level;

	if (m_pImmediateContext)

		&scDesc,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA vrData;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pLightBuffer = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				break;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	WORD   icount = indexList.size();

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ConstantMatrixBuffer cmb;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	UINT flags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_SUBRESOURCE_DATA vrData;

	//頂点バッファ作成

}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pImmediateContext);

int main(int, char**)

	//頂点シェーダー生成

	vrData.SysMemSlicePitch = 0;

			}

	std::string imagePath = "hello.bmp";

		m_pImmediateContext->ClearState();

		}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SAFE_RELEASE(m_pPixelShader);

	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_VertexCount = 0;



		}

	m_VertexCount = 0;

	}

	m_pPixelShader = NULL;

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}



		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

 */

}
	if (FAILED(hr))

	{



	D3D11_BUFFER_DESC cbDesc;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

	}

	dsDesc.Format = txDesc.Format;

				break;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 specular;          //反射(r,g,b)

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

#define TINYOBJLOADER_IMPLEMENTATION



	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DOWN,

		&materials,

			case SDLK_UP:



		&level,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.StructureByteStride = 0;

		&shapes,





	m_VertexCount = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantMatrixBuffer {

		&scDesc,

		SDL_Delay(1000);

HRESULT CD3DTest::Create(HWND hwnd)

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		pLevels,

		&attrib,

};



	{

	WORD* pIList = new WORD[icount];

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pDepthStencilView);

			{

	{



			exit(1);

			{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyWindow(win);



 * Lesson 1: Hello World!



				tinyobj::real_t tx =

			}



			case SDLK_UP:

#include "DirectXManager.h"

	SAFE_RELEASE(m_pSwapChain);

			index_offset += num_vertices;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			}

		{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.MiscFlags = 0;

	for (int j = 0; j < icount; j++)

	XMFLOAT4 pos;               //座標(x,y,z)

	txDesc.Height = rect.Height();

}

				break;

	ID3D11Texture2D* pBackBuffer;

		return hr;

	m_pDepthStencilTexture = NULL;

	scDesc.SampleDesc.Count = 1;



struct ConstantLight {

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User requests quit

		return hr;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	//頂点レイアウト作成

	D3D11_SAMPLER_DESC smpDesc;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	WORD   icount = indexList.size();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

			index_offset += num_vertices;

	UINT flags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	auto& shapes = reader.GetShapes();

	bool ret = tinyobj::LoadObj(

	dsDesc.Texture2D.MipSlice = 0;



	SDL_Quit();





	vbDesc.MiscFlags = 0;







	flags |= D3D11_CREATE_DEVICE_DEBUG;

	dsDesc.Format = txDesc.Format;

#include "DirectXManager.h"

	scDesc.BufferCount = 1;



	{

			{

	vbDesc.CPUAccessFlags = 0;

	SDL_Quit();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	for (int i = 0; i < 3; i++)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Count = 1;

		pVList[i] = vertexlist[i];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);







	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

{

	std::string imagePath = "hello.bmp";

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	m_pSwapChain = NULL;

	D3D_FEATURE_LEVEL level;

struct ConstantLight {



	vbDesc.MiscFlags = 0;

	{

	ID3D11Texture2D* pBackBuffer;

	m_Viewport.MinDepth = 0.0f;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



 */

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	}





		//User requests quit

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_VertexCount = 0;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	D3D_FEATURE_LEVEL level;

		KEY_PRESS_SURFACE_LEFT,



		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		D3D11_SDK_VERSION,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	//ビューポート設定

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//ビューポート設定

		return hr;

	delete[] pVList;

				vertex.push_back(vertex_tmp);

	int     vcount = vertexlist.size();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_Viewport.Width = (FLOAT)rect.Width();

	int     vcount = vertexlist.size();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//頂点バッファ作成

	m_pVertexBuffer = NULL;



		NULL,

	//ピクセルシェーダー生成

				break;

		NULL,

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.OutputWindow = hwnd;

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_TEXTURE2D_DESC txDesc;



			case SDLK_UP:

#include <SDL.h>



	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

#ifdef _DEBUG

		{

	ibDesc.CPUAccessFlags = 0;

	{

			}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	{

				WORD index = idx.vertex_index;

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

using std::cout; using std::endl;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





 */

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	scDesc.BufferDesc.Width = rect.Width();

		delete[] pIList;



	//頂点シェーダー生成

	SDL_FreeSurface(suf);

{

	std::string imagePath = "hello.bmp";

		1,

#endif

	//Clean up our objects and quit



	float    aspect = m_Viewport.Width / m_Viewport.Height;





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

	//Create Index

	float    fov = XMConvertToRadians(20.0f);

#define TINYOBJLOADER_IMPLEMENTATION

	m_Viewport.Width = (FLOAT)rect.Width();

		SDL_Delay(1000);

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vector<WORD> indexList;



{





	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pImmediateContext);

		}

	SAFE_RELEASE(m_pInputLayout);

		return hr;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ibDesc.StructureByteStride = 0;

	tinyobj::ObjReaderConfig reader_config;

};

	m_pSwapChain->Present(0, 0);

	m_Viewport.TopLeftY = 0;

		return hr;





	//First we need to start up SDL, and make sure it went ok

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vrData.SysMemPitch = 0;

		return hr;



	m_pImmediateContext = NULL;

	if (FAILED(hr))

};

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pTexture = NULL;

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//テクスチャ読み込み

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	HRESULT              hr;



		size_t index_offset = 0;

	scDesc.BufferDesc.Height = rect.Height();



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_Viewport.TopLeftX = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	Release();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	m_pTexture = NULL;

		&m_pImmediateContext);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

			}

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		1,

	{



	XMFLOAT4X4 world;

	vector<WORD> indexList;

	if (m_pImmediateContext)

	m_pInputLayout = NULL;

	std::string error;

	std::string imagePath = "hello.bmp";

			}

		SDL_RenderPresent(ren);



		1,

	SAFE_RELEASE(m_pIndexBuffer);

		}

	SDL_DestroyWindow(win);

		KEY_PRESS_SURFACE_DEFAULT,

			exit(1);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		pLevels,

	}

		m_pImmediateContext->ClearState();

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_Delay(1000);

		size_t index_offset = 0;  // インデントのオフセット



	{

#endif

	//深度ステンシルバッファ作成

	m_pRenderTargetView = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

CD3DTest::CD3DTest()

#include "DirectXManager.h"

	txDesc.ArraySize = 1;

#define TINYOBJLOADER_IMPLEMENTATION

		{

	m_Viewport.TopLeftX = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ZeroMemory(&txDesc, sizeof(txDesc));

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	SAFE_RELEASE(m_pPixelShader);

};



		return hr;

	cbDesc.MiscFlags = 0;

}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

int main(int, char**)

HRESULT CD3DTest::Create(HWND hwnd)

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				break;

	float    farZ = 100.0f;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int i = 0; i < vcount; i++)

				break;

	XMFLOAT4 pos;               //座標(x,y,z)

#endif

		{





	tinyobj::ObjReader reader;

			exit(1);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.CPUAccessFlags = 0;

	m_VertexCount = vcount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		&materials,



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pTexture);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//インデックスバッファ作成

	bool ret = tinyobj::LoadObj(

	{

			index_offset += num_vertices;



				break;





	}

	m_pVertexShader = NULL;

	m_Viewport.MinDepth = 0.0f;

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	{

				// access to vertex

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.BufferDesc.Width = rect.Width();





	SAFE_RELEASE(m_pVertexBuffer);

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		// Loop over faces(polygon)

				// access to vertex

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_Viewport.TopLeftY = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	for (int j = 0; j < icount; j++)

		return hr;

	m_Viewport.MinDepth = 0.0f;





	m_Viewport.TopLeftY = 0;

		&error,

				break;

	//vector<Vertex> vertex_t;

	txDesc.ArraySize = 1;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	LoadObj(vertexlist, indexList);



#include <iostream>



	vector<WORD> indexList;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vector<WORD> indexList;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	for (const auto& shape : shapes)

	if (FAILED(hr))

		size_t index_offset = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ID3D11Texture2D* pBackBuffer;

{



	std::vector<tinyobj::material_t> materials;

	{

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	cbDesc.MiscFlags = 0;







	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	SDL_DestroyWindow(win);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

CD3DTest::CD3DTest()

	reader_config.mtl_search_path = "./"; // Path to material files

	while (SDL_PollEvent(&e) != 0)

	vbDesc.MiscFlags = 0;

		&materials,

	Vertex* pVList = new Vertex[vcount];

	return hr;

		else if (e.type == SDL_KEYDOWN)

	return 0;

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

}

		KEY_PRESS_SURFACE_DOWN,

	m_pDepthStencilTexture = NULL;

	D3D11_TEXTURE2D_DESC txDesc;



			//Select surfaces based on key press

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	reader_config.mtl_search_path = "./"; // Path to material files

	Release();



				// access to vertex

	return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.SampleDesc.Quality = 0;

	bool ret = tinyobj::LoadObj(

				tinyobj::real_t ty =

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

{

				tinyobj::real_t tx =

	while (SDL_PollEvent(&e) != 0)

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		&scDesc,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			default:

	std::vector<tinyobj::shape_t> shapes;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

}
		return hr;

	vrData.pSysMem = &pVList[0];

	if (!reader.ParseFromFile(inputfile, reader_config))

	txDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	tinyobj::ObjReaderConfig reader_config;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	//テクスチャ読み込み

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	dsDesc.Texture2D.MipSlice = 0;

};

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.ArraySize = 1;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				WORD index = idx.vertex_index;

	SDL_DestroyTexture(tex);

	//Key press surfaces constants

	{

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	delete[] pIList;

	while (SDL_PollEvent(&e) != 0)

		return hr;

	Release();





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyWindow(win);

 * Lesson 1: Hello World!

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	LoadObj(vertexlist, indexList);



	irData.SysMemPitch = 0;

void CD3DTest::Render()



	LoadObj(vertexlist, indexList);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);







	if (FAILED(hr))

	//vector<Vertex> vertex_t;

}

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

CD3DTest::~CD3DTest()

#include <iostream>

			{

	XMFLOAT4 specular;          //反射(r,g,b)

	vbDesc.CPUAccessFlags = 0;

	{

}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	enum KeyPressSurfaces

	irData.SysMemPitch = 0;

	{

	if (FAILED(hr))

	tinyobj::attrib_t attrib;



		return hr;

	scDesc.SampleDesc.Quality = 0;

		return hr;



	m_pDevice = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SAFE_RELEASE(m_pPixelShader);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{

	float    nearZ = 0.1f;

	XMFLOAT4X4 projection;

	WORD   icount = indexList.size();

			case SDLK_LEFT:

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

	int     vcount = vertexlist.size();

	XMFLOAT4X4 view;



struct ConstantLightBuffer {

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

	{

	m_pLightBuffer = NULL;

	UINT strides = sizeof(Vertex);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

#include <SDL.h>

	CRect                rect;

	::ZeroMemory(&scDesc, sizeof(scDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

	D3D11_BUFFER_DESC vbDesc;

	};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pTexture = NULL;

			{

		return hr;

	cbDesc.CPUAccessFlags = 0;

	SDL_Quit();

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	if (!error.empty())

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{

	// Loop over shapes

	m_IndexCount = icount;

	D3D11_SUBRESOURCE_DATA vrData;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//テクスチャ読み込み

		{

	//テクスチャ読み込み

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha









int main(int, char**)

	{

	if (FAILED(hr))

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	std::vector<tinyobj::material_t> materials;

	auto& attrib = reader.GetAttrib();





	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pIndexBuffer);

		1,

	txDesc.SampleDesc.Count = 1;

	float    fov = XMConvertToRadians(20.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pDepthStencilTexture = NULL;

	// Loop over shapes

}

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	std::vector<tinyobj::material_t> materials;

	Vertex* pVList = new Vertex[vcount];

	}



	}

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMFLOAT4X4 world;



			break;

{

	txDesc.SampleDesc.Quality = 0;

	{

	auto& attrib = reader.GetAttrib();



		SDL_RenderPresent(ren);

	reader_config.mtl_search_path = "./"; // Path to material files

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_DOWN,

	irData.pSysMem = &pIList[0];

void CD3DTest::Release()

	SAFE_RELEASE(m_pTextureView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

 * Lesson 1: Hello World!

	return hr;

	std::string error;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	int     vcount = vertexlist.size();

 */



		SDL_Delay(1000);

			case SDLK_DOWN:

		}

		pVList[i] = vertexlist[i];



				indexlist.push_back(index);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_DOWN,

	ibDesc.MiscFlags = 0;

	vector<WORD> indexList;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMFLOAT4 diffuse;           //拡散(r,g,b)



				break;





	//Create Index

	float    nearZ = 0.1f;

		{

	scDesc.BufferDesc.Width = rect.Width();

	{

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&shapes,

		return hr;

	m_IndexCount = 0;



{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (FAILED(hr))



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	m_IndexCount = 0;

		delete[] pVList;

		1,

		return hr;

	SAFE_RELEASE(m_pPixelShader);

	m_pLightBuffer = NULL;

{

	pBackBuffer->Release();

				tinyobj::real_t tx =

	m_VertexCount = 0;

	/*

	{

	if (!error.empty())

	for (int i = 0; i < 3; i++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}
				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	XMFLOAT4X4 view;

		exit(1);





	if (FAILED(hr))

	pBackBuffer->Release();

		// Loop over faces(polygon)

	ibDesc.MiscFlags = 0;

		}

				vertex.push_back(vertex_tmp);

	//頂点バッファ作成

			index_offset += fv;

	if (FAILED(hr))

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

	::GetClientRect(hwnd, &rect);

			default:

	m_pIndexBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



			exit(1);

		delete[] pIList;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_DOWN:

	vrData.SysMemPitch = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pTextureView);

		KEY_PRESS_SURFACE_RIGHT,

	Vertex* pVList = new Vertex[vcount];



	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.Warning().empty())

		}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		delete[] pIList;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				// access to vertex

 */

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };





	m_pVertexBuffer = NULL;

	ID3D11Texture2D* pBackBuffer;

	return;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	UINT flags = 0;





		}



	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

	}



	{

		}

		1,

	WORD   icount = indexList.size();

	return;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		R"(cube.obj)");

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	while (SDL_PollEvent(&e) != 0)

	return 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		KEY_PRESS_SURFACE_UP,



{

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pTexture);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		return 1;



CD3DTest::~CD3DTest()

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.SampleDesc.Quality = 0;

			for (size_t v = 0; v < num_vertices; v++)

		}



	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	m_pDepthStencilView = NULL;

	}

	SAFE_RELEASE(m_pVertexBuffer);

{

				break;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pPixelShader);

	m_pDevice = NULL;

void CD3DTest::Release()

struct ConstantMatrixBuffer {



	vrData.SysMemPitch = 0;

		exit(1);

	SAFE_RELEASE(m_pSwapChain);

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	vrData.SysMemPitch = 0;



		&m_pSwapChain,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);



	for (size_t s = 0; s < shapes.size(); s++)

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	auto& attrib = reader.GetAttrib();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	};

{

		SDL_RenderClear(ren);

	cbDesc.MiscFlags = 0;

#endif



	irData.SysMemSlicePitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&scDesc,

			index_offset += fv;

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	tinyobj::ObjReader reader;

	vrData.SysMemSlicePitch = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		{

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		return 1;

		return hr;

	scDesc.SampleDesc.Quality = 0;

			//Select surfaces based on key press

	// Loop over shapes

#ifdef _DEBUG

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

CD3DTest::~CD3DTest()

		exit(1);

		SDL_RenderCopy(ren, tex, NULL, NULL);



		KEY_PRESS_SURFACE_TOTAL

	{



#include <SDL.h>

	SAFE_RELEASE(m_pTextureView);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyWindow(win);

	XMFLOAT4X4 world;

	m_pLightBuffer = NULL;



	vector<Vertex> vertexlist;

	SDL_Quit();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		delete[] pIList;

	SDL_DestroyTexture(tex);

	// Loop over shapes

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pImmediateContext);

	//定数バッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				WORD index = idx.vertex_index;

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

	std::vector<tinyobj::material_t> materials;

	scDesc.SampleDesc.Count = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//vector<WORD> index_t;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		KEY_PRESS_SURFACE_UP,

	}

};

		SDL_RenderPresent(ren);

	ConstantLightBuffer clb;

	{

	{

	m_Viewport.TopLeftY = 0;

	SDL_DestroyWindow(win);

		return hr;

	{

}

	m_pSwapChain->Present(0, 0);

	irData.SysMemSlicePitch = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



int main(int, char**)



	{

			// Loop over vertices in the face.

	m_Viewport.TopLeftX = 0;

int main(int, char**)

	}



	scDesc.BufferDesc.Width = rect.Width();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	//vector<WORD> index_t;

		{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];



		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pSwapChain->Present(0, 0);

	m_Viewport.TopLeftX = 0;

	UINT flags = 0;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	irData.pSysMem = &pIList[0];

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		SDL_RenderClear(ren);

	cbDesc.CPUAccessFlags = 0;

		&attrib,







{

	std::vector<tinyobj::material_t> materials;

	}*/

	}

				break;

#include <iostream>

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				// access to vertex

{

	Vertex* pVList = new Vertex[vcount];

		pLevels,



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

	{

 */

void CD3DTest::Render()

int main(int, char**)

	//ビューポート設定

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	return 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pSwapChain->Present(0, 0);

	//深度ステンシルバッファ作成

				indexlist.push_back(idx.vertex_index);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		if (e.type == SDL_QUIT)

	for (int j = 0; j < icount; j++)

	}

	}



	/*

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	vbDesc.MiscFlags = 0;

	SDL_Quit();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		return hr;

	}





{

	txDesc.ArraySize = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4X4 world;

	m_pSwapChain->Present(0, 0);

	ConstantMaterial material; //物体の質感

	scDesc.SampleDesc.Count = 1;

}

/*

		R"(cube.obj)");

		KEY_PRESS_SURFACE_DOWN,

	//インデックスバッファ作成

};

		&level,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//ビューポート設定

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	SAFE_RELEASE(m_pSampler);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

			switch (e.key.keysym.sym)

#include <iostream>









	SAFE_RELEASE(m_pSwapChain);

#include <SDL.h>

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

#include <iostream>

	}

	SAFE_RELEASE(m_pTextureView);



	auto& shapes = reader.GetShapes();

#ifdef _DEBUG

	irData.SysMemSlicePitch = 0;

		else if (e.type == SDL_KEYDOWN)

		//User requests quit

{



	SAFE_RELEASE(m_pDepthStencilTexture);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_BUFFER_DESC cbDesc;



	if (!reader.ParseFromFile(inputfile, reader_config))

	vrData.SysMemPitch = 0;





using std::cout; using std::endl;

	m_pDepthStencilTexture = NULL;

		}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

CD3DTest::~CD3DTest()

	::GetClientRect(hwnd, &rect);

		}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_DestroyTexture(tex);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		SDL_RenderPresent(ren);

		&shapes,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		&materials,

 * Lesson 1: Hello World!



	{

		cout << "SDL_INIT_ERROR" << endl;

	{

	if (FAILED(hr))



	m_Viewport.Height = (FLOAT)rect.Height();

		pVList[i] = vertexlist[i];

{



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		&m_pSwapChain,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		size_t index_offset = 0;

			for (size_t v = 0; v < num_vertices; v++)



			//Select surfaces based on key press

	D3D11_SUBRESOURCE_DATA irData;



	ZeroMemory(&txDesc, sizeof(txDesc));

				break;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

				break;



	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	Release();



	::GetClientRect(hwnd, &rect);

	m_pImmediateContext = NULL;

	// Loop over shapes

	{



				vertex.push_back(vertex_tmp);

	irData.pSysMem = &pIList[0];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);











		m_pImmediateContext->ClearState();

	CRect                rect;

		{

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_Angle += XMConvertToRadians(1.0f);

		&m_pSwapChain,





	tinyobj::attrib_t attrib;

	m_IndexCount = icount;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pImmediateContext);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&level,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.MiscFlags = 0;

	m_pDepthStencilTexture = NULL;

	SDL_FreeSurface(bmp);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	delete[] pVList;

	Vertex* pVList = new Vertex[vcount];



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

};

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	delete[] pIList;

	Release();

	pBackBuffer->Release();



	}



		return hr;

		return hr;

		return hr;



int SEGMENT = 36;



		}

	ZeroMemory(&txDesc, sizeof(txDesc));

			{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pPixelShader = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



			case SDLK_LEFT:

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_Viewport.TopLeftX = 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			case SDLK_RIGHT:

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D11_TEXTURE2D_DESC txDesc;

	}





	ibDesc.CPUAccessFlags = 0;

}

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	txDesc.SampleDesc.Quality = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (m_pImmediateContext)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pRenderTargetView);





	{

		return hr;

	txDesc.Height = rect.Height();



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		SDL_RenderPresent(ren);





	SAFE_RELEASE(m_pTexture);

		1,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				break;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



/*

	m_pSampler = NULL;

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);



	if (FAILED(hr))

	{

int main(int, char**)

	if (FAILED(hr))

				break;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	delete[] pVList;





int SEGMENT = 36;

	txDesc.Width = rect.Width();

{

	::ZeroMemory(&scDesc, sizeof(scDesc));





	SDL_Quit();

	CRect                rect;

	{

		&shapes,



{

		SDL_RenderClear(ren);

		SDL_RenderPresent(ren);

	}



{



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pDepthStencilView = NULL;

	XMFLOAT4 ambient;           //環境(r,g,b)

				break;

	DXGI_SWAP_CHAIN_DESC scDesc;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pPixelShader);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

	if (FAILED(hr))

	return 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				vertex.push_back(vertex_tmp);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	scDesc.SampleDesc.Quality = 0;

		return hr;





		pIList[j] = indexList[j];

	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.MaxDepth = 1.0f;

	m_pTextureView = NULL;



	}



	vrData.SysMemPitch = 0;

		{

	if (FAILED(hr))



};

#ifdef _DEBUG

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	ConstantLight    pntLight; //点光源

{

		R"(cube.obj)");

	// Loop over shapes

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	m_Viewport.MaxDepth = 1.0f;

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	ZeroMemory(&dsDesc, sizeof(dsDesc));



	//頂点シェーダー生成

		pIList[j] = indexList[j];







		SDL_RenderPresent(ren);





struct ConstantMaterial {

	};

int main(int, char**)

		}

	irData.pSysMem = &pIList[0];



			}



		pLevels,

	cbDesc.CPUAccessFlags = 0;

}

	auto& materials = reader.GetMaterials();

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pIndexBuffer);

	m_pRenderTargetView = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pVertexShader);

	// Loop over shapes

			}





	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

struct ConstantMaterial {

			{

#include <SDL.h>

	}*/

	delete[] pIList;

	txDesc.ArraySize = 1;

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



}

	SAFE_RELEASE(m_pRenderTargetView);

		pLevels,

	{



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

#ifdef _DEBUG

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.Windowed = TRUE;

#include <iostream>

}



	SDL_DestroyRenderer(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_VertexCount = 0;

{



		return hr;



			{

 */

	scDesc.Windowed = TRUE;

		if (!ret)

	vbDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//vector<WORD> index_t;

struct ConstantMatrixBuffer {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

			exit(1);

	SAFE_RELEASE(m_pInputLayout);

	m_pMatrixBuffer = NULL;

		&attrib,

	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

		size_t index_offset = 0;  // インデントのオフセット

#define TINYOBJLOADER_IMPLEMENTATION

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

CD3DTest::~CD3DTest()

		KEY_PRESS_SURFACE_TOTAL

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	for (size_t s = 0; s < shapes.size(); s++)

};

}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	D3D11_BUFFER_DESC vbDesc;

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pTexture);

		}

#define TINYOBJLOADER_IMPLEMENTATION

	for (int i = 0; i < vcount; i++)

	txDesc.Height = rect.Height();

	//Key press surfaces constants

	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	// Loop over shapes

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

	m_Viewport.TopLeftX = 0;

	/*

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pTextureView);

	m_Angle += XMConvertToRadians(1.0f);

	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	std::string imagePath = "hello.bmp";

	vrData.SysMemPitch = 0;

	{



	SDL_FreeSurface(suf);

		&m_pImmediateContext);

			case SDLK_UP:



	txDesc.ArraySize = 1;

struct ConstantMatrixBuffer {

				WORD index = idx.vertex_index;

			{

	m_Viewport.TopLeftX = 0;

#include <SDL.h>

	for (const auto& shape : shapes)

	if (!reader.Warning().empty())

	m_Angle += XMConvertToRadians(1.0f);

#include "DirectXManager.h"

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	XMFLOAT4X4 world;

		else if (e.type == SDL_KEYDOWN)

}

		SDL_RenderCopy(ren, tex, NULL, NULL);

#include <SDL.h>



		SDL_Delay(1000);

	vector<WORD> indexList;

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;


