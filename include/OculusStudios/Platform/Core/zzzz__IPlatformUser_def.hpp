#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/IPlatformUser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IPlatformUser)
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
namespace OculusStudios::Platform::Core {
class IPlatformUser;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::Platform::Core::IPlatformUser);
// Dependencies
namespace OculusStudios::Platform::Core {
// Is value type: false
// CS Name: OculusStudios.Platform.Core.IPlatformUser
class CORDL_TYPE IPlatformUser {
public:
  // Declarations
  __declspec(property(get = get_displayName)) ::StringW displayName;

  __declspec(property(get = get_userId)) uint64_t userId;

  /// @brief Method GetAccessTokenAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetAccessTokenAsync();

  /// @brief Method GetAgeCategoryAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* GetAgeCategoryAsync();

  /// @brief Method GetAllAchievementIds, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* GetAllAchievementIds();

  /// @brief Method GetLocale, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetLocale();

  /// @brief Method GetUnlockedAchievementIdsAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* GetUnlockedAchievementIdsAsync();

  /// @brief Method GetXPlatformAccessTokenAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* GetXPlatformAccessTokenAsync(bool skipCache);

  /// @brief Method IsAchievementUnlockedAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* IsAchievementUnlockedAsync(::StringW achievementId);

  /// @brief Method UnlockAchievement, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnlockAchievement(::StringW achievementId);

  /// @brief Method get_displayName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_displayName();

  /// @brief Method get_userId, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline uint64_t get_userId();

  // Ctor Parameters [CppParam { name: "", ty: "IPlatformUser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPlatformUser(IPlatformUser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22195 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
NEED_NO_BOX(::OculusStudios::Platform::Core::IPlatformUser);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::Platform::Core::IPlatformUser*, "OculusStudios.Platform.Core", "IPlatformUser");
