#pragma once
// IWYU pragma private; include "System/Linq/IGrouping_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGrouping_2)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Linq {
template <typename TKey, typename TElement> class IGrouping_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Linq::IGrouping_2);
// Dependencies
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// CS Name: System.Linq.IGrouping`2<TKey,TElement>
class CORDL_TYPE IGrouping_2 {
public:
  // Declarations
  __declspec(property(get = get_Key)) TKey Key;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_Key, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline TKey get_Key();

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr ::System::Collections::Generic::IEnumerable_1<TElement>* i___System__Collections__Generic__IEnumerable_1_TElement_() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IGrouping_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGrouping_2(IGrouping_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16058 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IGrouping_2, "System.Linq", "IGrouping`2");
