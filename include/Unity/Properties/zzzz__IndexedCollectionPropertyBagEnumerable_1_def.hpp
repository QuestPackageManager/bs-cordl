#pragma once
// IWYU pragma private; include "Unity/Properties/IndexedCollectionPropertyBagEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(IndexedCollectionPropertyBagEnumerable_1)
namespace Unity::Properties {
template <typename TContainer> class IIndexedCollectionPropertyBagEnumerator_1;
}
namespace Unity::Properties {
template <typename TContainer> struct IndexedCollectionPropertyBagEnumerator_1;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> struct IndexedCollectionPropertyBagEnumerable_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: true
// CS Name: Unity.Properties.IndexedCollectionPropertyBagEnumerable`1<TContainer>
struct CORDL_TYPE IndexedCollectionPropertyBagEnumerable_1 {
public:
  // Declarations
  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Unity::Properties::IndexedCollectionPropertyBagEnumerator_1<TContainer> GetEnumerator();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* impl, TContainer container);

  // Ctor Parameters []
  // @brief default ctor
  constexpr IndexedCollectionPropertyBagEnumerable_1();

  // Ctor Parameters [CppParam { name: "m_Impl", ty: "::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>*", modifiers: "", def_value: None }, CppParam { name: "m_Container",
  // ty: "TContainer", modifiers: "", def_value: None }]
  constexpr IndexedCollectionPropertyBagEnumerable_1(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* m_Impl, TContainer m_Container) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19369 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Impl, offset: 0x0, size: 0x8, def value: None
  ::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1<TContainer>* m_Impl;

  /// @brief Field m_Container, offset: 0x8, size: 0x8, def value: None
  TContainer m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Properties::IndexedCollectionPropertyBagEnumerable_1, "Unity.Properties", "IndexedCollectionPropertyBagEnumerable`1");
