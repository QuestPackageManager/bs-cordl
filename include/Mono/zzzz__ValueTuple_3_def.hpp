#pragma once
// IWYU pragma private; include "Mono/ValueTuple_3.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTuple_3)
// Forward declare root types
namespace Mono {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
// Write type traits
MARK_GEN_VAL_T(::Mono::ValueTuple_3);
// Dependencies
namespace Mono {
// cpp template
template <typename T1, typename T2, typename T3>
// Is value type: true
// CS Name: Mono.ValueTuple`3<T1,T2,T3>
struct CORDL_TYPE ValueTuple_3 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTuple_3();

  // Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3",
  // modifiers: "", def_value: None }]
  constexpr ValueTuple_3(T1 Item1, T2 Item2, T3 Item3) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2245 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Item1, offset: 0x0, size: 0x8, def value: None
  T1 Item1;

  /// @brief Field Item2, offset: 0x8, size: 0x8, def value: None
  T2 Item2;

  /// @brief Field Item3, offset: 0x10, size: 0x8, def value: None
  T3 Item3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_3, "Mono", "ValueTuple`3");
