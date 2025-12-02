#pragma once
// IWYU pragma private; include "Unity/Collections/NativeParallelMultiHashMapDebuggerTypeProxy_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelMultiHashMap_2_def.hpp"
CORDL_MODULE_EXPORT(NativeParallelMultiHashMapDebuggerTypeProxy_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections {
template <typename Key, typename Value> struct ListPair_2;
}
namespace Unity::Collections {
template <typename TKey, typename TValue> struct NativeParallelMultiHashMap_2;
}
// Forward declare root types
namespace Unity::Collections {
template <typename TKey, typename TValue> class NativeParallelMultiHashMapDebuggerTypeProxy_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::NativeParallelMultiHashMapDebuggerTypeProxy_2);
// Dependencies System.Object, Unity.Collections.NativeParallelMultiHashMap`2<TKey, TValue>
namespace Unity::Collections {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Collections.NativeParallelMultiHashMapDebuggerTypeProxy`2<TKey,TValue>
class CORDL_TYPE NativeParallelMultiHashMapDebuggerTypeProxy_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Items)) ::System::Collections::Generic::List_1<::Unity::Collections::ListPair_2<TKey, ::System::Collections::Generic::List_1<TValue>*>>* Items;

  /// @brief Field m_Target, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> m_Target;

  static inline ::Unity::Collections::NativeParallelMultiHashMapDebuggerTypeProxy_2<TKey, TValue>* New_ctor(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> target);

  constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> const& __cordl_internal_get_m_Target() const;

  constexpr ::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue>& __cordl_internal_get_m_Target();

  constexpr void __cordl_internal_set_m_Target(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> target);

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Collections::ListPair_2<TKey, ::System::Collections::Generic::List_1<TValue>*>>* get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeParallelMultiHashMapDebuggerTypeProxy_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelMultiHashMapDebuggerTypeProxy_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeParallelMultiHashMapDebuggerTypeProxy_2(NativeParallelMultiHashMapDebuggerTypeProxy_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeParallelMultiHashMapDebuggerTypeProxy_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeParallelMultiHashMapDebuggerTypeProxy_2(NativeParallelMultiHashMapDebuggerTypeProxy_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15630 };

  /// @brief Field m_Target, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelMultiHashMap_2<TKey, TValue> ___m_Target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::NativeParallelMultiHashMapDebuggerTypeProxy_2, "Unity.Collections", "NativeParallelMultiHashMapDebuggerTypeProxy`2");
