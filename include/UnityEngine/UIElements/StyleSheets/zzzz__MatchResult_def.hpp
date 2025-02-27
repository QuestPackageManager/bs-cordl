#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheets/MatchResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/StyleSheets/zzzz__MatchResultErrorCode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MatchResult)
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
struct MatchResult;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::StyleSheets::MatchResult);
// Dependencies UnityEngine.UIElements.StyleSheets.MatchResultErrorCode
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: true
// CS Name: UnityEngine.UIElements.StyleSheets.MatchResult
struct CORDL_TYPE MatchResult {
public:
  // Declarations
  __declspec(property(get = get_success)) bool success;

  /// @brief Method get_success, addr 0x49e9098, size 0x10, virtual false, abstract: false, final false
  inline bool get_success();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MatchResult();

  // Ctor Parameters [CppParam { name: "errorCode", ty: "::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode", modifiers: "", def_value: None }, CppParam { name: "errorValue", ty:
  // "::StringW", modifiers: "", def_value: None }]
  constexpr MatchResult(::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode errorCode, ::StringW errorValue) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6468 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field errorCode, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::StyleSheets::MatchResultErrorCode errorCode;

  /// @brief Field errorValue, offset: 0x8, size: 0x8, def value: None
  ::StringW errorValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::MatchResult, errorCode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheets::MatchResult, errorValue) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheets::MatchResult, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::StyleSheets
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheets::MatchResult, "UnityEngine.UIElements.StyleSheets", "MatchResult");
