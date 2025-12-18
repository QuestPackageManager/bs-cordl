#pragma once
// IWYU pragma private; include "GlobalNamespace/AnalyticsPostResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AnalyticsPostResponse)
// Forward declare root types
namespace GlobalNamespace {
struct AnalyticsPostResponse;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AnalyticsPostResponse);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AnalyticsPostResponse
struct CORDL_TYPE AnalyticsPostResponse {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnalyticsPostResponse();

  // Ctor Parameters [CppParam { name: "success", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "error_message", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr AnalyticsPostResponse(bool success, ::StringW error_message) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field success, offset: 0x0, size: 0x1, def value: None
  bool success;

  /// @brief Field error_message, offset: 0x8, size: 0x8, def value: None
  ::StringW error_message;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AnalyticsPostResponse, success) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnalyticsPostResponse, error_message) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnalyticsPostResponse, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnalyticsPostResponse, "", "AnalyticsPostResponse");
