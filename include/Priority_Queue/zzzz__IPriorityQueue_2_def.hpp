#pragma once
// IWYU pragma private; include "Priority_Queue/IPriorityQueue_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPriorityQueue_2)
// Forward declare root types
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IPriorityQueue_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::IPriorityQueue_2);
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// CS Name: Priority_Queue.IPriorityQueue`2<TItem,TPriority>
class CORDL_TYPE IPriorityQueue_2 {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_First)) TItem First;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Contains(TItem node);

  /// @brief Method Dequeue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TItem Dequeue();

  /// @brief Method Enqueue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Enqueue(TItem node, TPriority priority);

  /// @brief Method Remove, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Remove(TItem node);

  /// @brief Method UpdatePriority, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdatePriority(TItem node, TPriority priority);

  /// @brief Method get_Count, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_First, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TItem get_First();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPriorityQueue_2(IPriorityQueue_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16946 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::IPriorityQueue_2, "Priority_Queue", "IPriorityQueue`2");
