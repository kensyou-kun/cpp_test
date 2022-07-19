};

	m_pMatrixBuffer = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	irData.pSysMem = &pIList[0];

	{

	m_pMatrixBuffer = NULL;

}
				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





	for (size_t s = 0; s < shapes.size(); s++)

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	::ZeroMemory(&scDesc, sizeof(scDesc));



	XMFLOAT4 pos;               //座標(x,y,z)



		&shapes,



	{

		SDL_RenderPresent(ren);

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pImmediateContext);

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pMatrixBuffer);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



}

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				break;







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	vrData.SysMemSlicePitch = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);





		if (!reader.Error().empty())

#include <iostream>





	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	SDL_Quit();

	D3D11_BUFFER_DESC ibDesc;

	txDesc.ArraySize = 1;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	D3D_FEATURE_LEVEL level;



	SAFE_RELEASE(m_pDevice);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	SAFE_RELEASE(m_pIndexBuffer);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

		flags,

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				break;

	SAFE_RELEASE(m_pSwapChain);

				WORD index = idx.vertex_index;

				break;



			{







	std::string imagePath = "hello.bmp";

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	D3D11_SUBRESOURCE_DATA vrData;

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.specular, materialSpecular);



		return hr;

		KEY_PRESS_SURFACE_LEFT,

	{

	txDesc.SampleDesc.Quality = 0;

	Release();

	irData.SysMemPitch = 0;



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	irData.pSysMem = &pIList[0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	vrData.SysMemSlicePitch = 0;

#endif

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);



	vector<Vertex> vertexlist;

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_IndexCount = icount;

		else if (e.type == SDL_KEYDOWN)

	{

};



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_DEFAULT,

	{



		}



	txDesc.MiscFlags = 0;

	ConstantMaterial material; //物体の質感

HRESULT CD3DTest::Create(HWND hwnd)

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	ConstantLightBuffer clb;

	return hr;



	if (FAILED(hr))

		return hr;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);





	Vertex* pVList = new Vertex[vcount];

	Vertex* pVList = new Vertex[vcount];

		pIList[j] = indexList[j];

	scDesc.BufferCount = 1;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	ConstantMatrixBuffer cmb;

CD3DTest::CD3DTest()

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	ConstantMaterial material; //物体の質感

			case SDLK_LEFT:

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	return 0;

			case SDLK_DOWN:

	SAFE_RELEASE(m_pImmediateContext);



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

{

	LoadObj(vertexlist, indexList);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		pLevels,



	scDesc.BufferDesc.Width = rect.Width();



				break;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ibDesc.StructureByteStride = 0;

		return hr;

	txDesc.Height = rect.Height();



	//ビューポート設定

				break;

		return 1;

		return hr;

	scDesc.OutputWindow = hwnd;

	if (FAILED(hr))

	m_Viewport.MaxDepth = 1.0f;





struct ConstantMatrixBuffer {



	vbDesc.StructureByteStride = 0;

	txDesc.Height = rect.Height();

	SDL_DestroyRenderer(ren);

		KEY_PRESS_SURFACE_DEFAULT,

	vector<WORD> indexList;

		return hr;



	cbDesc.StructureByteStride = 0;

		&m_pImmediateContext);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;





	txDesc.CPUAccessFlags = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&m_pSwapChain,

		{

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	//深度ステンシルバッファ作成





	{

	{

	m_pLightBuffer = NULL;

#include <iostream>

				break;

				// access to vertex

	XMStoreFloat4(&clb.material.specular, materialSpecular);



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

				indexlist.push_back(index);

		cout << "SDL_INIT_ERROR" << endl;

			switch (e.key.keysym.sym)

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

	m_IndexCount = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;





using std::cout; using std::endl;

HRESULT CD3DTest::Create(HWND hwnd)

void CD3DTest::Render()

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

		pIList[j] = indexList[j];





	ConstantLight    pntLight; //点光源

	{

		if (e.type == SDL_QUIT)

	pBackBuffer->Release();

		return hr;

	m_pTexture = NULL;

			{

	SAFE_RELEASE(m_pDepthStencilTexture);

	scDesc.BufferCount = 1;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	SDL_DestroyTexture(tex);

		KEY_PRESS_SURFACE_LEFT,

	scDesc.SampleDesc.Count = 1;

#include <SDL.h>



#include "DirectXManager.h"



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

			{

	if (FAILED(hr))

	txDesc.MiscFlags = 0;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

{

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	std::string imagePath = "hello.bmp";

	if (FAILED(hr))

	XMStoreFloat4(&clb.ambient, lightAmbient);

struct ConstantMatrixBuffer {



	float    nearZ = 0.1f;



	if (m_pImmediateContext)

		exit(1);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_Angle += XMConvertToRadians(1.0f);

	LoadObj(vertexlist, indexList);

	ConstantLight    pntLight; //点光源

	vbDesc.CPUAccessFlags = 0;

	}



	for (size_t s = 0; s < shapes.size(); s++)

}

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	SDL_FreeSurface(bmp);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	vrData.pSysMem = &pVList[0];



	delete[] pVList;

		pVList[i] = vertexlist[i];

		}

	cbDesc.CPUAccessFlags = 0;

	SDL_DestroyTexture(tex);

	m_IndexCount = 0;

	if (FAILED(hr))



	{

	}

		return hr;

	txDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	for (const auto& shape : shapes)

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	SAFE_RELEASE(m_pSampler);



			{



	{

		{

		{

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)



	std::string imagePath = "hello.bmp";

	//頂点シェーダー生成

	DXGI_SWAP_CHAIN_DESC scDesc;

	return 0;

	WORD   icount = indexList.size();

	m_Viewport.MinDepth = 0.0f;



};

	ConstantMaterial material; //物体の質感

		return hr;



	if (!error.empty())

	scDesc.BufferDesc.Height = rect.Height();



	txDesc.SampleDesc.Count = 1;

	UINT flags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pTextureView = NULL;



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	}*/



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);





		return hr;

	m_pTextureView = NULL;



	txDesc.Usage = D3D11_USAGE_DEFAULT;

		D3D_DRIVER_TYPE_HARDWARE,



	cbDesc.StructureByteStride = 0;

	UINT flags = 0;

	for (int j = 0; j < icount; j++)



	ConstantMatrixBuffer cmb;

{



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	if (FAILED(hr))

void CD3DTest::Render()

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



 */

			for (size_t v = 0; v < fv; v++)



	scDesc.BufferDesc.Height = rect.Height();

{

	m_IndexCount = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SAFE_RELEASE(m_pDepthStencilView);



	SAFE_RELEASE(m_pDevice);

	SDL_FreeSurface(suf);

	{





	m_pPixelShader = NULL;

#include <iostream>

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	/*



					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	flags |= D3D11_CREATE_DEVICE_DEBUG;

{

			int num_vertices = shape.mesh.num_face_vertices[f];

			switch (e.key.keysym.sym)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	auto& attrib = reader.GetAttrib();

		}

	irData.pSysMem = &pIList[0];

}

	XMFLOAT4X4 projection;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);





	for (int i = 0; i < vcount; i++)

	m_pMatrixBuffer = NULL;

	scDesc.SampleDesc.Count = 1;

	XMFLOAT4 specular;          //反射(r,g,b)

	cbDesc.CPUAccessFlags = 0;



		KEY_PRESS_SURFACE_RIGHT,

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

	D3D11_TEXTURE2D_DESC txDesc;



	txDesc.Width = rect.Width();

			// Loop over vertices in the face.

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	if (FAILED(hr))

{

				indexlist.push_back(idx.vertex_index);

			// Loop over vertices in the face.

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferDesc.Height = rect.Height();

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	scDesc.Windowed = TRUE;

	}

	SAFE_RELEASE(m_pImmediateContext);



	irData.SysMemPitch = 0;





		return hr;

		SDL_RenderPresent(ren);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	UINT flags = 0;

	if (FAILED(hr))



				break;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pVertexShader);

	SAFE_RELEASE(m_pLightBuffer);

}

		cout << "SDL_INIT_ERROR" << endl;

	// Loop over shapes



 */



			switch (e.key.keysym.sym)

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.SampleDesc.Count = 1;

			switch (e.key.keysym.sym)

		return hr;

	scDesc.Windowed = TRUE;

			index_offset += fv;

	scDesc.SampleDesc.Quality = 0;

	vector<WORD> indexList;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	SAFE_RELEASE(m_pVertexShader);

struct ConstantMatrixBuffer {

	//vector<WORD> index_t;

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t ty =





}
	UINT flags = 0;



	while (SDL_PollEvent(&e) != 0)

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

			switch (e.key.keysym.sym)

				WORD index = idx.vertex_index;

		return hr;

	if (FAILED(hr))

	ConstantLightBuffer clb;

	delete[] pIList;

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	LoadObj(vertexlist, indexList);

	m_pPixelShader = NULL;

	XMFLOAT4X4 world;







		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];



			}

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	m_pImmediateContext = NULL;

	LoadObj(vertexlist, indexList);

	m_pInputLayout = NULL;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pLightBuffer = NULL;

	DXGI_SWAP_CHAIN_DESC scDesc;

	XMFLOAT4 ambient;           //環境(r,g,b)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;



	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	std::string error;

	if (FAILED(hr))



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	tinyobj::attrib_t attrib;

	if (FAILED(hr))

	if (m_pImmediateContext)

	cbDesc.Usage = D3D11_USAGE_DEFAULT;







	{



	scDesc.BufferDesc.Height = rect.Height();

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_DestroyWindow(win);

	if (!reader.Warning().empty())

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	XMFLOAT4         eyePos;   //視点座標







	WORD   icount = indexList.size();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);









	ConstantMaterial material; //物体の質感

	}

	vrData.SysMemPitch = 0;

				break;

#include <SDL.h>

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pTexture = NULL;

	irData.pSysMem = &pIList[0];

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ibDesc.CPUAccessFlags = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	if (FAILED(hr))

	SAFE_RELEASE(m_pTextureView);







	ZeroMemory(&txDesc, sizeof(txDesc));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	tinyobj::attrib_t attrib;

	tinyobj::ObjReaderConfig reader_config;

{

	txDesc.SampleDesc.Count = 1;

	scDesc.OutputWindow = hwnd;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	return;



	//Key press surfaces constants

		else if (e.type == SDL_KEYDOWN)

		&m_pImmediateContext);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	if (FAILED(hr))

	SAFE_RELEASE(m_pIndexBuffer);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;





	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



		exit(1);



	dsDesc.Texture2D.MipSlice = 0;

{

	XMStoreFloat4(&clb.ambient, lightAmbient);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

int main(int, char**)

	{

	//Clean up our objects and quit

	m_pSwapChain = NULL;

	tinyobj::ObjReader reader;

		//User requests quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

		&shapes,



	//定数バッファ作成

	std::vector<tinyobj::material_t> materials;



			case SDLK_RIGHT:

		return hr;

	//定数バッファ作成

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	if (FAILED(hr))

	XMFLOAT4 pos;               //座標(x,y,z)

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);



	if (FAILED(hr))

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



		&scDesc,

	}

	vrData.SysMemPitch = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	if (FAILED(hr))

	vector<Vertex> vertexlist;

void CD3DTest::Render()

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		NULL,

				indexlist.push_back(index);

	//vector<WORD> index_t;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_Viewport.MinDepth = 0.0f;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pSwapChain = NULL;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);



		SDL_Delay(1000);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





				break;

		KEY_PRESS_SURFACE_DEFAULT,

	std::string error;

	dsDesc.Texture2D.MipSlice = 0;

#endif

			case SDLK_RIGHT:

	}*/

	scDesc.BufferDesc.Width = rect.Width();

	m_pIndexBuffer = NULL;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))

			int num_vertices = shape.mesh.num_face_vertices[f];

				indexlist.push_back(index);

HRESULT CD3DTest::Create(HWND hwnd)

	if (FAILED(hr))



	txDesc.SampleDesc.Quality = 0;

		SDL_RenderClear(ren);

	// Loop over shapes

		return hr;



		flags,

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			case SDLK_RIGHT:

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_DestroyRenderer(ren);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

{

	SAFE_RELEASE(m_pTextureView);

	XMStoreFloat4(&clb.eyePos, eye);

	//First we need to start up SDL, and make sure it went ok

		return hr;

#include <iostream>

	auto& attrib = reader.GetAttrib();

		return hr;



	SAFE_RELEASE(m_pDevice);

	for (size_t s = 0; s < shapes.size(); s++)



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))

#include <SDL.h>

	scDesc.SampleDesc.Quality = 0;

	SDL_DestroyRenderer(ren);





	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	cbDesc.CPUAccessFlags = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)



	return;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	// Loop over shapes

	std::string error;



	SAFE_RELEASE(m_pDepthStencilView);

	{

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		{

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		&shapes,

	if (m_pImmediateContext)

	cbDesc.StructureByteStride = 0;

	auto& materials = reader.GetMaterials();

	m_pMatrixBuffer = NULL;

			}

	m_Viewport.TopLeftY = 0;



	//頂点レイアウト作成

	SDL_DestroyRenderer(ren);

#include "DirectXManager.h"



	SDL_Event e;

	std::string imagePath = "hello.bmp";



	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	SDL_DestroyWindow(win);



CD3DTest::~CD3DTest()

}

	D3D11_SAMPLER_DESC smpDesc;

	}*/

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



				vertex.push_back(vertex_tmp);

	//Vertex* pVList = new Vertex[vcount];



	//テクスチャ読み込み

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	//Clean up our objects and quit

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SAFE_RELEASE(m_pTextureView);

	m_pDepthStencilTexture = NULL;





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	DXGI_SWAP_CHAIN_DESC scDesc;

#endif



		pIList[j] = indexList[j];

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	cbDesc.MiscFlags = 0;

	WORD   icount = indexList.size();

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

		D3D_DRIVER_TYPE_HARDWARE,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	UINT flags = 0;

	ConstantMaterial material; //物体の質感

	m_Viewport.MaxDepth = 1.0f;

	ibDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexBuffer);

	bool ret = tinyobj::LoadObj(

	}

CD3DTest::~CD3DTest()

struct ConstantLightBuffer {

	ConstantLightBuffer clb;

	txDesc.Usage = D3D11_USAGE_DEFAULT;

};

	}

		&m_pImmediateContext);

		delete[] pIList;



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



			//Select surfaces based on key press

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

using std::cout; using std::endl;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	dsDesc.Texture2D.MipSlice = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_VertexCount = vcount;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	vbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

		{



	m_Viewport.Width = (FLOAT)rect.Width();

		return 1;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);





	ZeroMemory(&txDesc, sizeof(txDesc));

	WORD   icount = indexList.size();

		D3D11_SDK_VERSION,

	scDesc.OutputWindow = hwnd;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_BUFFER_DESC vbDesc;

	{

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

		}





	if (m_pImmediateContext)

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_UP:

	}

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);



	//頂点シェーダー生成

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	m_pImmediateContext = NULL;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

			switch (e.key.keysym.sym)

	D3D11_BUFFER_DESC vbDesc;



	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	scDesc.BufferDesc.Width = rect.Width();

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	SAFE_RELEASE(m_pInputLayout);

{

	//頂点レイアウト作成

	if (FAILED(hr))

		m_pImmediateContext->ClearState();

				vertex.push_back(vertex_tmp);



		else if (e.type == SDL_KEYDOWN)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_pSwapChain->Present(0, 0);



	return 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	cbDesc.MiscFlags = 0;

	delete[] pVList;

	auto& attrib = reader.GetAttrib();

	::ZeroMemory(&scDesc, sizeof(scDesc));

	vector<WORD> indexList;

	ibDesc.CPUAccessFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		size_t index_offset = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	tinyobj::attrib_t attrib;



}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.CPUAccessFlags = 0;

	m_pPixelShader = NULL;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	LoadObj(vertexlist, indexList);

	float    nearZ = 0.1f;

	dsDesc.Format = txDesc.Format;

		return hr;

	}

struct ConstantMatrixBuffer {

	float    fov = XMConvertToRadians(20.0f);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	}

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDevice = NULL;

};

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

			{



		return hr;

	cbDesc.MiscFlags = 0;

	float    nearZ = 0.1f;

	return;

		&m_pImmediateContext);

		}



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	auto& materials = reader.GetMaterials();

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	int     vcount = vertexlist.size();

			index_offset += fv;

	m_pPixelShader = NULL;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	m_Angle += XMConvertToRadians(1.0f);





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	dsDesc.Texture2D.MipSlice = 0;

	vector<Vertex> vertexlist;

	ConstantMatrixBuffer cmb;

		&materials,

struct ConstantLightBuffer {

{

		&scDesc,





	ConstantLight    pntLight; //点光源

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			exit(1);

		flags,



	txDesc.Width = rect.Width();

	HRESULT              hr;



	cbDesc.CPUAccessFlags = 0;

				break;

using std::cout; using std::endl;

	}

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	delete[] pIList;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	while (SDL_PollEvent(&e) != 0)

		KEY_PRESS_SURFACE_DEFAULT,

#define TINYOBJLOADER_IMPLEMENTATION

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	txDesc.SampleDesc.Quality = 0;

				break;

	{



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);





		exit(1);

	vbDesc.StructureByteStride = 0;

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		SDL_RenderPresent(ren);

{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

/*

	//定数バッファ作成

				break;

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pPixelShader);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		//User presses a key

	XMFLOAT4 attenuate;         //減衰(a,b,c)

		return hr;

		return hr;

	if (FAILED(hr))

	// Loop over shapes



		KEY_PRESS_SURFACE_UP,

#include <iostream>

		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			// Loop over vertices in the face.

	auto& shapes = reader.GetShapes();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	return;

		}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				WORD index = idx.vertex_index;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			index_offset += fv;



	std::string inputfile = "test.obj";



	{



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



#include <iostream>



	cbDesc.CPUAccessFlags = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext = NULL;



	ConstantMaterial material; //物体の質感

	}

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

struct ConstantLight {

};

#include <iostream>

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pDepthStencilView);

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

		SDL_Delay(1000);

}



	{

		return hr;

	{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	m_pTextureView = NULL;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		}

	//Key press surfaces constants

	txDesc.MipLevels = 1;

	};



		delete[] pVList;

			}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SDL_DestroyTexture(tex);

	return hr;



				WORD index = idx.vertex_index;





	{

	SAFE_RELEASE(m_pImmediateContext);

			//Select surfaces based on key press

struct ConstantMaterial {

			index_offset += fv;

	return hr;

		}

	LoadObj(vertexlist, indexList);

	SAFE_RELEASE(m_pDepthStencilTexture);





		//User requests quit

/*

		SDL_RenderCopy(ren, tex, NULL, NULL);

		pLevels,

	m_pDepthStencilTexture = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	tinyobj::attrib_t attrib;

		&level,

	XMFLOAT4         ambient;  //環境光(r,g,b)

	scDesc.OutputWindow = hwnd;

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	SDL_Event e;



	SAFE_RELEASE(m_pImmediateContext);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	enum KeyPressSurfaces

		}

	return;

	txDesc.MiscFlags = 0;

	D3D_FEATURE_LEVEL level;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		&attrib,



	ibDesc.StructureByteStride = 0;

void CD3DTest::Release()

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	//頂点バッファ作成

	{

	scDesc.Windowed = TRUE;

	{



		return hr;



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	cbDesc.CPUAccessFlags = 0;

}



	SAFE_RELEASE(m_pDevice);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SDL_DestroyTexture(tex);

	}

	if (FAILED(hr))

			{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			for (size_t v = 0; v < fv; v++)





	txDesc.Height = rect.Height();



	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	vbDesc.StructureByteStride = 0;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	scDesc.SampleDesc.Count = 1;

				tinyobj::real_t tx =



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	}

		&shapes,



	{



	scDesc.OutputWindow = hwnd;

	reader_config.mtl_search_path = "./"; // Path to material files

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_DestroyTexture(tex);

	{



	if (!reader.ParseFromFile(inputfile, reader_config))

		{

			for (size_t v = 0; v < fv; v++)

	m_Viewport.TopLeftY = 0;





				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

			case SDLK_RIGHT:

	irData.SysMemSlicePitch = 0;

		return hr;

	XMFLOAT4X4 projection;

	}*/

	ZeroMemory(&dsDesc, sizeof(dsDesc));



		m_pImmediateContext->ClearState();

	m_VertexCount = 0;



		{



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pDepthStencilTexture = NULL;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D11_SUBRESOURCE_DATA irData;

	{

	SDL_DestroyRenderer(ren);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	enum KeyPressSurfaces

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	}

 * Lesson 1: Hello World!

	return hr;

		&materials,

			case SDLK_RIGHT:

	SAFE_RELEASE(m_pDepthStencilView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

#include <SDL.h>

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	if (FAILED(hr))



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_IndexCount = 0;



	ConstantLight    pntLight; //点光源

	return 0;

		if (!ret)

		&level,

	ConstantLightBuffer clb;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (FAILED(hr))



		pIList[j] = indexList[j];

	XMFLOAT4X4 view;

	std::vector<tinyobj::shape_t> shapes;

	return 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);





	}

		// Loop over faces(polygon)

	SAFE_RELEASE(m_pPixelShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SAFE_RELEASE(m_pInputLayout);

struct ConstantLight {





	CRect                rect;

	//ビューポート設定

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	ConstantMatrixBuffer cmb;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



		KEY_PRESS_SURFACE_LEFT,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	Release();

	ConstantMatrixBuffer cmb;

	float    nearZ = 0.1f;





	//Vertex* pVList = new Vertex[vcount];

	float    fov = XMConvertToRadians(20.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ConstantMaterial material; //物体の質感



	m_Viewport.TopLeftY = 0;

	SAFE_RELEASE(m_pDepthStencilView);

	txDesc.ArraySize = 1;

	{

	m_pMatrixBuffer = NULL;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	if (FAILED(hr))

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		1,

	SDL_DestroyWindow(win);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			}

	dsDesc.Format = txDesc.Format;



	CRect                rect;

				break;

	for (size_t s = 0; s < shapes.size(); s++)

			for (size_t v = 0; v < fv; v++)

	SAFE_RELEASE(m_pDevice);

			switch (e.key.keysym.sym)

		SDL_RenderClear(ren);



	reader_config.mtl_search_path = "./"; // Path to material files

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	if (m_pImmediateContext)

		return hr;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	cbDesc.StructureByteStride = 0;

		D3D_DRIVER_TYPE_HARDWARE,

	for (int i = 0; i < vcount; i++)



			// Loop over vertices in the face.

	ConstantLight    pntLight; //点光源



	CRect                rect;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

}

		}

int main(int, char**)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	ibDesc.MiscFlags = 0;

	m_pVertexBuffer = NULL;

		pIList[j] = indexList[j];

	SDL_DestroyRenderer(ren);

	m_Viewport.MinDepth = 0.0f;

	m_IndexCount = 0;

				break;

	//テクスチャ読み込み

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	scDesc.BufferCount = 1;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



#include <iostream>

	SAFE_RELEASE(m_pTexture);

	{

		m_pImmediateContext->ClearState();



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

#include <iostream>

	Release();

	}

	::ZeroMemory(&scDesc, sizeof(scDesc));



	SDL_Event e;

	SAFE_RELEASE(m_pInputLayout);

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (FAILED(hr))





	ConstantMatrixBuffer cmb;

	m_pVertexBuffer = NULL;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	tinyobj::ObjReaderConfig reader_config;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

			}

	XMStoreFloat4(&clb.ambient, lightAmbient);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		KEY_PRESS_SURFACE_UP,

	}

			index_offset += fv;

		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.Windowed = TRUE;

#include <SDL.h>

		exit(1);

struct ConstantMaterial {

		return hr;

	float    nearZ = 0.1f;

	ibDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pRenderTargetView);

		m_pImmediateContext->ClearState();

	SAFE_RELEASE(m_pPixelShader);

		KEY_PRESS_SURFACE_TOTAL

	txDesc.CPUAccessFlags = 0;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

			exit(1);

	XMFLOAT4X4 world;

	SAFE_RELEASE(m_pTextureView);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.OutputWindow = hwnd;

	dsDesc.Format = txDesc.Format;

	enum KeyPressSurfaces

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	ibDesc.StructureByteStride = 0;

{

	ConstantMatrixBuffer cmb;

	SAFE_RELEASE(m_pRenderTargetView);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	//定数バッファ作成

	SAFE_RELEASE(m_pSampler);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pInputLayout = NULL;

				indexlist.push_back(index);

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pVertexBuffer);

	float    fov = XMConvertToRadians(20.0f);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.TopLeftY = 0;

struct ConstantMaterial {

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	for (int i = 0; i < 3; i++)

			break;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	}



		return hr;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	::ZeroMemory(&scDesc, sizeof(scDesc));



	cbDesc.CPUAccessFlags = 0;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	{

	UINT strides = sizeof(Vertex);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ConstantMaterial material; //物体の質感

	ConstantMatrixBuffer cmb;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	for (int i = 0; i < 3; i++)

		{

};

	vbDesc.CPUAccessFlags = 0;

	SDL_Event e;

	/*

	cbDesc.MiscFlags = 0;

		&shapes,

	}

		&materials,

		delete[] pVList;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	ibDesc.StructureByteStride = 0;

			exit(1);

	for (int i = 0; i < 3; i++)

		KEY_PRESS_SURFACE_TOTAL

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	for (const auto& shape : shapes)

	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

			{

	SAFE_RELEASE(m_pVertexShader);

	ZeroMemory(&txDesc, sizeof(txDesc));

#include "DirectXManager.h"



{



		SDL_RenderPresent(ren);

	m_pTexture = NULL;



	}

	if (FAILED(hr))

};

	{

	::GetClientRect(hwnd, &rect);

	scDesc.BufferDesc.Width = rect.Width();

	irData.SysMemSlicePitch = 0;

	SAFE_RELEASE(m_pSampler);

#ifdef _DEBUG

	txDesc.ArraySize = 1;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	//vector<Vertex> vertex_t;

		{

	m_pTextureView = NULL;

		}

				break;

		KEY_PRESS_SURFACE_TOTAL

	{

	if (!reader.ParseFromFile(inputfile, reader_config))





	if (!reader.ParseFromFile(inputfile, reader_config))

	m_pSwapChain = NULL;

	SAFE_RELEASE(m_pDevice);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	{



	}

{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		{

	D3D11_SUBRESOURCE_DATA irData;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	if (m_pImmediateContext)

	WORD   icount = indexList.size();

	m_Viewport.MinDepth = 0.0f;

		&m_pDevice,

	D3D11_BUFFER_DESC ibDesc;

	vrData.SysMemPitch = 0;

		if (e.type == SDL_QUIT)

#define TINYOBJLOADER_IMPLEMENTATION

/*



	D3D_FEATURE_LEVEL level;

		D3D_DRIVER_TYPE_HARDWARE,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	cbDesc.StructureByteStride = 0;

		return hr;

		delete[] pIList;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



			for (size_t v = 0; v < fv; v++)

	if (!reader.Warning().empty())





				indexlist.push_back(index);

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Width = rect.Width();

	Vertex* pVList = new Vertex[vcount];

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	for (size_t s = 0; s < shapes.size(); s++)

	XMFLOAT4X4 projection;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		return hr;

	XMFLOAT4         ambient;  //環境光(r,g,b)







	cbDesc.MiscFlags = 0;

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	irData.SysMemPitch = 0;

	SAFE_RELEASE(m_pSwapChain);

	ibDesc.MiscFlags = 0;

	//インデックスバッファ作成

	XMFLOAT4 ambient;           //環境(r,g,b)

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	SAFE_RELEASE(m_pSwapChain);

				// access to vertex

	D3D_FEATURE_LEVEL level;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_SUBRESOURCE_DATA irData;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	{

int main(int, char**)

	vector<WORD> indexList;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;





	return 0;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	auto& materials = reader.GetMaterials();

			break;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);



	delete[] pIList;



		SDL_RenderCopy(ren, tex, NULL, NULL);

	vrData.SysMemPitch = 0;

	ConstantLightBuffer clb;

#ifdef _DEBUG

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	return;

		return hr;

		cout << "SDL_INIT_ERROR" << endl;

}

		SDL_RenderClear(ren);

	if (FAILED(hr))

	if (FAILED(hr))

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	if (m_pImmediateContext)

	m_pLightBuffer = NULL;

	vector<Vertex> vertexlist;

		KEY_PRESS_SURFACE_DOWN,

		return hr;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		NULL,

	//テクスチャ読み込み

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	::GetClientRect(hwnd, &rect);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	//定数バッファ作成



	ConstantLight    pntLight; //点光源

		}

		&shapes,

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		SDL_RenderPresent(ren);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

struct ConstantMatrixBuffer {

	auto& shapes = reader.GetShapes();

}

	}

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

			{

{

			switch (e.key.keysym.sym)

	XMStoreFloat4(&clb.ambient, lightAmbient);



		SDL_Delay(1000);

				break;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	m_pVertexBuffer = NULL;

	//vector<WORD> index_t;

	//頂点バッファ作成

				vertex.push_back(vertex_tmp);



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	while (SDL_PollEvent(&e) != 0)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	scDesc.OutputWindow = hwnd;

	D3D11_TEXTURE2D_DESC txDesc;

		{

	}

	XMFLOAT4X4 projection;

	for (int i = 0; i < vcount; i++)

		{

		SDL_Delay(1000);

	SAFE_RELEASE(m_pDevice);

		}



			//Select surfaces based on key press

		delete[] pVList;

	}

				indexlist.push_back(idx.vertex_index);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	std::vector<tinyobj::shape_t> shapes;

	SAFE_RELEASE(m_pVertexShader);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				// access to vertex

	}



	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

			{



	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		delete[] pIList;

		return hr;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

}



	m_Viewport.MinDepth = 0.0f;

	scDesc.BufferDesc.Height = rect.Height();

}

		return hr;

		&shapes,

{

	{



	if (FAILED(hr))



	SDL_DestroyWindow(win);



 * Lesson 1: Hello World!



		return hr;





void CD3DTest::Release()

	m_pPixelShader = NULL;

	ibDesc.MiscFlags = 0;

	{

	UINT flags = 0;

			default:



		{

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	Release();

		KEY_PRESS_SURFACE_DOWN,

		pIList[j] = indexList[j];

}

		flags,

	/*

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pMatrixBuffer = NULL;

	float    farZ = 100.0f;

	if (FAILED(hr))



				break;

#include "DirectXManager.h"

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	ibDesc.ByteWidth = sizeof(WORD) * icount;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		}

	Release();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	vector<Vertex> vertexlist;

	XMFLOAT4X4 view;

		{

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pTexture = NULL;

	SDL_DestroyWindow(win);



				indexlist.push_back(idx.vertex_index);

	{

	m_pVertexBuffer = NULL;



		KEY_PRESS_SURFACE_UP,

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

		if (!ret)

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.BufferCount = 1;



	XMFLOAT4 pos;               //座標(x,y,z)

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			case SDLK_LEFT:

	return;

	m_pSwapChain = NULL;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#include "DirectXManager.h"

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pVertexBuffer);

	m_IndexCount = 0;

			for (size_t v = 0; v < num_vertices; v++)

	D3D11_BUFFER_DESC ibDesc;

}



	// Loop over shapes

			}

			case SDLK_DOWN:

}



		return hr;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

				break;



		else if (e.type == SDL_KEYDOWN)

		&m_pImmediateContext);

	SDL_DestroyTexture(tex);

};

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			{



		}

	m_pDepthStencilTexture = NULL;

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SAFE_RELEASE(m_pMatrixBuffer);

	SDL_Quit();



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	// Loop over shapes

	return 0;

	}

		return hr;

	std::vector<tinyobj::shape_t> shapes;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	tinyobj::ObjReaderConfig reader_config;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	if (!error.empty())

	scDesc.Windowed = TRUE;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



{

{

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;

#define TINYOBJLOADER_IMPLEMENTATION

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

#include <SDL.h>



 * Lesson 1: Hello World!

	std::string imagePath = "hello.bmp";

	}*/

	{

	float    farZ = 100.0f;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	}

	m_VertexCount = 0;

		KEY_PRESS_SURFACE_DOWN,

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



				vertex.push_back(vertex_tmp);



	ID3D11Texture2D* pBackBuffer;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	delete[] pIList;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



};

	vector<WORD> indexList;

	UINT flags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

}

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	for (int j = 0; j < icount; j++)

	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	std::vector<tinyobj::material_t> materials;





				break;

	float    fov = XMConvertToRadians(20.0f);

	m_pVertexBuffer = NULL;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	/*

	}

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,

	{

	m_Viewport.MinDepth = 0.0f;

#include <iostream>



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	scDesc.SampleDesc.Count = 1;



#define TINYOBJLOADER_IMPLEMENTATION

	if (FAILED(hr))

	// Loop over shapes

	tinyobj::ObjReaderConfig reader_config;

	XMFLOAT4         ambient;  //環境光(r,g,b)

};

	scDesc.Windowed = TRUE;

	}

			switch (e.key.keysym.sym)

		&scDesc,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

#include <iostream>



	txDesc.MiscFlags = 0;

	m_VertexCount = vcount;

	scDesc.BufferDesc.Width = rect.Width();

	scDesc.SampleDesc.Quality = 0;

	XMFLOAT4         eyePos;   //視点座標

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;





	return;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pSampler);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pTexture = NULL;

	}

		KEY_PRESS_SURFACE_RIGHT,

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		delete[] pVList;

	m_pDepthStencilView = NULL;

		return hr;

	vbDesc.StructureByteStride = 0;

CD3DTest::CD3DTest()

};

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



	SAFE_RELEASE(m_pSwapChain);

	{

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	if (FAILED(hr))

			{

	auto& shapes = reader.GetShapes();

	}

		}

		pIList[j] = indexList[j];

		cout << "SDL_INIT_ERROR" << endl;

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

				// access to vertex

	}

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	vrData.pSysMem = &pVList[0];

	dsDesc.Texture2D.MipSlice = 0;

		else if (e.type == SDL_KEYDOWN)

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

	m_pSwapChain = NULL;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		cout << "SDL_INIT_ERROR" << endl;

		return hr;

	SDL_DestroyRenderer(ren);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

 */



	WORD   icount = indexList.size();

			{

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	auto& materials = reader.GetMaterials();



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	//ピクセルシェーダー生成

	vbDesc.MiscFlags = 0;







		}

	SDL_FreeSurface(bmp);

int SEGMENT = 36;

			index_offset += num_vertices;

void CD3DTest::Render()

			case SDLK_DOWN:

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		delete[] pVList;

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (FAILED(hr))



{

	float    farZ = 100.0f;

			index_offset += fv;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;





struct ConstantMatrixBuffer {

			// Loop over vertices in the face.

	m_pDepthStencilView = NULL;

	{

	tinyobj::ObjReader reader;



	XMFLOAT4X4 projection;

		}

struct ConstantLight {

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	SAFE_RELEASE(m_pInputLayout);

	if (m_pImmediateContext)

	//Clean up our objects and quit

	float    fov = XMConvertToRadians(20.0f);

	UINT flags = 0;

	SAFE_RELEASE(m_pDepthStencilView);

		SDL_RenderCopy(ren, tex, NULL, NULL);



}

		pLevels,

				vertex.push_back(vertex_tmp);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	vrData.pSysMem = &pVList[0];

	std::string imagePath = "hello.bmp";

CD3DTest::CD3DTest()

	SAFE_RELEASE(m_pTextureView);

	D3D11_SUBRESOURCE_DATA irData;

	float    farZ = 100.0f;

		KEY_PRESS_SURFACE_TOTAL

		return 1;

		&level,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];



	SDL_Event e;

	D3D11_BUFFER_DESC cbDesc;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	SAFE_RELEASE(m_pMatrixBuffer);

	XMFLOAT4 ambient;           //環境(r,g,b)

	cbDesc.MiscFlags = 0;

				vertex.push_back(vertex_tmp);

		return hr;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	}

	if (FAILED(hr))

	hr = D3D11CreateDeviceAndSwapChain(NULL,

CD3DTest::CD3DTest()

			break;





	scDesc.BufferCount = 1;

	XMStoreFloat4(&clb.eyePos, eye);

#include <iostream>

		exit(1);

		//User requests quit

	//テクスチャ読み込み

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			}

	SAFE_RELEASE(m_pVertexBuffer);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	m_pImmediateContext = NULL;



	LoadObj(vertexlist, indexList);



	float    nearZ = 0.1f;

	Vertex* pVList = new Vertex[vcount];

	txDesc.MiscFlags = 0;



				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pTextureView);

			{

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//テクスチャ読み込み

		return hr;

	if (!reader.Warning().empty())



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	}

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	m_pInputLayout = NULL;

#include <SDL.h>

				tinyobj::real_t ty =

	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

				break;

		return hr;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	flags |= D3D11_CREATE_DEVICE_DEBUG;



	m_pSwapChain = NULL;

	txDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	SDL_DestroyWindow(win);

	irData.SysMemPitch = 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	}

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



		&m_pImmediateContext);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	scDesc.SampleDesc.Quality = 0;

	txDesc.CPUAccessFlags = 0;



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pRenderTargetView = NULL;

				break;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

			case SDLK_UP:

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	CRect                rect;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			index_offset += fv;



		{

			for (size_t v = 0; v < num_vertices; v++)

			// Loop over vertices in the face.



	dsDesc.Texture2D.MipSlice = 0;



#endif

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	UINT strides = sizeof(Vertex);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

int main(int, char**)

		NULL,

	float    farZ = 100.0f;

	cbDesc.MiscFlags = 0;

	SAFE_RELEASE(m_pDevice);

using std::cout; using std::endl;

	D3D11_SUBRESOURCE_DATA vrData;

struct ConstantLightBuffer {

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

HRESULT CD3DTest::Create(HWND hwnd)

			}

			case SDLK_RIGHT:



#include <SDL.h>

	if (FAILED(hr))





int SEGMENT = 36;

	std::string imagePath = "hello.bmp";

		&attrib,

	}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	txDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			// Loop over vertices in the face.

	if (FAILED(hr))



	txDesc.SampleDesc.Count = 1;

	}

struct ConstantLight {



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_pDevice = NULL;

		}

		else if (e.type == SDL_KEYDOWN)

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pDevice);

 */

	m_pTexture = NULL;

	XMFLOAT4X4 world;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

{

	SDL_Quit();

{

	D3D_FEATURE_LEVEL level;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	{

	::ZeroMemory(&scDesc, sizeof(scDesc));

	XMFLOAT4X4 view;

		D3D11_SDK_VERSION,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);





	D3D11_BUFFER_DESC vbDesc;

	SDL_DestroyTexture(tex);

	::ZeroMemory(&scDesc, sizeof(scDesc));





const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	vrData.SysMemSlicePitch = 0;



	vrData.SysMemSlicePitch = 0;

		return hr;

		size_t index_offset = 0;

	XMFLOAT4 pos;               //座標(x,y,z)

	vrData.SysMemPitch = 0;

	Release();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	SAFE_RELEASE(m_pIndexBuffer);

		&scDesc,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);



		flags,

		NULL,

		NULL,

CD3DTest::~CD3DTest()



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	if (FAILED(hr))



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

			default:





	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

			{







				WORD index = idx.vertex_index;

	D3D11_BUFFER_DESC cbDesc;

	cbDesc.MiscFlags = 0;

	{

		&m_pImmediateContext);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	m_pVertexShader = NULL;

	ConstantMaterial material; //物体の質感

#ifdef _DEBUG

#endif

	return hr;

		NULL,

{

}
	XMFLOAT4 ambient;           //環境(r,g,b)

	vrData.SysMemSlicePitch = 0;

		return 1;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		if (!ret)

	XMFLOAT4 specular;          //反射(r,g,b)

				break;

	pBackBuffer->Release();

	SAFE_RELEASE(m_pMatrixBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		&attrib,



	XMFLOAT4 attenuate;         //減衰(a,b,c)



#include <iostream>

	SDL_DestroyWindow(win);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	D3D11_BUFFER_DESC cbDesc;

	//深度ステンシルバッファ作成

				break;

		cout << "SDL_INIT_ERROR" << endl;

	ibDesc.MiscFlags = 0;

	dsDesc.Format = txDesc.Format;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

				WORD index = idx.vertex_index;

		}

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	if (FAILED(hr))

	{

	txDesc.ArraySize = 1;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	{

	if (FAILED(hr))

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	vrData.pSysMem = &pVList[0];

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

	m_IndexCount = icount;

	vrData.SysMemSlicePitch = 0;

	std::string inputfile = "test.obj";



		KEY_PRESS_SURFACE_UP,

	//ピクセルシェーダー生成



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	// Loop over shapes

		//User requests quit

				indexlist.push_back(index);



	XMFLOAT4 diffuse;           //拡散(r,g,b)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	return hr;

	vector<WORD> indexList;

#include "DirectXManager.h"



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	if (FAILED(hr))



#include <SDL.h>

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pImmediateContext);

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pRenderTargetView);

		size_t index_offset = 0;  // インデントのオフセット

	XMFLOAT4         eyePos;   //視点座標



	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	txDesc.SampleDesc.Count = 1;



};

	txDesc.CPUAccessFlags = 0;

#include <iostream>

	SDL_FreeSurface(bmp);

		&m_pDevice,



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		D3D11_SDK_VERSION,

		return hr;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

}

	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



				WORD index = idx.vertex_index;

{

	if (FAILED(hr))

	}

		{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	if (m_pImmediateContext)

	bool ret = tinyobj::LoadObj(

	SAFE_RELEASE(m_pDepthStencilTexture);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	scDesc.BufferCount = 1;

	ID3D11Texture2D* pBackBuffer;

	WORD* pIList = new WORD[icount];



		return hr;

		//User requests quit

	{

	XMFLOAT4X4 projection;

	UINT flags = 0;

 */

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	{

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))



	{

		KEY_PRESS_SURFACE_LEFT,

		D3D11_SDK_VERSION,

	}*/

	::ZeroMemory(&scDesc, sizeof(scDesc));

	}

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pRenderTargetView);

	std::string imagePath = "hello.bmp";



	}

	Release();

	m_pVertexBuffer = NULL;

				// access to vertex

	SAFE_RELEASE(m_pSwapChain);

	ConstantMaterial material; //物体の質感

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SDL_DestroyWindow(win);

	m_pSwapChain->Present(0, 0);

	}

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



	m_pSampler = NULL;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				WORD index = idx.vertex_index;

		&m_pImmediateContext);

	{

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_Viewport.TopLeftY = 0;





	txDesc.Width = rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	vbDesc.MiscFlags = 0;

	for (const auto& shape : shapes)

	ConstantMaterial material; //物体の質感



		R"(cube.obj)");

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	if (FAILED(hr))



	ConstantLightBuffer clb;

#ifdef _DEBUG

		flags,

		delete[] pVList;

	/*

		pVList[i] = vertexlist[i];

		}

	if (FAILED(hr))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



HRESULT CD3DTest::Create(HWND hwnd)

		NULL,



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

CD3DTest::CD3DTest()

	m_Viewport.Height = (FLOAT)rect.Height();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





		// Loop over faces(polygon)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



		return hr;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



		return hr;



	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pTexture);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	txDesc.ArraySize = 1;

	m_pSwapChain = NULL;

	LoadObj(vertexlist, indexList);

	scDesc.Windowed = TRUE;



	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	txDesc.MiscFlags = 0;



	return hr;



	cbDesc.StructureByteStride = 0;

	bool ret = tinyobj::LoadObj(

	Release();

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	SAFE_RELEASE(m_pSwapChain);

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

			case SDLK_UP:



	LoadObj(vertexlist, indexList);

		KEY_PRESS_SURFACE_RIGHT,





	cbDesc.StructureByteStride = 0;

CD3DTest::CD3DTest()

};

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	DXGI_SWAP_CHAIN_DESC scDesc;

	SDL_DestroyTexture(tex);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		{

	SAFE_RELEASE(m_pVertexBuffer);

			case SDLK_LEFT:

	{

	}

}

	for (int i = 0; i < 3; i++)







	SAFE_RELEASE(m_pDepthStencilTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	if (FAILED(hr))

	cbDesc.MiscFlags = 0;







	SDL_FreeSurface(bmp);

	m_Viewport.TopLeftY = 0;

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SAFE_RELEASE(m_pIndexBuffer);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

	std::vector<tinyobj::shape_t> shapes;



	m_pMatrixBuffer = NULL;

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

};

#include <SDL.h>

	vbDesc.MiscFlags = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	tinyobj::attrib_t attrib;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	if (FAILED(hr))

#endif

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	while (SDL_PollEvent(&e) != 0)

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

 * Lesson 1: Hello World!

	SDL_DestroyRenderer(ren);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	}

{

		delete[] pVList;

#include <iostream>

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;







	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_DestroyTexture(tex);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				break;

				vertex.push_back(vertex_tmp);







	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	m_pIndexBuffer = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	if (FAILED(hr))

		D3D11_SDK_VERSION,

}

		{



	{

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{

			case SDLK_DOWN:

	//定数バッファ作成

	XMStoreFloat4(&clb.ambient, lightAmbient);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{

			for (size_t v = 0; v < num_vertices; v++)

	SDL_FreeSurface(bmp);

	//First we need to start up SDL, and make sure it went ok

	cbDesc.StructureByteStride = 0;



	pBackBuffer->Release();

void CD3DTest::Render()

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

#include <SDL.h>

	D3D11_SUBRESOURCE_DATA vrData;

	/*



	if (FAILED(hr))

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				// access to vertex

	txDesc.CPUAccessFlags = 0;

	vbDesc.CPUAccessFlags = 0;





		cout << "SDL_INIT_ERROR" << endl;

		return hr;



		pVList[i] = vertexlist[i];

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	//Clean up our objects and quit

			case SDLK_RIGHT:



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	std::vector<tinyobj::shape_t> shapes;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	if (!error.empty())

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

	scDesc.OutputWindow = hwnd;

	D3D11_BUFFER_DESC cbDesc;

	{

		delete[] pIList;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	m_Angle += XMConvertToRadians(1.0f);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

			}

			case SDLK_LEFT:



		size_t index_offset = 0;

	scDesc.SampleDesc.Quality = 0;

		SDL_Delay(1000);



}

	}

		return hr;

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		else if (e.type == SDL_KEYDOWN)

	m_pSampler = NULL;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_DestroyTexture(tex);

			// Loop over vertices in the face.

	cbDesc.StructureByteStride = 0;

};

				tinyobj::real_t tx =

	if (FAILED(hr))

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		{

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	if (FAILED(hr))

	ConstantLight    pntLight; //点光源

	{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

			{

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	if (FAILED(hr))

	m_pImmediateContext = NULL;

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pMatrixBuffer);

	m_pRenderTargetView = NULL;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

				// access to vertex

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	vrData.pSysMem = &pVList[0];

			for (size_t v = 0; v < fv; v++)

CD3DTest::CD3DTest()

			{



	}

	SAFE_RELEASE(m_pVertexBuffer);

	}

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vrData.pSysMem = &pVList[0];

	SDL_DestroyWindow(win);

	{

			// Loop over vertices in the face.



		pIList[j] = indexList[j];



	m_pSwapChain = NULL;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

HRESULT CD3DTest::Create(HWND hwnd)

		KEY_PRESS_SURFACE_RIGHT,

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.CPUAccessFlags = 0;

	//深度ステンシルバッファ作成

}

		return hr;

	cbDesc.MiscFlags = 0;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		&shapes,

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&scDesc,

{

};

	txDesc.SampleDesc.Quality = 0;

	m_pIndexBuffer = NULL;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



	scDesc.BufferDesc.Height = rect.Height();

		return hr;

	return 0;



	delete[] pVList;

	m_IndexCount = icount;

	m_Viewport.Width = (FLOAT)rect.Width();

	SAFE_RELEASE(m_pInputLayout);

	}

#include <SDL.h>

#include <iostream>

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	if (FAILED(hr))



	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



	irData.SysMemPitch = 0;

	cbDesc.MiscFlags = 0;

	cbDesc.StructureByteStride = 0;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

		{

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

}

	int     vcount = vertexlist.size();



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	txDesc.Height = rect.Height();

		{

	cbDesc.StructureByteStride = 0;

		size_t index_offset = 0;

	txDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

		else if (e.type == SDL_KEYDOWN)

	Release();

	if (FAILED(hr))

			index_offset += fv;

#endif

	XMFLOAT4 specular;          //反射(r,g,b)

			{

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

{

	//頂点シェーダー生成

	XMFLOAT4 pos;               //座標(x,y,z)

				WORD index = idx.vertex_index;

	if (FAILED(hr))

				indexlist.push_back(index);

	m_Viewport.Height = (FLOAT)rect.Height();



	XMFLOAT4         eyePos;   //視点座標

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

				WORD index = idx.vertex_index;

	m_pVertexShader = NULL;

	if (FAILED(hr))

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pSampler);

	std::string inputfile = "test.obj";

#include "DirectXManager.h"

	ID3D11Texture2D* pBackBuffer;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	/*

		R"(cube.obj)");

	tinyobj::ObjReader reader;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	UINT offsets = 0;

			{

			}



		SDL_RenderClear(ren);

	XMFLOAT4X4 projection;

	m_Angle += XMConvertToRadians(1.0f);

	for (int i = 0; i < vcount; i++)



		size_t index_offset = 0;

	m_pSwapChain = NULL;

			index_offset += fv;

		return hr;

	m_pMatrixBuffer = NULL;

	}

	reader_config.mtl_search_path = "./"; // Path to material files

	vector<Vertex> vertexlist;

	if (m_pImmediateContext)

			int num_vertices = shape.mesh.num_face_vertices[f];

#include "DirectXManager.h"





	m_pPixelShader = NULL;

				break;

	vrData.pSysMem = &pVList[0];

};

	m_pDepthStencilView = NULL;

	/*

	m_Viewport.TopLeftX = 0;



	CRect                rect;

	m_pIndexBuffer = NULL;





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];





	ConstantMaterial material; //物体の質感

	}





			int num_vertices = shape.mesh.num_face_vertices[f];

	//頂点バッファ作成

}
	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		return hr;



	//ビューポート設定

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		SDL_RenderPresent(ren);

	{

	{

	if (FAILED(hr))



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&scDesc,

	SDL_DestroyWindow(win);

			//Select surfaces based on key press

			case SDLK_RIGHT:

	}

	//Create Index

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	float    farZ = 100.0f;

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	SAFE_RELEASE(m_pVertexBuffer);

	return 0;

		return hr;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	m_pDepthStencilTexture = NULL;

	dsDesc.Format = txDesc.Format;

	cbDesc.CPUAccessFlags = 0;

		return hr;

	delete[] pIList;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		&m_pSwapChain,



	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}*/

	if (FAILED(hr))



				// access to vertex



	XMStoreFloat4(&clb.ambient, lightAmbient);

	m_Angle += XMConvertToRadians(1.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	Release();



	dsDesc.Format = txDesc.Format;

	ibDesc.StructureByteStride = 0;

		return hr;





	m_Viewport.MinDepth = 0.0f;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		SDL_Delay(1000);

	D3D11_TEXTURE2D_DESC txDesc;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

}

 * Lesson 1: Hello World!

	SDL_DestroyTexture(tex);

			break;



			switch (e.key.keysym.sym)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.MiscFlags = 0;

			case SDLK_LEFT:

	UINT flags = 0;

		KEY_PRESS_SURFACE_DOWN,



	}



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



		KEY_PRESS_SURFACE_LEFT,







			default:

int main(int, char**)

		KEY_PRESS_SURFACE_DEFAULT,

		pVList[i] = vertexlist[i];

	scDesc.SampleDesc.Count = 1;



	//深度ステンシルバッファ作成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	std::string error;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	if (FAILED(hr))

int main(int, char**)

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		KEY_PRESS_SURFACE_RIGHT,

	if (!reader.Warning().empty())

	m_pDevice = NULL;





};

	float    nearZ = 0.1f;

	D3D11_BUFFER_DESC vbDesc;

	Vertex* pVList = new Vertex[vcount];

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

		return hr;

	if (FAILED(hr))

{

	vector<WORD> indexList;

	for (const auto& shape : shapes)

	reader_config.mtl_search_path = "./"; // Path to material files

	SAFE_RELEASE(m_pImmediateContext);



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		&scDesc,

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMFLOAT4 pos;               //座標(x,y,z)

	::ZeroMemory(&scDesc, sizeof(scDesc));

	if (!reader.ParseFromFile(inputfile, reader_config))

		}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	D3D11_SUBRESOURCE_DATA irData;



	m_pInputLayout = NULL;

			case SDLK_RIGHT:

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	D3D11_BUFFER_DESC vbDesc;

	D3D11_TEXTURE2D_DESC txDesc;

	m_pVertexShader = NULL;



	irData.SysMemSlicePitch = 0;

	m_pTextureView = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

		if (!ret)

		SDL_Delay(1000);

	//Clean up our objects and quit



		return hr;

	m_pTextureView = NULL;

	return 0;

#ifdef _DEBUG

int main(int, char**)

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	irData.pSysMem = &pIList[0];

CD3DTest::CD3DTest()



		&m_pImmediateContext);



		{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	D3D11_SAMPLER_DESC smpDesc;

	UINT flags = 0;

	dsDesc.Format = txDesc.Format;



	m_Viewport.MinDepth = 0.0f;

	SDL_DestroyTexture(tex);

	if (!error.empty())

	SAFE_RELEASE(m_pIndexBuffer);

	SDL_DestroyTexture(tex);

	m_pPixelShader = NULL;

			}

		else if (e.type == SDL_KEYDOWN)

	// Loop over shapes

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

{

	m_pLightBuffer = NULL;

	ConstantLightBuffer clb;

	{

#include <SDL.h>



		return hr;

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	CRect                rect;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;



	m_VertexCount = 0;



	return;





		SDL_RenderPresent(ren);

int SEGMENT = 36;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	m_pTextureView = NULL;

	}

	SDL_DestroyRenderer(ren);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		{



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	UINT flags = 0;

		{

		R"(cube.obj)");

	vrData.SysMemSlicePitch = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	cbDesc.CPUAccessFlags = 0;

	m_IndexCount = icount;

	return 0;

			case SDLK_RIGHT:

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

CD3DTest::CD3DTest()

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pSwapChain);

	float    farZ = 100.0f;

	if (FAILED(hr))

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	std::string imagePath = "hello.bmp";

	XMFLOAT4         eyePos;   //視点座標

	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{



	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

{

	//頂点シェーダー生成

		{

	m_pPixelShader = NULL;

	//インデックスバッファ作成

	XMFLOAT4X4 projection;

				tinyobj::real_t ty =

	SAFE_RELEASE(m_pDevice);

			int num_vertices = shape.mesh.num_face_vertices[f];

		KEY_PRESS_SURFACE_TOTAL

		return hr;

	txDesc.ArraySize = 1;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	irData.SysMemPitch = 0;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	ConstantMatrixBuffer cmb;



		//User presses a key

	SDL_FreeSurface(bmp);

	::ZeroMemory(&scDesc, sizeof(scDesc));

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	D3D11_BUFFER_DESC cbDesc;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	SAFE_RELEASE(m_pSampler);

	CRect                rect;

				break;

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (m_pImmediateContext)

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	if (!reader.ParseFromFile(inputfile, reader_config))

	CRect                rect;

				tinyobj::real_t tx =

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

HRESULT CD3DTest::Create(HWND hwnd)

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	m_pPixelShader = NULL;

CD3DTest::CD3DTest()





	dsDesc.Format = txDesc.Format;

		return hr;

	pBackBuffer->Release();

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	cbDesc.MiscFlags = 0;

	pBackBuffer->Release();

	if (FAILED(hr))

	}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		&m_pImmediateContext);

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

				break;

	//深度ステンシルバッファ作成

	if (FAILED(hr))

};

				tinyobj::real_t ty =

	m_pVertexShader = NULL;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	}

	if (!reader.Warning().empty())

	SAFE_RELEASE(m_pLightBuffer);

{



	UINT offsets = 0;

	}*/

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))

	LoadObj(vertexlist, indexList);



	if (!error.empty())

	SAFE_RELEASE(m_pTexture);

	{

	m_pSampler = NULL;



	HRESULT              hr;

	}

	WORD   icount = indexList.size();

	}

	txDesc.CPUAccessFlags = 0;



}

	std::string error;

	auto& shapes = reader.GetShapes();

		KEY_PRESS_SURFACE_RIGHT,

	irData.pSysMem = &pIList[0];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#include <iostream>

};

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		// Loop over faces(polygon)

	Vertex* pVList = new Vertex[vcount];

	m_VertexCount = vcount;

	for (int i = 0; i < 3; i++)

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



}
	while (SDL_PollEvent(&e) != 0)

				vertex.push_back(vertex_tmp);

#endif



	pBackBuffer->Release();

	XMFLOAT4 pos;               //座標(x,y,z)

struct ConstantLight {

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		size_t index_offset = 0;

	::GetClientRect(hwnd, &rect);



	//ピクセルシェーダー生成

	float    farZ = 100.0f;



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMStoreFloat4(&clb.eyePos, eye);

	m_pImmediateContext = NULL;

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	float    fov = XMConvertToRadians(20.0f);

	SDL_DestroyWindow(win);

			index_offset += fv;

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			switch (e.key.keysym.sym)

	float    nearZ = 0.1f;



	m_IndexCount = 0;



		return hr;

	{

{



	irData.SysMemSlicePitch = 0;

			{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	if (FAILED(hr))

	HRESULT              hr;

{



	{



	D3D11_SUBRESOURCE_DATA vrData;

	{

		return hr;

	Vertex* pVList = new Vertex[vcount];



	ibDesc.CPUAccessFlags = 0;



	UINT strides = sizeof(Vertex);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

#include <iostream>

	UINT offsets = 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	enum KeyPressSurfaces

	txDesc.MiscFlags = 0;

	{

		return hr;

	}

	D3D11_SUBRESOURCE_DATA irData;

	D3D11_BUFFER_DESC ibDesc;

		return hr;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

int SEGMENT = 36;





		{

	SAFE_RELEASE(m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];





	m_pIndexBuffer = NULL;

	XMFLOAT4         eyePos;   //視点座標

	//ビューポート設定

	return 0;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		SDL_RenderPresent(ren);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

				// access to vertex

	D3D11_BUFFER_DESC vbDesc;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	txDesc.CPUAccessFlags = 0;



	//頂点バッファ作成

		KEY_PRESS_SURFACE_DEFAULT,



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pPixelShader);

	if (FAILED(hr))

		KEY_PRESS_SURFACE_DOWN,

			int num_vertices = shape.mesh.num_face_vertices[f];

	txDesc.MiscFlags = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);





	{

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		return hr;

	SDL_DestroyRenderer(ren);

			index_offset += fv;



				vertex.push_back(vertex_tmp);

		&materials,

		KEY_PRESS_SURFACE_DOWN,



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//Create Index

	txDesc.Width = rect.Width();

	SAFE_RELEASE(m_pVertexBuffer);

	// Loop over shapes

	ibDesc.CPUAccessFlags = 0;





	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



#include <iostream>





	SAFE_RELEASE(m_pInputLayout);



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4         ambient;  //環境光(r,g,b)

			case SDLK_LEFT:



	scDesc.BufferDesc.Height = rect.Height();

				indexlist.push_back(idx.vertex_index);

		{

	m_Viewport.Width = (FLOAT)rect.Width();

	int     vcount = vertexlist.size();

CD3DTest::~CD3DTest()

	for (int i = 0; i < vcount; i++)

	//頂点シェーダー生成

	{

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pTextureView);







	vrData.SysMemSlicePitch = 0;

				break;

	if (FAILED(hr))

struct ConstantLightBuffer {

	cbDesc.StructureByteStride = 0;

	if (m_pImmediateContext)

	{

	return;

		SDL_RenderPresent(ren);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		if (!ret)

{





	vbDesc.MiscFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	auto& shapes = reader.GetShapes();

	Release();

	if (!reader.ParseFromFile(inputfile, reader_config))

		{

	}

	if (FAILED(hr))

	//Key press surfaces constants

	CRect                rect;

	delete[] pVList;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	UINT strides = sizeof(Vertex);



	m_pRenderTargetView = NULL;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}





	m_pDepthStencilTexture = NULL;

		pIList[j] = indexList[j];

		return hr;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

{

			}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	dsDesc.Format = txDesc.Format;

	SAFE_RELEASE(m_pTextureView);



	vrData.SysMemPitch = 0;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	LoadObj(vertexlist, indexList);

	m_pSampler = NULL;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		return hr;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	{

	//Clean up our objects and quit

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	CRect                rect;

	D3D_FEATURE_LEVEL level;

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	{



		m_pImmediateContext->ClearState();

	}*/

				// access to vertex

	{

	/*

	if (FAILED(hr))





			index_offset += fv;



		D3D11_SDK_VERSION,

}

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	m_Viewport.Width = (FLOAT)rect.Width();





	}

	};

		exit(1);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			//Select surfaces based on key press

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

		pLevels,

		}



			default:

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



HRESULT CD3DTest::Create(HWND hwnd)

	scDesc.BufferCount = 1;

				indexlist.push_back(idx.vertex_index);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	std::vector<tinyobj::material_t> materials;

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

};

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	ibDesc.CPUAccessFlags = 0;



				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	vector<Vertex> vertexlist;

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				break;

	XMFLOAT4 specular;          //反射(r,g,b)





		&m_pDevice,

	m_pIndexBuffer = NULL;

				tinyobj::real_t tx =

	//vector<WORD> index_t;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			break;

	txDesc.SampleDesc.Count = 1;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//頂点レイアウト作成

				break;

	//vector<Vertex> vertex_t;

}

			// Loop over vertices in the face.

	vrData.SysMemSlicePitch = 0;

void CD3DTest::Release()

	if (FAILED(hr))



		{



		return hr;

	/*

{

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



	m_IndexCount = icount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	//vector<Vertex> vertex_t;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	reader_config.mtl_search_path = "./"; // Path to material files

		SDL_Delay(1000);

	std::string imagePath = "hello.bmp";

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

{

	m_IndexCount = icount;

	for (const auto& shape : shapes)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





	SDL_FreeSurface(bmp);

				break;

	{

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		}



	int     vcount = vertexlist.size();

	m_pImmediateContext = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);











	//First we need to start up SDL, and make sure it went ok



}
		return hr;

CD3DTest::CD3DTest()

		&m_pImmediateContext);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

			switch (e.key.keysym.sym)



	//ビューポート設定

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

int SEGMENT = 36;

	for (int i = 0; i < vcount; i++)

	XMFLOAT4X4 world;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (FAILED(hr))

	m_pDevice = NULL;

	if (!error.empty())

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	tinyobj::ObjReader reader;



	vrData.SysMemPitch = 0;





	SDL_DestroyRenderer(ren);

	if (FAILED(hr))

{

		exit(1);

	if (FAILED(hr))

	m_pMatrixBuffer = NULL;

	CRect                rect;

		}

		pIList[j] = indexList[j];

	//定数バッファ作成



#ifdef _DEBUG

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

			switch (e.key.keysym.sym)

	{



	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	D3D11_SUBRESOURCE_DATA irData;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		&error,

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	//深度ステンシルバッファ作成

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	txDesc.SampleDesc.Count = 1;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	vector<WORD> indexList;

{

{

	for (int i = 0; i < vcount; i++)

	}

			// Loop over vertices in the face.

	txDesc.CPUAccessFlags = 0;



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//頂点バッファ作成

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



	ConstantMaterial material; //物体の質感

	{

	m_pTextureView = NULL;







int main(int, char**)

				// access to vertex

	//Vertex* pVList = new Vertex[vcount];

struct ConstantMaterial {

	if (FAILED(hr))

	ConstantMaterial material; //物体の質感

{

	UINT flags = 0;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

};

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	//頂点バッファ作成

		KEY_PRESS_SURFACE_UP,

	D3D11_TEXTURE2D_DESC txDesc;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

{

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;



{



#include <iostream>

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	//深度ステンシルバッファ作成

	::GetClientRect(hwnd, &rect);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

		return hr;



	}

	pBackBuffer->Release();

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	XMFLOAT4         eyePos;   //視点座標

	//定数バッファ作成



	{

	m_pDevice = NULL;



		&m_pSwapChain,

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	}*/

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			index_offset += num_vertices;

	for (int i = 0; i < 3; i++)

	{

	m_IndexCount = 0;

	m_pDepthStencilTexture = NULL;

CD3DTest::~CD3DTest()

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	SDL_DestroyWindow(win);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



		// Loop over faces(polygon)

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	reader_config.mtl_search_path = "./"; // Path to material files

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		NULL,

	if (!reader.ParseFromFile(inputfile, reader_config))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	m_pVertexShader = NULL;

	{

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	txDesc.SampleDesc.Quality = 0;

	std::vector<tinyobj::shape_t> shapes;

	XMStoreFloat4(&clb.ambient, lightAmbient);



		&m_pSwapChain,

	m_pSwapChain->Present(0, 0);

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

}

}

			for (size_t v = 0; v < num_vertices; v++)

	vrData.SysMemPitch = 0;

	hr = D3D11CreateDeviceAndSwapChain(NULL,





		KEY_PRESS_SURFACE_UP,

 */

}

	m_Angle += XMConvertToRadians(1.0f);

		1,



	SAFE_RELEASE(m_pTextureView);

	auto& attrib = reader.GetAttrib();

	irData.SysMemSlicePitch = 0;

	cbDesc.MiscFlags = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

				indexlist.push_back(index);





	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	D3D11_TEXTURE2D_DESC txDesc;

	if (FAILED(hr))

	std::string imagePath = "hello.bmp";



	return;

	if (FAILED(hr))

	//Key press surfaces constants

	ID3D11Texture2D* pBackBuffer;

	std::string inputfile = "test.obj";



	//テクスチャ読み込み

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_pVertexShader = NULL;

				tinyobj::real_t tx =

			//Select surfaces based on key press

	D3D11_BUFFER_DESC ibDesc;





	m_Viewport.MaxDepth = 1.0f;

	}

	int     vcount = vertexlist.size();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	SAFE_RELEASE(m_pInputLayout);

			default:



	SAFE_RELEASE(m_pDepthStencilView);



	//インデックスバッファ作成

	m_pSwapChain->Present(0, 0);

	XMFLOAT4X4 projection;

	pBackBuffer->Release();

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	SAFE_RELEASE(m_pSampler);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	Release();

	if (FAILED(hr))

	delete[] pVList;



	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	LoadObj(vertexlist, indexList);

};



	SAFE_RELEASE(m_pLightBuffer);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	irData.SysMemSlicePitch = 0;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

#include <SDL.h>



	UINT offsets = 0;

	if (FAILED(hr))



	SDL_Quit();

}

	{

struct ConstantLight {

	Release();



				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		&m_pImmediateContext);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		if (!ret)

#include <SDL.h>

	}



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		return hr;

{

		return 1;





	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		D3D11_SDK_VERSION,

		exit(1);





	{



	LoadObj(vertexlist, indexList);

		//User presses a key



	for (int j = 0; j < icount; j++)

	}

	std::string error;

	}

	{

	irData.SysMemSlicePitch = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	return;

		return hr;



void CD3DTest::Release()

	SDL_FreeSurface(suf);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

struct ConstantLightBuffer {

	D3D11_BUFFER_DESC ibDesc;



	//First we need to start up SDL, and make sure it went ok

		pVList[i] = vertexlist[i];



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	XMFLOAT4         ambient;  //環境光(r,g,b)

	bool ret = tinyobj::LoadObj(



		pVList[i] = vertexlist[i];

	SAFE_RELEASE(m_pInputLayout);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

#define TINYOBJLOADER_IMPLEMENTATION

			for (size_t v = 0; v < fv; v++)

		KEY_PRESS_SURFACE_LEFT,

		{

				indexlist.push_back(index);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;



		}

	SAFE_RELEASE(m_pRenderTargetView);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);





	m_Viewport.Width = (FLOAT)rect.Width();

	m_pIndexBuffer = NULL;

	SAFE_RELEASE(m_pIndexBuffer);



	SAFE_RELEASE(m_pSampler);

		&scDesc,



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	for (size_t s = 0; s < shapes.size(); s++)

	ConstantLight    pntLight; //点光源



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	::ZeroMemory(&scDesc, sizeof(scDesc));

	float    fov = XMConvertToRadians(20.0f);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SDL_DestroyWindow(win);

	for (int j = 0; j < icount; j++)

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pMatrixBuffer);

	//定数バッファ作成

	//ビューポート設定

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

				break;

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



		size_t index_offset = 0;  // インデントのオフセット

	m_pVertexBuffer = NULL;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



		return hr;



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	{

	XMFLOAT4 specular;          //反射(r,g,b)

	{

	//定数バッファ作成

	vbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pIndexBuffer);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;







				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_VertexCount = vcount;





	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);









	vrData.SysMemPitch = 0;

				WORD index = idx.vertex_index;

	float    nearZ = 0.1f;

CD3DTest::CD3DTest()

}

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		cout << "SDL_INIT_ERROR" << endl;

	SDL_DestroyWindow(win);

		D3D_DRIVER_TYPE_HARDWARE,



	//vector<Vertex> vertex_t;

	m_Viewport.MinDepth = 0.0f;

	vector<Vertex> vertexlist;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;





	m_IndexCount = icount;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		m_pImmediateContext->ClearState();

	XMStoreFloat4(&clb.material.ambient, materialAmbient);



struct ConstantMaterial {

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pPixelShader = NULL;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

		return hr;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_Viewport.Width = (FLOAT)rect.Width();



	cbDesc.StructureByteStride = 0;

	}

		pLevels,

	}*/

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



void CD3DTest::Release()

	XMFLOAT4         eyePos;   //視点座標

	LoadObj(vertexlist, indexList);

			switch (e.key.keysym.sym)

	vbDesc.CPUAccessFlags = 0;

	SDL_Event e;



}

		if (e.type == SDL_QUIT)



{

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pLightBuffer);

	ConstantMatrixBuffer cmb;

		}

	{

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

				tinyobj::real_t tx =

	SDL_Event e;

#define TINYOBJLOADER_IMPLEMENTATION

	}

{

	m_VertexCount = vcount;

	}



	//深度ステンシルバッファ作成



	{

	m_pDepthStencilTexture = NULL;

	m_pLightBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	D3D11_TEXTURE2D_DESC txDesc;



				WORD index = idx.vertex_index;







	SDL_DestroyRenderer(ren);

	vrData.SysMemSlicePitch = 0;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

void CD3DTest::Render()

	SDL_Event e;

				// access to vertex

	SAFE_RELEASE(m_pSampler);

	UINT offsets = 0;

	cbDesc.MiscFlags = 0;

	SDL_DestroyRenderer(ren);

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	return;

		cout << "SDL_INIT_ERROR" << endl;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		{

	D3D11_TEXTURE2D_DESC txDesc;

}

	txDesc.ArraySize = 1;

	m_Angle += XMConvertToRadians(1.0f);

	m_IndexCount = 0;

		// Loop over faces(polygon)

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);



	vrData.SysMemSlicePitch = 0;

	LoadObj(vertexlist, indexList);

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

}

	m_pDevice = NULL;

		//User presses a key

};

	SAFE_RELEASE(m_pInputLayout);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		&attrib,

	float    farZ = 100.0f;



	::ZeroMemory(&scDesc, sizeof(scDesc));

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



	{

{

		if (!reader.Error().empty())

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;



	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

{

	float    nearZ = 0.1f;

	}

	UINT strides = sizeof(Vertex);

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	D3D11_BUFFER_DESC cbDesc;

	{

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	//テクスチャ読み込み

	std::string inputfile = "test.obj";

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

};

	auto& materials = reader.GetMaterials();

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		return hr;



		&scDesc,

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SAFE_RELEASE(m_pInputLayout);

	scDesc.Windowed = TRUE;

	ZeroMemory(&txDesc, sizeof(txDesc));

	tinyobj::ObjReader reader;

			{

	float    nearZ = 0.1f;

	SAFE_RELEASE(m_pVertexShader);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_VertexCount = 0;

{

		delete[] pVList;



				break;

	SAFE_RELEASE(m_pImmediateContext);

	m_pTexture = NULL;

	return 0;

{

		}

	if (FAILED(hr))

	vbDesc.CPUAccessFlags = 0;

	float    fov = XMConvertToRadians(20.0f);

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	//インデックスバッファ作成

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	}

	if (FAILED(hr))

#include <iostream>

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pImmediateContext);

				break;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

};

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	D3D11_BUFFER_DESC vbDesc;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	float    fov = XMConvertToRadians(20.0f);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t tx =

				break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_pInputLayout = NULL;

	D3D11_SAMPLER_DESC smpDesc;





{

	m_pImmediateContext = NULL;

	//Vertex* pVList = new Vertex[vcount];

		KEY_PRESS_SURFACE_TOTAL

#define TINYOBJLOADER_IMPLEMENTATION

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	SAFE_RELEASE(m_pVertexShader);

		SDL_Delay(1000);

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		&error,

	std::string inputfile = "test.obj";

	if (FAILED(hr))

			{

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.Width = (FLOAT)rect.Width();

	//頂点バッファ作成

	return;

	cbDesc.StructureByteStride = 0;

}

	vector<WORD> indexList;



	ibDesc.MiscFlags = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

			{

	scDesc.SampleDesc.Quality = 0;

		}

	ibDesc.MiscFlags = 0;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	SDL_Event e;

			case SDLK_UP:

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	ConstantLightBuffer clb;

	CRect                rect;

		1,





	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

{

	m_Viewport.TopLeftY = 0;

		R"(cube.obj)");

	m_pSwapChain->Present(0, 0);



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	{

		flags,





	//Create Index



	//頂点レイアウト作成

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);



				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	return 0;

		}

	if (FAILED(hr))

	WORD   icount = indexList.size();

	m_pRenderTargetView = NULL;

		flags,

	{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	if (!reader.Warning().empty())

struct ConstantMaterial {



	{

int main(int, char**)



	//Create Index

	m_Viewport.Width = (FLOAT)rect.Width();

			case SDLK_RIGHT:

	SDL_FreeSurface(bmp);

				vertex.push_back(vertex_tmp);

	}

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	//テクスチャ読み込み

			case SDLK_RIGHT:





	SAFE_RELEASE(m_pDepthStencilTexture);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	ConstantLight    pntLight; //点光源

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	vrData.SysMemSlicePitch = 0;

	delete[] pVList;

	txDesc.Width = rect.Width();

		&m_pDevice,

HRESULT CD3DTest::Create(HWND hwnd)

	{

	irData.SysMemSlicePitch = 0;

	::ZeroMemory(&scDesc, sizeof(scDesc));

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

		cout << "SDL_INIT_ERROR" << endl;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	HRESULT              hr;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		// Loop over faces(polygon)

	ibDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

		D3D11_SDK_VERSION,



struct ConstantLight {

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

				indexlist.push_back(index);



			}

		SDL_Delay(1000);

			// Loop over vertices in the face.





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (FAILED(hr))



		return hr;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	m_pSampler = NULL;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	cbDesc.StructureByteStride = 0;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	float    fov = XMConvertToRadians(20.0f);

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

				// access to vertex

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Count = 1;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	float    aspect = m_Viewport.Width / m_Viewport.Height;



		//User presses a key

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	//ピクセルシェーダー生成



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext = NULL;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		cout << "SDL_INIT_ERROR" << endl;



	if (FAILED(hr))

#include "DirectXManager.h"

	vbDesc.StructureByteStride = 0;

		SDL_Delay(1000);

	ConstantMaterial material; //物体の質感

	ConstantMaterial material; //物体の質感

	SAFE_RELEASE(m_pDepthStencilView);

		pLevels,

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)



	m_pVertexShader = NULL;

	}

	XMFLOAT4X4 world;

	if (FAILED(hr))

		pLevels,



	SDL_Quit();



	//ビューポート設定

	{

	SAFE_RELEASE(m_pImmediateContext);





	m_IndexCount = icount;



			switch (e.key.keysym.sym)



	XMStoreFloat4(&clb.ambient, lightAmbient);

	//Key press surfaces constants

	int     vcount = vertexlist.size();

	::ZeroMemory(&scDesc, sizeof(scDesc));

	SDL_Event e;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

		return hr;

	SAFE_RELEASE(m_pIndexBuffer);

	WORD   icount = indexList.size();

		return hr;

	if (SDL_Init(SDL_INIT_VIDEO != 0))



	if (FAILED(hr))

	{

}

	}

	vector<WORD> indexList;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	pBackBuffer->Release();

	XMFLOAT4 pos;               //座標(x,y,z)

	XMFLOAT4X4 world;

	m_pImmediateContext = NULL;

		SDL_RenderClear(ren);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_Viewport.Height = (FLOAT)rect.Height();

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];







	m_Viewport.MinDepth = 0.0f;



		return hr;

				indexlist.push_back(index);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

		&shapes,



			int num_vertices = shape.mesh.num_face_vertices[f];

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

}

#include <SDL.h>

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;



struct ConstantLight {



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	cbDesc.StructureByteStride = 0;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	txDesc.SampleDesc.Quality = 0;

		delete[] pVList;



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	{

	{

	SAFE_RELEASE(m_pInputLayout);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	vector<WORD> indexList;

}

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

CD3DTest::~CD3DTest()

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	if (!reader.ParseFromFile(inputfile, reader_config))

	ConstantMatrixBuffer cmb;

	D3D_FEATURE_LEVEL level;

	}

	m_pSampler = NULL;

	//インデックスバッファ作成

			default:

	SDL_DestroyRenderer(ren);



	if (FAILED(hr))





	m_pImmediateContext = NULL;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMFLOAT4 specular;          //反射(r,g,b)



	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



		//User presses a key





	//定数バッファ作成

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	SAFE_RELEASE(m_pDevice);

	if (FAILED(hr))

	scDesc.SampleDesc.Quality = 0;

}

			int num_vertices = shape.mesh.num_face_vertices[f];



		&error,

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	::GetClientRect(hwnd, &rect);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	UINT strides = sizeof(Vertex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

#include <SDL.h>

	};

};

	vector<WORD> indexList;

	return;

	{

	m_IndexCount = icount;



				vertex.push_back(vertex_tmp);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	D3D11_SUBRESOURCE_DATA irData;

}

		{

	SDL_DestroyTexture(tex);

{

	if (FAILED(hr))

};

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	//Create Index

	SAFE_RELEASE(m_pImmediateContext);

			case SDLK_RIGHT:

	for (int i = 0; i < 3; i++)

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		pLevels,

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

#include <SDL.h>

	SAFE_RELEASE(m_pDepthStencilView);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Event e;

	m_pSwapChain->Present(0, 0);

		//User requests quit

}



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	m_Viewport.MaxDepth = 1.0f;

	vector<WORD> indexList;

		D3D11_SDK_VERSION,



	hr = D3D11CreateDeviceAndSwapChain(NULL,

	m_pVertexShader = NULL;



	// Loop over shapes

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	reader_config.mtl_search_path = "./"; // Path to material files





		R"(cube.obj)");

	hr = D3D11CreateDeviceAndSwapChain(NULL,



		}

				break;

		SDL_RenderClear(ren);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	D3D11_TEXTURE2D_DESC txDesc;

	reader_config.mtl_search_path = "./"; // Path to material files

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	ibDesc.CPUAccessFlags = 0;

{

	txDesc.MipLevels = 1;

	m_pInputLayout = NULL;

	if (FAILED(hr))



 * Lesson 1: Hello World!

	vbDesc.StructureByteStride = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

{

	vrData.SysMemSlicePitch = 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;

		return hr;

	cbDesc.StructureByteStride = 0;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];



		&m_pDevice,

CD3DTest::CD3DTest()



				WORD index = idx.vertex_index;

struct ConstantMatrixBuffer {



	//ピクセルシェーダー生成

	ConstantMatrixBuffer cmb;





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	{

		KEY_PRESS_SURFACE_LEFT,

		return hr;



{

	SAFE_RELEASE(m_pSampler);

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);



	ZeroMemory(&dsDesc, sizeof(dsDesc));

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

		}

	m_pSwapChain = NULL;

	scDesc.Windowed = TRUE;

	DXGI_SWAP_CHAIN_DESC scDesc;

		return hr;





		return hr;

}

	delete[] pIList;

	{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	SAFE_RELEASE(m_pDepthStencilView);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	cbDesc.StructureByteStride = 0;

	m_pSampler = NULL;

	//深度ステンシルバッファ作成



		R"(cube.obj)");

			{



	dsDesc.Texture2D.MipSlice = 0;

#include <SDL.h>

	//vector<WORD> index_t;

	return 0;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

struct ConstantLight {



	//インデックスバッファ作成

	float    nearZ = 0.1f;



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;

		if (e.type == SDL_QUIT)

};

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

			{



	UINT strides = sizeof(Vertex);

	{

		pIList[j] = indexList[j];

	delete[] pVList;

		SDL_RenderClear(ren);

		{

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;





	txDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pLightBuffer);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		cout << "SDL_INIT_ERROR" << endl;

}

#include <SDL.h>



		R"(cube.obj)");

			switch (e.key.keysym.sym)

	{

	XMFLOAT4 pos;               //座標(x,y,z)



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

		{

struct ConstantLight {

CD3DTest::~CD3DTest()

void CD3DTest::Render()

	ConstantLight    pntLight; //点光源

		return hr;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		KEY_PRESS_SURFACE_TOTAL

	ZeroMemory(&txDesc, sizeof(txDesc));

	scDesc.Windowed = TRUE;

	};

		if (!ret)

		&scDesc,

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

		if (e.type == SDL_QUIT)



	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	for (const auto& shape : shapes)

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

			index_offset += num_vertices;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4(&clb.ambient, lightAmbient);



			for (size_t v = 0; v < fv; v++)

#include <SDL.h>

{





	ibDesc.MiscFlags = 0;

		{

	SAFE_RELEASE(m_pPixelShader);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

	std::string error;



	if (!reader.ParseFromFile(inputfile, reader_config))

	m_Viewport.Height = (FLOAT)rect.Height();



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		exit(1);



	//ピクセルシェーダー生成

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	}

	WORD* pIList = new WORD[icount];

	txDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 projection;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	}



	std::vector<tinyobj::material_t> materials;

	XMStoreFloat4(&clb.eyePos, eye);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	//ビューポート設定

	DXGI_SWAP_CHAIN_DESC scDesc;

	bool ret = tinyobj::LoadObj(



	//テクスチャ読み込み

	SAFE_RELEASE(m_pDepthStencilTexture);

		return hr;

		return hr;

}

		size_t index_offset = 0;  // インデントのオフセット

		delete[] pIList;

	}

	if (FAILED(hr))

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pDevice = NULL;



	ibDesc.CPUAccessFlags = 0;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

		}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	if (FAILED(hr))

	ZeroMemory(&txDesc, sizeof(txDesc));

	bool ret = tinyobj::LoadObj(

		KEY_PRESS_SURFACE_TOTAL

	m_pSampler = NULL;

	//頂点バッファ作成



	{

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	ZeroMemory(&dsDesc, sizeof(dsDesc));



	delete[] pIList;



	XMFLOAT4 pos;               //座標(x,y,z)



	m_pLightBuffer = NULL;

	for (int i = 0; i < vcount; i++)

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext = NULL;

	cbDesc.CPUAccessFlags = 0;

CD3DTest::CD3DTest()





				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

		KEY_PRESS_SURFACE_TOTAL

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantLightBuffer clb;

	txDesc.CPUAccessFlags = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ibDesc.StructureByteStride = 0;

	auto& materials = reader.GetMaterials();

};

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_pSwapChain->Present(0, 0);

			case SDLK_UP:

	}

	SAFE_RELEASE(m_pVertexBuffer);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	{

	vrData.pSysMem = &pVList[0];

		pIList[j] = indexList[j];

	HRESULT              hr;

		size_t index_offset = 0;

				break;



	vector<WORD> indexList;

		}



	scDesc.SampleDesc.Count = 1;

	vrData.SysMemSlicePitch = 0;

	m_IndexCount = icount;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		if (!ret)

		return hr;

	m_pSwapChain = NULL;

	}

	XMFLOAT4         eyePos;   //視点座標

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



				break;

	std::string error;

	vrData.pSysMem = &pVList[0];



	if (FAILED(hr))



		return hr;

	//Create Index

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

		// Loop over faces(polygon)

	std::vector<tinyobj::shape_t> shapes;

		D3D_DRIVER_TYPE_HARDWARE,

		&shapes,



	if (FAILED(hr))

			break;

	enum KeyPressSurfaces

	//vector<WORD> index_t;

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

};

		&m_pDevice,

	txDesc.ArraySize = 1;







		if (!reader.Error().empty())

	D3D11_SUBRESOURCE_DATA irData;

		size_t index_offset = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	{

	scDesc.OutputWindow = hwnd;

		&m_pSwapChain,

	dsDesc.Format = txDesc.Format;

	vrData.SysMemSlicePitch = 0;

			case SDLK_LEFT:

	std::string imagePath = "hello.bmp";

	XMFLOAT4X4 projection;

		&m_pImmediateContext);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	if (m_pImmediateContext)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



		D3D_DRIVER_TYPE_HARDWARE,

		// Loop over faces(polygon)

#define TINYOBJLOADER_IMPLEMENTATION

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		if (!ret)

			//Select surfaces based on key press

	vrData.pSysMem = &pVList[0];

			case SDLK_LEFT:

	SAFE_RELEASE(m_pImmediateContext);



	flags |= D3D11_CREATE_DEVICE_DEBUG;



		R"(cube.obj)");





#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		&materials,

	//Key press surfaces constants

	D3D11_SUBRESOURCE_DATA irData;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

{

	}

	}

	std::string error;

	if (FAILED(hr))

		//User presses a key

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	ConstantLightBuffer clb;

	SAFE_RELEASE(m_pDepthStencilTexture);

	cbDesc.CPUAccessFlags = 0;

		size_t index_offset = 0;  // インデントのオフセット

	//Key press surfaces constants

		if (!ret)

			default:



	}



				break;

	m_pVertexBuffer = NULL;

		return hr;

	tinyobj::ObjReader reader;

	XMFLOAT4 diffuse;           //拡散(r,g,b)



	vbDesc.MiscFlags = 0;

	vector<WORD> indexList;





	ID3D11Texture2D* pBackBuffer;

	m_Viewport.Width = (FLOAT)rect.Width();

	for (size_t s = 0; s < shapes.size(); s++)

	vrData.pSysMem = &pVList[0];

	SAFE_RELEASE(m_pDevice);





	}

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



int main(int, char**)

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

				WORD index = idx.vertex_index;

	tinyobj::ObjReaderConfig reader_config;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

				indexlist.push_back(idx.vertex_index);

	//ビューポート設定

		SDL_Delay(1000);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

		&level,

	ibDesc.CPUAccessFlags = 0;



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	ConstantMatrixBuffer cmb;



	m_pTexture = NULL;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	SAFE_RELEASE(m_pIndexBuffer);

	D3D11_BUFFER_DESC vbDesc;

	if (FAILED(hr))

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	dsDesc.Format = txDesc.Format;

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	Release();

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	if (FAILED(hr))



	// Loop over shapes

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pVertexShader = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

	for (const auto& shape : shapes)

	if (FAILED(hr))



				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

	//Key press surfaces constants

	//ピクセルシェーダー生成

	ConstantLightBuffer clb;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	m_Viewport.TopLeftY = 0;

			{



	txDesc.Height = rect.Height();

	delete[] pIList;

	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	m_Viewport.Height = (FLOAT)rect.Height();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	}*/

		return hr;

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		size_t index_offset = 0;

			index_offset += fv;



	/*

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			case SDLK_RIGHT:

	m_Viewport.MinDepth = 0.0f;

}


				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		return hr;

				vertex.push_back(vertex_tmp);

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	m_Angle += XMConvertToRadians(1.0f);

			exit(1);

	ConstantLight    pntLight; //点光源

	//ビューポート設定

	//Vertex* pVList = new Vertex[vcount];

	SDL_DestroyTexture(tex);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	{

	m_pImmediateContext = NULL;

	scDesc.BufferDesc.Width = rect.Width();



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	scDesc.BufferDesc.Height = rect.Height();

		{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

			case SDLK_UP:

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha





	Release();

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				WORD index = idx.vertex_index;

		// Loop over faces(polygon)

		exit(1);

	// Loop over shapes

	m_pTextureView = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	LoadObj(vertexlist, indexList);

	if (!reader.Warning().empty())

	WORD* pIList = new WORD[icount];



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		{

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&shapes,

		flags,

	vbDesc.MiscFlags = 0;

}

			{

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		KEY_PRESS_SURFACE_LEFT,

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		return hr;

	Release();

	m_IndexCount = 0;







			}

	scDesc.SampleDesc.Quality = 0;



	//頂点バッファ作成

		}



	txDesc.ArraySize = 1;

		return hr;



		return hr;

		KEY_PRESS_SURFACE_LEFT,

	m_Angle += XMConvertToRadians(1.0f);

	//First we need to start up SDL, and make sure it went ok

	for (size_t s = 0; s < shapes.size(); s++)

	m_Viewport.Height = (FLOAT)rect.Height();

	std::string inputfile = "test.obj";

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	XMFLOAT4 specular;          //反射(r,g,b)

}

		return hr;



	m_pVertexShader = NULL;

	if (FAILED(hr))

	WORD   icount = indexList.size();

{

		{

	m_pTexture = NULL;

		&m_pDevice,

	if (!reader.Warning().empty())

	m_Viewport.Width = (FLOAT)rect.Width();

	CRect                rect;



	D3D11_SUBRESOURCE_DATA irData;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		&error,



	SAFE_RELEASE(m_pDepthStencilTexture);

	if (m_pImmediateContext)



	XMFLOAT4 ambient;           //環境(r,g,b)

		{

		&scDesc,

	WORD* pIList = new WORD[icount];

		SDL_RenderClear(ren);

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	if (FAILED(hr))



	scDesc.BufferDesc.Height = rect.Height();

	cbDesc.Usage = D3D11_USAGE_DEFAULT;





	float    nearZ = 0.1f;

		{

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (m_pImmediateContext)

	scDesc.BufferDesc.Width = rect.Width();



	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//深度ステンシルバッファ作成

	SAFE_RELEASE(m_pVertexBuffer);

		}

	{

	float    nearZ = 0.1f;

				tinyobj::real_t tx =

	if (FAILED(hr))

	m_pSwapChain->Present(0, 0);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;



				break;

	::GetClientRect(hwnd, &rect);

	//Vertex* pVList = new Vertex[vcount];

	}

	std::string imagePath = "hello.bmp";

	XMFLOAT4         ambient;  //環境光(r,g,b)

		return hr;

	float    nearZ = 0.1f;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	for (size_t s = 0; s < shapes.size(); s++)

	float    nearZ = 0.1f;

	ibDesc.CPUAccessFlags = 0;

		{

		{

};

	if (FAILED(hr))

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		//User presses a key

		SDL_Delay(1000);

			default:



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

			for (size_t v = 0; v < num_vertices; v++)

	irData.SysMemSlicePitch = 0;

	cbDesc.StructureByteStride = 0;

	//vector<Vertex> vertex_t;



		D3D11_SDK_VERSION,

	LoadObj(vertexlist, indexList);

				tinyobj::real_t ty =



	m_Viewport.TopLeftY = 0;

}


