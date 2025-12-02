#pragma once
// IWYU pragma private; include "OSCE/Web/FailedPostRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FailedPostRequest)
namespace OSCE::Analytics {
class LoggerAnalyticsBatch;
}
// Forward declare root types
namespace OSCE::Web {
struct FailedPostRequest;
}
// Write type traits
MARK_VAL_T(::OSCE::Web::FailedPostRequest);
// Dependencies
namespace OSCE::Web {
// Is value type: true
// CS Name: OSCE.Web.FailedPostRequest
struct CORDL_TYPE FailedPostRequest {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FailedPostRequest();

  // Ctor Parameters [CppParam { name: "Path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Json", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "ErrorMessage", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "AttemptsMade", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Batch", ty:
  // "::OSCE::Analytics::LoggerAnalyticsBatch*", modifiers: "", def_value: None }]
  constexpr FailedPostRequest(::StringW Path, ::StringW Json, ::StringW ErrorMessage, int32_t AttemptsMade, ::OSCE::Analytics::LoggerAnalyticsBatch* Batch) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field Path, offset: 0x0, size: 0x8, def value: None
  ::StringW Path;

  /// @brief Field Json, offset: 0x8, size: 0x8, def value: None
  ::StringW Json;

  /// @brief Field ErrorMessage, offset: 0x10, size: 0x8, def value: None
  ::StringW ErrorMessage;

  /// @brief Field AttemptsMade, offset: 0x18, size: 0x4, def value: None
  int32_t AttemptsMade;

  /// @brief Field Batch, offset: 0x20, size: 0x8, def value: None
  ::OSCE::Analytics::LoggerAnalyticsBatch* Batch;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::FailedPostRequest, Path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::FailedPostRequest, Json) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::FailedPostRequest, ErrorMessage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::FailedPostRequest, AttemptsMade) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::FailedPostRequest, Batch) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::FailedPostRequest, 0x28>, "Size mismatch!");

} // namespace OSCE::Web
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::FailedPostRequest, "OSCE.Web", "FailedPostRequest");
