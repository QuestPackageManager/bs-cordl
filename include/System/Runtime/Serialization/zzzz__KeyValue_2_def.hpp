#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/KeyValue_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(KeyValue_2)
// Forward declare root types
namespace System::Runtime::Serialization {
template <typename K, typename V> struct KeyValue_2;
}
// Write type traits
MARK_GEN_VAL_T(::System::Runtime::Serialization::KeyValue_2);
// Dependencies
namespace System::Runtime::Serialization {
// cpp template
template <typename K, typename V>
// Is value type: true
// CS Name: System.Runtime.Serialization.KeyValue`2<K,V>
struct CORDL_TYPE KeyValue_2 {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(K key, V value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValue_2();

  // Ctor Parameters [CppParam { name: "key", ty: "K", modifiers: "", def_value: None }, CppParam { name: "value", ty: "V", modifiers: "", def_value: None }]
  constexpr KeyValue_2(K key, V value) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16960 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  K key;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  V value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Runtime::Serialization::KeyValue_2, "System.Runtime.Serialization", "KeyValue`2");
