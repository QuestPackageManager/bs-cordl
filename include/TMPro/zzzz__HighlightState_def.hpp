#pragma once
// IWYU pragma private; include "TMPro/HighlightState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "TMPro/zzzz__TMP_Offset_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HighlightState)
namespace System {
class Object;
}
namespace TMPro {
struct TMP_Offset;
}
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace TMPro {
struct HighlightState;
}
// Write type traits
MARK_VAL_T(::TMPro::HighlightState);
// Dependencies TMPro.TMP_Offset, UnityEngine.Color32
namespace TMPro {
// Is value type: true
// CS Name: TMPro.HighlightState
struct CORDL_TYPE HighlightState {
public:
  // Declarations
  /// @brief Method Equals, addr 0x47c1740, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x47c17c0, size 0xa4, virtual false, abstract: false, final false
  inline bool Equals(::TMPro::HighlightState other);

  /// @brief Method GetHashCode, addr 0x47c16d4, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x47c15b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding);

  /// @brief Method op_Equality, addr 0x47c15c0, size 0xcc, virtual false, abstract: false, final false
  static inline bool op_Equality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs);

  /// @brief Method op_Inequality, addr 0x47c168c, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HighlightState();

  // Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "::TMPro::TMP_Offset", modifiers: "", def_value: None }]
  constexpr HighlightState(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14451 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field color, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field padding, offset: 0x4, size: 0x10, def value: None
  ::TMPro::TMP_Offset padding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::HighlightState, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::HighlightState, padding) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::HighlightState, 0x14>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::HighlightState, "TMPro", "HighlightState");
