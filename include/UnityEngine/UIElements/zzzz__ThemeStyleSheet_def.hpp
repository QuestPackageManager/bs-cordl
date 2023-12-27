#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__StyleSheet_def.hpp"
CORDL_MODULE_EXPORT(ThemeStyleSheet)
// Forward declare root types
namespace UnityEngine::UIElements {
class ThemeStyleSheet;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ThemeStyleSheet);
// Type: UnityEngine.UIElements::ThemeStyleSheet
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7279))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7273))
// CS Name: ::UnityEngine.UIElements::ThemeStyleSheet*
class CORDL_TYPE ThemeStyleSheet : public ::UnityEngine::UIElements::StyleSheet {
public:
  // Declarations
  /// @brief Method OnEnable addr 0x2e6b258 size 0x1c virtual true final false
  inline void OnEnable();

  static inline ::UnityEngine::UIElements::ThemeStyleSheet* New_ctor();

  /// @brief Method .ctor addr 0x2e6b3d8 size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ThemeStyleSheet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThemeStyleSheet(ThemeStyleSheet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThemeStyleSheet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThemeStyleSheet(ThemeStyleSheet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThemeStyleSheet();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ThemeStyleSheet, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ThemeStyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ThemeStyleSheet*, "UnityEngine.UIElements", "ThemeStyleSheet");
