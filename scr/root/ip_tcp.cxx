

	vrData.pSysMem = &pVList[0];

{



	//Key press surfaces constants



	SAFE_RELEASE(m_pSwapChain);

	}

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);



		KEY_PRESS_SURFACE_DOWN,



	SAFE_RELEASE(m_pDepthStencilTexture);

	{

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	//First we need to start up SDL, and make sure it went ok

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	txDesc.SampleDesc.Quality = 0;

	m_pTextureView = NULL;



				break;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

 */



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	scDesc.BufferDesc.Height = rect.Height();

{

		//User presses a key

	vrData.SysMemSlicePitch = 0;

	SDL_DestroyTexture(tex);

	//頂点シェーダー生成

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pTexture);

	{

				break;

	if (FAILED(hr))

		&m_pDevice,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			{

	if (FAILED(hr))

}

			switch (e.key.keysym.sym)

	SAFE_RELEASE(m_pTextureView);

		{

	//vector<WORD> index_t;

	SDL_Quit();

HRESULT CD3DTest::Create(HWND hwnd)

		{

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		&shapes,

	scDesc.SampleDesc.Count = 1;

	m_pSwapChain = NULL;

		return hr;

		flags,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;



	SDL_Event e;

		return hr;

	//Key press surfaces constants



	m_pTexture = NULL;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



};

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	D3D11_BUFFER_DESC vbDesc;

	scDesc.BufferCount = 1;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	return 0;

	SAFE_RELEASE(m_pImmediateContext);

		return 1;



	vbDesc.StructureByteStride = 0;

	{

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	delete[] pVList;

		return hr;

{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	std::vector<tinyobj::shape_t> shapes;

		else if (e.type == SDL_KEYDOWN)

		KEY_PRESS_SURFACE_TOTAL



	for (int i = 0; i < vcount; i++)

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	return;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	for (const auto& shape : shapes)

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//First we need to start up SDL, and make sure it went ok

	}*/



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//頂点レイアウト作成



		{

/*

	scDesc.BufferDesc.Width = rect.Width();

	//頂点レイアウト作成

		{

	Release();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	m_pImmediateContext = NULL;

		1,

				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	XMFLOAT4 attenuate;         //減衰(a,b,c)





struct ConstantLightBuffer {

	vbDesc.StructureByteStride = 0;



	CRect                rect;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (m_pImmediateContext)

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

			case SDLK_UP:



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	auto& materials = reader.GetMaterials();



	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_Viewport.Width = (FLOAT)rect.Width();

				tinyobj::real_t ty =

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}

			case SDLK_RIGHT:

	WORD   icount = indexList.size();

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	//Vertex* pVList = new Vertex[vcount];

	m_pTextureView = NULL;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//インデックスバッファ作成

			//Select surfaces based on key press

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			for (size_t v = 0; v < num_vertices; v++)





	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include "DirectXManager.h"

	}

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Quit();



struct ConstantLightBuffer {

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	cbDesc.CPUAccessFlags = 0;

		}

			exit(1);





};

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pLightBuffer);

struct ConstantMaterial {

	if (FAILED(hr))

struct ConstantLightBuffer {

	ibDesc.StructureByteStride = 0;

				break;

				// access to vertex

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		SDL_RenderClear(ren);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	vrData.SysMemSlicePitch = 0;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	XMFLOAT4 specular;          //反射(r,g,b)



			// Loop over vertices in the face.

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyRenderer(ren);



		m_pImmediateContext->ClearState();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//ビューポート設定

	if (FAILED(hr))

			case SDLK_UP:

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	txDesc.Width = rect.Width();

			{

			case SDLK_DOWN:

	{

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMStoreFloat4(&clb.material.specular, materialSpecular);





		{

				// access to vertex

	return hr;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	}



			case SDLK_RIGHT:

	{

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	//First we need to start up SDL, and make sure it went ok

	m_Viewport.Height = (FLOAT)rect.Height();

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDevice);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	ibDesc.ByteWidth = sizeof(WORD) * icount;



	if (FAILED(hr))

		pVList[i] = vertexlist[i];

	for (int i = 0; i < vcount; i++)

	ID3D11Texture2D* pBackBuffer;

				// access to vertex

	SAFE_RELEASE(m_pRenderTargetView);

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	scDesc.SampleDesc.Quality = 0;

	SDL_FreeSurface(bmp);

	SAFE_RELEASE(m_pVertexShader);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_Delay(1000);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	cbDesc.StructureByteStride = 0;



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

		}



struct ConstantLight {

		return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);





	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

int main(int, char**)

	for (const auto& shape : shapes)

	//ビューポート設定

		pVList[i] = vertexlist[i];



{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

};

		KEY_PRESS_SURFACE_DEFAULT,

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	SAFE_RELEASE(m_pVertexBuffer);

	m_IndexCount = icount;

	ibDesc.MiscFlags = 0;

		exit(1);

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.StructureByteStride = 0;

	vector<WORD> indexList;

	SAFE_RELEASE(m_pTextureView);



		cout << "SDL_INIT_ERROR" << endl;

	m_pLightBuffer = NULL;

	float    fov = XMConvertToRadians(20.0f);

				indexlist.push_back(idx.vertex_index);

	{



	XMFLOAT4X4 world;

	SDL_FreeSurface(suf);

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



		D3D11_SDK_VERSION,



	//頂点レイアウト作成



			for (size_t v = 0; v < fv; v++)

	return hr;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		&m_pSwapChain,

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 pos;               //座標(x,y,z)

};

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	return;







			for (size_t v = 0; v < fv; v++)



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;





			}

{

	WORD   icount = indexList.size();





	for (int j = 0; j < icount; j++)

	vbDesc.StructureByteStride = 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SAFE_RELEASE(m_pDepthStencilView);





	if (!reader.Warning().empty())

			case SDLK_LEFT:

	ConstantLight    pntLight; //点光源

	while (SDL_PollEvent(&e) != 0)

struct ConstantMaterial {

	m_pLightBuffer = NULL;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

{



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	SDL_DestroyWindow(win);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			for (size_t v = 0; v < num_vertices; v++)

	HRESULT              hr;

	LoadObj(vertexlist, indexList);



	enum KeyPressSurfaces

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	{

				break;

	if (FAILED(hr))

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	ConstantLight    pntLight; //点光源

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		{



		&scDesc,

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_DestroyRenderer(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t ty =



	//インデックスバッファ作成

	if (FAILED(hr))

		return hr;

	//頂点レイアウト作成

		&attrib,

	}

	txDesc.ArraySize = 1;

#include "DirectXManager.h"

	auto& attrib = reader.GetAttrib();

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D11_BUFFER_DESC vbDesc;



using std::cout; using std::endl;

	SAFE_RELEASE(m_pPixelShader);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_Angle += XMConvertToRadians(1.0f);

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	SDL_DestroyRenderer(ren);

	SDL_DestroyRenderer(ren);



		&m_pSwapChain,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pSwapChain);



	//頂点レイアウト作成

	m_IndexCount = 0;

	for (int i = 0; i < vcount; i++)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		return hr;



	auto& attrib = reader.GetAttrib();

	{







	D3D11_BUFFER_DESC vbDesc;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

	ConstantLight    pntLight; //点光源

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.TopLeftX = 0;

	WORD* pIList = new WORD[icount];



	//vector<WORD> index_t;

		1,



			int num_vertices = shape.mesh.num_face_vertices[f];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	for (int i = 0; i < 3; i++)

	delete[] pVList;

	//テクスチャ読み込み

	if (FAILED(hr))

	{

	{

	SAFE_RELEASE(m_pInputLayout);



		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

CD3DTest::~CD3DTest()

	SAFE_RELEASE(m_pDevice);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_DestroyWindow(win);

	m_pSwapChain = NULL;



{

	SDL_Quit();

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vector<WORD> indexList;

	SDL_DestroyRenderer(ren);



	txDesc.Height = rect.Height();

struct ConstantLight {

	float    farZ = 100.0f;

				break;

	ibDesc.StructureByteStride = 0;

			}

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	auto& materials = reader.GetMaterials();

};

	irData.pSysMem = &pIList[0];

	SDL_DestroyTexture(tex);



{

		KEY_PRESS_SURFACE_TOTAL

	float    fov = XMConvertToRadians(20.0f);

			index_offset += fv;

/*

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (const auto& shape : shapes)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	cbDesc.StructureByteStride = 0;

	}

{

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_Angle += XMConvertToRadians(1.0f);



	m_Viewport.MaxDepth = 1.0f;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

{

				break;

		D3D_DRIVER_TYPE_HARDWARE,

		{

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	//ピクセルシェーダー生成

	UINT strides = sizeof(Vertex);

		SDL_RenderPresent(ren);

	if (!reader.ParseFromFile(inputfile, reader_config))

	SDL_DestroyTexture(tex);

		return hr;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	cbDesc.StructureByteStride = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

			}

			for (size_t v = 0; v < fv; v++)

	auto& shapes = reader.GetShapes();

		}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

{

		return hr;

	scDesc.OutputWindow = hwnd;

				tinyobj::real_t tx =



int main(int, char**)

			{

	if (FAILED(hr))



		}



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_FreeSurface(suf);

	txDesc.CPUAccessFlags = 0;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			//Select surfaces based on key press

		flags,



		}



	ConstantMaterial material; //物体の質感

		return hr;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		1,

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		&m_pDevice,



	//頂点シェーダー生成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



		return hr;

	CRect                rect;

	m_Viewport.TopLeftX = 0;



	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))

		// Loop over faces(polygon)

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	XMFLOAT4         ambient;  //環境光(r,g,b)

			case SDLK_UP:

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	D3D11_BUFFER_DESC ibDesc;

	m_pVertexBuffer = NULL;

	XMFLOAT4         eyePos;   //視点座標

	//Clean up our objects and quit

	SAFE_RELEASE(m_pImmediateContext);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

}

	vrData.SysMemSlicePitch = 0;

	ConstantLight    pntLight; //点光源

struct ConstantLightBuffer {

		D3D_DRIVER_TYPE_HARDWARE,

	XMStoreFloat4(&clb.eyePos, eye);

	{

 */

	m_IndexCount = icount;

		KEY_PRESS_SURFACE_RIGHT,

	XMFLOAT4 specular;          //反射(r,g,b)



	scDesc.BufferDesc.Width = rect.Width();

			// Loop over vertices in the face.

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pVertexShader);

#include <SDL.h>

	XMFLOAT4         eyePos;   //視点座標

	if (FAILED(hr))

	SDL_FreeSurface(suf);

		pLevels,

	delete[] pIList;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyRenderer(ren);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

CD3DTest::CD3DTest()

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		return hr;

	cbDesc.CPUAccessFlags = 0;





	reader_config.mtl_search_path = "./"; // Path to material files

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pIndexBuffer = NULL;

	m_pIndexBuffer = NULL;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



		cout << "SDL_INIT_ERROR" << endl;

	bool ret = tinyobj::LoadObj(

	if (m_pImmediateContext)



	txDesc.SampleDesc.Count = 1;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	cbDesc.StructureByteStride = 0;

	D3D11_SUBRESOURCE_DATA irData;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				break;



	cbDesc.MiscFlags = 0;

	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	XMFLOAT4 pos;               //座標(x,y,z)



struct ConstantLight {

	return;

	txDesc.Height = rect.Height();





}
	SDL_DestroyWindow(win);

	m_Viewport.TopLeftX = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	m_Viewport.Height = (FLOAT)rect.Height();

	SAFE_RELEASE(m_pVertexShader);

	ID3D11Texture2D* pBackBuffer;



	ibDesc.MiscFlags = 0;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_Viewport.TopLeftY = 0;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

		KEY_PRESS_SURFACE_RIGHT,

		m_pImmediateContext->ClearState();

			}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		return hr;

				break;

	};

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		return 1;



	txDesc.ArraySize = 1;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

}

#include <SDL.h>

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	txDesc.Height = rect.Height();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			for (size_t v = 0; v < fv; v++)

	m_Viewport.TopLeftX = 0;

}

		NULL,



	m_Viewport.Height = (FLOAT)rect.Height();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			default:

	m_pDepthStencilTexture = NULL;

	txDesc.ArraySize = 1;

}
	ConstantLightBuffer clb;

	}

	{

	m_pRenderTargetView = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		SDL_RenderPresent(ren);

struct ConstantLightBuffer {

	XMFLOAT4 pos;               //座標(x,y,z)

	//Vertex* pVList = new Vertex[vcount];

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	Release();

	ibDesc.MiscFlags = 0;

{

				break;

{

	SDL_Event e;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	//vector<WORD> index_t;

	scDesc.BufferDesc.Height = rect.Height();



int main(int, char**)

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

}

	m_pVertexShader = NULL;

}

	irData.SysMemSlicePitch = 0;

	while (SDL_PollEvent(&e) != 0)



		return hr;



	D3D_FEATURE_LEVEL level;

	scDesc.Windowed = TRUE;

	scDesc.BufferCount = 1;



	D3D11_BUFFER_DESC ibDesc;

	for (int i = 0; i < 3; i++)





	std::vector<tinyobj::material_t> materials;

	ConstantMaterial material; //物体の質感

	float    fov = XMConvertToRadians(20.0f);

{

	scDesc.BufferDesc.Width = rect.Width();



	std::string imagePath = "hello.bmp";

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//深度ステンシルバッファ作成

		&m_pDevice,

	vrData.pSysMem = &pVList[0];

	return 0;

	SAFE_RELEASE(m_pSwapChain);

}

			{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

void CD3DTest::Release()



	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

struct ConstantLightBuffer {

	m_pSwapChain = NULL;

	ibDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

			int num_vertices = shape.mesh.num_face_vertices[f];

				break;

		&error,

	irData.SysMemPitch = 0;

	txDesc.CPUAccessFlags = 0;





				WORD index = idx.vertex_index;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

		m_pImmediateContext->ClearState();



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	std::vector<tinyobj::shape_t> shapes;

			//Select surfaces based on key press



	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)





	if (FAILED(hr))

	m_pSwapChain = NULL;

	m_pMatrixBuffer = NULL;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vector<WORD> indexList;

	SDL_Event e;

			for (size_t v = 0; v < num_vertices; v++)

	cbDesc.MiscFlags = 0;

	//vector<WORD> index_t;



};







	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



void CD3DTest::Release()

	//First we need to start up SDL, and make sure it went ok

	m_VertexCount = 0;



				break;

				tinyobj::real_t ty =

		SDL_Delay(1000);

{

	vector<Vertex> vertexlist;

	D3D_FEATURE_LEVEL level;

		return hr;

	XMFLOAT4X4 world;

	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.MiscFlags = 0;



	enum KeyPressSurfaces

			case SDLK_LEFT:

	XMFLOAT4 pos;               //座標(x,y,z)



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ibDesc.StructureByteStride = 0;

		return hr;

		1,

	{

		return hr;

			switch (e.key.keysym.sym)

				indexlist.push_back(idx.vertex_index);

				WORD index = idx.vertex_index;

	cbDesc.CPUAccessFlags = 0;

	}*/

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

using std::cout; using std::endl;

{

	SDL_DestroyTexture(tex);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	cbDesc.StructureByteStride = 0;

int SEGMENT = 36;

			}

	UINT strides = sizeof(Vertex);



	vbDesc.Usage = D3D11_USAGE_DEFAULT;





			{

	if (m_pImmediateContext)



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	vrData.SysMemPitch = 0;

		return hr;



	scDesc.SampleDesc.Quality = 0;

};



	return 0;

	UINT strides = sizeof(Vertex);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

struct ConstantLight {

	SDL_FreeSurface(suf);



	/*

	SAFE_RELEASE(m_pImmediateContext);

	{



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//頂点バッファ作成



	XMFLOAT4X4 view;

	scDesc.Windowed = TRUE;

		D3D_DRIVER_TYPE_HARDWARE,



	D3D11_SUBRESOURCE_DATA irData;



}
	auto& attrib = reader.GetAttrib();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pMatrixBuffer);

			default:

	SDL_DestroyWindow(win);

		}

	m_Viewport.TopLeftX = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		&error,

	}

	std::string imagePath = "hello.bmp";

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Angle += XMConvertToRadians(1.0f);

				// access to vertex





	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pRenderTargetView);

			switch (e.key.keysym.sym)

	}

	if (m_pImmediateContext)

	Release();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

{

	ibDesc.MiscFlags = 0;

	};

		return hr;

	D3D11_TEXTURE2D_DESC txDesc;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ConstantMatrixBuffer cmb;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	ConstantLightBuffer clb;

		KEY_PRESS_SURFACE_UP,

		D3D_DRIVER_TYPE_HARDWARE,





		return hr;

void CD3DTest::Render()



				WORD index = idx.vertex_index;

			}



	vbDesc.MiscFlags = 0;

			switch (e.key.keysym.sym)

		if (!reader.Error().empty())

	SAFE_RELEASE(m_pDepthStencilTexture);

	SDL_Quit();



	auto& materials = reader.GetMaterials();

	D3D11_BUFFER_DESC cbDesc;

	m_Viewport.TopLeftY = 0;

	{

};

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



			switch (e.key.keysym.sym)



		{

	std::string inputfile = "test.obj";

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SAFE_RELEASE(m_pInputLayout);

		&level,

	{

	txDesc.MiscFlags = 0;



	dsDesc.Format = txDesc.Format;

		return hr;

	{



	//Vertex* pVList = new Vertex[vcount];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

}

	tinyobj::ObjReader reader;



	Release();

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		cout << "SDL_INIT_ERROR" << endl;

		if (e.type == SDL_QUIT)

		KEY_PRESS_SURFACE_DEFAULT,

		return hr;

		return 1;



}
	m_pDepthStencilTexture = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

			case SDLK_DOWN:

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.StructureByteStride = 0;

	}

	//vector<WORD> index_t;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		size_t index_offset = 0;  // インデントのオフセット

		{

	}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	cbDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_LEFT,

	CRect                rect;

	SAFE_RELEASE(m_pIndexBuffer);

		pIList[j] = indexList[j];

	{

	if (!reader.ParseFromFile(inputfile, reader_config))

	Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_DEFAULT,

		&materials,

				WORD index = idx.vertex_index;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();





	m_pSwapChain->Present(0, 0);

	//Clean up our objects and quit



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



CD3DTest::CD3DTest()

	m_pInputLayout = NULL;

	pBackBuffer->Release();

	if (FAILED(hr))

	if (m_pImmediateContext)

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	//First we need to start up SDL, and make sure it went ok

		KEY_PRESS_SURFACE_LEFT,

	// Loop over shapes

	{

	{

	Release();

	if (FAILED(hr))

	{

	cbDesc.StructureByteStride = 0;

HRESULT CD3DTest::Create(HWND hwnd)

	{



				WORD index = idx.vertex_index;

HRESULT CD3DTest::Create(HWND hwnd)

	//頂点シェーダー生成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		if (!ret)



	//ビューポート設定

	//Key press surfaces constants



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	auto& attrib = reader.GetAttrib();

	UINT flags = 0;

struct ConstantMatrixBuffer {



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			{





 * Lesson 1: Hello World!





		KEY_PRESS_SURFACE_RIGHT,

	while (SDL_PollEvent(&e) != 0)

	{

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pPixelShader);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.StructureByteStride = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

};

		SDL_RenderPresent(ren);

		return hr;

		}

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pVertexBuffer);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	vrData.SysMemSlicePitch = 0;

		return hr;



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.CPUAccessFlags = 0;



		//User presses a key

	m_pSwapChain = NULL;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



};

	ibDesc.StructureByteStride = 0;

	WORD   icount = indexList.size();



	cbDesc.CPUAccessFlags = 0;

#include <SDL.h>

		return hr;

	scDesc.BufferDesc.Width = rect.Width();

				// access to vertex

	m_VertexCount = vcount;

	ibDesc.StructureByteStride = 0;

		//User requests quit

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

}

		D3D11_SDK_VERSION,



}

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



struct ConstantLight {

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

				break;



	if (FAILED(hr))



			case SDLK_UP:

	SDL_DestroyRenderer(ren);

	reader_config.mtl_search_path = "./"; // Path to material files

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);





	//Clean up our objects and quit

		exit(1);

	SAFE_RELEASE(m_pTexture);

		return hr;

struct ConstantLight {

		}

	SAFE_RELEASE(m_pInputLayout);

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	SAFE_RELEASE(m_pTexture);

			default:

#include <SDL.h>

};

	SDL_FreeSurface(bmp);



	D3D11_SAMPLER_DESC smpDesc;











struct ConstantMatrixBuffer {

using std::cout; using std::endl;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	float    fov = XMConvertToRadians(20.0f);



	}



	vbDesc.StructureByteStride = 0;

#include <iostream>

	m_IndexCount = icount;

	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.Height = rect.Height();

			break;

	SDL_Event e;

			// Loop over vertices in the face.

			default:

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		D3D11_SDK_VERSION,

	XMFLOAT4 ambient;           //環境(r,g,b)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	scDesc.BufferDesc.Height = rect.Height();

}

	//深度ステンシルバッファ作成

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	ConstantMatrixBuffer cmb;

	for (int i = 0; i < vcount; i++)



	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	irData.SysMemPitch = 0;

	if (FAILED(hr))

	return hr;

	//Vertex* pVList = new Vertex[vcount];





	XMFLOAT4 diffuse;           //拡散(r,g,b)

	}

#endif



	::ZeroMemory(&scDesc, sizeof(scDesc));

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_Angle += XMConvertToRadians(1.0f);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	//Vertex* pVList = new Vertex[vcount];

			index_offset += fv;



	}

}

	//頂点バッファ作成

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))



	SAFE_RELEASE(m_pTexture);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.ArraySize = 1;



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	ibDesc.StructureByteStride = 0;





#include "DirectXManager.h"

	XMFLOAT4X4 projection;

	SAFE_RELEASE(m_pIndexBuffer);

	}

	}

		delete[] pIList;

	SDL_FreeSurface(bmp);

	txDesc.Height = rect.Height();

#include <iostream>

		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//Create Index

	::GetClientRect(hwnd, &rect);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pInputLayout);



{

	tinyobj::attrib_t attrib;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	XMFLOAT4         eyePos;   //視点座標

	return hr;

void CD3DTest::Release()

	SAFE_RELEASE(m_pTexture);

	LoadObj(vertexlist, indexList);

	ibDesc.MiscFlags = 0;

	{

		pLevels,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	};

	SAFE_RELEASE(m_pSwapChain);

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



			int num_vertices = shape.mesh.num_face_vertices[f];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	if (!error.empty())



		exit(1);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	SDL_DestroyWindow(win);

		&m_pImmediateContext);





	m_IndexCount = icount;



		R"(cube.obj)");

	m_pLightBuffer = NULL;

	m_pTextureView = NULL;

	XMFLOAT4X4 world;

	ConstantMaterial material; //物体の質感



	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

				indexlist.push_back(idx.vertex_index);

	D3D11_BUFFER_DESC ibDesc;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		SDL_RenderPresent(ren);

		delete[] pIList;

			case SDLK_RIGHT:

	ZeroMemory(&txDesc, sizeof(txDesc));

#include "DirectXManager.h"



	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

#include <iostream>

		if (!reader.Error().empty())

#include <iostream>

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderClear(ren);

	if (FAILED(hr))

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

		return hr;

	vrData.pSysMem = &pVList[0];

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

HRESULT CD3DTest::Create(HWND hwnd)

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,



	enum KeyPressSurfaces



	cbDesc.CPUAccessFlags = 0;

				break;

				break;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	scDesc.Windowed = TRUE;

	reader_config.mtl_search_path = "./"; // Path to material files

	if (!reader.ParseFromFile(inputfile, reader_config))

	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	if (FAILED(hr))

	XMFLOAT4X4 world;

	ConstantLightBuffer clb;

		flags,

			break;





	SAFE_RELEASE(m_pDepthStencilTexture);

	txDesc.Width = rect.Width();

		return hr;

	m_Viewport.MinDepth = 0.0f;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_Viewport.Width = (FLOAT)rect.Width();

	for (int i = 0; i < vcount; i++)

		1,

	if (FAILED(hr))



int main(int, char**)

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pSampler);



	vbDesc.StructureByteStride = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				indexlist.push_back(idx.vertex_index);



		SDL_RenderPresent(ren);

int main(int, char**)





	m_VertexCount = 0;

#include <SDL.h>

		// Loop over faces(polygon)

{

	::ZeroMemory(&scDesc, sizeof(scDesc));

		KEY_PRESS_SURFACE_LEFT,

	return 0;

		KEY_PRESS_SURFACE_UP,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	m_pSwapChain = NULL;

		// Loop over faces(polygon)

	}

		1,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{

void CD3DTest::Release()

	float    farZ = 100.0f;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	ibDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pDepthStencilView = NULL;

	XMStoreFloat4(&clb.eyePos, eye);



		SDL_RenderCopy(ren, tex, NULL, NULL);

};

			}



CD3DTest::~CD3DTest()



	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	vbDesc.MiscFlags = 0;

	dsDesc.Texture2D.MipSlice = 0;

			case SDLK_RIGHT:

	std::vector<tinyobj::material_t> materials;

		delete[] pVList;

	if (!reader.Warning().empty())

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		KEY_PRESS_SURFACE_UP,

	SDL_DestroyWindow(win);



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	{

	for (int i = 0; i < vcount; i++)



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		pIList[j] = indexList[j];

		pLevels,

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))

	WORD   icount = indexList.size();



			}

		return hr;

		pIList[j] = indexList[j];

	m_pMatrixBuffer = NULL;

	SAFE_RELEASE(m_pTextureView);

	{

		return hr;

		return hr;



	reader_config.mtl_search_path = "./"; // Path to material files

	}*/



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		return hr;

	if (FAILED(hr))





				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	SAFE_RELEASE(m_pVertexBuffer);

		}

		{

	cbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.ambient, lightAmbient);



}

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

		// Loop over faces(polygon)



	if (FAILED(hr))



		&m_pImmediateContext);

	if (m_pImmediateContext)

		if (e.type == SDL_QUIT)



	return 0;

	SDL_DestroyTexture(tex);

	int     vcount = vertexlist.size();

	scDesc.SampleDesc.Quality = 0;



	if (FAILED(hr))

	//Key press surfaces constants

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		}





	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 view;

	txDesc.CPUAccessFlags = 0;





		return hr;

		KEY_PRESS_SURFACE_TOTAL

	m_pTexture = NULL;



				tinyobj::real_t tx =

};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//Create Index

				WORD index = idx.vertex_index;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	SDL_DestroyWindow(win);

	m_pTextureView = NULL;

	{

	if (FAILED(hr))

	m_pTexture = NULL;

	XMFLOAT4X4 world;

	vector<WORD> indexList;



	tinyobj::ObjReader reader;

	if (FAILED(hr))

	}

		//User requests quit

int SEGMENT = 36;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			break;

	if (FAILED(hr))



	::GetClientRect(hwnd, &rect);

	std::string inputfile = "test.obj";

	D3D11_SUBRESOURCE_DATA irData;

	{

			case SDLK_RIGHT:

}



		if (!ret)

{



}
			for (size_t v = 0; v < num_vertices; v++)







	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	m_pVertexShader = NULL;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//ビューポート設定

	tinyobj::ObjReader reader;

	m_pSwapChain = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	pBackBuffer->Release();

};

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	dsDesc.Texture2D.MipSlice = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	return hr;

				tinyobj::real_t tx =





	m_Viewport.TopLeftY = 0;

};

	tinyobj::ObjReader reader;

int main(int, char**)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



HRESULT CD3DTest::Create(HWND hwnd)

	{

	std::string inputfile = "test.obj";

	m_pDevice = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMFLOAT4 pos;               //座標(x,y,z)

	SAFE_RELEASE(m_pIndexBuffer);

	if (!error.empty())

	SDL_DestroyWindow(win);





		return 1;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);





		{

CD3DTest::~CD3DTest()

				break;

	{

	vrData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	{

		cout << "SDL_INIT_ERROR" << endl;

{

{

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SAFE_RELEASE(m_pVertexShader);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

{



		&m_pImmediateContext);

		D3D11_SDK_VERSION,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	SAFE_RELEASE(m_pTextureView);

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		&m_pDevice,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	//深度ステンシルバッファ作成

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			break;

	//頂点レイアウト作成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	scDesc.BufferDesc.Width = rect.Width();

CD3DTest::~CD3DTest()



	::ZeroMemory(&scDesc, sizeof(scDesc));

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	/*

		&scDesc,



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Clean up our objects and quit

	m_VertexCount = vcount;

	if (!reader.ParseFromFile(inputfile, reader_config))

	SAFE_RELEASE(m_pIndexBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	}

{

		&attrib,

	m_pLightBuffer = NULL;



		KEY_PRESS_SURFACE_RIGHT,

	DXGI_SWAP_CHAIN_DESC scDesc;







		&m_pImmediateContext);

		}

	m_pDevice = NULL;

	SAFE_RELEASE(m_pLightBuffer);

		SDL_RenderPresent(ren);



			switch (e.key.keysym.sym)

	CRect                rect;

 * Lesson 1: Hello World!

	enum KeyPressSurfaces

			case SDLK_RIGHT:

		return hr;

	m_pLightBuffer = NULL;

	XMFLOAT4X4 projection;

void CD3DTest::Release()

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	D3D11_SUBRESOURCE_DATA irData;

		//User presses a key

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_BUFFER_DESC vbDesc;

		// Loop over faces(polygon)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	dsDesc.Format = txDesc.Format;

			default:

	m_pTextureView = NULL;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



		&m_pSwapChain,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			default:



				indexlist.push_back(idx.vertex_index);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	if (FAILED(hr))

	XMFLOAT4 ambient;           //環境(r,g,b)

	std::vector<tinyobj::shape_t> shapes;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	Release();



	enum KeyPressSurfaces

		return hr;

	txDesc.MiscFlags = 0;

	scDesc.SampleDesc.Count = 1;



	SAFE_RELEASE(m_pDepthStencilView);

}
	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	m_Viewport.MinDepth = 0.0f;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&error,

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

struct ConstantLight {

		size_t index_offset = 0;  // インデントのオフセット

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	if (!reader.Warning().empty())



	XMFLOAT4 ambient;           //環境(r,g,b)

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

				break;

		return hr;

	vector<Vertex> vertexlist;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	D3D11_BUFFER_DESC ibDesc;



	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ConstantLightBuffer clb;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pDepthStencilView);

#include <SDL.h>

				indexlist.push_back(index);



	}

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pRenderTargetView = NULL;

	XMFLOAT4X4 view;



	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	ibDesc.ByteWidth = sizeof(WORD) * icount;





				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	}

	m_Viewport.TopLeftX = 0;

	{

			for (size_t v = 0; v < fv; v++)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	txDesc.MipLevels = 1;

	m_Viewport.Width = (FLOAT)rect.Width();

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

		SDL_RenderClear(ren);



		SDL_RenderCopy(ren, tex, NULL, NULL);





				indexlist.push_back(idx.vertex_index);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

void CD3DTest::Release()

struct ConstantMatrixBuffer {

				break;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SDL_DestroyWindow(win);

	if (m_pImmediateContext)

		SDL_RenderCopy(ren, tex, NULL, NULL);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	m_pInputLayout = NULL;

	XMStoreFloat4(&clb.ambient, lightAmbient);

	}



	if (!reader.ParseFromFile(inputfile, reader_config))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				break;

	{

	if (!reader.Warning().empty())

		if (e.type == SDL_QUIT)

	SAFE_RELEASE(m_pInputLayout);

		&error,

			{

	enum KeyPressSurfaces



	cbDesc.CPUAccessFlags = 0;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			// Loop over vertices in the face.

	}

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	delete[] pIList;

	Vertex* pVList = new Vertex[vcount];

	m_IndexCount = 0;

			{

	SAFE_RELEASE(m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_TOTAL

			index_offset += num_vertices;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	vbDesc.MiscFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

		}

		&materials,

		&shapes,

				break;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.MiscFlags = 0;



				break;

 */



		flags,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pMatrixBuffer = NULL;

	pBackBuffer->Release();

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pTexture);



		return hr;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		pVList[i] = vertexlist[i];

	scDesc.OutputWindow = hwnd;



	ZeroMemory(&txDesc, sizeof(txDesc));

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4 ambient;           //環境(r,g,b)



	vbDesc.CPUAccessFlags = 0;

	m_Viewport.TopLeftY = 0;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			//Select surfaces based on key press

	SAFE_RELEASE(m_pVertexShader);

		SDL_Delay(1000);



			{



				vertex.push_back(vertex_tmp);

		}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	}

	//Create Index

		KEY_PRESS_SURFACE_DEFAULT,

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Quit();

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	UINT strides = sizeof(Vertex);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	SAFE_RELEASE(m_pVertexBuffer);

			exit(1);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

			//Select surfaces based on key press

};





	}

{



	m_pMatrixBuffer = NULL;

	//深度ステンシルバッファ作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	return;

HRESULT CD3DTest::Create(HWND hwnd)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);

int main(int, char**)





#include "DirectXManager.h"

		SDL_Delay(1000);

				break;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMFLOAT4X4 view;

			break;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



		KEY_PRESS_SURFACE_DOWN,

	DXGI_SWAP_CHAIN_DESC scDesc;

	ConstantLight    pntLight; //点光源

	int     vcount = vertexlist.size();



	enum KeyPressSurfaces

		{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	//Key press surfaces constants

		SDL_Delay(1000);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	//ビューポート設定

	delete[] pVList;

			{

			case SDLK_DOWN:

	m_Viewport.TopLeftY = 0;



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	D3D11_BUFFER_DESC ibDesc;

	{

			int num_vertices = shape.mesh.num_face_vertices[f];



	SDL_DestroyWindow(win);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		KEY_PRESS_SURFACE_RIGHT,

		D3D11_SDK_VERSION,



		{



	//Create Index



	}

	ConstantMatrixBuffer cmb;



	float    farZ = 100.0f;

		return hr;

			break;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

};

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.BufferDesc.Height = rect.Height();



}
				WORD index = idx.vertex_index;

	SDL_Event e;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_DestroyRenderer(ren);

	for (const auto& shape : shapes)

		m_pImmediateContext->ClearState();

}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);





	}

	SAFE_RELEASE(m_pSwapChain);

	float    farZ = 100.0f;

	vrData.SysMemPitch = 0;

	pBackBuffer->Release();

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

			index_offset += num_vertices;

	m_pSampler = NULL;

	SDL_DestroyWindow(win);

			}



	scDesc.Windowed = TRUE;



	SDL_Event e;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	std::vector<tinyobj::material_t> materials;

	if (m_pImmediateContext)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		&error,

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



	cbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	if (FAILED(hr))



	}

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	txDesc.SampleDesc.Count = 1;

	}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	//ピクセルシェーダー生成

using std::cout; using std::endl;

				vertex.push_back(vertex_tmp);



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_IndexCount = icount;





		&shapes,

	delete[] pIList;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	tinyobj::ObjReader reader;

	XMFLOAT4         eyePos;   //視点座標



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	XMStoreFloat4(&clb.eyePos, eye);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;



#include <iostream>



	SDL_Event e;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	auto& shapes = reader.GetShapes();

			index_offset += num_vertices;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

		size_t index_offset = 0;  // インデントのオフセット

		cout << "SDL_INIT_ERROR" << endl;

{

	m_pImmediateContext = NULL;

int main(int, char**)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_pRenderTargetView = NULL;





	SDL_Quit();

		return hr;

		{



}

	for (int i = 0; i < 3; i++)

	return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

		return 1;

	return 0;

	for (size_t s = 0; s < shapes.size(); s++)

	}

	if (FAILED(hr))

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4 specular;          //反射(r,g,b)

		}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				break;

		size_t index_offset = 0;

{



				break;



	delete[] pVList;

	XMFLOAT4X4 view;

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

	while (SDL_PollEvent(&e) != 0)

	txDesc.SampleDesc.Count = 1;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



}

	/*

	if (FAILED(hr))

		pLevels,

	Release();

		{



	//First we need to start up SDL, and make sure it went ok



	ibDesc.CPUAccessFlags = 0;





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		return hr;

#include <iostream>





	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	if (!reader.Warning().empty())





		SDL_RenderClear(ren);

		NULL,

	for (int j = 0; j < icount; j++)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	ZeroMemory(&dsDesc, sizeof(dsDesc));



};

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	Vertex* pVList = new Vertex[vcount];







	D3D11_SUBRESOURCE_DATA vrData;

	if (FAILED(hr))

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	{

	{

		{





	m_pSwapChain->Present(0, 0);

void CD3DTest::Render()

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



	D3D11_BUFFER_DESC cbDesc;

	txDesc.Width = rect.Width();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	if (FAILED(hr))



		&attrib,

	ibDesc.ByteWidth = sizeof(WORD) * icount;

{

	vrData.SysMemSlicePitch = 0;

	for (size_t s = 0; s < shapes.size(); s++)

{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_pSampler = NULL;

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pVertexBuffer);

	for (int i = 0; i < vcount; i++)

		return hr;

	m_pSampler = NULL;

	XMFLOAT4X4 projection;



	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	UINT flags = 0;

		SDL_RenderPresent(ren);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		SDL_Delay(1000);

	SDL_DestroyWindow(win);

	XMFLOAT4 specular;          //反射(r,g,b)



	m_pMatrixBuffer = NULL;

	if (FAILED(hr))

	XMFLOAT4X4 view;



		SDL_Delay(1000);

	if (FAILED(hr))

	reader_config.mtl_search_path = "./"; // Path to material files

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		R"(cube.obj)");

				vertex.push_back(vertex_tmp);

	{





}

	for (size_t s = 0; s < shapes.size(); s++)



		return hr;

	}

	scDesc.Windowed = TRUE;

	if (FAILED(hr))

	m_VertexCount = 0;

			exit(1);

	std::string error;

	D3D11_SUBRESOURCE_DATA irData;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_Viewport.MaxDepth = 1.0f;



	int     vcount = vertexlist.size();

	LoadObj(vertexlist, indexList);

{

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	HRESULT              hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		&m_pImmediateContext);





	Release();

	ibDesc.MiscFlags = 0;

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}*/

	UINT flags = 0;

	//頂点シェーダー生成

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				break;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMFLOAT4         ambient;  //環境光(r,g,b)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	SAFE_RELEASE(m_pDevice);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	float    farZ = 100.0f;

		delete[] pVList;

	D3D11_SUBRESOURCE_DATA vrData;



	if (!reader.Warning().empty())

	}

	tinyobj::ObjReader reader;

	txDesc.Width = rect.Width();

	txDesc.SampleDesc.Quality = 0;

	}

	SAFE_RELEASE(m_pPixelShader);

		{

	SDL_Quit();



	bool ret = tinyobj::LoadObj(

	txDesc.Width = rect.Width();

		&m_pImmediateContext);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	irData.SysMemSlicePitch = 0;

		exit(1);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

};

	while (SDL_PollEvent(&e) != 0)

		return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	}

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4X4 view;

		SDL_Delay(1000);

		KEY_PRESS_SURFACE_RIGHT,



	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    fov = XMConvertToRadians(20.0f);

		KEY_PRESS_SURFACE_LEFT,

{

	WORD* pIList = new WORD[icount];

	txDesc.ArraySize = 1;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		R"(cube.obj)");

	m_pSwapChain->Present(0, 0);

	txDesc.SampleDesc.Quality = 0;

	}

			}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	// Loop over shapes



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		return hr;

	std::string imagePath = "hello.bmp";

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	//インデックスバッファ作成



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	m_pDepthStencilTexture = NULL;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		KEY_PRESS_SURFACE_RIGHT,

	{

	//インデックスバッファ作成

		else if (e.type == SDL_KEYDOWN)

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	SDL_FreeSurface(suf);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	for (const auto& shape : shapes)

	scDesc.BufferDesc.Height = rect.Height();



				tinyobj::real_t tx =

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

int SEGMENT = 36;

	txDesc.MipLevels = 1;



	//インデックスバッファ作成

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				indexlist.push_back(idx.vertex_index);

using std::cout; using std::endl;

	txDesc.Height = rect.Height();

		return hr;

struct ConstantLight {

	vbDesc.StructureByteStride = 0;



};

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	irData.SysMemPitch = 0;

	irData.pSysMem = &pIList[0];

	scDesc.SampleDesc.Quality = 0;

	std::string inputfile = "test.obj";



	float    nearZ = 0.1f;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	std::string inputfile = "test.obj";



		if (!reader.Error().empty())

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	irData.SysMemPitch = 0;

	UINT flags = 0;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

#endif

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pSwapChain);

	SAFE_RELEASE(m_pImmediateContext);

	ConstantMaterial material; //物体の質感

	{

{





	bool ret = tinyobj::LoadObj(

	m_pTexture = NULL;

	//頂点バッファ作成

	vbDesc.MiscFlags = 0;

	for (int j = 0; j < icount; j++)

				tinyobj::real_t tx =

	if (FAILED(hr))

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	SAFE_RELEASE(m_pSampler);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	}

	cbDesc.StructureByteStride = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	if (FAILED(hr))

				WORD index = idx.vertex_index;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;



	{

		pLevels,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	m_pDepthStencilTexture = NULL;

	auto& attrib = reader.GetAttrib();

		KEY_PRESS_SURFACE_TOTAL

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	UINT strides = sizeof(Vertex);

	SAFE_RELEASE(m_pDepthStencilTexture);

	{



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	ibDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	ConstantLight    pntLight; //点光源

		if (e.type == SDL_QUIT)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.BufferDesc.Width = rect.Width();

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	//vector<Vertex> vertex_t;

#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

	ZeroMemory(&dsDesc, sizeof(dsDesc));





	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	XMFLOAT4X4 view;

			}

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	D3D_FEATURE_LEVEL level;

}

	bool ret = tinyobj::LoadObj(



		return hr;



	}

	if (FAILED(hr))

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pMatrixBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	SAFE_RELEASE(m_pDepthStencilView);

	}*/

	// Loop over shapes

using std::cout; using std::endl;

				WORD index = idx.vertex_index;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	UINT flags = 0;

#ifdef _DEBUG





		return hr;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



		return hr;



	D3D_FEATURE_LEVEL level;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

	Release();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

 */

	vrData.SysMemPitch = 0;

	if (m_pImmediateContext)

				WORD index = idx.vertex_index;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		flags,

{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

{

}

	m_Viewport.TopLeftX = 0;

	}

		exit(1);

struct ConstantMaterial {

	ConstantMaterial material; //物体の質感

		KEY_PRESS_SURFACE_UP,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



int SEGMENT = 36;

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





		return hr;

	txDesc.MipLevels = 1;



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

#include "DirectXManager.h"

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	scDesc.SampleDesc.Quality = 0;

		1,

			// Loop over vertices in the face.

	{

		&error,

		1,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	std::vector<tinyobj::material_t> materials;

	//テクスチャ読み込み

	ibDesc.StructureByteStride = 0;

	vector<Vertex> vertexlist;

	cbDesc.CPUAccessFlags = 0;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点シェーダー生成

struct ConstantLight {

	return;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

};

	XMFLOAT4 specular;          //反射(r,g,b)



	if (!error.empty())

	std::vector<tinyobj::material_t> materials;

	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	txDesc.SampleDesc.Count = 1;



	{



	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.SampleDesc.Quality = 0;







		KEY_PRESS_SURFACE_UP,

			case SDLK_LEFT:

	Vertex* pVList = new Vertex[vcount];

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	scDesc.SampleDesc.Quality = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pVertexBuffer);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		SDL_RenderClear(ren);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

		exit(1);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pDepthStencilTexture);



	scDesc.BufferCount = 1;

#include <iostream>



	SAFE_RELEASE(m_pDevice);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	scDesc.BufferCount = 1;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		return hr;

	tinyobj::ObjReader reader;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	}



	XMFLOAT4         eyePos;   //視点座標

	{

	scDesc.SampleDesc.Quality = 0;

	reader_config.mtl_search_path = "./"; // Path to material files

	pBackBuffer->Release();

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

{

			for (size_t v = 0; v < fv; v++)



		D3D_DRIVER_TYPE_HARDWARE,

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	//Vertex* pVList = new Vertex[vcount];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		cout << "SDL_INIT_ERROR" << endl;

	float    farZ = 100.0f;



	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

			{

#include <iostream>



			{

				vertex.push_back(vertex_tmp);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}*/

	for (size_t s = 0; s < shapes.size(); s++)



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

void CD3DTest::Render()

				break;

	LoadObj(vertexlist, indexList);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&materials,



	{

		D3D_DRIVER_TYPE_HARDWARE,

struct ConstantMatrixBuffer {

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pMatrixBuffer);

	//深度ステンシルバッファ作成

	ibDesc.StructureByteStride = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	txDesc.MipLevels = 1;

			break;

				break;

				vertex.push_back(vertex_tmp);

	m_pInputLayout = NULL;

#include <iostream>

struct ConstantMaterial {



	//頂点シェーダー生成



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{

		NULL,

	//テクスチャ読み込み

	{

HRESULT CD3DTest::Create(HWND hwnd)

	SAFE_RELEASE(m_pSwapChain);

{



	ibDesc.MiscFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMStoreFloat4(&clb.eyePos, eye);

	{

		// Loop over faces(polygon)



	cbDesc.CPUAccessFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

{





	auto& attrib = reader.GetAttrib();

		{

				tinyobj::real_t ty =

	//テクスチャ読み込み

		}

	for (int i = 0; i < vcount; i++)

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pDepthStencilView);

	m_Viewport.Width = (FLOAT)rect.Width();

	if (FAILED(hr))



	dsDesc.Texture2D.MipSlice = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

			// Loop over vertices in the face.

};

	ZeroMemory(&txDesc, sizeof(txDesc));





					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	UINT flags = 0;







}
	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.SampleDesc.Quality = 0;

int main(int, char**)

	//頂点バッファ作成

	XMFLOAT4 specular;          //反射(r,g,b)

	CRect                rect;

	SDL_Quit();





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

CD3DTest::CD3DTest()

	if (FAILED(hr))

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		//User presses a key

		}

	SDL_DestroyRenderer(ren);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (FAILED(hr))



#define TINYOBJLOADER_USE_MAPBOX_EARCUT



 */

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pPixelShader);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	pBackBuffer->Release();

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		delete[] pVList;





				// access to vertex



	{

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	{

	hr = D3D11CreateDeviceAndSwapChain(NULL,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	SDL_DestroyTexture(tex);

	D3D11_TEXTURE2D_DESC txDesc;

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





	vrData.pSysMem = &pVList[0];

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	//Create Index



	XMFLOAT4         eyePos;   //視点座標



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		{

			default:

	return;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	D3D11_SAMPLER_DESC smpDesc;

int main(int, char**)





	//深度ステンシルバッファ作成

		&materials,

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_Viewport.TopLeftX = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_Angle += XMConvertToRadians(1.0f);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	scDesc.BufferDesc.Height = rect.Height();

{



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

};

		m_pImmediateContext->ClearState();

	// Loop over shapes



	{

	SDL_DestroyRenderer(ren);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

#include <iostream>

		}

				WORD index = idx.vertex_index;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	ZeroMemory(&txDesc, sizeof(txDesc));

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	UINT flags = 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	//First we need to start up SDL, and make sure it went ok

	LoadObj(vertexlist, indexList);



#include "DirectXManager.h"



	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&m_pImmediateContext);





	m_pRenderTargetView = NULL;

			// Loop over vertices in the face.

	reader_config.mtl_search_path = "./"; // Path to material files

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//定数バッファ作成

	XMFLOAT4X4 projection;

	ConstantMaterial material; //物体の質感

	scDesc.SampleDesc.Quality = 0;

	irData.SysMemPitch = 0;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	//インデックスバッファ作成

				// access to vertex





	SAFE_RELEASE(m_pRenderTargetView);



	reader_config.mtl_search_path = "./"; // Path to material files

	dsDesc.Format = txDesc.Format;

			case SDLK_LEFT:



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

			}

	m_pDevice = NULL;

			{

	}

	}*/

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



}



CD3DTest::CD3DTest()

struct ConstantLight {

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;





		return hr;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	float    nearZ = 0.1f;



			}

	ConstantMaterial material; //物体の質感

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		{



	if (FAILED(hr))

CD3DTest::~CD3DTest()

	//vector<WORD> index_t;



	vbDesc.CPUAccessFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	txDesc.MipLevels = 1;

	SDL_DestroyRenderer(ren);

	cbDesc.MiscFlags = 0;

	XMFLOAT4X4 projection;

	m_VertexCount = 0;

	scDesc.BufferCount = 1;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

			switch (e.key.keysym.sym)

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_DestroyTexture(tex);

	//Create Index

	/*

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)



	SAFE_RELEASE(m_pTextureView);

	scDesc.Windowed = TRUE;



	m_pVertexBuffer = NULL;

	// Loop over shapes

		SDL_RenderClear(ren);

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	for (int i = 0; i < vcount; i++)

	scDesc.BufferDesc.Height = rect.Height();

	//Key press surfaces constants

	XMFLOAT4 specular;          //反射(r,g,b)

		}

		return hr;



		KEY_PRESS_SURFACE_UP,

	txDesc.SampleDesc.Count = 1;

		{

	}



	reader_config.mtl_search_path = "./"; // Path to material files

}

		cout << "SDL_INIT_ERROR" << endl;



}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



void CD3DTest::Render()

	//深度ステンシルバッファ作成

	if (FAILED(hr))

	}

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	XMFLOAT4X4 world;

	}

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

		//User requests quit

}



	tinyobj::ObjReaderConfig reader_config;

	for (const auto& shape : shapes)

			break;

	txDesc.SampleDesc.Quality = 0;



	UINT flags = 0;

}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];







	};

				// access to vertex





	txDesc.SampleDesc.Quality = 0;

	{



	//頂点レイアウト作成

	// Loop over shapes



	m_pTexture = NULL;



			}

	ibDesc.MiscFlags = 0;

		KEY_PRESS_SURFACE_TOTAL

	ConstantLightBuffer clb;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	SAFE_RELEASE(m_pSwapChain);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pRenderTargetView = NULL;



		// Loop over faces(polygon)

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		1,

	//Key press surfaces constants

{

		&scDesc,

			{

	m_Viewport.TopLeftX = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//ピクセルシェーダー生成

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		{

	SAFE_RELEASE(m_pVertexShader);

	m_Viewport.TopLeftY = 0;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	if (!error.empty())

	int     vcount = vertexlist.size();

	SDL_Quit();

	m_pDevice = NULL;

#include <SDL.h>

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		return hr;

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



	vrData.SysMemPitch = 0;



	XMFLOAT4X4 world;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	UINT offsets = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	//テクスチャ読み込み

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);







		SDL_RenderClear(ren);



	{

	D3D11_BUFFER_DESC vbDesc;



	txDesc.SampleDesc.Count = 1;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

CD3DTest::CD3DTest()

	ID3D11Texture2D* pBackBuffer;

	//Create Index

	vbDesc.MiscFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vrData.SysMemPitch = 0;



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_Viewport.MaxDepth = 1.0f;

	}

	::ZeroMemory(&scDesc, sizeof(scDesc));

	for (const auto& shape : shapes)

	m_pDepthStencilView = NULL;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	D3D11_TEXTURE2D_DESC txDesc;

		cout << "SDL_INIT_ERROR" << endl;

	XMFLOAT4 specular;          //反射(r,g,b)

	{



	txDesc.MiscFlags = 0;

	//ピクセルシェーダー生成



		//User presses a key



	{

		D3D11_SDK_VERSION,



	};

	m_pTexture = NULL;

};



	float    nearZ = 0.1f;



	{

	{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		&level,

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	}



	//Clean up our objects and quit

		&shapes,

	SAFE_RELEASE(m_pTexture);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;





	ConstantMatrixBuffer cmb;

	cbDesc.CPUAccessFlags = 0;



{

	dsDesc.Format = txDesc.Format;

	return 0;

		if (e.type == SDL_QUIT)

	}

	SDL_FreeSurface(suf);

};

	std::vector<tinyobj::shape_t> shapes;

			index_offset += num_vertices;





	LoadObj(vertexlist, indexList);

	}*/

		delete[] pVList;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	vbDesc.CPUAccessFlags = 0;



};



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



				vertex.push_back(vertex_tmp);



	SAFE_RELEASE(m_pMatrixBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);







		&m_pSwapChain,

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



		SDL_Delay(1000);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		1,

	txDesc.MipLevels = 1;

	ConstantMaterial material; //物体の質感

	if (FAILED(hr))



using std::cout; using std::endl;



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

			case SDLK_LEFT:

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.SysMemSlicePitch = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);



	UINT flags = 0;



	{

		if (!reader.Error().empty())

		}



	D3D_FEATURE_LEVEL level;

	for (size_t s = 0; s < shapes.size(); s++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

HRESULT CD3DTest::Create(HWND hwnd)

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		1,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



#include "DirectXManager.h"

CD3DTest::~CD3DTest()

	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	D3D11_BUFFER_DESC cbDesc;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





		return hr;

	m_IndexCount = 0;

#include <iostream>

{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	}



	XMFLOAT4X4 world;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



CD3DTest::CD3DTest()

{





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;

			int num_vertices = shape.mesh.num_face_vertices[f];

	/*

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_Viewport.Height = (FLOAT)rect.Height();

	std::string error;

	m_pDepthStencilView = NULL;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	//Clean up our objects and quit

		SDL_Delay(1000);

	}*/

	SDL_DestroyWindow(win);



	ConstantLight    pntLight; //点光源



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



	//Vertex* pVList = new Vertex[vcount];

		return hr;

	SDL_DestroyWindow(win);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		R"(cube.obj)");

struct ConstantLightBuffer {

	ZeroMemory(&dsDesc, sizeof(dsDesc));



	XMStoreFloat4(&clb.ambient, lightAmbient);

	UINT strides = sizeof(Vertex);

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	txDesc.MipLevels = 1;

	SDL_Quit();

#ifdef _DEBUG

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	//ビューポート設定

	{

	XMFLOAT4X4 world;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (!reader.ParseFromFile(inputfile, reader_config))

#include <SDL.h>



	m_pInputLayout = NULL;

	m_pVertexShader = NULL;

struct ConstantMatrixBuffer {

		delete[] pIList;

	m_IndexCount = 0;



		&shapes,

	//Key press surfaces constants

	SAFE_RELEASE(m_pImmediateContext);

	m_IndexCount = 0;

	ibDesc.StructureByteStride = 0;

	CRect                rect;

			default:



	ibDesc.MiscFlags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



using std::cout; using std::endl;



	cbDesc.StructureByteStride = 0;

		return hr;

		&m_pDevice,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		return hr;

};





	//頂点バッファ作成

}

	ID3D11Texture2D* pBackBuffer;

	Release();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			switch (e.key.keysym.sym)



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	std::string imagePath = "hello.bmp";

	m_pMatrixBuffer = NULL;

	XMStoreFloat4(&clb.eyePos, eye);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	std::vector<tinyobj::material_t> materials;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	}

	m_Viewport.Height = (FLOAT)rect.Height();

	reader_config.mtl_search_path = "./"; // Path to material files

	for (size_t s = 0; s < shapes.size(); s++)



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	txDesc.Usage = D3D11_USAGE_DEFAULT;

	while (SDL_PollEvent(&e) != 0)

		return 1;



	vbDesc.StructureByteStride = 0;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pImmediateContext);

		KEY_PRESS_SURFACE_DEFAULT,

	D3D11_SAMPLER_DESC smpDesc;



				indexlist.push_back(idx.vertex_index);



		if (!ret)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

	}

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(index);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	std::string imagePath = "hello.bmp";

};



		KEY_PRESS_SURFACE_DEFAULT,



	vrData.SysMemSlicePitch = 0;

	return;

#include <iostream>

			default:

};

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);





struct ConstantLight {

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 ambient;           //環境(r,g,b)

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		m_pImmediateContext->ClearState();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		//User presses a key

	//Vertex* pVList = new Vertex[vcount];

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	m_IndexCount = icount;

	D3D11_SUBRESOURCE_DATA vrData;

		return hr;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				indexlist.push_back(index);

	{

	XMFLOAT4X4 world;

		return hr;

		{

	dsDesc.Texture2D.MipSlice = 0;

	HRESULT              hr;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				break;

	SAFE_RELEASE(m_pInputLayout);

	SAFE_RELEASE(m_pPixelShader);

	vrData.SysMemPitch = 0;

}
	XMFLOAT4 ambient;           //環境(r,g,b)

	DXGI_SWAP_CHAIN_DESC scDesc;

	scDesc.BufferDesc.Height = rect.Height();







	m_VertexCount = vcount;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	SAFE_RELEASE(m_pInputLayout);



	D3D11_SUBRESOURCE_DATA vrData;

	SAFE_RELEASE(m_pDepthStencilView);



	bool ret = tinyobj::LoadObj(

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

			}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	};



	SAFE_RELEASE(m_pDepthStencilView);



#include <iostream>

void CD3DTest::Release()

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	m_pSampler = NULL;

		pVList[i] = vertexlist[i];

	vrData.SysMemPitch = 0;

	auto& attrib = reader.GetAttrib();

	DXGI_SWAP_CHAIN_DESC scDesc;

			default:

			//Select surfaces based on key press



	SAFE_RELEASE(m_pSampler);

			{

	txDesc.Usage = D3D11_USAGE_DEFAULT;



				WORD index = idx.vertex_index;

		return hr;

#include <SDL.h>

	ConstantLight    pntLight; //点光源



	m_pVertexShader = NULL;

		// Loop over faces(polygon)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (int j = 0; j < icount; j++)

			for (size_t v = 0; v < num_vertices; v++)

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	CRect                rect;

#include <iostream>

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	SDL_DestroyTexture(tex);

	vrData.SysMemPitch = 0;

				// access to vertex

	m_pDevice = NULL;

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		NULL,

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	irData.SysMemPitch = 0;

			{

	SAFE_RELEASE(m_pVertexShader);

	}

CD3DTest::~CD3DTest()



		delete[] pVList;

	txDesc.ArraySize = 1;

	auto& attrib = reader.GetAttrib();





	m_pTextureView = NULL;

	m_pTexture = NULL;

	SAFE_RELEASE(m_pVertexBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4X4 view;

	txDesc.MipLevels = 1;

		{

	XMFLOAT4X4 projection;



	}

};

	m_Viewport.Height = (FLOAT)rect.Height();



		KEY_PRESS_SURFACE_DOWN,

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



			case SDLK_DOWN:

			exit(1);

		{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	{

				WORD index = idx.vertex_index;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		{



		delete[] pVList;

	cbDesc.MiscFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	//深度ステンシルバッファ作成

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	}

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	scDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pVertexBuffer);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		return hr;

	D3D11_BUFFER_DESC ibDesc;

	}

		//User presses a key

	//vector<Vertex> vertex_t;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		return hr;

}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}

	vrData.SysMemSlicePitch = 0;

	if (!error.empty())

				break;

		SDL_Delay(1000);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			}

	//ピクセルシェーダー生成

	m_pRenderTargetView = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





	vector<Vertex> vertexlist;

	SDL_DestroyWindow(win);

			index_offset += num_vertices;

	m_Viewport.Width = (FLOAT)rect.Width();





	}

	{

		{

	int     vcount = vertexlist.size();



int main(int, char**)

	float    nearZ = 0.1f;



	//Vertex* pVList = new Vertex[vcount];

	//頂点シェーダー生成

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);

		}

			{

		SDL_RenderClear(ren);

		//User presses a key

	tinyobj::attrib_t attrib;

	Vertex* pVList = new Vertex[vcount];

		{

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			index_offset += fv;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_Quit();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



}







	int     vcount = vertexlist.size();

		{

	if (!error.empty())

	if (!reader.Warning().empty())

	scDesc.SampleDesc.Count = 1;



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

#include "DirectXManager.h"

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

struct ConstantLight {

	ibDesc.MiscFlags = 0;

 * Lesson 1: Hello World!

 */

void CD3DTest::Release()

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

}

}


				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

}
{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.SampleDesc.Quality = 0;



	//vector<WORD> index_t;

	XMFLOAT4         eyePos;   //視点座標

	txDesc.SampleDesc.Count = 1;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		delete[] pIList;

	std::string error;

				break;

	ID3D11Texture2D* pBackBuffer;



			case SDLK_RIGHT:

	tinyobj::ObjReaderConfig reader_config;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

CD3DTest::CD3DTest()

				indexlist.push_back(index);

}

	m_pSwapChain = NULL;

	SDL_DestroyWindow(win);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	tinyobj::ObjReaderConfig reader_config;

int SEGMENT = 36;

	ibDesc.CPUAccessFlags = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;



	m_pVertexBuffer = NULL;



		return hr;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	auto& materials = reader.GetMaterials();

	//vector<WORD> index_t;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

		&materials,

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		KEY_PRESS_SURFACE_LEFT,

			{



	dsDesc.Texture2D.MipSlice = 0;



			{

		return hr;

	SDL_FreeSurface(bmp);

	if (!error.empty())

	m_pSampler = NULL;

			int num_vertices = shape.mesh.num_face_vertices[f];



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

	SAFE_RELEASE(m_pDepthStencilView);

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyRenderer(ren);

				break;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	std::vector<tinyobj::shape_t> shapes;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



}

	XMFLOAT4X4 projection;

		}



				tinyobj::real_t tx =



	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				indexlist.push_back(index);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		{

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				vertex.push_back(vertex_tmp);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	ibDesc.StructureByteStride = 0;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		&attrib,

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	SDL_FreeSurface(suf);

	ConstantLightBuffer clb;

	reader_config.mtl_search_path = "./"; // Path to material files



	UINT strides = sizeof(Vertex);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	for (int i = 0; i < vcount; i++)

		}

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ConstantMatrixBuffer cmb;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	SAFE_RELEASE(m_pDepthStencilView);

		&attrib,

	}

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pTextureView = NULL;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	}

		}

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		KEY_PRESS_SURFACE_DEFAULT,



	XMFLOAT4X4 projection;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	}

	irData.pSysMem = &pIList[0];

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	tinyobj::ObjReaderConfig reader_config;

	vbDesc.StructureByteStride = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	txDesc.SampleDesc.Count = 1;





	for (size_t s = 0; s < shapes.size(); s++)

	m_IndexCount = 0;

	vbDesc.StructureByteStride = 0;







	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	reader_config.mtl_search_path = "./"; // Path to material files

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		SDL_Delay(1000);

	for (const auto& shape : shapes)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	float    farZ = 100.0f;

		pIList[j] = indexList[j];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

int main(int, char**)



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		{

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);









	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	irData.SysMemSlicePitch = 0;



	ZeroMemory(&txDesc, sizeof(txDesc));

	vrData.pSysMem = &pVList[0];



	cbDesc.CPUAccessFlags = 0;

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.CPUAccessFlags = 0;



	DXGI_SWAP_CHAIN_DESC scDesc;

			{

	std::string error;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			for (size_t v = 0; v < num_vertices; v++)

	m_pDevice = NULL;

	D3D11_SAMPLER_DESC smpDesc;

		return hr;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_VertexCount = vcount;

	for (int i = 0; i < vcount; i++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

#ifdef _DEBUG





int main(int, char**)



#ifdef _DEBUG

	return;

	ConstantLight    pntLight; //点光源

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

CD3DTest::~CD3DTest()

using std::cout; using std::endl;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	UINT flags = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	WORD* pIList = new WORD[icount];

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

				break;



	SAFE_RELEASE(m_pVertexBuffer);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;



	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.MaxDepth = 1.0f;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

		&materials,

	m_pRenderTargetView = NULL;

	for (int j = 0; j < icount; j++)

#include <SDL.h>

	XMStoreFloat4(&clb.eyePos, eye);

		return hr;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		1,

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

			//Select surfaces based on key press

	m_Angle += XMConvertToRadians(1.0f);

		}

		if (!ret)

	D3D11_BUFFER_DESC vbDesc;





	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

};

	SDL_Event e;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}*/

	SAFE_RELEASE(m_pSampler);

	//定数バッファ作成

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	ConstantMaterial material; //物体の質感

struct ConstantMaterial {

struct ConstantLightBuffer {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



		}

	scDesc.OutputWindow = hwnd;

}

		KEY_PRESS_SURFACE_RIGHT,

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		return hr;

	for (int j = 0; j < icount; j++)

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	std::string error;

		{

				WORD index = idx.vertex_index;

{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	if (!reader.ParseFromFile(inputfile, reader_config))

CD3DTest::~CD3DTest()





	m_pMatrixBuffer = NULL;

		KEY_PRESS_SURFACE_DEFAULT,

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pDevice);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



	std::string inputfile = "test.obj";



			// Loop over vertices in the face.

	//First we need to start up SDL, and make sure it went ok





	scDesc.Windowed = TRUE;

	std::vector<tinyobj::shape_t> shapes;

		return hr;

	auto& shapes = reader.GetShapes();

	if (FAILED(hr))

	if (FAILED(hr))

		}

	dsDesc.Texture2D.MipSlice = 0;





	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_VertexCount = vcount;

	return 0;



		return hr;

};

	cbDesc.StructureByteStride = 0;





		return hr;

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



{

	SDL_Quit();

		}

			case SDLK_RIGHT:

		NULL,



	delete[] pVList;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	irData.pSysMem = &pIList[0];

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		SDL_RenderCopy(ren, tex, NULL, NULL);

	scDesc.BufferCount = 1;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



		KEY_PRESS_SURFACE_LEFT,

	SDL_FreeSurface(bmp);

	UINT flags = 0;

	delete[] pVList;

	cbDesc.MiscFlags = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_Viewport.Height = (FLOAT)rect.Height();

int main(int, char**)

				WORD index = idx.vertex_index;

	dsDesc.Format = txDesc.Format;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_VertexCount = vcount;

	if (FAILED(hr))

	XMFLOAT4         eyePos;   //視点座標

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];



				vertex.push_back(vertex_tmp);

		return hr;

	std::string inputfile = "test.obj";

	XMFLOAT4X4 view;

		return hr;

	DXGI_SWAP_CHAIN_DESC scDesc;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	//ピクセルシェーダー生成

	// Loop over shapes

}

	SDL_DestroyWindow(win);

	if (FAILED(hr))



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		KEY_PRESS_SURFACE_UP,

		{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

/*

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		return hr;

	irData.pSysMem = &pIList[0];

		SDL_RenderPresent(ren);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTexture = NULL;

	if (FAILED(hr))



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SAFE_RELEASE(m_pIndexBuffer);

		&m_pImmediateContext);



		size_t index_offset = 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDevice = NULL;

		exit(1);

	vector<Vertex> vertexlist;

{

		&level,

	//vector<Vertex> vertex_t;

				break;

			for (size_t v = 0; v < fv; v++)

	if (m_pImmediateContext)

			exit(1);

	SDL_FreeSurface(bmp);

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			switch (e.key.keysym.sym)

		KEY_PRESS_SURFACE_LEFT,

	};

			}

	scDesc.OutputWindow = hwnd;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



	//インデックスバッファ作成

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	m_pVertexBuffer = NULL;







			for (size_t v = 0; v < num_vertices; v++)

	tinyobj::ObjReaderConfig reader_config;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);

		SDL_RenderPresent(ren);

{

	irData.SysMemPitch = 0;

	{

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	m_pInputLayout = NULL;

	HRESULT              hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_IndexCount = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		pIList[j] = indexList[j];

	Vertex* pVList = new Vertex[vcount];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	{

	SDL_DestroyWindow(win);

	CRect                rect;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	float    farZ = 100.0f;



	UINT strides = sizeof(Vertex);

	vbDesc.CPUAccessFlags = 0;

		return hr;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		else if (e.type == SDL_KEYDOWN)

	XMStoreFloat4(&clb.ambient, lightAmbient);

		return hr;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	{



	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pInputLayout);

				indexlist.push_back(index);





	while (SDL_PollEvent(&e) != 0)



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vbDesc.MiscFlags = 0;

	for (int i = 0; i < vcount; i++)

}

		&m_pDevice,

		{

		R"(cube.obj)");

{

	m_Viewport.TopLeftX = 0;



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	//テクスチャ読み込み

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		{







	if (FAILED(hr))

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	return 0;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_Viewport.TopLeftY = 0;



	XMStoreFloat4(&clb.ambient, lightAmbient);

	vbDesc.CPUAccessFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	irData.SysMemPitch = 0;

	ID3D11Texture2D* pBackBuffer;

{

			default:

		&shapes,

				// access to vertex

		return hr;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderPresent(ren);

		{

			case SDLK_DOWN:



	{

	m_pTexture = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

struct ConstantMatrixBuffer {

	auto& shapes = reader.GetShapes();

		KEY_PRESS_SURFACE_DEFAULT,

		&error,

			case SDLK_RIGHT:

	vrData.SysMemSlicePitch = 0;

			case SDLK_DOWN:

};

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			case SDLK_RIGHT:

#include <iostream>

	return 0;

	ConstantMatrixBuffer cmb;

	D3D11_BUFFER_DESC cbDesc;



	txDesc.SampleDesc.Quality = 0;

	std::vector<tinyobj::shape_t> shapes;

				indexlist.push_back(idx.vertex_index);

}

			//Select surfaces based on key press

		D3D11_SDK_VERSION,

	m_pImmediateContext = NULL;

{

		}





	Vertex* pVList = new Vertex[vcount];

	};

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



	vbDesc.CPUAccessFlags = 0;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ConstantMatrixBuffer cmb;

	m_pInputLayout = NULL;

	SDL_DestroyTexture(tex);



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

int main(int, char**)

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	for (int j = 0; j < icount; j++)

		return hr;

{



	scDesc.Windowed = TRUE;



			// Loop over vertices in the face.

	m_pImmediateContext = NULL;

				WORD index = idx.vertex_index;

				vertex.push_back(vertex_tmp);

		// Loop over faces(polygon)

		{

}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];







	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				break;

			for (size_t v = 0; v < num_vertices; v++)



	XMStoreFloat4(&clb.ambient, lightAmbient);

				WORD index = idx.vertex_index;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	D3D11_BUFFER_DESC cbDesc;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.ArraySize = 1;

	{

	//First we need to start up SDL, and make sure it went ok

		//User presses a key

	cbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

			}

	ConstantLightBuffer clb;

	if (m_pImmediateContext)



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

			case SDLK_LEFT:



		delete[] pVList;

	//Clean up our objects and quit

	m_pMatrixBuffer = NULL;



	if (FAILED(hr))

		}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pPixelShader);

	{

{





	//vector<WORD> index_t;

		exit(1);

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	//Key press surfaces constants

	std::string error;



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		flags,

		&level,

	tinyobj::ObjReaderConfig reader_config;

	enum KeyPressSurfaces

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();



			index_offset += fv;

		}

	m_pInputLayout = NULL;

void CD3DTest::Render()

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_Viewport.TopLeftX = 0;



		delete[] pVList;



			case SDLK_RIGHT:

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_IndexCount = icount;

	D3D11_SAMPLER_DESC smpDesc;

int SEGMENT = 36;



	}



}

	for (int i = 0; i < vcount; i++)



		return hr;

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}

	m_pDepthStencilView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	float    nearZ = 0.1f;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	//インデックスバッファ作成

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//インデックスバッファ作成

void CD3DTest::Release()



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	cbDesc.StructureByteStride = 0;

	ibDesc.MiscFlags = 0;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	ID3D11Texture2D* pBackBuffer;

 */

		return hr;

	vector<Vertex> vertexlist;

		m_pImmediateContext->ClearState();



	{

	bool ret = tinyobj::LoadObj(



		}

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

		&m_pImmediateContext);







		{

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



};

	m_Viewport.Width = (FLOAT)rect.Width();

	}





	}

	cbDesc.StructureByteStride = 0;

			{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	ConstantLightBuffer clb;

		&attrib,



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	scDesc.SampleDesc.Count = 1;

	pBackBuffer->Release();

	cbDesc.MiscFlags = 0;



		SDL_RenderPresent(ren);

	SAFE_RELEASE(m_pDepthStencilTexture);



		}

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;

				indexlist.push_back(index);

		&m_pDevice,



			case SDLK_UP:

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			break;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	m_Viewport.Height = (FLOAT)rect.Height();

CD3DTest::~CD3DTest()

{

	D3D_FEATURE_LEVEL level;

	txDesc.Height = rect.Height();



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	HRESULT              hr;

struct ConstantLight {



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SDL_Quit();



	vbDesc.MiscFlags = 0;

#ifdef _DEBUG

	}

	//定数バッファ作成

		D3D11_SDK_VERSION,

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.MiscFlags = 0;

	tinyobj::attrib_t attrib;

		return hr;



	XMFLOAT4 pos;               //座標(x,y,z)

		}

	SAFE_RELEASE(m_pMatrixBuffer);



				break;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	vector<WORD> indexList;

	SAFE_RELEASE(m_pRenderTargetView);

		KEY_PRESS_SURFACE_UP,

 * Lesson 1: Hello World!

		return hr;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	CRect                rect;

		if (!ret)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

				break;

#include <iostream>

	//vector<WORD> index_t;

	m_pSwapChain->Present(0, 0);

			default:

	//First we need to start up SDL, and make sure it went ok

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

	bool ret = tinyobj::LoadObj(

	DXGI_SWAP_CHAIN_DESC scDesc;

			for (size_t v = 0; v < fv; v++)

			default:

	m_Viewport.Height = (FLOAT)rect.Height();



	ibDesc.StructureByteStride = 0;

#include <SDL.h>

			for (size_t v = 0; v < num_vertices; v++)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	SDL_DestroyTexture(tex);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);



				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//vector<Vertex> vertex_t;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	WORD   icount = indexList.size();

		&attrib,

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//定数バッファ作成

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			case SDLK_LEFT:

	SAFE_RELEASE(m_pDepthStencilTexture);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	}

	SDL_Quit();

	}

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ConstantMaterial material; //物体の質感

	scDesc.SampleDesc.Quality = 0;

	D3D11_BUFFER_DESC ibDesc;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pPixelShader);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	txDesc.ArraySize = 1;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.StructureByteStride = 0;

	vector<Vertex> vertexlist;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	//Vertex* pVList = new Vertex[vcount];



	//Key press surfaces constants

	m_IndexCount = 0;

		return hr;



	cbDesc.MiscFlags = 0;

		if (!ret)



	pBackBuffer->Release();

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

		pVList[i] = vertexlist[i];

		NULL,

	cbDesc.MiscFlags = 0;



				vertex.push_back(vertex_tmp);

	SDL_Quit();

	m_Viewport.TopLeftY = 0;

	ID3D11Texture2D* pBackBuffer;

	if (FAILED(hr))

		return hr;

	SAFE_RELEASE(m_pTexture);



	//Key press surfaces constants

	//頂点バッファ作成

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



}

	if (FAILED(hr))

#include <iostream>

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	txDesc.Width = rect.Width();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (!reader.ParseFromFile(inputfile, reader_config))







	}



	DXGI_SWAP_CHAIN_DESC scDesc;

		KEY_PRESS_SURFACE_DEFAULT,

	vrData.SysMemSlicePitch = 0;





	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		KEY_PRESS_SURFACE_UP,

{

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	{



{

};





		return hr;

int main(int, char**)



	XMFLOAT4X4 world;



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	};

			}

	//Vertex* pVList = new Vertex[vcount];

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))

	std::vector<tinyobj::material_t> materials;

}

	vector<Vertex> vertexlist;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		KEY_PRESS_SURFACE_UP,

#include <SDL.h>

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

}

			index_offset += fv;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



	D3D11_BUFFER_DESC ibDesc;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

		&attrib,

	{

	SDL_FreeSurface(suf);

		{

	{

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	UINT offsets = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (FAILED(hr))

#include <SDL.h>

			case SDLK_UP:



	m_pVertexShader = NULL;



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

			break;

	return 0;

	if (FAILED(hr))

	float    nearZ = 0.1f;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



		{

	SAFE_RELEASE(m_pVertexShader);



			{

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		D3D_DRIVER_TYPE_HARDWARE,

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



			{

	tinyobj::attrib_t attrib;

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	if (FAILED(hr))



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pPixelShader);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	SAFE_RELEASE(m_pDepthStencilView);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

		return hr;

int main(int, char**)

 */

	SAFE_RELEASE(m_pVertexBuffer);



	m_Viewport.Width = (FLOAT)rect.Width();



	vbDesc.CPUAccessFlags = 0;

};

	vbDesc.StructureByteStride = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

		return hr;

int main(int, char**)

	if (FAILED(hr))

		SDL_Delay(1000);



	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		pVList[i] = vertexlist[i];

	int     vcount = vertexlist.size();

		KEY_PRESS_SURFACE_DOWN,

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pMatrixBuffer);



				indexlist.push_back(idx.vertex_index);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pIndexBuffer = NULL;

				break;

	SAFE_RELEASE(m_pSwapChain);

			for (size_t v = 0; v < fv; v++)

int main(int, char**)



	if (FAILED(hr))



		KEY_PRESS_SURFACE_UP,



		KEY_PRESS_SURFACE_DOWN,

using std::cout; using std::endl;

		SDL_Delay(1000);

				break;

		//User presses a key

	//Create Index

	WORD   icount = indexList.size();

	{

};

		KEY_PRESS_SURFACE_LEFT,

		}

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	if (m_pImmediateContext)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

{

	//ピクセルシェーダー生成



				tinyobj::real_t ty =

	CRect                rect;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		exit(1);

			switch (e.key.keysym.sym)

	m_pPixelShader = NULL;

			index_offset += fv;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#include <iostream>

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMFLOAT4 ambient;           //環境(r,g,b)

		pLevels,

		KEY_PRESS_SURFACE_DOWN,

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

CD3DTest::~CD3DTest()







	if (m_pImmediateContext)



	scDesc.BufferDesc.Width = rect.Width();

	m_Angle += XMConvertToRadians(1.0f);



	return 0;

	//定数バッファ作成

	scDesc.SampleDesc.Count = 1;

	SDL_Quit();

		&attrib,

		}

	//定数バッファ作成

	std::string error;

	m_VertexCount = vcount;

	ConstantLightBuffer clb;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	m_pTexture = NULL;

		{

		return hr;

	txDesc.Height = rect.Height();

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		{

using std::cout; using std::endl;

	SDL_DestroyRenderer(ren);

			index_offset += fv;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	SAFE_RELEASE(m_pRenderTargetView);

void CD3DTest::Release()

}

#ifdef _DEBUG

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	std::string inputfile = "test.obj";

{

		SDL_RenderPresent(ren);

	for (int j = 0; j < icount; j++)

		return hr;

	{

		KEY_PRESS_SURFACE_TOTAL

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

using std::cout; using std::endl;

				WORD index = idx.vertex_index;

void CD3DTest::Render()

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);



		KEY_PRESS_SURFACE_DOWN,

			{

			case SDLK_RIGHT:

		D3D11_SDK_VERSION,

	SDL_DestroyTexture(tex);

	Vertex* pVList = new Vertex[vcount];

	if (FAILED(hr))

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

			{

	SAFE_RELEASE(m_pSwapChain);





		NULL,

		delete[] pVList;

	cbDesc.StructureByteStride = 0;



		return hr;

#endif

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_Event e;

	std::vector<tinyobj::material_t> materials;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	scDesc.Windowed = TRUE;

}
	{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

#ifdef _DEBUG

#define TINYOBJLOADER_IMPLEMENTATION

	//定数バッファ作成

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	vrData.SysMemSlicePitch = 0;

	vrData.SysMemPitch = 0;

				vertex.push_back(vertex_tmp);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	txDesc.ArraySize = 1;

		if (!ret)

	ibDesc.MiscFlags = 0;



		D3D_DRIVER_TYPE_HARDWARE,

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

				tinyobj::real_t tx =

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

struct ConstantMatrixBuffer {

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	// Loop over shapes

	}

				break;

	XMFLOAT4X4 view;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty =

	txDesc.ArraySize = 1;

	XMFLOAT4 specular;          //反射(r,g,b)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_IndexCount = icount;

	}

		&level,

	//頂点レイアウト作成

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

			{

	m_pSwapChain = NULL;

	SDL_Quit();



		&attrib,

				break;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



}

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	XMFLOAT4X4 projection;

	D3D11_SUBRESOURCE_DATA vrData;





		NULL,



	vrData.pSysMem = &pVList[0];

struct ConstantMatrixBuffer {

				break;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	while (SDL_PollEvent(&e) != 0)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	scDesc.BufferDesc.Height = rect.Height();

	{

		return hr;

	XMFLOAT4X4 view;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			for (size_t v = 0; v < fv; v++)

	//頂点バッファ作成

	// Loop over shapes

	if (m_pImmediateContext)

		R"(cube.obj)");

	m_pPixelShader = NULL;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	txDesc.ArraySize = 1;

	std::vector<tinyobj::material_t> materials;

	m_pLightBuffer = NULL;

			case SDLK_DOWN:

		return 1;

				tinyobj::real_t ty =

	// Loop over shapes



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	for (int i = 0; i < 3; i++)

		{

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	vrData.SysMemPitch = 0;

	SDL_Quit();

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				indexlist.push_back(index);

	{

	//vector<WORD> index_t;

HRESULT CD3DTest::Create(HWND hwnd)

	cbDesc.StructureByteStride = 0;

	txDesc.CPUAccessFlags = 0;



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	vrData.SysMemSlicePitch = 0;

		&shapes,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	SAFE_RELEASE(m_pTexture);



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}*/

{

		cout << "SDL_INIT_ERROR" << endl;

	m_pLightBuffer = NULL;

				indexlist.push_back(index);

				vertex.push_back(vertex_tmp);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;

}


#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		&error,

		// Loop over faces(polygon)

	D3D11_BUFFER_DESC ibDesc;

	scDesc.BufferDesc.Height = rect.Height();

	D3D11_BUFFER_DESC ibDesc;



	scDesc.BufferDesc.Width = rect.Width();



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	}

	txDesc.MiscFlags = 0;

{

	SAFE_RELEASE(m_pSwapChain);

		return hr;

}

}

};

	{

	tinyobj::ObjReader reader;

}

		return hr;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	if (m_pImmediateContext)

		1,

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;



		&m_pImmediateContext);



		return hr;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				break;

	// Loop over shapes

};

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

			}

	float    nearZ = 0.1f;

	cbDesc.CPUAccessFlags = 0;

	CRect                rect;

	m_Viewport.Width = (FLOAT)rect.Width();

#include <iostream>

	scDesc.SampleDesc.Quality = 0;





struct ConstantLightBuffer {

			exit(1);

		return hr;

	m_pInputLayout = NULL;

};

		}







	SAFE_RELEASE(m_pVertexShader);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	if (FAILED(hr))

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	dsDesc.Format = txDesc.Format;

	std::string imagePath = "hello.bmp";



	XMStoreFloat4(&clb.material.ambient, materialAmbient);

{

	{

	m_Viewport.Height = (FLOAT)rect.Height();



	txDesc.MipLevels = 1;

	{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	SDL_FreeSurface(bmp);

	XMFLOAT4X4 projection;





	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Height = rect.Height();





	LoadObj(vertexlist, indexList);

	enum KeyPressSurfaces

#include <iostream>

	//頂点シェーダー生成





	vrData.SysMemSlicePitch = 0;



	cbDesc.MiscFlags = 0;

		{

			}



		return hr;



	SAFE_RELEASE(m_pDepthStencilTexture);

	for (int i = 0; i < vcount; i++)

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	SAFE_RELEASE(m_pDepthStencilView);



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_Viewport.Width = (FLOAT)rect.Width();

	Release();

	for (size_t s = 0; s < shapes.size(); s++)

	m_Angle += XMConvertToRadians(1.0f);

	scDesc.Windowed = TRUE;

	m_IndexCount = 0;





}
	hr = D3D11CreateDeviceAndSwapChain(NULL,

		return hr;

		SDL_Delay(1000);



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

#include <iostream>

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pIndexBuffer = NULL;



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		size_t index_offset = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.CPUAccessFlags = 0;

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		}

	m_VertexCount = vcount;

		return hr;

	m_pLightBuffer = NULL;

		return hr;

#include <iostream>

		if (!ret)





		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

struct ConstantMaterial {

	m_pSwapChain->Present(0, 0);



	//頂点シェーダー生成



	txDesc.MiscFlags = 0;

	if (FAILED(hr))



	if (FAILED(hr))

	SAFE_RELEASE(m_pImmediateContext);

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	return 0;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



{

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	txDesc.SampleDesc.Count = 1;

	SAFE_RELEASE(m_pTextureView);





	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	Release();

	std::vector<tinyobj::shape_t> shapes;

#include "DirectXManager.h"

	cbDesc.MiscFlags = 0;







		return 1;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	irData.pSysMem = &pIList[0];

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		}



	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.Width = rect.Width();

		&shapes,



	auto& attrib = reader.GetAttrib();

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	if (FAILED(hr))



	cbDesc.StructureByteStride = 0;

	SDL_DestroyRenderer(ren);





	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



	{

		delete[] pIList;

}

	return;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	SAFE_RELEASE(m_pMatrixBuffer);

	D3D11_BUFFER_DESC cbDesc;



		KEY_PRESS_SURFACE_UP,

	//インデックスバッファ作成



#include <SDL.h>

	//テクスチャ読み込み

struct ConstantLightBuffer {


