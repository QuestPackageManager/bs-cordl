#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AccessToken)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class AccessToken;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::AccessToken);
// Type: BeatSaberAPI.DataTransferObjects::AccessToken
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6189))
// CS Name: ::BeatSaberAPI.DataTransferObjects::AccessToken*
class CORDL_TYPE AccessToken : public ::System::Object {
public:
  // Declarations
  /// @brief Field token, offset 0x10, size 0x8
  __declspec(property(get = __get_token, put = __set_token))::StringW token;

  /// @brief Field expiration, offset 0x18, size 0x8
  __declspec(property(get = __get_expiration, put = __set_expiration))::StringW expiration;

  constexpr ::StringW& __get_token();

  constexpr ::StringW const& __get_token() const;

  constexpr void __set_token(::StringW value);

  constexpr ::StringW& __get_expiration();

  constexpr ::StringW const& __get_expiration() const;

  constexpr void __set_expiration(::StringW value);

  static inline ::BeatSaberAPI::DataTransferObjects::AccessToken* New_ctor();

  /// @brief Method .ctor addr 0x21e8b14 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "AccessToken", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AccessToken(AccessToken&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AccessToken", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AccessToken(AccessToken const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AccessToken();

public:
  /// @brief Field token, offset: 0x10, size: 0x8, def value: None
  ::StringW ___token;

  /// @brief Field expiration, offset: 0x18, size: 0x8, def value: None
  ::StringW ___expiration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::AccessToken, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::AccessToken, ___token) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::AccessToken, ___expiration) == 0x18, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::AccessToken);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::AccessToken*, "BeatSaberAPI.DataTransferObjects", "AccessToken");
