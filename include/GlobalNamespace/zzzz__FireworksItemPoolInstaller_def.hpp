#pragma once
// IWYU pragma private; include "GlobalNamespace/FireworksItemPoolInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(FireworksItemPoolInstaller)
namespace GlobalNamespace {
class FireworkItemController;
}
namespace GlobalNamespace {
class FireworksController;
}
// Forward declare root types
namespace GlobalNamespace {
class FireworksItemPoolInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FireworksItemPoolInstaller);
// Type: ::FireworksItemPoolInstaller
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FireworksItemPoolInstaller*
class CORDL_TYPE FireworksItemPoolInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _fireworkItemControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworkItemControllerPrefab,
                      put = __cordl_internal_set__fireworkItemControllerPrefab))::UnityW<::GlobalNamespace::FireworkItemController> _fireworkItemControllerPrefab;

  /// @brief Field _fireworksController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__fireworksController, put = __cordl_internal_set__fireworksController))::UnityW<::GlobalNamespace::FireworksController> _fireworksController;

  /// @brief Method InstallBindings, addr 0x26b7c34, size 0x94, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::FireworksItemPoolInstaller* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::FireworkItemController> const& __cordl_internal_get__fireworkItemControllerPrefab() const;

  constexpr ::UnityW<::GlobalNamespace::FireworkItemController>& __cordl_internal_get__fireworkItemControllerPrefab();

  constexpr ::UnityW<::GlobalNamespace::FireworksController> const& __cordl_internal_get__fireworksController() const;

  constexpr ::UnityW<::GlobalNamespace::FireworksController>& __cordl_internal_get__fireworksController();

  constexpr void __cordl_internal_set__fireworkItemControllerPrefab(::UnityW<::GlobalNamespace::FireworkItemController> value);

  constexpr void __cordl_internal_set__fireworksController(::UnityW<::GlobalNamespace::FireworksController> value);

  /// @brief Method .ctor, addr 0x26b7cc8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireworksItemPoolInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireworksItemPoolInstaller(FireworksItemPoolInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireworksItemPoolInstaller(FireworksItemPoolInstaller const&) = delete;

  /// @brief Field _fireworksController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworksController> ____fireworksController;

  /// @brief Field _fireworkItemControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::FireworkItemController> ____fireworkItemControllerPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireworksItemPoolInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksItemPoolInstaller, ____fireworksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksItemPoolInstaller, ____fireworkItemControllerPrefab) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworksItemPoolInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworksItemPoolInstaller*, "", "FireworksItemPoolInstaller");
