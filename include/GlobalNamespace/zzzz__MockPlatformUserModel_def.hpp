#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlatformUserModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MockPlatformUserModel)
namespace BGLib::Polyglot {
struct Language;
}
namespace GlobalNamespace {
class PlatformUserAuthTokenData;
}
namespace GlobalNamespace {
class UserInfo;
}
namespace GlobalNamespace {
struct XPlatformAccessTokenData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPlatformUserModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockPlatformUserModel);
// Dependencies IPlatformUserModel, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MockPlatformUserModel
class CORDL_TYPE MockPlatformUserModel : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanXPlatformAccessTokenBeCached)) bool CanXPlatformAccessTokenBeCached;

  /// @brief Field platformUserInfoDidChangeEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_platformUserInfoDidChangeEvent,
                      put = __cordl_internal_set_platformUserInfoDidChangeEvent)) ::System::Action_1<::GlobalNamespace::UserInfo*>* platformUserInfoDidChangeEvent;

  /// @brief Convert operator to "::GlobalNamespace::IPlatformUserModel"
  constexpr operator ::GlobalNamespace::IPlatformUserModel*() noexcept;

  /// @brief Method GetUserAuthToken, addr 0x407f2a8, size 0xb8, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::PlatformUserAuthTokenData*>* GetUserAuthToken();

  /// @brief Method GetUserFriendsUserIds, addr 0x407f1ec, size 0xbc, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserFriendsUserIds(bool cached);

  /// @brief Method GetUserInfo, addr 0x407f0e0, size 0xd0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::UserInfo*>* GetUserInfo(::System::Threading::CancellationToken ctx);

  /// @brief Method GetUserNamesForUserIds, addr 0x407f360, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* GetUserNamesForUserIds(::System::Collections::Generic::IReadOnlyList_1<::StringW>* userIds);

  /// @brief Method GetUsersSystemLanguage, addr 0x407f46c, size 0x5c, virtual true, abstract: false, final true
  inline ::BGLib::Polyglot::Language GetUsersSystemLanguage();

  static inline ::GlobalNamespace::MockPlatformUserModel* New_ctor();

  /// @brief Method RequestXPlatformAccessToken, addr 0x407f3cc, size 0xa0, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData>* RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken);

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>* const& __cordl_internal_get_platformUserInfoDidChangeEvent() const;

  constexpr ::System::Action_1<::GlobalNamespace::UserInfo*>*& __cordl_internal_get_platformUserInfoDidChangeEvent();

  constexpr void __cordl_internal_set_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method .ctor, addr 0x407f4c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_platformUserInfoDidChangeEvent, addr 0x407ef78, size 0xb0, virtual true, abstract: false, final true
  inline void add_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

  /// @brief Method get_CanXPlatformAccessTokenBeCached, addr 0x407f0d8, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanXPlatformAccessTokenBeCached();

  /// @brief Convert to "::GlobalNamespace::IPlatformUserModel"
  constexpr ::GlobalNamespace::IPlatformUserModel* i___GlobalNamespace__IPlatformUserModel() noexcept;

  /// @brief Method remove_platformUserInfoDidChangeEvent, addr 0x407f028, size 0xb0, virtual true, abstract: false, final true
  inline void remove_platformUserInfoDidChangeEvent(::System::Action_1<::GlobalNamespace::UserInfo*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockPlatformUserModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformUserModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockPlatformUserModel(MockPlatformUserModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockPlatformUserModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockPlatformUserModel(MockPlatformUserModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18754 };

  /// @brief Field platformUserInfoDidChangeEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action_1<::GlobalNamespace::UserInfo*>* ___platformUserInfoDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MockPlatformUserModel, ___platformUserInfoDidChangeEvent) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockPlatformUserModel, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockPlatformUserModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPlatformUserModel*, "", "MockPlatformUserModel");
