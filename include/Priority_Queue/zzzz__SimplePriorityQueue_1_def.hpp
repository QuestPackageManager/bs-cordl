#pragma once
// IWYU pragma private; include "Priority_Queue/SimplePriorityQueue_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Priority_Queue/zzzz__SimplePriorityQueue_2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SimplePriorityQueue_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System {
template <typename T> class Comparison_1;
}
// Forward declare root types
namespace Priority_Queue {
template <typename TItem> class SimplePriorityQueue_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Priority_Queue::SimplePriorityQueue_1);
// Type: Priority_Queue::SimplePriorityQueue`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TItem>
// Is value type: false
// CS Name: ::Priority_Queue::SimplePriorityQueue`1<TItem>*
class CORDL_TYPE SimplePriorityQueue_1 : public ::Priority_Queue::SimplePriorityQueue_2<TItem, float_t> {
public:
  // Declarations
  static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor();

  static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer);

  static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor(::System::Comparison_1<float_t>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Comparison_1<float_t>* comparer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimplePriorityQueue_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimplePriorityQueue_1(SimplePriorityQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimplePriorityQueue_1(SimplePriorityQueue_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16892 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::SimplePriorityQueue_1, "Priority_Queue", "SimplePriorityQueue`1");
