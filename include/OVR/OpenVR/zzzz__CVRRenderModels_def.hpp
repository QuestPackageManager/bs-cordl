#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRRenderModels.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRRenderModels)
namespace OVR::OpenVR {
struct CVRRenderModels_GetComponentStateUnion;
}
namespace OVR::OpenVR {
class CVRRenderModels__GetComponentStatePacked;
}
namespace OVR::OpenVR {
struct EVRRenderModelError;
}
namespace OVR::OpenVR {
class IVRRenderModels__GetComponentState;
}
namespace OVR::OpenVR {
struct RenderModel_ComponentState_t;
}
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
namespace OVR::OpenVR {
struct VRControllerState_t_Packed;
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
class CVRRenderModels;
}
namespace OVR::OpenVR {
class CVRRenderModels__GetComponentStatePacked;
}
namespace OVR::OpenVR {
struct CVRRenderModels_GetComponentStateUnion;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRRenderModels);
MARK_REF_PTR_T(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked);
MARK_VAL_T(::OVR::OpenVR::CVRRenderModels_GetComponentStateUnion);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRRenderModels/_GetComponentStatePacked
class CORDL_TYPE CVRRenderModels__GetComponentStatePacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x4070ae8, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                             ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x4070be8, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                        ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x4070ad4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ::ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                     ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  static inline ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4070a34, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRRenderModels__GetComponentStatePacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels__GetComponentStatePacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRRenderModels__GetComponentStatePacked(CVRRenderModels__GetComponentStatePacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels__GetComponentStatePacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRRenderModels__GetComponentStatePacked(CVRRenderModels__GetComponentStatePacked const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8886 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.CVRRenderModels/GetComponentStateUnion
struct CORDL_TYPE CVRRenderModels_GetComponentStateUnion {
public:
  // Declarations
  /// @brief Field pGetComponentState, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetComponentState, put = __cordl_internal_set_pGetComponentState)) ::OVR::OpenVR::IVRRenderModels__GetComponentState* pGetComponentState;

  /// @brief Field pGetComponentStatePacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetComponentStatePacked,
                      put = __cordl_internal_set_pGetComponentStatePacked)) ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* pGetComponentStatePacked;

  constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState* const& __cordl_internal_get_pGetComponentState() const;

  constexpr ::OVR::OpenVR::IVRRenderModels__GetComponentState*& __cordl_internal_get_pGetComponentState();

  constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* const& __cordl_internal_get_pGetComponentStatePacked() const;

  constexpr ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*& __cordl_internal_get_pGetComponentStatePacked();

  constexpr void __cordl_internal_set_pGetComponentState(::OVR::OpenVR::IVRRenderModels__GetComponentState* value);

  constexpr void __cordl_internal_set_pGetComponentStatePacked(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRRenderModels_GetComponentStateUnion();

  // Ctor Parameters [CppParam { name: "pGetComponentState", ty: "::OVR::OpenVR::IVRRenderModels__GetComponentState*", modifiers: "", def_value: None }, CppParam { name: "pGetComponentStatePacked",
  // ty: "::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*", modifiers: "", def_value: None }]
  constexpr CVRRenderModels_GetComponentStateUnion(::OVR::OpenVR::IVRRenderModels__GetComponentState* pGetComponentState,
                                                   ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* pGetComponentStatePacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetComponentState_padding[0x0];
      /// @brief Field pGetComponentState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRRenderModels__GetComponentState* ___pGetComponentState;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetComponentState_padding_forAlignment[0x0];
      /// @brief Field pGetComponentState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::IVRRenderModels__GetComponentState* ___pGetComponentState_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetComponentStatePacked_padding[0x0];
      /// @brief Field pGetComponentStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* ___pGetComponentStatePacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetComponentStatePacked_padding_forAlignment[0x0];
      /// @brief Field pGetComponentStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked* ___pGetComponentStatePacked_forAlignment;
    };
  };

public:
  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8887 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRRenderModels_GetComponentStateUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies OVR.OpenVR.IVRRenderModels, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRRenderModels
class CORDL_TYPE CVRRenderModels : public ::System::Object {
public:
  // Declarations
  using GetComponentStateUnion = ::OVR::OpenVR::CVRRenderModels_GetComponentStateUnion;

  using _GetComponentStatePacked = ::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked;

  /// @brief Field FnTable, offset 0x10, size 0x98
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRRenderModels FnTable;

  /// @brief Method FreeRenderModel, addr 0x4070638, size 0x24, virtual false, abstract: false, final false
  inline void FreeRenderModel(::System::IntPtr pRenderModel);

  /// @brief Method FreeTexture, addr 0x4070680, size 0x24, virtual false, abstract: false, final false
  inline void FreeTexture(::System::IntPtr pTexture);

  /// @brief Method FreeTextureD3D11, addr 0x40706ec, size 0x24, virtual false, abstract: false, final false
  inline void FreeTextureD3D11(::System::IntPtr pD3D11Texture2D);

  /// @brief Method GetComponentButtonMask, addr 0x40707a0, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetComponentButtonMask(::StringW pchRenderModelName, ::StringW pchComponentName);

  /// @brief Method GetComponentCount, addr 0x4070758, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetComponentCount(::StringW pchRenderModelName);

  /// @brief Method GetComponentName, addr 0x407077c, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetComponentName(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen);

  /// @brief Method GetComponentRenderModelName, addr 0x40707c4, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetComponentRenderModelName(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                              uint32_t unComponentRenderModelNameLen);

  /// @brief Method GetComponentState, addr 0x407080c, size 0x138, virtual false, abstract: false, final false
  inline bool GetComponentState(::StringW pchRenderModelName, ::StringW pchComponentName, ::ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  /// @brief Method GetComponentStateForDevicePath, addr 0x40707e8, size 0x24, virtual false, abstract: false, final false
  inline bool GetComponentStateForDevicePath(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ::ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                             ::ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  /// @brief Method GetRenderModelCount, addr 0x4070734, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelCount();

  /// @brief Method GetRenderModelErrorNameFromEnum, addr 0x40709b0, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetRenderModelErrorNameFromEnum(::OVR::OpenVR::EVRRenderModelError error);

  /// @brief Method GetRenderModelName, addr 0x4070710, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelName(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen);

  /// @brief Method GetRenderModelOriginalPath, addr 0x407098c, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelOriginalPath(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                             ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError);

  /// @brief Method GetRenderModelThumbnailURL, addr 0x4070968, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelThumbnailURL(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                             ::ByRef<::OVR::OpenVR::EVRRenderModelError> peError);

  /// @brief Method LoadIntoTextureD3D11_Async, addr 0x40706c8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadIntoTextureD3D11_Async(int32_t textureId, ::System::IntPtr pDstTexture);

  /// @brief Method LoadRenderModel_Async, addr 0x4070614, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadRenderModel_Async(::StringW pchRenderModelName, ::ByRef<::System::IntPtr> ppRenderModel);

  /// @brief Method LoadTextureD3D11_Async, addr 0x40706a4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadTextureD3D11_Async(int32_t textureId, ::System::IntPtr pD3D11Device, ::ByRef<::System::IntPtr> ppD3D11Texture2D);

  /// @brief Method LoadTexture_Async, addr 0x407065c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadTexture_Async(int32_t textureId, ::ByRef<::System::IntPtr> ppTexture);

  static inline ::OVR::OpenVR::CVRRenderModels* New_ctor(::System::IntPtr pInterface);

  /// @brief Method RenderModelHasComponent, addr 0x4070944, size 0x24, virtual false, abstract: false, final false
  inline bool RenderModelHasComponent(::StringW pchRenderModelName, ::StringW pchComponentName);

  constexpr ::OVR::OpenVR::IVRRenderModels const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRRenderModels& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRRenderModels value);

  /// @brief Method .ctor, addr 0x4070500, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRRenderModels();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRRenderModels(CVRRenderModels&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRRenderModels", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRRenderModels(CVRRenderModels const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8888 };

  /// @brief Field FnTable, offset: 0x10, size: 0x98, def value: None
  ::OVR::OpenVR::IVRRenderModels ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRRenderModels, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRRenderModels, 0xa8>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRRenderModels);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRRenderModels*, "OVR.OpenVR", "CVRRenderModels");
NEED_NO_BOX(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRRenderModels__GetComponentStatePacked*, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRRenderModels_GetComponentStateUnion, "OVR.OpenVR", "CVRRenderModels/GetComponentStateUnion");
