#pragma once
// IWYU pragma private; include "Unity/Properties/ITypeVisitor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITypeVisitor)
// Forward declare root types
namespace Unity::Properties {
class ITypeVisitor;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::ITypeVisitor);
// Dependencies
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ITypeVisitor
class CORDL_TYPE ITypeVisitor {
public:
  // Declarations
  /// @brief Method Visit, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  template <typename TContainer> inline void Visit();

  // Ctor Parameters [CppParam { name: "", ty: "ITypeVisitor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITypeVisitor(ITypeVisitor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19398 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::ITypeVisitor);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::ITypeVisitor*, "Unity.Properties", "ITypeVisitor");
