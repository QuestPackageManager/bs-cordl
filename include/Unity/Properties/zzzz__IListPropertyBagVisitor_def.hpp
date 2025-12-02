#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListPropertyBagVisitor)
namespace Unity::Properties {
template <typename TList, typename TElement> class IListPropertyBag_2;
}
// Forward declare root types
namespace Unity::Properties {
class IListPropertyBagVisitor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IListPropertyBagVisitor);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IListPropertyBagVisitor
class CORDL_TYPE IListPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TList, typename TElement> inline void Visit(::Unity::Properties::IListPropertyBag_2<TList, TElement>* properties, ::ByRef<TList> container);

  // Ctor Parameters [CppParam { name: "", ty: "IListPropertyBagVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListPropertyBagVisitor(IListPropertyBagVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19375 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IListPropertyBagVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IListPropertyBagVisitor*, "Unity.Properties", "IListPropertyBagVisitor");
