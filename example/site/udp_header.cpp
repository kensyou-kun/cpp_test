	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}

				break;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	return 0;

	irData.pSysMem = &pIList[0];

			index_offset += fv;

			case SDLK_UP:

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderPresent(ren);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			break;

	}



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}

	{

	}

	D3D11_BUFFER_DESC ibDesc;



	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	for (size_t s = 0; s < shapes.size(); s++)



	m_Viewport.TopLeftY = 0;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	dsDesc.Texture2D.MipSlice = 0;

				WORD index = idx.vertex_index;

{

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#define TINYOBJLOADER_IMPLEMENTATION

	};



		m_pImmediateContext->ClearState();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

}

	std::vector<tinyobj::shape_t> shapes;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyWindow(win);



	txDesc.MipLevels = 1;



	D3D11_SUBRESOURCE_DATA irData;





		1,

	cbDesc.MiscFlags = 0;



	tinyobj::attrib_t attrib;

	txDesc.ArraySize = 1;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



void CD3DTest::Release()



			case SDLK_UP:



	//ピクセルシェーダー生成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		&attrib,

int main(int, char**)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ZeroMemory(&dsDesc, sizeof(dsDesc));

			switch (e.key.keysym.sym)

			case SDLK_DOWN:

		SDL_RenderCopy(ren, tex, NULL, NULL);

	delete[] pIList;

	txDesc.ArraySize = 1;

	if (FAILED(hr))

		}

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

			switch (e.key.keysym.sym)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	cbDesc.MiscFlags = 0;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	DXGI_SWAP_CHAIN_DESC scDesc;

void CD3DTest::Render()

	SAFE_RELEASE(m_pLightBuffer);

	};



int main(int, char**)

		}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	ibDesc.MiscFlags = 0;

	}

		SDL_RenderPresent(ren);

	enum KeyPressSurfaces

	auto& attrib = reader.GetAttrib();

		&m_pImmediateContext);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;







	irData.pSysMem = &pIList[0];

	::GetClientRect(hwnd, &rect);



	WORD   icount = indexList.size();



struct ConstantMatrixBuffer {

	dsDesc.Format = txDesc.Format;



		SDL_RenderCopy(ren, tex, NULL, NULL);

struct ConstantLightBuffer {





	ZeroMemory(&txDesc, sizeof(txDesc));



	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))



	XMFLOAT4 ambient;           //環境(r,g,b)

	UINT offsets = 0;

	{



	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	//頂点レイアウト作成

		}

			exit(1);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		m_pImmediateContext->ClearState();

	ID3D11Texture2D* pBackBuffer;





};

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		1,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



		1,

	CRect                rect;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//頂点レイアウト作成

	UINT flags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		if (e.type == SDL_QUIT)

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



{

	ibDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		{

	for (int i = 0; i < vcount; i++)



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.Windowed = TRUE;

	}*/

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	Release();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	std::vector<tinyobj::material_t> materials;

		SDL_RenderPresent(ren);

	SDL_FreeSurface(bmp);

	m_Viewport.MaxDepth = 1.0f;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	XMFLOAT4X4 view;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		{

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

	D3D11_BUFFER_DESC cbDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		m_pImmediateContext->ClearState();

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

void CD3DTest::Render()

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				// access to vertex

	D3D11_SUBRESOURCE_DATA irData;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

		SDL_Delay(1000);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	D3D11_SUBRESOURCE_DATA vrData;



	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);





	SAFE_RELEASE(m_pDepthStencilTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

struct ConstantLight {

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	vbDesc.CPUAccessFlags = 0;





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pSwapChain);

#endif

	// Loop over shapes

		return hr;

struct ConstantLight {

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;









{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pDepthStencilTexture = NULL;

	tinyobj::ObjReader reader;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	delete[] pIList;

				WORD index = idx.vertex_index;

	m_IndexCount = icount;

	vrData.SysMemSlicePitch = 0;

	for (int i = 0; i < vcount; i++)

	scDesc.OutputWindow = hwnd;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	m_IndexCount = 0;

	UINT flags = 0;

	m_Angle += XMConvertToRadians(1.0f);

	//Vertex* pVList = new Vertex[vcount];

	txDesc.SampleDesc.Quality = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	for (size_t s = 0; s < shapes.size(); s++)

				break;



	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

struct ConstantLightBuffer {

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	tinyobj::attrib_t attrib;

	cbDesc.StructureByteStride = 0;

		pLevels,

		if (e.type == SDL_QUIT)





				// access to vertex

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	XMFLOAT4X4 view;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

		size_t index_offset = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

 */

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pInputLayout = NULL;

	Release();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		&attrib,



		if (!reader.Error().empty())

	dsDesc.Format = txDesc.Format;

}

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	bool ret = tinyobj::LoadObj(

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		{



	if (!reader.Warning().empty())

	tinyobj::attrib_t attrib;

	HRESULT              hr;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_IndexCount = icount;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t tx =

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		return hr;

	for (int i = 0; i < vcount; i++)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



{

	m_pRenderTargetView = NULL;

			case SDLK_RIGHT:

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#endif

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderPresent(ren);

	if (FAILED(hr))



	//インデックスバッファ作成

		// Loop over faces(polygon)

	vector<Vertex> vertexlist;

	D3D11_BUFFER_DESC ibDesc;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





		SDL_RenderClear(ren);



	txDesc.MipLevels = 1;

	vector<WORD> indexList;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

			//Select surfaces based on key press

		m_pImmediateContext->ClearState();

		{

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_DestroyRenderer(ren);

	std::vector<tinyobj::material_t> materials;

{

	ibDesc.MiscFlags = 0;

	txDesc.MiscFlags = 0;

	while (SDL_PollEvent(&e) != 0)



	float    farZ = 100.0f;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.Width = rect.Width();

		return hr;

{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_DestroyTexture(tex);



int main(int, char**)

	for (size_t s = 0; s < shapes.size(); s++)





	scDesc.BufferDesc.Width = rect.Width();

#ifdef _DEBUG

		return hr;



	m_IndexCount = icount;

		return hr;

	{

}

		&level,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Quit();

	if (FAILED(hr))



	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);





				WORD index = idx.vertex_index;

		KEY_PRESS_SURFACE_TOTAL

		return hr;

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pRenderTargetView);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.CPUAccessFlags = 0;

		&error,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		//User presses a key

		//User presses a key

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pIndexBuffer);

	}

#include <iostream>

	m_pSwapChain = NULL;





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_IndexCount = 0;

	m_pDevice = NULL;



	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

	//インデックスバッファ作成

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

};

 * Lesson 1: Hello World!







				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	}

				// access to vertex

	/*

	ConstantMatrixBuffer cmb;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		}



			int num_vertices = shape.mesh.num_face_vertices[f];

			index_offset += fv;

	m_IndexCount = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

{

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pSwapChain);

	{

		{

	}

		}

		return hr;

	SDL_Quit();

	SDL_Quit();

		SDL_RenderPresent(ren);



			// Loop over vertices in the face.

			for (size_t v = 0; v < fv; v++)

	scDesc.BufferDesc.Width = rect.Width();

		R"(cube.obj)");

		}

				WORD index = idx.vertex_index;

	txDesc.SampleDesc.Quality = 0;

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

	SAFE_RELEASE(m_pPixelShader);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		return hr;

	SAFE_RELEASE(m_pPixelShader);

		&shapes,

	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantLight {

				indexlist.push_back(index);

	std::vector<tinyobj::shape_t> shapes;





	while (SDL_PollEvent(&e) != 0)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	UINT offsets = 0;

				break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			// Loop over vertices in the face.

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	return;

	auto& attrib = reader.GetAttrib();

			break;

	UINT flags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





		}

	txDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<Vertex> vertexlist;

	D3D_FEATURE_LEVEL level;

	{



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		D3D11_SDK_VERSION,

	tinyobj::ObjReader reader;

		D3D_DRIVER_TYPE_HARDWARE,



}

	SAFE_RELEASE(m_pSampler);

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	m_pVertexBuffer = NULL;



		if (!reader.Error().empty())

	m_pRenderTargetView = NULL;



				vertex.push_back(vertex_tmp);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;



		cout << "SDL_INIT_ERROR" << endl;

	m_pTexture = NULL;

	// Loop over shapes



	for (int i = 0; i < vcount; i++)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.ArraySize = 1;

		}

	if (FAILED(hr))



#include <iostream>

	if (!error.empty())

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

	vector<WORD> indexList;



	delete[] pVList;

		return hr;

	HRESULT              hr;

	HRESULT              hr;

	SAFE_RELEASE(m_pDevice);

		&attrib,

	m_IndexCount = icount;

	vbDesc.MiscFlags = 0;

struct ConstantLightBuffer {

	for (int i = 0; i < 3; i++)

	cbDesc.CPUAccessFlags = 0;



			}

			int num_vertices = shape.mesh.num_face_vertices[f];





			break;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pDepthStencilView);

}



		KEY_PRESS_SURFACE_LEFT,



	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				// access to vertex

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext = NULL;

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.SampleDesc.Count = 1;

	/*

	//Create Index

	txDesc.MipLevels = 1;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	ibDesc.CPUAccessFlags = 0;

		m_pImmediateContext->ClearState();

	{

	m_pRenderTargetView = NULL;

	Release();

	txDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{

int main(int, char**)

	SAFE_RELEASE(m_pMatrixBuffer);



	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))



	}



			index_offset += fv;

	vector<WORD> indexList;



	delete[] pVList;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pVertexShader = NULL;

	SDL_DestroyTexture(tex);

		size_t index_offset = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	tinyobj::ObjReaderConfig reader_config;



struct ConstantLightBuffer {

	auto& shapes = reader.GetShapes();

	cbDesc.StructureByteStride = 0;

		return hr;

	vbDesc.CPUAccessFlags = 0;

	m_Angle += XMConvertToRadians(1.0f);



		{

	//定数バッファ作成

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4         eyePos;   //視点座標

{

	m_pDepthStencilTexture = NULL;

	SDL_FreeSurface(bmp);

	vector<WORD> indexList;

	}*/



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



				indexlist.push_back(index);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

	XMFLOAT4X4 world;

	txDesc.Height = rect.Height();

	scDesc.OutputWindow = hwnd;

		}

			default:

	return 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		flags,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

		return hr;



			}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	HRESULT              hr;

struct ConstantLightBuffer {





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.BufferDesc.Height = rect.Height();

	m_pRenderTargetView = NULL;



	ID3D11Texture2D* pBackBuffer;

			case SDLK_DOWN:

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		SDL_RenderCopy(ren, tex, NULL, NULL);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext = NULL;

	if (FAILED(hr))

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pTextureView);

 */

	ibDesc.CPUAccessFlags = 0;

		//User presses a key

	return 0;

				WORD index = idx.vertex_index;

		&materials,



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderPresent(ren);

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;



	//ビューポート設定

		return hr;

	txDesc.Width = rect.Width();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

		return hr;



#include <iostream>

		return hr;



	scDesc.Windowed = TRUE;

}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			default:

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

 */

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	WORD   icount = indexList.size();

	scDesc.OutputWindow = hwnd;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

using std::cout; using std::endl;



	SAFE_RELEASE(m_pSwapChain);

	return 0;

	if (!error.empty())

	m_pDepthStencilView = NULL;

	m_IndexCount = icount;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pTexture = NULL;

void CD3DTest::Release()



	//First we need to start up SDL, and make sure it went ok

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	//vector<Vertex> vertex_t;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				break;



}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	vrData.pSysMem = &pVList[0];

	if (!error.empty())

	scDesc.SampleDesc.Count = 1;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT strides = sizeof(Vertex);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	{

			// Loop over vertices in the face.

		KEY_PRESS_SURFACE_UP,



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	//ビューポート設定

	XMFLOAT4X4 view;



				// access to vertex





	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		delete[] pIList;

			}





		return hr;

		KEY_PRESS_SURFACE_LEFT,

	for (size_t s = 0; s < shapes.size(); s++)



	auto& shapes = reader.GetShapes();

			case SDLK_RIGHT:



	}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	while (SDL_PollEvent(&e) != 0)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

			{

	UINT strides = sizeof(Vertex);

		{

	SDL_DestroyRenderer(ren);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	};



	SAFE_RELEASE(m_pDepthStencilTexture);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	auto& attrib = reader.GetAttrib();





		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_BUFFER_DESC vbDesc;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			}



HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t tx =



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	tinyobj::attrib_t attrib;

			break;

	{

		}

		size_t index_offset = 0;

	{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	if (SDL_Init(SDL_INIT_VIDEO != 0))



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

			{

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	auto& materials = reader.GetMaterials();

	WORD* pIList = new WORD[icount];



		return hr;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

			{



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		R"(cube.obj)");



	}

		exit(1);





		pVList[i] = vertexlist[i];

	ConstantMaterial material; //物体の質感

				vertex.push_back(vertex_tmp);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	dsDesc.Texture2D.MipSlice = 0;

	auto& shapes = reader.GetShapes();

#ifdef _DEBUG

		delete[] pIList;







	txDesc.ArraySize = 1;

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

{

	}

	SAFE_RELEASE(m_pPixelShader);





int SEGMENT = 36;

	SAFE_RELEASE(m_pPixelShader);

	//vector<WORD> index_t;

		// Loop over faces(polygon)

	m_pMatrixBuffer = NULL;

	//ビューポート設定

	UINT flags = 0;

				break;

	}

		return hr;

		{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			// Loop over vertices in the face.

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pTexture);

};

	ConstantLightBuffer clb;

	{

			index_offset += num_vertices;

	}

			//Select surfaces based on key press



		else if (e.type == SDL_KEYDOWN)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//定数バッファ作成



	SAFE_RELEASE(m_pDepthStencilTexture);

			}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		else if (e.type == SDL_KEYDOWN)

	{

	for (int i = 0; i < 3; i++)



		delete[] pVList;

	DXGI_SWAP_CHAIN_DESC scDesc;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

int main(int, char**)

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



{

	LoadObj(vertexlist, indexList);

		}

	}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 pos;               //座標(x,y,z)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SDL_FreeSurface(bmp);

			index_offset += fv;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vector<WORD> indexList;

	//ピクセルシェーダー生成

	//vector<WORD> index_t;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

				vertex.push_back(vertex_tmp);

};

		SDL_RenderPresent(ren);

	m_pDepthStencilTexture = NULL;

	//頂点シェーダー生成

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Event e;

	return 0;

				break;

	//Key press surfaces constants

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4         ambient;  //環境光(r,g,b)



		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	enum KeyPressSurfaces

	std::string error;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DEFAULT,

				WORD index = idx.vertex_index;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pRenderTargetView);

			}

		SDL_Delay(1000);

	SAFE_RELEASE(m_pTextureView);

	}



	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.StructureByteStride = 0;

			index_offset += fv;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	txDesc.MipLevels = 1;

	std::vector<tinyobj::shape_t> shapes;

	SDL_DestroyTexture(tex);

		delete[] pIList;

		return hr;

	auto& materials = reader.GetMaterials();

	ConstantMatrixBuffer cmb;

	std::string error;

	bool ret = tinyobj::LoadObj(

	dsDesc.Texture2D.MipSlice = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	ConstantMaterial material; //物体の質感

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	enum KeyPressSurfaces

	irData.pSysMem = &pIList[0];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		}

	reader_config.mtl_search_path = "./"; // Path to material files

		&materials,

};



	cbDesc.MiscFlags = 0;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	};

	if (FAILED(hr))

	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);

		NULL,

			switch (e.key.keysym.sym)

int main(int, char**)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		flags,

	//インデックスバッファ作成

	SDL_DestroyRenderer(ren);

	//テクスチャ読み込み

				break;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	if (FAILED(hr))





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	m_pVertexShader = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			case SDLK_DOWN:

		else if (e.type == SDL_KEYDOWN)



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			for (size_t v = 0; v < fv; v++)



}
	m_Viewport.MinDepth = 0.0f;





	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	ConstantLight    pntLight; //点光源



		}

	for (int i = 0; i < vcount; i++)





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pDepthStencilTexture = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				break;

	for (const auto& shape : shapes)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	delete[] pIList;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.Width = rect.Width();

		SDL_RenderClear(ren);

	{



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				WORD index = idx.vertex_index;

	//Key press surfaces constants

	if (FAILED(hr))

				// access to vertex

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		KEY_PRESS_SURFACE_TOTAL

	scDesc.BufferDesc.Height = rect.Height();



}

	txDesc.MipLevels = 1;

	float    farZ = 100.0f;

		if (e.type == SDL_QUIT)

		pLevels,

{

	delete[] pIList;

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#include <iostream>

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

			}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&level,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_FreeSurface(bmp);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		&m_pSwapChain,



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	m_pPixelShader = NULL;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		pLevels,

	m_Viewport.MaxDepth = 1.0f;

CD3DTest::~CD3DTest()



		}

		return hr;

	//Clean up our objects and quit

	m_pMatrixBuffer = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

{

	{

	{

			}

using std::cout; using std::endl;

	for (size_t s = 0; s < shapes.size(); s++)

	float    farZ = 100.0f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		{

{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	for (const auto& shape : shapes)





		return hr;

		&error,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

void CD3DTest::Render()

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;

		return hr;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			{

	for (const auto& shape : shapes)

	m_Viewport.Width = (FLOAT)rect.Width();

				vertex.push_back(vertex_tmp);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	// Loop over shapes



	SAFE_RELEASE(m_pLightBuffer);



	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b)

	}

	{



	delete[] pIList;

	m_pVertexBuffer = NULL;

#include <iostream>

	m_pSwapChain->Present(0, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_Viewport.TopLeftX = 0;

	if (FAILED(hr))



	ZeroMemory(&txDesc, sizeof(txDesc));

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL level;

			case SDLK_LEFT:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		return hr;

		}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_Event e;

	}*/

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			case SDLK_LEFT:

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

};



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	Release();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

}

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_SUBRESOURCE_DATA vrData;

	}

	m_IndexCount = 0;

	SAFE_RELEASE(m_pTextureView);



	m_pSwapChain->Present(0, 0);

	dsDesc.Texture2D.MipSlice = 0;





		&shapes,



	txDesc.CPUAccessFlags = 0;

void CD3DTest::Release()

	}

	SAFE_RELEASE(m_pPixelShader);





	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	DXGI_SWAP_CHAIN_DESC scDesc;

#include <SDL.h>

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	D3D11_BUFFER_DESC vbDesc;

		flags,

	//定数バッファ作成

			}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	irData.SysMemPitch = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pLightBuffer = NULL;

void CD3DTest::Release()

};

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			case SDLK_RIGHT:

	if (!reader.Warning().empty())

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMFLOAT4         eyePos;   //視点座標

		&scDesc,

	vector<WORD> indexList;



	XMFLOAT4 ambient;           //環境(r,g,b)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vector<WORD> indexList;

	};

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			case SDLK_UP:

	txDesc.ArraySize = 1;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	//Clean up our objects and quit

			case SDLK_LEFT:

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	float    fov = XMConvertToRadians(20.0f);





	txDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		KEY_PRESS_SURFACE_TOTAL

	reader_config.mtl_search_path = "./"; // Path to material files

CD3DTest::~CD3DTest()

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pIndexBuffer = NULL;

}

		pIList[j] = indexList[j];

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pImmediateContext);

void CD3DTest::Render()

	vbDesc.MiscFlags = 0;

	{

	}

	{

}



	{





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Quit();

	std::string error;





	scDesc.SampleDesc.Count = 1;

	scDesc.SampleDesc.Count = 1;

	ibDesc.MiscFlags = 0;

{



	//頂点シェーダー生成

	m_pMatrixBuffer = NULL;



		{

	UINT strides = sizeof(Vertex);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

{

	txDesc.SampleDesc.Quality = 0;

	m_pSwapChain = NULL;

	/*

		&materials,

	for (int j = 0; j < icount; j++)

		SDL_RenderClear(ren);





	UINT strides = sizeof(Vertex);



		KEY_PRESS_SURFACE_LEFT,





	return;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	scDesc.BufferDesc.Width = rect.Width();



			{

	m_pInputLayout = NULL;

	//Vertex* pVList = new Vertex[vcount];

{

		//User requests quit

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.MiscFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	float    fov = XMConvertToRadians(20.0f);

};

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	Release();

	SDL_DestroyWindow(win);



CD3DTest::CD3DTest()

	//頂点シェーダー生成

	SDL_DestroyWindow(win);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	Release();

void CD3DTest::Render()

	scDesc.BufferDesc.Width = rect.Width();

		size_t index_offset = 0;  // インデントのオフセット

	vector<Vertex> vertexlist;

	//頂点バッファ作成

		return hr;

	}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				// access to vertex

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

			}



		if (e.type == SDL_QUIT)

int main(int, char**)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pLightBuffer);











	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	scDesc.SampleDesc.Quality = 0;

		}

	scDesc.SampleDesc.Count = 1;

 */

			case SDLK_UP:

	scDesc.SampleDesc.Quality = 0;



};

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

}

	for (int i = 0; i < 3; i++)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;





	for (const auto& shape : shapes)

		&m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilTexture);

				break;

#include <iostream>









		&scDesc,

	//深度ステンシルバッファ作成

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		SDL_Delay(1000);

}

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pDevice);

		{

	m_Viewport.MinDepth = 0.0f;





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

 */

{

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return 0;

	auto& materials = reader.GetMaterials();

	/*



	txDesc.MiscFlags = 0;

	std::string imagePath = "hello.bmp";

	}

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.MiscFlags = 0;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pRenderTargetView);

	dsDesc.Texture2D.MipSlice = 0;



	//頂点レイアウト作成

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	vector<WORD> indexList;

struct ConstantMaterial {



 * Lesson 1: Hello World!



				tinyobj::real_t tx =

	for (int i = 0; i < vcount; i++)



	}

		exit(1);



	m_pSwapChain->Present(0, 0);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pPixelShader = NULL;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&error,

	m_pTexture = NULL;

	CRect                rect;



			break;

	return;

	//頂点レイアウト作成



		size_t index_offset = 0;

	ibDesc.MiscFlags = 0;

	SDL_DestroyRenderer(ren);

void CD3DTest::Render()

	if (FAILED(hr))

	if (FAILED(hr))

		cout << "SDL_INIT_ERROR" << endl;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderClear(ren);

	ID3D11Texture2D* pBackBuffer;

			default:

		//User requests quit





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{

	return 0;

	ibDesc.CPUAccessFlags = 0;

	// Loop over shapes

 * Lesson 1: Hello World!

	irData.SysMemPitch = 0;

			}

	m_pVertexShader = NULL;

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	for (int i = 0; i < vcount; i++)

		&attrib,

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			{

			// Loop over vertices in the face.

	delete[] pVList;

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4(&clb.eyePos, eye);

using std::cout; using std::endl;

		delete[] pVList;

		pLevels,



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SAFE_RELEASE(m_pMatrixBuffer);

	vector<WORD> indexList;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx =

	dsDesc.Texture2D.MipSlice = 0;

			{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	}

	scDesc.BufferDesc.Height = rect.Height();

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA irData;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			{



		D3D11_SDK_VERSION,

	delete[] pIList;



	m_Angle += XMConvertToRadians(1.0f);

				indexlist.push_back(index);

	irData.pSysMem = &pIList[0];

		}

	ConstantLight    pntLight; //点光源

	m_pPixelShader = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyRenderer(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_Angle += XMConvertToRadians(1.0f);

	vector<Vertex> vertexlist;

				WORD index = idx.vertex_index;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		cout << "SDL_INIT_ERROR" << endl;

	SDL_DestroyRenderer(ren);



}

void CD3DTest::Release()



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	tinyobj::ObjReader reader;

		//User presses a key

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.Width = (FLOAT)rect.Width();

		pLevels,

	int     vcount = vertexlist.size();

			int num_vertices = shape.mesh.num_face_vertices[f];

		return hr;

	while (SDL_PollEvent(&e) != 0)





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pDevice = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_DestroyWindow(win);

}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	return 0;

			// Loop over vertices in the face.

	txDesc.Height = rect.Height();

#include <SDL.h>

			case SDLK_RIGHT:

				WORD index = idx.vertex_index;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.SampleDesc.Quality = 0;





				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SDL_DestroyTexture(tex);

	if (!reader.Warning().empty())

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	if (!reader.ParseFromFile(inputfile, reader_config))



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pSampler = NULL;



	//定数バッファ作成

	SAFE_RELEASE(m_pIndexBuffer);

	WORD* pIList = new WORD[icount];

	delete[] pIList;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		delete[] pIList;

#include <SDL.h>

		&m_pImmediateContext);

	if (FAILED(hr))



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		KEY_PRESS_SURFACE_TOTAL





	scDesc.Windowed = TRUE;

	vbDesc.MiscFlags = 0;

	bool ret = tinyobj::LoadObj(

	return hr;

	cbDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

{

	return 0;

	D3D11_BUFFER_DESC cbDesc;

	ibDesc.CPUAccessFlags = 0;



	cbDesc.CPUAccessFlags = 0;

	{





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			{

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.BufferCount = 1;



	m_Viewport.MinDepth = 0.0f;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



				// access to vertex



HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pSampler);



	std::vector<tinyobj::shape_t> shapes;

	};

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



struct ConstantLight {

	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	irData.pSysMem = &pIList[0];

				break;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}

		if (!reader.Error().empty())

	}

		return 1;

		D3D11_SDK_VERSION,



		return hr;

	m_pDepthStencilView = NULL;

		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

		&error,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	scDesc.SampleDesc.Count = 1;

#endif



{

				tinyobj::real_t tx =

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	if (FAILED(hr))

	for (int j = 0; j < icount; j++)

	if (FAILED(hr))

};



	{

		{

	//First we need to start up SDL, and make sure it went ok

	ibDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

		{

	SAFE_RELEASE(m_pSampler);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





		KEY_PRESS_SURFACE_DOWN,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		if (e.type == SDL_QUIT)

		pIList[j] = indexList[j];

	cbDesc.StructureByteStride = 0;

	}



int SEGMENT = 36;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	std::vector<tinyobj::shape_t> shapes;



				WORD index = idx.vertex_index;



		m_pImmediateContext->ClearState();



	}

	m_IndexCount = 0;

struct ConstantMaterial {

	}



	}*/

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	for (const auto& shape : shapes)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ibDesc.MiscFlags = 0;

	SDL_DestroyTexture(tex);

void CD3DTest::Release()



	m_pDepthStencilView = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pSampler = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

{

	std::string imagePath = "hello.bmp";

	SDL_Quit();

			default:

		KEY_PRESS_SURFACE_LEFT,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyWindow(win);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vbDesc.StructureByteStride = 0;

				break;

/*

		return 1;

	m_pTextureView = NULL;

	}*/

	txDesc.Width = rect.Width();

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4(&clb.eyePos, eye);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//vector<Vertex> vertex_t;





	txDesc.MipLevels = 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))



	SAFE_RELEASE(m_pLightBuffer);



	m_pDepthStencilView = NULL;

		{

	if (FAILED(hr))

 */

	SDL_Quit();

		1,

	m_pDepthStencilView = NULL;

	m_pMatrixBuffer = NULL;

		return hr;

void CD3DTest::Render()



{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&level,

		pVList[i] = vertexlist[i];

/*

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_SUBRESOURCE_DATA vrData;

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

{

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);

}



				break;

	dsDesc.Texture2D.MipSlice = 0;

	if (FAILED(hr))







	XMStoreFloat4(&clb.ambient, lightAmbient);

				break;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

};

	ConstantMatrixBuffer cmb;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&m_pImmediateContext);

{



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

				// access to vertex

	//ピクセルシェーダー生成



}

#include <iostream>



	//頂点シェーダー生成

		return hr;

		R"(cube.obj)");

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		&materials,

	SDL_Quit();

			}





	m_Viewport.TopLeftX = 0;

}

	{

		KEY_PRESS_SURFACE_LEFT,

#include <SDL.h>

				break;

	m_pImmediateContext = NULL;

	SAFE_RELEASE(m_pTexture);

	dsDesc.Texture2D.MipSlice = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				vertex.push_back(vertex_tmp);

	m_IndexCount = 0;

	//ビューポート設定



		return hr;

{

	{

			}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





	SDL_Event e;

	if (FAILED(hr))

};

		return hr;

		SDL_RenderClear(ren);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	SAFE_RELEASE(m_pDevice);

	m_pDevice = NULL;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

	//頂点シェーダー生成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			case SDLK_DOWN:

	m_Viewport.TopLeftY = 0;

	//深度ステンシルバッファ作成



				tinyobj::real_t ty =



#include <iostream>

using std::cout; using std::endl;

		return hr;

	cbDesc.StructureByteStride = 0;

}


		KEY_PRESS_SURFACE_UP,

	if (!error.empty())

	cbDesc.MiscFlags = 0;

	D3D11_BUFFER_DESC vbDesc;

/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	auto& shapes = reader.GetShapes();



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_Viewport.TopLeftY = 0;



				tinyobj::real_t ty =

	}





	m_Viewport.Height = (FLOAT)rect.Height();



	D3D_FEATURE_LEVEL level;



	m_pInputLayout = NULL;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	auto& materials = reader.GetMaterials();



			exit(1);

	auto& materials = reader.GetMaterials();

};

	std::vector<tinyobj::material_t> materials;

		KEY_PRESS_SURFACE_RIGHT,

	irData.SysMemSlicePitch = 0;

			case SDLK_LEFT:

	XMFLOAT4X4 view;

	txDesc.MiscFlags = 0;

			default:

			}





	{

		// Loop over faces(polygon)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		KEY_PRESS_SURFACE_DOWN,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);

	SDL_FreeSurface(suf);

	vbDesc.CPUAccessFlags = 0;

		return hr;

			default:

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ConstantLightBuffer clb;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

	if (m_pImmediateContext)

		&m_pDevice,



	cbDesc.StructureByteStride = 0;

	// Loop over shapes

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//Key press surfaces constants

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)







	ConstantMaterial material; //物体の質感

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		KEY_PRESS_SURFACE_RIGHT,



		SDL_RenderClear(ren);



}

		return hr;

	//インデックスバッファ作成

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				indexlist.push_back(index);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pRenderTargetView);

		exit(1);

		flags,

	return;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ConstantLight    pntLight; //点光源

int main(int, char**)

	m_pSwapChain->Present(0, 0);

	Release();

			{

	if (FAILED(hr))

		}

	SAFE_RELEASE(m_pDepthStencilView);



				WORD index = idx.vertex_index;

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	auto& materials = reader.GetMaterials();

}

		return hr;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	scDesc.SampleDesc.Quality = 0;

{

	}





		}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pVertexShader);



	std::string inputfile = "test.obj";

#include <iostream>

	D3D11_BUFFER_DESC cbDesc;

	scDesc.OutputWindow = hwnd;

			case SDLK_RIGHT:

	{

		&m_pSwapChain,

	dsDesc.Format = txDesc.Format;

	dsDesc.Format = txDesc.Format;

	::GetClientRect(hwnd, &rect);

	}

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pIndexBuffer);

	auto& attrib = reader.GetAttrib();



	ibDesc.StructureByteStride = 0;

};

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];











	for (int i = 0; i < vcount; i++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.ambient, lightAmbient);

	pBackBuffer->Release();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	std::string imagePath = "hello.bmp";

	if (m_pImmediateContext)



#endif



		return hr;

			{

			{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

struct ConstantLight {

	{

	ConstantLight    pntLight; //点光源

	SAFE_RELEASE(m_pImmediateContext);

	D3D11_SUBRESOURCE_DATA vrData;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		SDL_RenderClear(ren);







	}

	//ピクセルシェーダー生成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//ピクセルシェーダー生成

			for (size_t v = 0; v < fv; v++)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		delete[] pVList;

	m_pTexture = NULL;

	{

	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Quality = 0;

	return 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

				break;

};

	D3D_FEATURE_LEVEL level;

				break;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());





		&attrib,

	XMFLOAT4X4 view;



};

	m_pSwapChain = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	cbDesc.StructureByteStride = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

struct ConstantMatrixBuffer {

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.pSysMem = &pIList[0];



			int num_vertices = shape.mesh.num_face_vertices[f];





	txDesc.Height = rect.Height();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		size_t index_offset = 0;

void CD3DTest::Release()

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pDepthStencilView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

		delete[] pIList;

		{

{



}

	SAFE_RELEASE(m_pSwapChain);

	m_pSwapChain = NULL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	if (FAILED(hr))

	m_IndexCount = 0;





	if (FAILED(hr))

	tinyobj::ObjReader reader;



	m_pSwapChain = NULL;

	if (!reader.Warning().empty())

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		&error,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vector<WORD> indexList;

	CRect                rect;

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				// access to vertex

	txDesc.MiscFlags = 0;

	return hr;



	{

}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		size_t index_offset = 0;  // インデントのオフセット

		return 1;

		pVList[i] = vertexlist[i];

	XMFLOAT4X4 projection;

		&shapes,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				break;

	UINT flags = 0;









	Release();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



			for (size_t v = 0; v < fv; v++)

			}

struct ConstantLight {









	cbDesc.StructureByteStride = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





		&level,

				break;

	std::vector<tinyobj::material_t> materials;

	::GetClientRect(hwnd, &rect);

	tinyobj::attrib_t attrib;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	std::string error;



	m_IndexCount = 0;

void CD3DTest::Render()

	UINT offsets = 0;

	SDL_DestroyWindow(win);

	/*

	SAFE_RELEASE(m_pVertexShader);

int main(int, char**)

		return hr;

		pVList[i] = vertexlist[i];

				indexlist.push_back(index);

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.StructureByteStride = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



		D3D_DRIVER_TYPE_HARDWARE,

	m_pSampler = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		{

	vrData.pSysMem = &pVList[0];

	for (int i = 0; i < vcount; i++)

				indexlist.push_back(idx.vertex_index);



		&m_pDevice,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		}

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		KEY_PRESS_SURFACE_DEFAULT,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pTexture);

	};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

{

	if (FAILED(hr))



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		}

		return hr;

	if (!reader.Warning().empty())

		&shapes,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

{



	cbDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

struct ConstantMaterial {

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

int main(int, char**)

	scDesc.SampleDesc.Quality = 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

int main(int, char**)

		pLevels,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





	cbDesc.MiscFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	SAFE_RELEASE(m_pDevice);

		}

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





				vertex.push_back(vertex_tmp);

	// Loop over shapes

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	txDesc.ArraySize = 1;

	CRect                rect;

	for (int i = 0; i < 3; i++)

};

		{





			{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	for (int j = 0; j < icount; j++)

		}

		}



		}



	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				indexlist.push_back(idx.vertex_index);

			//Select surfaces based on key press

	irData.SysMemPitch = 0;

 */

	m_pMatrixBuffer = NULL;

	}*/

	vrData.SysMemSlicePitch = 0;

	return;

			for (size_t v = 0; v < num_vertices; v++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		}

#ifdef _DEBUG

		pIList[j] = indexList[j];

	//Vertex* pVList = new Vertex[vcount];



		if (!reader.Error().empty())

	D3D11_SUBRESOURCE_DATA irData;

	}

	scDesc.BufferDesc.Width = rect.Width();

	//頂点バッファ作成

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

struct ConstantLight {

	ConstantMaterial material; //物体の質感

	{



	}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			default:



		delete[] pVList;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		}

	SDL_DestroyTexture(tex);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



CD3DTest::~CD3DTest()

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_UP,





	enum KeyPressSurfaces

	SDL_DestroyTexture(tex);

		SDL_RenderClear(ren);

};

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.ambient, lightAmbient);



	ConstantLightBuffer clb;

		KEY_PRESS_SURFACE_DEFAULT,

HRESULT CD3DTest::Create(HWND hwnd)



	SDL_Quit();

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	// Loop over shapes

	UINT offsets = 0;

	SDL_DestroyRenderer(ren);

	//テクスチャ読み込み

	m_pInputLayout = NULL;



		cout << "SDL_INIT_ERROR" << endl;

	{

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

int main(int, char**)

			exit(1);

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_TOTAL

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;



};

		cout << "SDL_INIT_ERROR" << endl;

	SDL_Event e;

	if (FAILED(hr))

	ConstantLightBuffer clb;

	irData.pSysMem = &pIList[0];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

 * Lesson 1: Hello World!

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilTexture);

#ifdef _DEBUG

	txDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	for (int i = 0; i < 3; i++)

	m_pTextureView = NULL;

	ibDesc.CPUAccessFlags = 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//ピクセルシェーダー生成

	int     vcount = vertexlist.size();

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	SAFE_RELEASE(m_pTexture);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	{

};

	UINT flags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	UINT offsets = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	WORD   icount = indexList.size();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

struct ConstantMaterial {

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	irData.SysMemSlicePitch = 0;

		pLevels,

{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	Vertex* pVList = new Vertex[vcount];



		SDL_Delay(1000);



	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

}

	ID3D11Texture2D* pBackBuffer;

	Release();



	txDesc.SampleDesc.Count = 1;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pLightBuffer = NULL;

}

	{

	Release();

	auto& attrib = reader.GetAttrib();



		&attrib,

	{



		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	}

 * Lesson 1: Hello World!

	if (m_pImmediateContext)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

void CD3DTest::Render()

	vbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_Viewport.Width = (FLOAT)rect.Width();

void CD3DTest::Release()

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				// access to vertex

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pInputLayout);

	if (m_pImmediateContext)

		cout << "SDL_INIT_ERROR" << endl;

				indexlist.push_back(idx.vertex_index);



/*

		&materials,

	delete[] pVList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.MiscFlags = 0;



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			exit(1);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	UINT flags = 0;

			default:

	while (SDL_PollEvent(&e) != 0)

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

	ID3D11Texture2D* pBackBuffer;

			case SDLK_LEFT:



		{

	m_pDepthStencilView = NULL;





	txDesc.Usage = D3D11_USAGE_DEFAULT;

}

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//テクスチャ読み込み

	auto& shapes = reader.GetShapes();

{

{

	txDesc.ArraySize = 1;



		if (e.type == SDL_QUIT)

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			index_offset += fv;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		NULL,







	m_IndexCount = 0;

	auto& attrib = reader.GetAttrib();

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_SAMPLER_DESC smpDesc;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pLightBuffer = NULL;

struct ConstantMatrixBuffer {

	vrData.SysMemPitch = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	vector<WORD> indexList;



	D3D11_SUBRESOURCE_DATA vrData;

	UINT strides = sizeof(Vertex);

	Release();

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





	XMFLOAT4 attenuate;         //減衰(a,b,c)




