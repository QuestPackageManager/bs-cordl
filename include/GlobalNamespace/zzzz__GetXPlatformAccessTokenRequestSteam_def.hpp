#pragma once
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
// Type: ::GetXPlatformAccessTokenRequestSteam
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15998))
// CS Name: ::GetXPlatformAccessTokenRequestSteam*
class CORDL_TYPE GetXPlatformAccessTokenRequestSteam : public ::System::Object {
public:
  // Declarations
  /// @brief Field platformToken, offset 0x10, size 0x8
  __declspec(property(get = __get_platformToken, put = __set_platformToken))::StringW platformToken;

  /// @brief Field platformUserId, offset 0x18, size 0x8
  __declspec(property(get = __get_platformUserId, put = __set_platformUserId)) int64_t platformUserId;

  constexpr ::StringW& __get_platformToken();

  constexpr ::StringW const& __get_platformToken() const;

  constexpr void __set_platformToken(::StringW value);

  constexpr int64_t& __get_platformUserId();

  constexpr int64_t const& __get_platformUserId() const;

  constexpr void __set_platformUserId(int64_t value);

  static inline ::GlobalNamespace::GetXPlatformAccessTokenRequestSteam* New_ctor(::StringW platformToken, int64_t platformUserId);

  /// @brief Method .ctor addr 0x2800184 size 0x2c virtual false final false
  inline void _ctor(::StringW platformToken, int64_t platformUserId);

  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSteam", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GetXPlatformAccessTokenRequestSteam(GetXPlatformAccessTokenRequestSteam&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GetXPlatformAccessTokenRequestSteam", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GetXPlatformAccessTokenRequestSteam(GetXPlatformAccessTokenRequestSteam const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GetXPlatformAccessTokenRequestSteam();

public:
  /// @brief Field platformToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___platformToken;

  /// @brief Field platformUserId, offset: 0x18, size: 0x8, def value: None
  int64_t ___platformUserId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GetXPlatformAccessTokenRequestSteam, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GetXPlatformAccessTokenRequestSteam*, "", "GetXPlatformAccessTokenRequestSteam");
