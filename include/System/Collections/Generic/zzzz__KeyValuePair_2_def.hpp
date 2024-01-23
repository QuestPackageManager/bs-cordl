#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(KeyValuePair_2)
// Forward declare root types
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
// Write type traits
MARK_GEN_VAL_T(::System::Collections::Generic::KeyValuePair_2);
// Type: System.Collections.Generic::KeyValuePair`2
// SizeInfo { instance_size: 16, native_size: 32, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3841))
// CS Name: ::System.Collections.Generic::KeyValuePair`2<TKey,TValue>
struct CORDL_TYPE KeyValuePair_2 {
public:
  // Declarations
  __declspec(property(get = get_Key)) TKey Key;

  __declspec(property(get = get_Value)) TValue Value;

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(TKey key, TValue value);

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_Key();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TValue get_Value();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Deconstruct, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Deconstruct(ByRef<TKey> key, ByRef<TValue> value);

  // Ctor Parameters [CppParam { name: "key", ty: "TKey", modifiers: "", def_value: None }, CppParam { name: "value", ty: "TValue", modifiers: "", def_value: None }]
  constexpr KeyValuePair_2(TKey key, TValue value) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyValuePair_2();

  /// @brief Field key, offset: 0x0, size: 0x8, def value: None
  TKey key;

  /// @brief Field value, offset: 0x8, size: 0x8, def value: None
  TValue value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::KeyValuePair_2, "System.Collections.Generic", "KeyValuePair`2");
