#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleColorSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
CORDL_MODULE_EXPORT(SimpleColorSO)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleColorSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SimpleColorSO);
// Dependencies ColorSO, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: SimpleColorSO
class CORDL_TYPE SimpleColorSO : public ::GlobalNamespace::ColorSO {
public:
  // Declarations
  /// @brief Field _color, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::SimpleColorSO* New_ctor();

  /// @brief Method SetColor, addr 0x26a2238, size 0xc, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color c);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x26a2244, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x26a222c, size 0xc, virtual true, abstract: false, final false
  inline ::UnityEngine::Color get_color();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimpleColorSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimpleColorSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimpleColorSO(SimpleColorSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimpleColorSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimpleColorSO(SimpleColorSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18937 };

  /// @brief Field _color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimpleColorSO, ____color) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SimpleColorSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SimpleColorSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleColorSO*, "", "SimpleColorSO");
