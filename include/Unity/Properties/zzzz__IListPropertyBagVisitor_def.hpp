#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
CORDL_MODULE_EXPORT(IListPropertyBagVisitor)
namespace Unity::Properties {
template <typename TList, typename TElement>
  requires(::cordl_internals::type_constraint<TList, ::System::Collections::Generic::IList_1<TElement>*>)
class IListPropertyBag_2;
}
// Forward declare root types
namespace Unity::Properties {
class IListPropertyBagVisitor;
}
// Write type traits
MARK_REF_T(::Unity::Properties::IListPropertyBagVisitor*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::IListPropertyBagVisitor*, "Unity.Properties", "IListPropertyBagVisitor");
// Dependencies System.Collections.Generic.IList`1<T>
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IListPropertyBagVisitor
class CORDL_TYPE IListPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TList, typename TElement>
    requires(::cordl_internals::type_constraint<TList, ::System::Collections::Generic::IList_1<TElement>*>)
  inline void Visit(::Unity::Properties::IListPropertyBag_2<TList, TElement>* properties, ::by_ref<TList> container);

  // Ctor Parameters [CppParam { name: "", ty: "IListPropertyBagVisitor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListPropertyBagVisitor(IListPropertyBagVisitorconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19683 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
