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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11066))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3972))
// CS Name: ::BTSStarTextEventInstaller*
class CORDL_TYPE BTSStarTextEventInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _btsStarTextEffectController, offset 0x20, size 0x8
  __declspec(property(get = __get__btsStarTextEffectController, put = __set__btsStarTextEffectController))::GlobalNamespace::BTSStarTextEffectController* _btsStarTextEffectController;

  constexpr ::GlobalNamespace::BTSStarTextEffectController*& __get__btsStarTextEffectController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BTSStarTextEffectController*> const& __get__btsStarTextEffectController() const;

  constexpr void __set__btsStarTextEffectController(::GlobalNamespace::BTSStarTextEffectController* value);

  /// @brief Method InstallBindings addr 0x20bccb4 size 0x84 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::BTSStarTextEventInstaller* New_ctor();

  /// @brief Method .ctor addr 0x20bcd38 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BTSStarTextEventInstaller(BTSStarTextEventInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEventInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BTSStarTextEventInstaller(BTSStarTextEventInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BTSStarTextEventInstaller();

public:
  /// @brief Field _btsStarTextEffectController, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::BTSStarTextEffectController* ____btsStarTextEffectController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEventInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BTSStarTextEventInstaller, ____btsStarTextEffectController) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEventInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEventInstaller*, "", "BTSStarTextEventInstaller");
