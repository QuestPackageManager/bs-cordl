#pragma once
// IWYU pragma private; include "Unity/Properties/IIndexedCollectionPropertyBagEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IIndexedCollectionPropertyBagEnumerator_1)
namespace Unity::Properties {
template <typename TContainer> class IProperty_1;
}
namespace Unity::Properties {
struct IndexedCollectionSharedPropertyState;
}
// Forward declare root types
namespace Unity::Properties {
template <typename TContainer> class IIndexedCollectionPropertyBagEnumerator_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1);
// Dependencies
namespace Unity::Properties {
// cpp template
template <typename TContainer>
// Is value type: false
// CS Name: Unity.Properties.IIndexedCollectionPropertyBagEnumerator`1<TContainer>
class CORDL_TYPE IIndexedCollectionPropertyBagEnumerator_1 {
public:
  // Declarations
  /// @brief Method GetCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetCount(::ByRef<TContainer> container);

  /// @brief Method GetSharedProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::IProperty_1<TContainer>* GetSharedProperty();

  /// @brief Method GetSharedPropertyState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Unity::Properties::IndexedCollectionSharedPropertyState GetSharedPropertyState();

  /// @brief Method SetSharedPropertyState, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetSharedPropertyState(::Unity::Properties::IndexedCollectionSharedPropertyState state);

  // Ctor Parameters [CppParam { name: "", ty: "IIndexedCollectionPropertyBagEnumerator_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IIndexedCollectionPropertyBagEnumerator_1(IIndexedCollectionPropertyBagEnumerator_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19345 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::IIndexedCollectionPropertyBagEnumerator_1, "Unity.Properties", "IIndexedCollectionPropertyBagEnumerator`1");
