void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SDL_FreeSurface(suf);

	}

	// Loop over shapes



/*

			index_offset += fv;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		&scDesc,

	{

	return 0;

		&attrib,

	std::vector<tinyobj::shape_t> shapes;



struct ConstantMatrixBuffer {

		//User presses a key

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	D3D11_BUFFER_DESC cbDesc;

	//テクスチャ読み込み

	UINT offsets = 0;

	}

			break;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4         eyePos;   //視点座標





#endif

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//頂点バッファ作成

	SAFE_RELEASE(m_pMatrixBuffer);

	if (FAILED(hr))

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.CPUAccessFlags = 0;

};

	delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilTexture);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	m_pTexture = NULL;

			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&materials,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	SAFE_RELEASE(m_pSampler);

	if (!error.empty())

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);





	XMFLOAT4         eyePos;   //視点座標

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		KEY_PRESS_SURFACE_DOWN,









};

int main(int, char**)



		}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				WORD index = idx.vertex_index;

	vbDesc.StructureByteStride = 0;

	{

				break;

		}

	}



		{

	for (size_t s = 0; s < shapes.size(); s++)

		pLevels,



		D3D11_SDK_VERSION,



	}

int main(int, char**)

		&m_pSwapChain,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			index_offset += num_vertices;



	{

	ConstantLight    pntLight; //点光源

		cout << "SDL_INIT_ERROR" << endl;

};

	dsDesc.Format = txDesc.Format;



	if (FAILED(hr))



			case SDLK_LEFT:



		pVList[i] = vertexlist[i];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		&materials,



		&materials,



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	if (m_pImmediateContext)

				indexlist.push_back(index);

	XMFLOAT4X4 view;

	return 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

/*



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	delete[] pIList;

}



	if (!reader.ParseFromFile(inputfile, reader_config))





		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	}

	txDesc.CPUAccessFlags = 0;

		pIList[j] = indexList[j];



	}

		return hr;

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

using std::cout; using std::endl;

	if (FAILED(hr))



	SDL_Quit();

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	scDesc.BufferDesc.Width = rect.Width();



		&m_pDevice,

	txDesc.SampleDesc.Quality = 0;

		&shapes,

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

}




		}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

			default:

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

	Release();



	Release();

struct ConstantMatrixBuffer {

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	txDesc.SampleDesc.Count = 1;

		if (!ret)

	vrData.pSysMem = &pVList[0];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (size_t s = 0; s < shapes.size(); s++)

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pIndexBuffer = NULL;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vector<WORD> indexList;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyTexture(tex);





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



			case SDLK_RIGHT:



	m_pSampler = NULL;

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pVertexBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

	{

	//Vertex* pVList = new Vertex[vcount];

			}

				vertex.push_back(vertex_tmp);



				break;

	WORD   icount = indexList.size();

int main(int, char**)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{

	scDesc.SampleDesc.Quality = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		if (e.type == SDL_QUIT)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		1,

	m_pSampler = NULL;

	tinyobj::attrib_t attrib;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





}



	};

	txDesc.ArraySize = 1;

	if (FAILED(hr))

				tinyobj::real_t tx =

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&scDesc,

	dsDesc.Format = txDesc.Format;

	scDesc.BufferDesc.Height = rect.Height();

	SAFE_RELEASE(m_pLightBuffer);



		return hr;

	ID3D11Texture2D* pBackBuffer;

		D3D11_SDK_VERSION,

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pSwapChain = NULL;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//頂点レイアウト作成

int main(int, char**)





int main(int, char**)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

}



	//vector<WORD> index_t;



	irData.SysMemSlicePitch = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pInputLayout = NULL;

		KEY_PRESS_SURFACE_TOTAL

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		}

	};



	vrData.SysMemPitch = 0;

	m_pIndexBuffer = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

 */

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		KEY_PRESS_SURFACE_UP,



	SDL_Quit();

		SDL_Delay(1000);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMFLOAT4X4 view;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			switch (e.key.keysym.sym)

}

		return hr;

{



	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}*/



	scDesc.BufferCount = 1;



	XMStoreFloat4(&clb.eyePos, eye);

		return hr;





};

	std::string error;

	m_Viewport.Height = (FLOAT)rect.Height();

{

	}

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	WORD* pIList = new WORD[icount];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

 * Lesson 1: Hello World!



	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	/*

	SAFE_RELEASE(m_pPixelShader);

	SDL_FreeSurface(suf);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	vbDesc.MiscFlags = 0;

{

	WORD* pIList = new WORD[icount];

	irData.SysMemSlicePitch = 0;

				break;

	UINT strides = sizeof(Vertex);

	{

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.StructureByteStride = 0;

	}

	Vertex* pVList = new Vertex[vcount];



	m_VertexCount = vcount;

 * Lesson 1: Hello World!

				vertex.push_back(vertex_tmp);

#define TINYOBJLOADER_IMPLEMENTATION



	irData.SysMemSlicePitch = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

{



	scDesc.SampleDesc.Quality = 0;

int SEGMENT = 36;



};

	SDL_DestroyWindow(win);



	m_Viewport.MinDepth = 0.0f;

#define TINYOBJLOADER_IMPLEMENTATION

	irData.SysMemPitch = 0;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_pRenderTargetView = NULL;



	return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		if (e.type == SDL_QUIT)

{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void CD3DTest::Release()

	}*/

	XMFLOAT4 pos;               //座標(x,y,z)



	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}



	}

	SDL_DestroyTexture(tex);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Height = rect.Height();









			for (size_t v = 0; v < num_vertices; v++)

int SEGMENT = 36;

};

#ifdef _DEBUG



	return 0;

	txDesc.CPUAccessFlags = 0;

	SDL_Quit();

	//インデックスバッファ作成



	//ビューポート設定

		delete[] pIList;



	D3D11_SAMPLER_DESC smpDesc;

	txDesc.CPUAccessFlags = 0;

struct ConstantMaterial {

		SDL_RenderClear(ren);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_pInputLayout = NULL;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	}*/

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

{



	{

		&m_pImmediateContext);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		//User presses a key

	cbDesc.CPUAccessFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		&scDesc,

	SDL_DestroyRenderer(ren);

#include "DirectXManager.h"

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			{

	};

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.MiscFlags = 0;

	//頂点バッファ作成





		pVList[i] = vertexlist[i];

}

	SDL_DestroyRenderer(ren);

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.StructureByteStride = 0;

		SDL_Delay(1000);

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

		SDL_RenderClear(ren);

	m_pSwapChain->Present(0, 0);

CD3DTest::~CD3DTest()

	for (int i = 0; i < 3; i++)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



			}



	SDL_Event e;

		&materials,

				vertex.push_back(vertex_tmp);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	if (!error.empty())

	//Create Index



	m_IndexCount = 0;

	Release();

		return hr;

	SDL_DestroyTexture(tex);

				tinyobj::real_t ty =

	ConstantLightBuffer clb;



}

	tinyobj::attrib_t attrib;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		cout << "SDL_INIT_ERROR" << endl;

CD3DTest::~CD3DTest()

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);



		return hr;

	LoadObj(vertexlist, indexList);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		{

	D3D11_BUFFER_DESC ibDesc;



	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	std::string imagePath = "hello.bmp";

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	XMFLOAT4 ambient;           //環境(r,g,b)



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//頂点シェーダー生成



	cbDesc.StructureByteStride = 0;

	{

	m_pInputLayout = NULL;

		return hr;

CD3DTest::~CD3DTest()

				vertex.push_back(vertex_tmp);

	m_IndexCount = icount;

	ConstantMatrixBuffer cmb;



	m_pMatrixBuffer = NULL;



	D3D11_SAMPLER_DESC smpDesc;

	int     vcount = vertexlist.size();

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	auto& shapes = reader.GetShapes();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string imagePath = "hello.bmp";



#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

{



	delete[] pVList;



	if (FAILED(hr))

	enum KeyPressSurfaces

	//Create Index

	m_pDepthStencilView = NULL;



		KEY_PRESS_SURFACE_LEFT,







		R"(cube.obj)");

	dsDesc.Texture2D.MipSlice = 0;



	if (FAILED(hr))

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



}

				break;

	SAFE_RELEASE(m_pPixelShader);



		SDL_RenderCopy(ren, tex, NULL, NULL);

{

		return hr;

		&m_pDevice,

		}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	UINT flags = 0;

	std::string inputfile = "test.obj";

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//ピクセルシェーダー生成

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

};

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;





				tinyobj::real_t tx =

				vertex.push_back(vertex_tmp);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_IndexCount = 0;

	float    nearZ = 0.1f;

int main(int, char**)



	return 0;

		KEY_PRESS_SURFACE_LEFT,

	D3D11_BUFFER_DESC vbDesc;

	CRect                rect;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	XMFLOAT4X4 projection;

	}



	for (int j = 0; j < icount; j++)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.ArraySize = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		size_t index_offset = 0;

		//User requests quit

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

void CD3DTest::Render()

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	{

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.StructureByteStride = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		&m_pDevice,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				vertex.push_back(vertex_tmp);

	m_pDepthStencilView = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		return hr;

	m_pSwapChain->Present(0, 0);

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_TEXTURE2D_DESC txDesc;

	vector<Vertex> vertexlist;

		D3D11_SDK_VERSION,

		delete[] pVList;

	txDesc.Height = rect.Height();



	{

	txDesc.Width = rect.Width();

	{

		{

	return 0;



	SAFE_RELEASE(m_pDepthStencilView);

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



		NULL,

	txDesc.Width = rect.Width();



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.ByteWidth = sizeof(WORD) * icount;



void CD3DTest::Render()



	DXGI_SWAP_CHAIN_DESC scDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



		return hr;





				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		D3D11_SDK_VERSION,



	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.MiscFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		delete[] pVList;

	{

				break;

	{

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	{

	vbDesc.StructureByteStride = 0;

	LoadObj(vertexlist, indexList);

	SDL_Quit();

	XMFLOAT4X4 world;

		return hr;

		}

		delete[] pVList;

#define TINYOBJLOADER_IMPLEMENTATION

	//vector<WORD> index_t;



	for (int i = 0; i < vcount; i++)

	tinyobj::attrib_t attrib;



		}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SDL_Quit();

	if (FAILED(hr))

#include <SDL.h>

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



	vector<Vertex> vertexlist;



{



	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pSwapChain);

		//User requests quit

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

struct ConstantMaterial {

	//vector<WORD> index_t;

		D3D_DRIVER_TYPE_HARDWARE,

	}

using std::cout; using std::endl;

	XMStoreFloat4(&clb.eyePos, eye);



	SDL_FreeSurface(bmp);

	scDesc.Windowed = TRUE;

};

	{

struct ConstantMaterial {

	SAFE_RELEASE(m_pTexture);

		cout << "SDL_INIT_ERROR" << endl;

	m_Viewport.TopLeftY = 0;

		// Loop over faces(polygon)

	delete[] pVList;

	XMStoreFloat4(&clb.eyePos, eye);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		//User presses a key

	m_pDepthStencilView = NULL;



	SAFE_RELEASE(m_pRenderTargetView);

			break;

	if (FAILED(hr))

	m_pLightBuffer = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	cbDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

#include <SDL.h>

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//vector<WORD> index_t;

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	m_pLightBuffer = NULL;

		return hr;



	SAFE_RELEASE(m_pMatrixBuffer);

				break;

}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLightBuffer clb;

	SDL_DestroyWindow(win);

	/*

	m_pPixelShader = NULL;



	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	auto& shapes = reader.GetShapes();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				// access to vertex

	XMStoreFloat4(&clb.eyePos, eye);

#include <iostream>

	txDesc.CPUAccessFlags = 0;

	irData.pSysMem = &pIList[0];

				// access to vertex

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA irData;

	std::string error;

	auto& materials = reader.GetMaterials();

		return hr;

	vbDesc.CPUAccessFlags = 0;

	m_pDevice = NULL;

	m_pDepthStencilView = NULL;

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pSwapChain);

	tinyobj::attrib_t attrib;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	bool ret = tinyobj::LoadObj(

#include <iostream>

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

struct ConstantMaterial {

}

	if (FAILED(hr))

#include <SDL.h>

	int     vcount = vertexlist.size();

	cbDesc.StructureByteStride = 0;

int SEGMENT = 36;

			int num_vertices = shape.mesh.num_face_vertices[f];



	if (FAILED(hr))

	D3D11_SUBRESOURCE_DATA vrData;

	vbDesc.CPUAccessFlags = 0;



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		}

	m_pTexture = NULL;



}
	D3D_FEATURE_LEVEL level;

		pIList[j] = indexList[j];

	{

			for (size_t v = 0; v < fv; v++)

		flags,

	// Loop over shapes

	reader_config.mtl_search_path = "./"; // Path to material files

			break;

	if (FAILED(hr))

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				indexlist.push_back(index);

	vector<Vertex> vertexlist;

	if (!reader.ParseFromFile(inputfile, reader_config))

				vertex.push_back(vertex_tmp);

	//ピクセルシェーダー生成

		if (!reader.Error().empty())

	D3D11_BUFFER_DESC ibDesc;

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

			case SDLK_RIGHT:

			}

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	Release();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	std::string error;

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		if (!reader.Error().empty())



	ibDesc.StructureByteStride = 0;

	delete[] pIList;



#include "DirectXManager.h"

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}





				tinyobj::real_t ty =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				vertex.push_back(vertex_tmp);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

#include "DirectXManager.h"

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



		return 1;

		return hr;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (!reader.Warning().empty())





				indexlist.push_back(index);

	//Clean up our objects and quit

	HRESULT              hr;

	cbDesc.StructureByteStride = 0;

	SDL_DestroyWindow(win);

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Event e;

	}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

struct ConstantLightBuffer {

		{

#endif



#include <SDL.h>

		size_t index_offset = 0;  // インデントのオフセット

		size_t index_offset = 0;  // インデントのオフセット

	//深度ステンシルバッファ作成

	}



	scDesc.BufferCount = 1;

		SDL_RenderCopy(ren, tex, NULL, NULL);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_UP,

				vertex.push_back(vertex_tmp);

	SDL_DestroyTexture(tex);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

				tinyobj::real_t tx =

#include "DirectXManager.h"

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

{

{

	//ビューポート設定

	vector<WORD> indexList;

	m_VertexCount = vcount;

		{

			int num_vertices = shape.mesh.num_face_vertices[f];

		NULL,

	scDesc.BufferCount = 1;









	//ビューポート設定





	SDL_FreeSurface(bmp);

	// Loop over shapes

	Vertex* pVList = new Vertex[vcount];



		if (!ret)

	txDesc.ArraySize = 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vector<WORD> indexList;

	SDL_DestroyWindow(win);

				break;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			default:

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	UINT offsets = 0;

	D3D11_BUFFER_DESC ibDesc;



	SDL_Quit();



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	float    nearZ = 0.1f;

		&attrib,

	if (FAILED(hr))

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);





	LoadObj(vertexlist, indexList);

	vector<Vertex> vertexlist;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftX = 0;

	return;

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		//User requests quit



	float    fov = XMConvertToRadians(20.0f);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

{



	m_pRenderTargetView = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



			exit(1);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

#ifdef _DEBUG

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//vector<Vertex> vertex_t;

	return 0;

	if (!reader.Warning().empty())



		KEY_PRESS_SURFACE_DOWN,

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	if (m_pImmediateContext)

	//深度ステンシルバッファ作成

	if (FAILED(hr))

	//vector<WORD> index_t;

	vector<Vertex> vertexlist;

	std::string imagePath = "hello.bmp";



	if (FAILED(hr))

	if (FAILED(hr))



			index_offset += fv;

			case SDLK_RIGHT:

	SDL_DestroyRenderer(ren);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

#include <SDL.h>



	UINT offsets = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		return 1;

	return 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//Create Index

	m_pPixelShader = NULL;

	m_pTexture = NULL;

		}

	m_pPixelShader = NULL;

			}

	if (FAILED(hr))





	SAFE_RELEASE(m_pIndexBuffer);

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

	m_pDepthStencilTexture = NULL;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	// Loop over shapes



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

int SEGMENT = 36;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



struct ConstantLightBuffer {

	m_pInputLayout = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				break;

	}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			{

	std::string inputfile = "test.obj";

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//頂点バッファ作成

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		}

	//ピクセルシェーダー生成

	for (int i = 0; i < vcount; i++)

	m_IndexCount = 0;

				indexlist.push_back(idx.vertex_index);

	auto& materials = reader.GetMaterials();

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_BUFFER_DESC vbDesc;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	scDesc.Windowed = TRUE;

/*

			switch (e.key.keysym.sym)

		return hr;

		return hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	m_pMatrixBuffer = NULL;

			switch (e.key.keysym.sym)



	if (FAILED(hr))



	UINT strides = sizeof(Vertex);

};



	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//頂点シェーダー生成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

			// Loop over vertices in the face.

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4X4 view;

}

		KEY_PRESS_SURFACE_DEFAULT,



		NULL,

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

			}

	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				vertex.push_back(vertex_tmp);

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	float    fov = XMConvertToRadians(20.0f);

	ID3D11Texture2D* pBackBuffer;

HRESULT CD3DTest::Create(HWND hwnd)



	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

				indexlist.push_back(index);









	D3D11_BUFFER_DESC cbDesc;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		&m_pSwapChain,

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDepthStencilTexture = NULL;



CD3DTest::CD3DTest()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{



	//ビューポート設定

			case SDLK_RIGHT:



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	}



struct ConstantLight {

		return hr;

	return 0;

	m_pPixelShader = NULL;

	m_pInputLayout = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vector<WORD> indexList;



	SAFE_RELEASE(m_pRenderTargetView);

	SDL_Quit();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pMatrixBuffer = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



			for (size_t v = 0; v < fv; v++)

{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	if (FAILED(hr))



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	vector<WORD> indexList;

	//頂点バッファ作成

		delete[] pIList;

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		KEY_PRESS_SURFACE_DOWN,

				// access to vertex

	SAFE_RELEASE(m_pLightBuffer);

	//ビューポート設定

	}

		{

}

	SAFE_RELEASE(m_pVertexBuffer);



		&attrib,

using std::cout; using std::endl;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		&m_pImmediateContext);

	// Loop over shapes

};

	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		m_pImmediateContext->ClearState();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			{

				tinyobj::real_t ty =

CD3DTest::CD3DTest()



using std::cout; using std::endl;



			switch (e.key.keysym.sym)



		{

		if (!ret)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Quit();



				// access to vertex

		size_t index_offset = 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	//頂点バッファ作成

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

};

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pDepthStencilView);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	ConstantMaterial material; //物体の質感

	m_pTextureView = NULL;



	//Vertex* pVList = new Vertex[vcount];

	m_pSwapChain = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

};

	ConstantMatrixBuffer cmb;

		}

};



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	{

struct ConstantMaterial {

	LoadObj(vertexlist, indexList);



	m_pIndexBuffer = NULL;

	};

	{

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	scDesc.BufferDesc.Height = rect.Height();

		// Loop over faces(polygon)

	D3D11_BUFFER_DESC vbDesc;

	irData.SysMemPitch = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);





	//頂点シェーダー生成



			}

		if (!reader.Error().empty())

	::GetClientRect(hwnd, &rect);



	for (int j = 0; j < icount; j++)

	float    nearZ = 0.1f;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	LoadObj(vertexlist, indexList);





}

		}



		{



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SDL_DestroyWindow(win);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	for (int j = 0; j < icount; j++)

	WORD   icount = indexList.size();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

using std::cout; using std::endl;

	return 0;

		delete[] pIList;

	SDL_Quit();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	//深度ステンシルバッファ作成

void CD3DTest::Render()

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	return 0;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.Windowed = TRUE;

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pIndexBuffer);

	//Clean up our objects and quit

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyTexture(tex);

	float    farZ = 100.0f;

	txDesc.SampleDesc.Quality = 0;

		return hr;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

#ifdef _DEBUG

	vrData.SysMemPitch = 0;



		return hr;

	m_pImmediateContext = NULL;







	SAFE_RELEASE(m_pVertexBuffer);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext = NULL;

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	tinyobj::ObjReader reader;

		R"(cube.obj)");

	XMStoreFloat4(&clb.ambient, lightAmbient);

	D3D11_BUFFER_DESC cbDesc;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

			// Loop over vertices in the face.

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	m_pSwapChain = NULL;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

#include <SDL.h>

	auto& shapes = reader.GetShapes();

	}

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		else if (e.type == SDL_KEYDOWN)

};

	};





				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	ID3D11Texture2D* pBackBuffer;

	auto& materials = reader.GetMaterials();



	std::string inputfile = "test.obj";

	}

};



struct ConstantMatrixBuffer {

		flags,

			case SDLK_RIGHT:

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 pos;               //座標(x,y,z)

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			//Select surfaces based on key press

	Vertex* pVList = new Vertex[vcount];

	//Create Index



			}

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

/*

	SAFE_RELEASE(m_pIndexBuffer);

	int     vcount = vertexlist.size();



	cbDesc.MiscFlags = 0;

{

		pVList[i] = vertexlist[i];

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			case SDLK_DOWN:

				vertex.push_back(vertex_tmp);

	XMFLOAT4X4 projection;

#endif

	{

	scDesc.Windowed = TRUE;

	{

	if (FAILED(hr))

		&shapes,

	}*/

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		&m_pSwapChain,

	SAFE_RELEASE(m_pInputLayout);

	return 0;

		delete[] pIList;



	txDesc.SampleDesc.Count = 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.ArraySize = 1;

	m_VertexCount = vcount;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

struct ConstantMatrixBuffer {

CD3DTest::~CD3DTest()

	vrData.pSysMem = &pVList[0];

struct ConstantLight {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

#endif



struct ConstantLightBuffer {



	}

{



CD3DTest::~CD3DTest()



		return hr;

	SDL_DestroyWindow(win);

	scDesc.BufferDesc.Width = rect.Width();

void CD3DTest::Render()

	ZeroMemory(&txDesc, sizeof(txDesc));

		pLevels,



	txDesc.SampleDesc.Count = 1;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



			{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	}

		if (!reader.Error().empty())

		KEY_PRESS_SURFACE_TOTAL

	XMFLOAT4 diffuse;           //拡散(r,g,b)

};

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	auto& attrib = reader.GetAttrib();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	ibDesc.MiscFlags = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



		{

int main(int, char**)



	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_DOWN,

	txDesc.Width = rect.Width();

		pIList[j] = indexList[j];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		D3D_DRIVER_TYPE_HARDWARE,

	if (!reader.ParseFromFile(inputfile, reader_config))

	{



		KEY_PRESS_SURFACE_DOWN,

	SDL_DestroyWindow(win);

	pBackBuffer->Release();

		pVList[i] = vertexlist[i];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		else if (e.type == SDL_KEYDOWN)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	DXGI_SWAP_CHAIN_DESC scDesc;

CD3DTest::~CD3DTest()

	SDL_DestroyRenderer(ren);





	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	UINT offsets = 0;



	{

	m_pSwapChain = NULL;

	if (FAILED(hr))



		{





	ConstantLight    pntLight; //点光源



	WORD   icount = indexList.size();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	m_pDepthStencilTexture = NULL;

	float    nearZ = 0.1f;

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ConstantLightBuffer clb;

	//定数バッファ作成

			case SDLK_DOWN:

	m_IndexCount = 0;

	vbDesc.CPUAccessFlags = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	if (FAILED(hr))



{

		return hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//頂点レイアウト作成



	m_pTexture = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		if (!reader.Error().empty())



CD3DTest::~CD3DTest()

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



{

		KEY_PRESS_SURFACE_DOWN,

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pDepthStencilTexture = NULL;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

	//インデックスバッファ作成

	SDL_DestroyRenderer(ren);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pVertexBuffer = NULL;

	tinyobj::ObjReader reader;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	scDesc.BufferDesc.Width = rect.Width();



	vbDesc.MiscFlags = 0;

	tinyobj::ObjReader reader;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

CD3DTest::CD3DTest()

		R"(cube.obj)");

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4X4 projection;

	ConstantLight    pntLight; //点光源

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	XMFLOAT4X4 view;

#include <SDL.h>

	{

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

		if (!reader.Error().empty())

			{

		SDL_Delay(1000);

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		D3D11_SDK_VERSION,



		size_t index_offset = 0;  // インデントのオフセット

int main(int, char**)

	XMFLOAT4X4 projection;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pVertexShader = NULL;



}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ID3D11Texture2D* pBackBuffer;

			}



	m_pInputLayout = NULL;

	}

		&attrib,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;







	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	D3D11_SAMPLER_DESC smpDesc;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.OutputWindow = hwnd;

	txDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

CD3DTest::CD3DTest()

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SDL_DestroyRenderer(ren);

	XMFLOAT4 pos;               //座標(x,y,z)

	SDL_DestroyRenderer(ren);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

				break;

	}

	m_pVertexShader = NULL;

	scDesc.OutputWindow = hwnd;

	txDesc.Height = rect.Height();

	scDesc.SampleDesc.Count = 1;

		return hr;

	SAFE_RELEASE(m_pPixelShader);

		return hr;

	for (int i = 0; i < vcount; i++)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



			exit(1);





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

	return 0;

			{

{

	tinyobj::ObjReaderConfig reader_config;

		R"(cube.obj)");



	}

	vrData.SysMemSlicePitch = 0;

	scDesc.SampleDesc.Quality = 0;

		size_t index_offset = 0;



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				// access to vertex

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_Viewport.MinDepth = 0.0f;

		&materials,



		m_pImmediateContext->ClearState();

		pIList[j] = indexList[j];

	{



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	HRESULT              hr;

	cbDesc.MiscFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

		{

		{

		SDL_RenderPresent(ren);



		return hr;



		return hr;

		D3D_DRIVER_TYPE_HARDWARE,

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

#ifdef _DEBUG

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_DestroyRenderer(ren);

	//Vertex* pVList = new Vertex[vcount];

struct ConstantLightBuffer {







	CRect                rect;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

		KEY_PRESS_SURFACE_DEFAULT,

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Quit();



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		&m_pImmediateContext);

	m_Viewport.TopLeftY = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		pIList[j] = indexList[j];

	txDesc.ArraySize = 1;

				indexlist.push_back(index);



				indexlist.push_back(index);

	SAFE_RELEASE(m_pLightBuffer);

	UINT strides = sizeof(Vertex);

		R"(cube.obj)");

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	vector<Vertex> vertexlist;

	}

	scDesc.OutputWindow = hwnd;

	ID3D11Texture2D* pBackBuffer;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

	bool ret = tinyobj::LoadObj(

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		cout << "SDL_INIT_ERROR" << endl;

	txDesc.ArraySize = 1;

{

		SDL_Delay(1000);

	SAFE_RELEASE(m_pInputLayout);

			//Select surfaces based on key press

	ZeroMemory(&txDesc, sizeof(txDesc));

	}



struct ConstantLightBuffer {

	{

}

				WORD index = idx.vertex_index;

	auto& shapes = reader.GetShapes();



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



				break;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pSampler);

	std::string inputfile = "test.obj";

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		&m_pImmediateContext);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);





int SEGMENT = 36;

	scDesc.BufferDesc.Height = rect.Height();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//Vertex* pVList = new Vertex[vcount];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (!reader.ParseFromFile(inputfile, reader_config))



	m_pPixelShader = NULL;

		return hr;



	for (const auto& shape : shapes)

				break;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

struct ConstantLight {

	//テクスチャ読み込み

	D3D11_BUFFER_DESC ibDesc;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	m_Viewport.TopLeftX = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (!reader.ParseFromFile(inputfile, reader_config))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pDepthStencilView = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	std::vector<tinyobj::shape_t> shapes;

		exit(1);

		return hr;

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	int     vcount = vertexlist.size();

};



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



		m_pImmediateContext->ClearState();

			default:

		KEY_PRESS_SURFACE_UP,

		1,

	vrData.pSysMem = &pVList[0];

	txDesc.CPUAccessFlags = 0;

		}

		if (!reader.Error().empty())

};

		R"(cube.obj)");







	}

	for (int i = 0; i < vcount; i++)

		size_t index_offset = 0;

	m_IndexCount = icount;



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			// Loop over vertices in the face.

	delete[] pIList;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.MipLevels = 1;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

}

{



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		size_t index_offset = 0;  // インデントのオフセット

		&scDesc,

	SAFE_RELEASE(m_pDepthStencilTexture);

	ID3D11Texture2D* pBackBuffer;

{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_RIGHT,

		{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		}

		return 1;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	delete[] pVList;

	vrData.pSysMem = &pVList[0];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	m_pSampler = NULL;



	m_pTexture = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.BufferDesc.Height = rect.Height();



	XMStoreFloat4(&clb.eyePos, eye);



	m_IndexCount = 0;

	tinyobj::attrib_t attrib;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				vertex.push_back(vertex_tmp);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	auto& shapes = reader.GetShapes();

	scDesc.BufferCount = 1;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Viewport.MaxDepth = 1.0f;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	reader_config.mtl_search_path = "./"; // Path to material files

		{



	SAFE_RELEASE(m_pRenderTargetView);



	std::string imagePath = "hello.bmp";

	for (const auto& shape : shapes)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Count = 1;



	cbDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		D3D_DRIVER_TYPE_HARDWARE,



int main(int, char**)

	txDesc.Height = rect.Height();

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			case SDLK_RIGHT:

				// access to vertex





	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pDepthStencilView);

		//User requests quit

int SEGMENT = 36;

}


	m_IndexCount = icount;

		}

	{

	m_Angle += XMConvertToRadians(1.0f);

	}

	m_pMatrixBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



CD3DTest::CD3DTest()

	float    fov = XMConvertToRadians(20.0f);

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&m_pDevice,



	m_Viewport.Width = (FLOAT)rect.Width();



{

	SAFE_RELEASE(m_pVertexShader);





			break;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	pBackBuffer->Release();

				WORD index = idx.vertex_index;

	m_IndexCount = 0;

		SDL_Delay(1000);

	if (FAILED(hr))





	cbDesc.StructureByteStride = 0;

	SDL_Quit();

		&level,

	delete[] pVList;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{



				indexlist.push_back(idx.vertex_index);

	dsDesc.Format = txDesc.Format;

	//定数バッファ作成

	txDesc.ArraySize = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.ambient, lightAmbient);

			switch (e.key.keysym.sym)

	{

	bool ret = tinyobj::LoadObj(



	m_Viewport.Height = (FLOAT)rect.Height();

			case SDLK_LEFT:

	SDL_Quit();

		}

}

	D3D11_SUBRESOURCE_DATA vrData;



		NULL,

	ConstantLightBuffer clb;

	enum KeyPressSurfaces

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	return 0;

	for (size_t s = 0; s < shapes.size(); s++)

		return hr;

	enum KeyPressSurfaces

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SAFE_RELEASE(m_pImmediateContext);



	SAFE_RELEASE(m_pTexture);

	int     vcount = vertexlist.size();

		SDL_Delay(1000);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	SAFE_RELEASE(m_pDepthStencilView);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	SAFE_RELEASE(m_pMatrixBuffer);

			}

	SDL_Quit();



		return 1;

{



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//vector<Vertex> vertex_t;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

CD3DTest::~CD3DTest()

				tinyobj::real_t tx =



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_FreeSurface(suf);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&shapes,

			for (size_t v = 0; v < num_vertices; v++)



		delete[] pIList;

	if (FAILED(hr))



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		{

		&error,

		pIList[j] = indexList[j];

	while (SDL_PollEvent(&e) != 0)

		delete[] pIList;

				tinyobj::real_t tx =

		D3D_DRIVER_TYPE_HARDWARE,

		&m_pImmediateContext);

	m_pSwapChain->Present(0, 0);

	{

};



		KEY_PRESS_SURFACE_LEFT,

	{

			switch (e.key.keysym.sym)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		&scDesc,



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	WORD   icount = indexList.size();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	// Loop over shapes

		}

	SAFE_RELEASE(m_pDevice);

		SDL_Delay(1000);

{

			//Select surfaces based on key press

{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			for (size_t v = 0; v < num_vertices; v++)

		&m_pImmediateContext);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];







	m_pSampler = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

/*

		return 1;

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		}



	tinyobj::attrib_t attrib;

		{

	tinyobj::ObjReaderConfig reader_config;

{

		return hr;

	auto& materials = reader.GetMaterials();

	}

	SDL_Event e;

	if (FAILED(hr))

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		return hr;



	if (FAILED(hr))

		&m_pImmediateContext);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pTextureView);



	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		delete[] pIList;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.SampleDesc.Count = 1;





			}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		delete[] pIList;

			}

	Release();

		KEY_PRESS_SURFACE_DEFAULT,

	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	dsDesc.Texture2D.MipSlice = 0;

}


	UINT offsets = 0;

		NULL,

	vector<Vertex> vertexlist;

			break;

			}

	{

	SAFE_RELEASE(m_pTexture);

		SDL_Delay(1000);

	{



	}

	XMFLOAT4X4 world;

	int     vcount = vertexlist.size();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	LoadObj(vertexlist, indexList);

	ConstantMaterial material; //物体の質感

	scDesc.Windowed = TRUE;



	SAFE_RELEASE(m_pTexture);

		cout << "SDL_INIT_ERROR" << endl;

};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	cbDesc.CPUAccessFlags = 0;

	auto& shapes = reader.GetShapes();

	dsDesc.Texture2D.MipSlice = 0;

	m_IndexCount = icount;

		size_t index_offset = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		&m_pImmediateContext);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



	m_pInputLayout = NULL;





void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				indexlist.push_back(index);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	tinyobj::ObjReaderConfig reader_config;

			switch (e.key.keysym.sym)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	scDesc.BufferDesc.Height = rect.Height();

	if (!error.empty())



	vector<WORD> indexList;

	m_pDevice = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	pBackBuffer->Release();

		else if (e.type == SDL_KEYDOWN)

	m_pIndexBuffer = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pMatrixBuffer = NULL;

	for (int j = 0; j < icount; j++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

struct ConstantLight {

	{

			//Select surfaces based on key press

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

			}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (FAILED(hr))

		SDL_RenderPresent(ren);

	scDesc.BufferCount = 1;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		pVList[i] = vertexlist[i];

	enum KeyPressSurfaces

			index_offset += num_vertices;

	ConstantMatrixBuffer cmb;

	float    nearZ = 0.1f;

	WORD* pIList = new WORD[icount];

	SDL_DestroyTexture(tex);



		&m_pImmediateContext);

	if (FAILED(hr))

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	vector<WORD> indexList;

	SAFE_RELEASE(m_pVertexShader);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

 */

	SAFE_RELEASE(m_pLightBuffer);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMFLOAT4X4 projection;

	//vector<Vertex> vertex_t;

	irData.SysMemSlicePitch = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

				break;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);





	SAFE_RELEASE(m_pInputLayout);

			{

	for (const auto& shape : shapes)

	{

{

		KEY_PRESS_SURFACE_UP,



	// Loop over shapes



	XMFLOAT4 ambient;           //環境(r,g,b)



	if (FAILED(hr))

		size_t index_offset = 0;

		SDL_Delay(1000);

	SDL_DestroyTexture(tex);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	//頂点レイアウト作成



	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//インデックスバッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);





 */

		flags,

	txDesc.SampleDesc.Quality = 0;

	std::string inputfile = "test.obj";

}

	}

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//頂点バッファ作成

	//頂点バッファ作成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		&level,

	{

		{

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pIndexBuffer);

	m_IndexCount = icount;



	//Create Index

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		}

{

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		D3D11_SDK_VERSION,

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			}

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

				break;

				break;

	//定数バッファ作成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	return 0;

	}

	SAFE_RELEASE(m_pDepthStencilTexture);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	scDesc.SampleDesc.Quality = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		&scDesc,

				// access to vertex

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

int main(int, char**)







		{



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SDL_FreeSurface(bmp);

	}

		SDL_RenderPresent(ren);



	m_pLightBuffer = NULL;

	m_pTexture = NULL;



	txDesc.Height = rect.Height();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		//User presses a key

	m_VertexCount = vcount;

	delete[] pVList;

	float    nearZ = 0.1f;

	m_pDepthStencilTexture = NULL;

	SAFE_RELEASE(m_pTexture);

	}



			}

		KEY_PRESS_SURFACE_TOTAL

			{

	reader_config.mtl_search_path = "./"; // Path to material files

	{

		&error,

	XMFLOAT4         ambient;  //環境光(r,g,b)





{

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		pLevels,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			}

	m_pSampler = NULL;

	scDesc.SampleDesc.Quality = 0;

			// Loop over vertices in the face.

	return 0;

	}

	scDesc.SampleDesc.Count = 1;

		return hr;



	m_IndexCount = icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

int main(int, char**)



{

	float    farZ = 100.0f;

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))



	m_pSwapChain->Present(0, 0);

	SDL_DestroyTexture(tex);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			}

				tinyobj::real_t ty =

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_VertexCount = 0;

	{

	SDL_DestroyWindow(win);

				break;



	// Loop over shapes







	cbDesc.CPUAccessFlags = 0;

#include <iostream>

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyWindow(win);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		1,

	m_pDepthStencilTexture = NULL;





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pTexture = NULL;

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	std::string imagePath = "hello.bmp";

	{

	m_Viewport.TopLeftY = 0;



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4 specular;          //反射(r,g,b)



	CRect                rect;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pSampler = NULL;

	m_VertexCount = vcount;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 world;

	txDesc.Height = rect.Height();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_FreeSurface(suf);



	//テクスチャ読み込み

	{

	{

		KEY_PRESS_SURFACE_TOTAL

	m_Viewport.TopLeftX = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		{





	float    fov = XMConvertToRadians(20.0f);

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	D3D11_BUFFER_DESC cbDesc;

				indexlist.push_back(index);



	delete[] pIList;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



int SEGMENT = 36;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		size_t index_offset = 0;



}



			}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				WORD index = idx.vertex_index;



			}



		return hr;

#include <iostream>

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	}

		exit(1);



#ifdef _DEBUG





	m_pTextureView = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			{

using std::cout; using std::endl;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		1,



	D3D_FEATURE_LEVEL level;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&scDesc,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			}

	//Key press surfaces constants

	m_pTexture = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D_FEATURE_LEVEL level;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	HRESULT              hr;



	vrData.SysMemSlicePitch = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		KEY_PRESS_SURFACE_UP,

	}

	irData.SysMemSlicePitch = 0;



	m_Viewport.Width = (FLOAT)rect.Width();

	{

			exit(1);

	if (FAILED(hr))

		}

		KEY_PRESS_SURFACE_DEFAULT,

		flags,

		SDL_Delay(1000);

}
	SAFE_RELEASE(m_pVertexShader);

	SDL_Event e;

	while (SDL_PollEvent(&e) != 0)



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	//Clean up our objects and quit

	{

	//vector<WORD> index_t;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pDepthStencilView);



	cbDesc.CPUAccessFlags = 0;



	// Loop over shapes

	SDL_DestroyWindow(win);

	m_pImmediateContext = NULL;

	if (FAILED(hr))

}

	SAFE_RELEASE(m_pRenderTargetView);

	scDesc.Windowed = TRUE;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyTexture(tex);

	m_Viewport.Height = (FLOAT)rect.Height();

	delete[] pIList;

		KEY_PRESS_SURFACE_DOWN,

	//vector<WORD> index_t;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.BufferDesc.Height = rect.Height();

			case SDLK_LEFT:

		size_t index_offset = 0;  // インデントのオフセット

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&shapes,



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			// Loop over vertices in the face.

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMFLOAT4 ambient;           //環境(r,g,b)

	}



	scDesc.OutputWindow = hwnd;

	if (!error.empty())



		return hr;



	D3D11_BUFFER_DESC ibDesc;

	UINT flags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pInputLayout);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Clean up our objects and quit

}



	}

	SDL_DestroyTexture(tex);

	//Create Index

	m_Viewport.MaxDepth = 1.0f;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pMatrixBuffer);

int main(int, char**)

}

	m_IndexCount = icount;

	//テクスチャ読み込み

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



#include <SDL.h>

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	enum KeyPressSurfaces

	if (FAILED(hr))

		pIList[j] = indexList[j];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		SDL_RenderClear(ren);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

		exit(1);

	if (m_pImmediateContext)

	ibDesc.StructureByteStride = 0;

#ifdef _DEBUG

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

			case SDLK_LEFT:

	//深度ステンシルバッファ作成

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pTextureView);





	return;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	CRect                rect;

			default:

	vector<WORD> indexList;

	}

	m_pSampler = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	irData.pSysMem = &pIList[0];



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

{

	SDL_DestroyTexture(tex);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderClear(ren);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (FAILED(hr))

		pLevels,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	delete[] pIList;



	{

		1,

	m_pDevice = NULL;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D11_BUFFER_DESC ibDesc;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



 */

			case SDLK_RIGHT:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (!error.empty())

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



		delete[] pIList;

	D3D11_SAMPLER_DESC smpDesc;



	irData.SysMemSlicePitch = 0;

};

{

	m_pDepthStencilView = NULL;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	}

#include <SDL.h>

	XMFLOAT4 ambient;           //環境(r,g,b)

	{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		KEY_PRESS_SURFACE_RIGHT,

	m_pDepthStencilView = NULL;

				tinyobj::real_t ty =

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_BUFFER_DESC vbDesc;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



struct ConstantLightBuffer {

	if (FAILED(hr))

	enum KeyPressSurfaces

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	irData.SysMemSlicePitch = 0;

				break;

	LoadObj(vertexlist, indexList);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



		D3D11_SDK_VERSION,

	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	WORD   icount = indexList.size();



	m_pDepthStencilView = NULL;

			// Loop over vertices in the face.

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{



int main(int, char**)

}


			{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (FAILED(hr))

	irData.SysMemPitch = 0;

	for (size_t s = 0; s < shapes.size(); s++)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

			}

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pDepthStencilView = NULL;

		cout << "SDL_INIT_ERROR" << endl;

};

	std::string imagePath = "hello.bmp";

		pVList[i] = vertexlist[i];

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pSampler);

		return 1;

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

HRESULT CD3DTest::Create(HWND hwnd)

		delete[] pIList;

	if (!error.empty())

	//Key press surfaces constants

			case SDLK_LEFT:

				break;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	scDesc.SampleDesc.Quality = 0;

}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		return hr;

#include <SDL.h>

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			switch (e.key.keysym.sym)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

CD3DTest::CD3DTest()

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));







	D3D11_BUFFER_DESC vbDesc;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	::ZeroMemory(&scDesc, sizeof(scDesc));

}

			break;

	{

	ConstantMatrixBuffer cmb;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

#ifdef _DEBUG

	WORD* pIList = new WORD[icount];

	SAFE_RELEASE(m_pTextureView);

	return;

	WORD* pIList = new WORD[icount];

	m_Viewport.Height = (FLOAT)rect.Height();







	SAFE_RELEASE(m_pSampler);



		delete[] pIList;

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pIndexBuffer);

	{



	bool ret = tinyobj::LoadObj(



	}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		SDL_Delay(1000);

	if (FAILED(hr))

	txDesc.SampleDesc.Quality = 0;

	cbDesc.StructureByteStride = 0;

	m_VertexCount = 0;

	{

				break;



	m_Viewport.MinDepth = 0.0f;

	//頂点バッファ作成

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pSampler = NULL;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

 */

	m_pVertexShader = NULL;





			switch (e.key.keysym.sym)

	ConstantLight    pntLight; //点光源

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSwapChain);





	m_VertexCount = 0;

		}

	int     vcount = vertexlist.size();

}

	XMFLOAT4 specular;          //反射(r,g,b)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	::GetClientRect(hwnd, &rect);



	{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	}

	XMFLOAT4 specular;          //反射(r,g,b)



		{

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		&m_pImmediateContext);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		size_t index_offset = 0;  // インデントのオフセット

		m_pImmediateContext->ClearState();

		}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.CPUAccessFlags = 0;

				break;

	SAFE_RELEASE(m_pTextureView);

	m_pLightBuffer = NULL;

	//深度ステンシルバッファ作成

	m_VertexCount = vcount;

	SAFE_RELEASE(m_pIndexBuffer);

		D3D_DRIVER_TYPE_HARDWARE,

		KEY_PRESS_SURFACE_UP,

	return 0;



	vrData.pSysMem = &pVList[0];

	//Key press surfaces constants



{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return 1;

	scDesc.OutputWindow = hwnd;

	//テクスチャ読み込み

	if (!reader.Warning().empty())



};

		return hr;

{

		&shapes,

		{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

};





			for (size_t v = 0; v < num_vertices; v++)

	//Vertex* pVList = new Vertex[vcount];

	m_VertexCount = 0;

	SAFE_RELEASE(m_pDepthStencilTexture);

		SDL_RenderClear(ren);



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		&attrib,



	WORD   icount = indexList.size();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	cbDesc.StructureByteStride = 0;

		SDL_RenderClear(ren);

	D3D11_BUFFER_DESC ibDesc;

#define TINYOBJLOADER_IMPLEMENTATION

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	//Clean up our objects and quit

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pDepthStencilView = NULL;

	}

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pRenderTargetView);

	}

	cbDesc.MiscFlags = 0;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

{



{

	}

		return 1;

	UINT offsets = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pImmediateContext = NULL;





	std::string inputfile = "test.obj";





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SAFE_RELEASE(m_pTextureView);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	}

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		NULL,

		return hr;

	D3D11_SUBRESOURCE_DATA vrData;

	return 0;

	scDesc.SampleDesc.Count = 1;

	//テクスチャ読み込み

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	flags |= D3D11_CREATE_DEVICE_DEBUG;

			switch (e.key.keysym.sym)

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_DestroyWindow(win);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

			case SDLK_RIGHT:

		&m_pImmediateContext);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	pBackBuffer->Release();



				// access to vertex

		&m_pImmediateContext);

	txDesc.Height = rect.Height();

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pLightBuffer);

		&attrib,

		SDL_RenderPresent(ren);

	irData.pSysMem = &pIList[0];

	//定数バッファ作成

	{

	Release();

		size_t index_offset = 0;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





};

		&materials,

	//深度ステンシルバッファ作成

		return hr;

	if (!reader.ParseFromFile(inputfile, reader_config))



			index_offset += fv;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





#include <SDL.h>

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

#include <iostream>

	vbDesc.MiscFlags = 0;



	}*/

	m_IndexCount = icount;

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

	SAFE_RELEASE(m_pSwapChain);

		SDL_Delay(1000);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				WORD index = idx.vertex_index;

	m_pVertexBuffer = NULL;



		&shapes,





	cbDesc.MiscFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_Quit();

	float    farZ = 100.0f;

		//User requests quit

	ConstantLightBuffer clb;

	std::vector<tinyobj::material_t> materials;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	XMStoreFloat4(&clb.ambient, lightAmbient);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//vector<WORD> index_t;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	}*/

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_SAMPLER_DESC smpDesc;

	if (FAILED(hr))

	std::string error;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

{

void CD3DTest::Release()

	}



	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SAFE_RELEASE(m_pDepthStencilView);

	vbDesc.CPUAccessFlags = 0;

#include <iostream>

	//vector<WORD> index_t;

			for (size_t v = 0; v < fv; v++)

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			{

			}

	//Vertex* pVList = new Vertex[vcount];

		// Loop over faces(polygon)

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	{

		}

				break;







	txDesc.SampleDesc.Count = 1;

	for (size_t s = 0; s < shapes.size(); s++)

	m_pInputLayout = NULL;

	XMFLOAT4X4 projection;



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



 * Lesson 1: Hello World!

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

{

	XMFLOAT4 pos;               //座標(x,y,z)

	//頂点シェーダー生成



			for (size_t v = 0; v < num_vertices; v++)

		&m_pDevice,



		pLevels,

	m_pDevice = NULL;

void CD3DTest::Render()

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#include "DirectXManager.h"

}

	m_Viewport.MinDepth = 0.0f;

			// Loop over vertices in the face.

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4X4 world;



	ibDesc.StructureByteStride = 0;

	Release();

	std::string inputfile = "test.obj";

	SDL_DestroyTexture(tex);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	std::string inputfile = "test.obj";

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	irData.SysMemSlicePitch = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	}

	m_pTexture = NULL;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			default:

	m_pTexture = NULL;



	XMFLOAT4X4 world;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.StructureByteStride = 0;

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



		return hr;



				break;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

 * Lesson 1: Hello World!

	int     vcount = vertexlist.size();



	if (FAILED(hr))

		return hr;

			index_offset += num_vertices;

	irData.pSysMem = &pIList[0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.StructureByteStride = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);







		&m_pSwapChain,

#include <iostream>

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	for (int i = 0; i < vcount; i++)

	if (m_pImmediateContext)

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pTexture);

	std::string imagePath = "hello.bmp";

 */

			// Loop over vertices in the face.

	D3D11_BUFFER_DESC ibDesc;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}

		return hr;

	{

	//ビューポート設定

	for (size_t s = 0; s < shapes.size(); s++)

	//Clean up our objects and quit

	m_pRenderTargetView = NULL;

	}

	m_pIndexBuffer = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	irData.SysMemSlicePitch = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_IndexCount = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

		return hr;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pLightBuffer);





		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	::ZeroMemory(&scDesc, sizeof(scDesc));

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//頂点シェーダー生成

		flags,

		&shapes,

	ID3D11Texture2D* pBackBuffer;

			case SDLK_DOWN:

	scDesc.SampleDesc.Count = 1;

	}

};

	XMFLOAT4X4 projection;

		}

	cbDesc.CPUAccessFlags = 0;

	dsDesc.Format = txDesc.Format;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pMatrixBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	vbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_LEFT,

		{

	m_pIndexBuffer = NULL;

				WORD index = idx.vertex_index;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



		{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	std::string error;

	bool ret = tinyobj::LoadObj(

			break;

{

{

	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	//深度ステンシルバッファ作成





			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//First we need to start up SDL, and make sure it went ok

	::GetClientRect(hwnd, &rect);



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pLightBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC vbDesc;

#endif

	UINT strides = sizeof(Vertex);

	{

				vertex.push_back(vertex_tmp);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(index);

	return 0;



	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

			}





	if (FAILED(hr))

	//First we need to start up SDL, and make sure it went ok

	if (FAILED(hr))

#include "DirectXManager.h"

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	tinyobj::ObjReaderConfig reader_config;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	m_pDepthStencilTexture = NULL;

	//頂点レイアウト作成



void CD3DTest::Release()

	std::string inputfile = "test.obj";

		&error,

	CRect                rect;

	ZeroMemory(&txDesc, sizeof(txDesc));

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	m_IndexCount = icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}



	if (FAILED(hr))

	//Vertex* pVList = new Vertex[vcount];





	SDL_DestroyTexture(tex);



#include <SDL.h>

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.Height = rect.Height();

}

};

		}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	UINT strides = sizeof(Vertex);



	{

		KEY_PRESS_SURFACE_DEFAULT,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{

	m_pVertexShader = NULL;

	txDesc.SampleDesc.Quality = 0;

	ConstantLight    pntLight; //点光源



	auto& shapes = reader.GetShapes();

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		pVList[i] = vertexlist[i];

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	vbDesc.CPUAccessFlags = 0;

	//ビューポート設定

		if (!reader.Error().empty())

	txDesc.Height = rect.Height();



	{

	ConstantMaterial material; //物体の質感



	m_pPixelShader = NULL;

	//頂点バッファ作成

	//ビューポート設定

		//User presses a key

			case SDLK_LEFT:



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);

	}

	XMFLOAT4 specular;          //反射(r,g,b)

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		if (!ret)

#include "DirectXManager.h"

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	m_pSampler = NULL;

#include "DirectXManager.h"

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

			//Select surfaces based on key press



	scDesc.Windowed = TRUE;

				// access to vertex

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		if (e.type == SDL_QUIT)

				break;





	delete[] pVList;



	tinyobj::attrib_t attrib;

#include <SDL.h>

struct ConstantLight {

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Event e;

	ibDesc.StructureByteStride = 0;



	XMStoreFloat4(&clb.material.specular, materialSpecular);

		pLevels,

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (size_t s = 0; s < shapes.size(); s++)

	m_pTexture = NULL;



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



		return hr;



};

	UINT strides = sizeof(Vertex);



};

#ifdef _DEBUG

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



}


				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

{

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx =

struct ConstantLightBuffer {

				break;

	WORD   icount = indexList.size();

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	};

	SAFE_RELEASE(m_pLightBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		&materials,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

				indexlist.push_back(index);



		if (!reader.Error().empty())

		if (e.type == SDL_QUIT)



	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

	m_Viewport.MaxDepth = 1.0f;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		NULL,



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		D3D_DRIVER_TYPE_HARDWARE,

	ConstantMaterial material; //物体の質感



	{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderClear(ren);

				indexlist.push_back(index);

	D3D_FEATURE_LEVEL level;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

				break;





	SAFE_RELEASE(m_pDepthStencilTexture);

		{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	cbDesc.MiscFlags = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



				// access to vertex

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	D3D11_BUFFER_DESC vbDesc;



		return hr;



	scDesc.BufferDesc.Height = rect.Height();



	//ビューポート設定

int main(int, char**)

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



			for (size_t v = 0; v < num_vertices; v++)

	{





void CD3DTest::Render()

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	for (size_t s = 0; s < shapes.size(); s++)

};



	vector<Vertex> vertexlist;



	D3D11_BUFFER_DESC cbDesc;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

#ifdef _DEBUG

		return hr;



	//Clean up our objects and quit



			}

	m_pImmediateContext = NULL;

	scDesc.SampleDesc.Count = 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Quit();

		SDL_Delay(1000);



	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



		{

	vrData.pSysMem = &pVList[0];



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	//ピクセルシェーダー生成







	XMFLOAT4X4 projection;

		//User requests quit



	XMFLOAT4 specular;          //反射(r,g,b)

	irData.pSysMem = &pIList[0];

		KEY_PRESS_SURFACE_LEFT,





	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





			int num_vertices = shape.mesh.num_face_vertices[f];

		{

	m_Viewport.TopLeftX = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



}

	cbDesc.StructureByteStride = 0;

	txDesc.MiscFlags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	DXGI_SWAP_CHAIN_DESC scDesc;

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pImmediateContext);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



			index_offset += fv;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.MipLevels = 1;

		//User requests quit



	{

	if (FAILED(hr))



	m_pDepthStencilView = NULL;

	m_pVertexBuffer = NULL;

	m_Viewport.MaxDepth = 1.0f;

	{

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	return 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pTextureView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	::ZeroMemory(&scDesc, sizeof(scDesc));

	//vector<WORD> index_t;

{



	for (size_t s = 0; s < shapes.size(); s++)

	scDesc.BufferDesc.Width = rect.Width();

	m_pInputLayout = NULL;

	m_Viewport.MinDepth = 0.0f;

	cbDesc.MiscFlags = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

int SEGMENT = 36;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pTexture = NULL;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	m_Viewport.Height = (FLOAT)rect.Height();

	/*



	m_pSwapChain = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	D3D11_SUBRESOURCE_DATA irData;



	D3D11_TEXTURE2D_DESC txDesc;

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pRenderTargetView = NULL;

	txDesc.MipLevels = 1;

		}



	txDesc.Width = rect.Width();

		SDL_RenderCopy(ren, tex, NULL, NULL);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	}



};



	m_pLightBuffer = NULL;

	ConstantMaterial material; //物体の質感

		size_t index_offset = 0;  // インデントのオフセット



	if (!reader.Warning().empty())



	}





	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{



	{

			index_offset += num_vertices;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	//ビューポート設定

		{



	SDL_Quit();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_VertexCount = 0;

	scDesc.SampleDesc.Quality = 0;

	irData.SysMemPitch = 0;

			break;

		}

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

{



		pLevels,

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	UINT offsets = 0;

			}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			for (size_t v = 0; v < num_vertices; v++)



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	//Create Index



	SDL_DestroyTexture(tex);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SAFE_RELEASE(m_pMatrixBuffer);

	// Loop over shapes

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	std::string error;

		if (!reader.Error().empty())

		return hr;

	tinyobj::ObjReader reader;

	SAFE_RELEASE(m_pDevice);

		&attrib,

			for (size_t v = 0; v < num_vertices; v++)

	SDL_FreeSurface(suf);

	m_Viewport.TopLeftY = 0;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		//User requests quit

	SAFE_RELEASE(m_pVertexBuffer);

	D3D11_BUFFER_DESC vbDesc;

	ZeroMemory(&txDesc, sizeof(txDesc));

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	txDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	tinyobj::attrib_t attrib;



{

	SAFE_RELEASE(m_pDevice);

	cbDesc.StructureByteStride = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	irData.SysMemPitch = 0;

	UINT flags = 0;

	SAFE_RELEASE(m_pTexture);

	//Key press surfaces constants

	m_pSwapChain->Present(0, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	vrData.pSysMem = &pVList[0];

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

	SAFE_RELEASE(m_pSampler);

		pIList[j] = indexList[j];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	{

	if (!error.empty())

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{



	txDesc.Height = rect.Height();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;







#include <iostream>

	SDL_DestroyWindow(win);





void CD3DTest::Render()



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



			{

	float    farZ = 100.0f;

	if (!reader.Warning().empty())

	cbDesc.CPUAccessFlags = 0;

		{

	std::vector<tinyobj::shape_t> shapes;

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pMatrixBuffer);

{

	SDL_Quit();

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		else if (e.type == SDL_KEYDOWN)



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMatrixBuffer {

int SEGMENT = 36;



	LoadObj(vertexlist, indexList);

}

			default:

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		if (e.type == SDL_QUIT)

		return hr;



	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	cbDesc.MiscFlags = 0;

		{



	D3D11_SUBRESOURCE_DATA vrData;

		delete[] pIList;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pDepthStencilView = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	if (FAILED(hr))

	D3D11_TEXTURE2D_DESC txDesc;

	std::string imagePath = "hello.bmp";

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pRenderTargetView);

	for (int i = 0; i < vcount; i++)



	{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	for (int j = 0; j < icount; j++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	Release();

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	{

		return hr;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pLightBuffer = NULL;

			{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pVertexBuffer);

	cbDesc.StructureByteStride = 0;

	float    farZ = 100.0f;

				tinyobj::real_t tx =

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



			// Loop over vertices in the face.

	m_pSampler = NULL;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	tinyobj::attrib_t attrib;

		SDL_RenderPresent(ren);

		SDL_Delay(1000);

	txDesc.SampleDesc.Quality = 0;



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	{



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	txDesc.MiscFlags = 0;

};

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4         ambient;  //環境光(r,g,b)

	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		KEY_PRESS_SURFACE_UP,

			index_offset += num_vertices;

	float    fov = XMConvertToRadians(20.0f);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	float    nearZ = 0.1f;





	}

		{

};

	irData.SysMemPitch = 0;

			}

	SAFE_RELEASE(m_pMatrixBuffer);

				break;



	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.eyePos, eye);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	m_pTextureView = NULL;

	}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	for (const auto& shape : shapes)

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&error,

		KEY_PRESS_SURFACE_UP,

int main(int, char**)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)







	while (SDL_PollEvent(&e) != 0)

struct ConstantLightBuffer {

	Vertex* pVList = new Vertex[vcount];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

			}

	scDesc.OutputWindow = hwnd;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



			{

		cout << "SDL_INIT_ERROR" << endl;

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	{

	reader_config.mtl_search_path = "./"; // Path to material files

	ConstantLight    pntLight; //点光源

		KEY_PRESS_SURFACE_LEFT,

	if (FAILED(hr))



struct ConstantMatrixBuffer {





}
		if (!ret)

	for (int i = 0; i < 3; i++)

	flags |= D3D11_CREATE_DEVICE_DEBUG;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				// access to vertex

		SDL_RenderClear(ren);

	auto& materials = reader.GetMaterials();





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	std::string inputfile = "test.obj";

	//頂点レイアウト作成



	tinyobj::attrib_t attrib;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pPixelShader);

		return hr;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	SAFE_RELEASE(m_pSampler);

	WORD   icount = indexList.size();



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))

};

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//頂点バッファ作成

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4 specular;          //反射(r,g,b)

	txDesc.MiscFlags = 0;

	}

	while (SDL_PollEvent(&e) != 0)

/*

	vbDesc.StructureByteStride = 0;

	vrData.SysMemPitch = 0;

	m_pDevice = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	if (FAILED(hr))

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

{



	XMStoreFloat4(&clb.eyePos, eye);

	std::string error;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		delete[] pVList;

	UINT strides = sizeof(Vertex);

		SDL_Delay(1000);

	D3D11_SUBRESOURCE_DATA irData;



	WORD   icount = indexList.size();

	SDL_DestroyTexture(tex);

	pBackBuffer->Release();

		&m_pSwapChain,

	m_Viewport.MaxDepth = 1.0f;

			index_offset += fv;

	float    farZ = 100.0f;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			default:



	txDesc.Height = rect.Height();

	//頂点バッファ作成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	Release();

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

CD3DTest::CD3DTest()

	//Create Index

		&m_pDevice,

	return hr;

	for (size_t s = 0; s < shapes.size(); s++)



		{

}



	::GetClientRect(hwnd, &rect);

	//Vertex* pVList = new Vertex[vcount];

		&error,

};

	vbDesc.MiscFlags = 0;

using std::cout; using std::endl;

	vbDesc.MiscFlags = 0;

			index_offset += fv;

	}

	//Create Index

	}

	ConstantMaterial material; //物体の質感



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	}

		&scDesc,

			for (size_t v = 0; v < fv; v++)





	{

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pInputLayout = NULL;

	/*



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyTexture(tex);

		&m_pSwapChain,

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pTextureView);

		SDL_Delay(1000);

	tinyobj::ObjReaderConfig reader_config;

	}

				break;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			{



	SDL_DestroyRenderer(ren);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		D3D11_SDK_VERSION,

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		D3D11_SDK_VERSION,

	vbDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_IndexCount = 0;





		//User requests quit

	m_pTexture = NULL;

	for (const auto& shape : shapes)

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (!reader.ParseFromFile(inputfile, reader_config))



	//vector<Vertex> vertex_t;

	XMFLOAT4         eyePos;   //視点座標

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pLightBuffer);

	{

	m_pDepthStencilView = NULL;

		SDL_RenderPresent(ren);

	SDL_DestroyRenderer(ren);

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		return hr;

	//定数バッファ作成

			//Select surfaces based on key press

	m_pVertexBuffer = NULL;

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&shapes,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

void CD3DTest::Release()

		if (e.type == SDL_QUIT)

	XMFLOAT4X4 projection;

	txDesc.MiscFlags = 0;

#include <iostream>

	SAFE_RELEASE(m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_LEFT,





	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		&materials,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		//User requests quit



	//頂点レイアウト作成

	irData.pSysMem = &pIList[0];



	m_Viewport.MaxDepth = 1.0f;

	m_pSampler = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	if (FAILED(hr))



	}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	std::vector<tinyobj::material_t> materials;

		exit(1);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;



void CD3DTest::Render()

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

{

	//テクスチャ読み込み

		return hr;

}

		{



		if (!ret)

	tinyobj::ObjReaderConfig reader_config;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	return 0;

};

	scDesc.BufferDesc.Height = rect.Height();

	float    nearZ = 0.1f;



		return hr;



void CD3DTest::Release()

		flags,

			//Select surfaces based on key press

	ConstantLightBuffer clb;

	m_pLightBuffer = NULL;

}



	for (size_t s = 0; s < shapes.size(); s++)



			}

	irData.SysMemSlicePitch = 0;



		//User presses a key

	::ZeroMemory(&scDesc, sizeof(scDesc));

		return hr;



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





	txDesc.ArraySize = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		SDL_RenderPresent(ren);

struct ConstantLight {

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.Height = (FLOAT)rect.Height();

		&m_pSwapChain,

#include <iostream>

		delete[] pVList;

		return hr;



	LoadObj(vertexlist, indexList);

				break;



	m_Viewport.MinDepth = 0.0f;

	SDL_FreeSurface(bmp);

	std::vector<tinyobj::shape_t> shapes;

	SDL_DestroyTexture(tex);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





				WORD index = idx.vertex_index;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };





};

	SAFE_RELEASE(m_pDepthStencilTexture);

	std::string inputfile = "test.obj";

}



	{

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SDL_FreeSurface(bmp);

	//Create Index

	float    nearZ = 0.1f;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	std::string error;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	int     vcount = vertexlist.size();

struct ConstantLightBuffer {



	{

};

	XMFLOAT4 specular;          //反射(r,g,b)

{

	D3D_FEATURE_LEVEL level;

	ConstantLight    pntLight; //点光源

		return hr;

	{

		D3D_DRIVER_TYPE_HARDWARE,





	}

		//User requests quit

	SAFE_RELEASE(m_pSampler);

void CD3DTest::Release()



	m_pSwapChain = NULL;





	if (!error.empty())

		size_t index_offset = 0;

	for (int i = 0; i < 3; i++)

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.MiscFlags = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	//頂点レイアウト作成

{





		return hr;

			default:



#include <SDL.h>

int main(int, char**)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {





	SDL_Quit();



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

	auto& shapes = reader.GetShapes();

	m_pVertexShader = NULL;

	m_pSwapChain = NULL;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))



		KEY_PRESS_SURFACE_LEFT,

	scDesc.OutputWindow = hwnd;

};

	}

	scDesc.OutputWindow = hwnd;

	std::string inputfile = "test.obj";

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.BufferDesc.Height = rect.Height();

		&m_pImmediateContext);

		&m_pDevice,

	vrData.SysMemSlicePitch = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMFLOAT4 specular;          //反射(r,g,b)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantLightBuffer clb;

};

	m_pImmediateContext = NULL;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	{

		SDL_RenderClear(ren);

	txDesc.CPUAccessFlags = 0;



	{

	cbDesc.CPUAccessFlags = 0;

				// access to vertex

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		{

	reader_config.mtl_search_path = "./"; // Path to material files

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	::GetClientRect(hwnd, &rect);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pVertexBuffer = NULL;

		SDL_RenderCopy(ren, tex, NULL, NULL);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	if (FAILED(hr))

	m_pSwapChain = NULL;

	cbDesc.StructureByteStride = 0;

	m_Viewport.MaxDepth = 1.0f;

void CD3DTest::Render()

	};

	{

		D3D11_SDK_VERSION,

struct ConstantMaterial {

	for (int i = 0; i < vcount; i++)

HRESULT CD3DTest::Create(HWND hwnd)

		pVList[i] = vertexlist[i];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		if (!ret)

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pDevice);



		SDL_RenderClear(ren);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		}

}

	}

		&level,

	if (FAILED(hr))

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		NULL,

		&shapes,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return hr;

		size_t index_offset = 0;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



{

		size_t index_offset = 0;  // インデントのオフセット

	m_Viewport.MaxDepth = 1.0f;

		cout << "SDL_INIT_ERROR" << endl;

	cbDesc.StructureByteStride = 0;

	m_pVertexBuffer = NULL;



	LoadObj(vertexlist, indexList);

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	if (!reader.ParseFromFile(inputfile, reader_config))



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ibDesc.StructureByteStride = 0;

	int     vcount = vertexlist.size();

	irData.pSysMem = &pIList[0];

		D3D11_SDK_VERSION,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



{

		return hr;

		pIList[j] = indexList[j];

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	{

	//テクスチャ読み込み

}

	if (FAILED(hr))

	SAFE_RELEASE(m_pDepthStencilView);

		size_t index_offset = 0;





		m_pImmediateContext->ClearState();



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

#include "DirectXManager.h"

			case SDLK_DOWN:

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pTexture = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		{



				indexlist.push_back(index);

	D3D11_BUFFER_DESC ibDesc;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vrData.pSysMem = &pVList[0];

	D3D11_BUFFER_DESC vbDesc;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				break;

	auto& shapes = reader.GetShapes();

			default:

}
	m_Viewport.Width = (FLOAT)rect.Width();

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	}

}

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4X4 projection;

	std::vector<tinyobj::material_t> materials;

	scDesc.OutputWindow = hwnd;

	//Create Index



		KEY_PRESS_SURFACE_RIGHT,

#ifdef _DEBUG

	}

			// Loop over vertices in the face.

}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	UINT strides = sizeof(Vertex);

	m_Angle += XMConvertToRadians(1.0f);

		KEY_PRESS_SURFACE_UP,

	auto& attrib = reader.GetAttrib();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

	SAFE_RELEASE(m_pTextureView);

void CD3DTest::Render()

	for (size_t s = 0; s < shapes.size(); s++)



	//Clean up our objects and quit

	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_pSampler = NULL;

	}



		if (e.type == SDL_QUIT)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

#include <SDL.h>





	D3D11_SUBRESOURCE_DATA irData;

	ZeroMemory(&txDesc, sizeof(txDesc));

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		1,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





		&scDesc,



		&m_pSwapChain,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&materials,

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		return hr;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

#ifdef _DEBUG

	cbDesc.CPUAccessFlags = 0;

	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

/*



		{

	}

struct ConstantLightBuffer {

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pInputLayout = NULL;

 */

	cbDesc.CPUAccessFlags = 0;

	{

	//First we need to start up SDL, and make sure it went ok

	//定数バッファ作成

				indexlist.push_back(index);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		if (!reader.Error().empty())

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_RenderClear(ren);

			{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;


