#pragma once
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
// Type: System.Linq::IGrouping`2
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq {
// cpp template
template <typename TKey, typename TElement>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14282))
// CS Name: ::System.Linq::IGrouping`2<TKey,TElement>*
class CORDL_TYPE IGrouping_2 {
public:
  // Declarations
  __declspec(property(get = get_Key)) TKey Key;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TElement>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<TElement>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method get_Key, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline TKey get_Key();

  // Ctor Parameters [CppParam { name: "", ty: "IGrouping_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGrouping_2(IGrouping_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGrouping_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGrouping_2(IGrouping_2 const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IGrouping_2, "System.Linq", "IGrouping`2");
