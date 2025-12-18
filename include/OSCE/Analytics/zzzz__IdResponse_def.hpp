#pragma once
// IWYU pragma private; include "OSCE/Analytics/IdResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(IdResponse)
// Forward declare root types
namespace OSCE::Analytics {
struct IdResponse;
}
// Write type traits
MARK_VAL_T(::OSCE::Analytics::IdResponse);
// Dependencies
namespace OSCE::Analytics {
// Is value type: true
// CS Name: OSCE.Analytics.IdResponse
struct CORDL_TYPE IdResponse {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IdResponse();

  // Ctor Parameters [CppParam { name: "rid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platform_rid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "platform_account_id", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "game_specific_id", ty: "::StringW", modifiers: "", def_value: None }]
  constexpr IdResponse(::StringW rid, ::StringW platform_rid, ::StringW platform_account_id, ::StringW game_specific_id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21716 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field rid, offset: 0x0, size: 0x8, def value: None
  ::StringW rid;

  /// @brief Field platform_rid, offset: 0x8, size: 0x8, def value: None
  ::StringW platform_rid;

  /// @brief Field platform_account_id, offset: 0x10, size: 0x8, def value: None
  ::StringW platform_account_id;

  /// @brief Field game_specific_id, offset: 0x18, size: 0x8, def value: None
  ::StringW game_specific_id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Analytics::IdResponse, rid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::IdResponse, platform_rid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::IdResponse, platform_account_id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OSCE::Analytics::IdResponse, game_specific_id) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Analytics::IdResponse, 0x20>, "Size mismatch!");

} // namespace OSCE::Analytics
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Analytics::IdResponse, "OSCE.Analytics", "IdResponse");
