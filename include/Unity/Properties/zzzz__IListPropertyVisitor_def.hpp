#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyVisitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
CORDL_MODULE_EXPORT(IListPropertyVisitor)
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Forward declare root types
namespace Unity::Properties {
class IListPropertyVisitor;
}
// Write type traits
MARK_REF_T(::Unity::Properties::IListPropertyVisitor*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::IListPropertyVisitor*, "Unity.Properties", "IListPropertyVisitor");
// Dependencies System.Collections.Generic.IList`1<T>
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IListPropertyVisitor
class CORDL_TYPE IListPropertyVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename TContainer, typename TList, typename TElement>
    requires(::cordl_internals::type_constraint<TList, ::System::Collections::Generic::IList_1<TElement>*>)
  inline void Visit(::Unity::Properties::Property_2<TContainer, TList>* property, ::by_ref<TContainer> container, ::by_ref<TList> list);

  // Ctor Parameters [CppParam { name: "", ty: "IListPropertyVisitor", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListPropertyVisitor(IListPropertyVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
