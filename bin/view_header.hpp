	SAFE_RELEASE(m_pLightBuffer);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.Format = txDesc.Format;

int main(int, char**)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	ConstantMaterial material; //物体の質感

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

};

	scDesc.SampleDesc.Quality = 0;

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pVertexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//定数バッファ作成

	D3D11_SUBRESOURCE_DATA irData;



	cbDesc.CPUAccessFlags = 0;

}

}

	txDesc.CPUAccessFlags = 0;

			index_offset += fv;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

#include <SDL.h>

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

			switch (e.key.keysym.sym)



	if (FAILED(hr))

	UINT offsets = 0;

	m_pImmediateContext = NULL;

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.BufferDesc.Width = rect.Width();

		}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	if (!reader.Warning().empty())

	XMFLOAT4 specular;          //反射(r,g,b)

	{

	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}



	txDesc.MiscFlags = 0;

	tinyobj::attrib_t attrib;

		{

	enum KeyPressSurfaces



using std::cout; using std::endl;

	m_Viewport.Width = (FLOAT)rect.Width();

		// Loop over faces(polygon)

	SDL_Quit();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vector<WORD> indexList;

CD3DTest::CD3DTest()

#include <SDL.h>

	SDL_DestroyTexture(tex);

}

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	//頂点バッファ作成

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	for (int i = 0; i < 3; i++)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	//定数バッファ作成

		D3D_DRIVER_TYPE_HARDWARE,

		&scDesc,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_SAMPLER_DESC smpDesc;

	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyWindow(win);

{

	m_pVertexShader = NULL;

		else if (e.type == SDL_KEYDOWN)

	txDesc.Width = rect.Width();



	m_VertexCount = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



			case SDLK_UP:

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	Release();

	{

		KEY_PRESS_SURFACE_LEFT,

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;





			}



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyTexture(tex);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				indexlist.push_back(idx.vertex_index);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pSwapChain->Present(0, 0);

	D3D11_SUBRESOURCE_DATA vrData;

struct ConstantMaterial {

	//インデックスバッファ作成



		}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pRenderTargetView = NULL;



	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pSampler);



				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		SDL_Delay(1000);

/*



		size_t index_offset = 0;  // インデントのオフセット

struct ConstantLight {

	//深度ステンシルバッファ作成

	scDesc.SampleDesc.Count = 1;

{

#endif

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.StructureByteStride = 0;

		}

		delete[] pIList;

	std::vector<tinyobj::material_t> materials;

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))

{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.SampleDesc.Quality = 0;

	cbDesc.CPUAccessFlags = 0;



int main(int, char**)

		SDL_RenderClear(ren);

	scDesc.OutputWindow = hwnd;

	{

	SAFE_RELEASE(m_pVertexShader);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//ピクセルシェーダー生成

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Event e;

			for (size_t v = 0; v < fv; v++)

}

	//vector<Vertex> vertex_t;

	std::string imagePath = "hello.bmp";

		SDL_Delay(1000);

	{





		return hr;

	vector<WORD> indexList;

	if (!reader.Warning().empty())

	//Key press surfaces constants

	std::vector<tinyobj::shape_t> shapes;

	if (FAILED(hr))

	SDL_FreeSurface(suf);

		}

		{

	m_pTextureView = NULL;

{

	tinyobj::attrib_t attrib;

	//vector<WORD> index_t;

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		}

	m_IndexCount = icount;

/*

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_Viewport.Height = (FLOAT)rect.Height();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	::ZeroMemory(&scDesc, sizeof(scDesc));

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	ConstantMatrixBuffer cmb;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

				break;



	//First we need to start up SDL, and make sure it went ok

		return hr;

	SAFE_RELEASE(m_pSampler);

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		D3D_DRIVER_TYPE_HARDWARE,

	for (int i = 0; i < 3; i++)







	return;



	irData.SysMemPitch = 0;



	m_pDevice = NULL;



	//vector<WORD> index_t;

	m_pLightBuffer = NULL;

	m_VertexCount = 0;

			{

	SAFE_RELEASE(m_pSwapChain);



{

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pMatrixBuffer = NULL;

			}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vrData.SysMemSlicePitch = 0;

				WORD index = idx.vertex_index;

	{

	UINT flags = 0;

	vrData.SysMemSlicePitch = 0;

	}

			{

		size_t index_offset = 0;  // インデントのオフセット



	Vertex* pVList = new Vertex[vcount];

	scDesc.OutputWindow = hwnd;

	//頂点レイアウト作成

	float    nearZ = 0.1f;



	//Vertex* pVList = new Vertex[vcount];

	//深度ステンシルバッファ作成

	txDesc.Width = rect.Width();

 */

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.MiscFlags = 0;

	m_pVertexShader = NULL;

	//Vertex* pVList = new Vertex[vcount];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	txDesc.Height = rect.Height();

{

	SDL_DestroyRenderer(ren);



				break;

	D3D11_SAMPLER_DESC smpDesc;

				break;

	//Key press surfaces constants

	scDesc.Windowed = TRUE;

	dsDesc.Format = txDesc.Format;

	txDesc.Width = rect.Width();

	m_pImmediateContext = NULL;

	SDL_Quit();

	XMFLOAT4X4 world;

 * Lesson 1: Hello World!

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		D3D11_SDK_VERSION,

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

	UINT offsets = 0;



	SAFE_RELEASE(m_pImmediateContext);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_FreeSurface(bmp);

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			case SDLK_DOWN:

		m_pImmediateContext->ClearState();



	D3D11_BUFFER_DESC ibDesc;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ConstantMaterial material; //物体の質感

};

	txDesc.SampleDesc.Quality = 0;

	vector<WORD> indexList;

 * Lesson 1: Hello World!





	vbDesc.CPUAccessFlags = 0;

	//ビューポート設定

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pDevice = NULL;

	irData.pSysMem = &pIList[0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		SDL_RenderClear(ren);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		if (!ret)

		{

		if (!ret)

	ConstantMatrixBuffer cmb;

			case SDLK_RIGHT:

		//User requests quit

}



	//ビューポート設定



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				indexlist.push_back(index);

		return hr;

	std::string error;

	m_Angle += XMConvertToRadians(1.0f);

struct ConstantMaterial {

	SAFE_RELEASE(m_pVertexBuffer);

	};

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (!reader.Warning().empty())

	m_Viewport.MaxDepth = 1.0f;

	SAFE_RELEASE(m_pRenderTargetView);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyTexture(tex);



{

	tinyobj::ObjReader reader;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	int     vcount = vertexlist.size();

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))



	LoadObj(vertexlist, indexList);

	ConstantLightBuffer clb;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

void CD3DTest::Render()



		}

void CD3DTest::Render()

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			index_offset += num_vertices;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	if (FAILED(hr))

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		delete[] pVList;

	ConstantLight    pntLight; //点光源

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				// access to vertex

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	WORD* pIList = new WORD[icount];

		D3D11_SDK_VERSION,

	for (int j = 0; j < icount; j++)

				tinyobj::real_t ty =



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		size_t index_offset = 0;  // インデントのオフセット

};

		SDL_RenderPresent(ren);

		pLevels,

		return 1;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

{

	SDL_DestroyTexture(tex);



			index_offset += fv;

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 specular;          //反射(r,g,b)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	// Loop over shapes

	m_pMatrixBuffer = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//ピクセルシェーダー生成

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	vector<Vertex> vertexlist;

};

				vertex.push_back(vertex_tmp);

		SDL_Delay(1000);

	D3D_FEATURE_LEVEL level;

	txDesc.SampleDesc.Quality = 0;

	irData.SysMemSlicePitch = 0;

	{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		return hr;



}

			index_offset += num_vertices;



	ConstantLightBuffer clb;

		KEY_PRESS_SURFACE_RIGHT,

	m_VertexCount = 0;

 */

		{

struct ConstantMaterial {

	std::string inputfile = "test.obj";

	m_pDevice = NULL;

	m_pVertexShader = NULL;

{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		SDL_RenderCopy(ren, tex, NULL, NULL);



struct ConstantLight {

	m_Viewport.Height = (FLOAT)rect.Height();

		{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_Viewport.Width = (FLOAT)rect.Width();

		&level,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

struct ConstantLightBuffer {

{

	SDL_DestroyWindow(win);

}

		D3D_DRIVER_TYPE_HARDWARE,



	CRect                rect;

	//First we need to start up SDL, and make sure it went ok

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4X4 projection;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_Viewport.MaxDepth = 1.0f;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//Key press surfaces constants

	ConstantMaterial material; //物体の質感

CD3DTest::~CD3DTest()

	if (FAILED(hr))

		return hr;

	m_pVertexShader = NULL;

	{

	if (FAILED(hr))

			case SDLK_LEFT:

		&scDesc,

	CRect                rect;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		if (e.type == SDL_QUIT)

	Release();

		&error,



		{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

	SAFE_RELEASE(m_pTextureView);

	if (FAILED(hr))





	enum KeyPressSurfaces

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

			{



	m_pDepthStencilView = NULL;

				break;

	m_Angle += XMConvertToRadians(1.0f);

	XMStoreFloat4(&clb.eyePos, eye);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	UINT flags = 0;

	UINT offsets = 0;



	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	}

	m_pSampler = NULL;

#include <iostream>



	cbDesc.StructureByteStride = 0;



		SDL_Delay(1000);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_BUFFER_DESC vbDesc;

	ConstantMatrixBuffer cmb;

	m_pTexture = NULL;

		}

	}

		return 1;

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

	}

	m_pVertexShader = NULL;

struct ConstantLightBuffer {

	txDesc.MipLevels = 1;

	enum KeyPressSurfaces

	std::string inputfile = "test.obj";

#ifdef _DEBUG

	{

			break;

				break;

	ConstantMaterial material; //物体の質感

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pSwapChain = NULL;

	ID3D11Texture2D* pBackBuffer;

struct ConstantMatrixBuffer {

	while (SDL_PollEvent(&e) != 0)

	return 0;

		&m_pImmediateContext);

	m_pInputLayout = NULL;

	//頂点バッファ作成

	XMFLOAT4         ambient;  //環境光(r,g,b)

	while (SDL_PollEvent(&e) != 0)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		//User requests quit

	if (m_pImmediateContext)

	m_pTextureView = NULL;

	m_IndexCount = 0;



	scDesc.SampleDesc.Count = 1;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&attrib,

		}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.Width = rect.Width();

		exit(1);

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

	SDL_Quit();

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_pSwapChain = NULL;



};

				indexlist.push_back(idx.vertex_index);

	dsDesc.Format = txDesc.Format;

	UINT strides = sizeof(Vertex);

struct ConstantLight {



	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return 1;

	SAFE_RELEASE(m_pLightBuffer);





			case SDLK_RIGHT:

	std::string error;

		return hr;

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	{

	m_Viewport.Width = (FLOAT)rect.Width();



	LoadObj(vertexlist, indexList);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		&shapes,

		SDL_RenderPresent(ren);

		delete[] pVList;

	SDL_FreeSurface(bmp);

		{

				indexlist.push_back(index);



	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pSampler = NULL;

	if (FAILED(hr))

#include "DirectXManager.h"

	SDL_Quit();

		&error,

	pBackBuffer->Release();

#include <SDL.h>

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = vcount;

{

			index_offset += num_vertices;

	if (FAILED(hr))

		&level,

		exit(1);



	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (m_pImmediateContext)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				vertex.push_back(vertex_tmp);

		SDL_Delay(1000);

	txDesc.SampleDesc.Count = 1;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_TEXTURE2D_DESC txDesc;

	{

	m_pImmediateContext = NULL;

}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	D3D11_BUFFER_DESC cbDesc;

{

	txDesc.SampleDesc.Count = 1;

	SDL_DestroyRenderer(ren);

		SDL_Delay(1000);

	{

	ConstantLight    pntLight; //点光源

		pVList[i] = vertexlist[i];

	{

	}

	//vector<WORD> index_t;

	m_Viewport.MaxDepth = 1.0f;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	enum KeyPressSurfaces

	m_pSwapChain->Present(0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];







	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyRenderer(ren);

}

	SAFE_RELEASE(m_pMatrixBuffer);

	{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;

		KEY_PRESS_SURFACE_DOWN,

}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pMatrixBuffer);

	float    farZ = 100.0f;

			index_offset += num_vertices;

	return;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_DestroyTexture(tex);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			case SDLK_UP:



	XMFLOAT4X4 projection;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	{

};

	auto& shapes = reader.GetShapes();

			default:

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	if (FAILED(hr))

	auto& attrib = reader.GetAttrib();

		delete[] pIList;

	SDL_DestroyTexture(tex);

	m_Angle += XMConvertToRadians(1.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	delete[] pIList;

		KEY_PRESS_SURFACE_DEFAULT,

};

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		{

	SDL_Quit();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			index_offset += fv;

	}

		//User requests quit





#ifdef _DEBUG

		R"(cube.obj)");



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			//Select surfaces based on key press

	scDesc.Windowed = TRUE;

	ConstantLightBuffer clb;



void CD3DTest::Release()



	{

	//Key press surfaces constants

	std::string error;

	D3D11_SAMPLER_DESC smpDesc;

		pIList[j] = indexList[j];

	vbDesc.CPUAccessFlags = 0;

	std::string inputfile = "test.obj";

	m_pDepthStencilView = NULL;

				break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

CD3DTest::~CD3DTest()

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	float    farZ = 100.0f;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (m_pImmediateContext)

		size_t index_offset = 0;

	auto& shapes = reader.GetShapes();

		}

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

};

	scDesc.Windowed = TRUE;



		SDL_RenderPresent(ren);

}

		return hr;



	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		{



	//深度ステンシルバッファ作成





		}

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

	SDL_DestroyWindow(win);

	return hr;

#endif

	WORD   icount = indexList.size();



	//Clean up our objects and quit

	DXGI_SWAP_CHAIN_DESC scDesc;

	D3D11_SUBRESOURCE_DATA vrData;

		//User presses a key





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMFLOAT4 pos;               //座標(x,y,z)

	D3D11_TEXTURE2D_DESC txDesc;

	return 0;

		KEY_PRESS_SURFACE_LEFT,



		&scDesc,



};

	//ピクセルシェーダー生成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		SDL_RenderPresent(ren);



			case SDLK_RIGHT:



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_RIGHT,

	//Clean up our objects and quit



	//Clean up our objects and quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		SDL_RenderClear(ren);

	m_pRenderTargetView = NULL;

	enum KeyPressSurfaces



		}



	scDesc.BufferCount = 1;

	m_pPixelShader = NULL;



}

	WORD* pIList = new WORD[icount];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

};

	if (FAILED(hr))



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_RIGHT,

	scDesc.SampleDesc.Quality = 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return 1;

		return hr;

/*

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//頂点バッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	txDesc.CPUAccessFlags = 0;





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			{

	SAFE_RELEASE(m_pInputLayout);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pLightBuffer);

 * Lesson 1: Hello World!

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				indexlist.push_back(index);

}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	return;

	}

		pIList[j] = indexList[j];





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			case SDLK_LEFT:

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//テクスチャ読み込み

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//vector<Vertex> vertex_t;

			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

int SEGMENT = 36;

		KEY_PRESS_SURFACE_DEFAULT,

				break;

};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		exit(1);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



		return hr;



};

	m_VertexCount = 0;

			}

	if (SDL_Init(SDL_INIT_VIDEO != 0))





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	txDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pSampler);

	SDL_Quit();



		pLevels,

struct ConstantLightBuffer {

	scDesc.OutputWindow = hwnd;





	m_pDepthStencilTexture = NULL;

		return hr;



	HRESULT              hr;

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pRenderTargetView = NULL;

	irData.pSysMem = &pIList[0];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		return hr;

	/*

		{

	return 0;

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//ピクセルシェーダー生成



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			break;

	m_pTexture = NULL;

		&shapes,





	//頂点バッファ作成

	return;

	txDesc.ArraySize = 1;

#include <SDL.h>

				// access to vertex

		return hr;

	{



	vbDesc.MiscFlags = 0;

		&scDesc,

	delete[] pIList;

{

		&error,

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pVertexBuffer);

		&level,

	SDL_Quit();

		//User requests quit

	UINT strides = sizeof(Vertex);

		// Loop over faces(polygon)



{



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDevice = NULL;

		return hr;

	txDesc.ArraySize = 1;

				tinyobj::real_t ty =

	{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	cbDesc.CPUAccessFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			default:

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ID3D11Texture2D* pBackBuffer;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

void CD3DTest::Release()



	irData.SysMemSlicePitch = 0;

	dsDesc.Format = txDesc.Format;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Quit();

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

	//インデックスバッファ作成

	m_pDepthStencilTexture = NULL;

{

		pVList[i] = vertexlist[i];



	if (FAILED(hr))

		&attrib,

		{



		//User requests quit





				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

		return hr;

{



{

struct ConstantLight {



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)



#include "DirectXManager.h"



};



		KEY_PRESS_SURFACE_TOTAL



			case SDLK_UP:



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4X4 projection;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	irData.pSysMem = &pIList[0];



				// access to vertex

				vertex.push_back(vertex_tmp);





	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_LEFT,

	{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		{

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pLightBuffer);

	LoadObj(vertexlist, indexList);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.pSysMem = &pIList[0];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pDevice = NULL;

	{



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



#define TINYOBJLOADER_IMPLEMENTATION

		return hr;

	irData.SysMemPitch = 0;

		{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	for (const auto& shape : shapes)

	m_Viewport.MaxDepth = 1.0f;

	HRESULT              hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferDesc.Width = rect.Width();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

	vector<WORD> indexList;

	for (int i = 0; i < vcount; i++)





	m_IndexCount = icount;

	D3D11_TEXTURE2D_DESC txDesc;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = vcount;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.CPUAccessFlags = 0;

	//Clean up our objects and quit

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4X4 world;

	if (!error.empty())

	/*

	Vertex* pVList = new Vertex[vcount];



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	if (FAILED(hr))

	Release();

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	UINT offsets = 0;

	Vertex* pVList = new Vertex[vcount];

			}

#include <iostream>

		if (e.type == SDL_QUIT)

}

	UINT flags = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

CD3DTest::~CD3DTest()

struct ConstantMatrixBuffer {

int main(int, char**)

CD3DTest::CD3DTest()

		return hr;

	txDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.Windowed = TRUE;

			for (size_t v = 0; v < fv; v++)



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	dsDesc.Format = txDesc.Format;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		KEY_PRESS_SURFACE_DOWN,

	{



	txDesc.MiscFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	std::vector<tinyobj::material_t> materials;

	//テクスチャ読み込み

}




	Vertex* pVList = new Vertex[vcount];

#include <SDL.h>

		&m_pDevice,

	{

		if (e.type == SDL_QUIT)

	m_IndexCount = 0;

		pLevels,



	txDesc.ArraySize = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (!reader.ParseFromFile(inputfile, reader_config))



				break;



	std::string imagePath = "hello.bmp";

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

void CD3DTest::Release()

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pSampler = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

			//Select surfaces based on key press



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_VertexCount = vcount;

	SDL_Event e;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return 1;

		D3D_DRIVER_TYPE_HARDWARE,

	//vector<Vertex> vertex_t;



#include <iostream>

	ConstantMaterial material; //物体の質感



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::string inputfile = "test.obj";



	ibDesc.ByteWidth = sizeof(WORD) * icount;

#endif

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

		//User requests quit

	delete[] pVList;

		{

	m_Viewport.TopLeftX = 0;



				tinyobj::real_t ty =

	XMFLOAT4 pos;               //座標(x,y,z)

				WORD index = idx.vertex_index;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.BufferDesc.Height = rect.Height();

	}

		KEY_PRESS_SURFACE_UP,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





		flags,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//テクスチャ読み込み

	{

	cbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

	//vector<WORD> index_t;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	SAFE_RELEASE(m_pDepthStencilTexture);



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{



	SAFE_RELEASE(m_pDevice);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_Delay(1000);

{

		//User presses a key

	m_Viewport.TopLeftX = 0;

	vbDesc.CPUAccessFlags = 0;

			index_offset += fv;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_Viewport.Height = (FLOAT)rect.Height();

		if (!reader.Error().empty())

struct ConstantMatrixBuffer {

		{

	SAFE_RELEASE(m_pSwapChain);

	}

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderClear(ren);

	//Clean up our objects and quit

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//Clean up our objects and quit





		NULL,

	irData.SysMemPitch = 0;

				vertex.push_back(vertex_tmp);



#include <SDL.h>

}

		{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

	XMFLOAT4X4 view;

		//User requests quit

		}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pRenderTargetView);

		return hr;



	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	D3D11_SUBRESOURCE_DATA irData;

	irData.pSysMem = &pIList[0];

	WORD   icount = indexList.size();



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	LoadObj(vertexlist, indexList);

			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_VertexCount = vcount;



	m_pVertexBuffer = NULL;

	m_pSwapChain = NULL;

	//テクスチャ読み込み



void CD3DTest::Render()

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#include <SDL.h>

	tinyobj::attrib_t attrib;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

	while (SDL_PollEvent(&e) != 0)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//Key press surfaces constants

		pLevels,

		KEY_PRESS_SURFACE_DOWN,

	m_VertexCount = vcount;



	scDesc.BufferDesc.Height = rect.Height();

			switch (e.key.keysym.sym)

	for (const auto& shape : shapes)

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	for (int i = 0; i < 3; i++)



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string imagePath = "hello.bmp";

	vbDesc.CPUAccessFlags = 0;



	tinyobj::attrib_t attrib;



		KEY_PRESS_SURFACE_DEFAULT,





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include "DirectXManager.h"



{

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pSampler);

			for (size_t v = 0; v < fv; v++)



	ConstantLightBuffer clb;

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ZeroMemory(&txDesc, sizeof(txDesc));

		delete[] pVList;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pPixelShader);



		return hr;

	txDesc.CPUAccessFlags = 0;

	HRESULT              hr;

	return;

		R"(cube.obj)");

		NULL,

			{

void CD3DTest::Release()

{

		size_t index_offset = 0;

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

#include "DirectXManager.h"

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	XMFLOAT4         eyePos;   //視点座標



	float    farZ = 100.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				break;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{

CD3DTest::~CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))

				// access to vertex

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

	pBackBuffer->Release();





		KEY_PRESS_SURFACE_TOTAL





				// access to vertex

		delete[] pIList;

	ConstantLightBuffer clb;





	if (FAILED(hr))



	float    fov = XMConvertToRadians(20.0f);

CD3DTest::~CD3DTest()

	tinyobj::ObjReaderConfig reader_config;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	auto& shapes = reader.GetShapes();

				vertex.push_back(vertex_tmp);

	D3D11_SUBRESOURCE_DATA vrData;

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 pos;               //座標(x,y,z)

	}



	D3D11_SUBRESOURCE_DATA irData;

	m_pSwapChain->Present(0, 0);

};

			for (size_t v = 0; v < num_vertices; v++)



	if (FAILED(hr))

	m_pPixelShader = NULL;

	auto& attrib = reader.GetAttrib();



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (!reader.ParseFromFile(inputfile, reader_config))

	{



	//インデックスバッファ作成

			}

		delete[] pIList;

				break;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		size_t index_offset = 0;  // インデントのオフセット

				break;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	bool ret = tinyobj::LoadObj(

	while (SDL_PollEvent(&e) != 0)

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		KEY_PRESS_SURFACE_TOTAL



	m_VertexCount = 0;

	m_pLightBuffer = NULL;

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	SDL_DestroyWindow(win);



	if (FAILED(hr))

}
	UINT flags = 0;

	{

	UINT flags = 0;

	m_pTexture = NULL;

		//User presses a key





	vrData.SysMemSlicePitch = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		pLevels,





#include <iostream>

{

	}



		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

int main(int, char**)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



			break;

{

	if (FAILED(hr))

	D3D11_SAMPLER_DESC smpDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

	XMStoreFloat4(&clb.ambient, lightAmbient);



	}

 * Lesson 1: Hello World!



	vrData.SysMemPitch = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

		SDL_RenderPresent(ren);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//vector<Vertex> vertex_t;



	SAFE_RELEASE(m_pSampler);



			//Select surfaces based on key press

		KEY_PRESS_SURFACE_UP,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

#endif

	enum KeyPressSurfaces

}



		pLevels,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.CPUAccessFlags = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	tinyobj::attrib_t attrib;

				tinyobj::real_t ty =

		{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		flags,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pDepthStencilView);

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.BufferDesc.Width = rect.Width();

		D3D11_SDK_VERSION,

		SDL_Delay(1000);

		return hr;

CD3DTest::~CD3DTest()

			}

		flags,

	/*

		R"(cube.obj)");

	//ピクセルシェーダー生成



	ibDesc.Usage = D3D11_USAGE_DEFAULT;





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//頂点バッファ作成

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (int i = 0; i < 3; i++)

	auto& shapes = reader.GetShapes();



	}



			case SDLK_RIGHT:

	D3D11_BUFFER_DESC vbDesc;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.SysMemSlicePitch = 0;

{

	SDL_Event e;



	Release();



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





};

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{

		KEY_PRESS_SURFACE_DOWN,

	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantMaterial {

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_Event e;

	XMFLOAT4X4 world;



	SAFE_RELEASE(m_pVertexBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	pBackBuffer->Release();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			break;

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	WORD   icount = indexList.size();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.Warning().empty())

	D3D11_SAMPLER_DESC smpDesc;

	//インデックスバッファ作成

	{

		return hr;



	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

	//インデックスバッファ作成

	m_pDevice = NULL;

		return hr;

	}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	tinyobj::ObjReaderConfig reader_config;

void CD3DTest::Release()

		pIList[j] = indexList[j];



	vector<WORD> indexList;

	Release();

		SDL_Delay(1000);

 * Lesson 1: Hello World!

		{

	std::vector<tinyobj::material_t> materials;

			default:

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			case SDLK_UP:



				// access to vertex





	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//テクスチャ読み込み

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

/*

	SDL_DestroyTexture(tex);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//Key press surfaces constants

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		{



		delete[] pIList;

	{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (m_pImmediateContext)

			case SDLK_UP:

		}

	SAFE_RELEASE(m_pSampler);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.MiscFlags = 0;



	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	cbDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);

	scDesc.BufferDesc.Width = rect.Width();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Viewport.MaxDepth = 1.0f;

	CRect                rect;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.MiscFlags = 0;

	XMFLOAT4         eyePos;   //視点座標

	}







	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_RenderClear(ren);

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		}

	{

		return hr;

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			for (size_t v = 0; v < fv; v++)

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		return hr;

	{

				break;

#endif

	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.SampleDesc.Count = 1;

			}







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	irData.pSysMem = &pIList[0];

#include <iostream>



	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

CD3DTest::~CD3DTest()

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		R"(cube.obj)");

		NULL,

#include <SDL.h>

	D3D11_BUFFER_DESC cbDesc;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pDevice);

		{



	D3D11_SAMPLER_DESC smpDesc;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pDevice = NULL;

	for (int i = 0; i < 3; i++)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ConstantMatrixBuffer cmb;

			case SDLK_RIGHT:



	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))



	if (FAILED(hr))



	ID3D11Texture2D* pBackBuffer;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D11_SUBRESOURCE_DATA vrData;

/*

	//ビューポート設定

	std::string imagePath = "hello.bmp";

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	dsDesc.Texture2D.MipSlice = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				// access to vertex



	//First we need to start up SDL, and make sure it went ok

		&scDesc,

	ConstantMatrixBuffer cmb;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//深度ステンシルバッファ作成

	{

{

		cout << "SDL_INIT_ERROR" << endl;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	delete[] pVList;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	auto& attrib = reader.GetAttrib();

	//インデックスバッファ作成

	irData.SysMemPitch = 0;

	delete[] pVList;

	{

	for (int i = 0; i < vcount; i++)

			// Loop over vertices in the face.

	SDL_DestroyRenderer(ren);



	m_pSwapChain->Present(0, 0);









		if (e.type == SDL_QUIT)

	if (FAILED(hr))

	}

				// access to vertex

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.OutputWindow = hwnd;

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		delete[] pIList;

		flags,



	SDL_DestroyTexture(tex);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantLight {

{



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

			{

	D3D_FEATURE_LEVEL level;

	delete[] pVList;

		}

	cbDesc.MiscFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

			break;

				break;

	SDL_Quit();



	pBackBuffer->Release();

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ConstantLightBuffer clb;





	SDL_FreeSurface(bmp);

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

void CD3DTest::Render()

		D3D_DRIVER_TYPE_HARDWARE,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

}

struct ConstantMatrixBuffer {

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	while (SDL_PollEvent(&e) != 0)

void CD3DTest::Release()



		return hr;



	float    farZ = 100.0f;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		R"(cube.obj)");

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

}

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_FreeSurface(bmp);

		pIList[j] = indexList[j];

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//頂点シェーダー生成

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC ibDesc;



		// Loop over faces(polygon)



	m_pTextureView = NULL;

	m_pDepthStencilView = NULL;

	m_Viewport.TopLeftY = 0;



	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		&scDesc,



	SAFE_RELEASE(m_pPixelShader);



HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	Release();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	}

	DXGI_SWAP_CHAIN_DESC scDesc;

		&m_pDevice,



	SAFE_RELEASE(m_pPixelShader);

			case SDLK_DOWN:

		D3D_DRIVER_TYPE_HARDWARE,

			case SDLK_UP:

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			{

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

	m_VertexCount = 0;

		D3D11_SDK_VERSION,

		if (!reader.Error().empty())

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	{

int main(int, char**)

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				break;

		flags,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	{

	SDL_DestroyTexture(tex);

	std::string imagePath = "hello.bmp";

	Release();



			case SDLK_LEFT:

	D3D11_BUFFER_DESC cbDesc;



				vertex.push_back(vertex_tmp);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pDevice = NULL;

	{

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#include <iostream>

	ibDesc.ByteWidth = sizeof(WORD) * icount;





	ConstantLight    pntLight; //点光源

	SDL_DestroyTexture(tex);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.MiscFlags = 0;



	//vector<WORD> index_t;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		}



	if (FAILED(hr))

	vrData.SysMemSlicePitch = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    farZ = 100.0f;

		return hr;

		//User requests quit

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

CD3DTest::~CD3DTest()

	//Vertex* pVList = new Vertex[vcount];

		cout << "SDL_INIT_ERROR" << endl;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	vbDesc.StructureByteStride = 0;

void CD3DTest::Render()

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	tinyobj::attrib_t attrib;





	SDL_DestroyTexture(tex);

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	std::string error;

			int num_vertices = shape.mesh.num_face_vertices[f];

		}

	float    farZ = 100.0f;

	txDesc.Height = rect.Height();

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pVertexShader = NULL;

				// access to vertex

	/*

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		{

	m_pDevice = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pPixelShader = NULL;

}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{



		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	auto& attrib = reader.GetAttrib();



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	SAFE_RELEASE(m_pMatrixBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyWindow(win);

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.StructureByteStride = 0;

	std::string inputfile = "test.obj";

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_FreeSurface(suf);

	}

	m_pInputLayout = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		size_t index_offset = 0;

#include <iostream>

{

		//User presses a key



	XMFLOAT4 specular;          //反射(r,g,b)



	bool ret = tinyobj::LoadObj(

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

	SAFE_RELEASE(m_pDepthStencilView);



		return hr;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//頂点シェーダー生成

#include <SDL.h>

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			case SDLK_LEFT:

	//Vertex* pVList = new Vertex[vcount];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4(&clb.eyePos, eye);



	SAFE_RELEASE(m_pRenderTargetView);

			{

	if (FAILED(hr))

{

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SAFE_RELEASE(m_pTexture);

	ID3D11Texture2D* pBackBuffer;

	bool ret = tinyobj::LoadObj(



	ID3D11Texture2D* pBackBuffer;

	D3D11_BUFFER_DESC cbDesc;



	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pIndexBuffer);

		exit(1);

	while (SDL_PollEvent(&e) != 0)

	for (int j = 0; j < icount; j++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}*/



	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	Release();

		return hr;

	scDesc.OutputWindow = hwnd;

		D3D11_SDK_VERSION,

	m_pTextureView = NULL;

	SDL_FreeSurface(bmp);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

CD3DTest::~CD3DTest()

				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Width = rect.Width();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



HRESULT CD3DTest::Create(HWND hwnd)

		}

	m_Viewport.Width = (FLOAT)rect.Width();

	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderPresent(ren);

		&attrib,

	m_Viewport.MaxDepth = 1.0f;





				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{

	m_Viewport.MinDepth = 0.0f;

	SDL_DestroyRenderer(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

{





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			{



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

int main(int, char**)

	{

	dsDesc.Texture2D.MipSlice = 0;

				break;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_RIGHT,



	}

			{

	std::vector<tinyobj::shape_t> shapes;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			// Loop over vertices in the face.

				break;

	//インデックスバッファ作成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

struct ConstantLightBuffer {



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

struct ConstantMatrixBuffer {

	}

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	SDL_Quit();

	}

	D3D11_SAMPLER_DESC smpDesc;

		&attrib,

	SAFE_RELEASE(m_pSampler);

	ConstantMatrixBuffer cmb;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMFLOAT4X4 world;

	irData.SysMemPitch = 0;

	// Loop over shapes

		return hr;

	std::string imagePath = "hello.bmp";

		&m_pSwapChain,

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	for (const auto& shape : shapes)

	delete[] pVList;



		return hr;

	tinyobj::ObjReaderConfig reader_config;

		{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	}



			switch (e.key.keysym.sym)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	::ZeroMemory(&scDesc, sizeof(scDesc));



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.BufferDesc.Height = rect.Height();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();

	vrData.pSysMem = &pVList[0];



		SDL_RenderCopy(ren, tex, NULL, NULL);

		&scDesc,





		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pVertexShader);

	txDesc.ArraySize = 1;

	//Key press surfaces constants

	{

	float    fov = XMConvertToRadians(20.0f);

			switch (e.key.keysym.sym)

	scDesc.SampleDesc.Quality = 0;

	}

				indexlist.push_back(index);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (!error.empty())





				// access to vertex

				// access to vertex

	m_pDevice = NULL;

	txDesc.ArraySize = 1;

	m_pImmediateContext = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_DestroyTexture(tex);



		return hr;

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;

	ibDesc.MiscFlags = 0;

		&shapes,

			break;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//Key press surfaces constants

				indexlist.push_back(idx.vertex_index);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

{

	{

	ibDesc.CPUAccessFlags = 0;



};

	XMFLOAT4 specular;          //反射(r,g,b)

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pVertexShader);

	tinyobj::ObjReader reader;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ZeroMemory(&txDesc, sizeof(txDesc));

	ID3D11Texture2D* pBackBuffer;

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pVertexShader);





	{

		if (e.type == SDL_QUIT)



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Height = rect.Height();

		{



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pVertexShader = NULL;

	txDesc.SampleDesc.Count = 1;

	std::string inputfile = "test.obj";

		m_pImmediateContext->ClearState();

	{

	SDL_FreeSurface(suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			case SDLK_RIGHT:

				vertex.push_back(vertex_tmp);

	m_Angle += XMConvertToRadians(1.0f);

				break;

	WORD   icount = indexList.size();

			{



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		D3D_DRIVER_TYPE_HARDWARE,



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		//User requests quit

{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	LoadObj(vertexlist, indexList);

	{

		&error,

	SDL_Quit();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pLightBuffer);

		NULL,



		return hr;

	SAFE_RELEASE(m_pPixelShader);

HRESULT CD3DTest::Create(HWND hwnd)

			case SDLK_DOWN:

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	reader_config.mtl_search_path = "./"; // Path to material files

			}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	tinyobj::attrib_t attrib;



			}

			//Select surfaces based on key press

	bool ret = tinyobj::LoadObj(

		{

	if (FAILED(hr))



	SDL_DestroyTexture(tex);

	XMFLOAT4         ambient;  //環境光(r,g,b)

{

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	auto& shapes = reader.GetShapes();

	txDesc.CPUAccessFlags = 0;



		&materials,

			{

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	std::string inputfile = "test.obj";

}

		&level,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//First we need to start up SDL, and make sure it went ok

	//ビューポート設定

			}

	reader_config.mtl_search_path = "./"; // Path to material files



				break;

}

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		&level,

	int     vcount = vertexlist.size();

		}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}



				WORD index = idx.vertex_index;



	for (int i = 0; i < vcount; i++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

 * Lesson 1: Hello World!

HRESULT CD3DTest::Create(HWND hwnd)



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		R"(cube.obj)");

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	tinyobj::attrib_t attrib;

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

		if (!reader.Error().empty())

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;



	for (const auto& shape : shapes)

	return;

#include <iostream>

	Release();

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	txDesc.SampleDesc.Quality = 0;

{

	tinyobj::attrib_t attrib;

	m_pSwapChain->Present(0, 0);

	vector<Vertex> vertexlist;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	{

		//User requests quit

		KEY_PRESS_SURFACE_UP,

	for (int i = 0; i < vcount; i++)

		pLevels,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		KEY_PRESS_SURFACE_DEFAULT,

		D3D11_SDK_VERSION,



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pSampler = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				break;

		return hr;

		}

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))



	txDesc.SampleDesc.Quality = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		//User requests quit

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			// Loop over vertices in the face.

	tinyobj::attrib_t attrib;

	DXGI_SWAP_CHAIN_DESC scDesc;

		SDL_RenderPresent(ren);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	vector<WORD> indexList;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

 * Lesson 1: Hello World!

	if (FAILED(hr))

	if (FAILED(hr))

struct ConstantMatrixBuffer {

	vrData.SysMemPitch = 0;



		}

	m_pSwapChain->Present(0, 0);

using std::cout; using std::endl;

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pSwapChain);

#include <iostream>

	CRect                rect;



	auto& shapes = reader.GetShapes();

		&level,



	D3D11_BUFFER_DESC cbDesc;

void CD3DTest::Render()

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}



	XMFLOAT4 specular;          //反射(r,g,b)

	{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	{



	SAFE_RELEASE(m_pLightBuffer);

	{



	WORD* pIList = new WORD[icount];

	{



	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//Key press surfaces constants



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.CPUAccessFlags = 0;

	}

struct ConstantMaterial {

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		pIList[j] = indexList[j];

{

struct ConstantMatrixBuffer {

/*

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				break;

				// access to vertex

	vbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//ビューポート設定





	auto& shapes = reader.GetShapes();

struct ConstantMatrixBuffer {

	D3D11_BUFFER_DESC cbDesc;

				WORD index = idx.vertex_index;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		pVList[i] = vertexlist[i];

	/*

	m_pVertexShader = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	SAFE_RELEASE(m_pInputLayout);

	enum KeyPressSurfaces

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//Create Index

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

		D3D_DRIVER_TYPE_HARDWARE,



		&m_pSwapChain,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	ConstantMatrixBuffer cmb;

	//定数バッファ作成

	};

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	ConstantLight    pntLight; //点光源



	//vector<Vertex> vertex_t;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

#include <SDL.h>



		if (!ret)



		return hr;

			}





	WORD* pIList = new WORD[icount];

		{





		delete[] pVList;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	bool ret = tinyobj::LoadObj(



	{





	ConstantLightBuffer clb;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

};

	txDesc.CPUAccessFlags = 0;

	{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	std::vector<tinyobj::shape_t> shapes;



			{

		delete[] pIList;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		1,

	}

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				tinyobj::real_t ty =

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	cbDesc.StructureByteStride = 0;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Height = rect.Height();

	scDesc.BufferDesc.Width = rect.Width();

		m_pImmediateContext->ClearState();



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

};

	vbDesc.MiscFlags = 0;

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

		SDL_Delay(1000);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	for (const auto& shape : shapes)

			{

	SDL_FreeSurface(bmp);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	LoadObj(vertexlist, indexList);

	std::string error;

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		m_pImmediateContext->ClearState();

				indexlist.push_back(idx.vertex_index);

int main(int, char**)

	//定数バッファ作成







	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		exit(1);





		size_t index_offset = 0;



	{

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

struct ConstantMaterial {

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.MipLevels = 1;

int main(int, char**)

	reader_config.mtl_search_path = "./"; // Path to material files

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pInputLayout = NULL;



	m_Viewport.MaxDepth = 1.0f;

			for (size_t v = 0; v < num_vertices; v++)

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_TEXTURE2D_DESC txDesc;

	m_pIndexBuffer = NULL;

	//深度ステンシルバッファ作成

	SDL_FreeSurface(bmp);



	m_pLightBuffer = NULL;

		{

	cbDesc.MiscFlags = 0;

		&level,

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_Angle += XMConvertToRadians(1.0f);

			{



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		flags,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMatrixBuffer {





	m_pDepthStencilTexture = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	SAFE_RELEASE(m_pMatrixBuffer);

	std::string imagePath = "hello.bmp";

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC cbDesc;

				// access to vertex

	XMFLOAT4 specular;          //反射(r,g,b)





			for (size_t v = 0; v < num_vertices; v++)

	for (int i = 0; i < 3; i++)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vbDesc.CPUAccessFlags = 0;





	m_pSwapChain = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		{

		{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	{





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pDevice = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		&level,

	//テクスチャ読み込み

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ConstantLightBuffer clb;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

void CD3DTest::Release()

	txDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_TOTAL

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&level,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pDepthStencilView = NULL;

	{

		flags,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

	return;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	DXGI_SWAP_CHAIN_DESC scDesc;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			index_offset += num_vertices;





	XMFLOAT4 attenuate;         //減衰(a,b,c)

			exit(1);

		&level,



	vrData.pSysMem = &pVList[0];

	cbDesc.StructureByteStride = 0;

	m_pSwapChain->Present(0, 0);

	std::string error;

		if (e.type == SDL_QUIT)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_VertexCount = 0;

	m_pPixelShader = NULL;

	std::vector<tinyobj::shape_t> shapes;

#include <SDL.h>

	m_VertexCount = vcount;

	D3D11_BUFFER_DESC cbDesc;



		&materials,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pImmediateContext);

void CD3DTest::Release()

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			{

				break;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	txDesc.Height = rect.Height();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;



		return hr;



		&shapes,

 */



				tinyobj::real_t tx =

	D3D_FEATURE_LEVEL level;

}

			// Loop over vertices in the face.

	std::vector<tinyobj::shape_t> shapes;



				indexlist.push_back(idx.vertex_index);

		D3D11_SDK_VERSION,

	vector<WORD> indexList;

	txDesc.SampleDesc.Quality = 0;

	std::string inputfile = "test.obj";

	{

	cbDesc.StructureByteStride = 0;

};

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	return;

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;



	};

	{

int main(int, char**)

	m_Viewport.MaxDepth = 1.0f;

		return hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pImmediateContext);



	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

		//User requests quit



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	irData.pSysMem = &pIList[0];

	vrData.SysMemPitch = 0;



	if (FAILED(hr))

		return hr;





		&shapes,

	std::vector<tinyobj::shape_t> shapes;

	CRect                rect;

	std::vector<tinyobj::material_t> materials;

{

{

	}



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	enum KeyPressSurfaces

	return hr;

struct ConstantMatrixBuffer {

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//インデックスバッファ作成

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



			{

	{



	XMFLOAT4 attenuate;         //減衰(a,b,c)





	scDesc.OutputWindow = hwnd;

}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	std::string inputfile = "test.obj";





	m_pDepthStencilTexture = NULL;

	SDL_DestroyWindow(win);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return 1;

		return hr;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

void CD3DTest::Release()

	m_Viewport.MinDepth = 0.0f;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	txDesc.Height = rect.Height();



	float    nearZ = 0.1f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ibDesc.MiscFlags = 0;



	//頂点レイアウト作成

			case SDLK_UP:

	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::real_t tx =

		R"(cube.obj)");



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	ibDesc.ByteWidth = sizeof(WORD) * icount;



	}*/

}

	m_pDevice = NULL;

	ibDesc.MiscFlags = 0;



{

				vertex.push_back(vertex_tmp);

	}

	//ピクセルシェーダー生成

	m_pDepthStencilView = NULL;

	}*/

	SDL_Quit();

		SDL_RenderCopy(ren, tex, NULL, NULL);



	//インデックスバッファ作成



	bool ret = tinyobj::LoadObj(

			break;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		SDL_RenderCopy(ren, tex, NULL, NULL);

		pIList[j] = indexList[j];

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

};

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		return hr;



	};

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC cbDesc;



			for (size_t v = 0; v < fv; v++)





	XMFLOAT4         eyePos;   //視点座標

	scDesc.BufferCount = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	SDL_FreeSurface(bmp);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pDevice);

		return hr;

		return 1;

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pDepthStencilView);

	}



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.Width = (FLOAT)rect.Width();



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		// Loop over faces(polygon)

struct ConstantMaterial {



		return hr;

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

	}

	//Create Index



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			break;

				break;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	UINT flags = 0;

	m_pDepthStencilTexture = NULL;

	if (!error.empty())

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pVertexBuffer);

		&level,



	m_pDepthStencilView = NULL;



		}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.Width = rect.Width();





int main(int, char**)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pSampler);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	tinyobj::ObjReader reader;

				break;

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	tinyobj::ObjReaderConfig reader_config;

	if (FAILED(hr))

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



}

struct ConstantLightBuffer {

	ibDesc.MiscFlags = 0;

	Release();

		return hr;





	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

	txDesc.MiscFlags = 0;

}

		SDL_RenderPresent(ren);

#include <iostream>



	delete[] pVList;

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			case SDLK_DOWN:





	return 0;

void CD3DTest::Render()

#include <iostream>

				// access to vertex

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);



		&m_pSwapChain,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





		&m_pSwapChain,

	auto& shapes = reader.GetShapes();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pVertexBuffer = NULL;

		return hr;

	return 0;

	SAFE_RELEASE(m_pVertexBuffer);

	dsDesc.Texture2D.MipSlice = 0;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{



struct ConstantMaterial {

	txDesc.MipLevels = 1;







{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ID3D11Texture2D* pBackBuffer;

			}

			//Select surfaces based on key press

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	m_Viewport.TopLeftY = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

	D3D11_SAMPLER_DESC smpDesc;

}

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

}

	{

		KEY_PRESS_SURFACE_RIGHT,

				indexlist.push_back(index);

}

	m_Viewport.TopLeftX = 0;

	txDesc.ArraySize = 1;

	WORD* pIList = new WORD[icount];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

			//Select surfaces based on key press

	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_RenderClear(ren);

	m_pSampler = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Key press surfaces constants

	irData.SysMemPitch = 0;

		flags,

	D3D11_TEXTURE2D_DESC txDesc;

	float    farZ = 100.0f;

	float    nearZ = 0.1f;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	m_pRenderTargetView = NULL;

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	return 0;

	pBackBuffer->Release();

	if (m_pImmediateContext)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				break;

	SAFE_RELEASE(m_pIndexBuffer);



	m_Angle += XMConvertToRadians(1.0f);

	scDesc.OutputWindow = hwnd;

	XMFLOAT4X4 view;

	//Create Index

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	std::string inputfile = "test.obj";

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	return 0;

		&m_pDevice,

	}

	//テクスチャ読み込み

	{

		return hr;



				// access to vertex

			}

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4         eyePos;   //視点座標

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ibDesc.CPUAccessFlags = 0;



			}

	float    farZ = 100.0f;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			int num_vertices = shape.mesh.num_face_vertices[f];



	irData.SysMemSlicePitch = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

	{

	CRect                rect;

				// access to vertex



		D3D11_SDK_VERSION,

	if (!reader.ParseFromFile(inputfile, reader_config))

	tinyobj::attrib_t attrib;

	//Key press surfaces constants

				// access to vertex



	XMFLOAT4         ambient;  //環境光(r,g,b)

		if (!reader.Error().empty())

			{

	m_Viewport.TopLeftX = 0;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			}

		NULL,

	SAFE_RELEASE(m_pImmediateContext);

	m_pIndexBuffer = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			//Select surfaces based on key press

	int     vcount = vertexlist.size();



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	bool ret = tinyobj::LoadObj(

	txDesc.Width = rect.Width();



	vbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC vbDesc;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemPitch = 0;

		return hr;

	{

	m_pInputLayout = NULL;

	SDL_FreeSurface(suf);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;





			index_offset += fv;

CD3DTest::CD3DTest()



	{





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//First we need to start up SDL, and make sure it went ok

	SDL_FreeSurface(bmp);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;

			}

	SDL_FreeSurface(bmp);

	tinyobj::ObjReaderConfig reader_config;

	txDesc.SampleDesc.Count = 1;

	{





	ibDesc.CPUAccessFlags = 0;

	m_pSampler = NULL;

	txDesc.SampleDesc.Count = 1;

	m_pDepthStencilTexture = NULL;

HRESULT CD3DTest::Create(HWND hwnd)



CD3DTest::~CD3DTest()

				break;

	{

			{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pTexture);

		R"(cube.obj)");

}

	txDesc.CPUAccessFlags = 0;

		&scDesc,

		{

	//ピクセルシェーダー生成

}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	if (m_pImmediateContext)



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	float    nearZ = 0.1f;

			case SDLK_UP:



	if (FAILED(hr))

}



	XMFLOAT4X4 view;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	return hr;

			for (size_t v = 0; v < fv; v++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//定数バッファ作成

			for (size_t v = 0; v < num_vertices; v++)

	vbDesc.StructureByteStride = 0;

void CD3DTest::Render()

	ConstantMatrixBuffer cmb;

		delete[] pVList;

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_RIGHT,

	};

	if (FAILED(hr))



	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

}



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//頂点バッファ作成

	SAFE_RELEASE(m_pInputLayout);

	tinyobj::ObjReaderConfig reader_config;

		return 1;

		D3D11_SDK_VERSION,

#endif



			// Loop over vertices in the face.



		delete[] pIList;

	txDesc.ArraySize = 1;

		flags,

	//頂点バッファ作成

		KEY_PRESS_SURFACE_DOWN,



		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4         eyePos;   //視点座標

		NULL,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		}

		size_t index_offset = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pTexture = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = vcount;

	m_pTexture = NULL;

	ConstantMaterial material; //物体の質感

	std::string imagePath = "hello.bmp";

	txDesc.ArraySize = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	delete[] pIList;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	{

			{

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	scDesc.OutputWindow = hwnd;

struct ConstantMatrixBuffer {

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//頂点シェーダー生成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	D3D11_SAMPLER_DESC smpDesc;

	SDL_DestroyRenderer(ren);



	D3D11_SUBRESOURCE_DATA irData;

	irData.SysMemPitch = 0;

		&m_pSwapChain,

	//ビューポート設定



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SAFE_RELEASE(m_pIndexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//頂点レイアウト作成

	irData.SysMemSlicePitch = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_DestroyWindow(win);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	Release();

		&attrib,



	dsDesc.Format = txDesc.Format;

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	txDesc.Height = rect.Height();

	}

			//Select surfaces based on key press

		if (!ret)



	::GetClientRect(hwnd, &rect);

		1,





	UINT offsets = 0;

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	reader_config.mtl_search_path = "./"; // Path to material files

		D3D11_SDK_VERSION,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			case SDLK_UP:

	return hr;

	for (size_t s = 0; s < shapes.size(); s++)

	};

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	}

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		SDL_RenderClear(ren);

		}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantLightBuffer clb;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

#ifdef _DEBUG

CD3DTest::CD3DTest()

	m_pSampler = NULL;

CD3DTest::CD3DTest()

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ConstantLightBuffer clb;

	//Vertex* pVList = new Vertex[vcount];

	}

	txDesc.SampleDesc.Count = 1;





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

}

	irData.SysMemSlicePitch = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	dsDesc.Format = txDesc.Format;

	m_pTexture = NULL;

	{

int SEGMENT = 36;

int main(int, char**)

	{

	return 0;



	reader_config.mtl_search_path = "./"; // Path to material files

	}*/

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_IndexCount = icount;

	//深度ステンシルバッファ作成

			{



 * Lesson 1: Hello World!

				tinyobj::real_t tx =

	//頂点シェーダー生成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	WORD* pIList = new WORD[icount];

	XMFLOAT4         ambient;  //環境光(r,g,b)

		if (!reader.Error().empty())

	if (!reader.Warning().empty())

	txDesc.Height = rect.Height();

	std::vector<tinyobj::shape_t> shapes;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.BufferDesc.Height = rect.Height();

	vrData.pSysMem = &pVList[0];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.MiscFlags = 0;



	enum KeyPressSurfaces

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.SampleDesc.Count = 1;

		if (e.type == SDL_QUIT)



	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//頂点バッファ作成

	if (FAILED(hr))



	if (FAILED(hr))



	txDesc.SampleDesc.Count = 1;

{

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





	ibDesc.MiscFlags = 0;

	{

	std::vector<tinyobj::shape_t> shapes;

	ConstantMaterial material; //物体の質感



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t ty =

#include <SDL.h>

	{





		exit(1);

		SDL_RenderPresent(ren);

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		pVList[i] = vertexlist[i];

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pTextureView);

	//Key press surfaces constants



	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			case SDLK_LEFT:

	HRESULT              hr;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b)

	SAFE_RELEASE(m_pInputLayout);

			case SDLK_LEFT:

	Release();

	vbDesc.CPUAccessFlags = 0;

	{

	//Key press surfaces constants

		//User presses a key

	return 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_BUFFER_DESC vbDesc;

		SDL_RenderClear(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))



	m_Viewport.Height = (FLOAT)rect.Height();

			}

{

#ifdef _DEBUG

#ifdef _DEBUG



	if (FAILED(hr))





				tinyobj::real_t tx =

}

	txDesc.MiscFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				break;

		pVList[i] = vertexlist[i];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			{

		}

				indexlist.push_back(idx.vertex_index);



	return 0;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	scDesc.SampleDesc.Count = 1;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Viewport.MaxDepth = 1.0f;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLight {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	std::vector<tinyobj::shape_t> shapes;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;







};

struct ConstantMatrixBuffer {

};





{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}



{



	return hr;

	XMStoreFloat4(&clb.eyePos, eye);

#define TINYOBJLOADER_IMPLEMENTATION

		delete[] pIList;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	HRESULT              hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <SDL.h>

	//Key press surfaces constants

};



	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				vertex.push_back(vertex_tmp);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	scDesc.BufferDesc.Width = rect.Width();





		return hr;

		SDL_Delay(1000);

	m_pDevice = NULL;

	m_VertexCount = 0;

			break;

				vertex.push_back(vertex_tmp);

			index_offset += fv;

void CD3DTest::Release()

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	HRESULT              hr;

	delete[] pVList;

struct ConstantMatrixBuffer {

			int num_vertices = shape.mesh.num_face_vertices[f];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	std::string imagePath = "hello.bmp";

	{



	SDL_DestroyTexture(tex);

		delete[] pIList;





				vertex.push_back(vertex_tmp);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	m_pPixelShader = NULL;

	txDesc.SampleDesc.Quality = 0;

	}



	ID3D11Texture2D* pBackBuffer;

	for (int i = 0; i < 3; i++)

	//インデックスバッファ作成

		}

	{

	ibDesc.MiscFlags = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{

	SAFE_RELEASE(m_pDevice);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	SAFE_RELEASE(m_pVertexShader);

	m_pDepthStencilView = NULL;

#endif

	//頂点バッファ作成



		R"(cube.obj)");



				tinyobj::real_t tx =

	m_Viewport.Height = (FLOAT)rect.Height();

	//テクスチャ読み込み

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_TEXTURE2D_DESC txDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyWindow(win);

};



	//Clean up our objects and quit

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

using std::cout; using std::endl;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 specular;          //反射(r,g,b)

		&level,

	scDesc.OutputWindow = hwnd;

	std::vector<tinyobj::material_t> materials;

	m_pVertexShader = NULL;

}

		if (e.type == SDL_QUIT)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//Key press surfaces constants

	ConstantLightBuffer clb;



		delete[] pVList;

	//頂点シェーダー生成



	//ビューポート設定

	m_pPixelShader = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	//定数バッファ作成

#ifdef _DEBUG

		R"(cube.obj)");

{

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		&m_pSwapChain,

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;

	//定数バッファ作成

	SDL_DestroyWindow(win);

	ibDesc.MiscFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//ピクセルシェーダー生成

	std::string imagePath = "hello.bmp";

	tinyobj::attrib_t attrib;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

			for (size_t v = 0; v < num_vertices; v++)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	for (size_t s = 0; s < shapes.size(); s++)



	m_pSwapChain = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	m_pInputLayout = NULL;

	irData.SysMemSlicePitch = 0;

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	scDesc.SampleDesc.Count = 1;

	m_Viewport.TopLeftY = 0;

CD3DTest::~CD3DTest()

				WORD index = idx.vertex_index;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

		R"(cube.obj)");

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				vertex.push_back(vertex_tmp);

	m_pRenderTargetView = NULL;

 * Lesson 1: Hello World!

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_VertexCount = vcount;





	std::string imagePath = "hello.bmp";





	txDesc.Width = rect.Width();

	m_pVertexShader = NULL;

		D3D11_SDK_VERSION,



	m_pDevice = NULL;

	XMFLOAT4X4 projection;

};

			}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_VertexCount = vcount;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

};

		// Loop over faces(polygon)



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	irData.SysMemPitch = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	CRect                rect;

		//User presses a key

	m_pDepthStencilTexture = NULL;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

 */

	reader_config.mtl_search_path = "./"; // Path to material files



	SAFE_RELEASE(m_pImmediateContext);

	Release();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&m_pImmediateContext);



		NULL,

		SDL_Delay(1000);

	}

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	ConstantMatrixBuffer cmb;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	SAFE_RELEASE(m_pVertexShader);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float    nearZ = 0.1f;

	ConstantLight    pntLight; //点光源

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

	SAFE_RELEASE(m_pDepthStencilView);

struct ConstantMatrixBuffer {



		return hr;

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

	m_pSwapChain = NULL;

			break;



CD3DTest::~CD3DTest()

	m_pVertexShader = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)



		{

	LoadObj(vertexlist, indexList);

		size_t index_offset = 0;

	SAFE_RELEASE(m_pSampler);



			default:

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	SDL_Event e;

			}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



				break;

		SDL_RenderClear(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))

		pLevels,

	if (FAILED(hr))

		&shapes,

	scDesc.SampleDesc.Count = 1;

	}*/

{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	{

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

HRESULT CD3DTest::Create(HWND hwnd)





		flags,

				// access to vertex





}

	{

		flags,



	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.CPUAccessFlags = 0;

	tinyobj::attrib_t attrib;

};

		D3D11_SDK_VERSION,

	Vertex* pVList = new Vertex[vcount];

		SDL_RenderPresent(ren);

	XMFLOAT4 specular;          //反射(r,g,b)

	{

{



		SDL_RenderCopy(ren, tex, NULL, NULL);



{

				break;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pDevice = NULL;

	m_VertexCount = vcount;

		return hr;

struct ConstantLight {

	SAFE_RELEASE(m_pIndexBuffer);

		&error,

}

			case SDLK_LEFT:

	irData.SysMemPitch = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Event e;

	vbDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

HRESULT CD3DTest::Create(HWND hwnd)

#include <SDL.h>

	scDesc.BufferCount = 1;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_FreeSurface(suf);

#ifdef _DEBUG

	vbDesc.StructureByteStride = 0;

		}

	}



	SDL_DestroyRenderer(ren);

};

		if (!ret)

	txDesc.MiscFlags = 0;



	txDesc.Usage = D3D11_USAGE_DEFAULT;



		D3D11_SDK_VERSION,

	m_pLightBuffer = NULL;



#endif

#include <SDL.h>

		&error,

CD3DTest::~CD3DTest()

		//User requests quit

	}

	SAFE_RELEASE(m_pTextureView);

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		//User requests quit

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (m_pImmediateContext)



			case SDLK_DOWN:

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//vector<WORD> index_t;

	bool ret = tinyobj::LoadObj(

	dsDesc.Format = txDesc.Format;

	ConstantLight    pntLight; //点光源

	vbDesc.MiscFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	while (SDL_PollEvent(&e) != 0)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



			for (size_t v = 0; v < fv; v++)

		cout << "SDL_INIT_ERROR" << endl;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		pIList[j] = indexList[j];



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_DestroyRenderer(ren);

	Release();

	return 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			index_offset += num_vertices;







	XMFLOAT4 specular;          //反射(r,g,b)

	if (!error.empty())

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

			case SDLK_LEFT:

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D_FEATURE_LEVEL level;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		exit(1);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_DestroyTexture(tex);

{

	irData.SysMemPitch = 0;

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

	int     vcount = vertexlist.size();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

	float    fov = XMConvertToRadians(20.0f);

	//インデックスバッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_LEFT:

};

	vrData.SysMemSlicePitch = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));





	m_pTexture = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pInputLayout = NULL;



 */



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pVertexShader);

		size_t index_offset = 0;  // インデントのオフセット

		NULL,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	irData.SysMemPitch = 0;

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pPixelShader);

}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		}

		{

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t tx =

}


