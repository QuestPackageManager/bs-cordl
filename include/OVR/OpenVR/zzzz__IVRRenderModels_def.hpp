#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRRenderModels)
namespace System {
class Object;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadRenderModel_Async;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelOriginalPath;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadTextureD3D11_Async;
}
namespace OVR::OpenVR {
class __IVRRenderModels___FreeRenderModel;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentStateForDevicePath;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelName;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelThumbnailURL;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentName;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentCount;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentButtonMask;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelCount;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadTexture_Async;
}
namespace OVR::OpenVR {
class __IVRRenderModels___FreeTexture;
}
namespace OVR::OpenVR {
class __IVRRenderModels___FreeTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRRenderModels___RenderModelHasComponent;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentRenderModelName;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentState;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadIntoTextureD3D11_Async;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRRenderModels___FreeRenderModel;
}
namespace OVR::OpenVR {
class __IVRRenderModels___FreeTexture;
}
namespace OVR::OpenVR {
class __IVRRenderModels___FreeTextureD3D11;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentButtonMask;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentCount;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentName;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentRenderModelName;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentState;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentStateForDevicePath;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelCount;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelErrorNameFromEnum;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelName;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelOriginalPath;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetRenderModelThumbnailURL;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadIntoTextureD3D11_Async;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadRenderModel_Async;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadTextureD3D11_Async;
}
namespace OVR::OpenVR {
class __IVRRenderModels___LoadTexture_Async;
}
namespace OVR::OpenVR {
class __IVRRenderModels___RenderModelHasComponent;
}
namespace OVR::OpenVR {
struct IVRRenderModels;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___FreeRenderModel);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___FreeTexture);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetComponentCount);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetComponentName);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetComponentState);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetRenderModelName);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent);
MARK_VAL_T(::OVR::OpenVR::IVRRenderModels);
// Type: ::_LoadRenderModel_Async
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8471))
// CS Name: ::IVRRenderModels::_LoadRenderModel_Async*
class CORDL_TYPE __IVRRenderModels___LoadRenderModel_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e8b18, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e8bf0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(::StringW pchRenderModelName, ByRef<void*> ppRenderModel);

  /// @brief Method BeginInvoke, addr 0x27e8c04, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ByRef<void*> ppRenderModel, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e8c98, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(ByRef<void*> ppRenderModel, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadRenderModel_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___LoadRenderModel_Async(__IVRRenderModels___LoadRenderModel_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadRenderModel_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___LoadRenderModel_Async(__IVRRenderModels___LoadRenderModel_Async const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___LoadRenderModel_Async();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_FreeRenderModel
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8472))
// CS Name: ::IVRRenderModels::_FreeRenderModel*
class CORDL_TYPE __IVRRenderModels___FreeRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e8cc4, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e8d88, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* pRenderModel);

  /// @brief Method BeginInvoke, addr 0x27e8d9c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* pRenderModel, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e8e20, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___FreeRenderModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___FreeRenderModel(__IVRRenderModels___FreeRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___FreeRenderModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___FreeRenderModel(__IVRRenderModels___FreeRenderModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___FreeRenderModel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___FreeRenderModel, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LoadTexture_Async
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8473))
// CS Name: ::IVRRenderModels::_LoadTexture_Async*
class CORDL_TYPE __IVRRenderModels___LoadTexture_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e8e2c, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e8ef0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, ByRef<void*> ppTexture);

  /// @brief Method BeginInvoke, addr 0x27e8f04, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t textureId, ByRef<void*> ppTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e8fbc, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(ByRef<void*> ppTexture, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadTexture_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___LoadTexture_Async(__IVRRenderModels___LoadTexture_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadTexture_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___LoadTexture_Async(__IVRRenderModels___LoadTexture_Async const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___LoadTexture_Async();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_FreeTexture
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8474))
// CS Name: ::IVRRenderModels::_FreeTexture*
class CORDL_TYPE __IVRRenderModels___FreeTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___FreeTexture* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e8fe8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e90ac, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* pTexture);

  /// @brief Method BeginInvoke, addr 0x27e90c0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* pTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e9144, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___FreeTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___FreeTexture(__IVRRenderModels___FreeTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___FreeTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___FreeTexture(__IVRRenderModels___FreeTexture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___FreeTexture();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___FreeTexture, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LoadTextureD3D11_Async
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8475))
// CS Name: ::IVRRenderModels::_LoadTextureD3D11_Async*
class CORDL_TYPE __IVRRenderModels___LoadTextureD3D11_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e9150, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e9214, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, void* pD3D11Device, ByRef<void*> ppD3D11Texture2D);

  /// @brief Method BeginInvoke, addr 0x27e9228, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t textureId, void* pD3D11Device, ByRef<void*> ppD3D11Texture2D, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e92f8, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(ByRef<void*> ppD3D11Texture2D, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadTextureD3D11_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___LoadTextureD3D11_Async(__IVRRenderModels___LoadTextureD3D11_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadTextureD3D11_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___LoadTextureD3D11_Async(__IVRRenderModels___LoadTextureD3D11_Async const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___LoadTextureD3D11_Async();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_LoadIntoTextureD3D11_Async
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8476))
// CS Name: ::IVRRenderModels::_LoadIntoTextureD3D11_Async*
class CORDL_TYPE __IVRRenderModels___LoadIntoTextureD3D11_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e9324, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e93e8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, void* pDstTexture);

  /// @brief Method BeginInvoke, addr 0x27e93fc, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t textureId, void* pDstTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e94b0, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadIntoTextureD3D11_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___LoadIntoTextureD3D11_Async(__IVRRenderModels___LoadIntoTextureD3D11_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___LoadIntoTextureD3D11_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___LoadIntoTextureD3D11_Async(__IVRRenderModels___LoadIntoTextureD3D11_Async const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___LoadIntoTextureD3D11_Async();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_FreeTextureD3D11
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8477))
// CS Name: ::IVRRenderModels::_FreeTextureD3D11*
class CORDL_TYPE __IVRRenderModels___FreeTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e94d8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e959c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(void* pD3D11Texture2D);

  /// @brief Method BeginInvoke, addr 0x27e95b0, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(void* pD3D11Texture2D, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e9634, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___FreeTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___FreeTextureD3D11(__IVRRenderModels___FreeTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___FreeTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___FreeTextureD3D11(__IVRRenderModels___FreeTextureD3D11 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___FreeTextureD3D11();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetRenderModelName
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8478))
// CS Name: ::IVRRenderModels::_GetRenderModelName*
class CORDL_TYPE __IVRRenderModels___GetRenderModelName : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e9640, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e9704, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen);

  /// @brief Method BeginInvoke, addr 0x27e9718, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e97bc, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetRenderModelName(__IVRRenderModels___GetRenderModelName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetRenderModelName(__IVRRenderModels___GetRenderModelName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetRenderModelName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetRenderModelName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetRenderModelCount
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8479))
// CS Name: ::IVRRenderModels::_GetRenderModelCount*
class CORDL_TYPE __IVRRenderModels___GetRenderModelCount : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e97e4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e98a0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  /// @brief Method BeginInvoke, addr 0x27e98b4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e98d4, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetRenderModelCount(__IVRRenderModels___GetRenderModelCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetRenderModelCount(__IVRRenderModels___GetRenderModelCount const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetRenderModelCount();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetComponentCount
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8480))
// CS Name: ::IVRRenderModels::_GetComponentCount*
class CORDL_TYPE __IVRRenderModels___GetComponentCount : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetComponentCount* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e98fc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e99d0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName);

  /// @brief Method BeginInvoke, addr 0x27e99e4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e9a04, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetComponentCount(__IVRRenderModels___GetComponentCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetComponentCount(__IVRRenderModels___GetComponentCount const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetComponentCount();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetComponentCount, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetComponentName
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8481))
// CS Name: ::IVRRenderModels::_GetComponentName*
class CORDL_TYPE __IVRRenderModels___GetComponentName : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetComponentName* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e9a2c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e9b04, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen);

  /// @brief Method BeginInvoke, addr 0x27e9b18, size 0xac, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e9bc4, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetComponentName(__IVRRenderModels___GetComponentName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetComponentName(__IVRRenderModels___GetComponentName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetComponentName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetComponentName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetComponentButtonMask
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8482))
// CS Name: ::IVRRenderModels::_GetComponentButtonMask*
class CORDL_TYPE __IVRRenderModels___GetComponentButtonMask : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e9bec, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e9cc4, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(::StringW pchRenderModelName, ::StringW pchComponentName);

  /// @brief Method BeginInvoke, addr 0x27e9cd8, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e9d00, size 0x28, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentButtonMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetComponentButtonMask(__IVRRenderModels___GetComponentButtonMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentButtonMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetComponentButtonMask(__IVRRenderModels___GetComponentButtonMask const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetComponentButtonMask();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetComponentRenderModelName
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8483))
// CS Name: ::IVRRenderModels::_GetComponentRenderModelName*
class CORDL_TYPE __IVRRenderModels___GetComponentRenderModelName : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e9d28, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e9e00, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen);

  /// @brief Method BeginInvoke, addr 0x27e9e14, size 0xa8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                             uint32_t unComponentRenderModelNameLen, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27e9ebc, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentRenderModelName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetComponentRenderModelName(__IVRRenderModels___GetComponentRenderModelName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentRenderModelName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetComponentRenderModelName(__IVRRenderModels___GetComponentRenderModelName const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetComponentRenderModelName();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetComponentStateForDevicePath
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8484))
// CS Name: ::IVRRenderModels::_GetComponentStateForDevicePath*
class CORDL_TYPE __IVRRenderModels___GetComponentStateForDevicePath : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27e9ee4, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27e9fbc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                     ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  /// @brief Method BeginInvoke, addr 0x27e9fd0, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                             ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ea0d0, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentStateForDevicePath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetComponentStateForDevicePath(__IVRRenderModels___GetComponentStateForDevicePath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentStateForDevicePath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetComponentStateForDevicePath(__IVRRenderModels___GetComponentStateForDevicePath const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetComponentStateForDevicePath();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetComponentState
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8485))
// CS Name: ::IVRRenderModels::_GetComponentState*
class CORDL_TYPE __IVRRenderModels___GetComponentState : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetComponentState* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ea104, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ea1dc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                     ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  /// @brief Method BeginInvoke, addr 0x27ea1f0, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                             ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ea2f0, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                        ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetComponentState(__IVRRenderModels___GetComponentState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetComponentState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetComponentState(__IVRRenderModels___GetComponentState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetComponentState();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetComponentState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_RenderModelHasComponent
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8486))
// CS Name: ::IVRRenderModels::_RenderModelHasComponent*
class CORDL_TYPE __IVRRenderModels___RenderModelHasComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ea324, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ea3fc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName);

  /// @brief Method BeginInvoke, addr 0x27ea410, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ea438, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___RenderModelHasComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___RenderModelHasComponent(__IVRRenderModels___RenderModelHasComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___RenderModelHasComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___RenderModelHasComponent(__IVRRenderModels___RenderModelHasComponent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___RenderModelHasComponent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetRenderModelThumbnailURL
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8487))
// CS Name: ::IVRRenderModels::_GetRenderModelThumbnailURL*
class CORDL_TYPE __IVRRenderModels___GetRenderModelThumbnailURL : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ea460, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ea538, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen, ByRef<::OVR::OpenVR::EVRRenderModelError> peError);

  /// @brief Method BeginInvoke, addr 0x27ea54c, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                             ByRef<::OVR::OpenVR::EVRRenderModelError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ea618, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelThumbnailURL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetRenderModelThumbnailURL(__IVRRenderModels___GetRenderModelThumbnailURL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelThumbnailURL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetRenderModelThumbnailURL(__IVRRenderModels___GetRenderModelThumbnailURL const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetRenderModelThumbnailURL();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetRenderModelOriginalPath
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8488))
// CS Name: ::IVRRenderModels::_GetRenderModelOriginalPath*
class CORDL_TYPE __IVRRenderModels___GetRenderModelOriginalPath : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ea644, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ea71c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen, ByRef<::OVR::OpenVR::EVRRenderModelError> peError);

  /// @brief Method BeginInvoke, addr 0x27ea730, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                             ByRef<::OVR::OpenVR::EVRRenderModelError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ea7fc, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(ByRef<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelOriginalPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetRenderModelOriginalPath(__IVRRenderModels___GetRenderModelOriginalPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelOriginalPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetRenderModelOriginalPath(__IVRRenderModels___GetRenderModelOriginalPath const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetRenderModelOriginalPath();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetRenderModelErrorNameFromEnum
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8489))
// CS Name: ::IVRRenderModels::_GetRenderModelErrorNameFromEnum*
class CORDL_TYPE __IVRRenderModels___GetRenderModelErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27ea828, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27ea8ec, size 0x14, virtual true, abstract: false, final false
  inline void* Invoke(::OVR::OpenVR::EVRRenderModelError error);

  /// @brief Method BeginInvoke, addr 0x27ea900, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRRenderModelError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27ea984, size 0x28, virtual true, abstract: false, final false
  inline void* EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRRenderModels___GetRenderModelErrorNameFromEnum(__IVRRenderModels___GetRenderModelErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRRenderModels___GetRenderModelErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRRenderModels___GetRenderModelErrorNameFromEnum(__IVRRenderModels___GetRenderModelErrorNameFromEnum const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRRenderModels___GetRenderModelErrorNameFromEnum();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRRenderModels
// SizeInfo { instance_size: 152, native_size: 152, calculated_instance_size: 152, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8490))
// CS Name: ::OVR.OpenVR::IVRRenderModels
struct CORDL_TYPE IVRRenderModels {
public:
  // Declarations
  using _GetRenderModelErrorNameFromEnum = ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum;

  using _GetRenderModelOriginalPath = ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath;

  using _GetRenderModelThumbnailURL = ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL;

  using _RenderModelHasComponent = ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent;

  using _GetComponentState = ::OVR::OpenVR::__IVRRenderModels___GetComponentState;

  using _GetComponentStateForDevicePath = ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath;

  using _GetComponentRenderModelName = ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName;

  using _GetComponentButtonMask = ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask;

  using _GetComponentName = ::OVR::OpenVR::__IVRRenderModels___GetComponentName;

  using _GetComponentCount = ::OVR::OpenVR::__IVRRenderModels___GetComponentCount;

  using _GetRenderModelCount = ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount;

  using _GetRenderModelName = ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName;

  using _FreeTextureD3D11 = ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11;

  using _LoadIntoTextureD3D11_Async = ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async;

  using _LoadTextureD3D11_Async = ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async;

  using _FreeTexture = ::OVR::OpenVR::__IVRRenderModels___FreeTexture;

  using _LoadTexture_Async = ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async;

  using _FreeRenderModel = ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel;

  using _LoadRenderModel_Async = ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async;

  // Ctor Parameters [CppParam { name: "LoadRenderModel_Async", ty: "::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*", modifiers: "", def_value: None }, CppParam { name: "FreeRenderModel",
  // ty: "::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*", modifiers: "", def_value: None }, CppParam { name: "LoadTexture_Async", ty: "::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*",
  // modifiers: "", def_value: None }, CppParam { name: "FreeTexture", ty: "::OVR::OpenVR::__IVRRenderModels___FreeTexture*", modifiers: "", def_value: None }, CppParam { name:
  // "LoadTextureD3D11_Async", ty: "::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*", modifiers: "", def_value: None }, CppParam { name: "LoadIntoTextureD3D11_Async", ty:
  // "::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*", modifiers: "", def_value: None }, CppParam { name: "FreeTextureD3D11", ty:
  // "::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelName", ty: "::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*",
  // modifiers: "", def_value: None }, CppParam { name: "GetRenderModelCount", ty: "::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*", modifiers: "", def_value: None }, CppParam { name:
  // "GetComponentCount", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentCount*", modifiers: "", def_value: None }, CppParam { name: "GetComponentName", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetComponentName*", modifiers: "", def_value: None }, CppParam { name: "GetComponentButtonMask", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*", modifiers: "", def_value: None }, CppParam { name: "GetComponentRenderModelName", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*", modifiers: "", def_value: None }, CppParam { name: "GetComponentStateForDevicePath", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*", modifiers: "", def_value: None }, CppParam { name: "GetComponentState", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetComponentState*", modifiers: "", def_value: None }, CppParam { name: "RenderModelHasComponent", ty:
  // "::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelThumbnailURL", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelOriginalPath", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelErrorNameFromEnum", ty:
  // "::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*", modifiers: "", def_value: None }]
  constexpr IVRRenderModels(::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async* LoadRenderModel_Async, ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel* FreeRenderModel,
                            ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async* LoadTexture_Async, ::OVR::OpenVR::__IVRRenderModels___FreeTexture* FreeTexture,
                            ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async* LoadTextureD3D11_Async,
                            ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async* LoadIntoTextureD3D11_Async, ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11* FreeTextureD3D11,
                            ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName* GetRenderModelName, ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount* GetRenderModelCount,
                            ::OVR::OpenVR::__IVRRenderModels___GetComponentCount* GetComponentCount, ::OVR::OpenVR::__IVRRenderModels___GetComponentName* GetComponentName,
                            ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask* GetComponentButtonMask,
                            ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName* GetComponentRenderModelName,
                            ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath* GetComponentStateForDevicePath, ::OVR::OpenVR::__IVRRenderModels___GetComponentState* GetComponentState,
                            ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent* RenderModelHasComponent,
                            ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL* GetRenderModelThumbnailURL,
                            ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath* GetRenderModelOriginalPath,
                            ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum* GetRenderModelErrorNameFromEnum) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels();

  /// @brief Field LoadRenderModel_Async, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async* LoadRenderModel_Async;

  /// @brief Field FreeRenderModel, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___FreeRenderModel* FreeRenderModel;

  /// @brief Field LoadTexture_Async, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async* LoadTexture_Async;

  /// @brief Field FreeTexture, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___FreeTexture* FreeTexture;

  /// @brief Field LoadTextureD3D11_Async, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async* LoadTextureD3D11_Async;

  /// @brief Field LoadIntoTextureD3D11_Async, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async* LoadIntoTextureD3D11_Async;

  /// @brief Field FreeTextureD3D11, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11* FreeTextureD3D11;

  /// @brief Field GetRenderModelName, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetRenderModelName* GetRenderModelName;

  /// @brief Field GetRenderModelCount, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount* GetRenderModelCount;

  /// @brief Field GetComponentCount, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetComponentCount* GetComponentCount;

  /// @brief Field GetComponentName, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetComponentName* GetComponentName;

  /// @brief Field GetComponentButtonMask, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask* GetComponentButtonMask;

  /// @brief Field GetComponentRenderModelName, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName* GetComponentRenderModelName;

  /// @brief Field GetComponentStateForDevicePath, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath* GetComponentStateForDevicePath;

  /// @brief Field GetComponentState, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetComponentState* GetComponentState;

  /// @brief Field RenderModelHasComponent, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent* RenderModelHasComponent;

  /// @brief Field GetRenderModelThumbnailURL, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL* GetRenderModelThumbnailURL;

  /// @brief Field GetRenderModelOriginalPath, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath* GetRenderModelOriginalPath;

  /// @brief Field GetRenderModelErrorNameFromEnum, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum* GetRenderModelErrorNameFromEnum;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRRenderModels, 0x98>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, LoadRenderModel_Async) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, FreeRenderModel) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, LoadTexture_Async) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, FreeTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, LoadTextureD3D11_Async) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, LoadIntoTextureD3D11_Async) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, FreeTextureD3D11) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetRenderModelName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetRenderModelCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetComponentCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetComponentName) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetComponentButtonMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetComponentRenderModelName) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetComponentStateForDevicePath) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetComponentState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, RenderModelHasComponent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetRenderModelThumbnailURL) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetRenderModelOriginalPath) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRRenderModels, GetRenderModelErrorNameFromEnum) == 0x90, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___FreeRenderModel);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___FreeRenderModel*, "OVR.OpenVR", "IVRRenderModels/_FreeRenderModel");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___FreeTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___FreeTexture*, "OVR.OpenVR", "IVRRenderModels/_FreeTexture");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___FreeTextureD3D11*, "OVR.OpenVR", "IVRRenderModels/_FreeTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetComponentButtonMask*, "OVR.OpenVR", "IVRRenderModels/_GetComponentButtonMask");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetComponentCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetComponentCount*, "OVR.OpenVR", "IVRRenderModels/_GetComponentCount");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetComponentName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetComponentName*, "OVR.OpenVR", "IVRRenderModels/_GetComponentName");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetComponentRenderModelName*, "OVR.OpenVR", "IVRRenderModels/_GetComponentRenderModelName");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetComponentState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetComponentState*, "OVR.OpenVR", "IVRRenderModels/_GetComponentState");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetComponentStateForDevicePath*, "OVR.OpenVR", "IVRRenderModels/_GetComponentStateForDevicePath");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetRenderModelCount*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelCount");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetRenderModelErrorNameFromEnum*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetRenderModelName);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetRenderModelName*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelName");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetRenderModelOriginalPath*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelOriginalPath");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___GetRenderModelThumbnailURL*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelThumbnailURL");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___LoadIntoTextureD3D11_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadIntoTextureD3D11_Async");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___LoadRenderModel_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadRenderModel_Async");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___LoadTextureD3D11_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTextureD3D11_Async");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___LoadTexture_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTexture_Async");
NEED_NO_BOX(::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRRenderModels___RenderModelHasComponent*, "OVR.OpenVR", "IVRRenderModels/_RenderModelHasComponent");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRRenderModels, "OVR.OpenVR", "IVRRenderModels");
