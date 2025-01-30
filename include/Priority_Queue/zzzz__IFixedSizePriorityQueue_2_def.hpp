#pragma once
// IWYU pragma private; include "Priority_Queue/IFixedSizePriorityQueue_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__IPriorityQueue_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IFixedSizePriorityQueue_2)
// Forward declare root types
namespace Priority_Queue {
template <typename TItem, typename TPriority> class IFixedSizePriorityQueue_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::IFixedSizePriorityQueue_2);
// Dependencies Priority_Queue.IPriorityQueue`2<TItem, TPriority>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.IEnumerable
namespace Priority_Queue {
// cpp template
template <typename TItem, typename TPriority>
// Is value type: false
// CS Name: Priority_Queue.IFixedSizePriorityQueue`2<TItem,TPriority>
class CORDL_TYPE IFixedSizePriorityQueue_2 {
public:
  // Declarations
  __declspec(property(get = get_MaxSize)) int32_t MaxSize;

  /// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr operator ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TItem>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method ResetNode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ResetNode(TItem node);

  /// @brief Method Resize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Resize(int32_t maxNodes);

  /// @brief Method get_MaxSize, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_MaxSize();

  /// @brief Convert to "::Priority_Queue::IPriorityQueue_2<TItem,TPriority>"
  constexpr ::Priority_Queue::IPriorityQueue_2<TItem, TPriority>* i___Priority_Queue__IPriorityQueue_2_TItem_TPriority_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TItem>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TItem>* i___System__Collections__Generic__IEnumerable_1_TItem_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IFixedSizePriorityQueue_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFixedSizePriorityQueue_2(IFixedSizePriorityQueue_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::IFixedSizePriorityQueue_2, "Priority_Queue", "IFixedSizePriorityQueue`2");
