#pragma once
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
// Type: ::LevelCompletionResultsAnalyticsHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3959))
// CS Name: ::LevelCompletionResultsAnalyticsHelper*
class CORDL_TYPE LevelCompletionResultsAnalyticsHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Method FillEventData, addr 0x22ad468, size 0x800, virtual false, abstract: false, final false
  static inline void FillEventData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* eventData);

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelCompletionResultsAnalyticsHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelCompletionResultsAnalyticsHelper(LevelCompletionResultsAnalyticsHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelCompletionResultsAnalyticsHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelCompletionResultsAnalyticsHelper, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelCompletionResultsAnalyticsHelper*, "", "LevelCompletionResultsAnalyticsHelper");
