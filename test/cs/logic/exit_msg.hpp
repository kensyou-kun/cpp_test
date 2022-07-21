	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		exit(1);





	if (FAILED(hr))

		}

	if (FAILED(hr))

			index_offset += fv;

	if (m_pImmediateContext)

	{

	{

		SDL_RenderPresent(ren);

	vector<Vertex> vertexlist;





	vrData.pSysMem = &pVList[0];

	SDL_DestroyRenderer(ren);

	tinyobj::ObjReaderConfig reader_config;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	txDesc.CPUAccessFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pTextureView = NULL;

#include <SDL.h>

		//User requests quit



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMFLOAT4         eyePos;   //視点座標

	SAFE_RELEASE(m_pTextureView);



		&materials,

}
	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	// Loop over shapes

	txDesc.MiscFlags = 0;

	vrData.pSysMem = &pVList[0];

		return hr;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.CPUAccessFlags = 0;



struct ConstantMatrixBuffer {



	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_Viewport.MinDepth = 0.0f;

	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		}



	ibDesc.MiscFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	WORD   icount = indexList.size();

		&m_pDevice,

	std::string inputfile = "test.obj";



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	enum KeyPressSurfaces

		KEY_PRESS_SURFACE_DEFAULT,

			}

	}

	irData.SysMemSlicePitch = 0;

struct ConstantLightBuffer {

	ID3D11Texture2D* pBackBuffer;



{

{

	UINT strides = sizeof(Vertex);

	m_pDepthStencilTexture = NULL;

	m_pVertexBuffer = NULL;



};

	m_pSwapChain = NULL;

	if (FAILED(hr))

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		}

		KEY_PRESS_SURFACE_DOWN,

struct ConstantMaterial {

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

	//Create Index

	for (int j = 0; j < icount; j++)

	vector<WORD> indexList;

	//インデックスバッファ作成

	m_pLightBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	UINT flags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	}

			}



	vrData.SysMemPitch = 0;

void CD3DTest::Render()

		return hr;

			{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

#include <iostream>

		if (!reader.Error().empty())

	{

	UINT strides = sizeof(Vertex);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (FAILED(hr))

	return;

		&attrib,



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		&scDesc,

	SAFE_RELEASE(m_pMatrixBuffer);

	auto& shapes = reader.GetShapes();

				// access to vertex

	//頂点レイアウト作成

	for (const auto& shape : shapes)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	D3D11_SUBRESOURCE_DATA irData;



	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	vrData.SysMemSlicePitch = 0;

		}

	cbDesc.CPUAccessFlags = 0;

		{

	XMStoreFloat4(&clb.ambient, lightAmbient);



		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);

	ibDesc.MiscFlags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



		SDL_RenderPresent(ren);

			for (size_t v = 0; v < num_vertices; v++)



	delete[] pIList;

		}

				break;

		return hr;









	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	vector<WORD> indexList;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pRenderTargetView);

	}*/

	WORD   icount = indexList.size();



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	tinyobj::attrib_t attrib;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyRenderer(ren);

	{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	float    farZ = 100.0f;



	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	{

	m_VertexCount = vcount;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pTextureView = NULL;

	ConstantMatrixBuffer cmb;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				// access to vertex



struct ConstantMaterial {





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		delete[] pVList;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		//User requests quit

	int     vcount = vertexlist.size();

	irData.pSysMem = &pIList[0];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pPixelShader);

		pLevels,

	if (m_pImmediateContext)

	}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	}

	}



		SDL_RenderClear(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	}

	SAFE_RELEASE(m_pSwapChain);

{

	tinyobj::ObjReader reader;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





			//Select surfaces based on key press

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);







	irData.SysMemSlicePitch = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			//Select surfaces based on key press

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_IndexCount = icount;

				// access to vertex

void CD3DTest::Render()

		if (!reader.Error().empty())

	SDL_DestroyRenderer(ren);

	while (SDL_PollEvent(&e) != 0)

#include <iostream>

	SAFE_RELEASE(m_pDevice);

	vrData.pSysMem = &pVList[0];



#include <SDL.h>

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				indexlist.push_back(index);

	SDL_Quit();

			}

	}

	//First we need to start up SDL, and make sure it went ok

			for (size_t v = 0; v < num_vertices; v++)

{

	vector<Vertex> vertexlist;

	vbDesc.StructureByteStride = 0;

		&level,

	XMFLOAT4 ambient;           //環境(r,g,b)

		delete[] pVList;









	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

			}

		{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pLightBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	};

			{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	pBackBuffer->Release();

		KEY_PRESS_SURFACE_TOTAL

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4         eyePos;   //視点座標



	m_IndexCount = icount;

	}

		return hr;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	scDesc.SampleDesc.Count = 1;

	}

	Release();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSampler);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	::GetClientRect(hwnd, &rect);



/*

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_FreeSurface(suf);



	DXGI_SWAP_CHAIN_DESC scDesc;

	while (SDL_PollEvent(&e) != 0)

		delete[] pVList;

	return hr;

void CD3DTest::Release()

		&m_pDevice,

	D3D_FEATURE_LEVEL level;

	std::string inputfile = "test.obj";

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

	scDesc.BufferDesc.Height = rect.Height();

int main(int, char**)

		&shapes,

			exit(1);

{



}

	XMStoreFloat4(&clb.eyePos, eye);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&shapes,

	{



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	vrData.pSysMem = &pVList[0];

	}



		&scDesc,

	m_VertexCount = vcount;

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

	m_Angle += XMConvertToRadians(1.0f);



	m_Viewport.TopLeftY = 0;

	//テクスチャ読み込み

	SDL_FreeSurface(bmp);





	XMFLOAT4         eyePos;   //視点座標



	if (FAILED(hr))



		&m_pSwapChain,

			{

	for (const auto& shape : shapes)

				indexlist.push_back(index);



}



			switch (e.key.keysym.sym)

		return hr;

		&m_pImmediateContext);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



			}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_FreeSurface(suf);

	DXGI_SWAP_CHAIN_DESC scDesc;

	ConstantMatrixBuffer cmb;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

			{

	irData.pSysMem = &pIList[0];

		//User requests quit

		else if (e.type == SDL_KEYDOWN)

	SAFE_RELEASE(m_pRenderTargetView);

			{

	irData.SysMemSlicePitch = 0;

	vector<Vertex> vertexlist;

	cbDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

};

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pImmediateContext);

		SDL_Delay(1000);

		else if (e.type == SDL_KEYDOWN)

	}



			}

	vrData.SysMemSlicePitch = 0;



	//Clean up our objects and quit

	SDL_DestroyTexture(tex);

	{



};

		{

	}

	//Clean up our objects and quit

	{

	scDesc.SampleDesc.Count = 1;

	return;

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	}

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);



	txDesc.MipLevels = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Event e;

	txDesc.MipLevels = 1;

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

			// Loop over vertices in the face.

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	irData.SysMemPitch = 0;

{

		return hr;

}

	//vector<WORD> index_t;

	if (!error.empty())

	int     vcount = vertexlist.size();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			index_offset += num_vertices;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&attrib,

		KEY_PRESS_SURFACE_DOWN,

		return hr;





	txDesc.SampleDesc.Quality = 0;

	delete[] pIList;

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

		&shapes,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	if (FAILED(hr))



	m_pImmediateContext = NULL;

		else if (e.type == SDL_KEYDOWN)

			}

 */

	SAFE_RELEASE(m_pIndexBuffer);

	//ピクセルシェーダー生成

	for (int j = 0; j < icount; j++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	LoadObj(vertexlist, indexList);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	SDL_Quit();

	//ピクセルシェーダー生成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				vertex.push_back(vertex_tmp);



				indexlist.push_back(index);

		//User presses a key

}

	UINT strides = sizeof(Vertex);

	m_Viewport.MinDepth = 0.0f;

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.Height = rect.Height();

	{

	ID3D11Texture2D* pBackBuffer;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.MiscFlags = 0;



	std::string error;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

struct ConstantMatrixBuffer {

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			int num_vertices = shape.mesh.num_face_vertices[f];

	{



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				break;

	float    fov = XMConvertToRadians(20.0f);

	XMFLOAT4X4 world;

		KEY_PRESS_SURFACE_TOTAL

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];





		&error,



	m_pDepthStencilTexture = NULL;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			{

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.OutputWindow = hwnd;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t ty =

	scDesc.SampleDesc.Quality = 0;

	//頂点レイアウト作成

	D3D11_BUFFER_DESC ibDesc;

	m_pLightBuffer = NULL;

	for (int j = 0; j < icount; j++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		1,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

	scDesc.BufferDesc.Width = rect.Width();



	}

			exit(1);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pSwapChain = NULL;



	//Vertex* pVList = new Vertex[vcount];

				break;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	auto& materials = reader.GetMaterials();

		SDL_RenderPresent(ren);

/*

		//User presses a key

CD3DTest::CD3DTest()

		return hr;





		}

	float    nearZ = 0.1f;

	{

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pSampler);

		&m_pDevice,

	ID3D11Texture2D* pBackBuffer;

}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



				WORD index = idx.vertex_index;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}

	Release();

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_IndexCount = icount;

{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (!reader.ParseFromFile(inputfile, reader_config))

		&attrib,

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

int main(int, char**)

	scDesc.Windowed = TRUE;

		SDL_Delay(1000);





	if (FAILED(hr))



		SDL_Delay(1000);

	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4X4 world;



	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	flags |= D3D11_CREATE_DEVICE_DEBUG;



struct ConstantLight {

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	{

	std::string inputfile = "test.obj";

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		KEY_PRESS_SURFACE_DEFAULT,

		cout << "SDL_INIT_ERROR" << endl;





			case SDLK_RIGHT:

	}

	//Vertex* pVList = new Vertex[vcount];

		SDL_Delay(1000);

	{







	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				vertex.push_back(vertex_tmp);

	{

#include <iostream>

	auto& shapes = reader.GetShapes();



		}

	//Create Index

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

	LoadObj(vertexlist, indexList);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pTextureView);

	HRESULT              hr;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.MiscFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;

		return 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	int     vcount = vertexlist.size();

	if (!reader.ParseFromFile(inputfile, reader_config))

	dsDesc.Texture2D.MipSlice = 0;

	//vector<Vertex> vertex_t;





				tinyobj::real_t ty =



{

		size_t index_offset = 0;

	txDesc.MipLevels = 1;

	std::string error;

		&m_pDevice,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

				break;

		SDL_RenderPresent(ren);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_FreeSurface(suf);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	//深度ステンシルバッファ作成

	{



		{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//定数バッファ作成

	std::string imagePath = "hello.bmp";

		SDL_RenderPresent(ren);

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext = NULL;

			index_offset += fv;

	//頂点バッファ作成

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



CD3DTest::~CD3DTest()

	LoadObj(vertexlist, indexList);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.SampleDesc.Quality = 0;

	m_pVertexShader = NULL;

	ConstantLightBuffer clb;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				break;



	//頂点レイアウト作成

			default:

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				vertex.push_back(vertex_tmp);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.eyePos, eye);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	D3D_FEATURE_LEVEL level;



				indexlist.push_back(index);

	SDL_Quit();

				vertex.push_back(vertex_tmp);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

}



	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_TOTAL



	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Event e;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pSampler);



	Release();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMStoreFloat4(&clb.eyePos, eye);

	vbDesc.StructureByteStride = 0;

}



		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderClear(ren);

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

CD3DTest::CD3DTest()



		return hr;



};

	irData.SysMemSlicePitch = 0;

			case SDLK_LEFT:



	{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	scDesc.BufferDesc.Height = rect.Height();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			index_offset += fv;

struct ConstantMatrixBuffer {

};

			default:

		return hr;

		size_t index_offset = 0;

	XMFLOAT4X4 projection;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		KEY_PRESS_SURFACE_RIGHT,

	XMFLOAT4         eyePos;   //視点座標

		&shapes,





			index_offset += fv;

	//テクスチャ読み込み

		SDL_RenderClear(ren);

	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMFLOAT4X4 view;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



void CD3DTest::Render()

		1,

}



	//vector<WORD> index_t;

	return 0;

	SAFE_RELEASE(m_pPixelShader);

{

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_FreeSurface(bmp);

	bool ret = tinyobj::LoadObj(

	}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	return 0;

	scDesc.OutputWindow = hwnd;





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			index_offset += fv;

		else if (e.type == SDL_KEYDOWN)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	SAFE_RELEASE(m_pPixelShader);

		&level,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



}



	irData.SysMemSlicePitch = 0;

	XMFLOAT4         eyePos;   //視点座標

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			index_offset += num_vertices;

	SAFE_RELEASE(m_pTexture);

		SDL_RenderClear(ren);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	//頂点バッファ作成

		{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

}

	delete[] pIList;

	LoadObj(vertexlist, indexList);

	Release();

#endif

	//Key press surfaces constants

			index_offset += num_vertices;

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_FreeSurface(bmp);

	std::string error;

	D3D11_BUFFER_DESC ibDesc;

		if (!reader.Error().empty())

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_Viewport.MinDepth = 0.0f;

	while (SDL_PollEvent(&e) != 0)





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.Width = rect.Width();

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	XMFLOAT4         eyePos;   //視点座標

};



int SEGMENT = 36;



	SAFE_RELEASE(m_pMatrixBuffer);

			case SDLK_LEFT:

		return hr;

			exit(1);

void CD3DTest::Release()



	pBackBuffer->Release();

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_LEFT:

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		delete[] pIList;

	m_pTexture = NULL;

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

};

	m_pDepthStencilView = NULL;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pIndexBuffer = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	std::vector<tinyobj::shape_t> shapes;

	::ZeroMemory(&scDesc, sizeof(scDesc));





	txDesc.Width = rect.Width();

	if (FAILED(hr))



	if (!reader.Warning().empty())

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	UINT strides = sizeof(Vertex);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.CPUAccessFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





#include <iostream>

	SAFE_RELEASE(m_pVertexBuffer);

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	Vertex* pVList = new Vertex[vcount];



 * Lesson 1: Hello World!

			//Select surfaces based on key press

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

			}

			int num_vertices = shape.mesh.num_face_vertices[f];



		{

	m_pIndexBuffer = NULL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pRenderTargetView);



	vector<Vertex> vertexlist;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&m_pImmediateContext);

		&scDesc,



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferCount = 1;

		&level,

	dsDesc.Format = txDesc.Format;

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	txDesc.CPUAccessFlags = 0;

			// Loop over vertices in the face.

	if (FAILED(hr))

		return hr;

	return hr;

	m_VertexCount = 0;

#endif

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_pIndexBuffer = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_VertexCount = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pDepthStencilView);

	//Create Index

		else if (e.type == SDL_KEYDOWN)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	return 0;

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;



}
			}

};

	m_Viewport.MinDepth = 0.0f;



	{

	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMFLOAT4X4 world;

	m_VertexCount = 0;

			}

	if (FAILED(hr))

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	//vector<Vertex> vertex_t;

	}



	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pPixelShader);



		return hr;

	if (FAILED(hr))

	}

	if (m_pImmediateContext)



	//頂点シェーダー生成

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Viewport.TopLeftY = 0;

		exit(1);

	SAFE_RELEASE(m_pRenderTargetView);

	XMFLOAT4X4 projection;

			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.StructureByteStride = 0;

#include <SDL.h>

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		return hr;

				tinyobj::real_t tx =

		cout << "SDL_INIT_ERROR" << endl;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//Vertex* pVList = new Vertex[vcount];



		return hr;

	WORD* pIList = new WORD[icount];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



				// access to vertex

				// access to vertex

	//頂点レイアウト作成

	m_pMatrixBuffer = NULL;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	while (SDL_PollEvent(&e) != 0)

	std::vector<tinyobj::material_t> materials;



		// Loop over faces(polygon)

			for (size_t v = 0; v < fv; v++)

	m_Viewport.MaxDepth = 1.0f;



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_DestroyRenderer(ren);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	};



		SDL_RenderClear(ren);

	ConstantLight    pntLight; //点光源

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_pDepthStencilTexture = NULL;

	txDesc.SampleDesc.Quality = 0;



		exit(1);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

struct ConstantMatrixBuffer {

		&m_pImmediateContext);

	m_VertexCount = 0;

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//Clean up our objects and quit

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	}

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pInputLayout);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		D3D11_SDK_VERSION,

				tinyobj::real_t tx =





		{

				tinyobj::real_t tx =

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	D3D11_TEXTURE2D_DESC txDesc;

	{

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferCount = 1;

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))

 * Lesson 1: Hello World!



	//頂点シェーダー生成

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pDepthStencilTexture);

			default:

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::GetClientRect(hwnd, &rect);

		flags,

	UINT offsets = 0;

	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

		}

	scDesc.BufferCount = 1;





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	cbDesc.StructureByteStride = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Quit();

		return hr;





		exit(1);





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.ArraySize = 1;



	m_pDepthStencilView = NULL;

		SDL_RenderPresent(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		SDL_RenderPresent(ren);

	scDesc.OutputWindow = hwnd;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	cbDesc.MiscFlags = 0;

	D3D11_SUBRESOURCE_DATA irData;

	{

 */

	WORD   icount = indexList.size();

	cbDesc.CPUAccessFlags = 0;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

		KEY_PRESS_SURFACE_TOTAL

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	return 0;

		&level,

		flags,



	SAFE_RELEASE(m_pInputLayout);

	vrData.SysMemPitch = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_Viewport.TopLeftX = 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		{

		return hr;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	vector<Vertex> vertexlist;

	delete[] pVList;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pSwapChain->Present(0, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

int main(int, char**)



				tinyobj::real_t ty =

		KEY_PRESS_SURFACE_DEFAULT,

	m_pDepthStencilTexture = NULL;

		&shapes,

			// Loop over vertices in the face.

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.MiscFlags = 0;

int main(int, char**)

	cbDesc.MiscFlags = 0;

	//頂点バッファ作成

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	XMFLOAT4 ambient;           //環境(r,g,b)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_IndexCount = 0;

	if (FAILED(hr))

	scDesc.Windowed = TRUE;

	//Vertex* pVList = new Vertex[vcount];

	m_pPixelShader = NULL;

		SDL_Delay(1000);

	//頂点バッファ作成

		&error,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	bool ret = tinyobj::LoadObj(

	std::vector<tinyobj::material_t> materials;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				indexlist.push_back(idx.vertex_index);



	//深度ステンシルバッファ作成

	}



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#endif



	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	enum KeyPressSurfaces

	cbDesc.StructureByteStride = 0;



	if (FAILED(hr))



	{

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pImmediateContext);

 */

	SDL_DestroyWindow(win);

			exit(1);

	if (FAILED(hr))



	XMFLOAT4 attenuate;         //減衰(a,b,c)

		// Loop over faces(polygon)

			}

#include <iostream>



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4         ambient;  //環境光(r,g,b)





	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pMatrixBuffer);

			exit(1);



	}

				break;

	dsDesc.Texture2D.MipSlice = 0;

			for (size_t v = 0; v < fv; v++)

				WORD index = idx.vertex_index;

	scDesc.OutputWindow = hwnd;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

				tinyobj::real_t ty =

		D3D_DRIVER_TYPE_HARDWARE,

	UINT offsets = 0;

		{

		SDL_RenderPresent(ren);

		&shapes,

#include "DirectXManager.h"

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_VertexCount = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	{

		NULL,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_SUBRESOURCE_DATA irData;

			for (size_t v = 0; v < num_vertices; v++)

	if (m_pImmediateContext)



	scDesc.Windowed = TRUE;

	if (FAILED(hr))



	//頂点レイアウト作成

	m_pDepthStencilTexture = NULL;

		return hr;

	m_Viewport.MinDepth = 0.0f;

	/*

	delete[] pVList;

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_Viewport.TopLeftY = 0;

		exit(1);

	m_pIndexBuffer = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	D3D11_SUBRESOURCE_DATA irData;

		delete[] pVList;

	vrData.pSysMem = &pVList[0];

		&m_pSwapChain,



#ifdef _DEBUG



				indexlist.push_back(index);



		return hr;

	{

	txDesc.Width = rect.Width();



	m_VertexCount = 0;

				WORD index = idx.vertex_index;

	}



	m_pSwapChain->Present(0, 0);

	m_Viewport.TopLeftX = 0;



	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	m_Viewport.Height = (FLOAT)rect.Height();

	dsDesc.Texture2D.MipSlice = 0;

			for (size_t v = 0; v < num_vertices; v++)

		return 1;

	}

};





	txDesc.ArraySize = 1;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

#endif

		}





		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//Clean up our objects and quit

	if (FAILED(hr))

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	auto& shapes = reader.GetShapes();

{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



#include <iostream>

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	SDL_DestroyTexture(tex);

	D3D11_BUFFER_DESC cbDesc;

	HRESULT              hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Quit();

		flags,

	txDesc.CPUAccessFlags = 0;

	//ピクセルシェーダー生成



				tinyobj::real_t tx =

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	WORD   icount = indexList.size();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//定数バッファ作成

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			default:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemSlicePitch = 0;

	vbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pSwapChain);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

};

				// access to vertex

				vertex.push_back(vertex_tmp);

	scDesc.BufferDesc.Width = rect.Width();

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	Release();

}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

CD3DTest::~CD3DTest()







	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

	ZeroMemory(&dsDesc, sizeof(dsDesc));



			index_offset += num_vertices;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

};



int main(int, char**)

/*

			}

	if (FAILED(hr))

	std::string error;

		size_t index_offset = 0;

		SDL_Delay(1000);

	m_pIndexBuffer = NULL;

			case SDLK_DOWN:



	auto& shapes = reader.GetShapes();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#include <SDL.h>

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		SDL_Delay(1000);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		size_t index_offset = 0;  // インデントのオフセット

		&attrib,

	m_pIndexBuffer = NULL;



	D3D_FEATURE_LEVEL level;

	SDL_Event e;

		KEY_PRESS_SURFACE_DEFAULT,

		&m_pImmediateContext);

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pSwapChain->Present(0, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.CPUAccessFlags = 0;

	m_VertexCount = 0;

	scDesc.SampleDesc.Count = 1;







	//頂点バッファ作成

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			default:

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	pBackBuffer->Release();

	};

		SDL_RenderClear(ren);

			case SDLK_LEFT:

	{



int main(int, char**)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		{

{





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

#include <SDL.h>



	for (int j = 0; j < icount; j++)

		return hr;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	SAFE_RELEASE(m_pPixelShader);

	XMFLOAT4X4 view;

	//Create Index

	m_pDepthStencilView = NULL;



	}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#include <iostream>





				break;



	bool ret = tinyobj::LoadObj(

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		{



	if (FAILED(hr))





	std::vector<tinyobj::material_t> materials;

}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_Viewport.MaxDepth = 1.0f;

	std::vector<tinyobj::material_t> materials;

	txDesc.Height = rect.Height();

				// access to vertex

	reader_config.mtl_search_path = "./"; // Path to material files

	D3D_FEATURE_LEVEL level;

		return hr;

	m_VertexCount = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	/*

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];





			case SDLK_LEFT:

	if (m_pImmediateContext)





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.SampleDesc.Quality = 0;

		pLevels,

	ConstantLightBuffer clb;

		&level,

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

#endif

	m_pPixelShader = NULL;





	XMFLOAT4X4 world;

	SDL_DestroyTexture(tex);

	{

	scDesc.BufferDesc.Height = rect.Height();



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				indexlist.push_back(index);

	//テクスチャ読み込み

	ibDesc.StructureByteStride = 0;

	m_Viewport.MaxDepth = 1.0f;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		SDL_RenderClear(ren);



		return 1;

	m_pSampler = NULL;

		if (e.type == SDL_QUIT)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pSwapChain->Present(0, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	for (int j = 0; j < icount; j++)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

		//User presses a key

{

		SDL_RenderClear(ren);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();

	SDL_DestroyRenderer(ren);



	::ZeroMemory(&scDesc, sizeof(scDesc));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_FreeSurface(bmp);

	//vector<WORD> index_t;



		if (e.type == SDL_QUIT)

		&m_pSwapChain,



	m_pVertexBuffer = NULL;

		flags,

		SDL_Delay(1000);



	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pTexture);

void CD3DTest::Release()

	m_pMatrixBuffer = NULL;



	{

		{

				tinyobj::real_t ty =



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	tinyobj::ObjReader reader;



}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			switch (e.key.keysym.sym)

{

	txDesc.SampleDesc.Quality = 0;

	D3D11_BUFFER_DESC cbDesc;

#include <SDL.h>

		&error,

	scDesc.BufferCount = 1;

	irData.pSysMem = &pIList[0];

		}



				vertex.push_back(vertex_tmp);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	for (int i = 0; i < 3; i++)

	dsDesc.Format = txDesc.Format;

	//vector<WORD> index_t;

		SDL_Delay(1000);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	for (size_t s = 0; s < shapes.size(); s++)

	//Create Index

	auto& shapes = reader.GetShapes();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	reader_config.mtl_search_path = "./"; // Path to material files

	float    nearZ = 0.1f;



		return hr;





	if (FAILED(hr))

 */

	m_Viewport.TopLeftY = 0;

	tinyobj::ObjReaderConfig reader_config;

	/*

	irData.SysMemPitch = 0;

	::GetClientRect(hwnd, &rect);

	m_IndexCount = icount;

			switch (e.key.keysym.sym)

				// access to vertex

	//インデックスバッファ作成

	XMStoreFloat4(&clb.eyePos, eye);

struct ConstantMaterial {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

}



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		//User requests quit



	ConstantMaterial material; //物体の質感

	txDesc.SampleDesc.Quality = 0;

{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}



	D3D11_SUBRESOURCE_DATA irData;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	XMFLOAT4 pos;               //座標(x,y,z)

	::GetClientRect(hwnd, &rect);

#include "DirectXManager.h"

		&error,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

#include <SDL.h>



	m_IndexCount = icount;

	//Key press surfaces constants

	ibDesc.MiscFlags = 0;

		NULL,

	cbDesc.CPUAccessFlags = 0;



			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string imagePath = "hello.bmp";

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	//頂点シェーダー生成

	m_pSwapChain = NULL;

			index_offset += num_vertices;





	float    fov = XMConvertToRadians(20.0f);

	// Loop over shapes

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	return hr;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		&m_pImmediateContext);

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pTextureView);

	pBackBuffer->Release();

			default:

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

CD3DTest::~CD3DTest()

	irData.pSysMem = &pIList[0];





	for (size_t s = 0; s < shapes.size(); s++)

		SDL_RenderPresent(ren);

	}

		cout << "SDL_INIT_ERROR" << endl;

/*

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

			//Select surfaces based on key press

		if (!reader.Error().empty())

	SDL_Quit();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	if (!reader.Warning().empty())

{



	m_pInputLayout = NULL;

			case SDLK_DOWN:

	//定数バッファ作成

		KEY_PRESS_SURFACE_UP,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return 1;



	txDesc.Height = rect.Height();

	return hr;

	std::vector<tinyobj::shape_t> shapes;

		flags,

}

};

	SAFE_RELEASE(m_pSwapChain);



				WORD index = idx.vertex_index;

				break;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

{

};

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//ビューポート設定

	{

		else if (e.type == SDL_KEYDOWN)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		delete[] pVList;

	m_pSampler = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vector<Vertex> vertexlist;

	//Key press surfaces constants

	::GetClientRect(hwnd, &rect);

	cbDesc.MiscFlags = 0;

	//インデックスバッファ作成

#define TINYOBJLOADER_IMPLEMENTATION

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pInputLayout = NULL;

	m_pSwapChain = NULL;



	WORD   icount = indexList.size();



		}

	D3D11_SUBRESOURCE_DATA vrData;

{

	}

		SDL_Delay(1000);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			{

		NULL,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	D3D11_SUBRESOURCE_DATA vrData;



	XMFLOAT4X4 world;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.SampleDesc.Quality = 0;

			// Loop over vertices in the face.

		&attrib,

#include <iostream>

int SEGMENT = 36;

		return hr;

	if (m_pImmediateContext)

	vbDesc.MiscFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pMatrixBuffer = NULL;

	dsDesc.Texture2D.MipSlice = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.SysMemSlicePitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	for (int i = 0; i < vcount; i++)

	scDesc.SampleDesc.Count = 1;





	m_pDepthStencilView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	{

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_BUFFER_DESC ibDesc;

	tinyobj::ObjReader reader;

	tinyobj::attrib_t attrib;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	auto& shapes = reader.GetShapes();



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}*/







	for (size_t s = 0; s < shapes.size(); s++)

		SDL_Delay(1000);

	txDesc.MipLevels = 1;

		return hr;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	auto& attrib = reader.GetAttrib();

	if (!reader.Warning().empty())

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





		//User presses a key

			int num_vertices = shape.mesh.num_face_vertices[f];

	D3D11_SUBRESOURCE_DATA irData;

}
	m_pDepthStencilView = NULL;

	ConstantMaterial material; //物体の質感

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyRenderer(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	cbDesc.CPUAccessFlags = 0;



	m_pVertexShader = NULL;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		flags,



struct ConstantLight {

		R"(cube.obj)");

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	D3D11_SUBRESOURCE_DATA irData;



	SAFE_RELEASE(m_pPixelShader);

			{

	//Create Index

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	tinyobj::attrib_t attrib;

	scDesc.SampleDesc.Count = 1;

	m_pSwapChain->Present(0, 0);

	enum KeyPressSurfaces

		return hr;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Quit();



		return 1;

	m_pDepthStencilView = NULL;





	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				indexlist.push_back(idx.vertex_index);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D_FEATURE_LEVEL level;

}

	tinyobj::ObjReader reader;

{

	txDesc.MipLevels = 1;

	::GetClientRect(hwnd, &rect);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	//vector<WORD> index_t;

		return hr;

	SDL_DestroyRenderer(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

	}



	// Loop over shapes



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	{







	m_VertexCount = vcount;



			case SDLK_RIGHT:

	{

	m_Viewport.MinDepth = 0.0f;

	txDesc.SampleDesc.Quality = 0;

	{

{

	tinyobj::ObjReaderConfig reader_config;

}


		D3D_DRIVER_TYPE_HARDWARE,

			default:





	m_VertexCount = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;

struct ConstantLightBuffer {

	txDesc.CPUAccessFlags = 0;

	scDesc.Windowed = TRUE;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL level;

	m_pLightBuffer = NULL;



	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))



	txDesc.MipLevels = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_IndexCount = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	SDL_Quit();

		return hr;

	m_pTexture = NULL;

		return 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		{

	scDesc.SampleDesc.Quality = 0;

			case SDLK_DOWN:

struct ConstantLightBuffer {

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	SDL_DestroyRenderer(ren);

{

	{

	if (FAILED(hr))



	XMFLOAT4 diffuse;           //拡散(r,g,b)



	WORD* pIList = new WORD[icount];

#ifdef _DEBUG

		&m_pDevice,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (!error.empty())





	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	};

				indexlist.push_back(index);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	CRect                rect;

HRESULT CD3DTest::Create(HWND hwnd)



		SDL_RenderClear(ren);

	auto& shapes = reader.GetShapes();

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 specular;          //反射(r,g,b)



		if (!ret)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Event e;



	m_pLightBuffer = NULL;

	ibDesc.StructureByteStride = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pDepthStencilView = NULL;

	ConstantMaterial material; //物体の質感

			switch (e.key.keysym.sym)

	ibDesc.MiscFlags = 0;

		}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	UINT flags = 0;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				// access to vertex

	{

	//Vertex* pVList = new Vertex[vcount];

	}*/

	std::vector<tinyobj::material_t> materials;

	m_VertexCount = 0;

	{

	SDL_FreeSurface(suf);

		if (!reader.Error().empty())

	{

	m_Viewport.MinDepth = 0.0f;





	SDL_DestroyRenderer(ren);



	m_VertexCount = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferDesc.Width = rect.Width();

struct ConstantMaterial {

	SDL_DestroyRenderer(ren);

	m_pPixelShader = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMFLOAT4 pos;               //座標(x,y,z)

		&materials,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pDevice = NULL;

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

			index_offset += fv;

				break;





int SEGMENT = 36;





	SDL_DestroyRenderer(ren);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			}



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMFLOAT4X4 world;



	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pSwapChain);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		SDL_Delay(1000);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t tx =

{



	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))



	//ビューポート設定

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			index_offset += num_vertices;

			index_offset += fv;

			switch (e.key.keysym.sym)

		size_t index_offset = 0;

	D3D11_SUBRESOURCE_DATA irData;

	scDesc.BufferDesc.Width = rect.Width();

{

	m_Angle += XMConvertToRadians(1.0f);



{

				tinyobj::real_t ty =

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	HRESULT              hr;

		// Loop over faces(polygon)

				indexlist.push_back(idx.vertex_index);

HRESULT CD3DTest::Create(HWND hwnd)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		SDL_Delay(1000);

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		pIList[j] = indexList[j];

			case SDLK_LEFT:

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vbDesc.CPUAccessFlags = 0;

}

 * Lesson 1: Hello World!

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	scDesc.BufferCount = 1;

			index_offset += fv;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMFLOAT4X4 view;



void CD3DTest::Render()

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





		if (e.type == SDL_QUIT)

	m_Viewport.Width = (FLOAT)rect.Width();



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//インデックスバッファ作成



	XMStoreFloat4(&clb.ambient, lightAmbient);





			int num_vertices = shape.mesh.num_face_vertices[f];

	m_Viewport.TopLeftX = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;



				break;









{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_SAMPLER_DESC smpDesc;



	return 0;

	pBackBuffer->Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		&level,

			{





	vbDesc.CPUAccessFlags = 0;

	//定数バッファ作成

				WORD index = idx.vertex_index;

		{



	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

	m_pDepthStencilTexture = NULL;

	/*

		return 1;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

	vrData.SysMemPitch = 0;



		&attrib,

	if (FAILED(hr))



	}



	{



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pVertexShader = NULL;



		KEY_PRESS_SURFACE_RIGHT,

	XMFLOAT4X4 projection;

int SEGMENT = 36;

	m_Viewport.TopLeftY = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,





}

	auto& shapes = reader.GetShapes();

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		KEY_PRESS_SURFACE_DOWN,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);

		size_t index_offset = 0;  // インデントのオフセット

	m_pTextureView = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

struct ConstantMatrixBuffer {

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (const auto& shape : shapes)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	/*

			}

{

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

		flags,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	reader_config.mtl_search_path = "./"; // Path to material files

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return hr;

	SDL_FreeSurface(bmp);

	WORD* pIList = new WORD[icount];

	//頂点レイアウト作成

				break;

	if (FAILED(hr))

				indexlist.push_back(index);



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	tinyobj::attrib_t attrib;

		exit(1);



 */



	}

{

				break;

	Release();



		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	auto& shapes = reader.GetShapes();

	vrData.pSysMem = &pVList[0];

			{

	vbDesc.MiscFlags = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



		return 1;

		pLevels,



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		pLevels,

	scDesc.SampleDesc.Count = 1;

	{

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			}

	}

		KEY_PRESS_SURFACE_UP,

	txDesc.MiscFlags = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			default:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	irData.SysMemSlicePitch = 0;

		}

}

		KEY_PRESS_SURFACE_TOTAL

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pMatrixBuffer);

		if (e.type == SDL_QUIT)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		R"(cube.obj)");





	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			case SDLK_DOWN:

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		flags,

		return hr;

	}

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			//Select surfaces based on key press



	if (!reader.ParseFromFile(inputfile, reader_config))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	bool ret = tinyobj::LoadObj(

	m_pInputLayout = NULL;

	m_pVertexBuffer = NULL;

		exit(1);

		cout << "SDL_INIT_ERROR" << endl;

		KEY_PRESS_SURFACE_DEFAULT,

	if (FAILED(hr))

				// access to vertex

				break;

	}



		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.ambient, lightAmbient);





				break;



	if (FAILED(hr))

	m_pImmediateContext = NULL;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



};

	ibDesc.CPUAccessFlags = 0;

 */

		if (!reader.Error().empty())



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		KEY_PRESS_SURFACE_DEFAULT,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::string error;



}

	m_Viewport.MinDepth = 0.0f;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	if (FAILED(hr))



	D3D11_SUBRESOURCE_DATA vrData;

	txDesc.SampleDesc.Count = 1;

	if (!reader.ParseFromFile(inputfile, reader_config))

		flags,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



		flags,

		}



		{

	SDL_FreeSurface(bmp);

	UINT strides = sizeof(Vertex);

				break;

	m_pRenderTargetView = NULL;

	cbDesc.StructureByteStride = 0;



		&error,

	SAFE_RELEASE(m_pRenderTargetView);

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::vector<tinyobj::shape_t> shapes;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			exit(1);

	SAFE_RELEASE(m_pMatrixBuffer);

struct ConstantMatrixBuffer {

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{

	Release();



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	XMFLOAT4X4 projection;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SDL_DestroyRenderer(ren);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

CD3DTest::~CD3DTest()



};

	SAFE_RELEASE(m_pIndexBuffer);

			case SDLK_RIGHT:

		if (e.type == SDL_QUIT)

	}*/

	SAFE_RELEASE(m_pVertexShader);

		SDL_Delay(1000);

		&level,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			// Loop over vertices in the face.

	tinyobj::ObjReader reader;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//Key press surfaces constants



	{

	{

};

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	delete[] pVList;

{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

};

	}

				tinyobj::real_t ty =

	scDesc.BufferDesc.Width = rect.Width();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pTextureView = NULL;

	for (int j = 0; j < icount; j++)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		}

	}

	D3D11_BUFFER_DESC cbDesc;

	//Vertex* pVList = new Vertex[vcount];

				WORD index = idx.vertex_index;



				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMFLOAT4 ambient;           //環境(r,g,b)



	ibDesc.StructureByteStride = 0;

		return hr;

	SDL_DestroyWindow(win);





	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	SDL_FreeSurface(suf);

	//Vertex* pVList = new Vertex[vcount];

	{

		SDL_Delay(1000);

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.OutputWindow = hwnd;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	/*

	{

int main(int, char**)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	UINT flags = 0;

		m_pImmediateContext->ClearState();



		SDL_RenderClear(ren);

	std::string error;



/*

			for (size_t v = 0; v < fv; v++)

	vrData.SysMemPitch = 0;



	SAFE_RELEASE(m_pVertexShader);







		else if (e.type == SDL_KEYDOWN)

		flags,

	SAFE_RELEASE(m_pSampler);

				break;

		}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	std::vector<tinyobj::shape_t> shapes;

		exit(1);

	//深度ステンシルバッファ作成

}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		&materials,



	{

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		delete[] pIList;

	m_pTextureView = NULL;

		cout << "SDL_INIT_ERROR" << endl;

	dsDesc.Texture2D.MipSlice = 0;

			default:

				WORD index = idx.vertex_index;

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pVertexBuffer);

		{

	D3D11_BUFFER_DESC ibDesc;

			}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;







	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t ty =





	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				break;

		SDL_Delay(1000);

		R"(cube.obj)");

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4 pos;               //座標(x,y,z)

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//頂点レイアウト作成

{

#include <iostream>

	cbDesc.StructureByteStride = 0;

#ifdef _DEBUG

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pSampler = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	irData.pSysMem = &pIList[0];



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

	for (int j = 0; j < icount; j++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	WORD* pIList = new WORD[icount];

		pIList[j] = indexList[j];

	if (FAILED(hr))



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;

	//深度ステンシルバッファ作成

	vector<Vertex> vertexlist;

#include <iostream>

	SDL_DestroyWindow(win);



	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pIndexBuffer);

{

	m_pDepthStencilView = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantLightBuffer {

			index_offset += fv;

	D3D11_SAMPLER_DESC smpDesc;

	SAFE_RELEASE(m_pDevice);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

				vertex.push_back(vertex_tmp);





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



struct ConstantMatrixBuffer {

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			case SDLK_LEFT:





			exit(1);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



};

		&attrib,

		&shapes,

	m_Viewport.TopLeftX = 0;





	m_pTexture = NULL;

#include "DirectXManager.h"

	SDL_DestroyWindow(win);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pSwapChain = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			index_offset += fv;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

 */

	SAFE_RELEASE(m_pLightBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

	XMFLOAT4         eyePos;   //視点座標

			int num_vertices = shape.mesh.num_face_vertices[f];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				vertex.push_back(vertex_tmp);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

};

	dsDesc.Format = txDesc.Format;

	D3D11_BUFFER_DESC cbDesc;

	}*/



	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.MiscFlags = 0;

	return 0;

	D3D11_SUBRESOURCE_DATA vrData;

	m_pLightBuffer = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	txDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftX = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.MiscFlags = 0;

	//ピクセルシェーダー生成



	UINT flags = 0;

	for (int i = 0; i < 3; i++)

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			index_offset += fv;

		{

	Vertex* pVList = new Vertex[vcount];



/*



	m_pDepthStencilView = NULL;

	if (FAILED(hr))

		{

	return;



	txDesc.Width = rect.Width();

	vbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	std::string error;

		{



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		&m_pImmediateContext);

	m_Viewport.TopLeftX = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_DestroyTexture(tex);

	{

				// access to vertex



};



			case SDLK_LEFT:

	float    nearZ = 0.1f;

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.SampleDesc.Count = 1;

		return hr;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	Release();

	ConstantMaterial material; //物体の質感

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	//Key press surfaces constants

	XMFLOAT4X4 world;

	D3D11_BUFFER_DESC vbDesc;

	//Clean up our objects and quit

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			exit(1);

	SDL_DestroyRenderer(ren);

	m_Viewport.TopLeftX = 0;

		return hr;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		SDL_Delay(1000);

	SDL_DestroyTexture(tex);

	}

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_Viewport.TopLeftX = 0;

	vector<Vertex> vertexlist;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				tinyobj::real_t tx =

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantLight    pntLight; //点光源

	{

	vbDesc.MiscFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

struct ConstantLightBuffer {

	m_pTexture = NULL;

		// Loop over faces(polygon)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		SDL_Delay(1000);





		&m_pDevice,



}
	HRESULT              hr;

			{

	m_VertexCount = 0;

		pVList[i] = vertexlist[i];

	CRect                rect;





	if (FAILED(hr))

			for (size_t v = 0; v < fv; v++)

void CD3DTest::Render()

	m_pIndexBuffer = NULL;

	scDesc.OutputWindow = hwnd;

		pIList[j] = indexList[j];

				break;

	for (int i = 0; i < 3; i++)

		&m_pDevice,

{

	m_pSwapChain->Present(0, 0);

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pMatrixBuffer);

	vector<Vertex> vertexlist;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_TOTAL

using std::cout; using std::endl;

	//First we need to start up SDL, and make sure it went ok

		&m_pSwapChain,

CD3DTest::CD3DTest()

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!error.empty())

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_FreeSurface(suf);

	//頂点レイアウト作成

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Create Index

		delete[] pIList;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.StructureByteStride = 0;



			}

	if (!reader.Warning().empty())

	m_pTextureView = NULL;

	m_pImmediateContext = NULL;



				break;

	vrData.pSysMem = &pVList[0];

#ifdef _DEBUG

	{

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D11_SAMPLER_DESC smpDesc;

	//頂点シェーダー生成

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	ibDesc.MiscFlags = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	UINT flags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vbDesc.StructureByteStride = 0;

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext = NULL;



	//Key press surfaces constants



	if (FAILED(hr))

			index_offset += num_vertices;

	//ビューポート設定

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.MiscFlags = 0;

	scDesc.SampleDesc.Quality = 0;

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	SAFE_RELEASE(m_pSampler);

	return hr;

	//頂点シェーダー生成



	SDL_Quit();

	m_pVertexBuffer = NULL;

	m_Viewport.TopLeftY = 0;

	scDesc.SampleDesc.Quality = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	{

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			}

				vertex.push_back(vertex_tmp);



			break;

	while (SDL_PollEvent(&e) != 0)

				break;





	/*



	tinyobj::ObjReader reader;

}

		KEY_PRESS_SURFACE_DEFAULT,



	std::vector<tinyobj::material_t> materials;

	}

	if (FAILED(hr))

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.SampleDesc.Count = 1;

		D3D_DRIVER_TYPE_HARDWARE,





				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		&error,

			//Select surfaces based on key press

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

#include "DirectXManager.h"

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		1,

		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pVertexBuffer);

	}

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		{

	}



	UINT flags = 0;

using std::cout; using std::endl;

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_UP,

	SDL_DestroyTexture(tex);

		}

		return hr;

	SAFE_RELEASE(m_pDepthStencilTexture);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pDepthStencilView = NULL;

				// access to vertex



			//Select surfaces based on key press

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



};

	m_pLightBuffer = NULL;

	D3D_FEATURE_LEVEL level;

	txDesc.MipLevels = 1;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_IndexCount = 0;





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	return hr;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pPixelShader);

}



	SDL_Quit();

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	m_pRenderTargetView = NULL;

	cbDesc.MiscFlags = 0;



	tinyobj::ObjReaderConfig reader_config;

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Height = rect.Height();

	{

		SDL_Delay(1000);

		if (!ret)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			break;

	return 0;

	}

				break;

		{

	bool ret = tinyobj::LoadObj(





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	XMFLOAT4         ambient;  //環境光(r,g,b)

}

	SAFE_RELEASE(m_pVertexBuffer);



		m_pImmediateContext->ClearState();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	m_pSwapChain = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	scDesc.SampleDesc.Quality = 0;

	m_IndexCount = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		delete[] pVList;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}



int main(int, char**)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//Key press surfaces constants

	WORD   icount = indexList.size();



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t tx =

			exit(1);





	//ビューポート設定

	m_pSampler = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				vertex.push_back(vertex_tmp);

	XMFLOAT4 specular;          //反射(r,g,b)

#include "DirectXManager.h"

int main(int, char**)

};

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	auto& attrib = reader.GetAttrib();

	auto& shapes = reader.GetShapes();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	txDesc.CPUAccessFlags = 0;

	std::string error;

};



			exit(1);



	if (FAILED(hr))

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

{

	vbDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{

	m_Angle += XMConvertToRadians(1.0f);

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				break;

		if (e.type == SDL_QUIT)

		return hr;

	//頂点レイアウト作成

	m_pSwapChain = NULL;

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	vrData.SysMemPitch = 0;

	WORD   icount = indexList.size();

				tinyobj::real_t ty =



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

int main(int, char**)

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	}

	for (int i = 0; i < 3; i++)

		pVList[i] = vertexlist[i];

		m_pImmediateContext->ClearState();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				WORD index = idx.vertex_index;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



				// access to vertex

		SDL_RenderPresent(ren);

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



{

	//頂点バッファ作成

#include "DirectXManager.h"

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{

	txDesc.CPUAccessFlags = 0;

{

	{

	m_Viewport.Width = (FLOAT)rect.Width();

		if (e.type == SDL_QUIT)

};

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	cbDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;

		size_t index_offset = 0;

	SDL_DestroyTexture(tex);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		SDL_RenderPresent(ren);

	if (!reader.ParseFromFile(inputfile, reader_config))



	if (!reader.Warning().empty())

			case SDLK_DOWN:

	SDL_DestroyRenderer(ren);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#include <iostream>

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		&error,



HRESULT CD3DTest::Create(HWND hwnd)

				break;

		KEY_PRESS_SURFACE_TOTAL

		R"(cube.obj)");

		SDL_RenderClear(ren);

	//頂点バッファ作成

			index_offset += num_vertices;

		R"(cube.obj)");



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	ConstantLight    pntLight; //点光源

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

void CD3DTest::Release()

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyRenderer(ren);



		D3D11_SDK_VERSION,

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

}

	m_Viewport.TopLeftY = 0;



	//vector<Vertex> vertex_t;

	SDL_Quit();

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

	vrData.SysMemPitch = 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	for (const auto& shape : shapes)

	XMStoreFloat4(&clb.eyePos, eye);

	m_pVertexBuffer = NULL;

	enum KeyPressSurfaces

	DXGI_SWAP_CHAIN_DESC scDesc;

};

	m_Viewport.TopLeftY = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Quit();

				indexlist.push_back(idx.vertex_index);

	}

	SAFE_RELEASE(m_pIndexBuffer);

 * Lesson 1: Hello World!

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			{

	m_Angle += XMConvertToRadians(1.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	WORD* pIList = new WORD[icount];

	tinyobj::attrib_t attrib;



	ConstantMatrixBuffer cmb;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.MiscFlags = 0;

		{

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	//Vertex* pVList = new Vertex[vcount];

	m_Viewport.Height = (FLOAT)rect.Height();

		{

	m_pDevice = NULL;

	{

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (!error.empty())

	txDesc.MipLevels = 1;

	//ピクセルシェーダー生成



	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ID3D11Texture2D* pBackBuffer;

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	return 0;

{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Release();

	WORD   icount = indexList.size();

	XMStoreFloat4(&clb.ambient, lightAmbient);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t tx =

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				break;



	ConstantMatrixBuffer cmb;

				// access to vertex

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    farZ = 100.0f;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);







	LoadObj(vertexlist, indexList);

int SEGMENT = 36;

	//First we need to start up SDL, and make sure it went ok

	for (size_t s = 0; s < shapes.size(); s++)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.Windowed = TRUE;



	if (FAILED(hr))

		return hr;

	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

	//テクスチャ読み込み

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.Height = (FLOAT)rect.Height();

	{

		&shapes,

	XMFLOAT4X4 world;

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pDevice);

}

	SAFE_RELEASE(m_pMatrixBuffer);





};

				break;

	int     vcount = vertexlist.size();

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.eyePos, eye);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_Angle += XMConvertToRadians(1.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vbDesc.CPUAccessFlags = 0;

	//インデックスバッファ作成

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_TEXTURE2D_DESC txDesc;

		return hr;

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pPixelShader = NULL;

			case SDLK_UP:

	Release();

	if (FAILED(hr))

	bool ret = tinyobj::LoadObj(

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

	XMFLOAT4 specular;          //反射(r,g,b)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				tinyobj::real_t tx =

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

}

	cbDesc.CPUAccessFlags = 0;



	XMFLOAT4 specular;          //反射(r,g,b)

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&shapes,

struct ConstantLight {

		KEY_PRESS_SURFACE_UP,

using std::cout; using std::endl;



	m_pTextureView = NULL;







	if (FAILED(hr))

{



	}

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pVertexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return hr;

	txDesc.SampleDesc.Quality = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	//頂点バッファ作成

				indexlist.push_back(index);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		&shapes,





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ibDesc.CPUAccessFlags = 0;



			{



		return hr;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pTexture);





	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	};





	irData.SysMemSlicePitch = 0;





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		&level,

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	//ピクセルシェーダー生成

		pVList[i] = vertexlist[i];

	SDL_DestroyWindow(win);

			{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	float    fov = XMConvertToRadians(20.0f);

	m_Viewport.Height = (FLOAT)rect.Height();

	}



	float    fov = XMConvertToRadians(20.0f);





			case SDLK_LEFT:

}

				tinyobj::real_t tx =

	delete[] pIList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

using std::cout; using std::endl;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_IndexCount = icount;

	m_Angle += XMConvertToRadians(1.0f);

	m_Viewport.Width = (FLOAT)rect.Width();



	for (const auto& shape : shapes)

		SDL_RenderPresent(ren);

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

				// access to vertex



	}

	txDesc.SampleDesc.Quality = 0;





			}

	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

void CD3DTest::Render()

	auto& materials = reader.GetMaterials();



				break;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		pLevels,

				break;

		return hr;

	}

		&m_pDevice,

	vector<WORD> indexList;

	{

	vbDesc.StructureByteStride = 0;

	for (int i = 0; i < vcount; i++)



	D3D11_BUFFER_DESC vbDesc;



			case SDLK_UP:

	m_pDepthStencilTexture = NULL;

	UINT strides = sizeof(Vertex);

	delete[] pIList;

	{

#include <iostream>

	XMFLOAT4 pos;               //座標(x,y,z)

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

		NULL,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		SDL_RenderPresent(ren);



	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

#include <iostream>

			default:

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&error,

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pMatrixBuffer);

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

}





		return hr;

			{

	ID3D11Texture2D* pBackBuffer;

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pTextureView);



};

}
	cbDesc.StructureByteStride = 0;

		if (!ret)

	if (FAILED(hr))

	//vector<Vertex> vertex_t;

struct ConstantLight {

		NULL,

		}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	}

	{

		KEY_PRESS_SURFACE_LEFT,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.ByteWidth = sizeof(WORD) * icount;





	//ピクセルシェーダー生成

	ConstantMaterial material; //物体の質感

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyRenderer(ren);

	//Key press surfaces constants

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	// Loop over shapes

	m_VertexCount = vcount;

};



			int num_vertices = shape.mesh.num_face_vertices[f];

	m_IndexCount = 0;

	txDesc.SampleDesc.Quality = 0;

				indexlist.push_back(idx.vertex_index);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

#include <SDL.h>

	SAFE_RELEASE(m_pTexture);

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	Release();

	SAFE_RELEASE(m_pRenderTargetView);

	m_Viewport.Width = (FLOAT)rect.Width();

				break;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		SDL_RenderClear(ren);

	cbDesc.MiscFlags = 0;



	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4X4 view;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	if (FAILED(hr))



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

}

	m_Angle += XMConvertToRadians(1.0f);



	float    farZ = 100.0f;

	SAFE_RELEASE(m_pRenderTargetView);



struct ConstantMaterial {



	float    farZ = 100.0f;

	SAFE_RELEASE(m_pDepthStencilTexture);

	return;



	tinyobj::ObjReader reader;

	int     vcount = vertexlist.size();

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ConstantMatrixBuffer cmb;

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

void CD3DTest::Release()

			case SDLK_DOWN:

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	std::string imagePath = "hello.bmp";

	m_pDepthStencilTexture = NULL;

	scDesc.SampleDesc.Quality = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		delete[] pIList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	cbDesc.MiscFlags = 0;

		SDL_RenderPresent(ren);

	m_Viewport.TopLeftX = 0;



	SDL_DestroyWindow(win);

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	D3D11_SUBRESOURCE_DATA irData;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

			}

	SAFE_RELEASE(m_pDepthStencilView);

	txDesc.ArraySize = 1;

		D3D11_SDK_VERSION,

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		else if (e.type == SDL_KEYDOWN)

	txDesc.CPUAccessFlags = 0;

	m_pLightBuffer = NULL;



	SAFE_RELEASE(m_pVertexShader);

};

	WORD* pIList = new WORD[icount];

	}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pLightBuffer);

	{

	return 0;



}



		{

int main(int, char**)



	ibDesc.CPUAccessFlags = 0;

	{

	m_pInputLayout = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

#include "DirectXManager.h"

		else if (e.type == SDL_KEYDOWN)

}

};

	dsDesc.Texture2D.MipSlice = 0;

	for (size_t s = 0; s < shapes.size(); s++)

	}



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		pLevels,

		&scDesc,

}

	m_pInputLayout = NULL;



	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	irData.pSysMem = &pIList[0];

		cout << "SDL_INIT_ERROR" << endl;

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pTextureView);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	bool ret = tinyobj::LoadObj(

	//ビューポート設定

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	std::string imagePath = "hello.bmp";

	float    nearZ = 0.1f;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				break;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

			default:

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		SDL_RenderClear(ren);

		SDL_Delay(1000);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	for (int i = 0; i < vcount; i++)

	CRect                rect;

	m_VertexCount = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.Height = rect.Height();

	if (FAILED(hr))

		1,



void CD3DTest::Release()

	ConstantMaterial material; //物体の質感

		//User requests quit

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	if (!reader.Warning().empty())

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_VertexCount = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return 1;

	vrData.SysMemPitch = 0;

		&error,

	m_pSwapChain = NULL;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				WORD index = idx.vertex_index;

		&scDesc,

				break;





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.MiscFlags = 0;

	}

		pIList[j] = indexList[j];

		&m_pSwapChain,



	SDL_DestroyRenderer(ren);

		return hr;

	//Vertex* pVList = new Vertex[vcount];

	XMFLOAT4X4 view;

		return hr;



	m_pSampler = NULL;

	//Vertex* pVList = new Vertex[vcount];

		return hr;

	tinyobj::ObjReaderConfig reader_config;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		R"(cube.obj)");

	}*/

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	std::string inputfile = "test.obj";

		{

#ifdef _DEBUG

		SDL_Delay(1000);

	vector<Vertex> vertexlist;

	Release();

	if (FAILED(hr))

	WORD* pIList = new WORD[icount];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	}

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);



				break;

		SDL_RenderPresent(ren);

	SDL_DestroyTexture(tex);

		D3D_DRIVER_TYPE_HARDWARE,

	}

{

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

		KEY_PRESS_SURFACE_TOTAL



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))

	XMFLOAT4X4 view;

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		&shapes,

			}

	Release();

	scDesc.SampleDesc.Count = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	if (FAILED(hr))

	UINT strides = sizeof(Vertex);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	LoadObj(vertexlist, indexList);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	UINT offsets = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			case SDLK_RIGHT:

	vector<Vertex> vertexlist;

{

				indexlist.push_back(idx.vertex_index);



	m_pSwapChain->Present(0, 0);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		&m_pDevice,



	XMFLOAT4X4 world;

		D3D11_SDK_VERSION,

	{





	SAFE_RELEASE(m_pPixelShader);

	//ビューポート設定



	std::vector<tinyobj::shape_t> shapes;

	}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (m_pImmediateContext)

		}

	m_pRenderTargetView = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	SAFE_RELEASE(m_pSampler);

		&scDesc,

	}

	{

	if (FAILED(hr))

		R"(cube.obj)");

		1,

	m_Viewport.Height = (FLOAT)rect.Height();

{

		pLevels,

/*

	tinyobj::ObjReader reader;



	SDL_Quit();



	WORD* pIList = new WORD[icount];

{

	std::string inputfile = "test.obj";

		&materials,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			index_offset += fv;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	vrData.SysMemPitch = 0;

#ifdef _DEBUG

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		&attrib,

	//ピクセルシェーダー生成

		// Loop over faces(polygon)

	irData.pSysMem = &pIList[0];

	//vector<WORD> index_t;

	if (FAILED(hr))



	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pMatrixBuffer = NULL;

		&scDesc,

			break;


