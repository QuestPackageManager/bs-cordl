#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/SerializedKeyValuePair_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(SerializedKeyValuePair_2)
// Forward declare root types
namespace AYellowpaper::SerializedCollections {
template <typename TKey, typename TValue> struct SerializedKeyValuePair_2;
}
// Write type traits
MARK_GEN_VAL_T(::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2);
// Dependencies
namespace AYellowpaper::SerializedCollections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: AYellowpaper.SerializedCollections.SerializedKeyValuePair`2<TKey,TValue>
struct CORDL_TYPE SerializedKeyValuePair_2 {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey key, TValue value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedKeyValuePair_2();

  // Ctor Parameters [CppParam { name: "Key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "Value", ty: "TValue", modifiers: "", def_value: None }]
  constexpr SerializedKeyValuePair_2(TKey Key, TValue Value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22988 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field Key, offset: 0x0, size: 0x8, def value: None
  TKey Key;

  /// @brief Field Value, offset: 0x8, size: 0x8, def value: None
  TValue Value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace AYellowpaper::SerializedCollections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::AYellowpaper::SerializedCollections::SerializedKeyValuePair_2, "AYellowpaper.SerializedCollections", "SerializedKeyValuePair`2");
