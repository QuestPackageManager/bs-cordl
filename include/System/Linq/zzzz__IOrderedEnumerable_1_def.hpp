#pragma once
// IWYU pragma private; include "System/Linq/IOrderedEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IOrderedEnumerable_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement> class IOrderedEnumerable_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::IOrderedEnumerable_1);
// Type: System.Linq::IOrderedEnumerable`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: false
// CS Name: ::System.Linq::IOrderedEnumerable`1<TElement>*
class CORDL_TYPE IOrderedEnumerable_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method CreateOrderedEnumerable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TKey>
  inline ::System::Linq::IOrderedEnumerable_1<TElement>* CreateOrderedEnumerable(::System::Func_2<TElement, TKey>* keySelector, ::System::Collections::Generic::IComparer_1<TKey>* comparer,
                                                                                 bool descending);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IOrderedEnumerable_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IOrderedEnumerable_1(IOrderedEnumerable_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IOrderedEnumerable_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IOrderedEnumerable_1(IOrderedEnumerable_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13557 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IOrderedEnumerable_1, "System.Linq", "IOrderedEnumerable`1");
