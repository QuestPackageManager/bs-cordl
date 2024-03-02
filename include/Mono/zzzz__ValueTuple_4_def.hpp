#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ValueTuple_4)
// Forward declare root types
namespace Mono {
template <typename T1, typename T2, typename T3, typename T4> struct ValueTuple_4;
}
// Write type traits
MARK_GEN_VAL_T(::Mono::ValueTuple_4);
// Type: Mono::ValueTuple`4
// SizeInfo { instance_size: 32, native_size: 48, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono {
// cpp template
template <typename T1, typename T2, typename T3, typename T4>
// Is value type: true
// CS Name: ::Mono::ValueTuple`4<T1,T2,T3,T4>
struct CORDL_TYPE ValueTuple_4 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTuple_4();

  // Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }, CppParam { name: "Item2", ty: "T2", modifiers: "", def_value: None }, CppParam { name: "Item3", ty: "T3",
  // modifiers: "", def_value: None }, CppParam { name: "Item4", ty: "T4", modifiers: "", def_value: None }]
  constexpr ValueTuple_4(T1 Item1, T2 Item2, T3 Item3, T4 Item4) noexcept;

  /// @brief Field Item1, offset: 0x0, size: 0x8, def value: None
  T1 Item1;

  /// @brief Field Item2, offset: 0x8, size: 0x8, def value: None
  T2 Item2;

  /// @brief Field Item3, offset: 0x10, size: 0x8, def value: None
  T3 Item3;

  /// @brief Field Item4, offset: 0x18, size: 0x8, def value: None
  T4 Item4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Mono
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Mono::ValueTuple_4, "Mono", "ValueTuple`4");
