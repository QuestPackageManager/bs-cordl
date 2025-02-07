#pragma once
// IWYU pragma private; include "UnityEngine/RangeInt.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RangeInt)
// Forward declare root types
namespace UnityEngine {
struct RangeInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RangeInt);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.RangeInt
struct CORDL_TYPE RangeInt {
public:
  // Declarations
  __declspec(property(get = get_end)) int32_t end;

  /// @brief Method .ctor, addr 0x48b2008, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t length);

  /// @brief Method get_end, addr 0x48b1ffc, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_end();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RangeInt();

  // Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RangeInt(int32_t start, int32_t length) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field start, offset: 0x0, size: 0x4, def value: None
  int32_t start;

  /// @brief Field length, offset: 0x4, size: 0x4, def value: None
  int32_t length;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::RangeInt, start) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::RangeInt, length) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::RangeInt, 0x8>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RangeInt, "UnityEngine", "RangeInt");
