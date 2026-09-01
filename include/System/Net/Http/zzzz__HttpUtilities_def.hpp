#pragma once
// IWYU pragma private; include "System\Net\Http\HttpUtilities.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpUtilities)
// Forward declare root types
namespace System::Net::Http {
class HttpUtilities;
}
// Write type traits
MARK_REF_T(::System::Net::Http::HttpUtilities*);
DEFINE_IL2CPP_CLASS(::System::Net::Http::HttpUtilities*, "System.Net.Http", "HttpUtilities");
// Dependencies System.Object
namespace System::Net::Http {
// Is value type: false
// CS Name: System.Net.Http.HttpUtilities
class CORDL_TYPE HttpUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsSecureWebSocketScheme, addr 0x60d6378, size 0x54, virtual false, abstract: false, final false
  static inline bool IsSecureWebSocketScheme(::StringW scheme);

  /// @brief Method IsSupportedSecureScheme, addr 0x60d6308, size 0x70, virtual false, abstract: false, final false
  static inline bool IsSupportedSecureScheme(::StringW scheme);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HttpUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpUtilities(HttpUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpUtilities(HttpUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20260 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Http::HttpUtilities) == 0x10, "Size mismatch!");

} // namespace System::Net::Http
