#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/MockedPlatformUser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Core/zzzz__MockedPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatformUser::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5f2e2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2e7b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2e7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetAccessTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::GetAccessTokenAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5f2e7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetAccessTokenAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetXPlatformAccessTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Core::MockedPlatformUser::*)(bool)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::GetXPlatformAccessTokenAsync)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5f2e8e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetXPlatformAccessTokenAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::GetLocale)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2e938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetLocale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetAgeCategoryAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* (
    ::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::GetAgeCategoryAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f2e93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetAgeCategoryAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetAllAchievementIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::GetAllAchievementIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f2e9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetAllAchievementIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.UnlockAchievement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::UnlockAchievement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2e9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "UnlockAchievement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.IsAchievementUnlockedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::OculusStudios::Platform::Core::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::IsAchievementUnlockedAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5f2e9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "IsAchievementUnlockedAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetUnlockedAchievementIdsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* (
    ::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::GetUnlockedAchievementIdsAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5f2ea28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetUnlockedAchievementIdsAsync", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get_achievementIdDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* const& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get_achievementIdDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr void OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_set_achievementIdDefinitions(::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___achievementIdDefinitions = value;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logger = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>*& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get_unfinishedTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unfinishedTask;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* const& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get_unfinishedTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___unfinishedTask;
}
constexpr void OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_set_unfinishedTask(::System::Threading::Tasks::TaskCompletionSource_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___unfinishedTask = value;
}
constexpr uint64_t& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get__userId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId_k__BackingField;
}
constexpr uint64_t const& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get__userId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId_k__BackingField;
}
constexpr void OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_set__userId_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId_k__BackingField = value;
}
constexpr ::StringW& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void OculusStudios::Platform::Core::MockedPlatformUser::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____displayName_k__BackingField = value;
}
inline void OculusStudios::Platform::Core::MockedPlatformUser::_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initParams);
}
inline uint64_t OculusStudios::Platform::Core::MockedPlatformUser::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::MockedPlatformUser::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Core::MockedPlatformUser::GetAccessTokenAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetAccessTokenAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Core::MockedPlatformUser::GetXPlatformAccessTokenAsync(bool skipCache) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetXPlatformAccessTokenAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, skipCache);
}
inline ::StringW OculusStudios::Platform::Core::MockedPlatformUser::GetLocale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetLocale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* OculusStudios::Platform::Core::MockedPlatformUser::GetAgeCategoryAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetAgeCategoryAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* OculusStudios::Platform::Core::MockedPlatformUser::GetAllAchievementIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetAllAchievementIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatformUser::UnlockAchievement(::StringW achievementId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "UnlockAchievement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<bool>* OculusStudios::Platform::Core::MockedPlatformUser::IsAchievementUnlockedAsync(::StringW achievementId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "IsAchievementUnlockedAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* OculusStudios::Platform::Core::MockedPlatformUser::GetUnlockedAchievementIdsAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::MockedPlatformUser*>(), { "GetUnlockedAchievementIdsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>*>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::MockedPlatformUser* OculusStudios::Platform::Core::MockedPlatformUser::New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Core::MockedPlatformUser*>(initParams));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformUser"
constexpr OculusStudios::Platform::Core::MockedPlatformUser::operator ::OculusStudios::Platform::Core::IPlatformUser*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformUser*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformUser"
constexpr ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Core::MockedPlatformUser::i___OculusStudios__Platform__Core__IPlatformUser() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformUser*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Core::MockedPlatformUser::MockedPlatformUser() {}
