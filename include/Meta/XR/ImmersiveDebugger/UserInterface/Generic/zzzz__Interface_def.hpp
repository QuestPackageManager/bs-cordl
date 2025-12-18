#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/Interface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Interface)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Cursor;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ProxyCameraRig;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class ProxyInputModule;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Interface;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Generic.Interface
class CORDL_TYPE Interface : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(get = get_Camera)) ::UnityW<::UnityEngine::Camera> Camera;

  __declspec(property(get = get_Cursor, put = set_Cursor)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> Cursor;

  __declspec(property(get = get_FollowOverride, put = set_FollowOverride)) bool FollowOverride;

  __declspec(property(get = get_RotateOverride, put = set_RotateOverride)) bool RotateOverride;

  /// @brief Field <Cursor>k__BackingField, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__Cursor_k__BackingField, put = __cordl_internal_set__Cursor_k__BackingField)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor>
      _Cursor_k__BackingField;

  /// @brief Field <FollowOverride>k__BackingField, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get__FollowOverride_k__BackingField, put = __cordl_internal_set__FollowOverride_k__BackingField)) bool _FollowOverride_k__BackingField;

  /// @brief Field <RotateOverride>k__BackingField, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get__RotateOverride_k__BackingField, put = __cordl_internal_set__RotateOverride_k__BackingField)) bool _RotateOverride_k__BackingField;

  /// @brief Field _positionHasBeenInitialized, offset 0x8a, size 0x1
  __declspec(property(get = __cordl_internal_get__positionHasBeenInitialized, put = __cordl_internal_set__positionHasBeenInitialized)) bool _positionHasBeenInitialized;

  /// @brief Field _proxyCameraRig, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__proxyCameraRig, put = __cordl_internal_set__proxyCameraRig)) ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* _proxyCameraRig;

  /// @brief Field _proxyInputModule, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__proxyInputModule, put = __cordl_internal_set__proxyInputModule)) ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* _proxyInputModule;

  /// @brief Method Awake, addr 0x58af638, size 0x130, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method LateUpdate, addr 0x58af9c4, size 0x58, virtual true, abstract: false, final false
  inline void LateUpdate();

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface* New_ctor();

  /// @brief Method RefreshLayoutPreChildren, addr 0x58afa1c, size 0x4, virtual true, abstract: false, final false
  inline void RefreshLayoutPreChildren();

  /// @brief Method SetBits, addr 0x58af9a0, size 0x24, virtual false, abstract: false, final false
  static inline int32_t SetBits(int32_t cullingMask, int32_t bitPosition1, int32_t bitPosition2, bool state);

  /// @brief Method UpdateCulling, addr 0x58af8cc, size 0xd4, virtual false, abstract: false, final false
  inline void UpdateCulling();

  /// @brief Method UpdateTransform, addr 0x58af768, size 0x164, virtual false, abstract: false, final false
  inline void UpdateTransform();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> const& __cordl_internal_get__Cursor_k__BackingField() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor>& __cordl_internal_get__Cursor_k__BackingField();

  constexpr bool const& __cordl_internal_get__FollowOverride_k__BackingField() const;

  constexpr bool& __cordl_internal_get__FollowOverride_k__BackingField();

  constexpr bool const& __cordl_internal_get__RotateOverride_k__BackingField() const;

  constexpr bool& __cordl_internal_get__RotateOverride_k__BackingField();

  constexpr bool const& __cordl_internal_get__positionHasBeenInitialized() const;

  constexpr bool& __cordl_internal_get__positionHasBeenInitialized();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* const& __cordl_internal_get__proxyCameraRig() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig*& __cordl_internal_get__proxyCameraRig();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* const& __cordl_internal_get__proxyInputModule() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule*& __cordl_internal_get__proxyInputModule();

  constexpr void __cordl_internal_set__Cursor_k__BackingField(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> value);

  constexpr void __cordl_internal_set__FollowOverride_k__BackingField(bool value);

  constexpr void __cordl_internal_set__RotateOverride_k__BackingField(bool value);

  constexpr void __cordl_internal_set__positionHasBeenInitialized(bool value);

  constexpr void __cordl_internal_set__proxyCameraRig(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* value);

  constexpr void __cordl_internal_set__proxyInputModule(::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* value);

  /// @brief Method .ctor, addr 0x58afa20, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Camera, addr 0x58adbd0, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_Camera();

  /// @brief Method get_Cursor, addr 0x58af608, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> get_Cursor();

  /// @brief Method get_FollowOverride, addr 0x58af618, size 0x8, virtual true, abstract: false, final false
  inline bool get_FollowOverride();

  /// @brief Method get_RotateOverride, addr 0x58af628, size 0x8, virtual true, abstract: false, final false
  inline bool get_RotateOverride();

  /// @brief Method set_Cursor, addr 0x58af610, size 0x8, virtual false, abstract: false, final false
  inline void set_Cursor(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor* value);

  /// @brief Method set_FollowOverride, addr 0x58af620, size 0x8, virtual true, abstract: false, final false
  inline void set_FollowOverride(bool value);

  /// @brief Method set_RotateOverride, addr 0x58af630, size 0x8, virtual true, abstract: false, final false
  inline void set_RotateOverride(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interface();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interface(Interface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interface(Interface const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18378 };

  /// @brief Field _proxyInputModule, offset: 0x70, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyInputModule* ____proxyInputModule;

  /// @brief Field _proxyCameraRig, offset: 0x78, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyCameraRig* ____proxyCameraRig;

  /// @brief Field <Cursor>k__BackingField, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Cursor> ____Cursor_k__BackingField;

  /// @brief Field <FollowOverride>k__BackingField, offset: 0x88, size: 0x1, def value: None
  bool ____FollowOverride_k__BackingField;

  /// @brief Field <RotateOverride>k__BackingField, offset: 0x89, size: 0x1, def value: None
  bool ____RotateOverride_k__BackingField;

  /// @brief Field _positionHasBeenInitialized, offset: 0x8a, size: 0x1, def value: None
  bool ____positionHasBeenInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface, ____proxyInputModule) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface, ____proxyCameraRig) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface, ____Cursor_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface, ____FollowOverride_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface, ____RotateOverride_k__BackingField) == 0x89, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface, ____positionHasBeenInitialized) == 0x8a, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface, 0x90>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Interface*, "Meta.XR.ImmersiveDebugger.UserInterface.Generic", "Interface");
