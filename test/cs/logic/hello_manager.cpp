

				break;

		&attrib,

		}

	{

		&level,

	WORD   icount = indexList.size();

	scDesc.Windowed = TRUE;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pDepthStencilTexture);

	Vertex* pVList = new Vertex[vcount];

	scDesc.BufferDesc.Width = rect.Width();

	vrData.SysMemSlicePitch = 0;

};

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	UINT offsets = 0;

	}

	m_Viewport.MaxDepth = 1.0f;

	//Create Index

	SAFE_RELEASE(m_pLightBuffer);

	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

{

	std::string error;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

			case SDLK_DOWN:

struct ConstantMaterial {

	::ZeroMemory(&scDesc, sizeof(scDesc));

int SEGMENT = 36;

	}*/

				break;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}

	{



	{

	XMFLOAT4         eyePos;   //視点座標

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//定数バッファ作成

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

 */

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};

{

	}

	m_pPixelShader = NULL;

	//vector<WORD> index_t;

	Release();

struct ConstantLight {

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_IndexCount = icount;

	m_pLightBuffer = NULL;



	SAFE_RELEASE(m_pIndexBuffer);

{

/*

	SAFE_RELEASE(m_pVertexShader);

	if (!error.empty())



	XMFLOAT4 pos;               //座標(x,y,z)

	D3D11_SAMPLER_DESC smpDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_SAMPLER_DESC smpDesc;

		{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			break;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//vector<WORD> index_t;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (!reader.ParseFromFile(inputfile, reader_config))

}

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.Width = rect.Width();



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	CRect                rect;

	txDesc.Width = rect.Width();

}





	if (FAILED(hr))

using std::cout; using std::endl;

	scDesc.SampleDesc.Count = 1;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ibDesc.CPUAccessFlags = 0;

			case SDLK_UP:

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

#include <iostream>

{



	ID3D11Texture2D* pBackBuffer;

		}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	WORD* pIList = new WORD[icount];

	std::string imagePath = "hello.bmp";

}

		D3D_DRIVER_TYPE_HARDWARE,



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Quit();

	{

				break;

using std::cout; using std::endl;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		}





	}*/





	{



	vbDesc.CPUAccessFlags = 0;

void CD3DTest::Release()

{

	m_pVertexShader = NULL;

		R"(cube.obj)");



	m_pDepthStencilView = NULL;

		&materials,



	m_pDevice = NULL;

				tinyobj::real_t ty =

struct ConstantMaterial {

void CD3DTest::Render()



	int     vcount = vertexlist.size();

			//Select surfaces based on key press

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

using std::cout; using std::endl;

		flags,



};

	ConstantLight    pntLight; //点光源

				break;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_Viewport.TopLeftY = 0;

			for (size_t v = 0; v < num_vertices; v++)

	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_Viewport.MinDepth = 0.0f;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

struct ConstantLightBuffer {

	scDesc.SampleDesc.Count = 1;

		}

			// Loop over vertices in the face.

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};





		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	ibDesc.StructureByteStride = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//頂点バッファ作成

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pDepthStencilView);

		&m_pImmediateContext);

	}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	::ZeroMemory(&scDesc, sizeof(scDesc));

			}

				WORD index = idx.vertex_index;

CD3DTest::CD3DTest()

}



	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	CRect                rect;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		SDL_RenderPresent(ren);

	m_Viewport.MinDepth = 0.0f;

	if (!reader.Warning().empty())



	SDL_Quit();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	LoadObj(vertexlist, indexList);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	HRESULT              hr;

#include <iostream>

		return hr;

	SAFE_RELEASE(m_pLightBuffer);



			case SDLK_RIGHT:

	if (FAILED(hr))









	if (!reader.ParseFromFile(inputfile, reader_config))

	scDesc.OutputWindow = hwnd;

	D3D11_BUFFER_DESC ibDesc;

	float    nearZ = 0.1f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.MipLevels = 1;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_IndexCount = icount;



	SAFE_RELEASE(m_pDepthStencilTexture);





		return hr;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;



		{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				tinyobj::real_t ty =

	WORD   icount = indexList.size();

		return hr;

	//Vertex* pVList = new Vertex[vcount];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	UINT flags = 0;

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_DestroyWindow(win);

	m_pImmediateContext = NULL;

	Release();



#endif

				vertex.push_back(vertex_tmp);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	UINT offsets = 0;

		NULL,

		D3D_DRIVER_TYPE_HARDWARE,

	return 0;

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	{

	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	scDesc.SampleDesc.Count = 1;



	if (!error.empty())

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	tinyobj::ObjReaderConfig reader_config;

	{

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pTexture);

	m_IndexCount = 0;

	SDL_DestroyWindow(win);

	{

	// Loop over shapes

	m_Viewport.Height = (FLOAT)rect.Height();

#define TINYOBJLOADER_IMPLEMENTATION



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	cbDesc.StructureByteStride = 0;

	while (SDL_PollEvent(&e) != 0)



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Angle += XMConvertToRadians(1.0f);

	//Key press surfaces constants





	ID3D11Texture2D* pBackBuffer;

	UINT offsets = 0;

		SDL_RenderPresent(ren);

	vrData.SysMemPitch = 0;



	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			//Select surfaces based on key press

	};



		KEY_PRESS_SURFACE_RIGHT,

	}





using std::cout; using std::endl;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	m_Viewport.TopLeftX = 0;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



			{

				// access to vertex



};

		return hr;

int main(int, char**)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	{



	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#ifdef _DEBUG

	dsDesc.Format = txDesc.Format;



	D3D11_BUFFER_DESC vbDesc;

	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pInputLayout = NULL;

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (int i = 0; i < vcount; i++)

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pDepthStencilView);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	tinyobj::ObjReader reader;

}

		return hr;

	m_VertexCount = vcount;



}

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pLightBuffer);



	SDL_DestroyRenderer(ren);



		return hr;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_DestroyRenderer(ren);



	// Loop over shapes

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		&m_pSwapChain,



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

};









	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	D3D_FEATURE_LEVEL level;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_LEFT,

	//Vertex* pVList = new Vertex[vcount];

	//テクスチャ読み込み

	hr = D3D11CreateDeviceAndSwapChain(NULL,

#define TINYOBJLOADER_IMPLEMENTATION

	tinyobj::attrib_t attrib;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み

 * Lesson 1: Hello World!

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

			index_offset += num_vertices;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				vertex.push_back(vertex_tmp);



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	{

	UINT strides = sizeof(Vertex);

	//ピクセルシェーダー生成

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	vrData.SysMemPitch = 0;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_VertexCount = 0;







		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_RIGHT:

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	ID3D11Texture2D* pBackBuffer;





	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



		}

	ibDesc.CPUAccessFlags = 0;

	Vertex* pVList = new Vertex[vcount];

	//頂点レイアウト作成

	scDesc.BufferDesc.Height = rect.Height();

	return 0;

	D3D11_SUBRESOURCE_DATA vrData;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	{





		SDL_RenderClear(ren);

	std::vector<tinyobj::material_t> materials;

#include <iostream>

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

	/*

	dsDesc.Format = txDesc.Format;

	m_pSwapChain = NULL;

}

		&level,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	delete[] pVList;

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SAFE_RELEASE(m_pTextureView);

int SEGMENT = 36;

	if (!reader.ParseFromFile(inputfile, reader_config))

	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			index_offset += num_vertices;

		}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pInputLayout = NULL;

	}

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))





	m_pTexture = NULL;

		pVList[i] = vertexlist[i];

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		KEY_PRESS_SURFACE_UP,





struct ConstantLightBuffer {

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Release();

		SDL_RenderClear(ren);

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	m_pTexture = NULL;



	std::string inputfile = "test.obj";

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

			}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			}

	//テクスチャ読み込み



};

	{

		return hr;

#include <iostream>

		&attrib,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	std::string error;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pLightBuffer = NULL;

	SAFE_RELEASE(m_pSampler);



			}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{

				// access to vertex



				break;



void CD3DTest::Release()

	ConstantMatrixBuffer cmb;

	WORD   icount = indexList.size();

	SAFE_RELEASE(m_pImmediateContext);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		KEY_PRESS_SURFACE_TOTAL

	//テクスチャ読み込み

{

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&attrib,

{



	XMFLOAT4 ambient;           //環境(r,g,b)

				indexlist.push_back(idx.vertex_index);

	delete[] pIList;

			for (size_t v = 0; v < fv; v++)



struct ConstantMatrixBuffer {

	if (!reader.Warning().empty())

	txDesc.SampleDesc.Quality = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_FreeSurface(bmp);

	m_pIndexBuffer = NULL;

	{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	irData.pSysMem = &pIList[0];

	//ビューポート設定

		pIList[j] = indexList[j];

	if (!reader.Warning().empty())

	delete[] pIList;

};

	m_pLightBuffer = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;

			for (size_t v = 0; v < num_vertices; v++)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_Angle += XMConvertToRadians(1.0f);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pPixelShader = NULL;



	bool ret = tinyobj::LoadObj(

	m_Viewport.Height = (FLOAT)rect.Height();

#include <SDL.h>

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	if (FAILED(hr))

				tinyobj::real_t ty =

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		return hr;

	for (size_t s = 0; s < shapes.size(); s++)



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	pBackBuffer->Release();

}

	XMFLOAT4 specular;          //反射(r,g,b)

	}

		{

	cbDesc.CPUAccessFlags = 0;

		&m_pDevice,

				// access to vertex

	// Loop over shapes

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	float    aspect = m_Viewport.Width / m_Viewport.Height;

				indexlist.push_back(index);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_VertexCount = vcount;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	}



		return hr;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		SDL_RenderClear(ren);





		}

	m_pSampler = NULL;







};

	ConstantMatrixBuffer cmb;



		return hr;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

};



		if (!ret)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&m_pSwapChain,

 * Lesson 1: Hello World!

	if (FAILED(hr))

}

	LoadObj(vertexlist, indexList);

	ibDesc.StructureByteStride = 0;

			}



	return 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	vrData.SysMemPitch = 0;

		pLevels,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pMatrixBuffer);



	m_Viewport.MinDepth = 0.0f;

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pTexture = NULL;

		SDL_RenderClear(ren);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	CRect                rect;

	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	Release();

};

	{

void CD3DTest::Render()

		return hr;

	m_Viewport.TopLeftY = 0;



	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	D3D11_SUBRESOURCE_DATA vrData;

	for (int i = 0; i < vcount; i++)

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

{

	SAFE_RELEASE(m_pDevice);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_Angle += XMConvertToRadians(1.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			{

#include <iostream>

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_RenderPresent(ren);



	cbDesc.MiscFlags = 0;





struct ConstantMatrixBuffer {

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			index_offset += fv;





HRESULT CD3DTest::Create(HWND hwnd)

int main(int, char**)

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pImmediateContext);

	std::string inputfile = "test.obj";

};

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				vertex.push_back(vertex_tmp);

		{





	m_VertexCount = vcount;



	if (m_pImmediateContext)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	pBackBuffer->Release();

};

		if (!reader.Error().empty())



	m_pSampler = NULL;

	cbDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	D3D11_SUBRESOURCE_DATA irData;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 view;

		D3D11_SDK_VERSION,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	Vertex* pVList = new Vertex[vcount];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	Release();

		pVList[i] = vertexlist[i];



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pDepthStencilTexture = NULL;

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



		return hr;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_BUFFER_DESC cbDesc;



		pVList[i] = vertexlist[i];

	//vector<WORD> index_t;

		&attrib,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		//User presses a key

}

	//vector<WORD> index_t;

	auto& attrib = reader.GetAttrib();

	if (!reader.Warning().empty())

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;





	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (FAILED(hr))

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

struct ConstantLight {

	if (!reader.Warning().empty())

	SDL_FreeSurface(bmp);

	if (FAILED(hr))

			}

		// Loop over faces(polygon)

		pVList[i] = vertexlist[i];



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

#include <iostream>





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	m_pIndexBuffer = NULL;

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



			break;

			{

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	DXGI_SWAP_CHAIN_DESC scDesc;

		else if (e.type == SDL_KEYDOWN)

	m_VertexCount = 0;



	D3D11_SUBRESOURCE_DATA vrData;

	vector<Vertex> vertexlist;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



}
		pIList[j] = indexList[j];





	ibDesc.CPUAccessFlags = 0;

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_Event e;

			{

		exit(1);

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

{



#include <iostream>

		pLevels,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	/*

	irData.SysMemSlicePitch = 0;

	txDesc.SampleDesc.Quality = 0;

	cbDesc.StructureByteStride = 0;

	txDesc.MipLevels = 1;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	::ZeroMemory(&scDesc, sizeof(scDesc));

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);







			{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

#include <iostream>

	return 0;

	if (FAILED(hr))

	SAFE_RELEASE(m_pLightBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyRenderer(ren);



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string inputfile = "test.obj";

	}



	{

	if (FAILED(hr))

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_VertexCount = vcount;

#include <SDL.h>

	std::string error;

	UINT flags = 0;

	cbDesc.CPUAccessFlags = 0;

		&m_pSwapChain,

#include <SDL.h>



	HRESULT              hr;

	if (FAILED(hr))

		}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

#define TINYOBJLOADER_IMPLEMENTATION

			{

		if (!ret)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	m_pDepthStencilTexture = NULL;

	{

	HRESULT              hr;

	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.MiscFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

{

				break;

#ifdef _DEBUG



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.Height = rect.Height();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				// access to vertex

}

				break;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D_FEATURE_LEVEL level;



	ConstantMaterial material; //物体の質感

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (!reader.ParseFromFile(inputfile, reader_config))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				tinyobj::real_t tx =

	//vector<Vertex> vertex_t;



 */





	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	irData.SysMemSlicePitch = 0;

}

	D3D11_SAMPLER_DESC smpDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

}

	scDesc.SampleDesc.Quality = 0;

			case SDLK_DOWN:

{

	HRESULT              hr;



				indexlist.push_back(idx.vertex_index);



	//First we need to start up SDL, and make sure it went ok

		SDL_RenderClear(ren);



	//深度ステンシルバッファ作成



	SDL_DestroyWindow(win);



		//User requests quit

		}

	SAFE_RELEASE(m_pDevice);

{



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		KEY_PRESS_SURFACE_UP,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	return;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_Delay(1000);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

 */

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		pLevels,

		delete[] pIList;

	m_pLightBuffer = NULL;

		&scDesc,

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_IndexCount = icount;



		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	return 0;



			{





	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMFLOAT4         ambient;  //環境光(r,g,b)

	irData.SysMemSlicePitch = 0;

	}



				tinyobj::real_t ty =

	//vector<Vertex> vertex_t;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Quality = 0;

#include <SDL.h>



	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pDevice = NULL;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		//User requests quit

	XMFLOAT4 specular;          //反射(r,g,b)

	dsDesc.Texture2D.MipSlice = 0;

	std::string error;

{

		SDL_Delay(1000);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		R"(cube.obj)");

		return hr;

	UINT flags = 0;

		&materials,

void CD3DTest::Render()

		SDL_RenderPresent(ren);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	WORD* pIList = new WORD[icount];

				WORD index = idx.vertex_index;

	//頂点シェーダー生成

#endif



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





 * Lesson 1: Hello World!

	m_pPixelShader = NULL;



	}

				WORD index = idx.vertex_index;



	float    fov = XMConvertToRadians(20.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Vertex* pVList = new Vertex[vcount];



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	LoadObj(vertexlist, indexList);



	m_pVertexShader = NULL;

	D3D11_BUFFER_DESC vbDesc;

	auto& materials = reader.GetMaterials();

	{



#include <SDL.h>

	tinyobj::attrib_t attrib;



		}



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return 1;

	UINT offsets = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_DestroyRenderer(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			}





	WORD   icount = indexList.size();

	m_pDepthStencilTexture = NULL;

	m_pMatrixBuffer = NULL;

		SDL_RenderPresent(ren);

	}

	SAFE_RELEASE(m_pImmediateContext);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	return;

}

		KEY_PRESS_SURFACE_RIGHT,



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		D3D11_SDK_VERSION,

	m_pTexture = NULL;

				tinyobj::real_t tx =

	UINT offsets = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		if (!ret)

	m_pImmediateContext = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		else if (e.type == SDL_KEYDOWN)

	enum KeyPressSurfaces

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	std::string inputfile = "test.obj";



	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				break;

	scDesc.OutputWindow = hwnd;

	{

	enum KeyPressSurfaces

	txDesc.SampleDesc.Count = 1;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

using std::cout; using std::endl;



	SDL_DestroyRenderer(ren);



	XMStoreFloat4(&clb.eyePos, eye);

			switch (e.key.keysym.sym)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		R"(cube.obj)");

};

	ZeroMemory(&txDesc, sizeof(txDesc));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	auto& shapes = reader.GetShapes();

	Release();

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

	vrData.SysMemSlicePitch = 0;

/*



	D3D11_TEXTURE2D_DESC txDesc;

	txDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

HRESULT CD3DTest::Create(HWND hwnd)

		//User requests quit



		1,

	return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	vector<Vertex> vertexlist;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;





	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		}

#include <SDL.h>

		delete[] pIList;

	D3D11_BUFFER_DESC vbDesc;

	delete[] pVList;

void CD3DTest::Render()

	// Loop over shapes

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//vector<Vertex> vertex_t;

		cout << "SDL_INIT_ERROR" << endl;



		&shapes,

			case SDLK_RIGHT:

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	SDL_DestroyRenderer(ren);

		}

}

	ID3D11Texture2D* pBackBuffer;

	/*

	m_IndexCount = icount;

	scDesc.BufferDesc.Width = rect.Width();

	{

	vrData.pSysMem = &pVList[0];

	D3D11_SUBRESOURCE_DATA irData;

	//vector<Vertex> vertex_t;





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	/*

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	tinyobj::attrib_t attrib;

	cbDesc.CPUAccessFlags = 0;

	irData.SysMemPitch = 0;

	auto& shapes = reader.GetShapes();

		&scDesc,

}





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.ambient, lightAmbient);

	ConstantLightBuffer clb;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	D3D_FEATURE_LEVEL level;

	float    nearZ = 0.1f;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		//User presses a key



	SAFE_RELEASE(m_pSwapChain);

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4         eyePos;   //視点座標

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



		&materials,



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	SDL_FreeSurface(bmp);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	UINT flags = 0;



	vector<WORD> indexList;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

 * Lesson 1: Hello World!

				vertex.push_back(vertex_tmp);

	SDL_DestroyRenderer(ren);

	}*/

{











	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Angle += XMConvertToRadians(1.0f);

	return 0;

CD3DTest::~CD3DTest()

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	if (!error.empty())

			case SDLK_DOWN:

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_RenderClear(ren);



	ConstantMatrixBuffer cmb;

	if (FAILED(hr))

{

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

int main(int, char**)



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pSwapChain->Present(0, 0);

			}

		NULL,





	vrData.pSysMem = &pVList[0];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&m_pSwapChain,



	{



void CD3DTest::Release()



int SEGMENT = 36;

	{

		pLevels,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	//頂点シェーダー生成

	vbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

	m_pTextureView = NULL;

		return hr;

};

int SEGMENT = 36;

		}



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	tinyobj::attrib_t attrib;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}*/



	Release();



			index_offset += fv;

		KEY_PRESS_SURFACE_DEFAULT,



	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	//インデックスバッファ作成

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



CD3DTest::CD3DTest()

		SDL_RenderPresent(ren);



	cbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);



	SAFE_RELEASE(m_pDepthStencilView);

	//Key press surfaces constants

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	cbDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

{

	return 0;

	dsDesc.Format = txDesc.Format;

	vbDesc.CPUAccessFlags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	auto& attrib = reader.GetAttrib();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			index_offset += fv;

		SDL_Delay(1000);





		SDL_RenderClear(ren);

		&level,

	m_pSwapChain = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SAFE_RELEASE(m_pMatrixBuffer);

	vbDesc.MiscFlags = 0;

		return hr;

}

	if (FAILED(hr))

{



	SAFE_RELEASE(m_pRenderTargetView);

	scDesc.OutputWindow = hwnd;

				vertex.push_back(vertex_tmp);



	for (int j = 0; j < icount; j++)

	scDesc.BufferCount = 1;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



				tinyobj::real_t tx =





int SEGMENT = 36;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	txDesc.ArraySize = 1;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	pBackBuffer->Release();



/*

	SAFE_RELEASE(m_pImmediateContext);

	m_IndexCount = 0;

	m_pLightBuffer = NULL;

		return hr;

			case SDLK_UP:

	txDesc.CPUAccessFlags = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.MinDepth = 0.0f;

	D3D11_SUBRESOURCE_DATA irData;

		flags,





		{

struct ConstantMaterial {

	m_pPixelShader = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





void CD3DTest::Release()



	XMFLOAT4X4 world;

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

{

	vrData.SysMemPitch = 0;

	ibDesc.MiscFlags = 0;



	{

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	scDesc.SampleDesc.Quality = 0;

	if (FAILED(hr))

	scDesc.BufferDesc.Width = rect.Width();

	vector<Vertex> vertexlist;

				break;

	{

	SDL_DestroyRenderer(ren);







{

		{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	delete[] pVList;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	enum KeyPressSurfaces

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)



				vertex.push_back(vertex_tmp);

		return hr;

	vector<Vertex> vertexlist;



		NULL,

 * Lesson 1: Hello World!

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pIndexBuffer);

	enum KeyPressSurfaces

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		SDL_RenderPresent(ren);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t ty =



		pLevels,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	ZeroMemory(&dsDesc, sizeof(dsDesc));

};

	Release();

	return;

			exit(1);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//頂点バッファ作成

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			}

	m_Angle += XMConvertToRadians(1.0f);

	//インデックスバッファ作成

	}



	SDL_DestroyWindow(win);

	m_Viewport.Width = (FLOAT)rect.Width();

};

			// Loop over vertices in the face.

		{

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pDepthStencilTexture);

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))



	XMStoreFloat4(&clb.ambient, lightAmbient);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&m_pSwapChain,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	dsDesc.Texture2D.MipSlice = 0;

				WORD index = idx.vertex_index;

	XMFLOAT4X4 projection;

	}



	if (FAILED(hr))

		size_t index_offset = 0;

	m_Viewport.TopLeftY = 0;

		return hr;

	txDesc.SampleDesc.Quality = 0;



CD3DTest::CD3DTest()

	XMFLOAT4X4 view;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pSwapChain = NULL;

#include "DirectXManager.h"





	SDL_FreeSurface(bmp);

			for (size_t v = 0; v < fv; v++)

	vrData.pSysMem = &pVList[0];



	m_pSwapChain->Present(0, 0);

				break;

{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			int num_vertices = shape.mesh.num_face_vertices[f];

		1,



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{



	SDL_DestroyWindow(win);



	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	m_pImmediateContext = NULL;

				break;



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pTextureView);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);







	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderClear(ren);

	XMFLOAT4X4 view;

		return hr;

{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	SDL_FreeSurface(bmp);

int main(int, char**)

		{



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	SDL_Quit();

			}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}



			break;

	Release();

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	auto& materials = reader.GetMaterials();

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);



	bool ret = tinyobj::LoadObj(

		D3D_DRIVER_TYPE_HARDWARE,

using std::cout; using std::endl;

	vbDesc.CPUAccessFlags = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4X4 projection;



		size_t index_offset = 0;

	//頂点バッファ作成



	SDL_Event e;

	Vertex* pVList = new Vertex[vcount];

	Vertex* pVList = new Vertex[vcount];

	{

			case SDLK_UP:



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	m_IndexCount = 0;

	//頂点レイアウト作成

	D3D11_BUFFER_DESC ibDesc;

	m_pVertexShader = NULL;



	if (FAILED(hr))



	scDesc.OutputWindow = hwnd;

		SDL_RenderPresent(ren);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		flags,

	m_pInputLayout = NULL;

				break;





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

};

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

void CD3DTest::Render()



}

	scDesc.OutputWindow = hwnd;

	m_VertexCount = vcount;

		KEY_PRESS_SURFACE_UP,

	tinyobj::ObjReaderConfig reader_config;

	std::string error;

			}





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ConstantMatrixBuffer cmb;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		else if (e.type == SDL_KEYDOWN)

			}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pRenderTargetView);

	{

	XMFLOAT4 pos;               //座標(x,y,z)



	ConstantLight    pntLight; //点光源

	vbDesc.CPUAccessFlags = 0;



	return 0;

}

	m_pTexture = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

{

		&m_pSwapChain,

	Release();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	XMFLOAT4 ambient;           //環境(r,g,b)

		&m_pDevice,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





		NULL,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		{

			for (size_t v = 0; v < fv; v++)

		SDL_Delay(1000);

int main(int, char**)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#endif

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&m_pImmediateContext);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	// Loop over shapes

				break;

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

int SEGMENT = 36;

	//ピクセルシェーダー生成

	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.StructureByteStride = 0;



	txDesc.Width = rect.Width();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		if (e.type == SDL_QUIT)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	cbDesc.StructureByteStride = 0;

}



		SDL_RenderClear(ren);

			index_offset += fv;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D_FEATURE_LEVEL level;

	m_IndexCount = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	{

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_Quit();



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	float    farZ = 100.0f;

	ibDesc.MiscFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			int num_vertices = shape.mesh.num_face_vertices[f];



#include <SDL.h>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	SDL_DestroyTexture(tex);



				vertex.push_back(vertex_tmp);

{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





		flags,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		size_t index_offset = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	LoadObj(vertexlist, indexList);

	//Vertex* pVList = new Vertex[vcount];

	irData.pSysMem = &pIList[0];

	WORD* pIList = new WORD[icount];

		&error,

		exit(1);

				tinyobj::real_t ty =

	return;

		return hr;

 * Lesson 1: Hello World!

				vertex.push_back(vertex_tmp);

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	tinyobj::attrib_t attrib;

CD3DTest::~CD3DTest()

	//頂点バッファ作成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

				tinyobj::real_t ty =

	{

	SDL_DestroyWindow(win);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			}

	m_pTexture = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.Height = rect.Height();



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_Quit();

	ConstantLight    pntLight; //点光源

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

			int num_vertices = shape.mesh.num_face_vertices[f];

		KEY_PRESS_SURFACE_TOTAL



};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_Viewport.MinDepth = 0.0f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	{

		cout << "SDL_INIT_ERROR" << endl;

	irData.SysMemSlicePitch = 0;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	for (int i = 0; i < 3; i++)



			}

	{

	m_Viewport.Height = (FLOAT)rect.Height();

		return hr;

		SDL_Delay(1000);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_VertexCount = vcount;



	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		D3D11_SDK_VERSION,

{



	if (SDL_Init(SDL_INIT_VIDEO != 0))





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		pIList[j] = indexList[j];



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

}

		return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	LoadObj(vertexlist, indexList);

struct ConstantMatrixBuffer {

	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	ConstantLight    pntLight; //点光源

	}

	if (FAILED(hr))

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pSwapChain);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

int main(int, char**)



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (FAILED(hr))



	{

	tinyobj::ObjReaderConfig reader_config;

};

		}

	//インデックスバッファ作成

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pVertexShader);

	if (!reader.ParseFromFile(inputfile, reader_config))





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	}

		return hr;

};

			break;

	{



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	auto& materials = reader.GetMaterials();

			{

	txDesc.ArraySize = 1;

		// Loop over faces(polygon)

				vertex.push_back(vertex_tmp);

	};



	vector<WORD> indexList;

				break;

	float    fov = XMConvertToRadians(20.0f);

		return hr;

	{

	//深度ステンシルバッファ作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_Quit();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

}

			case SDLK_UP:

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	vector<WORD> indexList;

	SAFE_RELEASE(m_pImmediateContext);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	UINT flags = 0;

	for (int i = 0; i < vcount; i++)







	if (FAILED(hr))

	//頂点シェーダー生成

	scDesc.BufferDesc.Height = rect.Height();



	XMFLOAT4         eyePos;   //視点座標

	Vertex* pVList = new Vertex[vcount];

HRESULT CD3DTest::Create(HWND hwnd)



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



				WORD index = idx.vertex_index;

		}

		D3D_DRIVER_TYPE_HARDWARE,

		KEY_PRESS_SURFACE_RIGHT,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	return;

	vbDesc.StructureByteStride = 0;





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			switch (e.key.keysym.sym)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

void CD3DTest::Release()



	vbDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftY = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		if (!ret)

		{

	SAFE_RELEASE(m_pRenderTargetView);

{

		return hr;

	std::string imagePath = "hello.bmp";



		&scDesc,

	txDesc.MiscFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

	dsDesc.Format = txDesc.Format;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	}

	vrData.pSysMem = &pVList[0];

				WORD index = idx.vertex_index;

		}

	//頂点バッファ作成

	tinyobj::attrib_t attrib;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	m_Viewport.MaxDepth = 1.0f;

	cbDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;



}

	D3D11_SUBRESOURCE_DATA vrData;

	}

	Vertex* pVList = new Vertex[vcount];





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

#include "DirectXManager.h"

	SAFE_RELEASE(m_pSwapChain);

	tinyobj::ObjReader reader;

	dsDesc.Texture2D.MipSlice = 0;



			for (size_t v = 0; v < num_vertices; v++)

		{

	SAFE_RELEASE(m_pImmediateContext);



{

/*

	m_VertexCount = vcount;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



			}

void CD3DTest::Render()

	}

	D3D11_BUFFER_DESC ibDesc;



	if (FAILED(hr))

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		size_t index_offset = 0;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		cout << "SDL_INIT_ERROR" << endl;



				break;

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pRenderTargetView);

		&scDesc,

	CRect                rect;

		m_pImmediateContext->ClearState();



	m_VertexCount = vcount;

	SDL_Event e;

	Release();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		exit(1);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_BUFFER_DESC vbDesc;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMFLOAT4X4 view;

int main(int, char**)

		delete[] pIList;

	XMFLOAT4         eyePos;   //視点座標

		return hr;

}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#include <SDL.h>

		KEY_PRESS_SURFACE_TOTAL

	bool ret = tinyobj::LoadObj(

	XMFLOAT4 specular;          //反射(r,g,b)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		cout << "SDL_INIT_ERROR" << endl;

	reader_config.mtl_search_path = "./"; // Path to material files



	WORD   icount = indexList.size();

			{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	pBackBuffer->Release();

		size_t index_offset = 0;

		&scDesc,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	LoadObj(vertexlist, indexList);

	XMFLOAT4 specular;          //反射(r,g,b)



		KEY_PRESS_SURFACE_TOTAL

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		else if (e.type == SDL_KEYDOWN)



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	txDesc.SampleDesc.Count = 1;

	WORD   icount = indexList.size();

	//頂点バッファ作成

	return 0;

			switch (e.key.keysym.sym)

	for (int i = 0; i < 3; i++)

		{

	m_pDevice = NULL;

	{

	pBackBuffer->Release();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	bool ret = tinyobj::LoadObj(

	{

	SAFE_RELEASE(m_pTexture);





			// Loop over vertices in the face.

}



	HRESULT              hr;

	vrData.pSysMem = &pVList[0];

	SDL_DestroyWindow(win);

	}



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

{



	std::string error;

		if (!ret)

int main(int, char**)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	delete[] pIList;

		&m_pImmediateContext);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

};



	};

	return 0;

			}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.MiscFlags = 0;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderClear(ren);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	//深度ステンシルバッファ作成

	vbDesc.CPUAccessFlags = 0;

				WORD index = idx.vertex_index;



	flags |= D3D11_CREATE_DEVICE_DEBUG;



	tinyobj::ObjReaderConfig reader_config;

	}

		return hr;



#endif

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

		}

				break;

	{





	auto& shapes = reader.GetShapes();

	/*

	SDL_DestroyRenderer(ren);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

		}



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pVertexBuffer = NULL;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	XMFLOAT4 pos;               //座標(x,y,z)

		return hr;

	HRESULT              hr;

	for (int j = 0; j < icount; j++)

	D3D11_SUBRESOURCE_DATA irData;

	HRESULT              hr;

	}



	if (FAILED(hr))





	Vertex* pVList = new Vertex[vcount];

		{

}

	::GetClientRect(hwnd, &rect);

	txDesc.MiscFlags = 0;





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	reader_config.mtl_search_path = "./"; // Path to material files

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		return hr;



			//Select surfaces based on key press

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	LoadObj(vertexlist, indexList);

	vrData.pSysMem = &pVList[0];

	while (SDL_PollEvent(&e) != 0)

	if (FAILED(hr))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		}



#endif

	m_pTexture = NULL;



	m_pDepthStencilView = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		SDL_RenderClear(ren);

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_DestroyWindow(win);

	return hr;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_IndexCount = 0;

		// Loop over faces(polygon)

struct ConstantMaterial {

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

		{

	SDL_DestroyRenderer(ren);

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.SysMemSlicePitch = 0;

	cbDesc.MiscFlags = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	if (FAILED(hr))



	UINT offsets = 0;

			default:

	m_pTextureView = NULL;



	//インデックスバッファ作成



			case SDLK_DOWN:

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		KEY_PRESS_SURFACE_DEFAULT,



};

		pIList[j] = indexList[j];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		else if (e.type == SDL_KEYDOWN)

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	vrData.SysMemPitch = 0;

		size_t index_offset = 0;

				indexlist.push_back(idx.vertex_index);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	irData.SysMemPitch = 0;

using std::cout; using std::endl;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	irData.SysMemSlicePitch = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				// access to vertex



 */

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		1,

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))



#include <SDL.h>

			}

		pLevels,

		&attrib,

		return 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	}

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.CPUAccessFlags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_pDepthStencilTexture = NULL;



	ConstantMaterial material; //物体の質感

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//vector<Vertex> vertex_t;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				WORD index = idx.vertex_index;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	return 0;



struct ConstantMatrixBuffer {

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_SUBRESOURCE_DATA irData;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	dsDesc.Texture2D.MipSlice = 0;



		return hr;

	}



	int     vcount = vertexlist.size();



	}



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

	ID3D11Texture2D* pBackBuffer;

	m_pVertexBuffer = NULL;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



				tinyobj::real_t ty =

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				vertex.push_back(vertex_tmp);

			case SDLK_RIGHT:


