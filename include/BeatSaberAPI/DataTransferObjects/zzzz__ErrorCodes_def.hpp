#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ErrorCodes)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class ErrorCodes;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::ErrorCodes);
// Type: BeatSaberAPI.DataTransferObjects::ErrorCodes
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6177))
// CS Name: ::BeatSaberAPI.DataTransferObjects::ErrorCodes*
class CORDL_TYPE ErrorCodes : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "ErrorCodes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorCodes(ErrorCodes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorCodes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorCodes(ErrorCodes const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorCodes();

public:
  /// @brief Field kUserVerificationError offset 0xffffffff size 0x8
  static constexpr ::ConstString kUserVerificationError{ u"USER_VERIFICATION_ERROR" };

  /// @brief Field kUserRegistrationError offset 0xffffffff size 0x8
  static constexpr ::ConstString kUserRegistrationError{ u"USER_REGISTRATION_ERROR" };

  /// @brief Field kCreateAccessTokenError offset 0xffffffff size 0x8
  static constexpr ::ConstString kCreateAccessTokenError{ u"CREATE_ACCESS_TOKEN_ERROR" };

  /// @brief Field kLeaderboardNotFound offset 0xffffffff size 0x8
  static constexpr ::ConstString kLeaderboardNotFound{ u"LEADERBOARD_NOT_FOUND" };

  /// @brief Field kWrongInput offset 0xffffffff size 0x8
  static constexpr ::ConstString kWrongInput{ u"WRONG_INPUT" };

  /// @brief Field kLoginError offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoginError{ u"LOGIN_ERROR" };

  /// @brief Field kTokenError offset 0xffffffff size 0x8
  static constexpr ::ConstString kTokenError{ u"TOKEN_ERROR" };

  /// @brief Field kLoginTimeOut offset 0xffffffff size 0x8
  static constexpr ::ConstString kLoginTimeOut{ u"LOGIN_TIME_OUT" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::ErrorCodes, 0x10>, "Size mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::ErrorCodes);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::ErrorCodes*, "BeatSaberAPI.DataTransferObjects", "ErrorCodes");
