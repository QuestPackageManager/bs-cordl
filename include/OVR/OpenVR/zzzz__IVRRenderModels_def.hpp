#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRRenderModels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRRenderModels)
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
namespace OVR::OpenVR {
class IVRRenderModels__FreeRenderModel;
}
namespace OVR::OpenVR {
class IVRRenderModels__FreeTextureD3D11;
}
namespace OVR::OpenVR {
class IVRRenderModels__FreeTexture;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentButtonMask;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentCount;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentName;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentRenderModelName;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentStateForDevicePath;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentState;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelCount;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelName;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelOriginalPath;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelThumbnailURL;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadIntoTextureD3D11_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadRenderModel_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadTextureD3D11_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadTexture_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__RenderModelHasComponent;
}
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRRenderModels__FreeRenderModel;
}
namespace OVR::OpenVR {
class IVRRenderModels__FreeTexture;
}
namespace OVR::OpenVR {
class IVRRenderModels__FreeTextureD3D11;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentButtonMask;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentCount;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentName;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentRenderModelName;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentState;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentStateForDevicePath;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelCount;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelErrorNameFromEnum;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelName;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelOriginalPath;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetRenderModelThumbnailURL;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadIntoTextureD3D11_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadRenderModel_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadTextureD3D11_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__LoadTexture_Async;
}
namespace OVR::OpenVR {
class IVRRenderModels__RenderModelHasComponent;
}
namespace OVR::OpenVR {
struct IVRRenderModels;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__FreeRenderModel*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__FreeTexture*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetComponentCount*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetComponentName*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetComponentState*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetRenderModelName*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*);
MARK_REF_T(::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*);
MARK_VAL_T(::OVR::OpenVR::IVRRenderModels);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__FreeRenderModel*, "OVR.OpenVR", "IVRRenderModels/_FreeRenderModel");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__FreeTexture*, "OVR.OpenVR", "IVRRenderModels/_FreeTexture");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*, "OVR.OpenVR", "IVRRenderModels/_FreeTextureD3D11");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*, "OVR.OpenVR", "IVRRenderModels/_GetComponentButtonMask");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetComponentCount*, "OVR.OpenVR", "IVRRenderModels/_GetComponentCount");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetComponentName*, "OVR.OpenVR", "IVRRenderModels/_GetComponentName");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*, "OVR.OpenVR", "IVRRenderModels/_GetComponentRenderModelName");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetComponentState*, "OVR.OpenVR", "IVRRenderModels/_GetComponentState");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*, "OVR.OpenVR", "IVRRenderModels/_GetComponentStateForDevicePath");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelCount");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelErrorNameFromEnum");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetRenderModelName*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelName");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelOriginalPath");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*, "OVR.OpenVR", "IVRRenderModels/_GetRenderModelThumbnailURL");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadIntoTextureD3D11_Async");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadRenderModel_Async");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTextureD3D11_Async");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*, "OVR.OpenVR", "IVRRenderModels/_LoadTexture_Async");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*, "OVR.OpenVR", "IVRRenderModels/_RenderModelHasComponent");
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::IVRRenderModels, "OVR.OpenVR", "IVRRenderModels");
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_LoadRenderModel_Async
class CORDL_TYPE IVRRenderModels__LoadRenderModel_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3ae8c, size 0x58, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::by_ref<::System::IntPtr> ppRenderModel, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3aee4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(::by_ref<::System::IntPtr> ppRenderModel, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3ae78, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(::StringW pchRenderModelName, ::by_ref<::System::IntPtr> ppRenderModel);

  static inline ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3adf8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__LoadRenderModel_Async();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadRenderModel_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__LoadRenderModel_Async(IVRRenderModels__LoadRenderModel_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadRenderModel_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__LoadRenderModel_Async(IVRRenderModels__LoadRenderModel_Async const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_FreeRenderModel
class CORDL_TYPE IVRRenderModels__FreeRenderModel : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3af88, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr pRenderModel, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3afdc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3af74, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr pRenderModel);

  static inline ::OVR::OpenVR::IVRRenderModels__FreeRenderModel* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3af08, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__FreeRenderModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__FreeRenderModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__FreeRenderModel(IVRRenderModels__FreeRenderModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__FreeRenderModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__FreeRenderModel(IVRRenderModels__FreeRenderModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8261 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__FreeRenderModel) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_LoadTexture_Async
class CORDL_TYPE IVRRenderModels__LoadTexture_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b068, size 0x7c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t textureId, ::by_ref<::System::IntPtr> ppTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b0e4, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(::by_ref<::System::IntPtr> ppTexture, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b054, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, ::by_ref<::System::IntPtr> ppTexture);

  static inline ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3afe8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__LoadTexture_Async();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadTexture_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__LoadTexture_Async(IVRRenderModels__LoadTexture_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadTexture_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__LoadTexture_Async(IVRRenderModels__LoadTexture_Async const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__LoadTexture_Async) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_FreeTexture
class CORDL_TYPE IVRRenderModels__FreeTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b188, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr pTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b1dc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b174, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr pTexture);

  static inline ::OVR::OpenVR::IVRRenderModels__FreeTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b108, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__FreeTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__FreeTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__FreeTexture(IVRRenderModels__FreeTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__FreeTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__FreeTexture(IVRRenderModels__FreeTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8263 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__FreeTexture) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_LoadTextureD3D11_Async
class CORDL_TYPE IVRRenderModels__LoadTextureD3D11_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b268, size 0x90, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t textureId, ::System::IntPtr pD3D11Device, ::by_ref<::System::IntPtr> ppD3D11Texture2D, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b2f8, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(::by_ref<::System::IntPtr> ppD3D11Texture2D, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b254, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, ::System::IntPtr pD3D11Device, ::by_ref<::System::IntPtr> ppD3D11Texture2D);

  static inline ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b1e8, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__LoadTextureD3D11_Async();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadTextureD3D11_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__LoadTextureD3D11_Async(IVRRenderModels__LoadTextureD3D11_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadTextureD3D11_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__LoadTextureD3D11_Async(IVRRenderModels__LoadTextureD3D11_Async const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8264 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_LoadIntoTextureD3D11_Async
class CORDL_TYPE IVRRenderModels__LoadIntoTextureD3D11_Async : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b39c, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(int32_t textureId, ::System::IntPtr pDstTexture, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b414, size 0x24, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b388, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError Invoke(int32_t textureId, ::System::IntPtr pDstTexture);

  static inline ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b31c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__LoadIntoTextureD3D11_Async();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadIntoTextureD3D11_Async", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__LoadIntoTextureD3D11_Async(IVRRenderModels__LoadIntoTextureD3D11_Async&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__LoadIntoTextureD3D11_Async", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__LoadIntoTextureD3D11_Async(IVRRenderModels__LoadIntoTextureD3D11_Async const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8265 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_FreeTextureD3D11
class CORDL_TYPE IVRRenderModels__FreeTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b4b8, size 0x54, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr pD3D11Texture2D, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b50c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b4a4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr pD3D11Texture2D);

  static inline ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b438, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__FreeTextureD3D11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__FreeTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__FreeTextureD3D11(IVRRenderModels__FreeTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__FreeTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__FreeTextureD3D11(IVRRenderModels__FreeTextureD3D11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8266 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetRenderModelName
class CORDL_TYPE IVRRenderModels__GetRenderModelName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b598, size 0x78, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b610, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b584, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen);

  static inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b518, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetRenderModelName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetRenderModelName(IVRRenderModels__GetRenderModelName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetRenderModelName(IVRRenderModels__GetRenderModelName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8267 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetRenderModelName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetRenderModelCount
class CORDL_TYPE IVRRenderModels__GetRenderModelCount : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b6b0, size 0x1c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b6cc, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b69c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b634, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetRenderModelCount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetRenderModelCount(IVRRenderModels__GetRenderModelCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetRenderModelCount(IVRRenderModels__GetRenderModelCount const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8268 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetRenderModelCount) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetComponentCount
class CORDL_TYPE IVRRenderModels__GetComponentCount : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b780, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b7a0, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b76c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName);

  static inline ::OVR::OpenVR::IVRRenderModels__GetComponentCount* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b6f0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetComponentCount();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentCount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetComponentCount(IVRRenderModels__GetComponentCount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentCount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetComponentCount(IVRRenderModels__GetComponentCount const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8269 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetComponentCount) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetComponentName
class CORDL_TYPE IVRRenderModels__GetComponentName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b858, size 0x7c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b8d4, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b844, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen);

  static inline ::OVR::OpenVR::IVRRenderModels__GetComponentName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b7c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetComponentName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetComponentName(IVRRenderModels__GetComponentName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetComponentName(IVRRenderModels__GetComponentName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8270 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetComponentName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetComponentButtonMask
class CORDL_TYPE IVRRenderModels__GetComponentButtonMask : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3b98c, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3b9b4, size 0x24, virtual true, abstract: false, final false
  inline uint64_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3b978, size 0x14, virtual true, abstract: false, final false
  inline uint64_t Invoke(::StringW pchRenderModelName, ::StringW pchComponentName);

  static inline ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b8f8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetComponentButtonMask();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentButtonMask", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetComponentButtonMask(IVRRenderModels__GetComponentButtonMask&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentButtonMask", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetComponentButtonMask(IVRRenderModels__GetComponentButtonMask const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetComponentRenderModelName
class CORDL_TYPE IVRRenderModels__GetComponentRenderModelName : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3ba6c, size 0x60, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                             uint32_t unComponentRenderModelNameLen, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3bacc, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3ba58, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName, uint32_t unComponentRenderModelNameLen);

  static inline ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3b9d8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetComponentRenderModelName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentRenderModelName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetComponentRenderModelName(IVRRenderModels__GetComponentRenderModelName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentRenderModelName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetComponentRenderModelName(IVRRenderModels__GetComponentRenderModelName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8272 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetComponentStateForDevicePath
class CORDL_TYPE IVRRenderModels__GetComponentStateForDevicePath : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3bb84, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                             ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3bc74, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3bb70, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                     ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  static inline ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3baf0, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetComponentStateForDevicePath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentStateForDevicePath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetComponentStateForDevicePath(IVRRenderModels__GetComponentStateForDevicePath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentStateForDevicePath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetComponentStateForDevicePath(IVRRenderModels__GetComponentStateForDevicePath const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8273 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetComponentState
class CORDL_TYPE IVRRenderModels__GetComponentState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3bd38, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                             ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3be44, size 0x30, virtual true, abstract: false, final false
  inline bool EndInvoke(::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState, ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                        ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3bd24, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::by_ref<::OVR::OpenVR::VRControllerState_t> pControllerState,
                     ::by_ref<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::by_ref<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  static inline ::OVR::OpenVR::IVRRenderModels__GetComponentState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3bca4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetComponentState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetComponentState(IVRRenderModels__GetComponentState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetComponentState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetComponentState(IVRRenderModels__GetComponentState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8274 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetComponentState) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_RenderModelHasComponent
class CORDL_TYPE IVRRenderModels__RenderModelHasComponent : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3bf08, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3bf30, size 0x24, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3bef4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName);

  static inline ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3be74, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__RenderModelHasComponent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__RenderModelHasComponent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__RenderModelHasComponent(IVRRenderModels__RenderModelHasComponent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__RenderModelHasComponent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__RenderModelHasComponent(IVRRenderModels__RenderModelHasComponent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8275 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetRenderModelThumbnailURL
class CORDL_TYPE IVRRenderModels__GetRenderModelThumbnailURL : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3bfe8, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                             ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3c0a8, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3bfd4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen, ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError);

  static inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3bf54, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetRenderModelThumbnailURL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelThumbnailURL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetRenderModelThumbnailURL(IVRRenderModels__GetRenderModelThumbnailURL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelThumbnailURL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetRenderModelThumbnailURL(IVRRenderModels__GetRenderModelThumbnailURL const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8276 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetRenderModelOriginalPath
class CORDL_TYPE IVRRenderModels__GetRenderModelOriginalPath : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3c160, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                             ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3c220, size 0x24, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::by_ref<::OVR::OpenVR::EVRRenderModelError> peError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3c14c, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen, ::by_ref<::OVR::OpenVR::EVRRenderModelError> peError);

  static inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3c0cc, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetRenderModelOriginalPath();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelOriginalPath", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetRenderModelOriginalPath(IVRRenderModels__GetRenderModelOriginalPath&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelOriginalPath", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetRenderModelOriginalPath(IVRRenderModels__GetRenderModelOriginalPath const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8277 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRRenderModels/_GetRenderModelErrorNameFromEnum
class CORDL_TYPE IVRRenderModels__GetRenderModelErrorNameFromEnum : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x5e3c2c4, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRRenderModelError error, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x5e3c34c, size 0x24, virtual true, abstract: false, final false
  inline ::System::IntPtr EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x5e3c2b0, size 0x14, virtual true, abstract: false, final false
  inline ::System::IntPtr Invoke(::OVR::OpenVR::EVRRenderModelError error);

  static inline ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x5e3c244, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels__GetRenderModelErrorNameFromEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelErrorNameFromEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRRenderModels__GetRenderModelErrorNameFromEnum(IVRRenderModels__GetRenderModelErrorNameFromEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRRenderModels__GetRenderModelErrorNameFromEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRRenderModels__GetRenderModelErrorNameFromEnum(IVRRenderModels__GetRenderModelErrorNameFromEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8278 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum) == 0x80, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRRenderModels
struct CORDL_TYPE IVRRenderModels {
public:
  // Declarations
  using _FreeRenderModel = ::OVR::OpenVR::IVRRenderModels__FreeRenderModel;

  using _FreeTexture = ::OVR::OpenVR::IVRRenderModels__FreeTexture;

  using _FreeTextureD3D11 = ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11;

  using _GetComponentButtonMask = ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask;

  using _GetComponentCount = ::OVR::OpenVR::IVRRenderModels__GetComponentCount;

  using _GetComponentName = ::OVR::OpenVR::IVRRenderModels__GetComponentName;

  using _GetComponentRenderModelName = ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName;

  using _GetComponentState = ::OVR::OpenVR::IVRRenderModels__GetComponentState;

  using _GetComponentStateForDevicePath = ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath;

  using _GetRenderModelCount = ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount;

  using _GetRenderModelErrorNameFromEnum = ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum;

  using _GetRenderModelName = ::OVR::OpenVR::IVRRenderModels__GetRenderModelName;

  using _GetRenderModelOriginalPath = ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath;

  using _GetRenderModelThumbnailURL = ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL;

  using _LoadIntoTextureD3D11_Async = ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async;

  using _LoadRenderModel_Async = ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async;

  using _LoadTextureD3D11_Async = ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async;

  using _LoadTexture_Async = ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async;

  using _RenderModelHasComponent = ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRRenderModels();

  // Ctor Parameters [CppParam { name: "LoadRenderModel_Async", ty: "::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async*", modifiers: "", def_value: None }, CppParam { name: "FreeRenderModel", ty:
  // "::OVR::OpenVR::IVRRenderModels__FreeRenderModel*", modifiers: "", def_value: None }, CppParam { name: "LoadTexture_Async", ty: "::OVR::OpenVR::IVRRenderModels__LoadTexture_Async*", modifiers:
  // "", def_value: None }, CppParam { name: "FreeTexture", ty: "::OVR::OpenVR::IVRRenderModels__FreeTexture*", modifiers: "", def_value: None }, CppParam { name: "LoadTextureD3D11_Async", ty:
  // "::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async*", modifiers: "", def_value: None }, CppParam { name: "LoadIntoTextureD3D11_Async", ty:
  // "::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async*", modifiers: "", def_value: None }, CppParam { name: "FreeTextureD3D11", ty: "::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11*",
  // modifiers: "", def_value: None }, CppParam { name: "GetRenderModelName", ty: "::OVR::OpenVR::IVRRenderModels__GetRenderModelName*", modifiers: "", def_value: None }, CppParam { name:
  // "GetRenderModelCount", ty: "::OVR::OpenVR::IVRRenderModels__GetRenderModelCount*", modifiers: "", def_value: None }, CppParam { name: "GetComponentCount", ty:
  // "::OVR::OpenVR::IVRRenderModels__GetComponentCount*", modifiers: "", def_value: None }, CppParam { name: "GetComponentName", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentName*", modifiers:
  // "", def_value: None }, CppParam { name: "GetComponentButtonMask", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask*", modifiers: "", def_value: None }, CppParam { name:
  // "GetComponentRenderModelName", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName*", modifiers: "", def_value: None }, CppParam { name: "GetComponentStateForDevicePath", ty:
  // "::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath*", modifiers: "", def_value: None }, CppParam { name: "GetComponentState", ty:
  // "::OVR::OpenVR::IVRRenderModels__GetComponentState*", modifiers: "", def_value: None }, CppParam { name: "RenderModelHasComponent", ty: "::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent*",
  // modifiers: "", def_value: None }, CppParam { name: "GetRenderModelThumbnailURL", ty: "::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL*", modifiers: "", def_value: None }, CppParam {
  // name: "GetRenderModelOriginalPath", ty: "::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath*", modifiers: "", def_value: None }, CppParam { name: "GetRenderModelErrorNameFromEnum", ty:
  // "::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum*", modifiers: "", def_value: None }]
  constexpr IVRRenderModels(::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async* LoadRenderModel_Async, ::OVR::OpenVR::IVRRenderModels__FreeRenderModel* FreeRenderModel,
                            ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async* LoadTexture_Async, ::OVR::OpenVR::IVRRenderModels__FreeTexture* FreeTexture,
                            ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async* LoadTextureD3D11_Async, ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async* LoadIntoTextureD3D11_Async,
                            ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11* FreeTextureD3D11, ::OVR::OpenVR::IVRRenderModels__GetRenderModelName* GetRenderModelName,
                            ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount* GetRenderModelCount, ::OVR::OpenVR::IVRRenderModels__GetComponentCount* GetComponentCount,
                            ::OVR::OpenVR::IVRRenderModels__GetComponentName* GetComponentName, ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask* GetComponentButtonMask,
                            ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName* GetComponentRenderModelName,
                            ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath* GetComponentStateForDevicePath, ::OVR::OpenVR::IVRRenderModels__GetComponentState* GetComponentState,
                            ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent* RenderModelHasComponent, ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL* GetRenderModelThumbnailURL,
                            ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath* GetRenderModelOriginalPath,
                            ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum* GetRenderModelErrorNameFromEnum) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8279 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  /// @brief Field LoadRenderModel_Async, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__LoadRenderModel_Async* LoadRenderModel_Async;

  /// @brief Field FreeRenderModel, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__FreeRenderModel* FreeRenderModel;

  /// @brief Field LoadTexture_Async, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__LoadTexture_Async* LoadTexture_Async;

  /// @brief Field FreeTexture, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__FreeTexture* FreeTexture;

  /// @brief Field LoadTextureD3D11_Async, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__LoadTextureD3D11_Async* LoadTextureD3D11_Async;

  /// @brief Field LoadIntoTextureD3D11_Async, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__LoadIntoTextureD3D11_Async* LoadIntoTextureD3D11_Async;

  /// @brief Field FreeTextureD3D11, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__FreeTextureD3D11* FreeTextureD3D11;

  /// @brief Field GetRenderModelName, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetRenderModelName* GetRenderModelName;

  /// @brief Field GetRenderModelCount, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetRenderModelCount* GetRenderModelCount;

  /// @brief Field GetComponentCount, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetComponentCount* GetComponentCount;

  /// @brief Field GetComponentName, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetComponentName* GetComponentName;

  /// @brief Field GetComponentButtonMask, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetComponentButtonMask* GetComponentButtonMask;

  /// @brief Field GetComponentRenderModelName, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetComponentRenderModelName* GetComponentRenderModelName;

  /// @brief Field GetComponentStateForDevicePath, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetComponentStateForDevicePath* GetComponentStateForDevicePath;

  /// @brief Field GetComponentState, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetComponentState* GetComponentState;

  /// @brief Field RenderModelHasComponent, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__RenderModelHasComponent* RenderModelHasComponent;

  /// @brief Field GetRenderModelThumbnailURL, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetRenderModelThumbnailURL* GetRenderModelThumbnailURL;

  /// @brief Field GetRenderModelOriginalPath, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetRenderModelOriginalPath* GetRenderModelOriginalPath;

  /// @brief Field GetRenderModelErrorNameFromEnum, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::IVRRenderModels__GetRenderModelErrorNameFromEnum* GetRenderModelErrorNameFromEnum;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
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

static_assert(sizeof(::OVR::OpenVR::IVRRenderModels) == 0x98, "Size mismatch!");

} // namespace OVR::OpenVR
