		exit(1);



	for (int i = 0; i < vcount; i++)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//Key press surfaces constants

		else if (e.type == SDL_KEYDOWN)



	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

	{

	auto& shapes = reader.GetShapes();

	}

				WORD index = idx.vertex_index;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	for (const auto& shape : shapes)

	return 0;

		pVList[i] = vertexlist[i];



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	SDL_FreeSurface(bmp);

CD3DTest::CD3DTest()

	m_VertexCount = 0;

	cbDesc.StructureByteStride = 0;

	cbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);





	{

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	for (const auto& shape : shapes)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

	m_pTextureView = NULL;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

		D3D11_SDK_VERSION,

			//Select surfaces based on key press

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				break;

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pInputLayout = NULL;

	D3D_FEATURE_LEVEL level;

 */



	WORD* pIList = new WORD[icount];

	D3D11_BUFFER_DESC vbDesc;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);







#include <iostream>

				break;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pSwapChain);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			case SDLK_UP:

		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		KEY_PRESS_SURFACE_TOTAL

	//頂点シェーダー生成

	for (size_t s = 0; s < shapes.size(); s++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	};



	scDesc.SampleDesc.Count = 1;

	if (FAILED(hr))

	{

	return;

		// Loop over faces(polygon)



	ZeroMemory(&dsDesc, sizeof(dsDesc));



			}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.MipLevels = 1;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	SAFE_RELEASE(m_pTextureView);



	m_pTextureView = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	}



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))



	XMStoreFloat4(&clb.material.specular, materialSpecular);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	std::string imagePath = "hello.bmp";



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



/*

				break;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float    farZ = 100.0f;



	txDesc.Width = rect.Width();

				// access to vertex

		{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pTextureView);

	SAFE_RELEASE(m_pVertexBuffer);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

{





	//First we need to start up SDL, and make sure it went ok

	}

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	m_Viewport.MaxDepth = 1.0f;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pLightBuffer = NULL;

	ibDesc.CPUAccessFlags = 0;

	SDL_FreeSurface(bmp);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



{



			case SDLK_UP:

	};







	m_pSwapChain = NULL;



		if (!ret)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;





			default:

	tinyobj::ObjReaderConfig reader_config;



			case SDLK_DOWN:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMaterial material; //物体の質感

	m_pLightBuffer = NULL;

	m_Viewport.Height = (FLOAT)rect.Height();

			default:

	HRESULT              hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

	auto& materials = reader.GetMaterials();

	{

	{





		return hr;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pPixelShader = NULL;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





	if (!reader.ParseFromFile(inputfile, reader_config))

	if (!reader.Warning().empty())

#endif



	for (int i = 0; i < 3; i++)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

struct ConstantMaterial {





	for (int j = 0; j < icount; j++)

	{

	if (FAILED(hr))

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pDepthStencilView);





	txDesc.CPUAccessFlags = 0;

	return hr;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	for (int j = 0; j < icount; j++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	SAFE_RELEASE(m_pRenderTargetView);

	HRESULT              hr;





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

void CD3DTest::Release()



		delete[] pIList;

	if (FAILED(hr))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;







				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



		size_t index_offset = 0;  // インデントのオフセット

	ibDesc.MiscFlags = 0;

	}

	HRESULT              hr;

				break;

	txDesc.MipLevels = 1;

	m_VertexCount = vcount;

	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_DOWN,



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		D3D11_SDK_VERSION,

	m_Viewport.Height = (FLOAT)rect.Height();



	irData.SysMemPitch = 0;

	XMFLOAT4X4 world;

CD3DTest::~CD3DTest()

	Vertex* pVList = new Vertex[vcount];



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		flags,

			case SDLK_DOWN:



	for (size_t s = 0; s < shapes.size(); s++)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.Width = rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

		&attrib,

 * Lesson 1: Hello World!

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			index_offset += num_vertices;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	tinyobj::ObjReader reader;

	SDL_DestroyTexture(tex);



		//User presses a key

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

#include "DirectXManager.h"

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	{

				// access to vertex

	tinyobj::attrib_t attrib;

	txDesc.ArraySize = 1;

}



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	SAFE_RELEASE(m_pTexture);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	//vector<Vertex> vertex_t;



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//深度ステンシルバッファ作成

};

	if (FAILED(hr))

				vertex.push_back(vertex_tmp);

	Vertex* pVList = new Vertex[vcount];



	if (FAILED(hr))

	SDL_Quit();

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

			case SDLK_DOWN:

	UINT offsets = 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;



int main(int, char**)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	m_pLightBuffer = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//深度ステンシルバッファ作成

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{

	if (FAILED(hr))



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	//First we need to start up SDL, and make sure it went ok

#endif

#endif

	auto& materials = reader.GetMaterials();

	m_pSwapChain = NULL;

		&m_pDevice,

	return hr;

	std::vector<tinyobj::shape_t> shapes;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_FreeSurface(bmp);

	{

};

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

};



			}

struct ConstantLightBuffer {

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

	int     vcount = vertexlist.size();





	}*/

	/*

#include <iostream>

	SAFE_RELEASE(m_pInputLayout);

	{

	float    fov = XMConvertToRadians(20.0f);

		NULL,

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	return;

			for (size_t v = 0; v < num_vertices; v++)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))





				break;

	m_Viewport.MinDepth = 0.0f;

		return hr;

	SDL_DestroyTexture(tex);

	cbDesc.CPUAccessFlags = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pRenderTargetView = NULL;





		KEY_PRESS_SURFACE_RIGHT,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	float    fov = XMConvertToRadians(20.0f);

		delete[] pVList;

	D3D_FEATURE_LEVEL level;



	m_pDevice = NULL;

		delete[] pIList;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);

	pBackBuffer->Release();

	}

	return hr;





	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{



	txDesc.ArraySize = 1;



		if (!ret)

				break;

	m_Viewport.MinDepth = 0.0f;

	m_pTexture = NULL;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	txDesc.MipLevels = 1;

};

	SDL_DestroyRenderer(ren);



	std::vector<tinyobj::material_t> materials;

			}

		else if (e.type == SDL_KEYDOWN)

	UINT strides = sizeof(Vertex);

	ConstantMaterial material; //物体の質感

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	SDL_DestroyTexture(tex);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.SampleDesc.Count = 1;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	for (size_t s = 0; s < shapes.size(); s++)

		&shapes,

	//ピクセルシェーダー生成





	txDesc.MiscFlags = 0;

}

	SAFE_RELEASE(m_pDepthStencilTexture);

CD3DTest::CD3DTest()

	vrData.pSysMem = &pVList[0];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

 */

	cbDesc.StructureByteStride = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	{

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

				break;

	UINT flags = 0;



	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

		KEY_PRESS_SURFACE_TOTAL





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.CPUAccessFlags = 0;



	if (FAILED(hr))

	vrData.pSysMem = &pVList[0];

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return 1;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				// access to vertex

	CRect                rect;

	}*/

	vrData.pSysMem = &pVList[0];

	//Create Index

	auto& attrib = reader.GetAttrib();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	delete[] pVList;

	SAFE_RELEASE(m_pDepthStencilView);



};

		{

		return hr;

	HRESULT              hr;

	if (FAILED(hr))

		}



	Release();



	SAFE_RELEASE(m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_Viewport.MaxDepth = 1.0f;

	}

}







		}

	m_VertexCount = vcount;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return 0;

	return 0;

		m_pImmediateContext->ClearState();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

#ifdef _DEBUG

			for (size_t v = 0; v < fv; v++)



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	m_pPixelShader = NULL;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D11_TEXTURE2D_DESC txDesc;

				indexlist.push_back(index);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_Viewport.TopLeftX = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4X4 projection;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.SysMemSlicePitch = 0;

	//Key press surfaces constants

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_DestroyWindow(win);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pSampler);

		}

		{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pSwapChain->Present(0, 0);



		KEY_PRESS_SURFACE_UP,

	scDesc.BufferDesc.Height = rect.Height();



	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

		&m_pDevice,

	SAFE_RELEASE(m_pTexture);

		&error,

}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	//vector<Vertex> vertex_t;

}

		SDL_RenderPresent(ren);

	txDesc.Height = rect.Height();

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

int SEGMENT = 36;

	SDL_DestroyRenderer(ren);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	ConstantMaterial material; //物体の質感

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

}





};

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	bool ret = tinyobj::LoadObj(

	std::string error;

	SDL_Quit();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_Event e;

		&shapes,

	ConstantMaterial material; //物体の質感



		return 1;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.CPUAccessFlags = 0;

	m_pSampler = NULL;





	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	if (FAILED(hr))



		SDL_RenderCopy(ren, tex, NULL, NULL);

{



	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	auto& materials = reader.GetMaterials();

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexShader);

			case SDLK_UP:

		return hr;

		return hr;

	std::string imagePath = "hello.bmp";

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//vector<WORD> index_t;



{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pRenderTargetView = NULL;

	if (FAILED(hr))





	if (FAILED(hr))

	{

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		&level,





		R"(cube.obj)");

	tinyobj::ObjReader reader;

	cbDesc.MiscFlags = 0;



	D3D11_SAMPLER_DESC smpDesc;

	vrData.SysMemPitch = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	vbDesc.MiscFlags = 0;

				// access to vertex

using std::cout; using std::endl;

	tinyobj::attrib_t attrib;





#endif

	float    fov = XMConvertToRadians(20.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);



	scDesc.SampleDesc.Quality = 0;

		SDL_RenderClear(ren);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	txDesc.MipLevels = 1;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



			index_offset += num_vertices;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D_FEATURE_LEVEL level;

	{

	SAFE_RELEASE(m_pLightBuffer);

};





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

#include <SDL.h>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	//Key press surfaces constants

	irData.pSysMem = &pIList[0];

		return hr;

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

CD3DTest::~CD3DTest()

{

	XMFLOAT4 ambient;           //環境(r,g,b)





	SAFE_RELEASE(m_pRenderTargetView);



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

{

struct ConstantLight {

	int     vcount = vertexlist.size();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (int i = 0; i < vcount; i++)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	};

	SAFE_RELEASE(m_pSampler);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	//頂点シェーダー生成

	}

	m_pInputLayout = NULL;

	D3D_FEATURE_LEVEL level;

#include <SDL.h>

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	};

	XMFLOAT4X4 view;

		return hr;



int main(int, char**)



	m_pTextureView = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	//vector<WORD> index_t;

}

	scDesc.BufferDesc.Width = rect.Width();

		}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_Delay(1000);



	//Vertex* pVList = new Vertex[vcount];

{

		delete[] pIList;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pSwapChain = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				tinyobj::real_t ty =

			default:

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



#include <SDL.h>

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		KEY_PRESS_SURFACE_RIGHT,

	{

	ZeroMemory(&txDesc, sizeof(txDesc));



	cbDesc.MiscFlags = 0;

			index_offset += fv;

	SAFE_RELEASE(m_pLightBuffer);

	SAFE_RELEASE(m_pDepthStencilView);

			}

	}

		&m_pSwapChain,



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//深度ステンシルバッファ作成





	}

		&shapes,

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		D3D11_SDK_VERSION,

	::GetClientRect(hwnd, &rect);

	//ピクセルシェーダー生成

				break;

	//定数バッファ作成



	SDL_FreeSurface(bmp);

				break;

	vrData.pSysMem = &pVList[0];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vector<WORD> indexList;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		KEY_PRESS_SURFACE_UP,

	m_Viewport.TopLeftX = 0;

	//Key press surfaces constants



	};

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_IndexCount = 0;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	cbDesc.CPUAccessFlags = 0;

	delete[] pIList;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

HRESULT CD3DTest::Create(HWND hwnd)

	pBackBuffer->Release();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		delete[] pIList;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	cbDesc.StructureByteStride = 0;

	//Clean up our objects and quit



		return hr;

	UINT offsets = 0;

		{

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	//ビューポート設定

				break;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pImmediateContext);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

#endif

	for (size_t s = 0; s < shapes.size(); s++)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pMatrixBuffer);

				tinyobj::real_t ty =

	m_Viewport.TopLeftX = 0;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4         ambient;  //環境光(r,g,b)

}

	SAFE_RELEASE(m_pTextureView);

				break;

	//Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pImmediateContext);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

			case SDLK_LEFT:

	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	UINT flags = 0;

	txDesc.Height = rect.Height();



void CD3DTest::Render()



	scDesc.SampleDesc.Count = 1;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_FreeSurface(bmp);

	{

#endif

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMFLOAT4X4 projection;

	}

		}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.SampleDesc.Quality = 0;



 */

			{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

{

void CD3DTest::Render()

	XMFLOAT4         ambient;  //環境光(r,g,b)



			}

		&scDesc,



	{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.MiscFlags = 0;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	scDesc.SampleDesc.Quality = 0;







		if (!ret)

	SAFE_RELEASE(m_pVertexBuffer);

 */

				break;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				break;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	ConstantMatrixBuffer cmb;

		return 1;

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

			break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	delete[] pIList;

	ConstantLightBuffer clb;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	XMFLOAT4         eyePos;   //視点座標

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

		pVList[i] = vertexlist[i];

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pTextureView = NULL;

		R"(cube.obj)");

	if (FAILED(hr))

			// Loop over vertices in the face.

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::ObjReaderConfig reader_config;

		SDL_RenderClear(ren);

	m_pTexture = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.CPUAccessFlags = 0;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pRenderTargetView);



	enum KeyPressSurfaces

	XMFLOAT4 ambient;           //環境(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				vertex.push_back(vertex_tmp);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.MiscFlags = 0;

		m_pImmediateContext->ClearState();

	int     vcount = vertexlist.size();



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	for (size_t s = 0; s < shapes.size(); s++)



	dsDesc.Texture2D.MipSlice = 0;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		KEY_PRESS_SURFACE_TOTAL

	m_pVertexBuffer = NULL;

	vbDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4X4 view;

	m_Angle += XMConvertToRadians(1.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		SDL_Delay(1000);

	D3D11_TEXTURE2D_DESC txDesc;



	if (FAILED(hr))

	m_Viewport.MinDepth = 0.0f;

	ID3D11Texture2D* pBackBuffer;

	m_Viewport.TopLeftX = 0;

			break;

{

	m_pInputLayout = NULL;

CD3DTest::CD3DTest()

	if (!reader.ParseFromFile(inputfile, reader_config))



	}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	{

	int     vcount = vertexlist.size();



	Vertex* pVList = new Vertex[vcount];



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

using std::cout; using std::endl;





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	cbDesc.MiscFlags = 0;



	m_Viewport.Width = (FLOAT)rect.Width();

	vector<Vertex> vertexlist;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		m_pImmediateContext->ClearState();

	//vector<Vertex> vertex_t;

{



	SAFE_RELEASE(m_pMatrixBuffer);

{



	m_Viewport.MinDepth = 0.0f;

	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	ibDesc.CPUAccessFlags = 0;

	m_Viewport.MinDepth = 0.0f;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		else if (e.type == SDL_KEYDOWN)

		return hr;

int main(int, char**)

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





	cbDesc.StructureByteStride = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

}

}

CD3DTest::CD3DTest()

void CD3DTest::Release()

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		&m_pImmediateContext);

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

			case SDLK_DOWN:

		delete[] pVList;

		//User requests quit

		}

	/*

		return hr;



	//ピクセルシェーダー生成



	HRESULT              hr;

	SAFE_RELEASE(m_pIndexBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pDevice = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		NULL,



	if (m_pImmediateContext)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				// access to vertex

	for (int i = 0; i < 3; i++)

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <iostream>

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pTexture = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

			case SDLK_DOWN:

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };







	{



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4 ambient;           //環境(r,g,b)

};

}
				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				indexlist.push_back(index);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	::GetClientRect(hwnd, &rect);

				vertex.push_back(vertex_tmp);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pPixelShader = NULL;



	vbDesc.MiscFlags = 0;

	m_VertexCount = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	UINT strides = sizeof(Vertex);

}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	m_pDepthStencilTexture = NULL;

		&materials,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ibDesc.StructureByteStride = 0;

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pPixelShader);

				WORD index = idx.vertex_index;

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pVertexShader);

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	vrData.SysMemSlicePitch = 0;

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				WORD index = idx.vertex_index;

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

struct ConstantMatrixBuffer {

	SDL_FreeSurface(suf);

		else if (e.type == SDL_KEYDOWN)

	ConstantMatrixBuffer cmb;

	CRect                rect;

	int     vcount = vertexlist.size();

	m_pSwapChain = NULL;

				break;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.BufferDesc.Height = rect.Height();



	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.OutputWindow = hwnd;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_IndexCount = icount;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		KEY_PRESS_SURFACE_DEFAULT,



		&attrib,

				break;



		return hr;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	if (!reader.Warning().empty())

	irData.pSysMem = &pIList[0];

	tinyobj::ObjReader reader;

		KEY_PRESS_SURFACE_TOTAL

	{

		D3D_DRIVER_TYPE_HARDWARE,

	UINT strides = sizeof(Vertex);

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	while (SDL_PollEvent(&e) != 0)

	{



	SAFE_RELEASE(m_pSwapChain);

	D3D11_SAMPLER_DESC smpDesc;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

	{

	}

				break;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	auto& materials = reader.GetMaterials();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		}

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pTexture);

	tinyobj::attrib_t attrib;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))

		SDL_RenderClear(ren);

		&scDesc,

	m_pPixelShader = NULL;

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

{

	tinyobj::attrib_t attrib;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	for (int i = 0; i < vcount; i++)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		&shapes,

}

		return hr;

	for (int i = 0; i < vcount; i++)

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_Angle += XMConvertToRadians(1.0f);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	std::vector<tinyobj::shape_t> shapes;





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}



		KEY_PRESS_SURFACE_DEFAULT,

	auto& attrib = reader.GetAttrib();



	irData.SysMemSlicePitch = 0;



				vertex.push_back(vertex_tmp);

				// access to vertex

		return hr;

{

		SDL_Delay(1000);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	m_pDepthStencilView = NULL;

	{



		&shapes,

				tinyobj::real_t ty =

	/*



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				vertex.push_back(vertex_tmp);

			default:

		KEY_PRESS_SURFACE_RIGHT,

	for (int i = 0; i < vcount; i++)



		else if (e.type == SDL_KEYDOWN)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	{

 */

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}







};

				break;

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	m_Viewport.MaxDepth = 1.0f;



		return hr;

	SDL_FreeSurface(bmp);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



		}

{

	m_Viewport.TopLeftY = 0;

	//vector<WORD> index_t;

		{

	ConstantMaterial material; //物体の質感

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.pSysMem = &pVList[0];

	//vector<WORD> index_t;



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		cout << "SDL_INIT_ERROR" << endl;

	CRect                rect;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_DestroyTexture(tex);

	m_pDevice = NULL;

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	m_pDepthStencilTexture = NULL;

			for (size_t v = 0; v < fv; v++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

using std::cout; using std::endl;

				indexlist.push_back(index);



		else if (e.type == SDL_KEYDOWN)

	bool ret = tinyobj::LoadObj(



	std::vector<tinyobj::material_t> materials;

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pLightBuffer);

	//Create Index

	D3D11_BUFFER_DESC vbDesc;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4X4 world;

	//First we need to start up SDL, and make sure it went ok



struct ConstantMatrixBuffer {

	//ピクセルシェーダー生成

	WORD* pIList = new WORD[icount];



	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pPixelShader);



	XMFLOAT4X4 world;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4 pos;               //座標(x,y,z)

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		//User requests quit

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//定数バッファ作成

	{

	SDL_DestroyTexture(tex);



	{

	DXGI_SWAP_CHAIN_DESC scDesc;

		KEY_PRESS_SURFACE_DOWN,

		D3D11_SDK_VERSION,

		R"(cube.obj)");

	XMStoreFloat4(&clb.eyePos, eye);



	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

{

		//User requests quit

	m_Viewport.MinDepth = 0.0f;

	HRESULT              hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			case SDLK_RIGHT:

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.BufferCount = 1;

	m_Viewport.MinDepth = 0.0f;

	{

	for (int i = 0; i < vcount; i++)

#endif



	ID3D11Texture2D* pBackBuffer;

	SDL_DestroyWindow(win);

{

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	scDesc.SampleDesc.Quality = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		&shapes,

		D3D_DRIVER_TYPE_HARDWARE,

		SDL_RenderClear(ren);

			}

				vertex.push_back(vertex_tmp);





	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

/*

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		return hr;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	{

		}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pMatrixBuffer = NULL;



	if (FAILED(hr))

}
			}



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	{

	ZeroMemory(&txDesc, sizeof(txDesc));





		pLevels,



	scDesc.BufferDesc.Width = rect.Width();

	if (FAILED(hr))

		}

		return hr;

	m_pTextureView = NULL;

		return hr;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

	XMStoreFloat4(&clb.eyePos, eye);

	return hr;



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	cbDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_DestroyTexture(tex);



	ibDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];





	//定数バッファ作成

	SAFE_RELEASE(m_pTexture);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

struct ConstantLightBuffer {

		KEY_PRESS_SURFACE_DOWN,



	txDesc.MipLevels = 1;



{



	{



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_IndexCount = icount;

	//vector<WORD> index_t;

	UINT strides = sizeof(Vertex);



	m_VertexCount = 0;

		SDL_RenderPresent(ren);

				vertex.push_back(vertex_tmp);

		KEY_PRESS_SURFACE_DOWN,

#endif

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			exit(1);

	irData.SysMemSlicePitch = 0;

{

}

		m_pImmediateContext->ClearState();

	txDesc.MiscFlags = 0;

	if (FAILED(hr))

	if (FAILED(hr))



	ConstantMaterial material; //物体の質感

	{

		{

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;

#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.BufferDesc.Height = rect.Height();

	m_pSwapChain = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&attrib,

		SDL_RenderClear(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



int SEGMENT = 36;

	Release();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pVertexShader);



	if (FAILED(hr))

	//定数バッファ作成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	SAFE_RELEASE(m_pVertexShader);

};

	vbDesc.CPUAccessFlags = 0;

	//深度ステンシルバッファ作成

}
	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4X4 projection;

	if (!reader.Warning().empty())

	cbDesc.StructureByteStride = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	}*/

	WORD* pIList = new WORD[icount];

	ConstantMaterial material; //物体の質感

		&m_pDevice,

	{

	UINT flags = 0;

	if (FAILED(hr))

		}

	{

	WORD   icount = indexList.size();

		//User presses a key

	//頂点シェーダー生成



	ZeroMemory(&txDesc, sizeof(txDesc));

	::GetClientRect(hwnd, &rect);

		R"(cube.obj)");

{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	//First we need to start up SDL, and make sure it went ok

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	bool ret = tinyobj::LoadObj(

				break;

	//Create Index

		}

		1,



	hr = D3D11CreateDeviceAndSwapChain(NULL,



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

			{

		KEY_PRESS_SURFACE_TOTAL

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

	if (FAILED(hr))

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



			}

		KEY_PRESS_SURFACE_UP,

	vbDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		}

	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.CPUAccessFlags = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SDL_DestroyTexture(tex);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			{

	DXGI_SWAP_CHAIN_DESC scDesc;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 specular;          //反射(r,g,b)



		m_pImmediateContext->ClearState();

				break;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	SDL_DestroyTexture(tex);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	SAFE_RELEASE(m_pImmediateContext);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



		if (!ret)

			// Loop over vertices in the face.

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pRenderTargetView);

	SDL_DestroyTexture(tex);



		pIList[j] = indexList[j];

	SDL_Quit();

	m_pInputLayout = NULL;

int SEGMENT = 36;

			default:

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderClear(ren);

	//Vertex* pVList = new Vertex[vcount];

	m_pVertexShader = NULL;



		return hr;

			}

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		SDL_Delay(1000);

				break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.BufferCount = 1;

	//深度ステンシルバッファ作成

		D3D11_SDK_VERSION,

		//User requests quit

	//vector<Vertex> vertex_t;



		}

	if (!reader.ParseFromFile(inputfile, reader_config))

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))



	//頂点シェーダー生成

	WORD* pIList = new WORD[icount];



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyTexture(tex);

	};

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	cbDesc.MiscFlags = 0;

{





	SDL_FreeSurface(suf);

	cbDesc.StructureByteStride = 0;

	vbDesc.MiscFlags = 0;

}

			case SDLK_UP:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,



	txDesc.Width = rect.Width();

		return hr;

	SAFE_RELEASE(m_pImmediateContext);

	Vertex* pVList = new Vertex[vcount];



	//テクスチャ読み込み

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

#endif

	txDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	scDesc.Windowed = TRUE;

};

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (FAILED(hr))

}



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.SampleDesc.Count = 1;

			case SDLK_LEFT:

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

struct ConstantLightBuffer {

	txDesc.SampleDesc.Quality = 0;

	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

			case SDLK_RIGHT:

	//頂点バッファ作成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pRenderTargetView = NULL;

	delete[] pIList;

		&m_pSwapChain,

				indexlist.push_back(index);

	//定数バッファ作成

		flags,

	{

#include <iostream>

	XMFLOAT4         eyePos;   //視点座標

	SDL_DestroyTexture(tex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

struct ConstantLight {

		return hr;

{

	}*/

		}

	ID3D11Texture2D* pBackBuffer;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				vertex.push_back(vertex_tmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pRenderTargetView = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

			case SDLK_RIGHT:

	ibDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成

		&error,

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//ビューポート設定

	SDL_Quit();

{

	D3D_FEATURE_LEVEL level;

	}

	m_pLightBuffer = NULL;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	};

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

#include <iostream>

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		return 1;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	vrData.SysMemPitch = 0;

	D3D11_SAMPLER_DESC smpDesc;

	XMFLOAT4         ambient;  //環境光(r,g,b)



			switch (e.key.keysym.sym)

	txDesc.SampleDesc.Quality = 0;

		cout << "SDL_INIT_ERROR" << endl;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				WORD index = idx.vertex_index;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

			// Loop over vertices in the face.

	auto& shapes = reader.GetShapes();

	pBackBuffer->Release();

}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMFLOAT4 pos;               //座標(x,y,z)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		if (!ret)

	scDesc.BufferDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_RIGHT,





		return hr;

	//ピクセルシェーダー生成

		return hr;





	vector<WORD> indexList;

void CD3DTest::Render()

	m_pDepthStencilTexture = NULL;



	bool ret = tinyobj::LoadObj(



	for (int i = 0; i < 3; i++)

	CRect                rect;



	std::string inputfile = "test.obj";

			{

		if (e.type == SDL_QUIT)

	SDL_DestroyWindow(win);

	//深度ステンシルバッファ作成

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D11_SAMPLER_DESC smpDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

};

		KEY_PRESS_SURFACE_UP,

	{

	m_pDepthStencilView = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	m_VertexCount = 0;

{

				// access to vertex

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	scDesc.BufferCount = 1;

		}



	SAFE_RELEASE(m_pImmediateContext);

		{

		else if (e.type == SDL_KEYDOWN)

#include "DirectXManager.h"

	SDL_DestroyRenderer(ren);

	m_Viewport.MaxDepth = 1.0f;



	irData.pSysMem = &pIList[0];

	SDL_Quit();

	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	int     vcount = vertexlist.size();





	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pImmediateContext);

	::GetClientRect(hwnd, &rect);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



			index_offset += num_vertices;

		D3D_DRIVER_TYPE_HARDWARE,

	SAFE_RELEASE(m_pTexture);

	SAFE_RELEASE(m_pVertexBuffer);

			}



	if (FAILED(hr))

		D3D11_SDK_VERSION,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		return hr;

	UINT offsets = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4(&clb.eyePos, eye);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	bool ret = tinyobj::LoadObj(

	return 0;

{



				indexlist.push_back(index);



	return 0;

	txDesc.SampleDesc.Quality = 0;

		return hr;

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	scDesc.BufferDesc.Height = rect.Height();

}





	//頂点シェーダー生成

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	{

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	for (int i = 0; i < 3; i++)

		SDL_RenderPresent(ren);

	Release();

	txDesc.CPUAccessFlags = 0;

			case SDLK_DOWN:

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	enum KeyPressSurfaces

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		SDL_RenderClear(ren);



		{

	ZeroMemory(&txDesc, sizeof(txDesc));

	Release();

	SAFE_RELEASE(m_pPixelShader);

				break;

	m_Viewport.Height = (FLOAT)rect.Height();

			index_offset += num_vertices;

		pVList[i] = vertexlist[i];

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			}

		KEY_PRESS_SURFACE_DOWN,

	D3D11_TEXTURE2D_DESC txDesc;

struct ConstantLightBuffer {

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		//User requests quit

	D3D11_BUFFER_DESC cbDesc;

	scDesc.SampleDesc.Quality = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();

	txDesc.Height = rect.Height();

				indexlist.push_back(idx.vertex_index);

	m_Angle += XMConvertToRadians(1.0f);

int main(int, char**)



		if (!reader.Error().empty())

	return hr;



	SAFE_RELEASE(m_pTextureView);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pSwapChain = NULL;

	float    nearZ = 0.1f;

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	//ピクセルシェーダー生成

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			//Select surfaces based on key press

	m_Viewport.Width = (FLOAT)rect.Width();



	{

	SAFE_RELEASE(m_pRenderTargetView);





}
	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

		SDL_Delay(1000);

		return hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<Vertex> vertexlist;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	m_pDepthStencilView = NULL;

	if (FAILED(hr))

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vrData.SysMemPitch = 0;

	if (FAILED(hr))



	auto& materials = reader.GetMaterials();

		return hr;



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





};

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pDepthStencilTexture);

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	/*

			}

	std::vector<tinyobj::shape_t> shapes;

	if (!reader.Warning().empty())

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Quit();

}
	SAFE_RELEASE(m_pVertexBuffer);

	{



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	//Key press surfaces constants

	delete[] pIList;





};

		{

	/*

{

	XMFLOAT4X4 world;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		}



	/*

		delete[] pIList;

	txDesc.MipLevels = 1;

	SAFE_RELEASE(m_pLightBuffer);

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	};

	SDL_DestroyRenderer(ren);

	m_pDevice = NULL;

	dsDesc.Format = txDesc.Format;

		R"(cube.obj)");

	vbDesc.StructureByteStride = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SAFE_RELEASE(m_pVertexShader);

	cbDesc.StructureByteStride = 0;

	cbDesc.MiscFlags = 0;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

};

	XMFLOAT4         eyePos;   //視点座標

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





	delete[] pVList;

	vbDesc.CPUAccessFlags = 0;

	vrData.pSysMem = &pVList[0];

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pPixelShader);

		R"(cube.obj)");

	}

	float    nearZ = 0.1f;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				tinyobj::real_t ty =

				vertex.push_back(vertex_tmp);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	dsDesc.Texture2D.MipSlice = 0;

	m_pPixelShader = NULL;

CD3DTest::CD3DTest()

	WORD   icount = indexList.size();

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pTextureView);



	scDesc.BufferDesc.Width = rect.Width();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		size_t index_offset = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	SDL_DestroyWindow(win);

	if (!error.empty())



	SAFE_RELEASE(m_pImmediateContext);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SDL_Quit();



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4         eyePos;   //視点座標



	pBackBuffer->Release();



		{

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	{

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	vrData.SysMemPitch = 0;



	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

};

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				break;

	for (int j = 0; j < icount; j++)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return 0;

CD3DTest::CD3DTest()

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	irData.pSysMem = &pIList[0];

	SDL_DestroyTexture(tex);

	m_pTextureView = NULL;

		SDL_Delay(1000);





	//Clean up our objects and quit

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	//Vertex* pVList = new Vertex[vcount];

CD3DTest::CD3DTest()

				break;

		&materials,

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



		size_t index_offset = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	ID3D11Texture2D* pBackBuffer;

	txDesc.Width = rect.Width();

	cbDesc.CPUAccessFlags = 0;

			// Loop over vertices in the face.

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

#include <SDL.h>

	if (!reader.Warning().empty())

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();

		D3D11_SDK_VERSION,

	SDL_DestroyTexture(tex);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			case SDLK_LEFT:





	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

struct ConstantMatrixBuffer {

	m_pDepthStencilView = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//インデックスバッファ作成

		SDL_Delay(1000);

	vector<WORD> indexList;

}

		}

{

		}

		if (e.type == SDL_QUIT)

			{

	txDesc.CPUAccessFlags = 0;

	{

	vbDesc.CPUAccessFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	std::string error;

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext = NULL;

			//Select surfaces based on key press

	m_pImmediateContext = NULL;

	HRESULT              hr;

{

	}

	//ピクセルシェーダー生成

		cout << "SDL_INIT_ERROR" << endl;



	m_Angle += XMConvertToRadians(1.0f);

	m_pRenderTargetView = NULL;

		{

	tinyobj::ObjReader reader;

	m_pTexture = NULL;

			exit(1);



	CRect                rect;

	if (FAILED(hr))

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				// access to vertex

	scDesc.BufferCount = 1;

#include "DirectXManager.h"

			case SDLK_UP:

	{

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	return 0;

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	auto& materials = reader.GetMaterials();

	//vector<WORD> index_t;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

		return hr;

		NULL,

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext = NULL;

	float    farZ = 100.0f;

	txDesc.Height = rect.Height();





	XMFLOAT4 attenuate;         //減衰(a,b,c)



	while (SDL_PollEvent(&e) != 0)

	txDesc.Height = rect.Height();





		if (e.type == SDL_QUIT)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	if (FAILED(hr))

	for (size_t s = 0; s < shapes.size(); s++)

		else if (e.type == SDL_KEYDOWN)

	LoadObj(vertexlist, indexList);

		return hr;



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SAFE_RELEASE(m_pVertexShader);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		exit(1);

	if (FAILED(hr))

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				tinyobj::real_t tx =



		SDL_Delay(1000);

	ConstantLightBuffer clb;

	m_pTexture = NULL;

	for (int i = 0; i < 3; i++)

		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderClear(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	return;

				// access to vertex



	auto& attrib = reader.GetAttrib();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok





struct ConstantLight {

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D_FEATURE_LEVEL level;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

}

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

		R"(cube.obj)");

	Release();

	ConstantMatrixBuffer cmb;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	XMFLOAT4X4 projection;

	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;

void CD3DTest::Release()

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pInputLayout);



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_VertexCount = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



				tinyobj::real_t ty =



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	D3D11_TEXTURE2D_DESC txDesc;

	SAFE_RELEASE(m_pTextureView);

	LoadObj(vertexlist, indexList);

	vector<WORD> indexList;

};

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.CPUAccessFlags = 0;

			switch (e.key.keysym.sym)



	txDesc.ArraySize = 1;



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	D3D11_SUBRESOURCE_DATA irData;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	UINT flags = 0;

	{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pTexture);

	if (FAILED(hr))

	tinyobj::attrib_t attrib;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		return hr;

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pDevice);

{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	SDL_Event e;

		SDL_Delay(1000);

	tinyobj::ObjReader reader;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		return hr;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

			for (size_t v = 0; v < fv; v++)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		pIList[j] = indexList[j];





		&m_pDevice,

	//vector<WORD> index_t;



	{





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//Clean up our objects and quit

	//定数バッファ作成

	//頂点レイアウト作成

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			// Loop over vertices in the face.

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	vbDesc.StructureByteStride = 0;

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	vbDesc.CPUAccessFlags = 0;



	txDesc.MipLevels = 1;

}



	delete[] pIList;

	float    fov = XMConvertToRadians(20.0f);

	m_pDevice = NULL;

	int     vcount = vertexlist.size();

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	auto& shapes = reader.GetShapes();

		return hr;

	{

#include <SDL.h>

}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



		{

				break;

		}

	return;

	m_pTextureView = NULL;

	ID3D11Texture2D* pBackBuffer;



				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	return;

	if (FAILED(hr))

			// Loop over vertices in the face.

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	Release();



struct ConstantMatrixBuffer {

	cbDesc.StructureByteStride = 0;

	float    fov = XMConvertToRadians(20.0f);

	if (m_pImmediateContext)

struct ConstantMaterial {

	{

int SEGMENT = 36;

	//頂点シェーダー生成



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				vertex.push_back(vertex_tmp);

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4         eyePos;   //視点座標

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.CPUAccessFlags = 0;

	{



	{

	m_IndexCount = icount;

}





				tinyobj::real_t ty =

	SAFE_RELEASE(m_pTexture);

	UINT flags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return hr;

	SDL_Quit();

	m_pSampler = NULL;

	{

	m_pLightBuffer = NULL;



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	//インデックスバッファ作成

	LoadObj(vertexlist, indexList);

	XMFLOAT4X4 view;

	//Vertex* pVList = new Vertex[vcount];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (FAILED(hr))

using std::cout; using std::endl;

	std::vector<tinyobj::shape_t> shapes;

		KEY_PRESS_SURFACE_DEFAULT,



		{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		// Loop over faces(polygon)

		delete[] pVList;

		if (!reader.Error().empty())

 * Lesson 1: Hello World!



		if (e.type == SDL_QUIT)

		return hr;







	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





		D3D_DRIVER_TYPE_HARDWARE,



	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	txDesc.Height = rect.Height();

int main(int, char**)

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	scDesc.Windowed = TRUE;

		&m_pImmediateContext);

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);









		return hr;



			break;

#include <iostream>

	m_pIndexBuffer = NULL;

	CRect                rect;

	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			index_offset += fv;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		SDL_Delay(1000);



	SDL_Quit();

		}

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

};

#define TINYOBJLOADER_IMPLEMENTATION



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return hr;

	m_pSwapChain = NULL;

	//Clean up our objects and quit

			}

struct ConstantLightBuffer {

	m_pRenderTargetView = NULL;

	std::string imagePath = "hello.bmp";





	ConstantLight    pntLight; //点光源

	vector<Vertex> vertexlist;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))



int SEGMENT = 36;

		return hr;

	//ビューポート設定

/*

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	tinyobj::ObjReader reader;

	UINT offsets = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		exit(1);

	m_pTexture = NULL;

			index_offset += num_vertices;

		return hr;

		}

		KEY_PRESS_SURFACE_UP,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	txDesc.MiscFlags = 0;


