#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaberAPI/DataTransferObjects/zzzz__PlatformEnviroment_def.hpp"
#include "BeatSaberAPI/DataTransferObjects/zzzz__UserPlatform_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserAuthenticationData)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class UserAuthenticationData;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData);
// Type: BeatSaberAPI.DataTransferObjects::UserAuthenticationData
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6186)), TypeDefinitionIndex(TypeDefinitionIndex(6185)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6187))
// CS Name: ::BeatSaberAPI.DataTransferObjects::UserAuthenticationData*
class CORDL_TYPE UserAuthenticationData : public ::System::Object {
public:
  // Declarations
  /// @brief Field userPlatform, offset 0x10, size 0x1
  __declspec(property(get = __get_userPlatform, put = __set_userPlatform))::BeatSaberAPI::DataTransferObjects::UserPlatform userPlatform;

  /// @brief Field platformEnviroment, offset 0x11, size 0x1
  __declspec(property(get = __get_platformEnviroment, put = __set_platformEnviroment))::BeatSaberAPI::DataTransferObjects::PlatformEnviroment platformEnviroment;

  /// @brief Field platformUserId, offset 0x18, size 0x8
  __declspec(property(get = __get_platformUserId, put = __set_platformUserId))::StringW platformUserId;

  /// @brief Field platformAuthToken, offset 0x20, size 0x8
  __declspec(property(get = __get_platformAuthToken, put = __set_platformAuthToken))::StringW platformAuthToken;

  /// @brief Field bsAuthToken, offset 0x28, size 0x8
  __declspec(property(get = __get_bsAuthToken, put = __set_bsAuthToken))::StringW bsAuthToken;

  /// @brief Field gameBuildVersion, offset 0x30, size 0x8
  __declspec(property(get = __get_gameBuildVersion, put = __set_gameBuildVersion))::StringW gameBuildVersion;

  /// @brief Field publicUserDisplayName, offset 0x38, size 0x8
  __declspec(property(get = __get_publicUserDisplayName, put = __set_publicUserDisplayName))::StringW publicUserDisplayName;

  constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform& __get_userPlatform();

  constexpr ::BeatSaberAPI::DataTransferObjects::UserPlatform const& __get_userPlatform() const;

  constexpr void __set_userPlatform(::BeatSaberAPI::DataTransferObjects::UserPlatform value);

  constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment& __get_platformEnviroment();

  constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment const& __get_platformEnviroment() const;

  constexpr void __set_platformEnviroment(::BeatSaberAPI::DataTransferObjects::PlatformEnviroment value);

  constexpr ::StringW& __get_platformUserId();

  constexpr ::StringW const& __get_platformUserId() const;

  constexpr void __set_platformUserId(::StringW value);

  constexpr ::StringW& __get_platformAuthToken();

  constexpr ::StringW const& __get_platformAuthToken() const;

  constexpr void __set_platformAuthToken(::StringW value);

  constexpr ::StringW& __get_bsAuthToken();

  constexpr ::StringW const& __get_bsAuthToken() const;

  constexpr void __set_bsAuthToken(::StringW value);

  constexpr ::StringW& __get_gameBuildVersion();

  constexpr ::StringW const& __get_gameBuildVersion() const;

  constexpr void __set_gameBuildVersion(::StringW value);

  constexpr ::StringW& __get_publicUserDisplayName();

  constexpr ::StringW const& __get_publicUserDisplayName() const;

  constexpr void __set_publicUserDisplayName(::StringW value);

  static inline ::BeatSaberAPI::DataTransferObjects::UserAuthenticationData* New_ctor();

  /// @brief Method .ctor addr 0x21e8b04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UserAuthenticationData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserAuthenticationData(UserAuthenticationData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserAuthenticationData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserAuthenticationData(UserAuthenticationData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserAuthenticationData();

public:
  /// @brief Field userPlatform, offset: 0x10, size: 0x1, def value: None
  ::BeatSaberAPI::DataTransferObjects::UserPlatform ___userPlatform;

  /// @brief Field platformEnviroment, offset: 0x11, size: 0x1, def value: None
  ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment ___platformEnviroment;

  /// @brief Field platformUserId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___platformUserId;

  /// @brief Field platformAuthToken, offset: 0x20, size: 0x8, def value: None
  ::StringW ___platformAuthToken;

  /// @brief Field bsAuthToken, offset: 0x28, size: 0x8, def value: None
  ::StringW ___bsAuthToken;

  /// @brief Field gameBuildVersion, offset: 0x30, size: 0x8, def value: None
  ::StringW ___gameBuildVersion;

  /// @brief Field publicUserDisplayName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___publicUserDisplayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, 0x40>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, ___userPlatform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, ___platformEnviroment) == 0x11, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, ___platformUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, ___platformAuthToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, ___bsAuthToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, ___gameBuildVersion) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData, ___publicUserDisplayName) == 0x38, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::UserAuthenticationData*, "BeatSaberAPI.DataTransferObjects", "UserAuthenticationData");
