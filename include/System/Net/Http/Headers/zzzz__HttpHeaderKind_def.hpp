#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/HttpHeaderKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpHeaderKind)
// Forward declare root types
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::Headers::HttpHeaderKind);
// Dependencies
namespace System::Net::Http::Headers {
// Is value type: true
// CS Name: System.Net.Http.Headers.HttpHeaderKind
struct CORDL_TYPE HttpHeaderKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HttpHeaderKind_Unwrapped
  enum struct __HttpHeaderKind_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Request = static_cast<int32_t>(0x1),
    __E_Response = static_cast<int32_t>(0x2),
    __E_Content = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HttpHeaderKind_Unwrapped() const noexcept {
    return static_cast<__HttpHeaderKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpHeaderKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HttpHeaderKind(int32_t value__) noexcept;

  /// @brief Field Content value: I32(4)
  static ::System::Net::Http::Headers::HttpHeaderKind const Content;

  /// @brief Field None value: I32(0)
  static ::System::Net::Http::Headers::HttpHeaderKind const None;

  /// @brief Field Request value: I32(1)
  static ::System::Net::Http::Headers::HttpHeaderKind const Request;

  /// @brief Field Response value: I32(2)
  static ::System::Net::Http::Headers::HttpHeaderKind const Response;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16711 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::Http::Headers::HttpHeaderKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::HttpHeaderKind, 0x4>, "Size mismatch!");

} // namespace System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpHeaderKind, "System.Net.Http.Headers", "HttpHeaderKind");
