#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ColorSchemesListSO)
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemesListSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSchemesListSO);
// Type: ::ColorSchemesListSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16044))
// CS Name: ::ColorSchemesListSO*
class CORDL_TYPE ColorSchemesListSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _colorSchemes, offset 0x18, size 0x8
  __declspec(property(get = __get__colorSchemes, put = __set__colorSchemes))::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> _colorSchemes;

  __declspec(property(get = get_colorSchemes))::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> colorSchemes;

  constexpr ::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*>& __get__colorSchemes();

  constexpr ::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> const& __get__colorSchemes() const;

  constexpr void __set__colorSchemes(::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> value);

  /// @brief Method get_colorSchemes addr 0x11bd254 size 0x8 virtual false final false
  inline ::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> get_colorSchemes();

  static inline ::GlobalNamespace::ColorSchemesListSO* New_ctor();

  /// @brief Method .ctor addr 0x11bd25c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesListSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSchemesListSO(ColorSchemesListSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSchemesListSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSchemesListSO(ColorSchemesListSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemesListSO();

public:
  /// @brief Field _colorSchemes, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ColorSchemeSO*, ::Array<::GlobalNamespace::ColorSchemeSO*>*> ____colorSchemes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemesListSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorSchemesListSO, ____colorSchemes) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemesListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesListSO*, "", "ColorSchemesListSO");
