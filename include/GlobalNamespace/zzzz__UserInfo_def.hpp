#pragma once
// IWYU pragma private; include "GlobalNamespace/UserInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserInfo)
namespace GlobalNamespace {
struct UserInfo_Platform;
}
// Forward declare root types
namespace GlobalNamespace {
struct UserInfo_Platform;
}
namespace GlobalNamespace {
class UserInfo;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UserInfo_Platform);
MARK_REF_PTR_T(::GlobalNamespace::UserInfo);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: UserInfo/Platform
struct CORDL_TYPE UserInfo_Platform {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __UserInfo_Platform_Unwrapped
  enum struct __UserInfo_Platform_Unwrapped : int32_t {
    __E_Test = static_cast<int32_t>(0x0),
    __E_Steam = static_cast<int32_t>(0x1),
    __E_Oculus = static_cast<int32_t>(0x2),
    __E_PS4 = static_cast<int32_t>(0x3),
    __E_PS5 = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __UserInfo_Platform_Unwrapped() const noexcept {
    return static_cast<__UserInfo_Platform_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr UserInfo_Platform();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr UserInfo_Platform(int32_t value__) noexcept;

  /// @brief Field Oculus value: I32(2)
  static ::GlobalNamespace::UserInfo_Platform const Oculus;

  /// @brief Field PS4 value: I32(3)
  static ::GlobalNamespace::UserInfo_Platform const PS4;

  /// @brief Field PS5 value: I32(4)
  static ::GlobalNamespace::UserInfo_Platform const PS5;

  /// @brief Field Steam value: I32(1)
  static ::GlobalNamespace::UserInfo_Platform const Steam;

  /// @brief Field Test value: I32(0)
  static ::GlobalNamespace::UserInfo_Platform const Test;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserInfo_Platform, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UserInfo_Platform, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object, UserInfo::Platform
namespace GlobalNamespace {
// Is value type: false
// CS Name: UserInfo
class CORDL_TYPE UserInfo : public ::System::Object {
public:
  // Declarations
  using Platform = ::GlobalNamespace::UserInfo_Platform;

  /// @brief Field platform, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_platform, put = __cordl_internal_set_platform)) ::GlobalNamespace::UserInfo_Platform platform;

  /// @brief Field platformUserId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_platformUserId, put = __cordl_internal_set_platformUserId)) ::StringW platformUserId;

  /// @brief Field userName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_userName, put = __cordl_internal_set_userName)) ::StringW userName;

  static inline ::GlobalNamespace::UserInfo* New_ctor(::GlobalNamespace::UserInfo_Platform platform, ::StringW platformUserId, ::StringW userName);

  constexpr ::GlobalNamespace::UserInfo_Platform const& __cordl_internal_get_platform() const;

  constexpr ::GlobalNamespace::UserInfo_Platform& __cordl_internal_get_platform();

  constexpr ::StringW const& __cordl_internal_get_platformUserId() const;

  constexpr ::StringW& __cordl_internal_get_platformUserId();

  constexpr ::StringW const& __cordl_internal_get_userName() const;

  constexpr ::StringW& __cordl_internal_get_userName();

  constexpr void __cordl_internal_set_platform(::GlobalNamespace::UserInfo_Platform value);

  constexpr void __cordl_internal_set_platformUserId(::StringW value);

  constexpr void __cordl_internal_set_userName(::StringW value);

  /// @brief Method .ctor, addr 0x408ca64, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::UserInfo_Platform platform, ::StringW platformUserId, ::StringW userName);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UserInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UserInfo(UserInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UserInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UserInfo(UserInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18761 };

  /// @brief Field platform, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::UserInfo_Platform ___platform;

  /// @brief Field platformUserId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___platformUserId;

  /// @brief Field userName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___userName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UserInfo, ___platform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UserInfo, ___platformUserId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UserInfo, ___userName) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UserInfo, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserInfo_Platform, "", "UserInfo/Platform");
NEED_NO_BOX(::GlobalNamespace::UserInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UserInfo*, "", "UserInfo");
