#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/InclusiveRange.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InclusiveRange)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct InclusiveRange;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::InclusiveRange);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.InclusiveRange
struct CORDL_TYPE InclusiveRange {
public:
  // Declarations
  __declspec(property(get = get_isEmpty)) bool isEmpty;

  /// @brief Method Clamp, addr 0x66a1904, size 0x90, virtual false, abstract: false, final false
  inline void Clamp(int16_t min, int16_t max);

  /// @brief Method Contains, addr 0x66a19a8, size 0x24, virtual false, abstract: false, final false
  inline bool Contains(int16_t index);

  /// @brief Method Expand, addr 0x66a187c, size 0x88, virtual false, abstract: false, final false
  inline void Expand(int16_t index);

  /// @brief Method Merge, addr 0x66a19cc, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::InclusiveRange Merge(::UnityEngine::Rendering::Universal::InclusiveRange a, ::UnityEngine::Rendering::Universal::InclusiveRange b);

  /// @brief Method ToString, addr 0x66a1a58, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x66a1870, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int16_t start, int16_t end);

  /// @brief Method .ctor, addr 0x66a1864, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(int16_t startEnd);

  /// @brief Method get_empty, addr 0x66a1a50, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::Universal::InclusiveRange get_empty();

  /// @brief Method get_isEmpty, addr 0x66a1994, size 0x14, virtual false, abstract: false, final false
  inline bool get_isEmpty();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InclusiveRange();

  // Ctor Parameters [CppParam { name: "start", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "end", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr InclusiveRange(int16_t start, int16_t end) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12944 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field start, offset: 0x0, size: 0x2, def value: None
  int16_t start;

  /// @brief Field end, offset: 0x2, size: 0x2, def value: None
  int16_t end;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::InclusiveRange, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::InclusiveRange, end) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::InclusiveRange, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::InclusiveRange, "UnityEngine.Rendering.Universal", "InclusiveRange");
