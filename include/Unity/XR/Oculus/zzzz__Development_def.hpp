#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/XR/Oculus/zzzz__Development_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Development)
namespace Unity::XR::Oculus {
struct __Development__UserDeveloperModeSettingCache;
}
// Forward declare root types
namespace Unity::XR::Oculus {
struct __Development__UserDeveloperModeSettingCache;
}
namespace Unity::XR::Oculus {
class Development;
}
// Write type traits
MARK_VAL_T(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache);
MARK_REF_PTR_T(::Unity::XR::Oculus::Development);
// Type: ::UserDeveloperModeSettingCache
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: ::Development::UserDeveloperModeSettingCache
struct CORDL_TYPE __Development__UserDeveloperModeSettingCache {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Development__UserDeveloperModeSettingCache_Unwrapped
  enum struct ____Development__UserDeveloperModeSettingCache_Unwrapped : int32_t {
    __E_NoUserSettingCached = static_cast<int32_t>(0x0),
    __E_UserSettingFalse = static_cast<int32_t>(0x1),
    __E_UserSettingTrue = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Development__UserDeveloperModeSettingCache_Unwrapped() const noexcept {
    return static_cast<____Development__UserDeveloperModeSettingCache_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Development__UserDeveloperModeSettingCache();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Development__UserDeveloperModeSettingCache(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field NoUserSettingCached value: static_cast<int32_t>(0x0)
  static ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache const NoUserSettingCached;

  /// @brief Field UserSettingFalse value: static_cast<int32_t>(0x1)
  static ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache const UserSettingFalse;

  /// @brief Field UserSettingTrue value: static_cast<int32_t>(0x2)
  static ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache const UserSettingTrue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache, 0x4>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache, value__) == 0x0, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: Unity.XR.Oculus::Development
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::Unity.XR.Oculus::Development*
class CORDL_TYPE Development : public ::System::Object {
public:
  // Declarations
  using UserDeveloperModeSettingCache = ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache;

  /// @brief Field s_CachedMode, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_CachedMode, put = setStaticF_s_CachedMode))::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache s_CachedMode;

  /// @brief Method OverrideDeveloperModeStart, addr 0x31a5fe4, size 0xcc, virtual false, abstract: false, final false
  static inline void OverrideDeveloperModeStart();

  /// @brief Method OverrideDeveloperModeStop, addr 0x31a60b8, size 0x74, virtual false, abstract: false, final false
  static inline void OverrideDeveloperModeStop();

  /// @brief Method TrySetDeveloperMode, addr 0x31a5f8c, size 0x58, virtual false, abstract: false, final false
  static inline void TrySetDeveloperMode(bool active);

  static inline ::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache getStaticF_s_CachedMode();

  static inline void setStaticF_s_CachedMode(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::Development, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__Development__UserDeveloperModeSettingCache, "Unity.XR.Oculus", "Development/UserDeveloperModeSettingCache");
NEED_NO_BOX(::Unity::XR::Oculus::Development);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Development*, "Unity.XR.Oculus", "Development");
