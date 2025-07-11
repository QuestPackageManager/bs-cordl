#pragma once
// IWYU pragma private; include "GlobalNamespace/GetXPlatformAccessTokenResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GetXPlatformAccessTokenResponse)
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenResponse;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GetXPlatformAccessTokenResponse);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetXPlatformAccessTokenResponse
class CORDL_TYPE GetXPlatformAccessTokenResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field accessToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_accessToken, put = __cordl_internal_set_accessToken)) ::StringW accessToken;

  static inline ::GlobalNamespace::GetXPlatformAccessTokenResponse* New_ctor(::StringW accessToken);

  constexpr ::StringW const& __cordl_internal_get_accessToken() const;

  constexpr ::StringW& __cordl_internal_get_accessToken();

  constexpr void __cordl_internal_set_accessToken(::StringW value);

  /// @brief Method .ctor, addr 0x4080874, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::StringW accessToken);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetXPlatformAccessTokenResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetXPlatformAccessTokenResponse(GetXPlatformAccessTokenResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetXPlatformAccessTokenResponse(GetXPlatformAccessTokenResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18767 };

  /// @brief Field accessToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___accessToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetXPlatformAccessTokenResponse, ___accessToken) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetXPlatformAccessTokenResponse, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenResponse);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenResponse*, "", "GetXPlatformAccessTokenResponse");
