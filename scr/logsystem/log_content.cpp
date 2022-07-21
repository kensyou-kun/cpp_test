	txDesc.CPUAccessFlags = 0;

	vrData.SysMemSlicePitch = 0;

	if (FAILED(hr))

	XMFLOAT4X4 view;

	vector<Vertex> vertexlist;



#include <SDL.h>

	XMFLOAT4         ambient;  //環境光(r,g,b)



		return hr;



 * Lesson 1: Hello World!



	return 0;

	tinyobj::attrib_t attrib;

	{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pRenderTargetView);

		pLevels,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vbDesc.CPUAccessFlags = 0;

	}

	::GetClientRect(hwnd, &rect);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		KEY_PRESS_SURFACE_LEFT,

	m_Viewport.MinDepth = 0.0f;



			{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];





			// Loop over vertices in the face.

	D3D11_BUFFER_DESC cbDesc;



	pBackBuffer->Release();

			{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	pBackBuffer->Release();

	XMFLOAT4 pos;               //座標(x,y,z)

#include <SDL.h>





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

};

	m_pSwapChain = NULL;



	// Loop over shapes

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		size_t index_offset = 0;

	WORD* pIList = new WORD[icount];

	{

		return hr;

struct ConstantLight {

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&scDesc,

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pSwapChain,



		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	tinyobj::ObjReader reader;





				break;

		SDL_RenderClear(ren);

	{

	ConstantMatrixBuffer cmb;

	CRect                rect;

	if (m_pImmediateContext)





		flags,



	//インデックスバッファ作成

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4X4 world;

	cbDesc.CPUAccessFlags = 0;



	XMStoreFloat4(&clb.eyePos, eye);

	{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			{

			}

		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



			break;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		delete[] pVList;



		//User requests quit



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}

	irData.pSysMem = &pIList[0];

	m_pRenderTargetView = NULL;

		//User presses a key



	cbDesc.StructureByteStride = 0;

	//Clean up our objects and quit

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			index_offset += fv;

	vector<Vertex> vertexlist;

	float    farZ = 100.0f;

#include <SDL.h>



		NULL,

	std::vector<tinyobj::shape_t> shapes;

	//Vertex* pVList = new Vertex[vcount];

		}

	if (!error.empty())

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ConstantMatrixBuffer cmb;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	}

	m_VertexCount = vcount;

	/*

	SDL_Quit();

	m_Viewport.MaxDepth = 1.0f;

	/*

		KEY_PRESS_SURFACE_DOWN,

			}





	{

	m_Viewport.MinDepth = 0.0f;

	enum KeyPressSurfaces



	vrData.SysMemSlicePitch = 0;

#include <iostream>

		D3D11_SDK_VERSION,



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	{

}

	tinyobj::ObjReader reader;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		}

		return hr;

	return hr;

	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//Key press surfaces constants

	m_pImmediateContext = NULL;

	XMFLOAT4X4 view;

	auto& materials = reader.GetMaterials();



		KEY_PRESS_SURFACE_DOWN,

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		delete[] pVList;

	auto& materials = reader.GetMaterials();



		KEY_PRESS_SURFACE_TOTAL

	/*

}

};

	XMFLOAT4X4 world;



		return hr;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_LEFT,

	dsDesc.Texture2D.MipSlice = 0;

	vbDesc.MiscFlags = 0;



};

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (!error.empty())

	{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

}

	if (FAILED(hr))

#include <SDL.h>

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return hr;

				break;

		&level,

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



CD3DTest::~CD3DTest()

int main(int, char**)



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			default:

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

		//User requests quit

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		//User presses a key

	XMFLOAT4 ambient;           //環境(r,g,b)

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	while (SDL_PollEvent(&e) != 0)

		pIList[j] = indexList[j];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (FAILED(hr))

	SDL_FreeSurface(bmp);





struct ConstantMatrixBuffer {

	//頂点シェーダー生成

			}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_DestroyWindow(win);

	m_IndexCount = 0;

		SDL_Delay(1000);

			int num_vertices = shape.mesh.num_face_vertices[f];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

};

	scDesc.BufferDesc.Width = rect.Width();





			}







	SAFE_RELEASE(m_pTexture);

		if (e.type == SDL_QUIT)



	UINT flags = 0;

	//Vertex* pVList = new Vertex[vcount];

			default:

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pRenderTargetView = NULL;

	};



	m_pTexture = NULL;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pImmediateContext);



			case SDLK_RIGHT:

	dsDesc.Format = txDesc.Format;



void CD3DTest::Render()

	SAFE_RELEASE(m_pDepthStencilView);

				indexlist.push_back(idx.vertex_index);



	D3D11_SAMPLER_DESC smpDesc;

	D3D11_BUFFER_DESC ibDesc;

struct ConstantMatrixBuffer {

	m_pPixelShader = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{



	for (const auto& shape : shapes)

		return 1;

	{

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	vrData.SysMemPitch = 0;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.Height = rect.Height();





};

};

		&level,



	SAFE_RELEASE(m_pTextureView);

{

			}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	txDesc.CPUAccessFlags = 0;

	m_pDepthStencilTexture = NULL;



				// access to vertex

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

struct ConstantMaterial {

	reader_config.mtl_search_path = "./"; // Path to material files



	//Clean up our objects and quit

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



		//User presses a key



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	txDesc.MipLevels = 1;

	//深度ステンシルバッファ作成

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	enum KeyPressSurfaces

	if (m_pImmediateContext)

				break;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		else if (e.type == SDL_KEYDOWN)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	std::vector<tinyobj::material_t> materials;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	}

	m_Viewport.MinDepth = 0.0f;

	irData.SysMemSlicePitch = 0;



{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		return hr;



	{

		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		delete[] pIList;

	//インデックスバッファ作成



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	SDL_DestroyTexture(tex);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_VertexCount = 0;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

		return hr;

		KEY_PRESS_SURFACE_DEFAULT,

	scDesc.BufferCount = 1;

		return hr;

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_BUFFER_DESC cbDesc;

			exit(1);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

};



		SDL_RenderClear(ren);

		SDL_Delay(1000);

	//Key press surfaces constants

	auto& shapes = reader.GetShapes();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				break;

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

struct ConstantLight {

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		delete[] pIList;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	LoadObj(vertexlist, indexList);

	{

	Vertex* pVList = new Vertex[vcount];

	D3D_FEATURE_LEVEL level;

		delete[] pVList;

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))





	}

	}

	}

	m_pTexture = NULL;

	SDL_DestroyRenderer(ren);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		&scDesc,

	XMStoreFloat4(&clb.eyePos, eye);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMStoreFloat4(&clb.eyePos, eye);

	scDesc.BufferDesc.Width = rect.Width();

	//テクスチャ読み込み



	SAFE_RELEASE(m_pDevice);

using std::cout; using std::endl;

	delete[] pIList;



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	for (const auto& shape : shapes)

	}

	hr = D3D11CreateDeviceAndSwapChain(NULL,



}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pDevice);

void CD3DTest::Render()

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	vbDesc.StructureByteStride = 0;

	}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vbDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み

	vbDesc.CPUAccessFlags = 0;

void CD3DTest::Render()

	D3D11_SUBRESOURCE_DATA vrData;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

};

			{

	cbDesc.MiscFlags = 0;

	vbDesc.StructureByteStride = 0;

	vector<Vertex> vertexlist;



	m_pImmediateContext = NULL;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SAFE_RELEASE(m_pDevice);





	auto& attrib = reader.GetAttrib();



		delete[] pIList;

		D3D_DRIVER_TYPE_HARDWARE,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	// Loop over shapes

				tinyobj::real_t ty =







		return hr;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	}

	//vector<WORD> index_t;

	{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.ArraySize = 1;

	irData.SysMemPitch = 0;



	if (FAILED(hr))

	::GetClientRect(hwnd, &rect);



	float    aspect = m_Viewport.Width / m_Viewport.Height;







	//Create Index

	enum KeyPressSurfaces



	{

	m_pLightBuffer = NULL;

	//深度ステンシルバッファ作成

	if (m_pImmediateContext)

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				vertex.push_back(vertex_tmp);

		D3D11_SDK_VERSION,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		return hr;

			}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				indexlist.push_back(idx.vertex_index);



		if (e.type == SDL_QUIT)

}



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	D3D11_TEXTURE2D_DESC txDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		//User presses a key

		D3D_DRIVER_TYPE_HARDWARE,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantMaterial {

	tinyobj::ObjReader reader;

	delete[] pIList;

	if (FAILED(hr))

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ConstantMatrixBuffer cmb;

	{

	}*/

	LoadObj(vertexlist, indexList);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//頂点シェーダー生成

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pRenderTargetView);

	SAFE_RELEASE(m_pDepthStencilView);



HRESULT CD3DTest::Create(HWND hwnd)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				WORD index = idx.vertex_index;



				break;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		pLevels,

	}



	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_pVertexShader = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	scDesc.Windowed = TRUE;



	//頂点シェーダー生成

	for (int i = 0; i < 3; i++)

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

struct ConstantLightBuffer {

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			case SDLK_UP:

		SDL_RenderCopy(ren, tex, NULL, NULL);

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	Release();

	SAFE_RELEASE(m_pInputLayout);



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	//Clean up our objects and quit

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		// Loop over faces(polygon)

	m_pDepthStencilView = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	return 0;

	//ビューポート設定

		SDL_RenderCopy(ren, tex, NULL, NULL);

			{



		}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			index_offset += num_vertices;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_DestroyRenderer(ren);

	}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	{



CD3DTest::~CD3DTest()

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			for (size_t v = 0; v < num_vertices; v++)

	for (int j = 0; j < icount; j++)

		return 1;

int main(int, char**)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	m_pIndexBuffer = NULL;

	D3D11_SUBRESOURCE_DATA vrData;

				indexlist.push_back(index);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	UINT offsets = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	int     vcount = vertexlist.size();





	bool ret = tinyobj::LoadObj(

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

		}

		exit(1);

	}





{

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

{

			case SDLK_DOWN:

	XMStoreFloat4(&clb.ambient, lightAmbient);

				tinyobj::real_t ty =

};



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pDepthStencilView = NULL;

		flags,

	{

struct ConstantMatrixBuffer {



#include <SDL.h>

	enum KeyPressSurfaces





		SDL_RenderClear(ren);

	/*



				break;

	for (size_t s = 0; s < shapes.size(); s++)



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

CD3DTest::CD3DTest()

			index_offset += fv;

	std::string imagePath = "hello.bmp";

	float    farZ = 100.0f;



	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMStoreFloat4(&clb.ambient, lightAmbient);

}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	SAFE_RELEASE(m_pTextureView);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	}

		return hr;





	std::vector<tinyobj::material_t> materials;



	scDesc.SampleDesc.Quality = 0;

}

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SAFE_RELEASE(m_pDepthStencilTexture);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

}

};

			case SDLK_DOWN:



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	ConstantLight    pntLight; //点光源

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			case SDLK_LEFT:

	SDL_DestroyTexture(tex);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		SDL_RenderCopy(ren, tex, NULL, NULL);

		//User requests quit

	//Clean up our objects and quit

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	D3D11_TEXTURE2D_DESC txDesc;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&level,

	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				indexlist.push_back(index);

	SAFE_RELEASE(m_pVertexShader);



	cbDesc.CPUAccessFlags = 0;



	//vector<WORD> index_t;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

			default:

			}

	if (FAILED(hr))

	{

	m_pRenderTargetView = NULL;

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.SampleDesc.Quality = 0;

}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vector<WORD> indexList;

	// Loop over shapes

		return hr;



{

				indexlist.push_back(index);

#include <iostream>

			{

	{

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	ConstantMaterial material; //物体の質感

		R"(cube.obj)");

	delete[] pVList;



	CRect                rect;

	return 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	SDL_Quit();

	scDesc.BufferCount = 1;



			default:

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	delete[] pVList;

{

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);





		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	txDesc.CPUAccessFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pDepthStencilTexture = NULL;



		cout << "SDL_INIT_ERROR" << endl;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				indexlist.push_back(index);

	}



};

		return hr;

	SDL_FreeSurface(suf);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderClear(ren);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

{

		SDL_RenderClear(ren);



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//定数バッファ作成

	cbDesc.CPUAccessFlags = 0;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		size_t index_offset = 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

};

	}

	}

	D3D11_BUFFER_DESC cbDesc;

	//vector<WORD> index_t;

	if (m_pImmediateContext)

	vbDesc.MiscFlags = 0;

	if (!error.empty())

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.ByteWidth = sizeof(WORD) * icount;



				tinyobj::real_t ty =

	}



		KEY_PRESS_SURFACE_DEFAULT,

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MinDepth = 0.0f;

			//Select surfaces based on key press

	m_pLightBuffer = NULL;

void CD3DTest::Release()

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	cbDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		&m_pSwapChain,

	}

struct ConstantLightBuffer {

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		SDL_RenderPresent(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		else if (e.type == SDL_KEYDOWN)

	txDesc.SampleDesc.Count = 1;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_Delay(1000);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				break;

	scDesc.BufferDesc.Height = rect.Height();



				indexlist.push_back(index);

				WORD index = idx.vertex_index;

	m_pLightBuffer = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pDevice = NULL;



	if (FAILED(hr))

{

		SDL_RenderPresent(ren);

	for (int j = 0; j < icount; j++)

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	//深度ステンシルバッファ作成



			}

	{

				tinyobj::real_t ty =

	scDesc.BufferDesc.Width = rect.Width();

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;







struct ConstantLightBuffer {

	}

		cout << "SDL_INIT_ERROR" << endl;

	txDesc.SampleDesc.Quality = 0;

/*

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	float    fov = XMConvertToRadians(20.0f);

		return hr;

	SDL_Event e;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

#define TINYOBJLOADER_IMPLEMENTATION

	delete[] pVList;

}

		KEY_PRESS_SURFACE_RIGHT,

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	vrData.SysMemSlicePitch = 0;

	D3D11_TEXTURE2D_DESC txDesc;

		}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&m_pDevice,

		return hr;

	if (FAILED(hr))

				break;

	txDesc.MipLevels = 1;

		D3D_DRIVER_TYPE_HARDWARE,

	{

	scDesc.SampleDesc.Quality = 0;

	int     vcount = vertexlist.size();

}

	scDesc.BufferCount = 1;



	::GetClientRect(hwnd, &rect);

		{



	if (FAILED(hr))

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4X4 projection;



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		KEY_PRESS_SURFACE_LEFT,



	while (SDL_PollEvent(&e) != 0)

	::ZeroMemory(&scDesc, sizeof(scDesc));







	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.Height = rect.Height();

	m_pSampler = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	Release();

	scDesc.SampleDesc.Count = 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		//User presses a key



		//User requests quit

	XMFLOAT4X4 world;

		return hr;

	}

	m_pVertexShader = NULL;

	irData.SysMemPitch = 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	irData.SysMemSlicePitch = 0;

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4 specular;          //反射(r,g,b)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	}

	XMFLOAT4 ambient;           //環境(r,g,b)

using std::cout; using std::endl;

	SAFE_RELEASE(m_pImmediateContext);

	return 0;

	irData.pSysMem = &pIList[0];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	m_VertexCount = vcount;

	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		{



	UINT offsets = 0;

	m_pInputLayout = NULL;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.MiscFlags = 0;

using std::cout; using std::endl;





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	D3D11_SAMPLER_DESC smpDesc;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		{

	D3D11_SUBRESOURCE_DATA vrData;





	m_pVertexShader = NULL;



	//First we need to start up SDL, and make sure it went ok

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	::GetClientRect(hwnd, &rect);

	{



#endif

		SDL_Delay(1000);

#include <SDL.h>



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		exit(1);

	D3D_FEATURE_LEVEL level;

	{

	D3D_FEATURE_LEVEL level;

	m_Viewport.TopLeftY = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;

	float    fov = XMConvertToRadians(20.0f);

	D3D11_SAMPLER_DESC smpDesc;

void CD3DTest::Release()

	for (int j = 0; j < icount; j++)

				WORD index = idx.vertex_index;

	ConstantMaterial material; //物体の質感

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

};

		SDL_RenderClear(ren);

		&shapes,

		&m_pDevice,

	cbDesc.StructureByteStride = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	irData.pSysMem = &pIList[0];



	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

}

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_DEFAULT,

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

/*

	m_IndexCount = icount;

		KEY_PRESS_SURFACE_RIGHT,

};

	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4X4 view;

		&materials,

		&m_pSwapChain,

	m_pTexture = NULL;

	//Vertex* pVList = new Vertex[vcount];



	//Key press surfaces constants

				vertex.push_back(vertex_tmp);

		return hr;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	std::string inputfile = "test.obj";

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		pVList[i] = vertexlist[i];







	// Loop over shapes



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SDL_DestroyTexture(tex);

	m_pDepthStencilView = NULL;

	//インデックスバッファ作成

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				indexlist.push_back(idx.vertex_index);





	WORD* pIList = new WORD[icount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			{

	ZeroMemory(&txDesc, sizeof(txDesc));



	m_pVertexBuffer = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



}

		&error,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <SDL.h>

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			index_offset += num_vertices;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



}

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SAFE_RELEASE(m_pPixelShader);

}



	}



	return hr;

	if (FAILED(hr))

	delete[] pVList;

		}





}

		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	::ZeroMemory(&scDesc, sizeof(scDesc));





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				vertex.push_back(vertex_tmp);

	std::string error;



		// Loop over faces(polygon)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

		SDL_RenderClear(ren);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_Viewport.TopLeftX = 0;



	return;





HRESULT CD3DTest::Create(HWND hwnd)

	tinyobj::ObjReader reader;

		NULL,

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_DestroyWindow(win);





		&m_pSwapChain,



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	scDesc.BufferCount = 1;

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	if (!error.empty())



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		&attrib,

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		m_pImmediateContext->ClearState();

			default:

		{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



		else if (e.type == SDL_KEYDOWN)

	m_Viewport.Height = (FLOAT)rect.Height();



			index_offset += num_vertices;

			{

		}

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			switch (e.key.keysym.sym)

	{

			break;

	SAFE_RELEASE(m_pMatrixBuffer);







	while (SDL_PollEvent(&e) != 0)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		//User requests quit

};

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SAFE_RELEASE(m_pPixelShader);

	SAFE_RELEASE(m_pMatrixBuffer);

	m_Viewport.TopLeftX = 0;

		&shapes,



			{

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

{

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.StructureByteStride = 0;

	irData.SysMemPitch = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	std::string imagePath = "hello.bmp";

	m_IndexCount = 0;

	{

	m_pTexture = NULL;



	txDesc.MipLevels = 1;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	m_pImmediateContext = NULL;

void CD3DTest::Render()

		return hr;

struct ConstantMatrixBuffer {

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (!reader.Warning().empty())

	for (int i = 0; i < vcount; i++)

		R"(cube.obj)");

	}



	Release();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

{



			break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





#include <iostream>

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	bool ret = tinyobj::LoadObj(

	m_IndexCount = 0;

	if (FAILED(hr))

{

	std::vector<tinyobj::shape_t> shapes;

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.StructureByteStride = 0;

		R"(cube.obj)");

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.StructureByteStride = 0;

	vrData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_Viewport.MinDepth = 0.0f;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_TOTAL



			{

			// Loop over vertices in the face.

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		return hr;

	SAFE_RELEASE(m_pInputLayout);



	int     vcount = vertexlist.size();

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

}

	m_Viewport.TopLeftX = 0;



	}



};



}

	m_pImmediateContext = NULL;

	SDL_FreeSurface(suf);

	//Create Index

		delete[] pVList;

	//頂点シェーダー生成

	}

	vbDesc.MiscFlags = 0;

				// access to vertex

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

			//Select surfaces based on key press

	m_pDepthStencilView = NULL;

		&shapes,

	//インデックスバッファ作成

		delete[] pIList;

			case SDLK_LEFT:





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		}

	ibDesc.ByteWidth = sizeof(WORD) * icount;





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pSampler);

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

	};

			{

	tinyobj::ObjReader reader;



	m_pTexture = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	D3D11_BUFFER_DESC ibDesc;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.MinDepth = 0.0f;



	m_pVertexShader = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		//User presses a key

	ConstantMaterial material; //物体の質感

		// Loop over faces(polygon)

	vbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

int SEGMENT = 36;

	SAFE_RELEASE(m_pRenderTargetView);

{





	for (const auto& shape : shapes)

		else if (e.type == SDL_KEYDOWN)

	pBackBuffer->Release();

	m_pInputLayout = NULL;

	tinyobj::ObjReaderConfig reader_config;

	enum KeyPressSurfaces

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

{



	Release();

	float    fov = XMConvertToRadians(20.0f);

	txDesc.CPUAccessFlags = 0;

		KEY_PRESS_SURFACE_RIGHT,

using std::cout; using std::endl;



#include <iostream>

		}

}

	m_pPixelShader = NULL;

HRESULT CD3DTest::Create(HWND hwnd)

	delete[] pVList;

	SDL_DestroyRenderer(ren);

	auto& materials = reader.GetMaterials();

	delete[] pVList;

{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//頂点シェーダー生成



	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pRenderTargetView);

	}

	if (FAILED(hr))



}

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	if (!reader.Warning().empty())

	//頂点レイアウト作成

#include <SDL.h>



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



		{

#endif



		1,

			{







}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				break;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			break;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				break;

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		//User requests quit



	dsDesc.Texture2D.MipSlice = 0;

struct ConstantLight {

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pLightBuffer);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)





	txDesc.ArraySize = 1;

	float    farZ = 100.0f;

			case SDLK_UP:





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

		{

struct ConstantMaterial {

	HRESULT              hr;

	UINT offsets = 0;





	m_Viewport.TopLeftY = 0;

	WORD   icount = indexList.size();

			case SDLK_LEFT:



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pTexture);

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pDepthStencilTexture);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pPixelShader);

			case SDLK_LEFT:

	{

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.MiscFlags = 0;

	SDL_FreeSurface(bmp);

	reader_config.mtl_search_path = "./"; // Path to material files

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//テクスチャ読み込み

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	bool ret = tinyobj::LoadObj(

};

	if (FAILED(hr))

	delete[] pVList;

	//インデックスバッファ作成

		KEY_PRESS_SURFACE_RIGHT,

			{





HRESULT CD3DTest::Create(HWND hwnd)

			}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_TOTAL

			for (size_t v = 0; v < fv; v++)

void CD3DTest::Release()

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





	m_pSwapChain->Present(0, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	{

	}



void CD3DTest::Render()



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{



	XMFLOAT4 ambient;           //環境(r,g,b)

	LoadObj(vertexlist, indexList);

	XMFLOAT4 specular;          //反射(r,g,b)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMStoreFloat4(&clb.eyePos, eye);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	cbDesc.MiscFlags = 0;

		D3D_DRIVER_TYPE_HARDWARE,



int main(int, char**)

	//First we need to start up SDL, and make sure it went ok

	//Key press surfaces constants

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	auto& materials = reader.GetMaterials();

	//深度ステンシルバッファ作成

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

};

			{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				break;

		KEY_PRESS_SURFACE_RIGHT,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	ConstantLight    pntLight; //点光源

	if (!error.empty())

			}

	m_Viewport.MinDepth = 0.0f;



	//頂点レイアウト作成

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	Vertex* pVList = new Vertex[vcount];





	SAFE_RELEASE(m_pSwapChain);

	//First we need to start up SDL, and make sure it went ok



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

		return hr;

	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	dsDesc.Texture2D.MipSlice = 0;

	m_Viewport.MaxDepth = 1.0f;

}

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				WORD index = idx.vertex_index;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)







	scDesc.BufferCount = 1;

	float    farZ = 100.0f;

	txDesc.MipLevels = 1;

			{

#include <iostream>

	auto& attrib = reader.GetAttrib();

	vrData.SysMemPitch = 0;



	XMFLOAT4 pos;               //座標(x,y,z)



		&m_pSwapChain,

		return hr;

	UINT offsets = 0;

	m_pDepthStencilView = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	irData.SysMemPitch = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	ibDesc.StructureByteStride = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pMatrixBuffer);



	XMFLOAT4X4 projection;

		return hr;

}

			}

	m_Viewport.MinDepth = 0.0f;

		&m_pSwapChain,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	txDesc.Height = rect.Height();



	if (FAILED(hr))

	m_pDevice = NULL;

	m_Viewport.MaxDepth = 1.0f;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	{

				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	for (const auto& shape : shapes)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

}


	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		}

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		KEY_PRESS_SURFACE_RIGHT,



	irData.SysMemSlicePitch = 0;



	SAFE_RELEASE(m_pTexture);



				indexlist.push_back(idx.vertex_index);

	{

	m_Viewport.Height = (FLOAT)rect.Height();



			{





#include <SDL.h>



	//頂点レイアウト作成

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		pIList[j] = indexList[j];

	cbDesc.MiscFlags = 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	XMFLOAT4 pos;               //座標(x,y,z)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



		{





	}

			//Select surfaces based on key press

	m_pSwapChain = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

			case SDLK_LEFT:

	irData.SysMemPitch = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pIndexBuffer);

		return hr;

	for (int i = 0; i < 3; i++)

	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	for (const auto& shape : shapes)

	D3D11_BUFFER_DESC ibDesc;



	}*/

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_IndexCount = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

};

	auto& attrib = reader.GetAttrib();

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pSwapChain = NULL;

	UINT strides = sizeof(Vertex);



	std::string inputfile = "test.obj";

	XMFLOAT4 pos;               //座標(x,y,z)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



 */

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pInputLayout = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//Create Index

	cbDesc.MiscFlags = 0;

	SDL_FreeSurface(suf);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		NULL,

	SDL_DestroyTexture(tex);



	ibDesc.MiscFlags = 0;

	txDesc.CPUAccessFlags = 0;



	m_Viewport.MaxDepth = 1.0f;



	ibDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

};

	WORD   icount = indexList.size();

		m_pImmediateContext->ClearState();

		&materials,

/*

	DXGI_SWAP_CHAIN_DESC scDesc;

		flags,

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& attrib = reader.GetAttrib();

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	auto& shapes = reader.GetShapes();

			case SDLK_UP:

	vector<WORD> indexList;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



#include "DirectXManager.h"

	txDesc.MipLevels = 1;

		SDL_Delay(1000);

	cbDesc.CPUAccessFlags = 0;





	vrData.pSysMem = &pVList[0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (m_pImmediateContext)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	for (int i = 0; i < vcount; i++)

	SAFE_RELEASE(m_pInputLayout);

		&error,



{

	cbDesc.StructureByteStride = 0;

		{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (m_pImmediateContext)

	while (SDL_PollEvent(&e) != 0)

	{

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		SDL_RenderClear(ren);



	SAFE_RELEASE(m_pPixelShader);

	}



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	{

	m_pImmediateContext = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	dsDesc.Format = txDesc.Format;

	std::string imagePath = "hello.bmp";

	if (!error.empty())

	SDL_DestroyWindow(win);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4X4 projection;

	D3D_FEATURE_LEVEL level;

	m_pVertexBuffer = NULL;

	tinyobj::ObjReader reader;

}




	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

HRESULT CD3DTest::Create(HWND hwnd)

	m_pSwapChain->Present(0, 0);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		&m_pSwapChain,

	vector<WORD> indexList;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





		return hr;

			index_offset += num_vertices;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



		&m_pSwapChain,





	}



	txDesc.SampleDesc.Quality = 0;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include <iostream>



	float    aspect = m_Viewport.Width / m_Viewport.Height;



			case SDLK_RIGHT:

	irData.SysMemSlicePitch = 0;

	//頂点バッファ作成

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	//First we need to start up SDL, and make sure it went ok

{

	tinyobj::ObjReader reader;

	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	DXGI_SWAP_CHAIN_DESC scDesc;

		SDL_RenderClear(ren);

	D3D11_SAMPLER_DESC smpDesc;



	vrData.SysMemSlicePitch = 0;

#include <iostream>



	irData.SysMemSlicePitch = 0;

		return hr;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

using std::cout; using std::endl;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	XMFLOAT4X4 world;

	ConstantMaterial material; //物体の質感

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D11_SAMPLER_DESC smpDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

struct ConstantMaterial {



		return hr;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.ArraySize = 1;

		return hr;



	SDL_DestroyRenderer(ren);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

void CD3DTest::Render()



	txDesc.CPUAccessFlags = 0;



		{



	if (!reader.ParseFromFile(inputfile, reader_config))

			//Select surfaces based on key press







	SAFE_RELEASE(m_pVertexShader);

			{



	//深度ステンシルバッファ作成

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pSampler = NULL;



};



	scDesc.Windowed = TRUE;





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		pVList[i] = vertexlist[i];

		}

	vector<Vertex> vertexlist;

	irData.pSysMem = &pIList[0];

	//頂点バッファ作成



	}

	SAFE_RELEASE(m_pSampler);

	}

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		NULL,

				tinyobj::real_t tx =



	m_pRenderTargetView = NULL;

				break;

				WORD index = idx.vertex_index;

	bool ret = tinyobj::LoadObj(

}

	//深度ステンシルバッファ作成

	vbDesc.CPUAccessFlags = 0;

				vertex.push_back(vertex_tmp);

	}*/

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_Viewport.Height = (FLOAT)rect.Height();

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pTextureView);

	SDL_Event e;

	{



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



}

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	txDesc.ArraySize = 1;



	D3D11_SUBRESOURCE_DATA irData;

	};

	SDL_Quit();

	//深度ステンシルバッファ作成

	UINT offsets = 0;

	tinyobj::ObjReader reader;

		&level,

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_DestroyRenderer(ren);

};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pLightBuffer);

	scDesc.BufferCount = 1;

}

	m_Viewport.TopLeftY = 0;

		{

	scDesc.SampleDesc.Quality = 0;

		SDL_RenderClear(ren);

	txDesc.Height = rect.Height();



	return 0;

		return hr;



	SDL_DestroyWindow(win);

	D3D11_SUBRESOURCE_DATA irData;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		KEY_PRESS_SURFACE_RIGHT,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SAFE_RELEASE(m_pSampler);

	//定数バッファ作成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				WORD index = idx.vertex_index;

#define TINYOBJLOADER_IMPLEMENTATION

		SDL_RenderClear(ren);

	ConstantMaterial material; //物体の質感

	m_Viewport.Width = (FLOAT)rect.Width();

		KEY_PRESS_SURFACE_DEFAULT,

			// Loop over vertices in the face.

		&shapes,

		D3D11_SDK_VERSION,

/*

{

	};

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

		SDL_Delay(1000);

};

	SAFE_RELEASE(m_pVertexShader);

struct ConstantLight {

	tinyobj::attrib_t attrib;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

}





	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)





	SAFE_RELEASE(m_pDepthStencilView);

	ibDesc.MiscFlags = 0;

		SDL_Delay(1000);



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

};

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	UINT strides = sizeof(Vertex);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pTextureView = NULL;

	m_pSwapChain = NULL;

	std::string inputfile = "test.obj";

	SAFE_RELEASE(m_pDevice);

		SDL_RenderCopy(ren, tex, NULL, NULL);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		&attrib,

	txDesc.MiscFlags = 0;

	};

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pSampler);

	//vector<WORD> index_t;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		}



				tinyobj::real_t tx =

	scDesc.SampleDesc.Quality = 0;

				break;

				vertex.push_back(vertex_tmp);

};

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pDepthStencilView = NULL;



	m_pInputLayout = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		delete[] pIList;







	for (size_t s = 0; s < shapes.size(); s++)



	//Key press surfaces constants

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	float    farZ = 100.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.SampleDesc.Quality = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		pIList[j] = indexList[j];

			switch (e.key.keysym.sym)

CD3DTest::CD3DTest()

	txDesc.MiscFlags = 0;

	ibDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

		if (!reader.Error().empty())



	//vector<WORD> index_t;

		return hr;

			for (size_t v = 0; v < num_vertices; v++)

	}

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.StructureByteStride = 0;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	::GetClientRect(hwnd, &rect);

		NULL,

				break;

	m_pSwapChain = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		KEY_PRESS_SURFACE_TOTAL

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	auto& shapes = reader.GetShapes();

	{

	txDesc.SampleDesc.Quality = 0;

		return hr;

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		return hr;

void CD3DTest::Render()

			exit(1);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	for (size_t s = 0; s < shapes.size(); s++)

	m_pIndexBuffer = NULL;

	{



	txDesc.Usage = D3D11_USAGE_DEFAULT;

{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pDevice);

	CRect                rect;

		return hr;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	for (int j = 0; j < icount; j++)





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<WORD> indexList;

	for (int i = 0; i < vcount; i++)

	scDesc.SampleDesc.Count = 1;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&materials,

	ibDesc.CPUAccessFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

	delete[] pVList;





			for (size_t v = 0; v < num_vertices; v++)

	SDL_FreeSurface(suf);

				indexlist.push_back(index);

	if (FAILED(hr))

	m_pVertexShader = NULL;

	txDesc.SampleDesc.Count = 1;



		return hr;

	for (int i = 0; i < 3; i++)

	float    nearZ = 0.1f;





	if (!reader.ParseFromFile(inputfile, reader_config))

};

		&m_pImmediateContext);



	UINT flags = 0;

		{

	vbDesc.MiscFlags = 0;

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			default:

			{

			for (size_t v = 0; v < fv; v++)

#endif

		//User requests quit

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

void CD3DTest::Release()

	}

		size_t index_offset = 0;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				break;





	tinyobj::ObjReaderConfig reader_config;

		return hr;

	m_pDepthStencilView = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	tinyobj::attrib_t attrib;

void CD3DTest::Release()

	D3D11_BUFFER_DESC vbDesc;



			int num_vertices = shape.mesh.num_face_vertices[f];

				indexlist.push_back(index);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	{

}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		return hr;

	SAFE_RELEASE(m_pDevice);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

	return hr;

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

		return hr;

	ConstantMaterial material; //物体の質感

			case SDLK_LEFT:

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	//vector<Vertex> vertex_t;







		SDL_RenderCopy(ren, tex, NULL, NULL);

{

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pSwapChain);

	vrData.SysMemPitch = 0;



	scDesc.OutputWindow = hwnd;

		if (e.type == SDL_QUIT)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	::GetClientRect(hwnd, &rect);



	}

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	SAFE_RELEASE(m_pPixelShader);

		KEY_PRESS_SURFACE_TOTAL



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pLightBuffer);

	m_pTexture = NULL;



	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	if (FAILED(hr))

struct ConstantLight {



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

	ibDesc.MiscFlags = 0;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				// access to vertex



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



}

	txDesc.Width = rect.Width();

	UINT offsets = 0;

	SAFE_RELEASE(m_pRenderTargetView);





}

		}

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

 */

	vbDesc.MiscFlags = 0;



	//First we need to start up SDL, and make sure it went ok

	}

	auto& materials = reader.GetMaterials();

		&scDesc,

	SDL_DestroyWindow(win);

};

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			index_offset += num_vertices;





	//ビューポート設定

	//頂点レイアウト作成

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	//Key press surfaces constants

/*



		else if (e.type == SDL_KEYDOWN)



			index_offset += fv;



		size_t index_offset = 0;

				tinyobj::real_t ty =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pTextureView = NULL;

	SDL_FreeSurface(suf);

		pVList[i] = vertexlist[i];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



		1,

	scDesc.OutputWindow = hwnd;

	cbDesc.CPUAccessFlags = 0;

		delete[] pVList;

	{

	Vertex* pVList = new Vertex[vcount];





	}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			// Loop over vertices in the face.

		{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	auto& materials = reader.GetMaterials();





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//インデックスバッファ作成

	Release();



		//User requests quit

	m_pSwapChain->Present(0, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





		return hr;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_RIGHT,

#include <iostream>

	{

			case SDLK_DOWN:



	m_pSwapChain->Present(0, 0);

	//Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

				// access to vertex

				WORD index = idx.vertex_index;

	LoadObj(vertexlist, indexList);





	int     vcount = vertexlist.size();

	irData.SysMemSlicePitch = 0;

	ibDesc.StructureByteStride = 0;

{

			// Loop over vertices in the face.

		KEY_PRESS_SURFACE_DOWN,

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

#include <SDL.h>



		1,

	D3D11_BUFFER_DESC cbDesc;



			case SDLK_UP:

	m_Viewport.TopLeftY = 0;

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		KEY_PRESS_SURFACE_TOTAL

	vector<Vertex> vertexlist;



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



{

	scDesc.BufferDesc.Width = rect.Width();

			{



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	{



{

	}



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		return hr;

	auto& attrib = reader.GetAttrib();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SAFE_RELEASE(m_pTexture);





		&m_pImmediateContext);



	SAFE_RELEASE(m_pVertexShader);

	for (size_t s = 0; s < shapes.size(); s++)

		}

	SAFE_RELEASE(m_pLightBuffer);

	CRect                rect;

				indexlist.push_back(idx.vertex_index);

	float    nearZ = 0.1f;

	//First we need to start up SDL, and make sure it went ok

	txDesc.ArraySize = 1;



	::GetClientRect(hwnd, &rect);





	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	std::string imagePath = "hello.bmp";

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点シェーダー生成

	WORD* pIList = new WORD[icount];



			}

	SAFE_RELEASE(m_pDepthStencilView);

	{

			// Loop over vertices in the face.

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	txDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;



	}

	txDesc.MipLevels = 1;

	m_pLightBuffer = NULL;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	SAFE_RELEASE(m_pTextureView);

	SDL_DestroyWindow(win);

				break;

	for (int i = 0; i < 3; i++)

			for (size_t v = 0; v < fv; v++)

	std::string imagePath = "hello.bmp";

		//User presses a key

	//First we need to start up SDL, and make sure it went ok





		size_t index_offset = 0;

	cbDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	//Clean up our objects and quit

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	}

	for (int i = 0; i < vcount; i++)

		return hr;



		delete[] pVList;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4 ambient;           //環境(r,g,b)

	SAFE_RELEASE(m_pVertexBuffer);

	ibDesc.CPUAccessFlags = 0;

	std::vector<tinyobj::material_t> materials;

		else if (e.type == SDL_KEYDOWN)



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

void CD3DTest::Release()

		D3D11_SDK_VERSION,

{

}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		NULL,

	pBackBuffer->Release();

	for (int j = 0; j < icount; j++)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	auto& attrib = reader.GetAttrib();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pSampler);

/*

	m_pSwapChain = NULL;

	dsDesc.Format = txDesc.Format;



	SDL_DestroyTexture(tex);

};

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

int main(int, char**)

		D3D_DRIVER_TYPE_HARDWARE,

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pTextureView);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		//User presses a key

	if (FAILED(hr))





	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pLightBuffer);





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		SDL_RenderClear(ren);



		return hr;

struct ConstantMatrixBuffer {





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



				// access to vertex





	SAFE_RELEASE(m_pTexture);

	Release();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	tinyobj::ObjReaderConfig reader_config;



	D3D11_BUFFER_DESC cbDesc;

	std::vector<tinyobj::material_t> materials;

			for (size_t v = 0; v < fv; v++)

	m_VertexCount = vcount;

	{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_DOWN,

		else if (e.type == SDL_KEYDOWN)

	//頂点レイアウト作成

	if (FAILED(hr))

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	{

	HRESULT              hr;



	WORD* pIList = new WORD[icount];

/*

}





		KEY_PRESS_SURFACE_DOWN,

	}

	SAFE_RELEASE(m_pDevice);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pVertexBuffer);



	D3D11_BUFFER_DESC cbDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}







struct ConstantLightBuffer {





}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&shapes,

	irData.SysMemPitch = 0;

	ID3D11Texture2D* pBackBuffer;

		SDL_RenderClear(ren);

	delete[] pVList;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		KEY_PRESS_SURFACE_UP,

			int num_vertices = shape.mesh.num_face_vertices[f];

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	std::string inputfile = "test.obj";

	for (size_t s = 0; s < shapes.size(); s++)

	vbDesc.CPUAccessFlags = 0;



}

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		return hr;

		KEY_PRESS_SURFACE_RIGHT,

	SAFE_RELEASE(m_pTextureView);

			for (size_t v = 0; v < fv; v++)

	cbDesc.MiscFlags = 0;

	SDL_Event e;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	if (FAILED(hr))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::vector<tinyobj::material_t> materials;

		&error,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	dsDesc.Format = txDesc.Format;

		exit(1);

	scDesc.SampleDesc.Quality = 0;

		return hr;

		SDL_RenderPresent(ren);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	irData.pSysMem = &pIList[0];



	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

{

		}

	std::string error;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

			case SDLK_DOWN:

		SDL_RenderClear(ren);

		SDL_RenderPresent(ren);

	irData.pSysMem = &pIList[0];

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	}

		cout << "SDL_INIT_ERROR" << endl;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SAFE_RELEASE(m_pDevice);

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	cbDesc.CPUAccessFlags = 0;

		//User requests quit

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	vbDesc.CPUAccessFlags = 0;





				tinyobj::real_t ty =



CD3DTest::~CD3DTest()

	XMFLOAT4X4 world;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		if (e.type == SDL_QUIT)



			//Select surfaces based on key press



	auto& materials = reader.GetMaterials();

};

	//ピクセルシェーダー生成

	int     vcount = vertexlist.size();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			for (size_t v = 0; v < num_vertices; v++)



	ibDesc.StructureByteStride = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	m_pDevice = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	auto& materials = reader.GetMaterials();

	m_pDepthStencilTexture = NULL;

{

				// access to vertex

	SDL_Quit();







}


	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	::ZeroMemory(&scDesc, sizeof(scDesc));

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	//vector<Vertex> vertex_t;

		&m_pSwapChain,

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//Key press surfaces constants

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	//頂点シェーダー生成

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	scDesc.Windowed = TRUE;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMFLOAT4         eyePos;   //視点座標

	WORD* pIList = new WORD[icount];



	//深度ステンシルバッファ作成

		KEY_PRESS_SURFACE_UP,

	SDL_Quit();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}



				break;

	SDL_Quit();

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pDevice = NULL;

	//頂点レイアウト作成





	ConstantLightBuffer clb;

}

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	}

		SDL_Delay(1000);

		return hr;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	m_Viewport.MaxDepth = 1.0f;



	};

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	txDesc.SampleDesc.Count = 1;

{



{

		if (!ret)

	Vertex* pVList = new Vertex[vcount];

CD3DTest::~CD3DTest()

	tinyobj::attrib_t attrib;

	m_Viewport.MaxDepth = 1.0f;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

};

#define TINYOBJLOADER_IMPLEMENTATION

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		return hr;

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	txDesc.SampleDesc.Quality = 0;



	m_pDepthStencilTexture = NULL;



			{

	//Create Index

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		exit(1);



	}

{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SDL_DestroyWindow(win);

	ibDesc.CPUAccessFlags = 0;



	D3D11_BUFFER_DESC cbDesc;

		return hr;

	SAFE_RELEASE(m_pRenderTargetView);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

struct ConstantLight {

CD3DTest::CD3DTest()

	m_pRenderTargetView = NULL;

{

		&attrib,

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

}

	m_pDepthStencilView = NULL;

		}

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	m_VertexCount = vcount;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	SDL_DestroyRenderer(ren);

{

	}

	//Key press surfaces constants



	{

	m_pLightBuffer = NULL;

			case SDLK_LEFT:

		&m_pImmediateContext);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			{

	//テクスチャ読み込み

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&error,

		KEY_PRESS_SURFACE_DOWN,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	SDL_FreeSurface(suf);

	return;



	return hr;

	Release();



	SAFE_RELEASE(m_pVertexShader);

			case SDLK_RIGHT:

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_DestroyRenderer(ren);

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		KEY_PRESS_SURFACE_RIGHT,

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	D3D11_BUFFER_DESC ibDesc;

	D3D11_TEXTURE2D_DESC txDesc;

{

{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	auto& attrib = reader.GetAttrib();

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				vertex.push_back(vertex_tmp);

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pVertexBuffer = NULL;

}



	cbDesc.CPUAccessFlags = 0;

			default:

#include <iostream>



	m_pTextureView = NULL;

	irData.SysMemPitch = 0;

	delete[] pVList;

	//定数バッファ作成



				// access to vertex

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pInputLayout = NULL;



	Vertex* pVList = new Vertex[vcount];

#ifdef _DEBUG

				WORD index = idx.vertex_index;

			// Loop over vertices in the face.

	m_IndexCount = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_Viewport.TopLeftX = 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pVertexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	m_Viewport.TopLeftY = 0;

	{

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

	m_pLightBuffer = NULL;

	}

	//Key press surfaces constants



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SAFE_RELEASE(m_pImmediateContext);



	if (!reader.ParseFromFile(inputfile, reader_config))

	ConstantMatrixBuffer cmb;



	if (FAILED(hr))

		&m_pImmediateContext);

	vbDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		NULL,

	bool ret = tinyobj::LoadObj(

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];







	XMFLOAT4         ambient;  //環境光(r,g,b)

				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pSampler);

	int     vcount = vertexlist.size();

	/*

	SDL_DestroyTexture(tex);

using std::cout; using std::endl;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

	m_pDevice = NULL;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

#define TINYOBJLOADER_IMPLEMENTATION

};

	m_pSampler = NULL;

	m_Viewport.TopLeftX = 0;

using std::cout; using std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pRenderTargetView = NULL;

{

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			}

		}

	}



	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





		//User requests quit

	// Loop over shapes

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



struct ConstantLightBuffer {

}
	Vertex* pVList = new Vertex[vcount];

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



			case SDLK_RIGHT:



			}



	m_pSwapChain = NULL;



	m_pImmediateContext = NULL;

		return hr;

	D3D11_BUFFER_DESC ibDesc;

	return 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_VertexCount = 0;

	m_pDepthStencilTexture = NULL;

	txDesc.Width = rect.Width();

};

	//First we need to start up SDL, and make sure it went ok

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	return hr;

			// Loop over vertices in the face.

	UINT strides = sizeof(Vertex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

			switch (e.key.keysym.sym)

		&error,

			}

			switch (e.key.keysym.sym)

	auto& attrib = reader.GetAttrib();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_Delay(1000);

	}

#ifdef _DEBUG

			exit(1);

	D3D11_BUFFER_DESC vbDesc;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	scDesc.BufferDesc.Height = rect.Height();



	m_pDepthStencilTexture = NULL;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	//頂点バッファ作成

	scDesc.OutputWindow = hwnd;



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_FreeSurface(bmp);





	tinyobj::attrib_t attrib;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		}

	m_Viewport.MaxDepth = 1.0f;

				break;

	auto& materials = reader.GetMaterials();





	}

	}

	if (FAILED(hr))

	//頂点バッファ作成





	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pDevice = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.BufferDesc.Height = rect.Height();

	for (size_t s = 0; s < shapes.size(); s++)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	float    nearZ = 0.1f;

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))



			// Loop over vertices in the face.

	XMFLOAT4 ambient;           //環境(r,g,b)





	m_Viewport.MaxDepth = 1.0f;





	flags |= D3D11_CREATE_DEVICE_DEBUG;

	reader_config.mtl_search_path = "./"; // Path to material files

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	//インデックスバッファ作成



		KEY_PRESS_SURFACE_DEFAULT,

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pDepthStencilTexture = NULL;









	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		KEY_PRESS_SURFACE_LEFT,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		}

	SDL_DestroyTexture(tex);

		return 1;



		KEY_PRESS_SURFACE_TOTAL

		// Loop over faces(polygon)

			case SDLK_RIGHT:

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		// Loop over faces(polygon)



}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.BufferDesc.Width = rect.Width();

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pTextureView);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



				vertex.push_back(vertex_tmp);



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vector<Vertex> vertexlist;

		return hr;

				vertex.push_back(vertex_tmp);

		m_pImmediateContext->ClearState();

		flags,

CD3DTest::~CD3DTest()

	txDesc.ArraySize = 1;



	scDesc.SampleDesc.Count = 1;



	m_VertexCount = vcount;

		if (!ret)

	for (const auto& shape : shapes)



	D3D11_BUFFER_DESC ibDesc;





	{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pTexture = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//Clean up our objects and quit

	ibDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pPixelShader);

	vbDesc.CPUAccessFlags = 0;

	cbDesc.MiscFlags = 0;

	Vertex* pVList = new Vertex[vcount];

		return hr;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.Windowed = TRUE;



	irData.SysMemPitch = 0;

	}



			}



{



	SDL_DestroyWindow(win);

	m_pMatrixBuffer = NULL;

	auto& attrib = reader.GetAttrib();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_Viewport.TopLeftY = 0;



#include <SDL.h>

	}

	hr = D3D11CreateDeviceAndSwapChain(NULL,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

/*

	SDL_Event e;

		{



	//頂点シェーダー生成

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



			for (size_t v = 0; v < fv; v++)

		SDL_Delay(1000);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_Viewport.Height = (FLOAT)rect.Height();

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (FAILED(hr))



	//vector<Vertex> vertex_t;

	txDesc.Height = rect.Height();



}

	m_Viewport.TopLeftY = 0;

		{

		{

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vrData.SysMemSlicePitch = 0;

HRESULT CD3DTest::Create(HWND hwnd)

{

	SDL_DestroyWindow(win);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMFLOAT4         eyePos;   //視点座標

int main(int, char**)



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&m_pImmediateContext);

		return hr;





	if (FAILED(hr))

		return hr;

int main(int, char**)

		exit(1);

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		}

struct ConstantLightBuffer {

};



				break;

	txDesc.SampleDesc.Count = 1;



		&m_pSwapChain,

	if (FAILED(hr))



			for (size_t v = 0; v < num_vertices; v++)

	m_Viewport.TopLeftX = 0;

			default:

	//定数バッファ作成

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		if (!ret)



	for (const auto& shape : shapes)

	delete[] pIList;

	Release();

#include <iostream>

struct ConstantLight {

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		&m_pDevice,

	auto& attrib = reader.GetAttrib();

	cbDesc.CPUAccessFlags = 0;

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);





}

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	CRect                rect;



{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		KEY_PRESS_SURFACE_DEFAULT,

	txDesc.MipLevels = 1;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_FreeSurface(suf);





	m_pInputLayout = NULL;

	D3D11_BUFFER_DESC vbDesc;

	for (int i = 0; i < vcount; i++)

			}

	auto& shapes = reader.GetShapes();

				WORD index = idx.vertex_index;



		return hr;

		&shapes,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	DXGI_SWAP_CHAIN_DESC scDesc;

				// access to vertex

	{

		&m_pImmediateContext);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



		return hr;

	return;



			//Select surfaces based on key press

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

#ifdef _DEBUG



		return hr;

		//User requests quit

	txDesc.Usage = D3D11_USAGE_DEFAULT;


