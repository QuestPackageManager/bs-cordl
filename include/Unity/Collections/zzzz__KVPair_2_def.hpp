#pragma once
// IWYU pragma private; include "Unity/Collections/KVPair_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KVPair_2)
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey> struct HashMapHelper_1;
}
// Forward declare root types
namespace Unity::Collections {
template <typename TKey, typename TValue> struct KVPair_2;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Collections::KVPair_2);
// Dependencies
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: true
// CS Name: Unity.Collections.KVPair`2<TKey,TValue>
struct CORDL_TYPE KVPair_2 {
public:
  // Declarations
  __declspec(property(get = get_Key)) TKey Key;

  __declspec(property(get = get_Value)) TValue Value;

  /// @brief Method GetKeyValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool GetKeyValue(::ByRef<TKey> key, ::ByRef<TValue> value);

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline TKey get_Key();

  /// @brief Method get_Null, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Collections::KVPair_2<TKey, TValue> get_Null();

  /// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<TValue> get_Value();

  // Ctor Parameters []
  // @brief default ctor
  constexpr KVPair_2();

  // Ctor Parameters [CppParam { name: "m_Data", ty: "::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Next", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr KVPair_2(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* m_Data, int32_t m_Index, int32_t m_Next) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15608 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Data, offset: 0x0, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* m_Data;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  /// @brief Field m_Next, offset: 0xc, size: 0x4, def value: None
  int32_t m_Next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::KVPair_2, "Unity.Collections", "KVPair`2");
