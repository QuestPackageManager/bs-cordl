#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(BTSStarTextEventInstaller)
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEventInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEventInstaller);
// Type: ::BTSStarTextEventInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BTSStarTextEventInstaller*
class CORDL_TYPE BTSStarTextEventInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _btsStarTextEffectController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__btsStarTextEffectController,
                      put = __cordl_internal_set__btsStarTextEffectController))::UnityW<::GlobalNamespace::BTSStarTextEffectController> _btsStarTextEffectController;

  /// @brief Method InstallBindings, addr 0xe911f8, size 0x84, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BTSStarTextEventInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::BTSStarTextEffectController> const& __cordl_internal_get__btsStarTextEffectController() const;

  constexpr ::UnityW<::GlobalNamespace::BTSStarTextEffectController>& __cordl_internal_get__btsStarTextEffectController();

  constexpr void __cordl_internal_set__btsStarTextEffectController(::UnityW<::GlobalNamespace::BTSStarTextEffectController> value);

  /// @brief Method .ctor, addr 0xe9127c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSStarTextEventInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSStarTextEventInstaller(BTSStarTextEventInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSStarTextEventInstaller(BTSStarTextEventInstaller const&) = delete;

  /// @brief Field _btsStarTextEffectController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BTSStarTextEffectController> ____btsStarTextEffectController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEventInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventInstaller, ____btsStarTextEffectController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEventInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEventInstaller*, "", "BTSStarTextEventInstaller");
