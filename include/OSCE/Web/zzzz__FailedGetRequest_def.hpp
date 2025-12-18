#pragma once
// IWYU pragma private; include "OSCE/Web/FailedGetRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FailedGetRequest)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
// Forward declare root types
namespace OSCE::Web {
struct FailedGetRequest;
}
// Write type traits
MARK_VAL_T(::OSCE::Web::FailedGetRequest);
// Dependencies
namespace OSCE::Web {
// Is value type: true
// CS Name: OSCE.Web.FailedGetRequest
struct CORDL_TYPE FailedGetRequest {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr FailedGetRequest();

  // Ctor Parameters [CppParam { name: "Path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Query", ty: "::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*",
  // modifiers: "", def_value: None }, CppParam { name: "AttemptsMade", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FailedGetRequest(::StringW Path, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Query, int32_t AttemptsMade) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21696 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Path, offset: 0x0, size: 0x8, def value: None
  ::StringW Path;

  /// @brief Field Query, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Query;

  /// @brief Field AttemptsMade, offset: 0x10, size: 0x4, def value: None
  int32_t AttemptsMade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OSCE::Web::FailedGetRequest, Path) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::FailedGetRequest, Query) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OSCE::Web::FailedGetRequest, AttemptsMade) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OSCE::Web::FailedGetRequest, 0x18>, "Size mismatch!");

} // namespace OSCE::Web
DEFINE_IL2CPP_ARG_TYPE(::OSCE::Web::FailedGetRequest, "OSCE.Web", "FailedGetRequest");
