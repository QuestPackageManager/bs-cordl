#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockPlatformUserModel)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class XPlatformAccessTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
class IPlatformUserModel;
}
namespace System {
template <typename T> class Action_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformUserModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformUserModel);
// Type: ::MockPlatformUserModel
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15984))
// CS Name: ::MockPlatformUserModel*
class CORDL_TYPE MockPlatformUserModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field platformUserInfoDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_platformUserInfoDidChangeEvent, put = __set_platformUserInfoDidChangeEvent))::System::Action_1<::GlobalNamespace::UserInfo*>* platformUserInfoDidChangeEvent;

  __declspec(property(get = get_CanXPlatformAccessTokenBeCached)) bool CanXPlatformAccessTokenBeCached;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
  constexpr operator ::GlobalNamespace::IPlatformUserModel*() noexcept;

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& __get_platformUserInfoDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::UserInfo*>*> const& __get_platformUserInfoDidChangeEvent() const;

  constexpr void __set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method add_platformUserInfoDidChangeEvent addr 0x27fde9c size 0xb0 virtual true final true
  inline void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method remove_platformUserInfoDidChangeEvent addr 0x27fdf4c size 0xb0 virtual true final true
  inline void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method get_CanXPlatformAccessTokenBeCached addr 0x27fdffc size 0x8 virtual true final true
  inline bool get_CanXPlatformAccessTokenBeCached();

  /// @brief Method GetUserInfo addr 0x27fe004 size 0xd8 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserFriendsUserIds addr 0x27fe118 size 0xe0 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);

  /// @brief Method GetUserAuthToken addr 0x27fe1f8 size 0xc0 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();

  /// @brief Method GetUserNamesForUserIds addr 0x27fe2b8 size 0x6c virtual true final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);

  /// @brief Method RequestXPlatformAccessToken addr 0x27fe324 size 0xb4 virtual true final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  static inline ::GlobalNamespace::MockPlatformUserModel* New_ctor();

  /// @brief Method .ctor addr 0x27fe3d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformUserModel(MockPlatformUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformUserModel(MockPlatformUserModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformUserModel();

public:
  /// @brief Field platformUserInfoDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::UserInfo*>* ___platformUserInfoDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformUserModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformUserModel*, "", "MockPlatformUserModel");
