#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UserInfo)
// Forward declare root types
namespace BeatSaberAPI::DataTransferObjects {
class UserInfo;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaberAPI::DataTransferObjects::UserInfo);
// Type: BeatSaberAPI.DataTransferObjects::UserInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaberAPI::DataTransferObjects {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6190))
// CS Name: ::BeatSaberAPI.DataTransferObjects::UserInfo*
class CORDL_TYPE UserInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field platformUserId, offset 0x10, size 0x8
  __declspec(property(get = __get_platformUserId, put = __set_platformUserId))::StringW platformUserId;

  /// @brief Field publicPlatformDisplayName, offset 0x18, size 0x8
  __declspec(property(get = __get_publicPlatformDisplayName, put = __set_publicPlatformDisplayName))::StringW publicPlatformDisplayName;

  constexpr ::StringW& __get_platformUserId();

  constexpr ::StringW const& __get_platformUserId() const;

  constexpr void __set_platformUserId(::StringW value);

  constexpr ::StringW& __get_publicPlatformDisplayName();

  constexpr ::StringW const& __get_publicPlatformDisplayName() const;

  constexpr void __set_publicPlatformDisplayName(::StringW value);

  static inline ::BeatSaberAPI::DataTransferObjects::UserInfo* New_ctor();

  /// @brief Method .ctor addr 0x21e8b1c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserInfo(UserInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserInfo(UserInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserInfo();

public:
  /// @brief Field platformUserId, offset: 0x10, size: 0x8, def value: None
  ::StringW ___platformUserId;

  /// @brief Field publicPlatformDisplayName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___publicPlatformDisplayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaberAPI::DataTransferObjects::UserInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserInfo, ___platformUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaberAPI::DataTransferObjects::UserInfo, ___publicPlatformDisplayName) == 0x18, "Offset mismatch!");

} // namespace BeatSaberAPI::DataTransferObjects
NEED_NO_BOX(::BeatSaberAPI::DataTransferObjects::UserInfo);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaberAPI::DataTransferObjects::UserInfo*, "BeatSaberAPI.DataTransferObjects", "UserInfo");
