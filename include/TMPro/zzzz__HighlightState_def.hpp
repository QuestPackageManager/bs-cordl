#pragma once
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
// Type: TMPro::HighlightState
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12330)), TypeDefinitionIndex(TypeDefinitionIndex(10250))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12331))
// CS Name: ::TMPro::HighlightState
struct CORDL_TYPE HighlightState {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2c01c08, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding);

  /// @brief Method op_Equality, addr 0x2c01c18, size 0xc8, virtual false, abstract: false, final false
  static inline bool op_Equality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs);

  /// @brief Method op_Inequality, addr 0x2c01ce0, size 0x48, virtual false, abstract: false, final false
  static inline bool op_Inequality(::TMPro::HighlightState lhs, ::TMPro::HighlightState rhs);

  /// @brief Method GetHashCode, addr 0x2c01d28, size 0x6c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Equals, addr 0x2c01d94, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x2c01e14, size 0xa4, virtual false, abstract: false, final false
  inline bool Equals(::TMPro::HighlightState other);

  // Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "::TMPro::TMP_Offset", modifiers: "", def_value: None }]
  constexpr HighlightState(::UnityEngine::Color32 color, ::TMPro::TMP_Offset padding) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HighlightState();

  /// @brief Field color, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Color32 color;

  /// @brief Field padding, offset: 0x4, size: 0x10, def value: None
  ::TMPro::TMP_Offset padding;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::HighlightState, 0x14>, "Size mismatch!");

static_assert(offsetof(::TMPro::HighlightState, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::TMPro::HighlightState, padding) == 0x4, "Offset mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::HighlightState, "TMPro", "HighlightState");
