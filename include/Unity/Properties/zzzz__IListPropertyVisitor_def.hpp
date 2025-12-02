#pragma once
// IWYU pragma private; include "Unity/Properties/IListPropertyVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IListPropertyVisitor)
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Forward declare root types
namespace Unity::Properties {
class IListPropertyVisitor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IListPropertyVisitor);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IListPropertyVisitor
class CORDL_TYPE IListPropertyVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer, typename TList, typename TElement> inline void Visit(::Unity::Properties::Property_2<TContainer, TList>* property, ::ByRef<TContainer> container, ::ByRef<TList> list);

  // Ctor Parameters [CppParam { name: "", ty: "IListPropertyVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IListPropertyVisitor(IListPropertyVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19379 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IListPropertyVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IListPropertyVisitor*, "Unity.Properties", "IListPropertyVisitor");
