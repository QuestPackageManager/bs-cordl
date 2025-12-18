#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Oculus/MockedPlatformUser.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__MockedPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d84020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                               "get_userId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.set_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)(uint64_t)>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d84028;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "set_userId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d84030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                               "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d84038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "set_displayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(&::OculusStudios::Platform::Oculus::MockedPlatformUser::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5d83f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.GetAccessTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::GetAccessTokenAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d84040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                               "GetAccessTokenAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.GetXPlatformAccessTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)(bool)>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::GetXPlatformAccessTokenAsync)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5d84160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "GetXPlatformAccessTokenAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.GetLocale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::GetLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d842f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                               "GetLocale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.GetAgeCategoryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* (
    ::OculusStudios::Platform::Oculus::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Oculus::MockedPlatformUser::GetAgeCategoryAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d84300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                               "GetAgeCategoryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.GetAllAchievementIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* (
    ::OculusStudios::Platform::Oculus::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Oculus::MockedPlatformUser::GetAllAchievementIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d84370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                               "GetAllAchievementIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.UnlockAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::UnlockAchievement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d84378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "UnlockAchievement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.IsAchievementUnlockedAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::OculusStudios::Platform::Oculus::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Oculus::MockedPlatformUser::IsAchievementUnlockedAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d8437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "IsAchievementUnlockedAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::MockedPlatformUser.GetUnlockedAchievementIdsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* (
    ::OculusStudios::Platform::Oculus::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Oculus::MockedPlatformUser::GetUnlockedAchievementIdsAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d843ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                               "GetUnlockedAchievementIdsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr uint64_t& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get__userId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId_k__BackingField;
}
constexpr uint64_t const& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get__userId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userId_k__BackingField;
}
constexpr void OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_set__userId_k__BackingField(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____userId_k__BackingField = value;
}
constexpr ::StringW& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get__displayName_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr ::StringW const& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get__displayName_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____displayName_k__BackingField;
}
constexpr void OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_set__displayName_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get_achievementIdDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* const& OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_get_achievementIdDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr void OculusStudios::Platform::Oculus::MockedPlatformUser::__cordl_internal_set_achievementIdDefinitions(::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___achievementIdDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint64_t OculusStudios::Platform::Oculus::MockedPlatformUser::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                             "get_userId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::MockedPlatformUser::set_userId(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "set_userId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW OculusStudios::Platform::Oculus::MockedPlatformUser::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                             "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::MockedPlatformUser::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "set_displayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OculusStudios::Platform::Oculus::MockedPlatformUser::_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Oculus::MockedPlatformUser::GetAccessTokenAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                             "GetAccessTokenAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Oculus::MockedPlatformUser::GetXPlatformAccessTokenAsync(bool skipCache) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "GetXPlatformAccessTokenAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, skipCache);
}
inline ::StringW OculusStudios::Platform::Oculus::MockedPlatformUser::GetLocale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                             "GetLocale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* OculusStudios::Platform::Oculus::MockedPlatformUser::GetAgeCategoryAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                             "GetAgeCategoryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* OculusStudios::Platform::Oculus::MockedPlatformUser::GetAllAchievementIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                             "GetAllAchievementIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::MockedPlatformUser::UnlockAchievement(::StringW achievementId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "UnlockAchievement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<bool>* OculusStudios::Platform::Oculus::MockedPlatformUser::IsAchievementUnlockedAsync(::StringW achievementId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(), "IsAchievementUnlockedAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* OculusStudios::Platform::Oculus::MockedPlatformUser::GetUnlockedAchievementIdsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Oculus::MockedPlatformUser*>::get(),
                                                                             "GetUnlockedAchievementIdsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>*, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Oculus::MockedPlatformUser* OculusStudios::Platform::Oculus::MockedPlatformUser::New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Oculus::MockedPlatformUser*>(initParams));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformUser"
constexpr OculusStudios::Platform::Oculus::MockedPlatformUser::operator ::OculusStudios::Platform::Core::IPlatformUser*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformUser*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformUser"
constexpr ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Oculus::MockedPlatformUser::i___OculusStudios__Platform__Core__IPlatformUser() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformUser*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::MockedPlatformUser::MockedPlatformUser() {}
