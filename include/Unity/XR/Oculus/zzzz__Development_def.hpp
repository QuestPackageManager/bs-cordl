#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/Development.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Development)
namespace Unity::XR::Oculus {
struct Development_UserDeveloperModeSettingCache;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct Development_UserDeveloperModeSettingCache;
}
namespace Unity::XR::Oculus {
class Development;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache);
MARK_REF_PTR_T(::Unity::XR::Oculus::Development);
// Dependencies
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.Development/UserDeveloperModeSettingCache
struct CORDL_TYPE Development_UserDeveloperModeSettingCache {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Development_UserDeveloperModeSettingCache_Unwrapped
  enum struct __Development_UserDeveloperModeSettingCache_Unwrapped : int32_t {
    __E_NoUserSettingCached = static_cast<int32_t>(0x0),
    __E_UserSettingFalse = static_cast<int32_t>(0x1),
    __E_UserSettingTrue = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Development_UserDeveloperModeSettingCache_Unwrapped() const noexcept {
    return static_cast<__Development_UserDeveloperModeSettingCache_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Development_UserDeveloperModeSettingCache();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Development_UserDeveloperModeSettingCache(int32_t value__) noexcept;

  /// @brief Field NoUserSettingCached value: I32(0)
  static ::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache const NoUserSettingCached;

  /// @brief Field UserSettingFalse value: I32(1)
  static ::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache const UserSettingFalse;

  /// @brief Field UserSettingTrue value: I32(2)
  static ::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache const UserSettingTrue;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17401 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache, 0x4>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies System.Object, Unity.XR.Oculus.Development::UserDeveloperModeSettingCache
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.Development
class CORDL_TYPE Development : public ::System::Object {
public:
  // Declarations
  using UserDeveloperModeSettingCache = ::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache;

  /// @brief Field s_CachedMode, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_CachedMode, put = setStaticF_s_CachedMode)) ::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache s_CachedMode;

  /// @brief Method OverrideDeveloperModeStart, addr 0x483359c, size 0xd4, virtual false, abstract: false, final false
  static inline void OverrideDeveloperModeStart();

  /// @brief Method OverrideDeveloperModeStop, addr 0x4833678, size 0x74, virtual false, abstract: false, final false
  static inline void OverrideDeveloperModeStop();

  /// @brief Method TrySetDeveloperMode, addr 0x4833544, size 0x58, virtual false, abstract: false, final false
  static inline void TrySetDeveloperMode(bool active);

  static inline ::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache getStaticF_s_CachedMode();

  static inline void setStaticF_s_CachedMode(::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Development();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Development", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Development(Development&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Development", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Development(Development const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17402 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Development, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Development_UserDeveloperModeSettingCache, "Unity.XR.Oculus", "Development/UserDeveloperModeSettingCache");
NEED_NO_BOX(::Unity::XR::Oculus::Development);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Development*, "Unity.XR.Oculus", "Development");
