	D3D11_BUFFER_DESC cbDesc;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];





	SAFE_RELEASE(m_pDepthStencilTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	DXGI_SWAP_CHAIN_DESC scDesc;

				// access to vertex

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		&shapes,

	return hr;

		SDL_RenderClear(ren);





	HRESULT              hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ZeroMemory(&txDesc, sizeof(txDesc));

		D3D11_SDK_VERSION,

	m_pVertexShader = NULL;

	};

	{



	m_pPixelShader = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				break;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		}

	XMFLOAT4X4 view;

	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	delete[] pIList;



	SDL_FreeSurface(suf);

		delete[] pIList;

struct ConstantMatrixBuffer {

	ID3D11Texture2D* pBackBuffer;

 */

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	if (FAILED(hr))

	m_Viewport.TopLeftX = 0;

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	}

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderClear(ren);

	m_pImmediateContext = NULL;

	D3D11_BUFFER_DESC vbDesc;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::CD3DTest()



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		1,

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_DestroyWindow(win);

	std::string error;

	SDL_DestroyWindow(win);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::real_t tx =



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			// Loop over vertices in the face.



	for (const auto& shape : shapes)

	}

	if (FAILED(hr))

	ID3D11Texture2D* pBackBuffer;

	for (const auto& shape : shapes)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	//Create Index

	XMFLOAT4X4 projection;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (!error.empty())



	irData.SysMemSlicePitch = 0;

	cbDesc.StructureByteStride = 0;

				WORD index = idx.vertex_index;

}



}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	tinyobj::ObjReaderConfig reader_config;

				break;

	if (m_pImmediateContext)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pTextureView);

	D3D11_SAMPLER_DESC smpDesc;

		&m_pSwapChain,

	SDL_DestroyTexture(tex);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.MipLevels = 1;

				vertex.push_back(vertex_tmp);



	//First we need to start up SDL, and make sure it went ok

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	XMFLOAT4 ambient;           //環境(r,g,b)

	{

		R"(cube.obj)");

	delete[] pVList;

	scDesc.BufferCount = 1;

	for (int i = 0; i < vcount; i++)



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_Quit();

	m_pSampler = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	std::string error;

int main(int, char**)

				indexlist.push_back(idx.vertex_index);

	scDesc.BufferDesc.Height = rect.Height();

	XMFLOAT4X4 view;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		delete[] pIList;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	scDesc.OutputWindow = hwnd;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	WORD* pIList = new WORD[icount];

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		else if (e.type == SDL_KEYDOWN)

	}

	WORD   icount = indexList.size();

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

	scDesc.SampleDesc.Quality = 0;





	}

		return 1;



HRESULT CD3DTest::Create(HWND hwnd)

		KEY_PRESS_SURFACE_TOTAL

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	txDesc.Height = rect.Height();

			exit(1);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	irData.SysMemSlicePitch = 0;

	//Key press surfaces constants

	XMFLOAT4         eyePos;   //視点座標

	for (int i = 0; i < vcount; i++)



	cbDesc.MiscFlags = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SDL_Event e;





		size_t index_offset = 0;  // インデントのオフセット

		SDL_RenderPresent(ren);

				vertex.push_back(vertex_tmp);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	//Vertex* pVList = new Vertex[vcount];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SAMPLER_DESC smpDesc;

	m_Viewport.Width = (FLOAT)rect.Width();



		KEY_PRESS_SURFACE_DOWN,

	return;

	ibDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	SDL_DestroyTexture(tex);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (FAILED(hr))

		return hr;

	ConstantMatrixBuffer cmb;

	//頂点レイアウト作成



	if (FAILED(hr))

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext = NULL;

	m_pTextureView = NULL;

	{

			case SDLK_LEFT:



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		// Loop over faces(polygon)

	m_pDepthStencilView = NULL;

	if (FAILED(hr))



	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))



				vertex.push_back(vertex_tmp);

	SAFE_RELEASE(m_pMatrixBuffer);

	{

	if (!error.empty())

	SDL_DestroyTexture(tex);



	SAFE_RELEASE(m_pImmediateContext);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_DestroyTexture(tex);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

		{

	SAFE_RELEASE(m_pDepthStencilView);

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pDepthStencilTexture);



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	CRect                rect;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyWindow(win);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

#define TINYOBJLOADER_IMPLEMENTATION

	m_VertexCount = vcount;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pInputLayout);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	dsDesc.Texture2D.MipSlice = 0;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//Key press surfaces constants



	m_VertexCount = vcount;

		&error,

		if (!ret)

		pVList[i] = vertexlist[i];



		SDL_RenderPresent(ren);

		{

	if (!reader.Warning().empty())

	m_Angle += XMConvertToRadians(1.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	tinyobj::ObjReader reader;

	vector<WORD> indexList;

int main(int, char**)

	vector<Vertex> vertexlist;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		size_t index_offset = 0;

	//テクスチャ読み込み

	std::vector<tinyobj::shape_t> shapes;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.BufferDesc.Height = rect.Height();

CD3DTest::CD3DTest()

		KEY_PRESS_SURFACE_RIGHT,



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		{



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pLightBuffer = NULL;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	{



		&attrib,

HRESULT CD3DTest::Create(HWND hwnd)



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_LEFT,

	LoadObj(vertexlist, indexList);

		return hr;



		&error,



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	::GetClientRect(hwnd, &rect);

	}*/



	float    fov = XMConvertToRadians(20.0f);

	vector<WORD> indexList;

	delete[] pVList;

	cbDesc.CPUAccessFlags = 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

	m_Viewport.MinDepth = 0.0f;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA irData;



	SAFE_RELEASE(m_pLightBuffer);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.MiscFlags = 0;

}

	enum KeyPressSurfaces

	XMFLOAT4X4 view;

	}

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	//vector<Vertex> vertex_t;

	Release();

	txDesc.Width = rect.Width();

		&shapes,

	};

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	{

	{

	SDL_DestroyTexture(tex);

	txDesc.Height = rect.Height();

	m_pDevice = NULL;

{

}
	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				indexlist.push_back(idx.vertex_index);

	SDL_DestroyRenderer(ren);

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	reader_config.mtl_search_path = "./"; // Path to material files

	auto& materials = reader.GetMaterials();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	tinyobj::attrib_t attrib;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_DestroyWindow(win);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	XMStoreFloat4(&clb.ambient, lightAmbient);

	{

	WORD   icount = indexList.size();

	//Vertex* pVList = new Vertex[vcount];







	m_VertexCount = vcount;

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Event e;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t tx =

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

		// Loop over faces(polygon)

/*

	//Clean up our objects and quit

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	{



int SEGMENT = 36;





	irData.SysMemSlicePitch = 0;

	Release();

 */

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pIndexBuffer = NULL;

	vector<WORD> indexList;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		1,

	return 0;

	txDesc.MiscFlags = 0;

};

	scDesc.BufferDesc.Width = rect.Width();

	m_pDevice = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_Event e;

	txDesc.MiscFlags = 0;

	delete[] pVList;

}

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pDepthStencilView);

	std::string inputfile = "test.obj";

	m_pIndexBuffer = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

				WORD index = idx.vertex_index;

		SDL_Delay(1000);

		return hr;

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	}

	// Loop over shapes

		D3D_DRIVER_TYPE_HARDWARE,





	WORD   icount = indexList.size();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		}

	//頂点シェーダー生成

	m_pTextureView = NULL;

};

	m_pSampler = NULL;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	//Key press surfaces constants



struct ConstantMaterial {





	if (FAILED(hr))

		return hr;

	m_pPixelShader = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	return 0;

	/*

	m_pDepthStencilView = NULL;

	{

		{

		if (!reader.Error().empty())

	UINT offsets = 0;

	/*



	WORD* pIList = new WORD[icount];





	//頂点シェーダー生成



	std::string imagePath = "hello.bmp";

				WORD index = idx.vertex_index;

				vertex.push_back(vertex_tmp);

	::ZeroMemory(&scDesc, sizeof(scDesc));

}

	txDesc.MipLevels = 1;

	irData.SysMemPitch = 0;







	m_pInputLayout = NULL;

	D3D11_SAMPLER_DESC smpDesc;

		&scDesc,

	auto& attrib = reader.GetAttrib();

	vrData.SysMemPitch = 0;

	txDesc.MipLevels = 1;

	XMFLOAT4 ambient;           //環境(r,g,b)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pDevice = NULL;

	m_IndexCount = 0;



		}

			// Loop over vertices in the face.



			break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

}



		NULL,

}

	SAFE_RELEASE(m_pInputLayout);

	LoadObj(vertexlist, indexList);

};

	//Vertex* pVList = new Vertex[vcount];



		1,





	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		D3D11_SDK_VERSION,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	reader_config.mtl_search_path = "./"; // Path to material files

	D3D11_BUFFER_DESC cbDesc;

	SAFE_RELEASE(m_pSwapChain);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::string imagePath = "hello.bmp";

	for (int i = 0; i < 3; i++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



			index_offset += fv;

{

	txDesc.SampleDesc.Quality = 0;

				break;

		1,

	}

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	bool ret = tinyobj::LoadObj(

		if (!reader.Error().empty())

	txDesc.Width = rect.Width();

	ibDesc.StructureByteStride = 0;



	if (!error.empty())



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

CD3DTest::CD3DTest()

		pIList[j] = indexList[j];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

{

	D3D11_SUBRESOURCE_DATA vrData;

	if (!reader.ParseFromFile(inputfile, reader_config))





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//定数バッファ作成

	if (FAILED(hr))

	SAFE_RELEASE(m_pSwapChain);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





	if (FAILED(hr))

			{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (!reader.Warning().empty())

		KEY_PRESS_SURFACE_LEFT,

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		//User requests quit

#include <SDL.h>

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_UP,

	std::string inputfile = "test.obj";

	Vertex* pVList = new Vertex[vcount];

	m_pPixelShader = NULL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_DestroyTexture(tex);

	Vertex* pVList = new Vertex[vcount];

			}

	//Clean up our objects and quit

	txDesc.CPUAccessFlags = 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

}





		&attrib,

	m_pTexture = NULL;

	SDL_Quit();

};

	txDesc.ArraySize = 1;



		1,

int main(int, char**)

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pSwapChain->Present(0, 0);

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pSampler);

		delete[] pIList;

	CRect                rect;



				break;



	if (FAILED(hr))



		&materials,

				tinyobj::real_t ty =

		{

	irData.SysMemSlicePitch = 0;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (!reader.Warning().empty())

	m_pImmediateContext = NULL;

		SDL_RenderClear(ren);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMStoreFloat4(&clb.eyePos, eye);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		return hr;

				break;

		return hr;





	{



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	for (int j = 0; j < icount; j++)

		}

	m_VertexCount = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&materials,

	cbDesc.MiscFlags = 0;

	scDesc.BufferDesc.Height = rect.Height();

		&attrib,

		if (!reader.Error().empty())

			index_offset += fv;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			int num_vertices = shape.mesh.num_face_vertices[f];



	pBackBuffer->Release();

	m_VertexCount = 0;

	//Key press surfaces constants

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

		&m_pDevice,

	Release();

	//インデックスバッファ作成

			//Select surfaces based on key press

		SDL_RenderPresent(ren);

		flags,

	m_Viewport.MaxDepth = 1.0f;

	}

	if (FAILED(hr))



struct ConstantMaterial {

	if (FAILED(hr))



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);





	{

		KEY_PRESS_SURFACE_DEFAULT,

/*

			{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pIndexBuffer = NULL;



	//Clean up our objects and quit



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	Vertex* pVList = new Vertex[vcount];

	}

	if (FAILED(hr))

			//Select surfaces based on key press



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		return hr;

	//First we need to start up SDL, and make sure it went ok

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	//定数バッファ作成

	tinyobj::ObjReaderConfig reader_config;

	m_Viewport.MinDepth = 0.0f;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ConstantLightBuffer clb;



	SDL_Event e;



		KEY_PRESS_SURFACE_LEFT,

	UINT offsets = 0;

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4         eyePos;   //視点座標

	WORD   icount = indexList.size();

}
	txDesc.SampleDesc.Quality = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				// access to vertex

{

	return;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&level,



	return 0;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	//First we need to start up SDL, and make sure it went ok

	SDL_Quit();

	std::string imagePath = "hello.bmp";

		SDL_RenderClear(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))

int SEGMENT = 36;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pSwapChain->Present(0, 0);

	//ピクセルシェーダー生成





 * Lesson 1: Hello World!

	return;

	scDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

struct ConstantMaterial {

	//ピクセルシェーダー生成

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

		KEY_PRESS_SURFACE_LEFT,

	reader_config.mtl_search_path = "./"; // Path to material files

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pRenderTargetView);

		// Loop over faces(polygon)

		KEY_PRESS_SURFACE_LEFT,



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}



	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pVertexBuffer = NULL;





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	Release();

		SDL_RenderClear(ren);



	XMFLOAT4 specular;          //反射(r,g,b)

		&level,

	ZeroMemory(&txDesc, sizeof(txDesc));

	//Create Index

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	D3D11_SUBRESOURCE_DATA vrData;

#include <iostream>

	//ピクセルシェーダー生成

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	auto& materials = reader.GetMaterials();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pInputLayout = NULL;

	auto& shapes = reader.GetShapes();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

	cbDesc.CPUAccessFlags = 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

struct ConstantLight {

	}

		{

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#include <iostream>

	D3D11_SAMPLER_DESC smpDesc;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pPixelShader);

#include "DirectXManager.h"

	txDesc.Height = rect.Height();



		}

	ZeroMemory(&txDesc, sizeof(txDesc));

		if (!reader.Error().empty())

			{

				indexlist.push_back(idx.vertex_index);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{





	SDL_DestroyTexture(tex);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//深度ステンシルバッファ作成

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}





	txDesc.ArraySize = 1;

	bool ret = tinyobj::LoadObj(

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_LEFT,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		exit(1);



	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		m_pImmediateContext->ClearState();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				vertex.push_back(vertex_tmp);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_DestroyRenderer(ren);

	XMFLOAT4X4 view;

	XMFLOAT4 specular;          //反射(r,g,b)



#include <iostream>

	std::vector<tinyobj::shape_t> shapes;

};

	//ピクセルシェーダー生成

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vrData.SysMemSlicePitch = 0;

}
	ConstantLightBuffer clb;

	m_pMatrixBuffer = NULL;

}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		KEY_PRESS_SURFACE_UP,

			case SDLK_UP:

	reader_config.mtl_search_path = "./"; // Path to material files

				tinyobj::real_t ty =

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pIndexBuffer = NULL;

		else if (e.type == SDL_KEYDOWN)

	D3D11_BUFFER_DESC cbDesc;

			index_offset += fv;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	{





		SDL_RenderClear(ren);

	m_pTexture = NULL;





	m_pDevice = NULL;

	m_pSwapChain = NULL;

	if (FAILED(hr))

{

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	tinyobj::attrib_t attrib;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		&materials,

		return hr;

				indexlist.push_back(index);

		{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC cbDesc;

			}

		}



	vbDesc.CPUAccessFlags = 0;

	WORD* pIList = new WORD[icount];



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	WORD* pIList = new WORD[icount];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);







	UINT offsets = 0;

	}*/

{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		{

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

void CD3DTest::Render()



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	D3D11_BUFFER_DESC ibDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

{

		return hr;





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	if (FAILED(hr))



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	std::string imagePath = "hello.bmp";

	//深度ステンシルバッファ作成



		}

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	scDesc.Windowed = TRUE;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	if (FAILED(hr))

	//Clean up our objects and quit

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pDepthStencilView = NULL;

		SDL_RenderPresent(ren);

	vector<WORD> indexList;

	if (FAILED(hr))

		}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext = NULL;







	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pTexture = NULL;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		return hr;

	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.CPUAccessFlags = 0;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

		&m_pSwapChain,

void CD3DTest::Release()

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	m_pRenderTargetView = NULL;

		delete[] pVList;

};

};

		return hr;

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		exit(1);

	return;

	SDL_DestroyWindow(win);

		SDL_RenderClear(ren);

		return hr;

	m_pLightBuffer = NULL;

	//テクスチャ読み込み

#ifdef _DEBUG

	}

	}



	irData.pSysMem = &pIList[0];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	tinyobj::attrib_t attrib;

	return hr;

	}

	scDesc.BufferCount = 1;





	pBackBuffer->Release();

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

}

	SDL_DestroyTexture(tex);

		SDL_Delay(1000);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点シェーダー生成

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

struct ConstantMaterial {

		return hr;

}



	dsDesc.Texture2D.MipSlice = 0;



			switch (e.key.keysym.sym)



	XMFLOAT4X4 view;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



{



		delete[] pVList;

		}



	reader_config.mtl_search_path = "./"; // Path to material files



	XMFLOAT4 diffuse;           //拡散(r,g,b)



		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.SampleDesc.Quality = 0;

		exit(1);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



{







	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pDevice);

				vertex.push_back(vertex_tmp);

			{

	pBackBuffer->Release();



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pDepthStencilView);

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



		KEY_PRESS_SURFACE_UP,

		return hr;

	UINT offsets = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		return hr;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	SAFE_RELEASE(m_pMatrixBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemSlicePitch = 0;

		KEY_PRESS_SURFACE_UP,



	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	}

	scDesc.Windowed = TRUE;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	ZeroMemory(&txDesc, sizeof(txDesc));

	bool ret = tinyobj::LoadObj(

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{

}

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	irData.pSysMem = &pIList[0];

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		{

		SDL_RenderPresent(ren);

	for (int i = 0; i < 3; i++)

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		&m_pDevice,

		{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

{

			{



	//頂点シェーダー生成

	if (FAILED(hr))

	//ビューポート設定

		return 1;

	SAFE_RELEASE(m_pIndexBuffer);

		}



	txDesc.ArraySize = 1;



	//ピクセルシェーダー生成

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_pImmediateContext = NULL;



	if (!reader.Warning().empty())

	if (FAILED(hr))



		SDL_Delay(1000);

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t tx =

	XMFLOAT4         ambient;  //環境光(r,g,b)

		KEY_PRESS_SURFACE_LEFT,

	}

		return 1;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		&shapes,



		SDL_Delay(1000);

	if (FAILED(hr))



	{

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}

	m_IndexCount = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

/*

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ConstantLight    pntLight; //点光源

				// access to vertex

	if (m_pImmediateContext)

			int num_vertices = shape.mesh.num_face_vertices[f];

				vertex.push_back(vertex_tmp);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pSwapChain = NULL;

	//vector<WORD> index_t;

	float    fov = XMConvertToRadians(20.0f);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC cbDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pTextureView = NULL;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				tinyobj::real_t tx =



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pImmediateContext);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	if (FAILED(hr))


