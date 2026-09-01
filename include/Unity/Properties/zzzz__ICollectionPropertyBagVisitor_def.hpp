#pragma once
// IWYU pragma private; include "Unity\Properties\ICollectionPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ICollectionPropertyBagVisitor)
namespace Unity::Properties {
template <typename TCollection, typename TElement> class ICollectionPropertyBag_2;
}
// Forward declare root types
namespace Unity::Properties {
class ICollectionPropertyBagVisitor;
}
// Write type traits
MARK_REF_T(::Unity::Properties::ICollectionPropertyBagVisitor*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::ICollectionPropertyBagVisitor*, "Unity.Properties", "ICollectionPropertyBagVisitor");
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ICollectionPropertyBagVisitor
class CORDL_TYPE ICollectionPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TCollection, typename TElement> inline void Visit(::Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>* properties, ::by_ref<TCollection> container);

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionPropertyBagVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICollectionPropertyBagVisitor(ICollectionPropertyBagVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
