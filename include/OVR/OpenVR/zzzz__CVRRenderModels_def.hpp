#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRRenderModels.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRRenderModels_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRRenderModels)
namespace OVR::OpenVR {
struct EVRRenderModelError;
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
namespace OVR::OpenVR {
struct __CVRRenderModels__GetComponentStateUnion;
}
namespace OVR::OpenVR {
class __CVRRenderModels___GetComponentStatePacked;
}
namespace OVR::OpenVR {
class __IVRRenderModels___GetComponentState;
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
class __CVRRenderModels___GetComponentStatePacked;
}
namespace OVR::OpenVR {
struct __CVRRenderModels__GetComponentStateUnion;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRRenderModels);
MARK_REF_PTR_T(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked);
MARK_VAL_T(::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion);
// Type: ::_GetComponentStatePacked
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::CVRRenderModels::_GetComponentStatePacked*
class CORDL_TYPE __CVRRenderModels___GetComponentStatePacked : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x2bea61c, size 0x100, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                                             ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x2bea71c, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                        ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x2bea608, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t_Packed> pControllerState,
                     ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  static inline ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x2bea530, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRRenderModels___GetComponentStatePacked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CVRRenderModels___GetComponentStatePacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CVRRenderModels___GetComponentStatePacked(__CVRRenderModels___GetComponentStatePacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CVRRenderModels___GetComponentStatePacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CVRRenderModels___GetComponentStatePacked(__CVRRenderModels___GetComponentStatePacked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::GetComponentStateUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::CVRRenderModels::GetComponentStateUnion
struct CORDL_TYPE __CVRRenderModels__GetComponentStateUnion {
public:
  // Declarations
  /// @brief Field pGetComponentState, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetComponentState, put = __cordl_internal_set_pGetComponentState))::OVR::OpenVR::__IVRRenderModels___GetComponentState* pGetComponentState;

  /// @brief Field pGetComponentStatePacked, offset 0x0, size 0x8
  __declspec(property(get = __cordl_internal_get_pGetComponentStatePacked,
                      put = __cordl_internal_set_pGetComponentStatePacked))::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* pGetComponentStatePacked;

  constexpr ::OVR::OpenVR::__IVRRenderModels___GetComponentState*& __cordl_internal_get_pGetComponentState();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVRRenderModels___GetComponentState*> const& __cordl_internal_get_pGetComponentState() const;

  constexpr ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*& __cordl_internal_get_pGetComponentStatePacked();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*> const& __cordl_internal_get_pGetComponentStatePacked() const;

  constexpr void __cordl_internal_set_pGetComponentState(::OVR::OpenVR::__IVRRenderModels___GetComponentState* value);

  constexpr void __cordl_internal_set_pGetComponentStatePacked(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVRRenderModels__GetComponentStateUnion();

  // Ctor Parameters [CppParam { name: "pGetComponentState", ty: "::OVR::OpenVR::__IVRRenderModels___GetComponentState*", modifiers: "", def_value: None }, CppParam { name: "pGetComponentStatePacked",
  // ty: "::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*", modifiers: "", def_value: None }]
  constexpr __CVRRenderModels__GetComponentStateUnion(::OVR::OpenVR::__IVRRenderModels___GetComponentState* pGetComponentState,
                                                      ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* pGetComponentStatePacked) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetComponentState_padding[0x0];
      /// @brief Field pGetComponentState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRRenderModels___GetComponentState* ___pGetComponentState;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetComponentState_padding_forAlignment[0x0];
      /// @brief Field pGetComponentState, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVRRenderModels___GetComponentState* ___pGetComponentState_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pGetComponentStatePacked_padding[0x0];
      /// @brief Field pGetComponentStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* ___pGetComponentStatePacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pGetComponentStatePacked_padding_forAlignment[0x0];
      /// @brief Field pGetComponentStatePacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked* ___pGetComponentStatePacked_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::CVRRenderModels
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::OVR.OpenVR::CVRRenderModels*
class CORDL_TYPE CVRRenderModels : public ::System::Object {
public:
  // Declarations
  using GetComponentStateUnion = ::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion;

  using _GetComponentStatePacked = ::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked;

  /// @brief Field FnTable, offset 0x10, size 0x98
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable))::OVR::OpenVR::IVRRenderModels FnTable;

  /// @brief Method FreeRenderModel, addr 0x2bea134, size 0x24, virtual false, abstract: false, final false
  inline void FreeRenderModel(::System::IntPtr pRenderModel);

  /// @brief Method FreeTexture, addr 0x2bea17c, size 0x24, virtual false, abstract: false, final false
  inline void FreeTexture(::System::IntPtr pTexture);

  /// @brief Method FreeTextureD3D11, addr 0x2bea1e8, size 0x24, virtual false, abstract: false, final false
  inline void FreeTextureD3D11(::System::IntPtr pD3D11Texture2D);

  /// @brief Method GetComponentButtonMask, addr 0x2bea29c, size 0x24, virtual false, abstract: false, final false
  inline uint64_t GetComponentButtonMask(::StringW pchRenderModelName, ::StringW pchComponentName);

  /// @brief Method GetComponentCount, addr 0x2bea254, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetComponentCount(::StringW pchRenderModelName);

  /// @brief Method GetComponentName, addr 0x2bea278, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetComponentName(::StringW pchRenderModelName, uint32_t unComponentIndex, ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameLen);

  /// @brief Method GetComponentRenderModelName, addr 0x2bea2c0, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetComponentRenderModelName(::StringW pchRenderModelName, ::StringW pchComponentName, ::System::Text::StringBuilder* pchComponentRenderModelName,
                                              uint32_t unComponentRenderModelNameLen);

  /// @brief Method GetComponentState, addr 0x2bea308, size 0x138, virtual false, abstract: false, final false
  inline bool GetComponentState(::StringW pchRenderModelName, ::StringW pchComponentName, ByRef<::OVR::OpenVR::VRControllerState_t> pControllerState,
                                ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState, ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  /// @brief Method GetComponentStateForDevicePath, addr 0x2bea2e4, size 0x24, virtual false, abstract: false, final false
  inline bool GetComponentStateForDevicePath(::StringW pchRenderModelName, ::StringW pchComponentName, uint64_t devicePath, ByRef<::OVR::OpenVR::RenderModel_ControllerMode_State_t> pState,
                                             ByRef<::OVR::OpenVR::RenderModel_ComponentState_t> pComponentState);

  /// @brief Method GetRenderModelCount, addr 0x2bea230, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelCount();

  /// @brief Method GetRenderModelErrorNameFromEnum, addr 0x2bea4ac, size 0x84, virtual false, abstract: false, final false
  inline ::StringW GetRenderModelErrorNameFromEnum(::OVR::OpenVR::EVRRenderModelError error);

  /// @brief Method GetRenderModelName, addr 0x2bea20c, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelName(uint32_t unRenderModelIndex, ::System::Text::StringBuilder* pchRenderModelName, uint32_t unRenderModelNameLen);

  /// @brief Method GetRenderModelOriginalPath, addr 0x2bea488, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelOriginalPath(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchOriginalPath, uint32_t unOriginalPathLen,
                                             ByRef<::OVR::OpenVR::EVRRenderModelError> peError);

  /// @brief Method GetRenderModelThumbnailURL, addr 0x2bea464, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetRenderModelThumbnailURL(::StringW pchRenderModelName, ::System::Text::StringBuilder* pchThumbnailURL, uint32_t unThumbnailURLLen,
                                             ByRef<::OVR::OpenVR::EVRRenderModelError> peError);

  /// @brief Method LoadIntoTextureD3D11_Async, addr 0x2bea1c4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadIntoTextureD3D11_Async(int32_t textureId, ::System::IntPtr pDstTexture);

  /// @brief Method LoadRenderModel_Async, addr 0x2bea110, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadRenderModel_Async(::StringW pchRenderModelName, ByRef<::System::IntPtr> ppRenderModel);

  /// @brief Method LoadTextureD3D11_Async, addr 0x2bea1a0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadTextureD3D11_Async(int32_t textureId, ::System::IntPtr pD3D11Device, ByRef<::System::IntPtr> ppD3D11Texture2D);

  /// @brief Method LoadTexture_Async, addr 0x2bea158, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRRenderModelError LoadTexture_Async(int32_t textureId, ByRef<::System::IntPtr> ppTexture);

  static inline ::OVR::OpenVR::CVRRenderModels* New_ctor(::System::IntPtr pInterface);

  /// @brief Method RenderModelHasComponent, addr 0x2bea440, size 0x24, virtual false, abstract: false, final false
  inline bool RenderModelHasComponent(::StringW pchRenderModelName, ::StringW pchComponentName);

  constexpr ::OVR::OpenVR::IVRRenderModels const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRRenderModels& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRRenderModels value);

  /// @brief Method .ctor, addr 0x2be9ffc, size 0x114, virtual false, abstract: false, final false
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

  /// @brief Field FnTable, offset: 0x10, size: 0x98, def value: None
  ::OVR::OpenVR::IVRRenderModels ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRRenderModels, 0xa8>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRRenderModels, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRRenderModels);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRRenderModels*, "OVR.OpenVR", "CVRRenderModels");
NEED_NO_BOX(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRRenderModels___GetComponentStatePacked*, "OVR.OpenVR", "CVRRenderModels/_GetComponentStatePacked");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVRRenderModels__GetComponentStateUnion, "OVR.OpenVR", "CVRRenderModels/GetComponentStateUnion");
