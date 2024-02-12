#pragma once
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
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Priority_Queue {
// cpp template
template <typename TItem>
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15231)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15231), inst: 3748 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15232))
// CS Name: ::Priority_Queue::SimplePriorityQueue`1<TItem>*
class CORDL_TYPE SimplePriorityQueue_1 : public ::Priority_Queue::SimplePriorityQueue_2<TItem, float_t> {
public:
  // Declarations
  static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IComparer_1<float_t>* comparer);

  static inline ::Priority_Queue::SimplePriorityQueue_1<TItem>* New_ctor(::System::Comparison_1<float_t>* comparer);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Comparison_1<float_t>* comparer);

  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SimplePriorityQueue_1(SimplePriorityQueue_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SimplePriorityQueue_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SimplePriorityQueue_1(SimplePriorityQueue_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SimplePriorityQueue_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Priority_Queue
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Priority_Queue::SimplePriorityQueue_1, "Priority_Queue", "SimplePriorityQueue`1");
