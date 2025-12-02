#pragma once
// IWYU pragma private; include "Unity/Hierarchy/IHierarchySearchQueryParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHierarchySearchQueryParser)
// Forward declare root types
namespace Unity::Hierarchy {
class IHierarchySearchQueryParser;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Hierarchy::IHierarchySearchQueryParser);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.IHierarchySearchQueryParser
class CORDL_TYPE IHierarchySearchQueryParser {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "IHierarchySearchQueryParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHierarchySearchQueryParser(IHierarchySearchQueryParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::IHierarchySearchQueryParser);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::IHierarchySearchQueryParser*, "Unity.Hierarchy", "IHierarchySearchQueryParser");
