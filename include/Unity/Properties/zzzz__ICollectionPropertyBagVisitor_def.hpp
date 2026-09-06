#pragma once
// IWYU pragma private; include "Unity/Properties/ICollectionPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
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
// Dependencies System.Collections.Generic.ICollection`1<T>
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ICollectionPropertyBagVisitor
class CORDL_TYPE ICollectionPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TCollection, typename TElement>
    requires(::cordl_internals::type_constraint<TCollection, ::System::Collections::Generic::ICollection_1<TElement>*>)
  inline void Visit(::Unity::Properties::ICollectionPropertyBag_2<TCollection, TElement>* properties, ::by_ref<TCollection> container);

  // Ctor Parameters [CppParam { name: "", ty: "ICollectionPropertyBagVisitor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICollectionPropertyBagVisitor(ICollectionPropertyBagVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
