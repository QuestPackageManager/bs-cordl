#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SonyFirstPersonFlyingControllerHandler)
namespace GlobalNamespace {
class FirstPersonFlyingController;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyFirstPersonFlyingControllerHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyFirstPersonFlyingControllerHandler);
// Type: ::SonyFirstPersonFlyingControllerHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyFirstPersonFlyingControllerHandler*
class CORDL_TYPE SonyFirstPersonFlyingControllerHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _fpsFlying, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__fpsFlying, put = __cordl_internal_set__fpsFlying))::UnityW<::GlobalNamespace::FirstPersonFlyingController> _fpsFlying;

  static inline ::GlobalNamespace::SonyFirstPersonFlyingControllerHandler* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController> const& __cordl_internal_get__fpsFlying() const;

  constexpr ::UnityW<::GlobalNamespace::FirstPersonFlyingController>& __cordl_internal_get__fpsFlying();

  constexpr void __cordl_internal_set__fpsFlying(::UnityW<::GlobalNamespace::FirstPersonFlyingController> value);

  /// @brief Method .ctor, addr 0x23eba94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyFirstPersonFlyingControllerHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyFirstPersonFlyingControllerHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyFirstPersonFlyingControllerHandler(SonyFirstPersonFlyingControllerHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyFirstPersonFlyingControllerHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyFirstPersonFlyingControllerHandler(SonyFirstPersonFlyingControllerHandler const&) = delete;

  /// @brief Field _fpsFlying, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FirstPersonFlyingController> ____fpsFlying;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyFirstPersonFlyingControllerHandler, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyFirstPersonFlyingControllerHandler, ____fpsFlying) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyFirstPersonFlyingControllerHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyFirstPersonFlyingControllerHandler*, "", "SonyFirstPersonFlyingControllerHandler");
