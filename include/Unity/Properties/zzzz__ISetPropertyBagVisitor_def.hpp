#pragma once
// IWYU pragma private; include "Unity/Properties/ISetPropertyBagVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISetPropertyBagVisitor)
namespace Unity::Properties {
template <typename TSet, typename TElement> class ISetPropertyBag_2;
}
// Forward declare root types
namespace Unity::Properties {
class ISetPropertyBagVisitor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::ISetPropertyBagVisitor);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ISetPropertyBagVisitor
class CORDL_TYPE ISetPropertyBagVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TSet, typename TValue> inline void Visit(::Unity::Properties::ISetPropertyBag_2<TSet, TValue>* properties, ::ByRef<TSet> container);

  // Ctor Parameters [CppParam { name: "", ty: "ISetPropertyBagVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISetPropertyBagVisitor(ISetPropertyBagVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::ISetPropertyBagVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::ISetPropertyBagVisitor*, "Unity.Properties", "ISetPropertyBagVisitor");
