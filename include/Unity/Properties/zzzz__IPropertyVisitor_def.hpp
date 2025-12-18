#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyVisitor)
namespace Unity::Properties {
template <typename TContainer, typename TValue> class Property_2;
}
// Forward declare root types
namespace Unity::Properties {
class IPropertyVisitor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IPropertyVisitor);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IPropertyVisitor
class CORDL_TYPE IPropertyVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer, typename TValue> inline void Visit(::Unity::Properties::Property_2<TContainer, TValue>* property, ::ByRef<TContainer> container);

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyVisitor(IPropertyVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19404 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::IPropertyVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IPropertyVisitor*, "Unity.Properties", "IPropertyVisitor");
