#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/MockedPlatformUser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MockedPlatformUser)
namespace OculusStudios::Platform::Core {
class IPlatformLogger;
}
namespace OculusStudios::Platform::Core {
class IPlatformUser;
}
namespace OculusStudios::Platform::Core {
class PlatformInitParams;
}
namespace OculusStudios::Platform::Core {
struct UserAgeCategory;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyCollection_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace OculusStudios::Platform::Oculus {
class MockedPlatformUser;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Oculus::MockedPlatformUser);
// Dependencies System.Object
namespace OculusStudios::Platform::Oculus {
// Is value type: false
// CS Name: OculusStudios.Platform.Oculus.MockedPlatformUser
class CORDL_TYPE MockedPlatformUser : public ::System::Object {
public:
  // Declarations
  /// @brief Field <displayName>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__displayName_k__BackingField, put = __cordl_internal_set__displayName_k__BackingField)) ::StringW _displayName_k__BackingField;

  /// @brief Field <userId>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__userId_k__BackingField, put = __cordl_internal_set__userId_k__BackingField)) uint64_t _userId_k__BackingField;

  /// @brief Field achievementIdDefinitions, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_achievementIdDefinitions,
                      put = __cordl_internal_set_achievementIdDefinitions)) ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* achievementIdDefinitions;

  __declspec(property(get = get_displayName, put = set_displayName)) ::StringW displayName;

  /// @brief Field logger, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_logger, put = __cordl_internal_set_logger)) ::OculusStudios::Platform::Core::IPlatformLogger* logger;

  __declspec(property(get = get_userId, put = set_userId)) uint64_t userId;

  /// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformUser"
  constexpr operator ::OculusStudios::Platform::Core::IPlatformUser*() noexcept;

  /// @brief Method GetAccessTokenAsync, addr 0x5d84040, size 0x120, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAccessTokenAsync();

  /// @brief Method GetAgeCategoryAsync, addr 0x5d84300, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* GetAgeCategoryAsync();

  /// @brief Method GetAllAchievementIds, addr 0x5d84370, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* GetAllAchievementIds();

  /// @brief Method GetLocale, addr 0x5d842f8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW GetLocale();

  /// @brief Method GetUnlockedAchievementIdsAsync, addr 0x5d843ec, size 0xe4, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* GetUnlockedAchievementIdsAsync();

  /// @brief Method GetXPlatformAccessTokenAsync, addr 0x5d84160, size 0x198, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetXPlatformAccessTokenAsync(bool skipCache);

  /// @brief Method IsAchievementUnlockedAsync, addr 0x5d8437c, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task_1<bool>* IsAchievementUnlockedAsync(::StringW achievementId);

  static inline ::OculusStudios::Platform::Oculus::MockedPlatformUser* New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Method UnlockAchievement, addr 0x5d84378, size 0x4, virtual true, abstract: false, final true
  inline void UnlockAchievement(::StringW achievementId);

  constexpr ::StringW const& __cordl_internal_get__displayName_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__displayName_k__BackingField();

  constexpr uint64_t const& __cordl_internal_get__userId_k__BackingField() const;

  constexpr uint64_t& __cordl_internal_get__userId_k__BackingField();

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* const& __cordl_internal_get_achievementIdDefinitions() const;

  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*& __cordl_internal_get_achievementIdDefinitions();

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& __cordl_internal_get_logger() const;

  constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& __cordl_internal_get_logger();

  constexpr void __cordl_internal_set__displayName_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__userId_k__BackingField(uint64_t value);

  constexpr void __cordl_internal_set_achievementIdDefinitions(::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* value);

  constexpr void __cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value);

  /// @brief Method .ctor, addr 0x5d83f08, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams);

  /// @brief Method get_displayName, addr 0x5d84030, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_displayName();

  /// @brief Method get_userId, addr 0x5d84020, size 0x8, virtual true, abstract: false, final true
  inline uint64_t get_userId();

  /// @brief Convert to "::OculusStudios::Platform::Core::IPlatformUser"
  constexpr ::OculusStudios::Platform::Core::IPlatformUser* i___OculusStudios__Platform__Core__IPlatformUser() noexcept;

  /// @brief Method set_displayName, addr 0x5d84038, size 0x8, virtual false, abstract: false, final false
  inline void set_displayName(::StringW value);

  /// @brief Method set_userId, addr 0x5d84028, size 0x8, virtual false, abstract: false, final false
  inline void set_userId(uint64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockedPlatformUser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockedPlatformUser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockedPlatformUser(MockedPlatformUser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockedPlatformUser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockedPlatformUser(MockedPlatformUser const&) = delete;

  /// @brief Field ENV_USER_ID offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_USER_ID{ u"OCULUS_PLATFORM_USER_ID" };

  /// @brief Field ENV_USER_NAME offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_USER_NAME{ u"OCULUS_PLATFORM_USER_NAME" };

  /// @brief Field ENV_XPLAT_AUTH_TOKEN offset 0xffffffff size 0x8
  static constexpr ::ConstString ENV_XPLAT_AUTH_TOKEN{ u"OCULUS_PLATFORM_AUTHTOKEN" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21909 };

  /// @brief Field <userId>k__BackingField, offset: 0x10, size: 0x8, def value: None
  uint64_t ____userId_k__BackingField;

  /// @brief Field <displayName>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____displayName_k__BackingField;

  /// @brief Field logger, offset: 0x20, size: 0x8, def value: None
  ::OculusStudios::Platform::Core::IPlatformLogger* ___logger;

  /// @brief Field achievementIdDefinitions, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* ___achievementIdDefinitions;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::Platform::Oculus::MockedPlatformUser, ____userId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::MockedPlatformUser, ____displayName_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::MockedPlatformUser, ___logger) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::Platform::Oculus::MockedPlatformUser, ___achievementIdDefinitions) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::Platform::Oculus::MockedPlatformUser, 0x30>, "Size mismatch!");

} // namespace OculusStudios::Platform::Oculus
NEED_NO_BOX(::OculusStudios::Platform::Oculus::MockedPlatformUser);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Oculus::MockedPlatformUser*, "OculusStudios.Platform.Oculus", "MockedPlatformUser");
