#pragma once
// IWYU pragma private; include "Unity/Properties/IPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPropertyBagVisitor)
namespace Unity::Properties {
template <typename TContainer> class IPropertyBag_1;
}
// Forward declare root types
namespace Unity::Properties {
class IPropertyBagVisitor;
}
// Write type traits
MARK_REF_T(::Unity::Properties::IPropertyBagVisitor*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::IPropertyBagVisitor*, "Unity.Properties", "IPropertyBagVisitor");
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.IPropertyBagVisitor
class CORDL_TYPE IPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer> inline void Visit(::Unity::Properties::IPropertyBag_1<TContainer>* properties, ::by_ref<TContainer> container);

  // Ctor Parameters [CppParam { name: "", ty: "IPropertyBagVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPropertyBagVisitor(IPropertyBagVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
