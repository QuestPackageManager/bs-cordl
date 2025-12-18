#pragma once
// IWYU pragma private; include "Unity/Collections/Pair_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Pair_2)
// Forward declare root types
namespace Unity::Collections {
template <typename Key, typename Value> struct Pair_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::Pair_2);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename Key, typename Value>
// Is value type: true
// CS Name: Unity.Collections.Pair`2<Key,Value>
struct CORDL_TYPE Pair_2 {
public:
  // Declarations
  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(Key k, Value v);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Pair_2();

  // Ctor Parameters [CppParam { name: "key", ty: "Key", modifiers: "", def_value: None }, CppParam { name: "value", ty: "Value", modifiers: "", def_value: None }]
  constexpr Pair_2(Key key, Value value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15538 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  Key key;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  Value value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::Pair_2, "Unity.Collections", "Pair`2");
