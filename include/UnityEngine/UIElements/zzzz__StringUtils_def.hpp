#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StringUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(StringUtils)
// Forward declare root types
namespace UnityEngine::UIElements {
class StringUtils;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::StringUtils*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::StringUtils*, "UnityEngine.UIElements", "StringUtils");
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.StringUtils
class CORDL_TYPE StringUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method StartsWith, addr 0x7279550, size 0xb8, virtual false, abstract: false, final false
  static inline bool StartsWith(::StringW originalString, ::StringW pattern);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringUtils(StringUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringUtils", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringUtils(StringUtils const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4736 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::StringUtils) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
