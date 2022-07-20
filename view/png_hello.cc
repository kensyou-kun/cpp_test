		if (!reader.Error().empty())

	m_Viewport.TopLeftX = 0;





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			}

				WORD index = idx.vertex_index;

	if (FAILED(hr))



	txDesc.ArraySize = 1;

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	LoadObj(vertexlist, indexList);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

int main(int, char**)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pSwapChain->Present(0, 0);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

int SEGMENT = 36;

 * Lesson 1: Hello World!

				break;

	D3D11_BUFFER_DESC ibDesc;

	{

	CRect                rect;

		return hr;

	if (m_pImmediateContext)

	UINT flags = 0;

		SDL_Delay(1000);

	m_pInputLayout = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		//User requests quit

		&level,

	}*/

int SEGMENT = 36;

	for (const auto& shape : shapes)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	DXGI_SWAP_CHAIN_DESC scDesc;

			//Select surfaces based on key press

	SDL_DestroyRenderer(ren);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ZeroMemory(&txDesc, sizeof(txDesc));

	cbDesc.MiscFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

		return 1;

	ConstantMaterial material; //物体の質感

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		R"(cube.obj)");

				vertex.push_back(vertex_tmp);



		return hr;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	cbDesc.MiscFlags = 0;



 * Lesson 1: Hello World!



	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;



	}

	tinyobj::ObjReaderConfig reader_config;

		return hr;

	auto& materials = reader.GetMaterials();

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pTextureView);

		size_t index_offset = 0;





	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

int main(int, char**)

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		size_t index_offset = 0;

	Release();

		return hr;

				tinyobj::real_t tx =

#ifdef _DEBUG

	if (FAILED(hr))

	SDL_Event e;

		return hr;

	bool ret = tinyobj::LoadObj(



		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	irData.SysMemSlicePitch = 0;

struct ConstantMaterial {

	::GetClientRect(hwnd, &rect);

	UINT offsets = 0;



				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			exit(1);

	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

#include "DirectXManager.h"

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	WORD   icount = indexList.size();

	cbDesc.MiscFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,

		return hr;

	scDesc.BufferDesc.Height = rect.Height();

		if (e.type == SDL_QUIT)



#define TINYOBJLOADER_IMPLEMENTATION

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

}

	D3D11_BUFFER_DESC ibDesc;

int main(int, char**)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

};

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//頂点シェーダー生成



	scDesc.BufferDesc.Height = rect.Height();



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				vertex.push_back(vertex_tmp);



	{

	txDesc.ArraySize = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				// access to vertex

			{

	CRect                rect;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		{

	m_pLightBuffer = NULL;

		{



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

void CD3DTest::Release()

		pIList[j] = indexList[j];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	}

	m_pSwapChain->Present(0, 0);

		SDL_RenderPresent(ren);

	irData.pSysMem = &pIList[0];

	{

	//ビューポート設定

			{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vector<Vertex> vertexlist;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}*/

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		}

		KEY_PRESS_SURFACE_LEFT,

		else if (e.type == SDL_KEYDOWN)

			// Loop over vertices in the face.

	if (FAILED(hr))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		}



	//頂点シェーダー生成

	if (FAILED(hr))



	txDesc.SampleDesc.Count = 1;

	// Loop over shapes

	ConstantMaterial material; //物体の質感

		}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	irData.pSysMem = &pIList[0];

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

	XMFLOAT4X4 view;

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t tx =

	irData.pSysMem = &pIList[0];

	D3D11_SUBRESOURCE_DATA irData;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.MipLevels = 1;



	std::vector<tinyobj::shape_t> shapes;



	{

	if (FAILED(hr))

		pIList[j] = indexList[j];



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_FreeSurface(bmp);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SAFE_RELEASE(m_pDevice);

};







	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))

	m_VertexCount = vcount;

			{

	cbDesc.StructureByteStride = 0;

		SDL_RenderPresent(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		1,

				break;

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,

	UINT flags = 0;

	//定数バッファ作成

	txDesc.SampleDesc.Count = 1;

		delete[] pIList;

		KEY_PRESS_SURFACE_DEFAULT,

	vrData.SysMemSlicePitch = 0;



	{



		flags,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_Viewport.Height = (FLOAT)rect.Height();

	Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_IndexCount = 0;

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	LoadObj(vertexlist, indexList);





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				WORD index = idx.vertex_index;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	//Create Index

	return 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	irData.SysMemSlicePitch = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			switch (e.key.keysym.sym)

	};

			case SDLK_LEFT:



	SDL_DestroyRenderer(ren);

	};



	vector<WORD> indexList;

	D3D11_SUBRESOURCE_DATA vrData;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//テクスチャ読み込み

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	irData.pSysMem = &pIList[0];

	txDesc.MiscFlags = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_FreeSurface(bmp);







		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	std::vector<tinyobj::material_t> materials;



	ID3D11Texture2D* pBackBuffer;

			case SDLK_LEFT:

	m_VertexCount = 0;



	//vector<WORD> index_t;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::real_t tx =

			}



}
				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC ibDesc;

	auto& shapes = reader.GetShapes();

	if (!reader.ParseFromFile(inputfile, reader_config))



	//Create Index

};



	XMFLOAT4 pos;               //座標(x,y,z)



	// Loop over shapes

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			{

		SDL_Delay(1000);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	}

{

	{

			case SDLK_LEFT:

	::GetClientRect(hwnd, &rect);

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4 pos;               //座標(x,y,z)

CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.CPUAccessFlags = 0;

{

	for (int i = 0; i < vcount; i++)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

}

}

		KEY_PRESS_SURFACE_LEFT,

	return hr;

{

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pDepthStencilView);

		KEY_PRESS_SURFACE_RIGHT,

			default:

	SDL_DestroyWindow(win);



				break;

	SDL_FreeSurface(bmp);

}

	UINT strides = sizeof(Vertex);

	for (int i = 0; i < vcount; i++)

	//Clean up our objects and quit

		KEY_PRESS_SURFACE_RIGHT,

		R"(cube.obj)");

	/*

		&scDesc,

	irData.SysMemSlicePitch = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Viewport.MaxDepth = 1.0f;

		return 1;

void CD3DTest::Release()





			index_offset += fv;

	vbDesc.MiscFlags = 0;





}

	D3D11_BUFFER_DESC ibDesc;

	};

		size_t index_offset = 0;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	auto& attrib = reader.GetAttrib();







using std::cout; using std::endl;

	std::vector<tinyobj::shape_t> shapes;

	{



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return 1;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//頂点バッファ作成

	CRect                rect;

				break;

		flags,

	m_Viewport.MaxDepth = 1.0f;



		D3D_DRIVER_TYPE_HARDWARE,

	for (int i = 0; i < 3; i++)

	SDL_DestroyWindow(win);

	return 0;

	cbDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	for (size_t s = 0; s < shapes.size(); s++)

	SAFE_RELEASE(m_pMatrixBuffer);

	LoadObj(vertexlist, indexList);

	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vrData.SysMemPitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_IndexCount = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		{



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				indexlist.push_back(idx.vertex_index);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.StructureByteStride = 0;

	//Key press surfaces constants



	//ビューポート設定

		else if (e.type == SDL_KEYDOWN)



		return hr;

	m_IndexCount = 0;

struct ConstantLight {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_SUBRESOURCE_DATA vrData;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

{

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	tinyobj::ObjReader reader;

{

	//頂点シェーダー生成

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		size_t index_offset = 0;



		KEY_PRESS_SURFACE_LEFT,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

void CD3DTest::Render()

		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//vector<Vertex> vertex_t;

	}



	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);



	SDL_FreeSurface(bmp);

		size_t index_offset = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vrData.SysMemSlicePitch = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		if (!reader.Error().empty())

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	return 0;

	WORD* pIList = new WORD[icount];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		&materials,

			//Select surfaces based on key press

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	LoadObj(vertexlist, indexList);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	if (FAILED(hr))

	return 0;



		&level,

	}

			}

			}



				vertex.push_back(vertex_tmp);

}

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

			for (size_t v = 0; v < fv; v++)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		pVList[i] = vertexlist[i];



{

	tinyobj::attrib_t attrib;

	m_pDepthStencilView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





		SDL_RenderPresent(ren);

		m_pImmediateContext->ClearState();

	}*/



	}

	//Clean up our objects and quit

	m_pLightBuffer = NULL;

	//定数バッファ作成

		&scDesc,

	m_pSwapChain = NULL;

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 pos;               //座標(x,y,z)



	D3D11_SUBRESOURCE_DATA irData;

int SEGMENT = 36;



	UINT offsets = 0;

	{

		&error,









struct ConstantMatrixBuffer {

}

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

void CD3DTest::Release()

	vbDesc.CPUAccessFlags = 0;

	vbDesc.MiscFlags = 0;

		SDL_RenderClear(ren);



#endif

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::ObjReader reader;



		{



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	CRect                rect;

				break;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

}

	D3D11_BUFFER_DESC cbDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

		&attrib,

struct ConstantLight {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_IndexCount = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		R"(cube.obj)");

int main(int, char**)

	SAFE_RELEASE(m_pMatrixBuffer);

	}

	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pDepthStencilTexture = NULL;

	cbDesc.StructureByteStride = 0;

	txDesc.MipLevels = 1;

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	ConstantLight    pntLight; //点光源

	tinyobj::attrib_t attrib;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			case SDLK_UP:

	SAFE_RELEASE(m_pDepthStencilTexture);

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

			switch (e.key.keysym.sym)

	return 0;

	XMFLOAT4 specular;          //反射(r,g,b)



	D3D_FEATURE_LEVEL level;

		return hr;



	}

	SDL_DestroyWindow(win);



				indexlist.push_back(index);

	m_Viewport.Width = (FLOAT)rect.Width();

	{

		}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

CD3DTest::~CD3DTest()



	pBackBuffer->Release();

	}



	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	float    farZ = 100.0f;

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t ty =

	float    farZ = 100.0f;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		{

};

	m_pSampler = NULL;

	ConstantMatrixBuffer cmb;

	XMFLOAT4X4 view;



	delete[] pIList;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	int     vcount = vertexlist.size();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{



}

	SDL_DestroyTexture(tex);

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pTextureView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	DXGI_SWAP_CHAIN_DESC scDesc;

			exit(1);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

			case SDLK_DOWN:

	irData.pSysMem = &pIList[0];

				vertex.push_back(vertex_tmp);

	vbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);



	if (FAILED(hr))

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



{

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	std::vector<tinyobj::material_t> materials;

	//Vertex* pVList = new Vertex[vcount];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}
	XMFLOAT4 specular;          //反射(r,g,b)

		&error,

	WORD   icount = indexList.size();



	return hr;

	irData.SysMemPitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pTextureView);

	Vertex* pVList = new Vertex[vcount];

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.Width = rect.Width();

	txDesc.ArraySize = 1;

struct ConstantLight {

	float    farZ = 100.0f;





		pIList[j] = indexList[j];

HRESULT CD3DTest::Create(HWND hwnd)

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		pIList[j] = indexList[j];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	txDesc.MipLevels = 1;

	vector<WORD> indexList;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				WORD index = idx.vertex_index;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//頂点レイアウト作成

	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (m_pImmediateContext)

}

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				break;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		SDL_RenderPresent(ren);

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.OutputWindow = hwnd;



	float    nearZ = 0.1f;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

	D3D11_BUFFER_DESC ibDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			case SDLK_RIGHT:

	XMFLOAT4 specular;          //反射(r,g,b)



		KEY_PRESS_SURFACE_TOTAL



CD3DTest::CD3DTest()

	ID3D11Texture2D* pBackBuffer;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		//User presses a key

	Release();

			default:



	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

		&materials,

};

#include <SDL.h>

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.MinDepth = 0.0f;

	if (!reader.Warning().empty())



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	for (const auto& shape : shapes)

int main(int, char**)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#include <iostream>

	if (FAILED(hr))

	txDesc.ArraySize = 1;





int main(int, char**)

	auto& attrib = reader.GetAttrib();

	Vertex* pVList = new Vertex[vcount];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



			exit(1);



	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

{



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	{

	D3D_FEATURE_LEVEL level;

		&scDesc,

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	::ZeroMemory(&scDesc, sizeof(scDesc));

			break;



			for (size_t v = 0; v < num_vertices; v++)

}

	D3D11_SUBRESOURCE_DATA irData;

	SAFE_RELEASE(m_pInputLayout);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDevice);

	};

	if (FAILED(hr))





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		pIList[j] = indexList[j];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	int     vcount = vertexlist.size();

	}

		return hr;



#include "DirectXManager.h"

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pMatrixBuffer);

			switch (e.key.keysym.sym)

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

	m_pTexture = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

			case SDLK_UP:

	return 0;

	for (int j = 0; j < icount; j++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_DestroyWindow(win);

/*

	txDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

			case SDLK_LEFT:

		SDL_RenderClear(ren);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	D3D11_SAMPLER_DESC smpDesc;

			case SDLK_LEFT:

	//Vertex* pVList = new Vertex[vcount];



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	HRESULT              hr;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pMatrixBuffer = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

	{

	irData.SysMemSlicePitch = 0;

	m_Viewport.TopLeftY = 0;

	tinyobj::attrib_t attrib;

		&materials,

	m_Viewport.Width = (FLOAT)rect.Width();

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.StructureByteStride = 0;

	UINT offsets = 0;

	m_IndexCount = icount;

	SDL_Quit();

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	}

	SDL_DestroyWindow(win);

	//First we need to start up SDL, and make sure it went ok

	//Key press surfaces constants

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	{



	XMFLOAT4X4 world;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (!error.empty())

	WORD* pIList = new WORD[icount];

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.StructureByteStride = 0;



#include "DirectXManager.h"

	tinyobj::attrib_t attrib;



	{

	SAFE_RELEASE(m_pSwapChain);

		return hr;

		NULL,

	SDL_DestroyWindow(win);

		}

	SAFE_RELEASE(m_pIndexBuffer);

	UINT strides = sizeof(Vertex);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	tinyobj::ObjReaderConfig reader_config;

	//頂点シェーダー生成

	};

			}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	delete[] pIList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		KEY_PRESS_SURFACE_RIGHT,



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

}



	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	//First we need to start up SDL, and make sure it went ok

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	for (int i = 0; i < 3; i++)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

	std::string inputfile = "test.obj";

	CRect                rect;

		}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pTexture = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	{

	m_pDepthStencilTexture = NULL;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);





struct ConstantLightBuffer {

	vbDesc.StructureByteStride = 0;



	return 0;



			case SDLK_RIGHT:

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vector<Vertex> vertexlist;

struct ConstantLight {

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	SAFE_RELEASE(m_pTexture);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

		&attrib,

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		&materials,

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pImmediateContext);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pSampler = NULL;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

		return hr;

	if (!reader.Warning().empty())



		pLevels,



	UINT flags = 0;

	XMFLOAT4         eyePos;   //視点座標

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.SampleDesc.Count = 1;

				// access to vertex



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#include <SDL.h>



		//User presses a key

	{



				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_DestroyRenderer(ren);

	}

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	txDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	DXGI_SWAP_CHAIN_DESC scDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include <SDL.h>

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

{

	DXGI_SWAP_CHAIN_DESC scDesc;



	m_Viewport.TopLeftX = 0;

				vertex.push_back(vertex_tmp);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

		// Loop over faces(polygon)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (const auto& shape : shapes)

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

		else if (e.type == SDL_KEYDOWN)

	Release();

	ConstantLightBuffer clb;

	m_Viewport.TopLeftX = 0;



#endif

		{

	::GetClientRect(hwnd, &rect);

	{

	//Key press surfaces constants

	cbDesc.MiscFlags = 0;





}

	if (FAILED(hr))

	float    farZ = 100.0f;

		return hr;

	ID3D11Texture2D* pBackBuffer;

 * Lesson 1: Hello World!

	//Clean up our objects and quit

	D3D11_SUBRESOURCE_DATA vrData;



			case SDLK_RIGHT:

	UINT offsets = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

void CD3DTest::Release()

{





	SDL_Event e;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	for (size_t s = 0; s < shapes.size(); s++)

				break;

HRESULT CD3DTest::Create(HWND hwnd)

	vector<Vertex> vertexlist;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





			{

	scDesc.SampleDesc.Quality = 0;

		flags,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pPixelShader);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	while (SDL_PollEvent(&e) != 0)

	ConstantMatrixBuffer cmb;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{



		delete[] pVList;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.StructureByteStride = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	tinyobj::ObjReader reader;

	auto& shapes = reader.GetShapes();

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	CRect                rect;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	delete[] pIList;

	txDesc.SampleDesc.Count = 1;

		return hr;



	ConstantLightBuffer clb;

	int     vcount = vertexlist.size();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	std::vector<tinyobj::shape_t> shapes;





	}

}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	CRect                rect;

			break;



	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (m_pImmediateContext)

		KEY_PRESS_SURFACE_DOWN,

		{

	}*/

CD3DTest::CD3DTest()

/*

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.MiscFlags = 0;



			}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

		KEY_PRESS_SURFACE_DOWN,



	irData.SysMemSlicePitch = 0;

	vrData.pSysMem = &pVList[0];

			{

		}

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pLightBuffer);

		//User requests quit

		delete[] pVList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	vrData.pSysMem = &pVList[0];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





}

	XMFLOAT4 specular;          //反射(r,g,b)



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	m_pSampler = NULL;

	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pDepthStencilView);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	vbDesc.CPUAccessFlags = 0;



	vrData.SysMemSlicePitch = 0;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_VertexCount = vcount;

			break;

	m_Viewport.Height = (FLOAT)rect.Height();

		else if (e.type == SDL_KEYDOWN)

int SEGMENT = 36;

			index_offset += fv;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	//頂点バッファ作成

	D3D11_SUBRESOURCE_DATA vrData;

			case SDLK_DOWN:

}

	std::string inputfile = "test.obj";

	SDL_Event e;

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	for (int i = 0; i < 3; i++)





{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#include <iostream>

	int     vcount = vertexlist.size();

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		SDL_Delay(1000);

	m_IndexCount = icount;



	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pPixelShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	vector<WORD> indexList;

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_Viewport.TopLeftY = 0;

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#ifdef _DEBUG

		flags,



	m_pRenderTargetView = NULL;

	D3D11_TEXTURE2D_DESC txDesc;

	m_Viewport.MaxDepth = 1.0f;

		cout << "SDL_INIT_ERROR" << endl;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	UINT flags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;



		KEY_PRESS_SURFACE_RIGHT,

	if (!reader.Warning().empty())

	if (FAILED(hr))

{

	//定数バッファ作成

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pMatrixBuffer = NULL;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

		delete[] pVList;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		{

	m_Viewport.MinDepth = 0.0f;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;

}

	//vector<WORD> index_t;

				indexlist.push_back(idx.vertex_index);



	SDL_Quit();

	SDL_Event e;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pIndexBuffer);

	m_VertexCount = vcount;

	m_Viewport.TopLeftY = 0;

	cbDesc.MiscFlags = 0;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				vertex.push_back(vertex_tmp);

	//Vertex* pVList = new Vertex[vcount];

	irData.pSysMem = &pIList[0];

	scDesc.BufferDesc.Height = rect.Height();

		KEY_PRESS_SURFACE_RIGHT,



	float    farZ = 100.0f;

		return hr;

	{



	if (FAILED(hr))

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (FAILED(hr))

				// access to vertex

	txDesc.Height = rect.Height();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

}

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pSampler);

	vrData.pSysMem = &pVList[0];

	SDL_Event e;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;







	vector<WORD> indexList;

HRESULT CD3DTest::Create(HWND hwnd)



};



	if (FAILED(hr))

		if (e.type == SDL_QUIT)

		{

	LoadObj(vertexlist, indexList);

				// access to vertex

	::GetClientRect(hwnd, &rect);

	txDesc.ArraySize = 1;

	m_IndexCount = icount;

};

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pTextureView = NULL;



	UINT offsets = 0;



	m_Viewport.MaxDepth = 1.0f;

		{

	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.ArraySize = 1;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

}



				break;

	XMFLOAT4         eyePos;   //視点座標

	pBackBuffer->Release();



				vertex.push_back(vertex_tmp);



using std::cout; using std::endl;

	}

		SDL_Delay(1000);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pImmediateContext);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			for (size_t v = 0; v < fv; v++)

		return hr;

	//First we need to start up SDL, and make sure it went ok

	Release();

	auto& shapes = reader.GetShapes();

	scDesc.BufferDesc.Height = rect.Height();

	irData.SysMemSlicePitch = 0;

struct ConstantMatrixBuffer {

		}



	if (FAILED(hr))

	}

	m_Viewport.Height = (FLOAT)rect.Height();



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyRenderer(ren);

	{





				vertex.push_back(vertex_tmp);



	vector<WORD> indexList;





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	scDesc.BufferDesc.Width = rect.Width();

	delete[] pVList;

	Release();

	};

	{

	ibDesc.CPUAccessFlags = 0;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&attrib,

	m_pTexture = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int main(int, char**)

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	vrData.SysMemSlicePitch = 0;

	int     vcount = vertexlist.size();

}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	if (!error.empty())

	irData.SysMemSlicePitch = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

int main(int, char**)

int main(int, char**)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.StructureByteStride = 0;

		SDL_Delay(1000);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//Create Index

		KEY_PRESS_SURFACE_DOWN,

	m_pSwapChain = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	tinyobj::attrib_t attrib;

	SAFE_RELEASE(m_pTexture);

	{

};

#include <SDL.h>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

#ifdef _DEBUG

	return 0;



	m_pImmediateContext = NULL;

			case SDLK_RIGHT:

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	dsDesc.Format = txDesc.Format;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

int main(int, char**)



	m_pLightBuffer = NULL;

		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		SDL_RenderClear(ren);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_Viewport.Width = (FLOAT)rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		m_pImmediateContext->ClearState();

#ifdef _DEBUG

	ibDesc.MiscFlags = 0;



	{



	SDL_DestroyWindow(win);

	//深度ステンシルバッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

struct ConstantMaterial {

	CRect                rect;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	int     vcount = vertexlist.size();

		&m_pSwapChain,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

		// Loop over faces(polygon)



void CD3DTest::Render()

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pIndexBuffer);

	//頂点バッファ作成

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_FreeSurface(suf);







		KEY_PRESS_SURFACE_LEFT,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.MiscFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	}

	SAFE_RELEASE(m_pVertexBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return hr;



	float    farZ = 100.0f;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pLightBuffer);

	}

		&error,

		return hr;

	if (FAILED(hr))



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			switch (e.key.keysym.sym)

		SDL_RenderClear(ren);

		}

	SAFE_RELEASE(m_pPixelShader);



	//テクスチャ読み込み

			exit(1);



	m_Viewport.Width = (FLOAT)rect.Width();

	ZeroMemory(&dsDesc, sizeof(dsDesc));

};

		}

	SDL_Quit();



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	{

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



			{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;

	m_pVertexBuffer = NULL;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Quality = 0;

	{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	if (!error.empty())

	//インデックスバッファ作成



		&level,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#endif

		exit(1);

	SAFE_RELEASE(m_pTextureView);

	HRESULT              hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		&scDesc,



	vbDesc.MiscFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	//テクスチャ読み込み

	}

	delete[] pVList;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ibDesc.MiscFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	bool ret = tinyobj::LoadObj(

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pIndexBuffer);

		{

		&m_pDevice,







		&error,

		flags,

				vertex.push_back(vertex_tmp);

	}

	SAFE_RELEASE(m_pSwapChain);



	vrData.SysMemPitch = 0;

	m_pDepthStencilTexture = NULL;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4 specular;          //反射(r,g,b)

			// Loop over vertices in the face.

	{

		SDL_RenderClear(ren);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	irData.pSysMem = &pIList[0];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.CPUAccessFlags = 0;

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	while (SDL_PollEvent(&e) != 0)



				WORD index = idx.vertex_index;



		{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		&m_pSwapChain,





			}

	m_pSwapChain->Present(0, 0);

		SDL_Delay(1000);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		{

		D3D11_SDK_VERSION,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				WORD index = idx.vertex_index;



	//頂点バッファ作成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	/*

	if (!reader.ParseFromFile(inputfile, reader_config))

			break;

	{

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4X4 view;

	//深度ステンシルバッファ作成

		return 1;

	//ピクセルシェーダー生成

	cbDesc.CPUAccessFlags = 0;

		&attrib,

	for (int i = 0; i < 3; i++)

	XMFLOAT4X4 view;

			{

		}

		size_t index_offset = 0;

	ID3D11Texture2D* pBackBuffer;

	m_Viewport.TopLeftY = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}*/



	//深度ステンシルバッファ作成

	{

}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	cbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	while (SDL_PollEvent(&e) != 0)

	while (SDL_PollEvent(&e) != 0)



	cbDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pRenderTargetView = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	float    fov = XMConvertToRadians(20.0f);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		delete[] pIList;

	SAFE_RELEASE(m_pDepthStencilView);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			break;

		KEY_PRESS_SURFACE_DOWN,





	//ピクセルシェーダー生成

	scDesc.BufferDesc.Width = rect.Width();

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	//頂点シェーダー生成

{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		m_pImmediateContext->ClearState();

		//User presses a key

	WORD* pIList = new WORD[icount];



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.StructureByteStride = 0;

	auto& materials = reader.GetMaterials();

	SDL_DestroyWindow(win);



	{

	//頂点バッファ作成

			}

	m_Viewport.Width = (FLOAT)rect.Width();

	auto& materials = reader.GetMaterials();



	SAFE_RELEASE(m_pDepthStencilView);

		1,



	float    farZ = 100.0f;

	//頂点シェーダー生成

		KEY_PRESS_SURFACE_UP,



	cbDesc.MiscFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.StructureByteStride = 0;

	{

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	scDesc.SampleDesc.Count = 1;

	ConstantLightBuffer clb;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



			case SDLK_RIGHT:

				break;

			}







		size_t index_offset = 0;  // インデントのオフセット





	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//ピクセルシェーダー生成



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	WORD* pIList = new WORD[icount];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		R"(cube.obj)");

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::real_t tx =

#endif

		D3D11_SDK_VERSION,

	std::string inputfile = "test.obj";

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

	m_Angle += XMConvertToRadians(1.0f);



		&scDesc,

	SAFE_RELEASE(m_pSampler);

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_DestroyTexture(tex);

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pSampler);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}

				break;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;

	LoadObj(vertexlist, indexList);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	Release();

	}

	ibDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;

	//定数バッファ作成

	//Clean up our objects and quit

	float    aspect = m_Viewport.Width / m_Viewport.Height;



				break;

	m_pVertexBuffer = NULL;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pRenderTargetView = NULL;



	SAFE_RELEASE(m_pSampler);

	return 0;

using std::cout; using std::endl;

	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pVertexShader);

struct ConstantLightBuffer {

using std::cout; using std::endl;

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	if (m_pImmediateContext)



	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	::GetClientRect(hwnd, &rect);

int SEGMENT = 36;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

				break;

	SDL_DestroyRenderer(ren);

	}

	float    nearZ = 0.1f;

		}

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	//インデックスバッファ作成

#include <iostream>

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

	ibDesc.MiscFlags = 0;

		return hr;



		&materials,

	//vector<WORD> index_t;

		SDL_RenderClear(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4 specular;          //反射(r,g,b)



}

	if (FAILED(hr))

			case SDLK_DOWN:

	m_pDevice = NULL;

	return 0;





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ID3D11Texture2D* pBackBuffer;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		pLevels,

		&m_pSwapChain,

}

{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_IndexCount = 0;

	cbDesc.CPUAccessFlags = 0;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	return;

	pBackBuffer->Release();

}

		//User requests quit



	txDesc.MiscFlags = 0;



		else if (e.type == SDL_KEYDOWN)

	{

		pLevels,

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//インデックスバッファ作成

		SDL_RenderCopy(ren, tex, NULL, NULL);

			break;





				WORD index = idx.vertex_index;

				tinyobj::real_t ty =

	{

			{

	SAFE_RELEASE(m_pVertexShader);

		return hr;

		return hr;

};

	UINT flags = 0;

	dsDesc.Texture2D.MipSlice = 0;

	for (int j = 0; j < icount; j++)

	{

	for (int i = 0; i < vcount; i++)

	txDesc.Width = rect.Width();

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_VertexCount = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)



	LoadObj(vertexlist, indexList);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	reader_config.mtl_search_path = "./"; // Path to material files



	reader_config.mtl_search_path = "./"; // Path to material files

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		&scDesc,

			index_offset += num_vertices;

int main(int, char**)

		return hr;

	m_VertexCount = vcount;



	m_pInputLayout = NULL;

	}



	SDL_DestroyRenderer(ren);



	XMStoreFloat4(&clb.eyePos, eye);

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				break;

{

	ConstantMatrixBuffer cmb;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{

	SDL_FreeSurface(suf);

		return hr;

	txDesc.Height = rect.Height();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	m_pTextureView = NULL;

	}

	m_Viewport.MinDepth = 0.0f;

	SDL_DestroyTexture(tex);

	//テクスチャ読み込み



	//ビューポート設定

	std::vector<tinyobj::shape_t> shapes;

 */

	CRect                rect;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		{

	cbDesc.CPUAccessFlags = 0;

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

#ifdef _DEBUG

	XMStoreFloat4(&clb.eyePos, eye);



				// access to vertex



		return 1;

	return;

#endif



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.Width = rect.Width();

	}



	cbDesc.MiscFlags = 0;

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;





		if (e.type == SDL_QUIT)

	}

	Release();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

};



	for (int i = 0; i < vcount; i++)

	m_IndexCount = icount;

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			index_offset += fv;

	irData.pSysMem = &pIList[0];





		{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





		return hr;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//テクスチャ読み込み

			for (size_t v = 0; v < num_vertices; v++)



	if (FAILED(hr))

	txDesc.MiscFlags = 0;

		}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();

	std::vector<tinyobj::material_t> materials;

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_pSwapChain = NULL;

			exit(1);



		{



		{

	ID3D11Texture2D* pBackBuffer;





	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

}



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_VertexCount = vcount;

	ibDesc.StructureByteStride = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//Clean up our objects and quit

	XMFLOAT4X4 view;

	}

	m_pSampler = NULL;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

		R"(cube.obj)");

			case SDLK_DOWN:

	scDesc.SampleDesc.Quality = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_IndexCount = icount;

	reader_config.mtl_search_path = "./"; // Path to material files



	SAFE_RELEASE(m_pDepthStencilTexture);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		return hr;

}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Format = txDesc.Format;

{

	irData.pSysMem = &pIList[0];

		&level,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	{

	}

				vertex.push_back(vertex_tmp);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pIndexBuffer = NULL;



		R"(cube.obj)");



		SDL_RenderClear(ren);



		flags,

			default:

	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4X4 view;

void CD3DTest::Release()

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	ibDesc.StructureByteStride = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{

		}

/*

	//深度ステンシルバッファ作成

				tinyobj::real_t ty =

#include "DirectXManager.h"

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	m_pPixelShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.eyePos, eye);

			default:

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);



		//User presses a key

	auto& shapes = reader.GetShapes();

	SDL_Event e;

	for (int i = 0; i < vcount; i++)



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		{

	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	LoadObj(vertexlist, indexList);

	//Key press surfaces constants

	for (int i = 0; i < vcount; i++)

		flags,

	auto& shapes = reader.GetShapes();

#define TINYOBJLOADER_IMPLEMENTATION

}

		&attrib,

	HRESULT              hr;

	XMFLOAT4X4 projection;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		delete[] pIList;

			}

	vbDesc.CPUAccessFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#include <iostream>

		{

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		size_t index_offset = 0;

	D3D11_BUFFER_DESC cbDesc;

			case SDLK_UP:

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pInputLayout = NULL;



		SDL_Delay(1000);

	auto& shapes = reader.GetShapes();

	UINT strides = sizeof(Vertex);

	Vertex* pVList = new Vertex[vcount];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_Delay(1000);

{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.StructureByteStride = 0;

#define TINYOBJLOADER_IMPLEMENTATION

			}

	if (FAILED(hr))

			case SDLK_RIGHT:

int SEGMENT = 36;

		cout << "SDL_INIT_ERROR" << endl;

	delete[] pVList;



	m_pTexture = NULL;

	m_pRenderTargetView = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& materials = reader.GetMaterials();

	auto& shapes = reader.GetShapes();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	return 0;

	{

	cbDesc.StructureByteStride = 0;

	cbDesc.StructureByteStride = 0;



CD3DTest::~CD3DTest()

		SDL_RenderClear(ren);

	SDL_DestroyWindow(win);

	//頂点シェーダー生成



			int num_vertices = shape.mesh.num_face_vertices[f];

		&m_pSwapChain,

				// access to vertex

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

			//Select surfaces based on key press

}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	vrData.SysMemPitch = 0;

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_VertexCount = vcount;

	CRect                rect;

	SAFE_RELEASE(m_pTextureView);

	}

		D3D11_SDK_VERSION,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pSampler = NULL;



		}

	CRect                rect;



	{

	/*

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



};

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pVertexBuffer);

	ConstantMaterial material; //物体の質感

int main(int, char**)







		return hr;

	scDesc.SampleDesc.Quality = 0;

		&scDesc,



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

	SAFE_RELEASE(m_pLightBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

#include <iostream>

		delete[] pVList;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		SDL_RenderPresent(ren);

	m_pIndexBuffer = NULL;

 * Lesson 1: Hello World!





	std::string imagePath = "hello.bmp";

	std::string imagePath = "hello.bmp";

		&m_pImmediateContext);

				indexlist.push_back(index);

	if (FAILED(hr))





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMaterial {



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))



	txDesc.Height = rect.Height();

		NULL,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SAFE_RELEASE(m_pRenderTargetView);



struct ConstantLight {

#endif

		pLevels,

	m_Viewport.TopLeftY = 0;

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext = NULL;

	}

	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_DestroyRenderer(ren);





				vertex.push_back(vertex_tmp);

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_Viewport.TopLeftX = 0;

	};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4X4 projection;

	//ピクセルシェーダー生成

	if (FAILED(hr))

#include <iostream>

#include "DirectXManager.h"

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_Viewport.TopLeftY = 0;

	vbDesc.CPUAccessFlags = 0;



	XMFLOAT4X4 world;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vbDesc.CPUAccessFlags = 0;

struct ConstantMatrixBuffer {

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	}*/

	{

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		//User requests quit

	D3D11_TEXTURE2D_DESC txDesc;



		return hr;



}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	ibDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

		KEY_PRESS_SURFACE_UP,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





	m_pRenderTargetView = NULL;



	XMFLOAT4         ambient;  //環境光(r,g,b)

struct ConstantMaterial {

	SAFE_RELEASE(m_pTexture);

	m_pInputLayout = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pInputLayout = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

		return hr;





		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

}
	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}
	D3D11_SUBRESOURCE_DATA irData;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

}

		}



	std::string inputfile = "test.obj";

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pRenderTargetView);



	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pVertexShader);





			case SDLK_RIGHT:

	delete[] pIList;

		SDL_RenderPresent(ren);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		SDL_RenderPresent(ren);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

}


	SAFE_RELEASE(m_pInputLayout);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



HRESULT CD3DTest::Create(HWND hwnd)

				// access to vertex

	if (!reader.Warning().empty())

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			index_offset += fv;

				indexlist.push_back(index);





{

void CD3DTest::Render()

	m_Viewport.MinDepth = 0.0f;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vector<WORD> indexList;

		{

	while (SDL_PollEvent(&e) != 0)

			exit(1);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		{

		&attrib,

	SDL_DestroyTexture(tex);

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	irData.pSysMem = &pIList[0];



	//深度ステンシルバッファ作成

}
		SDL_RenderCopy(ren, tex, NULL, NULL);

	return;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pSwapChain->Present(0, 0);

}

	tinyobj::ObjReader reader;



	for (int j = 0; j < icount; j++)



{

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	cbDesc.MiscFlags = 0;

int main(int, char**)

				break;

#include <iostream>

	D3D11_BUFFER_DESC ibDesc;

	for (size_t s = 0; s < shapes.size(); s++)

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//インデックスバッファ作成

				// access to vertex

	XMFLOAT4X4 projection;

	m_pVertexShader = NULL;

		return hr;

	if (FAILED(hr))



		&materials,



	m_pVertexBuffer = NULL;







	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		m_pImmediateContext->ClearState();

	for (int i = 0; i < 3; i++)



		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

}





	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

		delete[] pVList;

		&m_pSwapChain,

}

	XMStoreFloat4(&clb.eyePos, eye);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

using std::cout; using std::endl;

	if (m_pImmediateContext)

				break;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	std::string inputfile = "test.obj";

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&level,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Event e;

	irData.pSysMem = &pIList[0];

	SDL_DestroyWindow(win);

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Angle += XMConvertToRadians(1.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_DestroyWindow(win);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	m_pImmediateContext = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D11_BUFFER_DESC cbDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	auto& attrib = reader.GetAttrib();

#include <SDL.h>

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	txDesc.SampleDesc.Quality = 0;

	m_Viewport.TopLeftX = 0;

	int     vcount = vertexlist.size();

	return 0;



				break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			}







					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4 pos;               //座標(x,y,z)



{

		&materials,



	m_pPixelShader = NULL;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&m_pSwapChain,

	if (FAILED(hr))

	//頂点シェーダー生成

	m_pImmediateContext = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	while (SDL_PollEvent(&e) != 0)

	m_Viewport.TopLeftY = 0;



	SAFE_RELEASE(m_pDepthStencilTexture);

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pLightBuffer);



	SDL_Quit();

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		NULL,

	}*/

};

	while (SDL_PollEvent(&e) != 0)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			switch (e.key.keysym.sym)

	m_pVertexShader = NULL;


