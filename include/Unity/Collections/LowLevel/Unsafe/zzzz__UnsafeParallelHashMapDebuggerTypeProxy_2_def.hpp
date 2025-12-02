#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeParallelHashMapDebuggerTypeProxy_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeParallelHashMap_2_def.hpp"
CORDL_MODULE_EXPORT(UnsafeParallelHashMapDebuggerTypeProxy_2)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey, typename TValue> struct UnsafeParallelHashMap_2;
}
namespace Unity::Collections {
template <typename Key, typename Value> struct Pair_2;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
template <typename TKey, typename TValue> class UnsafeParallelHashMapDebuggerTypeProxy_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDebuggerTypeProxy_2);
// Dependencies System.Object, Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMap`2<TKey, TValue>
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template <typename TKey, typename TValue>
// Is value type: false
// CS Name: Unity.Collections.LowLevel.Unsafe.UnsafeParallelHashMapDebuggerTypeProxy`2<TKey,TValue>
class CORDL_TYPE UnsafeParallelHashMapDebuggerTypeProxy_2 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Items)) ::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>* Items;

  /// @brief Field m_Target, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Target, put = __cordl_internal_set_m_Target)) ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> m_Target;

  static inline ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDebuggerTypeProxy_2<TKey, TValue>*
  New_ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> target);

  constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> const& __cordl_internal_get_m_Target() const;

  constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue>& __cordl_internal_get_m_Target();

  constexpr void __cordl_internal_set_m_Target(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> target);

  /// @brief Method get_Items, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Unity::Collections::Pair_2<TKey, TValue>>* get_Items();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnsafeParallelHashMapDebuggerTypeProxy_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnsafeParallelHashMapDebuggerTypeProxy_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnsafeParallelHashMapDebuggerTypeProxy_2(UnsafeParallelHashMapDebuggerTypeProxy_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnsafeParallelHashMapDebuggerTypeProxy_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnsafeParallelHashMapDebuggerTypeProxy_2(UnsafeParallelHashMapDebuggerTypeProxy_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15755 };

  /// @brief Field m_Target, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMap_2<TKey, TValue> ___m_Target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Collections::LowLevel::Unsafe
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::LowLevel::Unsafe::UnsafeParallelHashMapDebuggerTypeProxy_2, "Unity.Collections.LowLevel.Unsafe", "UnsafeParallelHashMapDebuggerTypeProxy`2");
