	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_Angle += XMConvertToRadians(1.0f);



		return hr;

		return hr;

	int     vcount = vertexlist.size();

	vrData.pSysMem = &pVList[0];

		cout << "SDL_INIT_ERROR" << endl;

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//ピクセルシェーダー生成

	XMStoreFloat4(&clb.material.specular, materialSpecular);





	XMStoreFloat4(&clb.eyePos, eye);

	}

	irData.pSysMem = &pIList[0];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	tinyobj::attrib_t attrib;

	if (!reader.ParseFromFile(inputfile, reader_config))

{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

struct ConstantMatrixBuffer {

				break;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.Height = rect.Height();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		pVList[i] = vertexlist[i];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	//Vertex* pVList = new Vertex[vcount];

			break;

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    fov = XMConvertToRadians(20.0f);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	//深度ステンシルバッファ作成

	pBackBuffer->Release();

	//Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_LEFT,

	// Loop over shapes

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{





	irData.pSysMem = &pIList[0];



			}



	{

		}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_SUBRESOURCE_DATA irData;

	m_VertexCount = vcount;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.MiscFlags = 0;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		else if (e.type == SDL_KEYDOWN)

		&level,

	m_IndexCount = icount;

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

		exit(1);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_Event e;

}

	tinyobj::attrib_t attrib;

	vbDesc.CPUAccessFlags = 0;

	irData.SysMemPitch = 0;



	txDesc.SampleDesc.Quality = 0;

		return hr;

	}

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4 specular;          //反射(r,g,b)

		//User requests quit

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





CD3DTest::~CD3DTest()

				break;

	float    farZ = 100.0f;

	vbDesc.StructureByteStride = 0;



	m_pMatrixBuffer = NULL;

		&attrib,



				break;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_Angle += XMConvertToRadians(1.0f);

				indexlist.push_back(idx.vertex_index);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



				indexlist.push_back(index);





	auto& shapes = reader.GetShapes();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	m_IndexCount = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4X4 view;

	UINT strides = sizeof(Vertex);

	float    fov = XMConvertToRadians(20.0f);

}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	for (int i = 0; i < 3; i++)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);





	return 0;

}

	SDL_FreeSurface(suf);

	vbDesc.StructureByteStride = 0;

		if (!ret)

	D3D11_BUFFER_DESC vbDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4 ambient;           //環境(r,g,b)

}

	{

	}

	SDL_FreeSurface(bmp);

	D3D11_SAMPLER_DESC smpDesc;

	}



	//Create Index

struct ConstantMatrixBuffer {



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	vrData.SysMemPitch = 0;

	txDesc.ArraySize = 1;

	dsDesc.Format = txDesc.Format;

	{

{

#define TINYOBJLOADER_IMPLEMENTATION

		SDL_RenderPresent(ren);

		size_t index_offset = 0;

struct ConstantMaterial {

		if (e.type == SDL_QUIT)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_LEFT:

		}

	}



#include <SDL.h>

	D3D11_TEXTURE2D_DESC txDesc;

			}

			for (size_t v = 0; v < fv; v++)

				break;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	return 0;

				break;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				break;

	m_pDepthStencilView = NULL;

		return hr;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	/*

	vrData.pSysMem = &pVList[0];



	for (int i = 0; i < vcount; i++)

		// Loop over faces(polygon)



	if (FAILED(hr))



		{

			}

{

	scDesc.BufferDesc.Height = rect.Height();

	{

		D3D_DRIVER_TYPE_HARDWARE,

		SDL_RenderClear(ren);

		return hr;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

	ConstantLight    pntLight; //点光源

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pTextureView = NULL;

	float    fov = XMConvertToRadians(20.0f);

 */



	scDesc.Windowed = TRUE;

				WORD index = idx.vertex_index;

		&level,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	Release();

		pIList[j] = indexList[j];

	{

#include <iostream>

			{

}
		else if (e.type == SDL_KEYDOWN)

#include <iostream>







			exit(1);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	ConstantMatrixBuffer cmb;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

struct ConstantMatrixBuffer {

			for (size_t v = 0; v < num_vertices; v++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))





		&shapes,



	//頂点バッファ作成

	m_pLightBuffer = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#endif

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pIndexBuffer);

			switch (e.key.keysym.sym)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	cbDesc.MiscFlags = 0;

}

			case SDLK_UP:

	Release();

	txDesc.Width = rect.Width();

	int     vcount = vertexlist.size();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}

			index_offset += num_vertices;

	enum KeyPressSurfaces



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	UINT offsets = 0;



	float    farZ = 100.0f;



using std::cout; using std::endl;

}

	vbDesc.MiscFlags = 0;

	delete[] pVList;

			{

	SDL_FreeSurface(bmp);

	std::string error;

	auto& attrib = reader.GetAttrib();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

{

	if (FAILED(hr))



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	}

			case SDLK_RIGHT:

		pIList[j] = indexList[j];

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



				tinyobj::real_t tx =

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	if (!reader.Warning().empty())

	}*/

	//Key press surfaces constants

	CRect                rect;







	ConstantMatrixBuffer cmb;

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pSampler);



				// access to vertex



	for (int i = 0; i < 3; i++)

	ibDesc.StructureByteStride = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	{

			int num_vertices = shape.mesh.num_face_vertices[f];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	Release();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





		&m_pImmediateContext);

	delete[] pVList;

	SAFE_RELEASE(m_pTextureView);



	m_pImmediateContext = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	};

	txDesc.SampleDesc.Count = 1;

	D3D11_SUBRESOURCE_DATA irData;

	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.SampleDesc.Quality = 0;



		// Loop over faces(polygon)

using std::cout; using std::endl;

		return hr;

		//User presses a key



		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

	m_VertexCount = vcount;

	tinyobj::ObjReader reader;

#ifdef _DEBUG

	{

	m_pTexture = NULL;

	m_Viewport.TopLeftY = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

struct ConstantMaterial {

		SDL_Delay(1000);





			case SDLK_LEFT:

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pDepthStencilTexture);

/*

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pImmediateContext);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	delete[] pVList;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	vector<Vertex> vertexlist;

		pIList[j] = indexList[j];



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	};

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_Viewport.TopLeftX = 0;





	SAFE_RELEASE(m_pTexture);

	ibDesc.CPUAccessFlags = 0;

	ConstantMatrixBuffer cmb;

		}

	vrData.SysMemPitch = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	float    farZ = 100.0f;



		return hr;

	if (!error.empty())

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





{

		if (!reader.Error().empty())

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#ifdef _DEBUG



	m_pVertexShader = NULL;



		return hr;

		SDL_RenderClear(ren);

using std::cout; using std::endl;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	txDesc.MiscFlags = 0;

	reader_config.mtl_search_path = "./"; // Path to material files



	D3D11_SUBRESOURCE_DATA irData;

	D3D11_BUFFER_DESC cbDesc;

	{



	XMFLOAT4 ambient;           //環境(r,g,b)



{

		return hr;

				vertex.push_back(vertex_tmp);

	m_pTexture = NULL;

#include <iostream>



#include <SDL.h>

				break;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	irData.SysMemSlicePitch = 0;

				break;

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D11_BUFFER_DESC cbDesc;

	}

	}

	dsDesc.Texture2D.MipSlice = 0;

				break;

	}

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				WORD index = idx.vertex_index;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_FreeSurface(suf);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

{

	ConstantLightBuffer clb;

	cbDesc.CPUAccessFlags = 0;

	m_pDepthStencilTexture = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//テクスチャ読み込み

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

#ifdef _DEBUG

	ConstantMaterial material; //物体の質感



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	if (FAILED(hr))



	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		size_t index_offset = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



{

	bool ret = tinyobj::LoadObj(

				indexlist.push_back(index);

	if (FAILED(hr))

	D3D11_BUFFER_DESC ibDesc;

		&level,

	vbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_RenderClear(ren);

			}

	float    nearZ = 0.1f;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SAFE_RELEASE(m_pInputLayout);

		&materials,

	SDL_DestroyWindow(win);

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_SUBRESOURCE_DATA irData;

	}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.MaxDepth = 1.0f;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				break;



}



	vector<Vertex> vertexlist;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		flags,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//Create Index

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vector<WORD> indexList;

	HRESULT              hr;

	enum KeyPressSurfaces

	if (!error.empty())

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		cout << "SDL_INIT_ERROR" << endl;

			// Loop over vertices in the face.

	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4(&clb.eyePos, eye);

	XMFLOAT4X4 world;

/*

	txDesc.Height = rect.Height();

			}

	return 0;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDepthStencilView);





			{

		{





			{



		{

	}



		{

		SDL_Delay(1000);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pDevice = NULL;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.Height = (FLOAT)rect.Height();

	{





	SDL_Event e;

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	for (int i = 0; i < 3; i++)

	}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//Create Index

	SAFE_RELEASE(m_pSwapChain);





		SDL_RenderCopy(ren, tex, NULL, NULL);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		&m_pSwapChain,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_VertexCount = vcount;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				vertex.push_back(vertex_tmp);



	}

	m_pDepthStencilView = NULL;

int main(int, char**)

	SDL_Quit();



	cbDesc.CPUAccessFlags = 0;

	ID3D11Texture2D* pBackBuffer;

void CD3DTest::Release()

	float    fov = XMConvertToRadians(20.0f);

	//頂点シェーダー生成

		}

	irData.pSysMem = &pIList[0];

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		return hr;

		// Loop over faces(polygon)

	int     vcount = vertexlist.size();





	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pTexture);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		&m_pImmediateContext);

				WORD index = idx.vertex_index;

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.CPUAccessFlags = 0;

		SDL_RenderPresent(ren);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

		return hr;



	{

}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SDL_Quit();

	Release();

	XMFLOAT4 ambient;           //環境(r,g,b)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		m_pImmediateContext->ClearState();

struct ConstantLightBuffer {

	D3D_FEATURE_LEVEL level;

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		SDL_RenderPresent(ren);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	// Loop over shapes

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			case SDLK_RIGHT:



		size_t index_offset = 0;  // インデントのオフセット

}

	//Create Index



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//vector<WORD> index_t;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pTexture);

	D3D11_SUBRESOURCE_DATA vrData;

void CD3DTest::Release()

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				break;

	tinyobj::ObjReaderConfig reader_config;

}




	tinyobj::attrib_t attrib;

}

	m_IndexCount = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

			//Select surfaces based on key press

		&materials,

int main(int, char**)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Quit();

				vertex.push_back(vertex_tmp);

	scDesc.Windowed = TRUE;



CD3DTest::~CD3DTest()

			}

	m_pSampler = NULL;

{

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

CD3DTest::~CD3DTest()

		// Loop over faces(polygon)

	{

			{

	XMFLOAT4 ambient;           //環境(r,g,b)



	}



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//インデックスバッファ作成

			index_offset += fv;

	XMFLOAT4X4 projection;

			index_offset += fv;



	vrData.SysMemSlicePitch = 0;

	while (SDL_PollEvent(&e) != 0)



				indexlist.push_back(index);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pVertexShader);

	m_pSwapChain->Present(0, 0);

	scDesc.OutputWindow = hwnd;

		}

	auto& materials = reader.GetMaterials();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		D3D_DRIVER_TYPE_HARDWARE,

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	m_Angle += XMConvertToRadians(1.0f);

	m_Viewport.MinDepth = 0.0f;

		//User presses a key

	if (FAILED(hr))

	int     vcount = vertexlist.size();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		size_t index_offset = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		{



	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

			switch (e.key.keysym.sym)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT strides = sizeof(Vertex);

	for (size_t s = 0; s < shapes.size(); s++)

	}



	m_pIndexBuffer = NULL;

	D3D11_BUFFER_DESC cbDesc;

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

#include <iostream>

		return hr;

	SAFE_RELEASE(m_pSampler);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		R"(cube.obj)");

}



	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

	auto& attrib = reader.GetAttrib();

	XMFLOAT4X4 view;

		flags,

			exit(1);

		&level,

		KEY_PRESS_SURFACE_DEFAULT,

	tinyobj::ObjReader reader;

				break;

		// Loop over faces(polygon)

int main(int, char**)



	for (int i = 0; i < vcount; i++)

{

	{

	m_pDepthStencilView = NULL;

	for (int i = 0; i < 3; i++)

	if (FAILED(hr))

	if (m_pImmediateContext)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (!reader.Warning().empty())

	vrData.pSysMem = &pVList[0];

	// Loop over shapes

				break;





	SDL_DestroyWindow(win);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		// Loop over faces(polygon)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	int     vcount = vertexlist.size();

	float    nearZ = 0.1f;

	vbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

	txDesc.SampleDesc.Quality = 0;

		return hr;

			}

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			index_offset += num_vertices;

	return 0;

	if (FAILED(hr))

	m_VertexCount = 0;



		if (!reader.Error().empty())

	txDesc.MiscFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

void CD3DTest::Release()

	for (size_t s = 0; s < shapes.size(); s++)



	txDesc.Height = rect.Height();

#include <iostream>

	SAFE_RELEASE(m_pDevice);

	int     vcount = vertexlist.size();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

		&level,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTextureView);

	{



{

		R"(cube.obj)");

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	}



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	Release();

		return hr;

	Release();

	{



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		{

	XMFLOAT4         eyePos;   //視点座標

struct ConstantLight {



	SAFE_RELEASE(m_pVertexShader);

		&shapes,

			index_offset += fv;

	vrData.pSysMem = &pVList[0];

	//インデックスバッファ作成

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Quit();

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		}



		}



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_RIGHT:

#include <SDL.h>

				vertex.push_back(vertex_tmp);

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

/*

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		}

		cout << "SDL_INIT_ERROR" << endl;

	//vector<WORD> index_t;

struct ConstantLightBuffer {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	WORD   icount = indexList.size();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

}
{

	txDesc.CPUAccessFlags = 0;



int SEGMENT = 36;

	//テクスチャ読み込み



	for (size_t s = 0; s < shapes.size(); s++)

		&error,

				tinyobj::real_t tx =

	ID3D11Texture2D* pBackBuffer;

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	txDesc.MipLevels = 1;

			case SDLK_RIGHT:

}

	UINT strides = sizeof(Vertex);



		return hr;

	SDL_Quit();



	std::vector<tinyobj::shape_t> shapes;

	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

		&attrib,



			index_offset += fv;

	D3D11_SAMPLER_DESC smpDesc;



	SAFE_RELEASE(m_pVertexShader);

	delete[] pIList;

	m_pPixelShader = NULL;

{

	//ビューポート設定

			for (size_t v = 0; v < num_vertices; v++)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				WORD index = idx.vertex_index;

				break;

}

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	D3D11_SUBRESOURCE_DATA irData;

#include <SDL.h>

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	ConstantMatrixBuffer cmb;

			default:





	{

	irData.SysMemSlicePitch = 0;

			exit(1);

	if (FAILED(hr))

}



	SDL_Event e;

	SAFE_RELEASE(m_pMatrixBuffer);

		size_t index_offset = 0;

	for (const auto& shape : shapes)

};



		NULL,

	cbDesc.MiscFlags = 0;





	SDL_Quit();





	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		pIList[j] = indexList[j];

	SDL_Quit();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

#include <iostream>

	scDesc.Windowed = TRUE;



	cbDesc.CPUAccessFlags = 0;



	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pVertexBuffer = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

				break;

};





	auto& materials = reader.GetMaterials();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	vector<WORD> indexList;

		flags,

	Release();



	m_pVertexShader = NULL;

	D3D_FEATURE_LEVEL level;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.MipLevels = 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



#include <SDL.h>





	m_pSwapChain = NULL;

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pSwapChain->Present(0, 0);

				break;

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	float    nearZ = 0.1f;

	m_pTexture = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User presses a key

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	XMFLOAT4         eyePos;   //視点座標



		&m_pDevice,

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	for (int i = 0; i < 3; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		SDL_Delay(1000);

	}

};

#ifdef _DEBUG

	m_Viewport.TopLeftY = 0;



	return 0;

	Release();

	{

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	if (!reader.Warning().empty())



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;



	{

	auto& shapes = reader.GetShapes();

	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.BufferCount = 1;

#ifdef _DEBUG

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

			for (size_t v = 0; v < fv; v++)





			{

	//定数バッファ作成

		else if (e.type == SDL_KEYDOWN)

void CD3DTest::Render()

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pDevice);

				WORD index = idx.vertex_index;

		&scDesc,

		return 1;

#include <SDL.h>

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pIndexBuffer);

		&materials,

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

}

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

int main(int, char**)



		SDL_Delay(1000);

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

	tinyobj::ObjReader reader;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}



{

	vrData.pSysMem = &pVList[0];

	XMFLOAT4 specular;          //反射(r,g,b)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&shapes,

	SDL_Quit();

	ConstantLight    pntLight; //点光源

	}



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		// Loop over faces(polygon)

	//頂点バッファ作成



	dsDesc.Format = txDesc.Format;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	for (int i = 0; i < 3; i++)

			}

	m_pImmediateContext = NULL;

#include <SDL.h>

	HRESULT              hr;



		SDL_RenderPresent(ren);

		R"(cube.obj)");

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_Viewport.MaxDepth = 1.0f;

		SDL_Delay(1000);

	if (!reader.ParseFromFile(inputfile, reader_config))

	}

}



int main(int, char**)

	{

	m_pImmediateContext = NULL;



	cbDesc.MiscFlags = 0;

		return hr;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	CRect                rect;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Clean up our objects and quit





	for (int j = 0; j < icount; j++)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	delete[] pVList;

	std::string imagePath = "hello.bmp";





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vector<WORD> indexList;

	SAFE_RELEASE(m_pPixelShader);

	//頂点シェーダー生成

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pMatrixBuffer = NULL;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	DXGI_SWAP_CHAIN_DESC scDesc;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	vbDesc.CPUAccessFlags = 0;





	//頂点バッファ作成

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#define TINYOBJLOADER_IMPLEMENTATION



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_Quit();

		return hr;



	irData.pSysMem = &pIList[0];

	SDL_DestroyRenderer(ren);

	{



	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pInputLayout);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;

	scDesc.OutputWindow = hwnd;



	ConstantMatrixBuffer cmb;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;







	SAFE_RELEASE(m_pDevice);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	ibDesc.StructureByteStride = 0;

/*

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//ビューポート設定

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

 * Lesson 1: Hello World!



	scDesc.BufferDesc.Height = rect.Height();



	scDesc.SampleDesc.Quality = 0;

				break;

	cbDesc.MiscFlags = 0;

}

		&m_pImmediateContext);

		pVList[i] = vertexlist[i];

	m_pIndexBuffer = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_Delay(1000);



				vertex.push_back(vertex_tmp);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	SAFE_RELEASE(m_pTexture);



	WORD   icount = indexList.size();



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



void CD3DTest::Release()

#include <iostream>

	vbDesc.MiscFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	std::string imagePath = "hello.bmp";



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_IndexCount = icount;

			break;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vbDesc.MiscFlags = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	// Loop over shapes

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	return 0;

			case SDLK_RIGHT:

		return 1;

	SAFE_RELEASE(m_pTexture);

	//Key press surfaces constants



	dsDesc.Texture2D.MipSlice = 0;

	SDL_DestroyWindow(win);

	bool ret = tinyobj::LoadObj(

	cbDesc.MiscFlags = 0;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (!error.empty())

		KEY_PRESS_SURFACE_UP,



	scDesc.BufferCount = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

		SDL_RenderPresent(ren);

	m_pVertexShader = NULL;

{

	D3D11_SUBRESOURCE_DATA irData;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



			//Select surfaces based on key press

{

	SAFE_RELEASE(m_pDepthStencilTexture);

			index_offset += fv;

		return 1;

	m_pDepthStencilView = NULL;

		// Loop over faces(polygon)



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		// Loop over faces(polygon)

	}

	SDL_Quit();



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				break;

		NULL,



	scDesc.SampleDesc.Quality = 0;

	tinyobj::ObjReader reader;

using std::cout; using std::endl;

#endif

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

	D3D_FEATURE_LEVEL level;

	//頂点シェーダー生成





{

{



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	ConstantMaterial material; //物体の質感

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	SAFE_RELEASE(m_pIndexBuffer);

	//頂点バッファ作成

	//vector<Vertex> vertex_t;



		size_t index_offset = 0;  // インデントのオフセット

		KEY_PRESS_SURFACE_LEFT,



	m_pVertexShader = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		SDL_RenderClear(ren);

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (!error.empty())

	}

	tinyobj::ObjReaderConfig reader_config;

}

	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

	D3D11_BUFFER_DESC cbDesc;

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	{

	m_pIndexBuffer = NULL;

			for (size_t v = 0; v < fv; v++)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	}

			int num_vertices = shape.mesh.num_face_vertices[f];

		R"(cube.obj)");

	{





	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//テクスチャ読み込み

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	ConstantLightBuffer clb;

	}*/

int main(int, char**)

		if (e.type == SDL_QUIT)

#include <SDL.h>

	HRESULT              hr;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))



			//Select surfaces based on key press

	for (size_t s = 0; s < shapes.size(); s++)



		return hr;

		&m_pSwapChain,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	D3D11_BUFFER_DESC vbDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	txDesc.MipLevels = 1;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pDevice);



	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;



	if (!reader.ParseFromFile(inputfile, reader_config))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	txDesc.Width = rect.Width();



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	cbDesc.StructureByteStride = 0;

	UINT strides = sizeof(Vertex);

	{

			{



#include <iostream>



	ConstantMaterial material; //物体の質感

{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	cbDesc.CPUAccessFlags = 0;

	//ピクセルシェーダー生成

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

				indexlist.push_back(index);

			exit(1);

		D3D_DRIVER_TYPE_HARDWARE,



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		&shapes,



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);





	if (SDL_Init(SDL_INIT_VIDEO != 0))

				// access to vertex

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		if (!reader.Error().empty())

	std::string inputfile = "test.obj";



		m_pImmediateContext->ClearState();

	if (FAILED(hr))

	{

	scDesc.SampleDesc.Quality = 0;

	ConstantMaterial material; //物体の質感

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_FreeSurface(suf);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReader reader;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pLightBuffer);



	D3D11_BUFFER_DESC cbDesc;

	cbDesc.StructureByteStride = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	txDesc.Height = rect.Height();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		pLevels,

	SDL_DestroyRenderer(ren);

	m_pSwapChain->Present(0, 0);

	scDesc.Windowed = TRUE;

	{



		return hr;

		SDL_RenderClear(ren);



	{

	// Loop over shapes



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_IndexCount = icount;

		{





		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		exit(1);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		// Loop over faces(polygon)



	txDesc.ArraySize = 1;

		cout << "SDL_INIT_ERROR" << endl;

		pIList[j] = indexList[j];

struct ConstantLight {

		return hr;

	scDesc.Windowed = TRUE;





		return hr;

		R"(cube.obj)");

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (!reader.ParseFromFile(inputfile, reader_config))



				break;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		//User requests quit

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





		{

	UINT strides = sizeof(Vertex);

	m_pDepthStencilTexture = NULL;

	}

	tinyobj::ObjReader reader;

	//頂点バッファ作成

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pIndexBuffer);

	auto& materials = reader.GetMaterials();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

	ConstantMaterial material; //物体の質感

	{

		return hr;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		//User requests quit

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	ibDesc.CPUAccessFlags = 0;

	UINT offsets = 0;

	WORD* pIList = new WORD[icount];



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		if (!ret)

	m_pInputLayout = NULL;

			index_offset += num_vertices;

				indexlist.push_back(idx.vertex_index);

CD3DTest::CD3DTest()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

struct ConstantLight {

#include <SDL.h>



		KEY_PRESS_SURFACE_UP,

	txDesc.Usage = D3D11_USAGE_DEFAULT;



		SDL_Delay(1000);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.BufferDesc.Width = rect.Width();

}

		SDL_Delay(1000);

		}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_IndexCount = icount;



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_DestroyRenderer(ren);

	D3D11_BUFFER_DESC vbDesc;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//テクスチャ読み込み

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//ビューポート設定

		&scDesc,

	HRESULT              hr;



	D3D11_TEXTURE2D_DESC txDesc;

	scDesc.BufferDesc.Height = rect.Height();

	//頂点レイアウト作成

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    nearZ = 0.1f;

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	cbDesc.StructureByteStride = 0;

	SDL_Quit();



	{

		KEY_PRESS_SURFACE_RIGHT,



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

}

	if (FAILED(hr))



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

		}

	//テクスチャ読み込み



				WORD index = idx.vertex_index;

	m_Viewport.Width = (FLOAT)rect.Width();

	vector<Vertex> vertexlist;



	ID3D11Texture2D* pBackBuffer;

	//インデックスバッファ作成

	//Clean up our objects and quit



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//深度ステンシルバッファ作成

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

}

	//vector<Vertex> vertex_t;

		size_t index_offset = 0;

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	delete[] pVList;



		}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

int main(int, char**)

		size_t index_offset = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))



	reader_config.mtl_search_path = "./"; // Path to material files

	//インデックスバッファ作成

	SAFE_RELEASE(m_pSampler);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D_FEATURE_LEVEL level;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	//インデックスバッファ作成

				WORD index = idx.vertex_index;

#include <iostream>



		NULL,



	{

	SAFE_RELEASE(m_pSampler);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	ibDesc.StructureByteStride = 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



			{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



};

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//定数バッファ作成



	XMFLOAT4X4 projection;



	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);

	DXGI_SWAP_CHAIN_DESC scDesc;

};

			// Loop over vertices in the face.

	SDL_Quit();

		&shapes,





	//Create Index







		&m_pDevice,

			{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	//定数バッファ作成

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

}

	UINT offsets = 0;

	ibDesc.CPUAccessFlags = 0;

	ibDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	::GetClientRect(hwnd, &rect);



			index_offset += num_vertices;

	SDL_FreeSurface(suf);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	auto& shapes = reader.GetShapes();



				tinyobj::real_t ty =

{

		SDL_RenderClear(ren);



	m_pDepthStencilTexture = NULL;

		pLevels,

	m_IndexCount = 0;

	m_IndexCount = 0;

			//Select surfaces based on key press



}

	vector<WORD> indexList;

{

	tinyobj::attrib_t attrib;

	if (FAILED(hr))

		1,

	if (!error.empty())

		if (e.type == SDL_QUIT)



		pIList[j] = indexList[j];

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&attrib,

		KEY_PRESS_SURFACE_LEFT,

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	WORD   icount = indexList.size();

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	HRESULT              hr;

	m_pLightBuffer = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



				indexlist.push_back(idx.vertex_index);

				break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				tinyobj::real_t ty =

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Angle += XMConvertToRadians(1.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





		//User presses a key

		{

			for (size_t v = 0; v < fv; v++)

	scDesc.SampleDesc.Count = 1;

	{

		KEY_PRESS_SURFACE_UP,



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	/*

	//Vertex* pVList = new Vertex[vcount];

		{



	{

	};

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			break;



				break;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	float    nearZ = 0.1f;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pDepthStencilTexture);

		exit(1);

}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			}

	XMStoreFloat4(&clb.eyePos, eye);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





	//Vertex* pVList = new Vertex[vcount];

			}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	reader_config.mtl_search_path = "./"; // Path to material files

};

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pSwapChain);



				tinyobj::real_t ty =



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		&m_pImmediateContext);

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4X4 projection;

	cbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

	}

			}

	Release();

void CD3DTest::Release()

	SAFE_RELEASE(m_pSampler);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

#include "DirectXManager.h"

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





		SDL_RenderCopy(ren, tex, NULL, NULL);

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4(&clb.eyePos, eye);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_IndexCount = 0;





	for (int j = 0; j < icount; j++)

		R"(cube.obj)");







	//Key press surfaces constants



	m_Viewport.Width = (FLOAT)rect.Width();

	DXGI_SWAP_CHAIN_DESC scDesc;

		if (!ret)

};

				break;

	cbDesc.CPUAccessFlags = 0;

				indexlist.push_back(idx.vertex_index);

	ibDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);

		return hr;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			exit(1);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Clean up our objects and quit

}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	::GetClientRect(hwnd, &rect);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&shapes,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	}

		}

int main(int, char**)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	/*

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_RIGHT,

	{

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

				break;



}
	for (int i = 0; i < vcount; i++)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//ピクセルシェーダー生成

		pLevels,

	m_pTexture = NULL;



	UINT strides = sizeof(Vertex);

	m_pImmediateContext = NULL;

	tinyobj::ObjReaderConfig reader_config;



		}

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

	{

	SAFE_RELEASE(m_pSwapChain);

	scDesc.BufferCount = 1;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_DestroyTexture(tex);

	std::string error;

		SDL_RenderClear(ren);

	scDesc.Windowed = TRUE;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



			{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		//User requests quit

		else if (e.type == SDL_KEYDOWN)

	HRESULT              hr;

		R"(cube.obj)");

	SAFE_RELEASE(m_pTextureView);

			}

	txDesc.Width = rect.Width();

	{

	enum KeyPressSurfaces

};



		return hr;

	delete[] pIList;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,

	cbDesc.CPUAccessFlags = 0;

	}

		return hr;

	delete[] pVList;



	tinyobj::attrib_t attrib;



	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	m_VertexCount = vcount;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pTexture);

#ifdef _DEBUG

struct ConstantLight {

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTextureView);

		exit(1);





struct ConstantLightBuffer {

		SDL_Delay(1000);



	}

				break;

}





	{

	XMFLOAT4 pos;               //座標(x,y,z)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ConstantLight    pntLight; //点光源

	return 0;

	D3D11_SAMPLER_DESC smpDesc;

			case SDLK_UP:

	enum KeyPressSurfaces



	if (FAILED(hr))

#define TINYOBJLOADER_IMPLEMENTATION

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

CD3DTest::CD3DTest()

		SDL_Delay(1000);



		exit(1);

	cbDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

	txDesc.MipLevels = 1;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			case SDLK_RIGHT:

	if (!reader.Warning().empty())

	vector<WORD> indexList;



{

	vector<WORD> indexList;

			case SDLK_UP:

	scDesc.BufferDesc.Height = rect.Height();

	m_pVertexBuffer = NULL;



	return 0;

		}

			{

				WORD index = idx.vertex_index;

			case SDLK_RIGHT:







	//ビューポート設定

	LoadObj(vertexlist, indexList);

	irData.SysMemSlicePitch = 0;

	//ピクセルシェーダー生成

	m_pDevice = NULL;

	}

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4X4 view;



	SAFE_RELEASE(m_pDepthStencilTexture);



		{

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	CRect                rect;

		SDL_RenderClear(ren);

{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				vertex.push_back(vertex_tmp);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_VertexCount = vcount;

int main(int, char**)

	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	txDesc.MiscFlags = 0;

	dsDesc.Format = txDesc.Format;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	irData.pSysMem = &pIList[0];

	std::string inputfile = "test.obj";

		SDL_Delay(1000);

	vrData.SysMemPitch = 0;

	for (const auto& shape : shapes)



	m_pPixelShader = NULL;

	}

	XMFLOAT4 ambient;           //環境(r,g,b)



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexBuffer);

	std::vector<tinyobj::material_t> materials;

	//ビューポート設定

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	tinyobj::ObjReader reader;

}

			}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (size_t s = 0; s < shapes.size(); s++)



	{

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

int main(int, char**)

	}



	ConstantLightBuffer clb;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pInputLayout = NULL;





 * Lesson 1: Hello World!

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.SampleDesc.Quality = 0;

	reader_config.mtl_search_path = "./"; // Path to material files



		pVList[i] = vertexlist[i];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&error,

		D3D_DRIVER_TYPE_HARDWARE,

	D3D11_SAMPLER_DESC smpDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				vertex.push_back(vertex_tmp);

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

	vector<WORD> indexList;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	pBackBuffer->Release();

	if (FAILED(hr))





	bool ret = tinyobj::LoadObj(

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

 */

	if (FAILED(hr))

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		KEY_PRESS_SURFACE_UP,

	m_pMatrixBuffer = NULL;



		&m_pDevice,

	//ビューポート設定

	vrData.pSysMem = &pVList[0];

	UINT offsets = 0;

				break;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

		SDL_RenderPresent(ren);



	if (!reader.Warning().empty())

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				break;

			index_offset += num_vertices;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		delete[] pIList;

	UINT flags = 0;

		SDL_RenderClear(ren);

	{

		return hr;

	//ピクセルシェーダー生成

				indexlist.push_back(idx.vertex_index);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.Format = txDesc.Format;





	Release();

		exit(1);



	SAFE_RELEASE(m_pMatrixBuffer);

}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	txDesc.CPUAccessFlags = 0;

	DXGI_SWAP_CHAIN_DESC scDesc;

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDepthStencilView);

	{

	txDesc.SampleDesc.Quality = 0;

	irData.SysMemPitch = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_Angle += XMConvertToRadians(1.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::string imagePath = "hello.bmp";

	int     vcount = vertexlist.size();

void CD3DTest::Render()

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	return 0;

	{

	ibDesc.MiscFlags = 0;

		{



	m_pDepthStencilView = NULL;

	float    fov = XMConvertToRadians(20.0f);



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	float    farZ = 100.0f;

		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

	D3D11_SUBRESOURCE_DATA vrData;

		else if (e.type == SDL_KEYDOWN)

			// Loop over vertices in the face.

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			for (size_t v = 0; v < num_vertices; v++)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	DXGI_SWAP_CHAIN_DESC scDesc;



	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.CPUAccessFlags = 0;

		&level,

	scDesc.BufferCount = 1;

}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			}

	if (FAILED(hr))

	XMFLOAT4X4 projection;

	m_pTexture = NULL;

	{

	XMFLOAT4X4 projection;

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.Windowed = TRUE;

	vrData.pSysMem = &pVList[0];

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_DestroyTexture(tex);

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (!error.empty())

		return hr;

	if (!reader.Warning().empty())



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.CPUAccessFlags = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	std::vector<tinyobj::shape_t> shapes;

	SDL_FreeSurface(suf);

	SDL_DestroyRenderer(ren);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	std::vector<tinyobj::material_t> materials;

		//User requests quit

{

	//頂点レイアウト作成

	txDesc.Width = rect.Width();

			int num_vertices = shape.mesh.num_face_vertices[f];

		delete[] pVList;

			}

				WORD index = idx.vertex_index;

		return hr;

		//User presses a key

	Release();

	delete[] pVList;

	WORD* pIList = new WORD[icount];

	{

{

	vbDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(index);

		KEY_PRESS_SURFACE_LEFT,



	{

	m_VertexCount = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pVertexShader = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	vbDesc.MiscFlags = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//ピクセルシェーダー生成

{

	if (FAILED(hr))



	vrData.pSysMem = &pVList[0];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





}

		}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//ビューポート設定

	{

	if (FAILED(hr))

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;



	D3D11_TEXTURE2D_DESC txDesc;

	m_pSwapChain = NULL;

	tinyobj::ObjReader reader;

	D3D11_SUBRESOURCE_DATA irData;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{



	{

{

		}

	m_IndexCount = 0;

		SDL_Delay(1000);

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			case SDLK_RIGHT:

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

	bool ret = tinyobj::LoadObj(

	SDL_DestroyTexture(tex);

{

};

	Release();



			break;

	std::vector<tinyobj::material_t> materials;

int main(int, char**)

	//Create Index

	LoadObj(vertexlist, indexList);



	m_IndexCount = icount;

	scDesc.BufferDesc.Height = rect.Height();

	SDL_FreeSurface(bmp);

	}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	m_VertexCount = vcount;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

	}

	SDL_DestroyRenderer(ren);

	m_Viewport.Height = (FLOAT)rect.Height();

	std::string imagePath = "hello.bmp";



	if (FAILED(hr))

		return hr;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	return;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	auto& shapes = reader.GetShapes();

	D3D11_SUBRESOURCE_DATA vrData;

	if (m_pImmediateContext)

	dsDesc.Texture2D.MipSlice = 0;

	tinyobj::attrib_t attrib;

			{

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





		exit(1);

	m_pDepthStencilView = NULL;



			default:

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		&materials,



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点バッファ作成





	std::string imagePath = "hello.bmp";

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	std::vector<tinyobj::shape_t> shapes;

};



	XMFLOAT4X4 projection;

	vbDesc.MiscFlags = 0;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	Release();



	//Vertex* pVList = new Vertex[vcount];

	ConstantMatrixBuffer cmb;



		}

	if (FAILED(hr))

#include <iostream>

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	// Loop over shapes

	vector<Vertex> vertexlist;

		pVList[i] = vertexlist[i];

		return hr;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	//定数バッファ作成

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (FAILED(hr))



		return hr;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				// access to vertex



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	irData.pSysMem = &pIList[0];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Clean up our objects and quit



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	txDesc.MiscFlags = 0;



	std::vector<tinyobj::material_t> materials;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	scDesc.Windowed = TRUE;

	scDesc.Windowed = TRUE;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pDepthStencilView = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pPixelShader = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	if (FAILED(hr))

	m_pSampler = NULL;

			default:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	XMFLOAT4         eyePos;   //視点座標

		return 1;

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pIndexBuffer = NULL;

	scDesc.SampleDesc.Count = 1;

#define TINYOBJLOADER_IMPLEMENTATION

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}
		if (e.type == SDL_QUIT)

	{

	SDL_Quit();

		KEY_PRESS_SURFACE_TOTAL

			{

	auto& attrib = reader.GetAttrib();

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pTexture);

		&shapes,

struct ConstantMaterial {

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pVertexShader);

};





	m_pRenderTargetView = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_VertexCount = vcount;

	int     vcount = vertexlist.size();

	if (FAILED(hr))

	//頂点シェーダー生成

int main(int, char**)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	ibDesc.StructureByteStride = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

		if (!reader.Error().empty())

	delete[] pIList;

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	txDesc.MipLevels = 1;

	delete[] pIList;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))



		return hr;

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 projection;

	txDesc.SampleDesc.Count = 1;

	ID3D11Texture2D* pBackBuffer;



	ibDesc.CPUAccessFlags = 0;



	::ZeroMemory(&scDesc, sizeof(scDesc));



	D3D11_BUFFER_DESC vbDesc;

		KEY_PRESS_SURFACE_DEFAULT,

	SAFE_RELEASE(m_pLightBuffer);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		pVList[i] = vertexlist[i];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pDepthStencilTexture);

		SDL_RenderPresent(ren);

}

		exit(1);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//ピクセルシェーダー生成

		if (!reader.Error().empty())

	for (size_t s = 0; s < shapes.size(); s++)

	enum KeyPressSurfaces

	if (FAILED(hr))

		}

	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{



	auto& materials = reader.GetMaterials();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_DestroyRenderer(ren);



	}

	//定数バッファ作成

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	scDesc.OutputWindow = hwnd;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		pVList[i] = vertexlist[i];

#include <iostream>

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

int main(int, char**)

		KEY_PRESS_SURFACE_DEFAULT,

		if (e.type == SDL_QUIT)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_SUBRESOURCE_DATA vrData;

		SDL_RenderClear(ren);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&m_pImmediateContext);

struct ConstantMaterial {

		&materials,

	::ZeroMemory(&scDesc, sizeof(scDesc));

		exit(1);

	WORD* pIList = new WORD[icount];

		pLevels,

	irData.SysMemSlicePitch = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

		return hr;

	while (SDL_PollEvent(&e) != 0)

	// Loop over shapes

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		size_t index_offset = 0;

		// Loop over faces(polygon)

#ifdef _DEBUG

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pDepthStencilView);





	Release();

	scDesc.Windowed = TRUE;

		R"(cube.obj)");

		if (!ret)



		return hr;

	//vector<Vertex> vertex_t;







				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.MiscFlags = 0;

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	std::string error;



};

	UINT strides = sizeof(Vertex);



		KEY_PRESS_SURFACE_UP,

	DXGI_SWAP_CHAIN_DESC scDesc;

	irData.pSysMem = &pIList[0];





		}

	WORD   icount = indexList.size();

	tinyobj::attrib_t attrib;

	/*

	m_pSampler = NULL;

				break;



}

	SDL_DestroyRenderer(ren);

	}

	delete[] pVList;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_Viewport.MinDepth = 0.0f;

	D3D_FEATURE_LEVEL level;



	//First we need to start up SDL, and make sure it went ok

	tinyobj::ObjReaderConfig reader_config;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

			{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pSwapChain->Present(0, 0);

	SDL_Quit();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	pBackBuffer->Release();



			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	UINT flags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		return hr;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	ZeroMemory(&txDesc, sizeof(txDesc));



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	vrData.pSysMem = &pVList[0];

	m_pDepthStencilView = NULL;

	std::string error;

				// access to vertex

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pVertexShader = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Viewport.TopLeftY = 0;



		SDL_RenderPresent(ren);

		&scDesc,

	D3D11_BUFFER_DESC vbDesc;

#include <SDL.h>

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

CD3DTest::~CD3DTest()

			for (size_t v = 0; v < num_vertices; v++)

		delete[] pVList;

	D3D11_BUFFER_DESC ibDesc;

		{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pDevice);

}

	std::string inputfile = "test.obj";

	if (FAILED(hr))

	//深度ステンシルバッファ作成

			}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSampler = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (!error.empty())

	pBackBuffer->Release();

		return hr;

				tinyobj::real_t ty =

	m_pDevice = NULL;

}





	m_pInputLayout = NULL;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& attrib = reader.GetAttrib();

	//vector<Vertex> vertex_t;

	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

			{

	irData.SysMemSlicePitch = 0;

{





	tinyobj::ObjReaderConfig reader_config;

			case SDLK_LEFT:



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.Warning().empty())



	dsDesc.Texture2D.MipSlice = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		{

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pDevice);







				vertex.push_back(vertex_tmp);

	pBackBuffer->Release();

CD3DTest::CD3DTest()

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				indexlist.push_back(idx.vertex_index);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_DestroyWindow(win);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_pPixelShader = NULL;

	}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	WORD   icount = indexList.size();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pSwapChain);

	irData.SysMemPitch = 0;

{

	m_IndexCount = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}



			break;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



};



		size_t index_offset = 0;  // インデントのオフセット

	return 0;

		return hr;

	m_pIndexBuffer = NULL;

	vbDesc.CPUAccessFlags = 0;

	//頂点シェーダー生成

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				vertex.push_back(vertex_tmp);

#include <iostream>

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	{

		if (!reader.Error().empty())

	txDesc.Height = rect.Height();

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	SAFE_RELEASE(m_pPixelShader);

	cbDesc.MiscFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

		}





		&m_pImmediateContext);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

{

		D3D11_SDK_VERSION,

	vector<Vertex> vertexlist;

			case SDLK_UP:

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	/*

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.SampleDesc.Count = 1;



		&shapes,

	ibDesc.CPUAccessFlags = 0;

	m_pVertexBuffer = NULL;

	txDesc.SampleDesc.Quality = 0;

				indexlist.push_back(index);

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pSwapChain);

	//Create Index



	for (int j = 0; j < icount; j++)



	SAFE_RELEASE(m_pIndexBuffer);



		pIList[j] = indexList[j];

		KEY_PRESS_SURFACE_TOTAL

	for (int i = 0; i < 3; i++)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vector<Vertex> vertexlist;

	irData.pSysMem = &pIList[0];

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	while (SDL_PollEvent(&e) != 0)

	txDesc.MipLevels = 1;

struct ConstantMaterial {

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	//Key press surfaces constants

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	std::string imagePath = "hello.bmp";

	{

}
	m_pSwapChain->Present(0, 0);

	m_pSampler = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pPixelShader);

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		return hr;

	XMFLOAT4         eyePos;   //視点座標

};

	//頂点レイアウト作成



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	txDesc.Width = rect.Width();

		return hr;

}


		return hr;

		&level,

		return hr;



		delete[] pVList;

int main(int, char**)

	float    nearZ = 0.1f;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		1,

	{

	vector<WORD> indexList;



		exit(1);

#include <SDL.h>

			}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	std::string error;

};



	m_Viewport.MaxDepth = 1.0f;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//Clean up our objects and quit

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);



	SAFE_RELEASE(m_pDepthStencilView);

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				WORD index = idx.vertex_index;

		if (e.type == SDL_QUIT)

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMFLOAT4 pos;               //座標(x,y,z)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		{



	SAFE_RELEASE(m_pSampler);

		delete[] pVList;

				break;

	}





		SDL_RenderClear(ren);

		}



	DXGI_SWAP_CHAIN_DESC scDesc;

void CD3DTest::Release()

{



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext = NULL;

		flags,

			{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	m_VertexCount = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	int     vcount = vertexlist.size();

	for (int i = 0; i < vcount; i++)



	//頂点バッファ作成

			{

		SDL_RenderClear(ren);



	for (int i = 0; i < 3; i++)

#include <iostream>

		1,



	m_IndexCount = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };







	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Viewport.MinDepth = 0.0f;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_Angle += XMConvertToRadians(1.0f);

			case SDLK_DOWN:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	float    fov = XMConvertToRadians(20.0f);



	//頂点シェーダー生成

#include <SDL.h>







	m_VertexCount = 0;

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_Delay(1000);

		SDL_Delay(1000);

	vrData.SysMemSlicePitch = 0;

			default:

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pDevice = NULL;

	{

	return hr;

	m_pSampler = NULL;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pSwapChain = NULL;

		SDL_RenderClear(ren);

		return hr;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

int SEGMENT = 36;

#include <iostream>

		{





		return hr;

				break;

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	};

	{

	if (FAILED(hr))



			case SDLK_RIGHT:

		NULL,

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	{

	m_pRenderTargetView = NULL;

			}

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantLight    pntLight; //点光源

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<WORD> index_t;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				break;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		}



		//User requests quit

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		SDL_RenderClear(ren);



		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vbDesc.MiscFlags = 0;

	m_IndexCount = icount;

		if (!reader.Error().empty())

	m_pVertexShader = NULL;

		// Loop over faces(polygon)

	cbDesc.StructureByteStride = 0;



		return hr;



	std::vector<tinyobj::shape_t> shapes;

	tinyobj::ObjReaderConfig reader_config;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		size_t index_offset = 0;

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		delete[] pVList;





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



struct ConstantLight {

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pRenderTargetView);

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	//vector<Vertex> vertex_t;



	cbDesc.StructureByteStride = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

		pLevels,

struct ConstantMatrixBuffer {

	pBackBuffer->Release();

	m_Angle += XMConvertToRadians(1.0f);

		D3D_DRIVER_TYPE_HARDWARE,





	{

		flags,

}



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	std::vector<tinyobj::material_t> materials;

	m_VertexCount = vcount;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	m_pIndexBuffer = NULL;

		pIList[j] = indexList[j];

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pTextureView);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

/*

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pVertexBuffer = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#include <SDL.h>

			switch (e.key.keysym.sym)

	{

	m_pSwapChain->Present(0, 0);



		m_pImmediateContext->ClearState();

	scDesc.SampleDesc.Quality = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMFLOAT4 diffuse;           //拡散(r,g,b)



int SEGMENT = 36;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vrData.pSysMem = &pVList[0];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

{

	cbDesc.MiscFlags = 0;

	//定数バッファ作成

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	tinyobj::ObjReaderConfig reader_config;



	XMFLOAT4X4 view;

		}

		if (e.type == SDL_QUIT)

		return hr;

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			break;



		pIList[j] = indexList[j];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	::GetClientRect(hwnd, &rect);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		D3D11_SDK_VERSION,

	//Key press surfaces constants

	enum KeyPressSurfaces

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_Viewport.TopLeftX = 0;

	D3D11_BUFFER_DESC vbDesc;

	tinyobj::ObjReader reader;

CD3DTest::~CD3DTest()

			exit(1);

	Release();

		KEY_PRESS_SURFACE_TOTAL

	}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		exit(1);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	if (FAILED(hr))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.SampleDesc.Quality = 0;





	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	std::vector<tinyobj::material_t> materials;

	//vector<WORD> index_t;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		SDL_RenderCopy(ren, tex, NULL, NULL);



	WORD   icount = indexList.size();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



#ifdef _DEBUG

	if (FAILED(hr))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_RIGHT,



	}

	m_IndexCount = icount;

	m_pSampler = NULL;

				indexlist.push_back(index);





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{



		pLevels,



			// Loop over vertices in the face.

		//User requests quit



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

int main(int, char**)

		return hr;



	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

		{

	Vertex* pVList = new Vertex[vcount];

	{

	D3D11_BUFFER_DESC vbDesc;

int main(int, char**)

	{

	{

	m_pIndexBuffer = NULL;

	::GetClientRect(hwnd, &rect);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		&scDesc,

}

	if (FAILED(hr))



			exit(1);

};



	if (SDL_Init(SDL_INIT_VIDEO) != 0)





	}



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pInputLayout);

	};





	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    farZ = 100.0f;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pRenderTargetView);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pPixelShader = NULL;



	int     vcount = vertexlist.size();



	scDesc.SampleDesc.Count = 1;

	dsDesc.Texture2D.MipSlice = 0;



	m_pSwapChain = NULL;

		return hr;

	m_pVertexShader = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

{

		return hr;

};

	m_Viewport.TopLeftX = 0;

	SDL_Quit();

	tinyobj::attrib_t attrib;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pTextureView);

		&level,

	vrData.SysMemPitch = 0;

		{

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ibDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			}

		{

	if (FAILED(hr))

		return hr;

				tinyobj::real_t tx =

	{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.StructureByteStride = 0;



		return hr;



		R"(cube.obj)");

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			case SDLK_DOWN:

			for (size_t v = 0; v < num_vertices; v++)

	m_VertexCount = 0;

	for (const auto& shape : shapes)

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderClear(ren);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



			for (size_t v = 0; v < fv; v++)

	Release();







	ibDesc.Usage = D3D11_USAGE_DEFAULT;





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		KEY_PRESS_SURFACE_UP,



}

	SDL_Quit();

	ConstantMatrixBuffer cmb;



	}



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

	//Create Index

/*

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		//User presses a key

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

HRESULT CD3DTest::Create(HWND hwnd)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4         ambient;  //環境光(r,g,b)

using std::cout; using std::endl;

		}





	m_Viewport.TopLeftY = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	//First we need to start up SDL, and make sure it went ok

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 specular;          //反射(r,g,b)

			for (size_t v = 0; v < num_vertices; v++)



	auto& attrib = reader.GetAttrib();



	CRect                rect;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	irData.pSysMem = &pIList[0];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))

struct ConstantMatrixBuffer {

}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	vrData.SysMemPitch = 0;

	return 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	//定数バッファ作成

		pIList[j] = indexList[j];

			}

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pMatrixBuffer);

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;







	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		delete[] pIList;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	XMFLOAT4 pos;               //座標(x,y,z)

	{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&scDesc,



	if (FAILED(hr))

	XMFLOAT4X4 projection;

				WORD index = idx.vertex_index;

		//User presses a key

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//Vertex* pVList = new Vertex[vcount];

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		}



	m_Viewport.TopLeftY = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	for (size_t s = 0; s < shapes.size(); s++)

	SDL_DestroyRenderer(ren);





			{





	}



		//User presses a key

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_Viewport.TopLeftX = 0;

		}

	{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

{





	std::string error;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pTexture = NULL;

		&materials,

	SAFE_RELEASE(m_pVertexShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.Windowed = TRUE;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	if (!error.empty())

			for (size_t v = 0; v < fv; v++)

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pSampler);

#include <iostream>

void CD3DTest::Release()

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4X4 view;



	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_IndexCount = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))



	//定数バッファ作成

	m_Viewport.Height = (FLOAT)rect.Height();

		{

	dsDesc.Format = txDesc.Format;

	}

	//定数バッファ作成

				WORD index = idx.vertex_index;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//Clean up our objects and quit

		//User presses a key

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				// access to vertex









	//ビューポート設定

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];







	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	return;

#include "DirectXManager.h"



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	float    farZ = 100.0f;

	XMFLOAT4 pos;               //座標(x,y,z)

		KEY_PRESS_SURFACE_LEFT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	delete[] pIList;



		{

HRESULT CD3DTest::Create(HWND hwnd)



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			case SDLK_UP:

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点レイアウト作成

		SDL_RenderClear(ren);



	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				break;

	}



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;

		SDL_RenderPresent(ren);

{

	UINT strides = sizeof(Vertex);

		KEY_PRESS_SURFACE_RIGHT,

{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);





		if (!reader.Error().empty())

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_VertexCount = vcount;

		return hr;

	std::string inputfile = "test.obj";

	auto& materials = reader.GetMaterials();



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			for (size_t v = 0; v < num_vertices; v++)

	WORD* pIList = new WORD[icount];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		{

			index_offset += fv;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pLightBuffer);



	vector<WORD> indexList;

		SDL_RenderCopy(ren, tex, NULL, NULL);





	{

	}

	std::string error;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.Height = (FLOAT)rect.Height();

	float    nearZ = 0.1f;

	if (FAILED(hr))

	{

	enum KeyPressSurfaces

#include "DirectXManager.h"

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	//Create Index



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	//頂点レイアウト作成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

int SEGMENT = 36;

CD3DTest::~CD3DTest()

using std::cout; using std::endl;

		SDL_RenderPresent(ren);

	delete[] pIList;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				// access to vertex

	SAFE_RELEASE(m_pImmediateContext);

 */

};

#include "DirectXManager.h"



	while (SDL_PollEvent(&e) != 0)

		&materials,





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.CPUAccessFlags = 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//頂点シェーダー生成

	D3D11_SAMPLER_DESC smpDesc;

	irData.SysMemSlicePitch = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pLightBuffer = NULL;

	}

	return 0;

	ConstantMaterial material; //物体の質感

	m_pVertexBuffer = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDepthStencilTexture = NULL;

	m_pDevice = NULL;

	txDesc.Height = rect.Height();

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		D3D_DRIVER_TYPE_HARDWARE,





	{

	scDesc.OutputWindow = hwnd;



		cout << "SDL_INIT_ERROR" << endl;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	pBackBuffer->Release();

	};



	SAFE_RELEASE(m_pRenderTargetView);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ConstantMaterial material; //物体の質感



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

			//Select surfaces based on key press



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include <SDL.h>

	//インデックスバッファ作成

	XMFLOAT4         ambient;  //環境光(r,g,b)

	};

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	{

			case SDLK_UP:

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	}

		{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	for (const auto& shape : shapes)

}

	if (FAILED(hr))



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				indexlist.push_back(idx.vertex_index);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pSwapChain);

				WORD index = idx.vertex_index;

	{

int main(int, char**)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		exit(1);

	txDesc.ArraySize = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

CD3DTest::CD3DTest()

	scDesc.BufferDesc.Width = rect.Width();



			// Loop over vertices in the face.

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	txDesc.Width = rect.Width();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		return 1;

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		if (!ret)





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	LoadObj(vertexlist, indexList);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (m_pImmediateContext)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_IndexCount = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ZeroMemory(&txDesc, sizeof(txDesc));





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (!ret)

	m_IndexCount = 0;

	txDesc.SampleDesc.Quality = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_BUFFER_DESC vbDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		KEY_PRESS_SURFACE_DOWN,

	tinyobj::ObjReaderConfig reader_config;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_VertexCount = vcount;

	ConstantMatrixBuffer cmb;





	Release();

		KEY_PRESS_SURFACE_DEFAULT,



	SAFE_RELEASE(m_pDevice);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		NULL,

			//Select surfaces based on key press



		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4X4 view;



		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

		return hr;

	vbDesc.CPUAccessFlags = 0;

	};

				WORD index = idx.vertex_index;

	txDesc.SampleDesc.Count = 1;

		return hr;

	// Loop over shapes

int SEGMENT = 36;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&m_pImmediateContext);

	m_pVertexShader = NULL;





	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

				break;

	m_pImmediateContext = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	std::string imagePath = "hello.bmp";

			//Select surfaces based on key press

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	auto& attrib = reader.GetAttrib();



{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



				tinyobj::real_t tx =

		if (e.type == SDL_QUIT)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_Viewport.MaxDepth = 1.0f;

			case SDLK_UP:

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

			exit(1);

	irData.pSysMem = &pIList[0];

		return hr;

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pVertexBuffer);

	//vector<WORD> index_t;

	vector<Vertex> vertexlist;

	if (m_pImmediateContext)



}
	{





	m_pTextureView = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

#include "DirectXManager.h"

			case SDLK_UP:

}



	for (size_t s = 0; s < shapes.size(); s++)

	m_pVertexShader = NULL;

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

}

			exit(1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

#include <iostream>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{



	D3D11_SUBRESOURCE_DATA vrData;

		//User requests quit

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

	std::vector<tinyobj::material_t> materials;



	cbDesc.StructureByteStride = 0;

	vrData.pSysMem = &pVList[0];



	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pPixelShader);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	UINT offsets = 0;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		return hr;



	std::vector<tinyobj::shape_t> shapes;

int main(int, char**)

	m_pInputLayout = NULL;

	//First we need to start up SDL, and make sure it went ok



	m_pIndexBuffer = NULL;

	SDL_DestroyTexture(tex);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



void CD3DTest::Release()

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			}

		if (e.type == SDL_QUIT)



		delete[] pVList;

#define TINYOBJLOADER_IMPLEMENTATION



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{



};



	XMFLOAT4X4 projection;



{

struct ConstantLightBuffer {

	D3D11_BUFFER_DESC vbDesc;



	m_Viewport.TopLeftY = 0;

	//頂点レイアウト作成

	dsDesc.Format = txDesc.Format;

{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D_FEATURE_LEVEL level;

	Release();



			{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				WORD index = idx.vertex_index;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_LEFT,

			}

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))



		return hr;

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	pBackBuffer->Release();

	//ピクセルシェーダー生成



	if (FAILED(hr))

#endif

	float    farZ = 100.0f;

	{

		D3D11_SDK_VERSION,

	{

#ifdef _DEBUG





	Vertex* pVList = new Vertex[vcount];



		if (!reader.Error().empty())

	D3D11_BUFFER_DESC ibDesc;

	//Clean up our objects and quit

struct ConstantLightBuffer {

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			case SDLK_RIGHT:

	scDesc.BufferDesc.Width = rect.Width();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC cbDesc;



	m_Viewport.Height = (FLOAT)rect.Height();

		{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		&scDesc,

			exit(1);

	for (int i = 0; i < 3; i++)

};

	D3D11_TEXTURE2D_DESC txDesc;

	CRect                rect;

			{

		return hr;



		}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	vbDesc.StructureByteStride = 0;

		}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	return 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

{

	XMStoreFloat4(&clb.eyePos, eye);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4         ambient;  //環境光(r,g,b)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		}

}

	SDL_Event e;



	m_Viewport.Width = (FLOAT)rect.Width();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			break;



	cbDesc.StructureByteStride = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//テクスチャ読み込み

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	auto& materials = reader.GetMaterials();



struct ConstantMatrixBuffer {

				WORD index = idx.vertex_index;



			index_offset += fv;

	SAFE_RELEASE(m_pTexture);

		return hr;

	m_IndexCount = icount;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		SDL_Delay(1000);

	//頂点バッファ作成

#endif

}

			case SDLK_DOWN:



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&m_pDevice,

	::ZeroMemory(&scDesc, sizeof(scDesc));



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	if (FAILED(hr))

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

				break;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		D3D11_SDK_VERSION,

	UINT flags = 0;

{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

int main(int, char**)

	}*/



{

				indexlist.push_back(index);



		SDL_RenderPresent(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	int     vcount = vertexlist.size();

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	}

	};

	//Vertex* pVList = new Vertex[vcount];

	m_pPixelShader = NULL;



	cbDesc.CPUAccessFlags = 0;

			break;



	vector<WORD> indexList;





	SAFE_RELEASE(m_pImmediateContext);

	vector<Vertex> vertexlist;

	UINT strides = sizeof(Vertex);

		return hr;

			// Loop over vertices in the face.

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				// access to vertex

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	delete[] pIList;

	//vector<WORD> index_t;





	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pVertexBuffer);

	vbDesc.MiscFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

	//頂点バッファ作成

		delete[] pVList;

	vrData.pSysMem = &pVList[0];

	}

	SDL_FreeSurface(suf);

}



		return hr;

		}

#include <SDL.h>

	ZeroMemory(&txDesc, sizeof(txDesc));

{

	//Vertex* pVList = new Vertex[vcount];

		&level,







	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				// access to vertex



	//テクスチャ読み込み

	ibDesc.CPUAccessFlags = 0;

#ifdef _DEBUG



			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pTextureView = NULL;

	vbDesc.StructureByteStride = 0;

	SDL_Quit();

			// Loop over vertices in the face.

	// Loop over shapes

	UINT strides = sizeof(Vertex);

	for (int i = 0; i < vcount; i++)

	return hr;

{

	reader_config.mtl_search_path = "./"; // Path to material files



		SDL_RenderPresent(ren);

	//ピクセルシェーダー生成





	m_Viewport.MinDepth = 0.0f;

}

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

void CD3DTest::Render()

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}



		&error,

		&m_pSwapChain,

				// access to vertex



	ConstantMaterial material; //物体の質感

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	std::vector<tinyobj::material_t> materials;

	/*

	};

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferCount = 1;

		cout << "SDL_INIT_ERROR" << endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_DestroyTexture(tex);

	txDesc.CPUAccessFlags = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		}



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}
	DXGI_SWAP_CHAIN_DESC scDesc;



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	CRect                rect;

	txDesc.ArraySize = 1;



			default:

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMFLOAT4X4 view;

			switch (e.key.keysym.sym)

{

#ifdef _DEBUG

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	SDL_Quit();

{

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}



	{

}

	//First we need to start up SDL, and make sure it went ok

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		SDL_Delay(1000);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftX = 0;

{

	SDL_Event e;

	{

/*

				tinyobj::real_t tx =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			int num_vertices = shape.mesh.num_face_vertices[f];

	//テクスチャ読み込み





	if (FAILED(hr))





			case SDLK_UP:

	//テクスチャ読み込み



	//インデックスバッファ作成

				tinyobj::real_t ty =

	scDesc.Windowed = TRUE;

	return 0;



	m_pDepthStencilView = NULL;

};



	{

	SAFE_RELEASE(m_pTexture);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

	m_Viewport.MinDepth = 0.0f;

		&materials,

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_UP,

		return hr;



	/*

	SAFE_RELEASE(m_pRenderTargetView);

	std::vector<tinyobj::shape_t> shapes;

		}

		return hr;

	txDesc.CPUAccessFlags = 0;



			}

	m_IndexCount = icount;

	scDesc.SampleDesc.Quality = 0;

	std::vector<tinyobj::material_t> materials;



		return hr;

	std::vector<tinyobj::material_t> materials;



	//ピクセルシェーダー生成

	D3D11_SUBRESOURCE_DATA vrData;

	m_Viewport.TopLeftX = 0;

	D3D11_SUBRESOURCE_DATA vrData;

	}

	{

	SAFE_RELEASE(m_pLightBuffer);



	m_pSwapChain = NULL;

	while (SDL_PollEvent(&e) != 0)

			// Loop over vertices in the face.

	if (FAILED(hr))

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



			exit(1);

	ConstantMatrixBuffer cmb;

	ibDesc.StructureByteStride = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	UINT offsets = 0;

			index_offset += num_vertices;

};

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



/*

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		D3D11_SDK_VERSION,

	}

		SDL_RenderClear(ren);



		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pMatrixBuffer);

 * Lesson 1: Hello World!

	delete[] pVList;

			for (size_t v = 0; v < num_vertices; v++)

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

	SAFE_RELEASE(m_pDepthStencilTexture);

	Release();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	irData.SysMemSlicePitch = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		return hr;

	if (FAILED(hr))



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//テクスチャ読み込み

	if (m_pImmediateContext)

	SDL_Event e;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		if (!reader.Error().empty())

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				WORD index = idx.vertex_index;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pSwapChain);

{

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pPixelShader = NULL;

 */

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}

	m_pVertexShader = NULL;

	SDL_DestroyTexture(tex);

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4X4 view;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{

	for (int i = 0; i < 3; i++)

		pIList[j] = indexList[j];

		flags,

	scDesc.BufferCount = 1;



	//インデックスバッファ作成

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			//Select surfaces based on key press

	SDL_FreeSurface(bmp);

		m_pImmediateContext->ClearState();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

	//頂点レイアウト作成



	/*

		delete[] pIList;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



			case SDLK_UP:

	SAFE_RELEASE(m_pInputLayout);

		D3D_DRIVER_TYPE_HARDWARE,

	}

	auto& shapes = reader.GetShapes();

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		if (!reader.Error().empty())

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	float    farZ = 100.0f;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		SDL_RenderPresent(ren);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	{



		if (!reader.Error().empty())

	std::string inputfile = "test.obj";

	auto& attrib = reader.GetAttrib();

	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

	{

		delete[] pIList;

		pVList[i] = vertexlist[i];

	delete[] pIList;

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				break;



struct ConstantMatrixBuffer {

	while (SDL_PollEvent(&e) != 0)

	txDesc.CPUAccessFlags = 0;

	SDL_Quit();

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	ConstantLightBuffer clb;

		KEY_PRESS_SURFACE_DEFAULT,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

void CD3DTest::Release()

}

	ConstantMatrixBuffer cmb;

struct ConstantLight {

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

int SEGMENT = 36;

	{

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

int main(int, char**)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

}
	//頂点シェーダー生成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	std::vector<tinyobj::material_t> materials;

		return hr;

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4X4 projection;

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pTexture);

		return hr;

	cbDesc.CPUAccessFlags = 0;

	dsDesc.Format = txDesc.Format;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyTexture(tex);







	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		SDL_RenderCopy(ren, tex, NULL, NULL);

 */

	m_pRenderTargetView = NULL;

		return hr;

{

	SDL_DestroyWindow(win);



	}*/

	SDL_Quit();

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_TOTAL

		cout << "SDL_INIT_ERROR" << endl;

	m_IndexCount = icount;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pSwapChain->Present(0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



		KEY_PRESS_SURFACE_DOWN,

	UINT flags = 0;

	return hr;

		&m_pSwapChain,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ConstantMaterial material; //物体の質感

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (m_pImmediateContext)

	}

	vbDesc.MiscFlags = 0;

	{

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

			}

	for (const auto& shape : shapes)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

};

	m_pInputLayout = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	ibDesc.StructureByteStride = 0;



	ZeroMemory(&dsDesc, sizeof(dsDesc));



		if (e.type == SDL_QUIT)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				vertex.push_back(vertex_tmp);



	txDesc.ArraySize = 1;

	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pDepthStencilTexture);

		{

		}

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

	HRESULT              hr;

	return 0;





	if (SDL_Init(SDL_INIT_VIDEO != 0))

	{

		pVList[i] = vertexlist[i];



		delete[] pIList;

	Release();

			case SDLK_UP:

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



			for (size_t v = 0; v < num_vertices; v++)

	m_pSwapChain->Present(0, 0);

	scDesc.BufferDesc.Height = rect.Height();

		D3D_DRIVER_TYPE_HARDWARE,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		}



	vbDesc.CPUAccessFlags = 0;

		return hr;



	txDesc.Width = rect.Width();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.Width = rect.Width();



HRESULT CD3DTest::Create(HWND hwnd)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		if (e.type == SDL_QUIT)



	D3D11_BUFFER_DESC vbDesc;

	/*

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		KEY_PRESS_SURFACE_DOWN,

	}

			case SDLK_UP:

	m_pIndexBuffer = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		R"(cube.obj)");

	ConstantLightBuffer clb;

		&m_pDevice,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_VertexCount = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pRenderTargetView = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	txDesc.SampleDesc.Count = 1;

		pVList[i] = vertexlist[i];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	return 0;



	auto& materials = reader.GetMaterials();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	scDesc.BufferDesc.Height = rect.Height();

				indexlist.push_back(idx.vertex_index);



			break;

	{

	m_pLightBuffer = NULL;

	::GetClientRect(hwnd, &rect);





				WORD index = idx.vertex_index;

		return hr;

	::GetClientRect(hwnd, &rect);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Event e;

		KEY_PRESS_SURFACE_LEFT,

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		return hr;

			for (size_t v = 0; v < fv; v++)





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_VertexCount = vcount;

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		NULL,

{



	m_Viewport.Width = (FLOAT)rect.Width();

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

		}

				break;

};



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



				vertex.push_back(vertex_tmp);

		}

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	m_pLightBuffer = NULL;

		//User presses a key

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

int SEGMENT = 36;

		pVList[i] = vertexlist[i];



	XMStoreFloat4(&clb.ambient, lightAmbient);

{

		D3D_DRIVER_TYPE_HARDWARE,



	txDesc.CPUAccessFlags = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		{

	auto& attrib = reader.GetAttrib();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4X4 view;

		&m_pSwapChain,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pDepthStencilTexture = NULL;



				break;

{

	if (!reader.ParseFromFile(inputfile, reader_config))

	reader_config.mtl_search_path = "./"; // Path to material files

	if (!reader.Warning().empty())

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.SampleDesc.Quality = 0;

	tinyobj::attrib_t attrib;

#endif

			break;

	//インデックスバッファ作成

	enum KeyPressSurfaces

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		//User requests quit

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	Release();

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	for (int j = 0; j < icount; j++)

	scDesc.BufferCount = 1;

	cbDesc.MiscFlags = 0;

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_UP,



	txDesc.SampleDesc.Quality = 0;

				vertex.push_back(vertex_tmp);

		}

 * Lesson 1: Hello World!

	txDesc.Width = rect.Width();







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



			case SDLK_RIGHT:

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::string imagePath = "hello.bmp";

struct ConstantLightBuffer {

			switch (e.key.keysym.sym)

		NULL,

	SAFE_RELEASE(m_pLightBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	dsDesc.Texture2D.MipSlice = 0;

		&m_pImmediateContext);

	m_pDepthStencilTexture = NULL;

		KEY_PRESS_SURFACE_RIGHT,

		if (!ret)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//ビューポート設定



			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	ibDesc.MiscFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	m_pLightBuffer = NULL;



			index_offset += fv;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ConstantLightBuffer clb;

{

	m_pSwapChain = NULL;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_DestroyTexture(tex);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			case SDLK_LEFT:

	auto& attrib = reader.GetAttrib();

	float    farZ = 100.0f;

		return hr;

	}

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_SUBRESOURCE_DATA irData;

	LoadObj(vertexlist, indexList);

		}

	vector<WORD> indexList;





CD3DTest::~CD3DTest()

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//Vertex* pVList = new Vertex[vcount];

			index_offset += num_vertices;

	scDesc.OutputWindow = hwnd;

		pIList[j] = indexList[j];

	D3D11_SUBRESOURCE_DATA vrData;



		return 1;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	//ビューポート設定



}

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		{



	UINT strides = sizeof(Vertex);

		&m_pDevice,

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

	scDesc.BufferDesc.Width = rect.Width();

	txDesc.CPUAccessFlags = 0;

		&scDesc,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	irData.SysMemSlicePitch = 0;

	WORD* pIList = new WORD[icount];

		return hr;

				vertex.push_back(vertex_tmp);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	tinyobj::attrib_t attrib;

	m_pSampler = NULL;

	//頂点バッファ作成

	ID3D11Texture2D* pBackBuffer;

		m_pImmediateContext->ClearState();



		return hr;

	LoadObj(vertexlist, indexList);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(suf);

	m_pIndexBuffer = NULL;

	tinyobj::ObjReaderConfig reader_config;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	//Create Index



	SDL_DestroyTexture(tex);

	{

		}

	vector<WORD> indexList;

				WORD index = idx.vertex_index;



	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		{

	UINT offsets = 0;

		delete[] pVList;

	std::string imagePath = "hello.bmp";

	SAFE_RELEASE(m_pDepthStencilView);



				vertex.push_back(vertex_tmp);

	XMStoreFloat4(&clb.eyePos, eye);



	vbDesc.MiscFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//頂点バッファ作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		return hr;

	SDL_DestroyWindow(win);

				break;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);







	WORD   icount = indexList.size();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

{



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

#ifdef _DEBUG

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		SDL_Delay(1000);





	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			{

	//頂点レイアウト作成

	m_pMatrixBuffer = NULL;

			//Select surfaces based on key press

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

};

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	ConstantLightBuffer clb;

	m_Viewport.Width = (FLOAT)rect.Width();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			}

	XMFLOAT4 pos;               //座標(x,y,z)

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyWindow(win);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		{

	return 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	bool ret = tinyobj::LoadObj(

	//深度ステンシルバッファ作成

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_Delay(1000);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

}

}

	if (FAILED(hr))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		KEY_PRESS_SURFACE_DEFAULT,

	ID3D11Texture2D* pBackBuffer;

	UINT strides = sizeof(Vertex);

	{

};

	scDesc.BufferCount = 1;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



CD3DTest::CD3DTest()

	scDesc.Windowed = TRUE;

			{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.Width = rect.Width();



		//User requests quit





}

	irData.SysMemPitch = 0;



	SDL_FreeSurface(bmp);

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	std::string inputfile = "test.obj";

		&m_pDevice,

	SDL_Quit();

int SEGMENT = 36;

		else if (e.type == SDL_KEYDOWN)

				break;

	}

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_IndexCount = icount;

	SDL_FreeSurface(bmp);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	bool ret = tinyobj::LoadObj(

	return;

		&error,

			}



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (!error.empty())

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pPixelShader = NULL;

		&m_pImmediateContext);

		{

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.eyePos, eye);

	D3D11_BUFFER_DESC ibDesc;

	irData.SysMemSlicePitch = 0;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pIndexBuffer);

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_FreeSurface(bmp);

	//vector<WORD> index_t;

	XMFLOAT4X4 projection;

		{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		size_t index_offset = 0;

	vrData.pSysMem = &pVList[0];

	vbDesc.StructureByteStride = 0;









#include "DirectXManager.h"

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pVertexBuffer);

	return;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.BufferCount = 1;

	cbDesc.MiscFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_Quit();

	Vertex* pVList = new Vertex[vcount];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	if (FAILED(hr))



			}





	}

	//Create Index

	ibDesc.StructureByteStride = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//定数バッファ作成

	UINT flags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



	txDesc.Width = rect.Width();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			for (size_t v = 0; v < fv; v++)

void CD3DTest::Render()



		//User presses a key





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	ConstantMaterial material; //物体の質感

	int     vcount = vertexlist.size();

		delete[] pIList;

	cbDesc.StructureByteStride = 0;

		// Loop over faces(polygon)

	D3D11_SAMPLER_DESC smpDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		&level,

			case SDLK_UP:



		SDL_Delay(1000);

	scDesc.BufferDesc.Width = rect.Width();



	// Loop over shapes

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

struct ConstantMaterial {

	cbDesc.CPUAccessFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

/*

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];





	irData.SysMemPitch = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

{



	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			break;

	}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	HRESULT              hr;



	m_pTextureView = NULL;

	txDesc.MipLevels = 1;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pTexture = NULL;

	m_pTextureView = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

		//User presses a key



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_BUFFER_DESC vbDesc;

	ConstantMaterial material; //物体の質感

	}

	//vector<WORD> index_t;

};

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	std::string error;

	Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.eyePos, eye);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	float    farZ = 100.0f;



	D3D11_BUFFER_DESC ibDesc;

#include <iostream>

	vrData.SysMemPitch = 0;

	vrData.pSysMem = &pVList[0];

	scDesc.Windowed = TRUE;

	irData.SysMemSlicePitch = 0;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				WORD index = idx.vertex_index;

	//テクスチャ読み込み



			case SDLK_LEFT:

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_Delay(1000);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	//Create Index







using std::cout; using std::endl;

	SDL_DestroyTexture(tex);

	m_pVertexBuffer = NULL;

 * Lesson 1: Hello World!

	if (FAILED(hr))

	//深度ステンシルバッファ作成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	int     vcount = vertexlist.size();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	}


