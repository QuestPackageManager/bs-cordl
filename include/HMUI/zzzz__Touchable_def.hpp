#pragma once
// IWYU pragma private; include "HMUI/Touchable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Touchable)
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace HMUI {
class Touchable;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::Touchable);
// Dependencies UnityEngine.UI.Graphic
namespace HMUI {
// Is value type: false
// CS Name: HMUI.Touchable
class CORDL_TYPE Touchable : public ::UnityEngine::UI::Graphic {
public:
  // Declarations
  /// @brief Field _skew, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get__skew, put = __cordl_internal_set__skew)) float_t _skew;

  __declspec(property(get = get_skew)) float_t skew;

  static inline ::HMUI::Touchable* New_ctor();

  /// @brief Method OnPopulateMesh, addr 0x39f6b84, size 0x18, virtual true, abstract: false, final false
  inline void OnPopulateMesh(::UnityEngine::UI::VertexHelper* vh);

  constexpr float_t const& __cordl_internal_get__skew() const;

  constexpr float_t& __cordl_internal_get__skew();

  constexpr void __cordl_internal_set__skew(float_t value);

  /// @brief Method .ctor, addr 0x39f670c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_skew, addr 0x39f6b7c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_skew();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Touchable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Touchable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Touchable(Touchable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Touchable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Touchable(Touchable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16061 };

  /// @brief Field _skew, offset: 0xa4, size: 0x4, def value: None
  float_t ____skew;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::Touchable, ____skew) == 0xa4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::Touchable, 0xa8>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::Touchable);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::Touchable*, "HMUI", "Touchable");
