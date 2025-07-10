#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ColorSO)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: ColorSO
class CORDL_TYPE ColorSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::ColorSO* New_ctor();

  /// @brief Method .ctor, addr 0x26a1084, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method op_Implicit, addr 0x26a1e90, size 0x94, virtual false, abstract: false, final false
  static inline ::UnityEngine::Color op_Implicit___UnityEngine__Color(::GlobalNamespace::ColorSO* c);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorSO(ColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorSO(ColorSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18927 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSO*, "", "ColorSO");
