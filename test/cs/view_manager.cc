	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			default:



	XMFLOAT4 ambient;           //環境(r,g,b)









	if (!error.empty())

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

			}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		flags,

	ConstantMaterial material; //物体の質感

	//頂点シェーダー生成

	}





	cbDesc.StructureByteStride = 0;

	for (int i = 0; i < vcount; i++)

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

};

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		1,



	{

				WORD index = idx.vertex_index;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pSwapChain->Present(0, 0);

	txDesc.ArraySize = 1;

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	std::vector<tinyobj::material_t> materials;

	delete[] pVList;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	Release();



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

struct ConstantLight {

	return;

	//ピクセルシェーダー生成

	txDesc.MipLevels = 1;

	ibDesc.StructureByteStride = 0;

		m_pImmediateContext->ClearState();

	m_IndexCount = icount;



	SAFE_RELEASE(m_pImmediateContext);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				vertex.push_back(vertex_tmp);

	m_pSampler = NULL;

		pIList[j] = indexList[j];

	{

				tinyobj::real_t ty =

	cbDesc.MiscFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.StructureByteStride = 0;

	scDesc.BufferCount = 1;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();







	return 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			// Loop over vertices in the face.

	m_pTextureView = NULL;

			//Select surfaces based on key press

#include <iostream>

	m_pRenderTargetView = NULL;

	vbDesc.MiscFlags = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		delete[] pIList;

	}

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SAFE_RELEASE(m_pTextureView);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

}
{

#include <iostream>

		return hr;



	delete[] pVList;

		return hr;

	float    fov = XMConvertToRadians(20.0f);



		return hr;

			index_offset += fv;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	Release();

	}

	if (FAILED(hr))

	//ピクセルシェーダー生成

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	enum KeyPressSurfaces

#include <iostream>



	vector<WORD> indexList;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}

CD3DTest::~CD3DTest()

{

int SEGMENT = 36;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		&m_pImmediateContext);

	m_pDevice = NULL;



	if (!reader.ParseFromFile(inputfile, reader_config))



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			}



	SDL_Quit();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.SampleDesc.Count = 1;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyRenderer(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vector<WORD> indexList;

	for (int i = 0; i < vcount; i++)





	ibDesc.StructureByteStride = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			break;

		SDL_Delay(1000);

				indexlist.push_back(index);



{

		&materials,



		pVList[i] = vertexlist[i];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				tinyobj::real_t tx =

	//インデックスバッファ作成

	vbDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::material_t> materials;



	for (size_t s = 0; s < shapes.size(); s++)

	cbDesc.CPUAccessFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	m_pTexture = NULL;

			switch (e.key.keysym.sym)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	//頂点シェーダー生成

			case SDLK_RIGHT:



	std::string imagePath = "hello.bmp";

	//Create Index

	scDesc.SampleDesc.Count = 1;



		return hr;



	cbDesc.CPUAccessFlags = 0;

	bool ret = tinyobj::LoadObj(

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,





CD3DTest::~CD3DTest()

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pDepthStencilView);

	SDL_FreeSurface(suf);

 */

	scDesc.BufferDesc.Height = rect.Height();





	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pLightBuffer = NULL;

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//ピクセルシェーダー生成

	}



}

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4X4 view;

	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pInputLayout);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4X4 world;

	cbDesc.CPUAccessFlags = 0;



#define TINYOBJLOADER_IMPLEMENTATION

		D3D11_SDK_VERSION,



	ConstantLight    pntLight; //点光源

void CD3DTest::Release()

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}



	m_pVertexBuffer = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	//深度ステンシルバッファ作成

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

int main(int, char**)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			default:

	m_VertexCount = vcount;

		flags,

{

	//頂点レイアウト作成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				vertex.push_back(vertex_tmp);



	{

	while (SDL_PollEvent(&e) != 0)



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	for (int i = 0; i < vcount; i++)

	}



	{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

}
}



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ConstantMaterial material; //物体の質感

	SDL_Quit();



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

int main(int, char**)

		if (!reader.Error().empty())

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	for (int j = 0; j < icount; j++)

#include <iostream>

	};

{



	SAFE_RELEASE(m_pSampler);

	pBackBuffer->Release();



	CRect                rect;

};

			case SDLK_RIGHT:

	}*/

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		}

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SDL_FreeSurface(suf);

				indexlist.push_back(index);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		KEY_PRESS_SURFACE_DEFAULT,

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_LEFT,



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	delete[] pIList;

			switch (e.key.keysym.sym)



	if (!reader.ParseFromFile(inputfile, reader_config))

	//頂点シェーダー生成

int main(int, char**)

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//First we need to start up SDL, and make sure it went ok

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	cbDesc.MiscFlags = 0;



	tinyobj::ObjReaderConfig reader_config;

	LoadObj(vertexlist, indexList);

	delete[] pIList;

		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	}

	m_pTextureView = NULL;

int main(int, char**)

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.CPUAccessFlags = 0;

	UINT flags = 0;

		pLevels,

		pLevels,

			for (size_t v = 0; v < num_vertices; v++)

		R"(cube.obj)");

	UINT flags = 0;

				break;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	enum KeyPressSurfaces

{

	Release();

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

#define TINYOBJLOADER_IMPLEMENTATION

		return hr;



		SDL_RenderClear(ren);

struct ConstantMaterial {

struct ConstantMaterial {



		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	WORD* pIList = new WORD[icount];

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	D3D11_BUFFER_DESC ibDesc;

	WORD   icount = indexList.size();

	delete[] pVList;

		R"(cube.obj)");





	scDesc.SampleDesc.Count = 1;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	for (int j = 0; j < icount; j++)

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	{

		return 1;

	float    nearZ = 0.1f;

	irData.SysMemSlicePitch = 0;

	m_pTexture = NULL;

	tinyobj::attrib_t attrib;

	vbDesc.StructureByteStride = 0;

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

	};

	int     vcount = vertexlist.size();



			for (size_t v = 0; v < num_vertices; v++)

	Release();

CD3DTest::~CD3DTest()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pVertexBuffer = NULL;

		KEY_PRESS_SURFACE_LEFT,







	//First we need to start up SDL, and make sure it went ok



	irData.SysMemPitch = 0;

	scDesc.SampleDesc.Quality = 0;





	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	SDL_DestroyWindow(win);



			index_offset += fv;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	delete[] pVList;



		return hr;

	ibDesc.MiscFlags = 0;



	{

	m_pPixelShader = NULL;

	m_pVertexBuffer = NULL;

	UINT offsets = 0;

 * Lesson 1: Hello World!

	if (FAILED(hr))

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

			{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

#ifdef _DEBUG

			//Select surfaces based on key press

			case SDLK_UP:

	m_pDepthStencilView = NULL;

{

	UINT flags = 0;

		return 1;

	}

		1,

	m_Angle += XMConvertToRadians(1.0f);

	int     vcount = vertexlist.size();

	DXGI_SWAP_CHAIN_DESC scDesc;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		{

	scDesc.OutputWindow = hwnd;

{

	vrData.pSysMem = &pVList[0];

	vbDesc.CPUAccessFlags = 0;



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_DestroyTexture(tex);







		delete[] pIList;



		}







	}*/

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	if (FAILED(hr))

		&m_pImmediateContext);

	return;

	if (m_pImmediateContext)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

{

	bool ret = tinyobj::LoadObj(



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_IndexCount = icount;

	scDesc.BufferDesc.Width = rect.Width();





		pIList[j] = indexList[j];

}

			index_offset += num_vertices;

};

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			switch (e.key.keysym.sym)

	D3D_FEATURE_LEVEL level;

	ConstantMaterial material; //物体の質感

	{

	m_pMatrixBuffer = NULL;

 */



{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		KEY_PRESS_SURFACE_DOWN,

 * Lesson 1: Hello World!

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		KEY_PRESS_SURFACE_DEFAULT,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	D3D11_BUFFER_DESC ibDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

};

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			default:

		return hr;

		return hr;

{

				tinyobj::real_t tx =

	}







		D3D11_SDK_VERSION,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

			}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		return hr;



				break;



		pLevels,

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	return 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//vector<WORD> index_t;

	delete[] pIList;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

struct ConstantMatrixBuffer {

	reader_config.mtl_search_path = "./"; // Path to material files

		size_t index_offset = 0;



	m_Viewport.Width = (FLOAT)rect.Width();

	delete[] pIList;



	ConstantMaterial material; //物体の質感

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	txDesc.MiscFlags = 0;

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pPixelShader = NULL;

	scDesc.SampleDesc.Quality = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#include <SDL.h>

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pIndexBuffer = NULL;

		D3D11_SDK_VERSION,

			}

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			case SDLK_LEFT:

	if (!error.empty())

		SDL_Delay(1000);





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ibDesc.StructureByteStride = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	scDesc.Windowed = TRUE;

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	std::string inputfile = "test.obj";

	}



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	ibDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_DOWN,



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	for (const auto& shape : shapes)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	return 0;

		flags,



	XMFLOAT4X4 projection;

			}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				break;

void CD3DTest::Release()



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.SampleDesc.Count = 1;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pTexture);

	m_Viewport.TopLeftY = 0;

		NULL,

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		&level,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC vbDesc;

	//頂点レイアウト作成

	cbDesc.StructureByteStride = 0;

				break;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//頂点レイアウト作成

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_Viewport.MaxDepth = 1.0f;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				vertex.push_back(vertex_tmp);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& attrib = reader.GetAttrib();

HRESULT CD3DTest::Create(HWND hwnd)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

	if (FAILED(hr))



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

		SDL_RenderPresent(ren);



	scDesc.BufferDesc.Width = rect.Width();

	Release();

	if (!error.empty())

				tinyobj::real_t ty =

	cbDesc.MiscFlags = 0;

	{



		size_t index_offset = 0;

	vector<Vertex> vertexlist;

	scDesc.OutputWindow = hwnd;

	SDL_Quit();

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SAFE_RELEASE(m_pMatrixBuffer);

		m_pImmediateContext->ClearState();

	}



{



	if (FAILED(hr))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	irData.pSysMem = &pIList[0];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



			for (size_t v = 0; v < fv; v++)



	WORD* pIList = new WORD[icount];

	m_pTexture = NULL;

	}



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	XMFLOAT4X4 view;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





		&attrib,

		pVList[i] = vertexlist[i];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (!reader.ParseFromFile(inputfile, reader_config))

		if (!reader.Error().empty())

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		&attrib,



{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				indexlist.push_back(index);

		&shapes,

	}



	Release();

	SAFE_RELEASE(m_pDepthStencilTexture);

	bool ret = tinyobj::LoadObj(

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (m_pImmediateContext)

	vector<WORD> indexList;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	//深度ステンシルバッファ作成

	}

	cbDesc.CPUAccessFlags = 0;



{

	m_Angle += XMConvertToRadians(1.0f);

	if (FAILED(hr))



	m_pMatrixBuffer = NULL;



	SAFE_RELEASE(m_pTextureView);

	m_VertexCount = vcount;



	//テクスチャ読み込み





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	}

	m_pTextureView = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

}



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	ConstantLight    pntLight; //点光源

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_DestroyRenderer(ren);





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



	SDL_Quit();



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))



	for (size_t s = 0; s < shapes.size(); s++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4         eyePos;   //視点座標

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext = NULL;

	Vertex* pVList = new Vertex[vcount];

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	//Create Index

	UINT strides = sizeof(Vertex);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pImmediateContext = NULL;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&materials,

	txDesc.MipLevels = 1;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_IndexCount = 0;

}





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Event e;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

{



		KEY_PRESS_SURFACE_DOWN,



		SDL_RenderClear(ren);

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pIndexBuffer);

}

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.Width = (FLOAT)rect.Width();

	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

		SDL_RenderClear(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SDL_DestroyTexture(tex);

		}

	txDesc.SampleDesc.Count = 1;

#define TINYOBJLOADER_IMPLEMENTATION

			}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	irData.SysMemSlicePitch = 0;



	{

	//深度ステンシルバッファ作成

	std::string error;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

 */

	D3D11_TEXTURE2D_DESC txDesc;

#include <SDL.h>

		SDL_RenderPresent(ren);



}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.TopLeftY = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		SDL_RenderPresent(ren);

	{

	int     vcount = vertexlist.size();

	D3D11_BUFFER_DESC vbDesc;

struct ConstantMatrixBuffer {

	m_pVertexShader = NULL;





			// Loop over vertices in the face.

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

		delete[] pVList;

	D3D11_TEXTURE2D_DESC txDesc;

	ID3D11Texture2D* pBackBuffer;

	if (!error.empty())

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_pImmediateContext = NULL;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





	XMFLOAT4X4 world;

			default:

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//Clean up our objects and quit

	std::string inputfile = "test.obj";



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (SDL_Init(SDL_INIT_VIDEO != 0))





			{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_UP,



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (!reader.ParseFromFile(inputfile, reader_config))

		R"(cube.obj)");



				// access to vertex

	SAFE_RELEASE(m_pSampler);

	::GetClientRect(hwnd, &rect);

	txDesc.CPUAccessFlags = 0;



{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&m_pDevice,

	m_IndexCount = 0;

			}

	if (FAILED(hr))

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

#define TINYOBJLOADER_IMPLEMENTATION

	D3D11_BUFFER_DESC ibDesc;

};

	{

	SAFE_RELEASE(m_pMatrixBuffer);



	{

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))



			}

#include <SDL.h>

	SAFE_RELEASE(m_pSwapChain);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

			break;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				vertex.push_back(vertex_tmp);



	cbDesc.StructureByteStride = 0;

 * Lesson 1: Hello World!

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.CPUAccessFlags = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//ピクセルシェーダー生成

/*

	scDesc.BufferDesc.Height = rect.Height();



	scDesc.OutputWindow = hwnd;

	XMFLOAT4X4 world;

		NULL,

	SDL_Event e;

	SDL_Quit();





			}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SAFE_RELEASE(m_pVertexBuffer);

		D3D11_SDK_VERSION,



	if (FAILED(hr))



		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#ifdef _DEBUG

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	cbDesc.CPUAccessFlags = 0;

}
	return 0;

	{

	{

{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



				break;

		&m_pImmediateContext);

		D3D_DRIVER_TYPE_HARDWARE,

	m_Viewport.MaxDepth = 1.0f;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		&error,

	}





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_DestroyWindow(win);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

int main(int, char**)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		KEY_PRESS_SURFACE_LEFT,

	vrData.SysMemPitch = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&level,

	txDesc.Width = rect.Width();

}

	//定数バッファ作成



			index_offset += num_vertices;

	HRESULT              hr;

	m_IndexCount = icount;

	auto& materials = reader.GetMaterials();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	txDesc.MipLevels = 1;

			{

	txDesc.MipLevels = 1;

	vector<Vertex> vertexlist;

	{

	float    nearZ = 0.1f;

	{

			index_offset += num_vertices;

	XMFLOAT4 ambient;           //環境(r,g,b)



	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pDepthStencilView = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				WORD index = idx.vertex_index;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4 specular;          //反射(r,g,b)

				WORD index = idx.vertex_index;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Quit();



	D3D11_SUBRESOURCE_DATA irData;

	UINT flags = 0;



				// access to vertex



	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	bool ret = tinyobj::LoadObj(

	return hr;



}





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		&attrib,

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	UINT flags = 0;

	{

	{

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		return hr;

	m_Viewport.TopLeftX = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//vector<Vertex> vertex_t;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	}

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

#ifdef _DEBUG

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;



	{

		}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		KEY_PRESS_SURFACE_DEFAULT,



	return;



			// Loop over vertices in the face.

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (!error.empty())







				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	{

	if (!error.empty())

	float    nearZ = 0.1f;

	}

	std::string inputfile = "test.obj";

	m_pTextureView = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.OutputWindow = hwnd;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext = NULL;

		SDL_RenderPresent(ren);

	m_pLightBuffer = NULL;

	}

{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			}

 */

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4X4 projection;

		KEY_PRESS_SURFACE_TOTAL

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	}







void CD3DTest::Release()

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Event e;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

struct ConstantMatrixBuffer {

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	std::string inputfile = "test.obj";



HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_RenderClear(ren);

		D3D_DRIVER_TYPE_HARDWARE,

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	if (FAILED(hr))



				tinyobj::real_t ty =

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D11_BUFFER_DESC vbDesc;





	if (!reader.Warning().empty())

	vrData.SysMemPitch = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pMatrixBuffer = NULL;

	{

	delete[] pIList;



		return hr;

void CD3DTest::Release()

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

void CD3DTest::Release()

#define TINYOBJLOADER_IMPLEMENTATION

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	std::string imagePath = "hello.bmp";

				vertex.push_back(vertex_tmp);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	std::vector<tinyobj::material_t> materials;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	enum KeyPressSurfaces

};

		KEY_PRESS_SURFACE_UP,



	if (FAILED(hr))

	txDesc.Width = rect.Width();

	/*

		NULL,

}

	SDL_DestroyWindow(win);

		{

	pBackBuffer->Release();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		}

		if (!ret)



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		&level,

	scDesc.BufferCount = 1;



	if (FAILED(hr))

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	Release();

		pVList[i] = vertexlist[i];

{

		return hr;

		if (e.type == SDL_QUIT)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;



	//頂点シェーダー生成

{



	SAFE_RELEASE(m_pVertexShader);

		delete[] pVList;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	LoadObj(vertexlist, indexList);



		return hr;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		&scDesc,

	SAFE_RELEASE(m_pVertexShader);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

{

	vector<WORD> indexList;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



}

			case SDLK_UP:

	}

		}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	}

	if (FAILED(hr))

	//頂点シェーダー生成

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

	m_pMatrixBuffer = NULL;

			{

	DXGI_SWAP_CHAIN_DESC scDesc;

};





		return hr;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_Viewport.Width = (FLOAT)rect.Width();

	std::string imagePath = "hello.bmp";

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

int SEGMENT = 36;

	if (FAILED(hr))

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SAFE_RELEASE(m_pLightBuffer);

	if (!error.empty())

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





{

};

	{

	{

	SAFE_RELEASE(m_pDepthStencilTexture);



}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_VertexCount = 0;

		return hr;

			case SDLK_DOWN:

		exit(1);

	//深度ステンシルバッファ作成

	UINT offsets = 0;

		&m_pDevice,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			for (size_t v = 0; v < num_vertices; v++)

	m_pLightBuffer = NULL;



		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	return 0;

	m_pMatrixBuffer = NULL;



{



	if (!reader.Warning().empty())

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	for (const auto& shape : shapes)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				indexlist.push_back(index);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	ibDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

		{



{



	}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return 0;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	dsDesc.Format = txDesc.Format;

	D3D_FEATURE_LEVEL level;

	D3D11_SAMPLER_DESC smpDesc;

}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pDepthStencilView = NULL;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	//頂点シェーダー生成

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SAFE_RELEASE(m_pVertexBuffer);

	m_Angle += XMConvertToRadians(1.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

		SDL_RenderClear(ren);

	vbDesc.MiscFlags = 0;

		return hr;

	D3D_FEATURE_LEVEL level;

		&shapes,

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pTextureView = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	cbDesc.MiscFlags = 0;

		SDL_RenderPresent(ren);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_FreeSurface(bmp);

	}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (m_pImmediateContext)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_Viewport.TopLeftX = 0;



	float    farZ = 100.0f;

void CD3DTest::Release()

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);







	Release();



		}

	cbDesc.MiscFlags = 0;

		}



		{

	bool ret = tinyobj::LoadObj(

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_Angle += XMConvertToRadians(1.0f);

		{

			switch (e.key.keysym.sym)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		}



				indexlist.push_back(idx.vertex_index);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User presses a key



};

		&level,

	XMStoreFloat4(&clb.ambient, lightAmbient);

	scDesc.BufferCount = 1;

};

	D3D11_BUFFER_DESC ibDesc;









	SAFE_RELEASE(m_pImmediateContext);

	for (const auto& shape : shapes)

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	XMStoreFloat4(&clb.eyePos, eye);

	Vertex* pVList = new Vertex[vcount];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	m_pSampler = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	}

	auto& materials = reader.GetMaterials();

#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//ビューポート設定

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_Event e;

	SDL_Quit();



struct ConstantMaterial {

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



		return hr;

		//User presses a key

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

};

	UINT strides = sizeof(Vertex);

 * Lesson 1: Hello World!

		return hr;



	SDL_DestroyTexture(tex);

	XMFLOAT4 pos;               //座標(x,y,z)

{

	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		return hr;



		{

#ifdef _DEBUG

	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

};

	DXGI_SWAP_CHAIN_DESC scDesc;

			{

			for (size_t v = 0; v < num_vertices; v++)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_Viewport.MaxDepth = 1.0f;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	for (const auto& shape : shapes)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pLightBuffer);

		return hr;

				indexlist.push_back(index);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SDL_DestroyWindow(win);

		return hr;

	txDesc.SampleDesc.Quality = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



		//User requests quit

	if (!reader.Warning().empty())

		&m_pImmediateContext);

				// access to vertex

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	enum KeyPressSurfaces

	{

		}



	m_pSampler = NULL;

	SAFE_RELEASE(m_pVertexShader);

	if (FAILED(hr))

	txDesc.MipLevels = 1;

	ConstantLightBuffer clb;

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pIndexBuffer);



	m_pMatrixBuffer = NULL;

	{

	cbDesc.StructureByteStride = 0;



}





	SAFE_RELEASE(m_pPixelShader);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{



	m_pIndexBuffer = NULL;

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);







	//ビューポート設定

	UINT flags = 0;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;



}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	{

	return;

	SAFE_RELEASE(m_pTexture);

	}

	scDesc.BufferCount = 1;

	scDesc.BufferCount = 1;

{

	//頂点レイアウト作成

	XMFLOAT4         eyePos;   //視点座標

			switch (e.key.keysym.sym)



void CD3DTest::Render()

		return hr;



		&materials,

	std::vector<tinyobj::shape_t> shapes;

	{



	//頂点シェーダー生成

	std::string imagePath = "hello.bmp";

		SDL_Delay(1000);

		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pTexture);

	m_Angle += XMConvertToRadians(1.0f);

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	txDesc.MiscFlags = 0;

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		delete[] pVList;

		return hr;

	txDesc.Width = rect.Width();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pSwapChain->Present(0, 0);

	if (FAILED(hr))

	dsDesc.Format = txDesc.Format;

	float    fov = XMConvertToRadians(20.0f);



		&scDesc,

	dsDesc.Texture2D.MipSlice = 0;



	XMFLOAT4 ambient;           //環境(r,g,b)

		}

	LoadObj(vertexlist, indexList);

	vector<WORD> indexList;

	m_IndexCount = icount;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		}

	cbDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;

		pVList[i] = vertexlist[i];



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	std::string inputfile = "test.obj";

	Release();

	}

#include <iostream>

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.MiscFlags = 0;

	//頂点バッファ作成



	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		}



		// Loop over faces(polygon)

	scDesc.OutputWindow = hwnd;

	for (int i = 0; i < vcount; i++)

		if (!ret)

			default:

			index_offset += fv;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_BUFFER_DESC cbDesc;

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pSwapChain);

		1,

	scDesc.BufferDesc.Width = rect.Width();



		SDL_RenderClear(ren);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		pVList[i] = vertexlist[i];



	}

	cbDesc.CPUAccessFlags = 0;

		delete[] pIList;

	ConstantLightBuffer clb;

	D3D11_SUBRESOURCE_DATA vrData;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

		if (!reader.Error().empty())



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	vector<WORD> indexList;



		{

		&materials,

				WORD index = idx.vertex_index;

	m_pDevice = NULL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

		KEY_PRESS_SURFACE_RIGHT,

	m_IndexCount = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	Vertex* pVList = new Vertex[vcount];

}
				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		return hr;

	XMFLOAT4X4 projection;

		delete[] pIList;

				break;

	for (int j = 0; j < icount; j++)



#endif

		}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		NULL,

			//Select surfaces based on key press



	}

	SDL_Quit();



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

/*

	{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

 */

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	SDL_FreeSurface(suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	ibDesc.StructureByteStride = 0;

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//ピクセルシェーダー生成

		SDL_RenderClear(ren);

	//定数バッファ作成

	SAFE_RELEASE(m_pDepthStencilTexture);

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	auto& materials = reader.GetMaterials();

	D3D11_SUBRESOURCE_DATA irData;

	vector<WORD> indexList;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	//インデックスバッファ作成

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	UINT offsets = 0;

	if (!error.empty())

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

		delete[] pVList;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		KEY_PRESS_SURFACE_LEFT,



	XMFLOAT4 ambient;           //環境(r,g,b)

int main(int, char**)

	m_pDepthStencilView = NULL;

		}

	ibDesc.ByteWidth = sizeof(WORD) * icount;





	XMStoreFloat4(&clb.material.specular, materialSpecular);

	Release();

	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	for (size_t s = 0; s < shapes.size(); s++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

	if (!error.empty())

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	if (FAILED(hr))

		return hr;

		if (e.type == SDL_QUIT)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SAFE_RELEASE(m_pVertexBuffer);





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ibDesc.StructureByteStride = 0;

	}*/

}

			int num_vertices = shape.mesh.num_face_vertices[f];

	cbDesc.StructureByteStride = 0;

	//頂点バッファ作成



	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	}

	ibDesc.StructureByteStride = 0;

	//First we need to start up SDL, and make sure it went ok



	{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	//頂点シェーダー生成

	m_Viewport.MinDepth = 0.0f;

{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t ty =



};

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		}



int SEGMENT = 36;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



#include <iostream>

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.CPUAccessFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.Height = rect.Height();

		SDL_RenderPresent(ren);

	m_pImmediateContext = NULL;

				// access to vertex

		if (e.type == SDL_QUIT)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		SDL_RenderPresent(ren);

	m_pVertexBuffer = NULL;

			{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 world;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.StructureByteStride = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

				vertex.push_back(vertex_tmp);

			}

	txDesc.ArraySize = 1;



			case SDLK_LEFT:

}

				break;

	while (SDL_PollEvent(&e) != 0)



	if (FAILED(hr))

		{

		}

	vrData.SysMemPitch = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	txDesc.Height = rect.Height();

	for (int i = 0; i < vcount; i++)



				indexlist.push_back(index);

	m_Angle += XMConvertToRadians(1.0f);

		&m_pImmediateContext);

	m_VertexCount = vcount;

	auto& shapes = reader.GetShapes();

	CRect                rect;

			default:

		R"(cube.obj)");

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	//頂点シェーダー生成

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



				break;

#include <SDL.h>

	}*/

				// access to vertex



	}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.OutputWindow = hwnd;



			case SDLK_RIGHT:

		pIList[j] = indexList[j];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			default:

		SDL_RenderPresent(ren);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	m_pTextureView = NULL;

		else if (e.type == SDL_KEYDOWN)

	XMFLOAT4 specular;          //反射(r,g,b)

	auto& attrib = reader.GetAttrib();

	txDesc.MiscFlags = 0;

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pSampler);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		//User requests quit

	m_Viewport.TopLeftX = 0;

		cout << "SDL_INIT_ERROR" << endl;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pDepthStencilTexture);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			default:

		1,

		m_pImmediateContext->ClearState();

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pMatrixBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





	SAFE_RELEASE(m_pRenderTargetView);

		exit(1);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDepthStencilView);

	return;

	m_pSwapChain = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				indexlist.push_back(index);

		&materials,

	SAFE_RELEASE(m_pVertexShader);

	//ビューポート設定

	vrData.SysMemPitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

#ifdef _DEBUG

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pDepthStencilTexture);



	delete[] pIList;

HRESULT CD3DTest::Create(HWND hwnd)



	//テクスチャ読み込み

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_DOWN,

	m_pSwapChain->Present(0, 0);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

};

{

		//User requests quit

	m_pIndexBuffer = NULL;

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		SDL_Delay(1000);

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DOWN,

		SDL_RenderPresent(ren);

		return hr;

	m_pDevice = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

}

			break;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

/*

	irData.SysMemSlicePitch = 0;

	auto& shapes = reader.GetShapes();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		pVList[i] = vertexlist[i];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



			{

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

		if (!ret)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

CD3DTest::CD3DTest()

		return hr;

		SDL_RenderClear(ren);

{

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





				break;

};

		delete[] pIList;

		D3D_DRIVER_TYPE_HARDWARE,

				WORD index = idx.vertex_index;

};

	{

	XMFLOAT4 specular;          //反射(r,g,b)

	D3D11_SAMPLER_DESC smpDesc;

		NULL,

	vbDesc.MiscFlags = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



			{

	//First we need to start up SDL, and make sure it went ok

}

		m_pImmediateContext->ClearState();

				break;



		//User presses a key

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

	if (FAILED(hr))

		delete[] pVList;

#include <iostream>

			break;



	m_pSwapChain = NULL;

}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pInputLayout = NULL;

	m_pVertexBuffer = NULL;





	//インデックスバッファ作成



	D3D11_BUFFER_DESC cbDesc;

	txDesc.MiscFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::vector<tinyobj::shape_t> shapes;

	//Key press surfaces constants

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.CPUAccessFlags = 0;





	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

/*

		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4         eyePos;   //視点座標

	SDL_Event e;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	::GetClientRect(hwnd, &rect);

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



	m_pImmediateContext = NULL;

	float    nearZ = 0.1f;



			for (size_t v = 0; v < num_vertices; v++)

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				break;

	m_Angle += XMConvertToRadians(1.0f);

		{

	XMFLOAT4X4 view;

	reader_config.mtl_search_path = "./"; // Path to material files

		return 1;

	SDL_DestroyTexture(tex);

	}

	SDL_DestroyWindow(win);

		return hr;







		pVList[i] = vertexlist[i];



	//深度ステンシルバッファ作成

	{





	{

}





	m_pImmediateContext = NULL;

			}

	//ピクセルシェーダー生成

		}



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D_FEATURE_LEVEL level;

	tinyobj::ObjReaderConfig reader_config;

	SDL_DestroyWindow(win);



{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				break;

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.MinDepth = 0.0f;



	m_pSampler = NULL;



	SAFE_RELEASE(m_pInputLayout);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

}

		&m_pImmediateContext);

{

				WORD index = idx.vertex_index;



	//First we need to start up SDL, and make sure it went ok





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}

		size_t index_offset = 0;

{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];







	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}



	//Vertex* pVList = new Vertex[vcount];

				// access to vertex

	m_pVertexBuffer = NULL;

	m_pVertexBuffer = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

CD3DTest::CD3DTest()

};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	txDesc.ArraySize = 1;

		&materials,

	SDL_DestroyTexture(tex);

		1,

	DXGI_SWAP_CHAIN_DESC scDesc;



	}



int SEGMENT = 36;



	D3D11_TEXTURE2D_DESC txDesc;

	}





	{

	XMFLOAT4X4 projection;

		return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//インデックスバッファ作成

			case SDLK_LEFT:

	vrData.pSysMem = &pVList[0];

};

	txDesc.CPUAccessFlags = 0;

	scDesc.Windowed = TRUE;

}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return 1;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (m_pImmediateContext)

	//vector<Vertex> vertex_t;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)





				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	//頂点レイアウト作成



	scDesc.BufferCount = 1;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);





	WORD   icount = indexList.size();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			int num_vertices = shape.mesh.num_face_vertices[f];

	Release();

			{

	std::string error;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

 * Lesson 1: Hello World!

}



	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pInputLayout);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



			case SDLK_DOWN:

int main(int, char**)

		&materials,

	XMFLOAT4         ambient;  //環境光(r,g,b)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		// Loop over faces(polygon)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

CD3DTest::~CD3DTest()

HRESULT CD3DTest::Create(HWND hwnd)



	cbDesc.StructureByteStride = 0;

	m_VertexCount = 0;

	vector<WORD> indexList;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		1,

		SDL_RenderCopy(ren, tex, NULL, NULL);

		D3D_DRIVER_TYPE_HARDWARE,

struct ConstantLight {

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pDepthStencilView);

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//Create Index

		{

int main(int, char**)

	XMFLOAT4X4 world;

	//テクスチャ読み込み

	D3D11_SUBRESOURCE_DATA vrData;

	m_pInputLayout = NULL;

{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pTexture = NULL;





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{

	SAFE_RELEASE(m_pInputLayout);



	tinyobj::ObjReader reader;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#include <iostream>

		D3D_DRIVER_TYPE_HARDWARE,

			{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4X4 world;

struct ConstantMaterial {

		pVList[i] = vertexlist[i];



	UINT flags = 0;

	m_IndexCount = icount;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		return hr;



	ZeroMemory(&txDesc, sizeof(txDesc));

		KEY_PRESS_SURFACE_DEFAULT,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pDepthStencilTexture = NULL;

struct ConstantMaterial {

	m_pSwapChain = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (!reader.Warning().empty())

		pLevels,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pDevice);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.SampleDesc.Quality = 0;

			index_offset += fv;

	Vertex* pVList = new Vertex[vcount];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

using std::cout; using std::endl;

	DXGI_SWAP_CHAIN_DESC scDesc;

}
	{



	if (FAILED(hr))

	tinyobj::attrib_t attrib;

}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		KEY_PRESS_SURFACE_UP,

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pIndexBuffer = NULL;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		return hr;

		SDL_Delay(1000);

#endif





	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_TOTAL

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pIndexBuffer);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				break;

	scDesc.BufferDesc.Height = rect.Height();

	{

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	txDesc.MiscFlags = 0;

	}*/

int main(int, char**)





void CD3DTest::Release()

	m_pDepthStencilView = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	//Create Index

};

	txDesc.MipLevels = 1;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	pBackBuffer->Release();

	std::string imagePath = "hello.bmp";

{

{

	cbDesc.StructureByteStride = 0;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	}

	SAFE_RELEASE(m_pVertexShader);

	return 0;

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	if (FAILED(hr))

		return hr;

	ConstantLight    pntLight; //点光源

	float    nearZ = 0.1f;

	vrData.SysMemSlicePitch = 0;

	{



	if (SDL_Init(SDL_INIT_VIDEO != 0))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	D3D11_SUBRESOURCE_DATA vrData;

		SDL_Delay(1000);

		return hr;



		D3D11_SDK_VERSION,



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





	}



		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		size_t index_offset = 0;  // インデントのオフセット

		SDL_RenderPresent(ren);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

}



	m_pSampler = NULL;

	return;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

			case SDLK_DOWN:



void CD3DTest::Release()

	vector<WORD> indexList;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	int     vcount = vertexlist.size();

	vbDesc.StructureByteStride = 0;

	//頂点シェーダー生成

			}

	WORD   icount = indexList.size();

	vbDesc.StructureByteStride = 0;

	SDL_FreeSurface(bmp);

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	delete[] pIList;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	UINT flags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	txDesc.Width = rect.Width();



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	for (const auto& shape : shapes)

	txDesc.ArraySize = 1;

	}

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		if (!ret)

	vector<Vertex> vertexlist;

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4         eyePos;   //視点座標



	LoadObj(vertexlist, indexList);

	m_pTextureView = NULL;

	//Key press surfaces constants





				indexlist.push_back(index);

	if (FAILED(hr))



		pLevels,

}



	m_VertexCount = vcount;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pVertexBuffer);



	Release();



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	bool ret = tinyobj::LoadObj(



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

#include <iostream>



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return 1;

{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ibDesc.StructureByteStride = 0;

 */

	ibDesc.CPUAccessFlags = 0;

	SDL_Quit();

	//vector<WORD> index_t;

	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pLightBuffer);

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//インデックスバッファ作成







	/*

	SAFE_RELEASE(m_pSwapChain);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

struct ConstantMaterial {





		KEY_PRESS_SURFACE_RIGHT,

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);







				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

struct ConstantLightBuffer {

		{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	CRect                rect;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	//Key press surfaces constants



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pRenderTargetView = NULL;

struct ConstantMatrixBuffer {

	txDesc.MiscFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			// Loop over vertices in the face.

}

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pMatrixBuffer);

			default:

	::ZeroMemory(&scDesc, sizeof(scDesc));

			{

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	auto& materials = reader.GetMaterials();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		KEY_PRESS_SURFACE_DOWN,

	SDL_FreeSurface(bmp);

 */

	float    nearZ = 0.1f;

	{



	UINT offsets = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	scDesc.SampleDesc.Quality = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.MipLevels = 1;

	cbDesc.MiscFlags = 0;

	{

				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	DXGI_SWAP_CHAIN_DESC scDesc;

	SAFE_RELEASE(m_pSwapChain);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



#include <iostream>

	tinyobj::ObjReaderConfig reader_config;

	vrData.SysMemSlicePitch = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.StructureByteStride = 0;



	ID3D11Texture2D* pBackBuffer;

		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	//頂点レイアウト作成



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

{



{

	if (FAILED(hr))

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	}

	scDesc.BufferDesc.Width = rect.Width();

	}*/

				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

		KEY_PRESS_SURFACE_RIGHT,





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_VertexCount = vcount;

	float    fov = XMConvertToRadians(20.0f);

	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

	SDL_DestroyTexture(tex);

	vrData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pPixelShader);

		flags,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			}

#define TINYOBJLOADER_IMPLEMENTATION

	}

#include "DirectXManager.h"





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

		R"(cube.obj)");



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	//Create Index

	if (m_pImmediateContext)

	SDL_Quit();

	cbDesc.MiscFlags = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	ibDesc.StructureByteStride = 0;

	D3D11_TEXTURE2D_DESC txDesc;

			default:

	float    nearZ = 0.1f;

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

	}



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		D3D11_SDK_VERSION,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.OutputWindow = hwnd;

	cbDesc.StructureByteStride = 0;

		SDL_RenderPresent(ren);

	m_IndexCount = 0;

	SAFE_RELEASE(m_pImmediateContext);

	// Loop over shapes

				// access to vertex

	Vertex* pVList = new Vertex[vcount];





	m_pRenderTargetView = NULL;



		// Loop over faces(polygon)

	if (FAILED(hr))

{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pMatrixBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	D3D11_BUFFER_DESC ibDesc;

	SAFE_RELEASE(m_pVertexShader);

			case SDLK_UP:

	//First we need to start up SDL, and make sure it went ok

		SDL_RenderClear(ren);

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pRenderTargetView);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		NULL,

	for (int i = 0; i < 3; i++)

	XMFLOAT4         eyePos;   //視点座標

				indexlist.push_back(index);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	if (FAILED(hr))

	ConstantLightBuffer clb;

	vrData.pSysMem = &pVList[0];

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	// Loop over shapes

#include <iostream>

	//テクスチャ読み込み



	m_pSwapChain = NULL;

	return;

	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			case SDLK_DOWN:

	// Loop over shapes

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	delete[] pVList;

		exit(1);

	XMFLOAT4 specular;          //反射(r,g,b)

	tinyobj::ObjReader reader;



	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;



		SDL_RenderClear(ren);

	if (FAILED(hr))

	auto& materials = reader.GetMaterials();

		return hr;





	}

	//First we need to start up SDL, and make sure it went ok



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		&attrib,



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	m_IndexCount = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	int     vcount = vertexlist.size();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	Release();

	SDL_Event e;

		&attrib,

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				indexlist.push_back(index);

	{

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



		size_t index_offset = 0;

	auto& shapes = reader.GetShapes();

	vector<WORD> indexList;

	for (int j = 0; j < icount; j++)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	{



	cbDesc.CPUAccessFlags = 0;

	m_pVertexBuffer = NULL;

	for (const auto& shape : shapes)



	return 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ConstantMaterial material; //物体の質感

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//頂点シェーダー生成

	//頂点バッファ作成

	if (FAILED(hr))





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

{

	}

	while (SDL_PollEvent(&e) != 0)

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

		&error,

	UINT offsets = 0;



	D3D11_TEXTURE2D_DESC txDesc;

			{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	ConstantLight    pntLight; //点光源

	D3D11_TEXTURE2D_DESC txDesc;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	return 0;

int main(int, char**)

	delete[] pVList;

			default:

 */



	LoadObj(vertexlist, indexList);

	m_pMatrixBuffer = NULL;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	if (FAILED(hr))

	Vertex* pVList = new Vertex[vcount];



			default:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

			index_offset += num_vertices;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_FreeSurface(bmp);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pRenderTargetView);



		&scDesc,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		//User requests quit



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 pos;               //座標(x,y,z)

 * Lesson 1: Hello World!

	LoadObj(vertexlist, indexList);

	irData.SysMemSlicePitch = 0;

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pMatrixBuffer);

			index_offset += fv;

		SDL_RenderPresent(ren);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

		return hr;



		size_t index_offset = 0;

struct ConstantMaterial {

		{

	float    nearZ = 0.1f;

	ID3D11Texture2D* pBackBuffer;

	cbDesc.CPUAccessFlags = 0;

	m_pTexture = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	while (SDL_PollEvent(&e) != 0)

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;







	// Loop over shapes



	m_Viewport.Height = (FLOAT)rect.Height();

	//vector<Vertex> vertex_t;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_FreeSurface(suf);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	return 0;

		SDL_Delay(1000);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Quality = 0;

	m_pVertexShader = NULL;



		1,

	pBackBuffer->Release();

	{

void CD3DTest::Release()



	SDL_FreeSurface(suf);

	m_Viewport.MaxDepth = 1.0f;

	m_VertexCount = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		1,

	SDL_DestroyRenderer(ren);

	scDesc.OutputWindow = hwnd;



	while (SDL_PollEvent(&e) != 0)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		cout << "SDL_INIT_ERROR" << endl;

				// access to vertex



	return 0;

	float    fov = XMConvertToRadians(20.0f);



	SDL_DestroyRenderer(ren);





	float    farZ = 100.0f;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMatrixBuffer {

			}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		}

	XMStoreFloat4(&clb.eyePos, eye);

		SDL_Delay(1000);

		return hr;

	ibDesc.StructureByteStride = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&shapes,

	m_pPixelShader = NULL;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

void CD3DTest::Render()

		SDL_RenderPresent(ren);

	m_pRenderTargetView = NULL;

		return 1;

	//vector<WORD> index_t;

	SDL_FreeSurface(bmp);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		D3D_DRIVER_TYPE_HARDWARE,

	Vertex* pVList = new Vertex[vcount];



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return;



void CD3DTest::Render()

	for (size_t s = 0; s < shapes.size(); s++)

	txDesc.SampleDesc.Quality = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 specular;          //反射(r,g,b)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		&m_pDevice,

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pImmediateContext);



	{

			case SDLK_LEFT:

		cout << "SDL_INIT_ERROR" << endl;

	dsDesc.Texture2D.MipSlice = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	XMFLOAT4X4 projection;

	DXGI_SWAP_CHAIN_DESC scDesc;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			case SDLK_LEFT:



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



 */

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pLightBuffer);







	ConstantLight    pntLight; //点光源

	auto& shapes = reader.GetShapes();

	m_Angle += XMConvertToRadians(1.0f);



		KEY_PRESS_SURFACE_RIGHT,

		&materials,

	vbDesc.MiscFlags = 0;





	//頂点レイアウト作成

				break;

	{

	bool ret = tinyobj::LoadObj(

	Release();

	tinyobj::attrib_t attrib;

{



	m_Viewport.TopLeftX = 0;

				break;

		pVList[i] = vertexlist[i];



	auto& materials = reader.GetMaterials();





	if (m_pImmediateContext)

	std::string inputfile = "test.obj";

	//Create Index

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pDepthStencilTexture = NULL;

		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		{







	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//vector<Vertex> vertex_t;

	//深度ステンシルバッファ作成



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	std::string imagePath = "hello.bmp";

	ibDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4X4 view;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	float    nearZ = 0.1f;

/*

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	::GetClientRect(hwnd, &rect);

	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	if (FAILED(hr))

		D3D11_SDK_VERSION,



	SAFE_RELEASE(m_pTexture);

	cbDesc.MiscFlags = 0;

		SDL_Delay(1000);

	m_pVertexBuffer = NULL;

	//頂点レイアウト作成

		pLevels,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	CRect                rect;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (!error.empty())

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



struct ConstantLightBuffer {

	txDesc.SampleDesc.Count = 1;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

	{

	SDL_Quit();

	}*/

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//頂点シェーダー生成

	ibDesc.MiscFlags = 0;

	m_Viewport.MinDepth = 0.0f;

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilTexture);



				indexlist.push_back(idx.vertex_index);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//テクスチャ読み込み

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pLightBuffer);

	vbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

};

	WORD   icount = indexList.size();

		return hr;

{

	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	m_IndexCount = 0;

	SDL_Event e;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	}

{



		return hr;

		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pInputLayout = NULL;

		return hr;

		SDL_Delay(1000);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

 * Lesson 1: Hello World!

	while (SDL_PollEvent(&e) != 0)

}



				break;

	}

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



			break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



				break;



	ConstantMatrixBuffer cmb;

};

		1,

	delete[] pVList;

	//vector<Vertex> vertex_t;

	irData.SysMemSlicePitch = 0;

	std::vector<tinyobj::material_t> materials;

void CD3DTest::Release()

HRESULT CD3DTest::Create(HWND hwnd)



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}



	//vector<WORD> index_t;



struct ConstantLightBuffer {

		&m_pImmediateContext);

	delete[] pVList;

	//頂点シェーダー生成



	D3D11_TEXTURE2D_DESC txDesc;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyRenderer(ren);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	D3D11_SUBRESOURCE_DATA irData;



			}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	cbDesc.StructureByteStride = 0;

	return;

	XMFLOAT4 specular;          //反射(r,g,b)

		//User presses a key

		size_t index_offset = 0;

	vrData.pSysMem = &pVList[0];

	if (FAILED(hr))

	}

		return hr;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };





	dsDesc.Texture2D.MipSlice = 0;

	SAFE_RELEASE(m_pDevice);

	{



		return hr;

	}

	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





	m_pSwapChain->Present(0, 0);

		KEY_PRESS_SURFACE_TOTAL

	Release();

	for (int i = 0; i < vcount; i++)

	ibDesc.StructureByteStride = 0;

	{

	if (FAILED(hr))

	m_pImmediateContext = NULL;

};

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

				break;





	SAFE_RELEASE(m_pTexture);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	return 0;

	SDL_DestroyTexture(tex);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.SampleDesc.Count = 1;

	D3D11_SUBRESOURCE_DATA irData;

		size_t index_offset = 0;  // インデントのオフセット

	}

				break;



	return hr;

	if (FAILED(hr))

		return hr;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		if (!reader.Error().empty())





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





			exit(1);

};

	m_pLightBuffer = NULL;

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	D3D11_SAMPLER_DESC smpDesc;



}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	std::vector<tinyobj::shape_t> shapes;

#include <iostream>

	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pInputLayout);

}



		pVList[i] = vertexlist[i];

		SDL_RenderPresent(ren);

	};

#include "DirectXManager.h"



	};

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

int main(int, char**)

				WORD index = idx.vertex_index;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4(&clb.eyePos, eye);

	return;





	m_pSwapChain = NULL;

	CRect                rect;

				// access to vertex

	WORD* pIList = new WORD[icount];

	m_pMatrixBuffer = NULL;

	m_pPixelShader = NULL;

	}*/

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	if (FAILED(hr))

		pVList[i] = vertexlist[i];

	if (FAILED(hr))

		}

HRESULT CD3DTest::Create(HWND hwnd)



	SDL_Quit();

		&attrib,

				// access to vertex

	m_Viewport.MaxDepth = 1.0f;







	float    fov = XMConvertToRadians(20.0f);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



int SEGMENT = 36;

	{

			case SDLK_LEFT:

	{



	m_pMatrixBuffer = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		SDL_RenderClear(ren);



	}*/

#include <SDL.h>

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		return hr;

{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	Release();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		m_pImmediateContext->ClearState();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	}



using std::cout; using std::endl;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



void CD3DTest::Render()

	for (int j = 0; j < icount; j++)

#include "DirectXManager.h"

		exit(1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ConstantMatrixBuffer cmb;

			case SDLK_DOWN:

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		SDL_Delay(1000);

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&level,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	scDesc.OutputWindow = hwnd;

{

	auto& materials = reader.GetMaterials();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pSampler);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				break;

	XMFLOAT4 ambient;           //環境(r,g,b)

		return 1;

			}

	XMFLOAT4 pos;               //座標(x,y,z)

		R"(cube.obj)");

			case SDLK_UP:

		cout << "SDL_INIT_ERROR" << endl;

#include <iostream>

	txDesc.MiscFlags = 0;

	SDL_DestroyTexture(tex);

	m_pInputLayout = NULL;

	float    nearZ = 0.1f;

	{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pLightBuffer);

	std::string imagePath = "hello.bmp";

		// Loop over faces(polygon)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		SDL_Delay(1000);

#include "DirectXManager.h"

			case SDLK_UP:

	m_pDepthStencilTexture = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	// Loop over shapes

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pLightBuffer = NULL;







	//頂点バッファ作成

				WORD index = idx.vertex_index;

 */

	while (SDL_PollEvent(&e) != 0)

	{

	//Create Index



	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

			{

		KEY_PRESS_SURFACE_UP,

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

	m_VertexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	SAFE_RELEASE(m_pMatrixBuffer);

}



			for (size_t v = 0; v < num_vertices; v++)



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	//頂点シェーダー生成

	XMFLOAT4         eyePos;   //視点座標

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

		m_pImmediateContext->ClearState();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		KEY_PRESS_SURFACE_DOWN,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

}

	SAFE_RELEASE(m_pPixelShader);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

		delete[] pVList;

	//ピクセルシェーダー生成

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	cbDesc.StructureByteStride = 0;



	m_pMatrixBuffer = NULL;

{

		{

			case SDLK_UP:

	D3D11_SAMPLER_DESC smpDesc;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	return;



	tinyobj::ObjReaderConfig reader_config;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMFLOAT4         eyePos;   //視点座標

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	std::vector<tinyobj::shape_t> shapes;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		SDL_RenderClear(ren);

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		cout << "SDL_INIT_ERROR" << endl;



				tinyobj::real_t tx =

	//Key press surfaces constants

			}

	m_Viewport.TopLeftY = 0;

		&m_pImmediateContext);

	m_VertexCount = vcount;

	ZeroMemory(&txDesc, sizeof(txDesc));

	//First we need to start up SDL, and make sure it went ok

	{

	//vector<WORD> index_t;

			case SDLK_UP:

			case SDLK_DOWN:



	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	cbDesc.CPUAccessFlags = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		else if (e.type == SDL_KEYDOWN)

	scDesc.OutputWindow = hwnd;

		&error,

		KEY_PRESS_SURFACE_UP,

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	delete[] pVList;

	//Clean up our objects and quit

		size_t index_offset = 0;  // インデントのオフセット

		&shapes,

		if (e.type == SDL_QUIT)

		return hr;



	XMFLOAT4 pos;               //座標(x,y,z)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pSampler);

#define TINYOBJLOADER_IMPLEMENTATION

		&attrib,



		//User presses a key

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	irData.pSysMem = &pIList[0];



	m_pInputLayout = NULL;

	UINT offsets = 0;

	//頂点レイアウト作成

	D3D_FEATURE_LEVEL level;

	for (int i = 0; i < vcount; i++)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_DestroyTexture(tex);

		return hr;

	//頂点レイアウト作成

	D3D11_SAMPLER_DESC smpDesc;

	delete[] pIList;

struct ConstantLight {

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		// Loop over faces(polygon)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	UINT offsets = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		//User requests quit

			index_offset += num_vertices;

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	ConstantMatrixBuffer cmb;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	m_pVertexBuffer = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return hr;

}



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];







{

	m_IndexCount = 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.MiscFlags = 0;

}
	if (FAILED(hr))



		delete[] pVList;

	SDL_DestroyTexture(tex);

	}

			index_offset += fv;

		{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

struct ConstantMaterial {

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMFLOAT4         eyePos;   //視点座標

	vrData.SysMemSlicePitch = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pImmediateContext);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		SDL_Delay(1000);

	SDL_FreeSurface(bmp);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	if (FAILED(hr))

	{

				vertex.push_back(vertex_tmp);

	m_pVertexShader = NULL;

	SDL_DestroyTexture(tex);



	{

	ConstantLight    pntLight; //点光源



	return;



using std::cout; using std::endl;

	{

	std::vector<tinyobj::material_t> materials;

				WORD index = idx.vertex_index;

	SDL_Quit();

	XMFLOAT4X4 view;



		return hr;

		KEY_PRESS_SURFACE_UP,

#include "DirectXManager.h"

				break;

	int     vcount = vertexlist.size();

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pDepthStencilView = NULL;

			//Select surfaces based on key press

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

}

	ConstantLightBuffer clb;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (!reader.Warning().empty())



		return hr;

				tinyobj::real_t tx =

	//テクスチャ読み込み

	if (FAILED(hr))



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (FAILED(hr))



	auto& materials = reader.GetMaterials();



		return hr;



	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	SDL_DestroyTexture(tex);

	//頂点シェーダー生成

	vector<WORD> indexList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Quality = 0;

	//vector<WORD> index_t;

};

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4X4 world;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

}
	ibDesc.CPUAccessFlags = 0;

	if (m_pImmediateContext)

	cbDesc.CPUAccessFlags = 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	}

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	return 0;



	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pSwapChain->Present(0, 0);

	//Key press surfaces constants

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	if (FAILED(hr))

	if (FAILED(hr))

			index_offset += num_vertices;



	SDL_FreeSurface(suf);

	cbDesc.StructureByteStride = 0;

	//Create Index

	Release();

	vbDesc.CPUAccessFlags = 0;

		return hr;

	std::string inputfile = "test.obj";

	tinyobj::ObjReaderConfig reader_config;

				break;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		SDL_RenderPresent(ren);

	delete[] pIList;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}


			case SDLK_RIGHT:

			case SDLK_UP:

			break;

			break;

	delete[] pVList;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pSwapChain);





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		SDL_Delay(1000);

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		return hr;

		KEY_PRESS_SURFACE_RIGHT,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMStoreFloat4(&clb.eyePos, eye);

using std::cout; using std::endl;

	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;



	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	ibDesc.MiscFlags = 0;

	if (FAILED(hr))

	{

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		&m_pDevice,

	//Vertex* pVList = new Vertex[vcount];

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}

	dsDesc.Format = txDesc.Format;

				break;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	bool ret = tinyobj::LoadObj(

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	for (const auto& shape : shapes)

	m_pSwapChain->Present(0, 0);

	float    nearZ = 0.1f;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vbDesc.StructureByteStride = 0;

		return hr;



	//ピクセルシェーダー生成

	ConstantLight    pntLight; //点光源

	scDesc.BufferCount = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);









	return 0;

	UINT strides = sizeof(Vertex);

				break;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	ZeroMemory(&txDesc, sizeof(txDesc));

	//頂点シェーダー生成

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	irData.pSysMem = &pIList[0];



		KEY_PRESS_SURFACE_UP,

				// access to vertex

				break;

		&m_pSwapChain,



	float    farZ = 100.0f;

	SDL_Event e;

		&m_pDevice,



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	txDesc.Height = rect.Height();

		// Loop over faces(polygon)

	XMFLOAT4X4 projection;



	m_pRenderTargetView = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

void CD3DTest::Render()

	std::string error;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





		return hr;

		if (!ret)



	{

{







	}*/

				break;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

		return hr;

	m_pVertexBuffer = NULL;





		&scDesc,

};

	vbDesc.MiscFlags = 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		return 1;

};



	//頂点バッファ作成

		NULL,

}

	vrData.SysMemPitch = 0;

	SAFE_RELEASE(m_pTextureView);



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	if (FAILED(hr))

			break;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);



	XMStoreFloat4(&clb.material.specular, materialSpecular);



	for (int i = 0; i < 3; i++)

		SDL_RenderPresent(ren);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//インデックスバッファ作成

		1,

	SAFE_RELEASE(m_pInputLayout);

	{

	if (FAILED(hr))



#include <iostream>



			for (size_t v = 0; v < num_vertices; v++)

	std::string error;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

using std::cout; using std::endl;





	for (int i = 0; i < vcount; i++)



	vector<Vertex> vertexlist;



		&m_pDevice,



	SDL_Quit();

	/*

	cbDesc.CPUAccessFlags = 0;



				indexlist.push_back(idx.vertex_index);

			switch (e.key.keysym.sym)

	D3D11_BUFFER_DESC ibDesc;

	}*/

	vbDesc.MiscFlags = 0;

		//User requests quit



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ConstantMaterial material; //物体の質感



	SAFE_RELEASE(m_pDepthStencilView);



			{

				WORD index = idx.vertex_index;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

#ifdef _DEBUG

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D_FEATURE_LEVEL level;

		}

			case SDLK_LEFT:

	float    fov = XMConvertToRadians(20.0f);

int main(int, char**)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pDepthStencilView);



		&shapes,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



			}

		exit(1);

				indexlist.push_back(idx.vertex_index);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext = NULL;

		&m_pImmediateContext);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.StructureByteStride = 0;

	{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;







	Vertex* pVList = new Vertex[vcount];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Event e;

	m_Viewport.MaxDepth = 1.0f;

	Release();

	XMFLOAT4         ambient;  //環境光(r,g,b)

		}

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	HRESULT              hr;

	//定数バッファ作成

		if (!reader.Error().empty())

	m_pSwapChain = NULL;

			}

	if (m_pImmediateContext)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	pBackBuffer->Release();

 */

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t tx =

	return hr;

		pVList[i] = vertexlist[i];



		if (!ret)



	m_VertexCount = vcount;





	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

		return hr;

	m_pDevice = NULL;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

int SEGMENT = 36;

	m_pVertexBuffer = NULL;



	auto& attrib = reader.GetAttrib();



	SAFE_RELEASE(m_pVertexShader);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

			// Loop over vertices in the face.

	HRESULT              hr;

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		&attrib,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	float    fov = XMConvertToRadians(20.0f);

	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	XMStoreFloat4(&clb.material.specular, materialSpecular);



			index_offset += num_vertices;

	vrData.SysMemPitch = 0;




