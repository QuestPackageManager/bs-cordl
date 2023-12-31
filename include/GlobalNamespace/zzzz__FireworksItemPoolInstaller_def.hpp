#pragma once
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4849))
// CS Name: ::FireworksItemPoolInstaller*
class CORDL_TYPE FireworksItemPoolInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _fireworksController, offset 0x20, size 0x8
  __declspec(property(get = __get__fireworksController, put = __set__fireworksController))::GlobalNamespace::FireworksController* _fireworksController;

  /// @brief Field _fireworkItemControllerPrefab, offset 0x28, size 0x8
  __declspec(property(get = __get__fireworkItemControllerPrefab, put = __set__fireworkItemControllerPrefab))::GlobalNamespace::FireworkItemController* _fireworkItemControllerPrefab;

  constexpr ::GlobalNamespace::FireworksController*& __get__fireworksController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworksController*> const& __get__fireworksController() const;

  constexpr void __set__fireworksController(::GlobalNamespace::FireworksController* value);

  constexpr ::GlobalNamespace::FireworkItemController*& __get__fireworkItemControllerPrefab();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FireworkItemController*> const& __get__fireworkItemControllerPrefab() const;

  constexpr void __set__fireworkItemControllerPrefab(::GlobalNamespace::FireworkItemController* value);

  /// @brief Method InstallBindings, addr 0x2397dec, size 0x94, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::FireworksItemPoolInstaller* New_ctor();

  /// @brief Method .ctor, addr 0x2397e80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FireworksItemPoolInstaller(FireworksItemPoolInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FireworksItemPoolInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FireworksItemPoolInstaller(FireworksItemPoolInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FireworksItemPoolInstaller();

public:
  /// @brief Field _fireworksController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::FireworksController* ____fireworksController;

  /// @brief Field _fireworkItemControllerPrefab, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::FireworkItemController* ____fireworkItemControllerPrefab;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FireworksItemPoolInstaller, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksItemPoolInstaller, ____fireworksController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FireworksItemPoolInstaller, ____fireworkItemControllerPrefab) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FireworksItemPoolInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FireworksItemPoolInstaller*, "", "FireworksItemPoolInstaller");
