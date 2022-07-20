	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

#include <iostream>

	m_pSwapChain->Present(0, 0);

		// Loop over faces(polygon)

		return hr;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pVertexShader);

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



};

			break;

				break;

		&error,

	D3D11_SUBRESOURCE_DATA vrData;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);





	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



			switch (e.key.keysym.sym)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//Key press surfaces constants

	txDesc.Width = rect.Width();



}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SDL_DestroyWindow(win);

 */

	scDesc.Windowed = TRUE;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	cbDesc.StructureByteStride = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (FAILED(hr))



struct ConstantMatrixBuffer {



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		return hr;

	vbDesc.StructureByteStride = 0;

	}

	for (int i = 0; i < vcount; i++)

		{

		return hr;



			int num_vertices = shape.mesh.num_face_vertices[f];

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	{

		KEY_PRESS_SURFACE_DEFAULT,



	tinyobj::ObjReader reader;



		return hr;



	cbDesc.CPUAccessFlags = 0;

	SDL_Quit();

	//頂点バッファ作成



	/*

struct ConstantMaterial {

		//User requests quit

	}



{



		return hr;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	XMFLOAT4X4 world;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");





	}





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pSwapChain);



	WORD   icount = indexList.size();

	}



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (!error.empty())

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Create Index

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		SDL_RenderPresent(ren);

				break;

			{

	auto& shapes = reader.GetShapes();

	D3D_FEATURE_LEVEL level;



	m_pTextureView = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	Release();

	float    fov = XMConvertToRadians(20.0f);

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))

	{

{

	m_pSwapChain = NULL;



	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pTexture);

	m_Viewport.TopLeftY = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#endif

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

}





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&shapes,

#include <iostream>

		{

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		pLevels,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	auto& materials = reader.GetMaterials();

}





	txDesc.Usage = D3D11_USAGE_DEFAULT;

			default:

	txDesc.Width = rect.Width();

	vector<WORD> indexList;

		pIList[j] = indexList[j];

	D3D11_TEXTURE2D_DESC txDesc;





			switch (e.key.keysym.sym)

	return 0;

/*

	m_pMatrixBuffer = NULL;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	DXGI_SWAP_CHAIN_DESC scDesc;



	UINT offsets = 0;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	auto& materials = reader.GetMaterials();



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//First we need to start up SDL, and make sure it went ok

	//定数バッファ作成

int main(int, char**)

	{

	SAFE_RELEASE(m_pImmediateContext);

		&m_pSwapChain,

	SAFE_RELEASE(m_pVertexShader);

	D3D11_SUBRESOURCE_DATA vrData;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		SDL_RenderClear(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4 diffuse;           //拡散(r,g,b)



		SDL_Delay(1000);

	//頂点レイアウト作成

	auto& materials = reader.GetMaterials();





		delete[] pIList;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//深度ステンシルバッファ作成

	scDesc.BufferDesc.Height = rect.Height();

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;



	cbDesc.CPUAccessFlags = 0;



				break;



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	std::vector<tinyobj::material_t> materials;

{

			int num_vertices = shape.mesh.num_face_vertices[f];

		NULL,





	D3D11_SUBRESOURCE_DATA vrData;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	scDesc.BufferCount = 1;

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		//User requests quit

			//Select surfaces based on key press

	txDesc.SampleDesc.Quality = 0;

	SDL_DestroyWindow(win);

	SDL_DestroyTexture(tex);

	}

	if (FAILED(hr))

 * Lesson 1: Hello World!

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



struct ConstantMatrixBuffer {

	auto& materials = reader.GetMaterials();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

	if (FAILED(hr))

}
	XMFLOAT4 specular;          //反射(r,g,b)

		}

	ID3D11Texture2D* pBackBuffer;





			case SDLK_LEFT:

			for (size_t v = 0; v < fv; v++)

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pTextureView = NULL;

	//ビューポート設定

			case SDLK_RIGHT:

		R"(cube.obj)");

	auto& attrib = reader.GetAttrib();

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

#include <iostream>

				break;



	cbDesc.MiscFlags = 0;

		if (e.type == SDL_QUIT)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		{

		pIList[j] = indexList[j];

	txDesc.Height = rect.Height();

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	{

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}

		{

	UINT offsets = 0;

	SAFE_RELEASE(m_pLightBuffer);

	{

		return hr;

#include <iostream>

	if (FAILED(hr))

	};



	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Clean up our objects and quit

	{

				break;

	D3D_FEATURE_LEVEL level;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//テクスチャ読み込み

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

int main(int, char**)

	m_pLightBuffer = NULL;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pPixelShader);

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_FreeSurface(suf);



int main(int, char**)

}
}

	SAFE_RELEASE(m_pInputLayout);



	/*

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//頂点シェーダー生成

		size_t index_offset = 0;



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	dsDesc.Texture2D.MipSlice = 0;

	cbDesc.CPUAccessFlags = 0;

	//テクスチャ読み込み

	//ピクセルシェーダー生成

	SAFE_RELEASE(m_pDepthStencilTexture);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//テクスチャ読み込み

		return hr;

	m_pDepthStencilView = NULL;

	if (FAILED(hr))





	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	auto& materials = reader.GetMaterials();

	delete[] pIList;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//ビューポート設定

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				vertex.push_back(vertex_tmp);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	SDL_Event e;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pSwapChain = NULL;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		SDL_RenderClear(ren);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

	m_pDevice = NULL;

	::GetClientRect(hwnd, &rect);

		delete[] pVList;



	{

HRESULT CD3DTest::Create(HWND hwnd)

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		pVList[i] = vertexlist[i];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		delete[] pIList;

	SAFE_RELEASE(m_pVertexShader);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	D3D11_BUFFER_DESC ibDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	//First we need to start up SDL, and make sure it went ok



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	}

	}

}
				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pInputLayout);

		{

	Vertex* pVList = new Vertex[vcount];

#include <iostream>

			int num_vertices = shape.mesh.num_face_vertices[f];

	}

{

		}

	m_pSampler = NULL;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pTextureView);



{



	SAFE_RELEASE(m_pTextureView);

				// access to vertex

	m_pSampler = NULL;

		KEY_PRESS_SURFACE_DOWN,

				WORD index = idx.vertex_index;

	XMFLOAT4         eyePos;   //視点座標

	m_pDevice = NULL;

		return hr;

	//頂点バッファ作成

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		{



	D3D11_TEXTURE2D_DESC txDesc;

	//定数バッファ作成



	std::vector<tinyobj::material_t> materials;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



				// access to vertex

	Release();



		pLevels,

		return hr;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		SDL_Delay(1000);

		&m_pImmediateContext);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

int SEGMENT = 36;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		return hr;

	return 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);





	ibDesc.MiscFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	}

		}



	scDesc.BufferDesc.Width = rect.Width();

			case SDLK_DOWN:



			}

	}



	auto& attrib = reader.GetAttrib();

	//ピクセルシェーダー生成

};





		}





		KEY_PRESS_SURFACE_RIGHT,

	//テクスチャ読み込み

	//頂点レイアウト作成

	scDesc.BufferDesc.Width = rect.Width();

		&m_pDevice,

	SAFE_RELEASE(m_pImmediateContext);



	m_Viewport.TopLeftX = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pVertexBuffer = NULL;

	SDL_FreeSurface(bmp);

	vector<Vertex> vertexlist;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_Quit();

	Release();

	txDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;

				break;



	tinyobj::attrib_t attrib;



		SDL_RenderClear(ren);



		return hr;

	//ピクセルシェーダー生成

#include <iostream>

#include <iostream>

		return hr;

				tinyobj::real_t ty =

void CD3DTest::Render()

	m_Viewport.TopLeftX = 0;







	m_VertexCount = vcount;

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	irData.pSysMem = &pIList[0];

		if (!reader.Error().empty())

	scDesc.BufferCount = 1;



	scDesc.Windowed = TRUE;

			for (size_t v = 0; v < num_vertices; v++)

	}

	m_pDepthStencilView = NULL;

		return hr;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



int main(int, char**)

	ibDesc.MiscFlags = 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	SDL_Quit();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	tinyobj::ObjReaderConfig reader_config;

			{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };



	std::vector<tinyobj::shape_t> shapes;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				break;

	m_pLightBuffer = NULL;

	if (FAILED(hr))

			}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				break;

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	return 0;

				vertex.push_back(vertex_tmp);

		&attrib,

				indexlist.push_back(idx.vertex_index);

	UINT offsets = 0;



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		// Loop over faces(polygon)

	SDL_DestroyTexture(tex);

	return 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	//First we need to start up SDL, and make sure it went ok

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	dsDesc.Format = txDesc.Format;





	{

	}

	SAFE_RELEASE(m_pTexture);

	//Key press surfaces constants

	cbDesc.StructureByteStride = 0;

#include <SDL.h>



	//頂点レイアウト作成

	ConstantLightBuffer clb;

			case SDLK_LEFT:





	tinyobj::ObjReaderConfig reader_config;



	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pMatrixBuffer);



	m_pDepthStencilTexture = NULL;



	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pTexture = NULL;

	ConstantLight    pntLight; //点光源

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	//頂点バッファ作成

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	if (m_pImmediateContext)

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		return hr;

	XMFLOAT4         eyePos;   //視点座標

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	D3D11_SUBRESOURCE_DATA vrData;

	{

	bool ret = tinyobj::LoadObj(

		SDL_Delay(1000);

	//テクスチャ読み込み

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				indexlist.push_back(idx.vertex_index);

		}





			}

				WORD index = idx.vertex_index;

	m_pSwapChain = NULL;

	Release();



	if (FAILED(hr))



	//頂点レイアウト作成



	float    aspect = m_Viewport.Width / m_Viewport.Height;



	if (FAILED(hr))

			{

	m_pVertexShader = NULL;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	std::string inputfile = "test.obj";



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//vector<WORD> index_t;

				tinyobj::real_t tx =

	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				vertex.push_back(vertex_tmp);



	m_pSwapChain = NULL;

	}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



			case SDLK_UP:

		SDL_RenderPresent(ren);

	tinyobj::ObjReader reader;

	};

	if (FAILED(hr))



	for (int i = 0; i < vcount; i++)

	ConstantMaterial material; //物体の質感

	}

	CRect                rect;

	m_pLightBuffer = NULL;

{

	}*/



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			{



		cout << "SDL_INIT_ERROR" << endl;

	{

		&error,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	{

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

			//Select surfaces based on key press

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pDepthStencilTexture = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			case SDLK_RIGHT:

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

};

	XMFLOAT4X4 world;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	txDesc.MiscFlags = 0;



	tinyobj::attrib_t attrib;





	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];





			//Select surfaces based on key press

	//テクスチャ読み込み



	SAFE_RELEASE(m_pVertexBuffer);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	{

	SDL_DestroyRenderer(ren);

		exit(1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	//頂点バッファ作成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	XMStoreFloat4(&clb.eyePos, eye);

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		}

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pPixelShader);

}



	irData.SysMemPitch = 0;

	m_pTextureView = NULL;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderPresent(ren);

	UINT flags = 0;

			{

	cbDesc.MiscFlags = 0;

	vbDesc.StructureByteStride = 0;

	CRect                rect;

	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	scDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pSampler);



using std::cout; using std::endl;

 * Lesson 1: Hello World!

	m_pVertexBuffer = NULL;

}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	m_VertexCount = vcount;

	if (FAILED(hr))

			for (size_t v = 0; v < num_vertices; v++)

		R"(cube.obj)");



	SDL_FreeSurface(suf);

	//定数バッファ作成

		{

	m_pInputLayout = NULL;



	{

	XMFLOAT4         eyePos;   //視点座標



	std::string imagePath = "hello.bmp";

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	HRESULT              hr;

		SDL_RenderClear(ren);

	ibDesc.MiscFlags = 0;



	int     vcount = vertexlist.size();

	return hr;

	if (FAILED(hr))

 */



	//ピクセルシェーダー生成







{

	SDL_FreeSurface(bmp);

};

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		&error,

		return hr;

	txDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

};

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;





	SAFE_RELEASE(m_pSwapChain);

		return hr;

	D3D11_SAMPLER_DESC smpDesc;

	vbDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ID3D11Texture2D* pBackBuffer;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	cbDesc.StructureByteStride = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];







		m_pImmediateContext->ClearState();

		return hr;

	if (!reader.Warning().empty())

	cbDesc.StructureByteStride = 0;

		}

	//vector<WORD> index_t;

	m_pSampler = NULL;

			index_offset += fv;

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 specular;          //反射(r,g,b)



	XMFLOAT4 pos;               //座標(x,y,z)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDevice = NULL;

	cbDesc.StructureByteStride = 0;



	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))

}

	std::string imagePath = "hello.bmp";

	//Key press surfaces constants



	}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t tx =

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_SUBRESOURCE_DATA vrData;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	//vector<WORD> index_t;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		KEY_PRESS_SURFACE_RIGHT,

	std::string error;

	D3D11_SUBRESOURCE_DATA vrData;

	irData.SysMemSlicePitch = 0;

/*

	std::vector<tinyobj::shape_t> shapes;

	txDesc.Width = rect.Width();

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pTextureView = NULL;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	SAFE_RELEASE(m_pIndexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	SAFE_RELEASE(m_pDevice);







	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pImmediateContext);





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	cbDesc.MiscFlags = 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);





	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	LoadObj(vertexlist, indexList);

};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	XMStoreFloat4(&clb.ambient, lightAmbient);

		&error,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}

			// Loop over vertices in the face.

	m_pPixelShader = NULL;

		flags,

		KEY_PRESS_SURFACE_UP,





	D3D11_SUBRESOURCE_DATA vrData;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



#include <iostream>

	reader_config.mtl_search_path = "./"; // Path to material files

	auto& attrib = reader.GetAttrib();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	bool ret = tinyobj::LoadObj(

			{





	txDesc.MipLevels = 1;

		{

	cbDesc.MiscFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	std::string imagePath = "hello.bmp";

		}





	XMFLOAT4 ambient;           //環境(r,g,b)

	ZeroMemory(&txDesc, sizeof(txDesc));

	//インデックスバッファ作成



	std::string error;

	return 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	cbDesc.CPUAccessFlags = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];





		//User requests quit

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





				indexlist.push_back(idx.vertex_index);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





	{

	//Vertex* pVList = new Vertex[vcount];

#ifdef _DEBUG

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				indexlist.push_back(index);





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		&attrib,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	cbDesc.CPUAccessFlags = 0;

			}

	SAFE_RELEASE(m_pDevice);

	{

	{

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (FAILED(hr))

	SAFE_RELEASE(m_pVertexShader);





	SAFE_RELEASE(m_pDepthStencilView);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

			break;

				vertex.push_back(vertex_tmp);

	m_pSwapChain->Present(0, 0);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	scDesc.BufferDesc.Width = rect.Width();



	//Key press surfaces constants

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	// Loop over shapes

		NULL,

	std::string inputfile = "test.obj";

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	D3D11_TEXTURE2D_DESC txDesc;

			break;

	SDL_DestroyRenderer(ren);

#define TINYOBJLOADER_IMPLEMENTATION

	vector<Vertex> vertexlist;

HRESULT CD3DTest::Create(HWND hwnd)

	//頂点バッファ作成

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_IndexCount = icount;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

	auto& materials = reader.GetMaterials();

	auto& materials = reader.GetMaterials();

	m_Angle += XMConvertToRadians(1.0f);

	txDesc.SampleDesc.Quality = 0;



{

	if (FAILED(hr))

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_TOTAL

			for (size_t v = 0; v < num_vertices; v++)

HRESULT CD3DTest::Create(HWND hwnd)

#include <iostream>

		//User presses a key

}

	SDL_DestroyRenderer(ren);

			exit(1);

	return hr;



	//頂点レイアウト作成

				indexlist.push_back(index);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	std::string inputfile = "test.obj";

			}

		SDL_RenderClear(ren);

	if (FAILED(hr))



void CD3DTest::Render()

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		//User presses a key



	return;

	m_pDepthStencilTexture = NULL;

void CD3DTest::Render()

	tinyobj::attrib_t attrib;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	{

	txDesc.MiscFlags = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



			}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		}

			{

		KEY_PRESS_SURFACE_DOWN,

struct ConstantLightBuffer {

	txDesc.SampleDesc.Count = 1;

	vrData.SysMemSlicePitch = 0;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	std::string imagePath = "hello.bmp";

	ConstantMaterial material; //物体の質感

	m_pDepthStencilView = NULL;

		cout << "SDL_INIT_ERROR" << endl;

	// Loop over shapes

			// Loop over vertices in the face.

{

HRESULT CD3DTest::Create(HWND hwnd)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_BUFFER_DESC vbDesc;

	D3D11_BUFFER_DESC ibDesc;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

		if (!reader.Error().empty())

		flags,

	SDL_FreeSurface(suf);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pSwapChain);

	m_Viewport.TopLeftY = 0;

		return hr;

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SDL_DestroyWindow(win);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.OutputWindow = hwnd;

	m_pIndexBuffer = NULL;

		else if (e.type == SDL_KEYDOWN)

	auto& materials = reader.GetMaterials();



	tinyobj::ObjReader reader;

	return 0;

void CD3DTest::Render()

	m_Viewport.Width = (FLOAT)rect.Width();

	SDL_DestroyRenderer(ren);



	XMFLOAT4X4 projection;

	m_Viewport.TopLeftX = 0;

	tinyobj::attrib_t attrib;

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		return hr;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.MiscFlags = 0;

	}

	m_pDepthStencilView = NULL;





	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	D3D_FEATURE_LEVEL level;



};

	m_pRenderTargetView = NULL;



			}

	ConstantLight    pntLight; //点光源

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		exit(1);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



		&m_pSwapChain,

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





{



		&attrib,

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pTextureView);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

#include "DirectXManager.h"

	vbDesc.MiscFlags = 0;



			case SDLK_RIGHT:

		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	D3D11_BUFFER_DESC ibDesc;

			// Loop over vertices in the face.

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				vertex.push_back(vertex_tmp);

	XMFLOAT4X4 world;

struct ConstantLight {

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))



	return 0;

	}

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

int main(int, char**)

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pIndexBuffer);





		return hr;

	txDesc.Height = rect.Height();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			case SDLK_LEFT:



using std::cout; using std::endl;

				vertex.push_back(vertex_tmp);

	txDesc.MipLevels = 1;

	m_pPixelShader = NULL;

	//vector<WORD> index_t;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	float    farZ = 100.0f;



				vertex.push_back(vertex_tmp);

	m_Angle += XMConvertToRadians(1.0f);

	SDL_DestroyRenderer(ren);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	auto& shapes = reader.GetShapes();

	//Clean up our objects and quit



	//First we need to start up SDL, and make sure it went ok

		&m_pImmediateContext);

	XMFLOAT4X4 world;

	HRESULT              hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)

#include <SDL.h>

	LoadObj(vertexlist, indexList);

	SDL_FreeSurface(suf);

		}

	SAFE_RELEASE(m_pDepthStencilView);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



{

};

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



 * Lesson 1: Hello World!

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

	WORD* pIList = new WORD[icount];

	scDesc.SampleDesc.Quality = 0;



	{

	::GetClientRect(hwnd, &rect);

			exit(1);

	delete[] pVList;

	float    fov = XMConvertToRadians(20.0f);



		SDL_RenderPresent(ren);



			break;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			int num_vertices = shape.mesh.num_face_vertices[f];

	SAFE_RELEASE(m_pDevice);



	if (FAILED(hr))

	m_pSwapChain = NULL;

			case SDLK_LEFT:

	pBackBuffer->Release();

		{

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pVertexShader = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	//頂点シェーダー生成

		&shapes,



	}

	m_VertexCount = vcount;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Vertex* pVList = new Vertex[vcount];

	vbDesc.StructureByteStride = 0;

	m_VertexCount = 0;

	m_pSampler = NULL;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



			case SDLK_LEFT:

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	float    farZ = 100.0f;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pDevice = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&scDesc,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	vbDesc.MiscFlags = 0;

			default:

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	if (FAILED(hr))

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&level,

	UINT strides = sizeof(Vertex);



		return hr;

			case SDLK_DOWN:

	m_Viewport.TopLeftX = 0;



void CD3DTest::Release()

	m_pDepthStencilTexture = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_BUFFER_DESC cbDesc;



		return hr;

			{

	m_pVertexBuffer = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

{

	XMFLOAT4X4 world;

};

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	LoadObj(vertexlist, indexList);

	int     vcount = vertexlist.size();

	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

#include "DirectXManager.h"

int main(int, char**)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			{



	return;

}

		pLevels,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

			case SDLK_RIGHT:

	SDL_DestroyRenderer(ren);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	D3D11_BUFFER_DESC cbDesc;

		return hr;

	XMFLOAT4 pos;               //座標(x,y,z)



	m_Viewport.Height = (FLOAT)rect.Height();

	dsDesc.Texture2D.MipSlice = 0;

int main(int, char**)

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;

	dsDesc.Texture2D.MipSlice = 0;

	if (!reader.Warning().empty())

int main(int, char**)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vrData.SysMemSlicePitch = 0;

		&scDesc,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	XMFLOAT4X4 projection;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	ibDesc.StructureByteStride = 0;

	tinyobj::attrib_t attrib;



	vrData.SysMemPitch = 0;

	std::vector<tinyobj::shape_t> shapes;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	}*/

	m_Angle += XMConvertToRadians(1.0f);





	if (!error.empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	std::string imagePath = "hello.bmp";

	m_pRenderTargetView = NULL;

	std::vector<tinyobj::material_t> materials;



	vbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pTexture);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	{

		{



	scDesc.BufferCount = 1;

	return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};



	SAFE_RELEASE(m_pDevice);

	m_pMatrixBuffer = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



			switch (e.key.keysym.sym)

			}



	if (FAILED(hr))

};

	m_IndexCount = icount;

	m_pTextureView = NULL;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





		D3D_DRIVER_TYPE_HARDWARE,

				vertex.push_back(vertex_tmp);

	ibDesc.StructureByteStride = 0;

		&m_pImmediateContext);

	ibDesc.CPUAccessFlags = 0;

	txDesc.Height = rect.Height();

			switch (e.key.keysym.sym)

	//Key press surfaces constants

	txDesc.Height = rect.Height();

	if (m_pImmediateContext)

	scDesc.SampleDesc.Count = 1;



	//深度ステンシルバッファ作成

	}







	txDesc.ArraySize = 1;

		return hr;

		return hr;

	Release();

	m_pSwapChain->Present(0, 0);

	m_Viewport.TopLeftX = 0;

CD3DTest::~CD3DTest()

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	txDesc.Width = rect.Width();

		KEY_PRESS_SURFACE_RIGHT,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	bool ret = tinyobj::LoadObj(

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



#include <iostream>

{

	for (int j = 0; j < icount; j++)

	m_pPixelShader = NULL;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			int num_vertices = shape.mesh.num_face_vertices[f];

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//深度ステンシルバッファ作成



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

 */

using std::cout; using std::endl;

	//Create Index

			//Select surfaces based on key press

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

};

	if (!reader.ParseFromFile(inputfile, reader_config))



	SDL_DestroyWindow(win);

}
	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pLightBuffer);



		KEY_PRESS_SURFACE_LEFT,

	CRect                rect;





		NULL,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	SAFE_RELEASE(m_pRenderTargetView);

			}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		}

		D3D_DRIVER_TYPE_HARDWARE,





			// Loop over vertices in the face.

	{

			}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			case SDLK_DOWN:

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_pTextureView = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)



			for (size_t v = 0; v < num_vertices; v++)

		return hr;

		1,

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	vrData.pSysMem = &pVList[0];

	m_VertexCount = vcount;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	// Loop over shapes

#include <SDL.h>

			//Select surfaces based on key press

	reader_config.mtl_search_path = "./"; // Path to material files





	{



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				break;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.Width = rect.Width();

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		&m_pSwapChain,





	m_Angle += XMConvertToRadians(1.0f);





				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	if (FAILED(hr))

};

	m_pVertexBuffer = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	scDesc.Windowed = TRUE;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.MiscFlags = 0;

		return 1;

		&error,

	if (FAILED(hr))





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	std::string imagePath = "hello.bmp";

struct ConstantLightBuffer {



};

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		pIList[j] = indexList[j];





	m_pSwapChain = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

			{

	tinyobj::ObjReader reader;

		pIList[j] = indexList[j];

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		//User presses a key

				indexlist.push_back(idx.vertex_index);

		return hr;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

			{

	float    fov = XMConvertToRadians(20.0f);

			{

	D3D_FEATURE_LEVEL level;

			{

		m_pImmediateContext->ClearState();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pDepthStencilTexture);

		return 1;

}
	m_Viewport.MinDepth = 0.0f;

	//頂点バッファ作成

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pDepthStencilView = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	txDesc.SampleDesc.Count = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		pLevels,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



		SDL_RenderCopy(ren, tex, NULL, NULL);



		pVList[i] = vertexlist[i];

int main(int, char**)

	vbDesc.CPUAccessFlags = 0;

	m_pSwapChain->Present(0, 0);

		}

				break;

	D3D11_BUFFER_DESC vbDesc;



	SDL_DestroyTexture(tex);

	SDL_Quit();

	if (!reader.Warning().empty())



			default:



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	Vertex* pVList = new Vertex[vcount];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pLightBuffer = NULL;

	// Loop over shapes

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ibDesc.MiscFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	m_pDepthStencilView = NULL;

	}

		&level,

	dsDesc.Format = txDesc.Format;

	UINT flags = 0;



	{

		{

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		size_t index_offset = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_TOTAL

{

		return hr;



	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



		pIList[j] = indexList[j];

		pVList[i] = vertexlist[i];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);





	tinyobj::ObjReader reader;

		{

	SDL_DestroyTexture(tex);

struct ConstantLightBuffer {



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	tinyobj::attrib_t attrib;

	m_pSampler = NULL;

	UINT flags = 0;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pSampler = NULL;

	pBackBuffer->Release();

	}

	m_IndexCount = 0;

		&m_pSwapChain,

			}

	m_pTextureView = NULL;

			case SDLK_LEFT:





	}

		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

};

	irData.SysMemPitch = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;







			switch (e.key.keysym.sym)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLight    pntLight; //点光源

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//ピクセルシェーダー生成

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	vrData.SysMemPitch = 0;

	{

	SAFE_RELEASE(m_pInputLayout);

	}



	m_VertexCount = 0;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		}

	}

	m_pSwapChain->Present(0, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

}

	m_Viewport.TopLeftY = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	tinyobj::ObjReader reader;

	//Create Index

			}

}

	if (FAILED(hr))

		&shapes,

	delete[] pVList;

		return hr;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	m_VertexCount = 0;

	vbDesc.MiscFlags = 0;

	for (int i = 0; i < vcount; i++)

	txDesc.MiscFlags = 0;



	for (size_t s = 0; s < shapes.size(); s++)

	SDL_Event e;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	vector<Vertex> vertexlist;



	HRESULT              hr;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		SDL_Delay(1000);

	//Clean up our objects and quit

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		// Loop over faces(polygon)

				break;





			// Loop over vertices in the face.

		delete[] pVList;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		pIList[j] = indexList[j];

	auto& shapes = reader.GetShapes();

CD3DTest::CD3DTest()

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	m_pIndexBuffer = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_Delay(1000);

	return;

	vector<WORD> indexList;

	if (FAILED(hr))

	float    fov = XMConvertToRadians(20.0f);

			// Loop over vertices in the face.

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//Create Index

		pLevels,

	SDL_FreeSurface(suf);

	CRect                rect;

		return hr;

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;





	float    farZ = 100.0f;

		pVList[i] = vertexlist[i];

{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_DOWN,



	SDL_FreeSurface(suf);

		{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	}

#include <SDL.h>

	cbDesc.MiscFlags = 0;

{

	std::string inputfile = "test.obj";

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	txDesc.CPUAccessFlags = 0;



	HRESULT              hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		exit(1);

	{

		{



	m_pDevice = NULL;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_VertexCount = vcount;



		return hr;

	{

	cbDesc.CPUAccessFlags = 0;

				indexlist.push_back(idx.vertex_index);

		else if (e.type == SDL_KEYDOWN)

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.CPUAccessFlags = 0;

		&attrib,

	m_pSwapChain = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;







	//インデックスバッファ作成



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMStoreFloat4(&clb.material.specular, materialSpecular);



				break;



	scDesc.BufferCount = 1;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	D3D11_BUFFER_DESC cbDesc;

	XMFLOAT4 pos;               //座標(x,y,z)

	scDesc.BufferCount = 1;



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (!reader.Warning().empty())

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		{

	m_IndexCount = icount;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	vrData.SysMemSlicePitch = 0;

	irData.pSysMem = &pIList[0];

	ConstantLightBuffer clb;

};



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	for (int i = 0; i < vcount; i++)

	Release();

	float    fov = XMConvertToRadians(20.0f);

	if (m_pImmediateContext)

	m_Viewport.MaxDepth = 1.0f;

	if (FAILED(hr))

			exit(1);

}

	irData.SysMemSlicePitch = 0;

	m_IndexCount = 0;

		pLevels,

	auto& attrib = reader.GetAttrib();

	float    farZ = 100.0f;

			index_offset += num_vertices;

/*



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		NULL,

int SEGMENT = 36;



		1,

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pPixelShader = NULL;

	}

				break;

	CRect                rect;



	if (FAILED(hr))



				break;

	m_Viewport.TopLeftY = 0;

	m_pSampler = NULL;

	m_pInputLayout = NULL;



	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		return hr;

		return hr;

			{

	{

 */

	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	std::vector<tinyobj::shape_t> shapes;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	m_pTextureView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	::GetClientRect(hwnd, &rect);

	m_pImmediateContext = NULL;

			index_offset += fv;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderClear(ren);

	auto& attrib = reader.GetAttrib();

	if (FAILED(hr))





	ibDesc.Usage = D3D11_USAGE_DEFAULT;



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SDL_DestroyWindow(win);

	ConstantLightBuffer clb;

	ibDesc.MiscFlags = 0;

	ibDesc.MiscFlags = 0;

{

			index_offset += fv;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMFLOAT4X4 projection;



				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pPixelShader);

		pVList[i] = vertexlist[i];







		if (e.type == SDL_QUIT)





	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	SDL_DestroyTexture(tex);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.ArraySize = 1;

		flags,

	D3D11_TEXTURE2D_DESC txDesc;

	delete[] pVList;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_FreeSurface(suf);



	//vector<WORD> index_t;

		SDL_Delay(1000);

	m_pVertexShader = NULL;



	scDesc.OutputWindow = hwnd;



};

	SAFE_RELEASE(m_pVertexShader);

			case SDLK_DOWN:

		return hr;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	//深度ステンシルバッファ作成

	if (FAILED(hr))



	scDesc.SampleDesc.Quality = 0;

#include <SDL.h>

	txDesc.MiscFlags = 0;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		{

		size_t index_offset = 0;  // インデントのオフセット

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	UINT flags = 0;

	auto& attrib = reader.GetAttrib();

		SDL_RenderPresent(ren);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pVertexShader = NULL;

	for (size_t s = 0; s < shapes.size(); s++)

				break;

		&m_pImmediateContext);

	float    fov = XMConvertToRadians(20.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	if (FAILED(hr))

}
	cbDesc.StructureByteStride = 0;

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

	ibDesc.StructureByteStride = 0;

	cbDesc.StructureByteStride = 0;

void CD3DTest::Release()

	ibDesc.MiscFlags = 0;







	ID3D11Texture2D* pBackBuffer;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

#endif

	//テクスチャ読み込み

		SDL_Delay(1000);

				WORD index = idx.vertex_index;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMFLOAT4         eyePos;   //視点座標

	vbDesc.StructureByteStride = 0;



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);



				break;

	m_pRenderTargetView = NULL;

	XMFLOAT4         eyePos;   //視点座標

				// access to vertex

			}

	if (FAILED(hr))

	SDL_Event e;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	if (!reader.Warning().empty())

	txDesc.SampleDesc.Count = 1;

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

			// Loop over vertices in the face.

		else if (e.type == SDL_KEYDOWN)

	m_Viewport.TopLeftX = 0;

		m_pImmediateContext->ClearState();

	m_pDepthStencilView = NULL;

	}*/

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



		}

	irData.SysMemSlicePitch = 0;



}



	{

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

struct ConstantMaterial {

			default:



	float    fov = XMConvertToRadians(20.0f);

			case SDLK_RIGHT:

struct ConstantMatrixBuffer {

	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



		return hr;

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	scDesc.BufferCount = 1;



		return 1;

	std::vector<tinyobj::shape_t> shapes;

	m_Viewport.MinDepth = 0.0f;

		size_t index_offset = 0;  // インデントのオフセット

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pLightBuffer = NULL;

	if (FAILED(hr))

#ifdef _DEBUG

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	scDesc.SampleDesc.Quality = 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	tinyobj::attrib_t attrib;

		pVList[i] = vertexlist[i];

		&attrib,

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pDepthStencilTexture);



	for (size_t s = 0; s < shapes.size(); s++)



	{

	vrData.pSysMem = &pVList[0];



{

	if (FAILED(hr))

	if (!reader.Warning().empty())

	{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

				break;



	m_pTextureView = NULL;

	while (SDL_PollEvent(&e) != 0)

		&error,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		delete[] pIList;

	delete[] pVList;

}



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4X4 world;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pSwapChain->Present(0, 0);

	txDesc.CPUAccessFlags = 0;

	tinyobj::attrib_t attrib;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				indexlist.push_back(idx.vertex_index);



}


		flags,

	scDesc.BufferCount = 1;



	scDesc.BufferDesc.Height = rect.Height();



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





		1,

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	auto& shapes = reader.GetShapes();

	XMStoreFloat4(&clb.eyePos, eye);

			index_offset += fv;

	m_pImmediateContext = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	std::string imagePath = "hello.bmp";

	//First we need to start up SDL, and make sure it went ok





	XMFLOAT4X4 world;

	m_VertexCount = vcount;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

	}

		{

	}



		&materials,

	{

	m_pSwapChain = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				WORD index = idx.vertex_index;

	//Clean up our objects and quit



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SDL_Quit();





	cbDesc.CPUAccessFlags = 0;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	if (FAILED(hr))

struct ConstantMaterial {

	XMFLOAT4X4 world;



				break;

	WORD   icount = indexList.size();

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

int SEGMENT = 36;

				WORD index = idx.vertex_index;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	return;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	m_Viewport.TopLeftX = 0;

/*

	SAFE_RELEASE(m_pLightBuffer);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	//vector<Vertex> vertex_t;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	XMFLOAT4X4 projection;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	for (size_t s = 0; s < shapes.size(); s++)

	enum KeyPressSurfaces

	m_pSampler = NULL;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	std::vector<tinyobj::material_t> materials;

	{

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				break;

		return hr;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_Viewport.Width = (FLOAT)rect.Width();

	vector<WORD> indexList;

	SDL_FreeSurface(bmp);

		//User requests quit

			case SDLK_DOWN:



	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ibDesc.StructureByteStride = 0;

	if (FAILED(hr))



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	return hr;

	ConstantLightBuffer clb;

	//深度ステンシルバッファ作成



	//頂点シェーダー生成



	//頂点レイアウト作成

			default:



	m_Viewport.Height = (FLOAT)rect.Height();

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	cbDesc.MiscFlags = 0;



HRESULT CD3DTest::Create(HWND hwnd)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string imagePath = "hello.bmp";

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	}

	cbDesc.CPUAccessFlags = 0;



	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

				tinyobj::real_t tx =

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		if (!reader.Error().empty())

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	for (int j = 0; j < icount; j++)

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				vertex.push_back(vertex_tmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		KEY_PRESS_SURFACE_TOTAL

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

using std::cout; using std::endl;

			}

		{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	delete[] pIList;

	}

	scDesc.OutputWindow = hwnd;





	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	scDesc.BufferCount = 1;

	reader_config.mtl_search_path = "./"; // Path to material files

{



	SAFE_RELEASE(m_pSwapChain);

	txDesc.Width = rect.Width();

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	return;

		SDL_Delay(1000);

	m_pSwapChain = NULL;

int main(int, char**)

	float    fov = XMConvertToRadians(20.0f);





	m_IndexCount = 0;

	std::vector<tinyobj::shape_t> shapes;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



		&level,

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			case SDLK_DOWN:



	Release();

		&materials,

		{

	m_pVertexBuffer = NULL;

int SEGMENT = 36;

			switch (e.key.keysym.sym)



struct ConstantMaterial {

	SDL_Event e;



}

	if (FAILED(hr))

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



		return hr;



	DXGI_SWAP_CHAIN_DESC scDesc;



	for (int j = 0; j < icount; j++)



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D11_SAMPLER_DESC smpDesc;

}
	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			switch (e.key.keysym.sym)

		flags,

	ConstantMatrixBuffer cmb;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SAFE_RELEASE(m_pVertexShader);

		SDL_RenderPresent(ren);

	}



	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		return hr;

	vector<Vertex> vertexlist;

	if (!reader.Warning().empty())

	cbDesc.MiscFlags = 0;

	//頂点レイアウト作成

	SAFE_RELEASE(m_pSwapChain);



			switch (e.key.keysym.sym)

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

}

	ibDesc.StructureByteStride = 0;



		{

using std::cout; using std::endl;

	m_pSwapChain = NULL;



	{

	WORD   icount = indexList.size();

	txDesc.MipLevels = 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_Viewport.MaxDepth = 1.0f;

}

		delete[] pVList;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

				WORD index = idx.vertex_index;

	//ビューポート設定

	D3D11_BUFFER_DESC vbDesc;

		NULL,



	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pDevice);

	if (!error.empty())

	m_Viewport.MinDepth = 0.0f;

void CD3DTest::Render()



	return;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pLightBuffer = NULL;

				WORD index = idx.vertex_index;

		delete[] pVList;

	enum KeyPressSurfaces

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vrData.SysMemSlicePitch = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		SDL_RenderClear(ren);

	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_SUBRESOURCE_DATA irData;

		}



	ConstantMaterial material; //物体の質感

	while (SDL_PollEvent(&e) != 0)



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	delete[] pVList;



	if (FAILED(hr))

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D11_SUBRESOURCE_DATA irData;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				// access to vertex

	HRESULT              hr;

				// access to vertex



		m_pImmediateContext->ClearState();



int main(int, char**)

	m_pSwapChain = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderPresent(ren);



{

	tinyobj::ObjReader reader;

				vertex.push_back(vertex_tmp);

	D3D11_BUFFER_DESC cbDesc;

#include <SDL.h>

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_Viewport.Width = (FLOAT)rect.Width();

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	scDesc.SampleDesc.Count = 1;

			index_offset += fv;

				tinyobj::real_t tx =



	{

	vbDesc.MiscFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

		SDL_RenderPresent(ren);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		KEY_PRESS_SURFACE_LEFT,

{



	if (FAILED(hr))



	if (!error.empty())

				WORD index = idx.vertex_index;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return 1;

	{

		SDL_Delay(1000);



	vbDesc.MiscFlags = 0;



	if (FAILED(hr))

{





				tinyobj::real_t ty =



	CRect                rect;

	SAFE_RELEASE(m_pTextureView);

	m_Viewport.TopLeftY = 0;

	{

		&scDesc,

	auto& materials = reader.GetMaterials();

	XMFLOAT4 ambient;           //環境(r,g,b)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

}
	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



};

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

				break;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	std::vector<tinyobj::shape_t> shapes;

	m_pDepthStencilTexture = NULL;

		}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				break;

	scDesc.SampleDesc.Quality = 0;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		return hr;



	ConstantLightBuffer clb;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	m_pTextureView = NULL;







		{

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

#include <iostream>

	Vertex* pVList = new Vertex[vcount];





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	reader_config.mtl_search_path = "./"; // Path to material files

				vertex.push_back(vertex_tmp);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	if (m_pImmediateContext)



	/*

	txDesc.CPUAccessFlags = 0;



	{

		return hr;

		exit(1);

	if (FAILED(hr))

	tinyobj::ObjReaderConfig reader_config;

#ifdef _DEBUG

	return hr;

	m_pSwapChain = NULL;



	pBackBuffer->Release();

				indexlist.push_back(idx.vertex_index);

			}



	if (FAILED(hr))





#include <SDL.h>



		return hr;

		SDL_Delay(1000);





	XMFLOAT4X4 view;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		D3D11_SDK_VERSION,



	m_pSwapChain->Present(0, 0);

	m_pTexture = NULL;



			for (size_t v = 0; v < fv; v++)

	D3D11_TEXTURE2D_DESC txDesc;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		1,



	SDL_Quit();

	SAFE_RELEASE(m_pSampler);

	if (FAILED(hr))

			exit(1);

		&m_pSwapChain,





	pBackBuffer->Release();

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	for (int j = 0; j < icount; j++)



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



				WORD index = idx.vertex_index;

	return;

	auto& attrib = reader.GetAttrib();

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		return hr;

	//vector<Vertex> vertex_t;

				// access to vertex



	if (FAILED(hr))

	//頂点シェーダー生成



	SDL_DestroyWindow(win);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pRenderTargetView);

				// access to vertex

{

/*



	{



		flags,

	vector<WORD> indexList;

		&attrib,

};



		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	cbDesc.StructureByteStride = 0;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		// Loop over faces(polygon)

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;



	m_Viewport.Width = (FLOAT)rect.Width();

	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

HRESULT CD3DTest::Create(HWND hwnd)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	scDesc.BufferCount = 1;

{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	SDL_Event e;

		delete[] pVList;

	UINT strides = sizeof(Vertex);

	m_Viewport.TopLeftX = 0;

	// Loop over shapes

	if (FAILED(hr))

		&m_pDevice,

CD3DTest::~CD3DTest()

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		{

	SDL_DestroyTexture(tex);

		D3D11_SDK_VERSION,





	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMFLOAT4X4 projection;

	UINT strides = sizeof(Vertex);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{

struct ConstantMaterial {

		delete[] pIList;

	for (size_t s = 0; s < shapes.size(); s++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		{

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_BUFFER_DESC cbDesc;

	UINT strides = sizeof(Vertex);

	if (!error.empty())

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

			}

			// Loop over vertices in the face.

		KEY_PRESS_SURFACE_DEFAULT,



CD3DTest::CD3DTest()

		KEY_PRESS_SURFACE_UP,

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



		KEY_PRESS_SURFACE_DEFAULT,

	m_pTextureView = NULL;



			case SDLK_DOWN:

{

		&m_pSwapChain,

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	scDesc.BufferCount = 1;



using std::cout; using std::endl;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				indexlist.push_back(idx.vertex_index);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





void CD3DTest::Render()



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//First we need to start up SDL, and make sure it went ok

		return hr;

{

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	SAFE_RELEASE(m_pIndexBuffer);







	SAFE_RELEASE(m_pVertexBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		1,

 */

	{

			{

		pLevels,

	cbDesc.StructureByteStride = 0;

		KEY_PRESS_SURFACE_TOTAL



		KEY_PRESS_SURFACE_DOWN,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (FAILED(hr))



	for (int i = 0; i < vcount; i++)

{

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pVertexShader);

	//深度ステンシルバッファ作成

		pVList[i] = vertexlist[i];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

				indexlist.push_back(index);



		{

	LoadObj(vertexlist, indexList);

	cbDesc.StructureByteStride = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ConstantLight    pntLight; //点光源

	SDL_DestroyRenderer(ren);

				WORD index = idx.vertex_index;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		pVList[i] = vertexlist[i];

	pBackBuffer->Release();



};

/*



}

	pBackBuffer->Release();



		return hr;

	UINT strides = sizeof(Vertex);

		return hr;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	{



	ConstantLightBuffer clb;



	ConstantLight    pntLight; //点光源

				indexlist.push_back(idx.vertex_index);

		1,

		KEY_PRESS_SURFACE_RIGHT,

	}*/

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	SAFE_RELEASE(m_pDepthStencilView);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

			}

	XMFLOAT4X4 projection;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	SAFE_RELEASE(m_pImmediateContext);

		return hr;



			index_offset += num_vertices;



{

	cbDesc.StructureByteStride = 0;

	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

HRESULT CD3DTest::Create(HWND hwnd)



}



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{



	//ピクセルシェーダー生成

		SDL_Delay(1000);

			default:



	ConstantMaterial material; //物体の質感

	}

		{

				// access to vertex

		SDL_RenderCopy(ren, tex, NULL, NULL);

	UINT offsets = 0;



		}

	float    farZ = 100.0f;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	enum KeyPressSurfaces

	Release();

	m_Viewport.MinDepth = 0.0f;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		KEY_PRESS_SURFACE_TOTAL

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

		&error,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)





		exit(1);

	m_Viewport.MinDepth = 0.0f;



	XMFLOAT4X4 world;

	ConstantLight    pntLight; //点光源

	m_pPixelShader = NULL;

	SAFE_RELEASE(m_pInputLayout);

			exit(1);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	float    nearZ = 0.1f;



	m_pVertexBuffer = NULL;

	D3D11_BUFFER_DESC cbDesc;

	}

			// Loop over vertices in the face.



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SDL_DestroyTexture(tex);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

}



			exit(1);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

struct ConstantMaterial {

	//頂点シェーダー生成

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	WORD   icount = indexList.size();

		return hr;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		NULL,

	cbDesc.StructureByteStride = 0;

void CD3DTest::Release()

	for (int i = 0; i < 3; i++)

	SAFE_RELEASE(m_pVertexShader);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

void CD3DTest::Release()

		}

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	SDL_Quit();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

{

	dsDesc.Format = txDesc.Format;



	float    nearZ = 0.1f;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	LoadObj(vertexlist, indexList);



	txDesc.Width = rect.Width();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		exit(1);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	D3D11_TEXTURE2D_DESC txDesc;

HRESULT CD3DTest::Create(HWND hwnd)

	}

	SAFE_RELEASE(m_pVertexBuffer);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

}

#define TINYOBJLOADER_IMPLEMENTATION

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	std::string imagePath = "hello.bmp";

	//Create Index

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::vector<tinyobj::shape_t> shapes;

	}

	m_pDepthStencilTexture = NULL;





	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return hr;



	m_pIndexBuffer = NULL;

	return 0;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		{

		{

	//Vertex* pVList = new Vertex[vcount];

	ibDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	scDesc.SampleDesc.Quality = 0;

	//vector<Vertex> vertex_t;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





	UINT flags = 0;

				vertex.push_back(vertex_tmp);

	float    fov = XMConvertToRadians(20.0f);

	{

	m_pInputLayout = NULL;

};

				WORD index = idx.vertex_index;

	m_Angle += XMConvertToRadians(1.0f);

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftY = 0;

		//User requests quit

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_FreeSurface(suf);

	ID3D11Texture2D* pBackBuffer;

	for (const auto& shape : shapes)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			for (size_t v = 0; v < num_vertices; v++)



	SAFE_RELEASE(m_pDevice);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	UINT offsets = 0;

				WORD index = idx.vertex_index;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	if (FAILED(hr))

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		if (!ret)

	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{



	if (FAILED(hr))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pSwapChain = NULL;



	float    farZ = 100.0f;

}

		return hr;

	auto& shapes = reader.GetShapes();



	};

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

 */

		return hr;

		if (!reader.Error().empty())



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	}

	cbDesc.CPUAccessFlags = 0;





	}

	irData.pSysMem = &pIList[0];

void CD3DTest::Release()

	if (!error.empty())

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

CD3DTest::~CD3DTest()

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			for (size_t v = 0; v < fv; v++)





	SAFE_RELEASE(m_pMatrixBuffer);

	m_pSampler = NULL;

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	//First we need to start up SDL, and make sure it went ok



			index_offset += fv;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//ピクセルシェーダー生成

	m_pSwapChain->Present(0, 0);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;

	m_pTexture = NULL;

	//テクスチャ読み込み

	txDesc.Width = rect.Width();

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	WORD   icount = indexList.size();

	{

 */

	//ピクセルシェーダー生成

	auto& attrib = reader.GetAttrib();

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (!reader.Warning().empty())

	// Loop over shapes

#include <iostream>

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	vrData.pSysMem = &pVList[0];

			for (size_t v = 0; v < num_vertices; v++)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



			for (size_t v = 0; v < fv; v++)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pRenderTargetView = NULL;

};

	ZeroMemory(&txDesc, sizeof(txDesc));

	float    fov = XMConvertToRadians(20.0f);

}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);







 */

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	{

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	vbDesc.CPUAccessFlags = 0;

	vbDesc.StructureByteStride = 0;



	dsDesc.Format = txDesc.Format;



struct ConstantLight {

	vector<Vertex> vertexlist;

	SAFE_RELEASE(m_pPixelShader);

	m_VertexCount = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	scDesc.Windowed = TRUE;



	//頂点シェーダー生成

	//テクスチャ読み込み

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	if (m_pImmediateContext)

	if (!reader.ParseFromFile(inputfile, reader_config))

	m_Viewport.TopLeftY = 0;

	m_pVertexShader = NULL;

		{

	auto& attrib = reader.GetAttrib();



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_BUFFER_DESC cbDesc;

		return hr;

	SAFE_RELEASE(m_pSwapChain);

	//深度ステンシルバッファ作成



				vertex.push_back(vertex_tmp);

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		pLevels,

	for (int i = 0; i < 3; i++)

{

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pLightBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	txDesc.ArraySize = 1;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	//テクスチャ読み込み

			default:

	SAFE_RELEASE(m_pIndexBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMStoreFloat4(&clb.ambient, lightAmbient);



		//User presses a key

			case SDLK_LEFT:





	SAFE_RELEASE(m_pLightBuffer);

			{

		&scDesc,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMFLOAT4X4 world;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pDevice);

	D3D11_TEXTURE2D_DESC txDesc;

	auto& materials = reader.GetMaterials();

	std::vector<tinyobj::material_t> materials;

	{

		SDL_RenderPresent(ren);

		return 1;

	WORD* pIList = new WORD[icount];

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		delete[] pVList;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_Delay(1000);

		return hr;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vector<WORD> indexList;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

	{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	txDesc.ArraySize = 1;

	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;



	tinyobj::ObjReaderConfig reader_config;







#include <SDL.h>

		KEY_PRESS_SURFACE_UP,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	//テクスチャ読み込み

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	}

			index_offset += fv;

	UINT flags = 0;

		return hr;

	SDL_DestroyTexture(tex);

{

			for (size_t v = 0; v < fv; v++)

			}

	}



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_IndexCount = 0;



	for (size_t s = 0; s < shapes.size(); s++)



	XMStoreFloat4(&clb.eyePos, eye);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pIndexBuffer);



		D3D11_SDK_VERSION,





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	txDesc.ArraySize = 1;

	auto& materials = reader.GetMaterials();

	return;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (!reader.Warning().empty())

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	std::string error;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	reader_config.mtl_search_path = "./"; // Path to material files

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	{

	if (FAILED(hr))

	irData.pSysMem = &pIList[0];

	{

				// access to vertex

			//Select surfaces based on key press

	SAFE_RELEASE(m_pTextureView);



	ibDesc.MiscFlags = 0;



	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pIndexBuffer);

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";

		SDL_Delay(1000);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return 1;

	if (FAILED(hr))

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pIndexBuffer = NULL;

{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	{

	m_Viewport.MaxDepth = 1.0f;

}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_SUBRESOURCE_DATA irData;

	while (SDL_PollEvent(&e) != 0)

		pVList[i] = vertexlist[i];

	if (!reader.ParseFromFile(inputfile, reader_config))

#define TINYOBJLOADER_IMPLEMENTATION

	vrData.pSysMem = &pVList[0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	UINT strides = sizeof(Vertex);

	m_pDepthStencilTexture = NULL;

	if (FAILED(hr))

			break;

int main(int, char**)

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		delete[] pVList;

		if (e.type == SDL_QUIT)

	tinyobj::ObjReader reader;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vrData.pSysMem = &pVList[0];



	for (int i = 0; i < vcount; i++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		return 1;

	SAFE_RELEASE(m_pDepthStencilView);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	m_pMatrixBuffer = NULL;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_Viewport.Width = (FLOAT)rect.Width();

		&m_pSwapChain,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				vertex.push_back(vertex_tmp);

		return hr;

	return 0;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

	SDL_DestroyRenderer(ren);

	ibDesc.StructureByteStride = 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	SAFE_RELEASE(m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pVertexShader = NULL;

#include <SDL.h>

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SAFE_RELEASE(m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		return hr;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	return 0;

	std::vector<tinyobj::shape_t> shapes;

		return hr;



	}

	//Create Index

			{



		if (!reader.Error().empty())

	int     vcount = vertexlist.size();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMFLOAT4 ambient;           //環境(r,g,b)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

{

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];





	SAFE_RELEASE(m_pIndexBuffer);

	XMStoreFloat4(&clb.eyePos, eye);

	m_pPixelShader = NULL;

		D3D11_SDK_VERSION,





	if (FAILED(hr))



		&error,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		return hr;

#include <SDL.h>

	vbDesc.StructureByteStride = 0;

	//ビューポート設定

	m_Viewport.MaxDepth = 1.0f;

		delete[] pVList;





	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		KEY_PRESS_SURFACE_LEFT,



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_VertexCount = 0;

{

			case SDLK_DOWN:

	cbDesc.MiscFlags = 0;



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	UINT flags = 0;

	if (FAILED(hr))

		&error,

	}*/

	XMFLOAT4 attenuate;         //減衰(a,b,c)







	txDesc.Usage = D3D11_USAGE_DEFAULT;



	HRESULT              hr;

		D3D_DRIVER_TYPE_HARDWARE,

		{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//vector<WORD> index_t;

	//インデックスバッファ作成

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	txDesc.MiscFlags = 0;

	if (!error.empty())

	//Clean up our objects and quit

	m_pInputLayout = NULL;

	std::vector<tinyobj::shape_t> shapes;

				break;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

CD3DTest::CD3DTest()

	if (FAILED(hr))



#endif

	for (int i = 0; i < 3; i++)

using std::cout; using std::endl;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{



	m_Viewport.MaxDepth = 1.0f;







		1,

	UINT flags = 0;

			switch (e.key.keysym.sym)

 * Lesson 1: Hello World!

			}

	txDesc.CPUAccessFlags = 0;







	XMFLOAT4X4 world;



	SDL_DestroyWindow(win);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pImmediateContext);

	}

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

			int num_vertices = shape.mesh.num_face_vertices[f];

/*

	}

	int     vcount = vertexlist.size();

	ConstantMatrixBuffer cmb;

{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ibDesc.CPUAccessFlags = 0;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		return hr;

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//頂点レイアウト作成

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&materials,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

			// Loop over vertices in the face.

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	while (SDL_PollEvent(&e) != 0)

		&materials,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return 1;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	}

		&attrib,

	//頂点シェーダー生成



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_LEFT:

	}

	for (const auto& shape : shapes)

	XMFLOAT4 specular;          //反射(r,g,b)



		return hr;



	}

	m_Viewport.MinDepth = 0.0f;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	txDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



				tinyobj::real_t ty =

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

#include <iostream>



#include <SDL.h>

		// Loop over faces(polygon)

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

		&m_pSwapChain,

		}

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	delete[] pIList;

struct ConstantMaterial {



	m_pLightBuffer = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	ibDesc.Usage = D3D11_USAGE_DEFAULT;





	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.OutputWindow = hwnd;

		exit(1);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pDepthStencilView);

	SAFE_RELEASE(m_pPixelShader);



	m_pMatrixBuffer = NULL;

		&error,

	SAFE_RELEASE(m_pLightBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	enum KeyPressSurfaces

	//vector<WORD> index_t;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	{

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		if (!ret)

		return hr;

		return hr;

	m_Viewport.Height = (FLOAT)rect.Height();



			for (size_t v = 0; v < num_vertices; v++)

	m_pTexture = NULL;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ConstantLightBuffer clb;



	SAFE_RELEASE(m_pLightBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		//User requests quit

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		KEY_PRESS_SURFACE_UP,

	{

	WORD* pIList = new WORD[icount];



	m_Viewport.Height = (FLOAT)rect.Height();

	if (FAILED(hr))

#ifdef _DEBUG

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

void CD3DTest::Render()

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

};





	SAFE_RELEASE(m_pVertexShader);



	// Loop over shapes



	// Loop over shapes

{

int SEGMENT = 36;





	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	SDL_FreeSurface(suf);

}

	SAFE_RELEASE(m_pTextureView);

	}

	SDL_FreeSurface(bmp);

	std::vector<tinyobj::material_t> materials;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (int i = 0; i < vcount; i++)

	}

	m_pImmediateContext = NULL;

	if (!error.empty())

	SDL_DestroyRenderer(ren);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	if (FAILED(hr))

	SDL_Quit();



	Release();

	vector<Vertex> vertexlist;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	for (const auto& shape : shapes)

	m_pInputLayout = NULL;



	if (FAILED(hr))

	}

	}

			switch (e.key.keysym.sym)

	m_pVertexShader = NULL;

			{

	m_IndexCount = icount;

		return hr;

		KEY_PRESS_SURFACE_UP,

	}*/

	// Loop over shapes

	::GetClientRect(hwnd, &rect);

};

	Release();

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_Delay(1000);

	m_pLightBuffer = NULL;



};

		&m_pDevice,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	vrData.SysMemSlicePitch = 0;

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

HRESULT CD3DTest::Create(HWND hwnd)

	irData.pSysMem = &pIList[0];

	m_pPixelShader = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)



	{

	SAFE_RELEASE(m_pPixelShader);

	cbDesc.CPUAccessFlags = 0;

		&level,

			{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	reader_config.mtl_search_path = "./"; // Path to material files

	delete[] pVList;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

};

		&error,

	D3D11_SUBRESOURCE_DATA irData;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SDL_DestroyRenderer(ren);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

struct ConstantLightBuffer {

	SAFE_RELEASE(m_pDevice);

	SAFE_RELEASE(m_pIndexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	LoadObj(vertexlist, indexList);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	return hr;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	auto& materials = reader.GetMaterials();

	m_Angle += XMConvertToRadians(1.0f);

		SDL_Delay(1000);

	SDL_Quit();

	SAFE_RELEASE(m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

}



		return hr;

{

	if (FAILED(hr))

	//インデックスバッファ作成



	XMFLOAT4X4 projection;

				indexlist.push_back(index);

				vertex.push_back(vertex_tmp);

	txDesc.SampleDesc.Count = 1;

				vertex.push_back(vertex_tmp);

	vbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	ConstantLight    pntLight; //点光源

		return hr;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_Viewport.TopLeftY = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	if (!reader.ParseFromFile(inputfile, reader_config))



	if (FAILED(hr))



	SAFE_RELEASE(m_pDepthStencilTexture);

	//ピクセルシェーダー生成

}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pTextureView);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_Viewport.TopLeftX = 0;

	SAFE_RELEASE(m_pIndexBuffer);

void CD3DTest::Release()

	m_pVertexShader = NULL;

		&attrib,

};



	if (FAILED(hr))



	if (!reader.ParseFromFile(inputfile, reader_config))



	SDL_Event e;

	SAFE_RELEASE(m_pVertexShader);



				indexlist.push_back(idx.vertex_index);

	SAFE_RELEASE(m_pDevice);

	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				WORD index = idx.vertex_index;

	SDL_DestroyTexture(tex);

	txDesc.SampleDesc.Count = 1;

		{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_IndexCount = 0;

	{

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_VertexCount = 0;

	m_pVertexShader = NULL;

	//Clean up our objects and quit

	m_pSwapChain = NULL;



		size_t index_offset = 0;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	m_pImmediateContext = NULL;

	}

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	return 0;

CD3DTest::~CD3DTest()





	dsDesc.Format = txDesc.Format;

	for (int i = 0; i < vcount; i++)

	//vector<WORD> index_t;

		return hr;



	if (!reader.ParseFromFile(inputfile, reader_config))

{

	}

	ConstantMatrixBuffer cmb;



		D3D11_SDK_VERSION,



	//深度ステンシルバッファ作成

				tinyobj::real_t ty =

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	if (m_pImmediateContext)

	m_pDepthStencilTexture = NULL;

	txDesc.MipLevels = 1;

		pVList[i] = vertexlist[i];

		&shapes,

		{

	//テクスチャ読み込み

		KEY_PRESS_SURFACE_LEFT,

		{

	}

		SDL_RenderPresent(ren);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SAFE_RELEASE(m_pSwapChain);

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

	if (FAILED(hr))





			exit(1);



	SDL_DestroyTexture(tex);





		{

				break;

		&materials,



	if (FAILED(hr))

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	D3D11_BUFFER_DESC ibDesc;

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pVertexShader);

	ConstantMaterial material; //物体の質感

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

		pVList[i] = vertexlist[i];

	ZeroMemory(&txDesc, sizeof(txDesc));

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

}

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_Viewport.TopLeftX = 0;



	m_pRenderTargetView = NULL;

	//頂点シェーダー生成

	pBackBuffer->Release();

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_RenderPresent(ren);

struct ConstantMatrixBuffer {

				WORD index = idx.vertex_index;

	ibDesc.MiscFlags = 0;

	HRESULT              hr;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		if (e.type == SDL_QUIT)



	ZeroMemory(&txDesc, sizeof(txDesc));

#define TINYOBJLOADER_USE_MAPBOX_EARCUT





HRESULT CD3DTest::Create(HWND hwnd)

};



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	/*



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

			case SDLK_RIGHT:

	txDesc.Width = rect.Width();

	if (FAILED(hr))



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	irData.pSysMem = &pIList[0];

#include <iostream>

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.SysMemPitch = 0;

		&shapes,

struct ConstantLightBuffer {



	}



	}

int main(int, char**)

	//Clean up our objects and quit

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//Key press surfaces constants

		&level,

	if (m_pImmediateContext)

	cbDesc.StructureByteStride = 0;

	XMFLOAT4X4 world;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



}

	HRESULT              hr;

struct ConstantLight {

			break;

		&shapes,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		return hr;

	std::string inputfile = "test.obj";

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		&m_pSwapChain,

	while (SDL_PollEvent(&e) != 0)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	vector<WORD> indexList;

}

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pRenderTargetView = NULL;

			index_offset += num_vertices;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



				indexlist.push_back(index);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));



	std::vector<tinyobj::material_t> materials;

	txDesc.Height = rect.Height();

			break;

		{

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SDL_DestroyRenderer(ren);

}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

};

/*

	float    fov = XMConvertToRadians(20.0f);

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	float    fov = XMConvertToRadians(20.0f);



	D3D11_SUBRESOURCE_DATA vrData;

	m_Viewport.MinDepth = 0.0f;

	CRect                rect;



};

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}



	SAFE_RELEASE(m_pVertexShader);



	XMFLOAT4         eyePos;   //視点座標

		m_pImmediateContext->ClearState();





			case SDLK_DOWN:



				indexlist.push_back(index);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



}



	if (!error.empty())

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pInputLayout = NULL;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	//First we need to start up SDL, and make sure it went ok

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	SAFE_RELEASE(m_pRenderTargetView);



	m_pPixelShader = NULL;



	SDL_FreeSurface(suf);

	SDL_Quit();

		return hr;

	{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	{





	Release();







			{



	SAFE_RELEASE(m_pTexture);

	txDesc.MipLevels = 1;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	scDesc.SampleDesc.Quality = 0;

	//頂点バッファ作成

	SAFE_RELEASE(m_pTextureView);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

}
				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//頂点レイアウト作成

	std::string error;

		&m_pSwapChain,

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	bool ret = tinyobj::LoadObj(

	cbDesc.MiscFlags = 0;

	Release();

	bool ret = tinyobj::LoadObj(

	while (SDL_PollEvent(&e) != 0)

	vector<Vertex> vertexlist;

}



	SAFE_RELEASE(m_pVertexBuffer);

		SDL_RenderClear(ren);

		return hr;

	SDL_FreeSurface(suf);



	::GetClientRect(hwnd, &rect);

	D3D11_SAMPLER_DESC smpDesc;

	return 0;

#endif





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pLightBuffer = NULL;



		D3D_DRIVER_TYPE_HARDWARE,

	SDL_DestroyWindow(win);



	};

	XMFLOAT4X4 world;

		delete[] pVList;

	cbDesc.MiscFlags = 0;



			case SDLK_LEFT:

	if (FAILED(hr))

	float    nearZ = 0.1f;

	txDesc.ArraySize = 1;

	::GetClientRect(hwnd, &rect);

	float    farZ = 100.0f;

	scDesc.BufferDesc.Height = rect.Height();



	txDesc.MipLevels = 1;

	{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.SampleDesc.Quality = 0;

	SAFE_RELEASE(m_pImmediateContext);

	scDesc.SampleDesc.Count = 1;



	delete[] pIList;

	//頂点バッファ作成

}



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	m_pInputLayout = NULL;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	D3D11_BUFFER_DESC cbDesc;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	tinyobj::attrib_t attrib;

{

	txDesc.ArraySize = 1;

	ConstantLightBuffer clb;

		}

int SEGMENT = 36;

	Release();



		NULL,



				indexlist.push_back(idx.vertex_index);

	for (const auto& shape : shapes)

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (!error.empty())

	if (FAILED(hr))

		return hr;

	ConstantLight    pntLight; //点光源

void CD3DTest::Release()

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	return 0;

	if (!reader.Warning().empty())

		exit(1);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	WORD* pIList = new WORD[icount];

}

		&scDesc,

	m_pMatrixBuffer = NULL;

	cbDesc.StructureByteStride = 0;

				vertex.push_back(vertex_tmp);

	for (int i = 0; i < vcount; i++)



	}

		return hr;

		}

	bool ret = tinyobj::LoadObj(

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	m_pDepthStencilView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

}

	{

		return hr;

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		size_t index_offset = 0;

	scDesc.SampleDesc.Quality = 0;



		NULL,



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		KEY_PRESS_SURFACE_DEFAULT,





	m_pDepthStencilTexture = NULL;

	}*/



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (!error.empty())

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		return 1;

				WORD index = idx.vertex_index;

				break;

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	if (!reader.Warning().empty())

	LoadObj(vertexlist, indexList);



	return;

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		//User presses a key

{

	int     vcount = vertexlist.size();

	/*



	{

};

	txDesc.MipLevels = 1;

	scDesc.BufferCount = 1;

	if (FAILED(hr))

}

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	{

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	vector<Vertex> vertexlist;



	std::vector<tinyobj::shape_t> shapes;

			index_offset += fv;

		D3D11_SDK_VERSION,







			for (size_t v = 0; v < fv; v++)

struct ConstantLightBuffer {

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

struct ConstantMaterial {





	SDL_DestroyWindow(win);







};

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	bool ret = tinyobj::LoadObj(

	m_Viewport.Width = (FLOAT)rect.Width();

	scDesc.BufferDesc.Width = rect.Width();

	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.StructureByteStride = 0;

	//Create Index



HRESULT CD3DTest::Create(HWND hwnd)



		}

	m_pSwapChain->Present(0, 0);

		KEY_PRESS_SURFACE_LEFT,

	SAFE_RELEASE(m_pTexture);

		return hr;

	while (SDL_PollEvent(&e) != 0)

{

	pBackBuffer->Release();

		return hr;

	}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



}

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		pVList[i] = vertexlist[i];

}

	}

	D3D_FEATURE_LEVEL level;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	dsDesc.Format = txDesc.Format;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		SDL_Delay(1000);

}
#include <iostream>



	WORD* pIList = new WORD[icount];

		NULL,



#ifdef _DEBUG

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	for (const auto& shape : shapes)

	if (FAILED(hr))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Viewport.MinDepth = 0.0f;

	vrData.SysMemPitch = 0;

			//Select surfaces based on key press

		size_t index_offset = 0;

			{

	scDesc.SampleDesc.Quality = 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		//User presses a key

		{

	irData.SysMemSlicePitch = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.StructureByteStride = 0;

			case SDLK_DOWN:

	//インデックスバッファ作成

		cout << "SDL_INIT_ERROR" << endl;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		pVList[i] = vertexlist[i];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

}

	XMFLOAT4 ambient;           //環境(r,g,b)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	for (int i = 0; i < vcount; i++)



	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

void CD3DTest::Release()

}


	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vbDesc.MiscFlags = 0;

		return hr;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	}

}

	std::string inputfile = "test.obj";

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				// access to vertex

	Release();

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	cbDesc.MiscFlags = 0;

		else if (e.type == SDL_KEYDOWN)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	bool ret = tinyobj::LoadObj(

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ID3D11Texture2D* pBackBuffer;

	SDL_DestroyRenderer(ren);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	scDesc.Windowed = TRUE;

	m_Viewport.MaxDepth = 1.0f;

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pSwapChain = NULL;

#include <iostream>

	}

	//インデックスバッファ作成



			{

	m_pDepthStencilView = NULL;

			break;

		delete[] pIList;

				break;

int main(int, char**)

	tinyobj::ObjReaderConfig reader_config;

	bool ret = tinyobj::LoadObj(

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pDepthStencilView);



	if (FAILED(hr))



	//深度ステンシルバッファ作成



				vertex.push_back(vertex_tmp);

	{

		&level,

		KEY_PRESS_SURFACE_RIGHT,

	SDL_FreeSurface(suf);



		&shapes,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	m_VertexCount = vcount;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	SDL_Quit();

#include <iostream>

			//Select surfaces based on key press







		&attrib,

		return hr;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		&attrib,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.ambient, lightAmbient);



	scDesc.SampleDesc.Count = 1;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	if (FAILED(hr))



	txDesc.CPUAccessFlags = 0;



		}

			//Select surfaces based on key press

	{

		{

{

		// Loop over faces(polygon)

}

	//ビューポート設定

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;



				tinyobj::real_t ty =

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

}

		SDL_RenderClear(ren);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.ambient, lightAmbient);



			switch (e.key.keysym.sym)

	}

	float    farZ = 100.0f;

	if (FAILED(hr))







	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	SAFE_RELEASE(m_pTexture);



	//ビューポート設定

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	SDL_DestroyTexture(tex);

}

	txDesc.CPUAccessFlags = 0;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



			index_offset += fv;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	auto& shapes = reader.GetShapes();

	m_pDepthStencilView = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.eyePos, eye);



	txDesc.MiscFlags = 0;

	enum KeyPressSurfaces

		pLevels,

	dsDesc.Texture2D.MipSlice = 0;

				// access to vertex

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.Width = rect.Width();

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				tinyobj::real_t tx =

	ConstantMatrixBuffer cmb;

		pLevels,

		if (!ret)

	scDesc.BufferCount = 1;

			{



	m_pInputLayout = NULL;

	SAFE_RELEASE(m_pInputLayout);

	m_pImmediateContext = NULL;

		// Loop over faces(polygon)





struct ConstantMatrixBuffer {

		cout << "SDL_INIT_ERROR" << endl;

	txDesc.CPUAccessFlags = 0;



{

	SDL_Quit();

	std::string imagePath = "hello.bmp";

	m_VertexCount = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	if (FAILED(hr))

	txDesc.SampleDesc.Count = 1;

	}*/

	ConstantLight    pntLight; //点光源

				WORD index = idx.vertex_index;

		}

	if (SDL_Init(SDL_INIT_VIDEO != 0))





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		pVList[i] = vertexlist[i];

	{

	return hr;

	m_pLightBuffer = NULL;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		delete[] pIList;



	//インデックスバッファ作成





	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pDepthStencilTexture);

			break;

		// Loop over faces(polygon)

	bool ret = tinyobj::LoadObj(

	ConstantMaterial material; //物体の質感



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	delete[] pVList;

	if (FAILED(hr))

		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_VertexCount = vcount;

	if (!reader.Warning().empty())

				break;

void CD3DTest::Release()

			{

	cbDesc.MiscFlags = 0;

		return hr;



	{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



struct ConstantLight {



		delete[] pIList;

 * Lesson 1: Hello World!

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	SDL_FreeSurface(suf);

		size_t index_offset = 0;



	tinyobj::ObjReader reader;

	//深度ステンシルバッファ作成



	ZeroMemory(&dsDesc, sizeof(dsDesc));

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	txDesc.SampleDesc.Count = 1;

	cbDesc.MiscFlags = 0;



	//頂点レイアウト作成

			}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	std::string imagePath = "hello.bmp";

			exit(1);

		SDL_RenderClear(ren);



	return hr;

		SDL_RenderClear(ren);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_Viewport.Height = (FLOAT)rect.Height();

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			case SDLK_UP:





}

struct ConstantLight {

	//Key press surfaces constants

	D3D11_SUBRESOURCE_DATA irData;



	vrData.SysMemPitch = 0;

	//vector<WORD> index_t;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	if (FAILED(hr))



		return hr;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

 */

	SAFE_RELEASE(m_pVertexBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	{

	{

	m_VertexCount = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	::ZeroMemory(&scDesc, sizeof(scDesc));

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#include <SDL.h>

		return hr;



	ConstantLightBuffer clb;

	//vector<WORD> index_t;

		//User presses a key

	if (FAILED(hr))



	ibDesc.StructureByteStride = 0;

}
	DXGI_SWAP_CHAIN_DESC scDesc;



		NULL,

/*



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

			// Loop over vertices in the face.

		return hr;

	vrData.pSysMem = &pVList[0];



	//Vertex* pVList = new Vertex[vcount];

	}

	vbDesc.StructureByteStride = 0;

	{

	SAFE_RELEASE(m_pIndexBuffer);

				indexlist.push_back(index);

	irData.SysMemPitch = 0;



#include <SDL.h>

		return hr;



	int     vcount = vertexlist.size();

	ID3D11Texture2D* pBackBuffer;

	vector<Vertex> vertexlist;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	m_pVertexBuffer = NULL;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			for (size_t v = 0; v < num_vertices; v++)

	vector<Vertex> vertexlist;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		1,

CD3DTest::CD3DTest()

	pBackBuffer->Release();



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	for (int i = 0; i < vcount; i++)

	for (int i = 0; i < vcount; i++)

		}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	SAFE_RELEASE(m_pPixelShader);

			}

		m_pImmediateContext->ClearState();

	{



		R"(cube.obj)");

	delete[] pVList;

	if (FAILED(hr))

}



	if (FAILED(hr))

	if (FAILED(hr))

	// Loop over shapes

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	UINT strides = sizeof(Vertex);

struct ConstantMaterial {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);





{



	XMFLOAT4 specular;          //反射(r,g,b)

	Vertex* pVList = new Vertex[vcount];

	vector<Vertex> vertexlist;

int main(int, char**)

	D3D11_BUFFER_DESC vbDesc;

	UINT strides = sizeof(Vertex);

};

		else if (e.type == SDL_KEYDOWN)





	XMStoreFloat4(&clb.eyePos, eye);

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				break;

#ifdef _DEBUG

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	scDesc.OutputWindow = hwnd;

		}

			for (size_t v = 0; v < num_vertices; v++)





	tinyobj::ObjReaderConfig reader_config;





		1,



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//頂点バッファ作成

		&m_pSwapChain,



	vrData.SysMemPitch = 0;

}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		size_t index_offset = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		KEY_PRESS_SURFACE_DEFAULT,



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			switch (e.key.keysym.sym)

		{

	m_IndexCount = 0;



	auto& shapes = reader.GetShapes();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	D3D11_SUBRESOURCE_DATA irData;

		NULL,

	//vector<WORD> index_t;

	if (!reader.Warning().empty())

	enum KeyPressSurfaces

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				break;



		return hr;

		return hr;

	XMFLOAT4X4 world;

	m_pMatrixBuffer = NULL;

	auto& shapes = reader.GetShapes();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (!error.empty())

	SAFE_RELEASE(m_pTexture);

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.OutputWindow = hwnd;

int main(int, char**)

	UINT flags = 0;

				WORD index = idx.vertex_index;



	D3D11_BUFFER_DESC cbDesc;

	if (FAILED(hr))

	}

	XMFLOAT4X4 view;

		&materials,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	float    nearZ = 0.1f;



		&attrib,

	txDesc.Width = rect.Width();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		{

	auto& materials = reader.GetMaterials();

	txDesc.ArraySize = 1;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

		delete[] pVList;

	SDL_DestroyRenderer(ren);

		exit(1);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pDevice);



#include "DirectXManager.h"

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

{

		m_pImmediateContext->ClearState();

	vrData.pSysMem = &pVList[0];

	{

		size_t index_offset = 0;

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pImmediateContext);



	vrData.SysMemSlicePitch = 0;

		pVList[i] = vertexlist[i];



		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	scDesc.SampleDesc.Count = 1;

			break;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	D3D11_BUFFER_DESC vbDesc;

				indexlist.push_back(idx.vertex_index);





		KEY_PRESS_SURFACE_RIGHT,



	m_IndexCount = icount;



	scDesc.SampleDesc.Count = 1;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;





	SDL_FreeSurface(bmp);

			{

	{

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

			exit(1);



};



		delete[] pIList;



	for (size_t s = 0; s < shapes.size(); s++)



	if (FAILED(hr))

			switch (e.key.keysym.sym)



				break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		return hr;

		return hr;





		size_t index_offset = 0;  // インデントのオフセット

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	int     vcount = vertexlist.size();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	{



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	irData.SysMemSlicePitch = 0;

	Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pRenderTargetView);

}



	//vector<Vertex> vertex_t;



	m_Viewport.Height = (FLOAT)rect.Height();

			{



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			}



	cbDesc.StructureByteStride = 0;



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

}
		{

	m_pVertexBuffer = NULL;

	//vector<WORD> index_t;



	for (int i = 0; i < 3; i++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	for (int j = 0; j < icount; j++)

		SDL_RenderClear(ren);

	D3D11_BUFFER_DESC ibDesc;

struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//Key press surfaces constants



	D3D11_SAMPLER_DESC smpDesc;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	delete[] pIList;

	//vector<WORD> index_t;

	return 0;

			for (size_t v = 0; v < fv; v++)

	{

		return hr;

		&materials,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				break;



	XMStoreFloat4(&clb.eyePos, eye);





			index_offset += fv;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//頂点レイアウト作成

}

	SDL_DestroyTexture(tex);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



struct ConstantMatrixBuffer {



	vbDesc.StructureByteStride = 0;



		&m_pImmediateContext);

	float    fov = XMConvertToRadians(20.0f);

	scDesc.Windowed = TRUE;

	std::vector<tinyobj::shape_t> shapes;

	return hr;



	cbDesc.MiscFlags = 0;

			index_offset += num_vertices;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	ibDesc.StructureByteStride = 0;

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pTextureView);

	scDesc.SampleDesc.Count = 1;

		if (!ret)

				// access to vertex

}

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

	m_Angle += XMConvertToRadians(1.0f);

			case SDLK_UP:

	{

	cbDesc.MiscFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	enum KeyPressSurfaces

	cbDesc.StructureByteStride = 0;



		//User presses a key



		return hr;

	SAFE_RELEASE(m_pSampler);

	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



		return hr;

	std::string error;

			// Loop over vertices in the face.

			}

	std::string error;

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pIndexBuffer);

		SDL_RenderClear(ren);

	ibDesc.MiscFlags = 0;


