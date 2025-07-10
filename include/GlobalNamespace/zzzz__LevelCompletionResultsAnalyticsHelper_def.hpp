#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelCompletionResultsAnalyticsHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(LevelCompletionResultsAnalyticsHelper)
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelCompletionResultsAnalyticsHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LevelCompletionResultsAnalyticsHelper
class CORDL_TYPE LevelCompletionResultsAnalyticsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FillEventData, addr 0x3acb158, size 0x824, virtual false, abstract: false, final false
  static inline void FillEventData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResultsAnalyticsHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3980 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*, "", "LevelCompletionResultsAnalyticsHelper");
