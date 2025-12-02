#pragma once
// IWYU pragma private; include "Unity/Collections/NativeHashMapDebuggerTypeProxy_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NativeHashMapDebuggerTypeProxy_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey> struct HashMapHelper_1;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeHashMap_2_ReadOnly;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeHashMap_2;
}
namespace Unity::Collections {
template <typename Key, typename Value> struct Pair_2;
}
// Forward declare root types
namespace Unity::Collections {
template <typename TKey, typename TValue> class NativeHashMapDebuggerTypeProxy_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::NativeHashMapDebuggerTypeProxy_2);
// Dependencies System.Object
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Collections.NativeHashMapDebuggerTypeProxy`2<TKey,TValue>
class CORDL_TYPE NativeHashMapDebuggerTypeProxy_2 : public ::System::Object {
public:
  // Declarations
  /// @brief Field Data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Data, put = __cordl_internal_set_Data)) ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* Data;

  __declspec(property(get = get_Items)) ::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>* Items;

  static inline ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>* New_ctor(::Unity::Collections::NativeHashMap_2<TKey, TValue> target);

  static inline ::Unity::Collections::NativeHashMapDebuggerTypeProxy_2<TKey, TValue>* New_ctor(::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue> target);

  constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* const& __cordl_internal_get_Data() const;

  constexpr ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>*& __cordl_internal_get_Data();

  constexpr void __cordl_internal_set_Data(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeHashMap_2<TKey, TValue> target);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeHashMap_2_ReadOnly<TKey, TValue> target);

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>* get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeHashMapDebuggerTypeProxy_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeHashMapDebuggerTypeProxy_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeHashMapDebuggerTypeProxy_2(NativeHashMapDebuggerTypeProxy_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeHashMapDebuggerTypeProxy_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeHashMapDebuggerTypeProxy_2(NativeHashMapDebuggerTypeProxy_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15598 };

  /// @brief Field Data, offset: 0x10, size: 0x8, def value: None
  ::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* ___Data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::NativeHashMapDebuggerTypeProxy_2, "Unity.Collections", "NativeHashMapDebuggerTypeProxy`2");
