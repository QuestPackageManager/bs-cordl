#pragma once
// IWYU pragma private; include "GlobalNamespace/GetXPlatformAccessTokenRequestSteam.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetXPlatformAccessTokenRequestSteam)
// Forward declare root types
namespace GlobalNamespace {
class GetXPlatformAccessTokenRequestSteam;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GetXPlatformAccessTokenRequestSteam
class CORDL_TYPE GetXPlatformAccessTokenRequestSteam : public ::System::Object {
public:
  // Declarations
  /// @brief Field platformToken, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_platformToken, put = __cordl_internal_set_platformToken)) ::StringW platformToken;

  /// @brief Field platformUserId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_platformUserId, put = __cordl_internal_set_platformUserId)) int64_t platformUserId;

  static inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSteam* New_ctor(::StringW platformToken, int64_t platformUserId);

  constexpr ::StringW const& __cordl_internal_get_platformToken() const;

  constexpr ::StringW& __cordl_internal_get_platformToken();

  constexpr int64_t const& __cordl_internal_get_platformUserId() const;

  constexpr int64_t& __cordl_internal_get_platformUserId();

  constexpr void __cordl_internal_set_platformToken(::StringW value);

  constexpr void __cordl_internal_set_platformUserId(int64_t value);

  /// @brief Method .ctor, addr 0x4080848, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW platformToken, int64_t platformUserId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetXPlatformAccessTokenRequestSteam();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSteam", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetXPlatformAccessTokenRequestSteam(GetXPlatformAccessTokenRequestSteam&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSteam", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetXPlatformAccessTokenRequestSteam(GetXPlatformAccessTokenRequestSteam const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18766 };

  /// @brief Field platformToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___platformToken;

  /// @brief Field platformUserId, offset: 0x18, size: 0x8, def value: None
  int64_t ___platformUserId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam, ___platformToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam, ___platformUserId) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*, "", "GetXPlatformAccessTokenRequestSteam");
