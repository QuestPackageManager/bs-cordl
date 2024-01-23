#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTuple_2)
// Forward declare root types
namespace Mono {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Write type traits
MARK_GEN_VAL_T(::Mono::ValueTuple_2);
// Type: Mono::ValueTuple`2
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// cpp template
template <typename T1, typename T2>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2244))
// CS Name: ::Mono::ValueTuple`2<T1,T2>
struct CORDL_TYPE ValueTuple_2 {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }]
  constexpr ValueTuple_2(T1 Item1, T2 Item2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTuple_2();

  /// @brief Field Item1, offset: 0x0, size: 0x8, def value: None
  T1 Item1;

  /// @brief Field Item2, offset: 0x8, size: 0x8, def value: None
  T2 Item2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_2, "Mono", "ValueTuple`2");
