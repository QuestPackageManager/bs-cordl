#pragma once
// IWYU pragma private; include "Unity/Hierarchy/DefaultHierarchySearchQueryParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultHierarchySearchQueryParser)
namespace System::Text::RegularExpressions {
class Regex;
}
namespace Unity::Hierarchy {
class IHierarchySearchQueryParser;
}
// Forward declare root types
namespace Unity::Hierarchy {
class DefaultHierarchySearchQueryParser;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Hierarchy::DefaultHierarchySearchQueryParser);
// Dependencies System.Object
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.DefaultHierarchySearchQueryParser
class CORDL_TYPE DefaultHierarchySearchQueryParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Filter, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Filter, put = setStaticF_s_Filter)) ::System::Text::RegularExpressions::Regex* s_Filter;

  /// @brief Convert operator to "::Unity::Hierarchy::IHierarchySearchQueryParser"
  constexpr operator ::Unity::Hierarchy::IHierarchySearchQueryParser*() noexcept;

  static inline ::Unity::Hierarchy::DefaultHierarchySearchQueryParser* New_ctor();

  /// @brief Method .ctor, addr 0x6903e24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_s_Filter();

  /// @brief Convert to "::Unity::Hierarchy::IHierarchySearchQueryParser"
  constexpr ::Unity::Hierarchy::IHierarchySearchQueryParser* i___Unity__Hierarchy__IHierarchySearchQueryParser() noexcept;

  static inline void setStaticF_s_Filter(::System::Text::RegularExpressions::Regex* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultHierarchySearchQueryParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultHierarchySearchQueryParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultHierarchySearchQueryParser(DefaultHierarchySearchQueryParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultHierarchySearchQueryParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultHierarchySearchQueryParser(DefaultHierarchySearchQueryParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21716 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::DefaultHierarchySearchQueryParser, 0x10>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::DefaultHierarchySearchQueryParser);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::DefaultHierarchySearchQueryParser*, "Unity.Hierarchy", "DefaultHierarchySearchQueryParser");
