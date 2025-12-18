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
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.get_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::get_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d8249c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                               "get_userId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.set_userId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatformUser::*)(uint64_t)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::set_userId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d824a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "set_userId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.get_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d824ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                               "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.set_displayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d824b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "set_displayName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatformUser::*)(::OculusStudios::Platform::Core::PlatformInitParams*)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5d81f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetAccessTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::GetAccessTokenAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5d824bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                               "GetAccessTokenAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetXPlatformAccessTokenAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Core::MockedPlatformUser::*)(bool)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::GetXPlatformAccessTokenAsync)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5d825dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "GetXPlatformAccessTokenAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetLocale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::GetLocale)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d8262c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                               "GetLocale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetAgeCategoryAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* (
    ::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::GetAgeCategoryAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d82630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                               "GetAgeCategoryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetAllAchievementIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* (
    ::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::GetAllAchievementIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d826a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                               "GetAllAchievementIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.UnlockAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::Platform::Core::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::UnlockAchievement)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d826a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "UnlockAchievement",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.IsAchievementUnlockedAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::OculusStudios::Platform::Core::MockedPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Core::MockedPlatformUser::IsAchievementUnlockedAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5d826ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "IsAchievementUnlockedAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::MockedPlatformUser.GetUnlockedAchievementIdsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* (
    ::OculusStudios::Platform::Core::MockedPlatformUser::*)()>(&::OculusStudios::Platform::Core::MockedPlatformUser::GetUnlockedAchievementIdsAsync)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5d8271c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                               "GetUnlockedAchievementIdsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____displayName_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unfinishedTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___achievementIdDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline uint64_t OculusStudios::Platform::Core::MockedPlatformUser::get_userId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                             "get_userId", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatformUser::set_userId(uint64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "set_userId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW OculusStudios::Platform::Core::MockedPlatformUser::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                             "get_displayName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatformUser::set_displayName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "set_displayName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void OculusStudios::Platform::Core::MockedPlatformUser::_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OculusStudios::Platform::Core::PlatformInitParams*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initParams);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Core::MockedPlatformUser::GetAccessTokenAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                             "GetAccessTokenAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Core::MockedPlatformUser::GetXPlatformAccessTokenAsync(bool skipCache) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "GetXPlatformAccessTokenAsync",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, skipCache);
}
inline ::StringW OculusStudios::Platform::Core::MockedPlatformUser::GetLocale() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                             "GetLocale", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* OculusStudios::Platform::Core::MockedPlatformUser::GetAgeCategoryAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                             "GetAgeCategoryAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* OculusStudios::Platform::Core::MockedPlatformUser::GetAllAchievementIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                             "GetAllAchievementIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*, false>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::MockedPlatformUser::UnlockAchievement(::StringW achievementId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "UnlockAchievement",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<bool>* OculusStudios::Platform::Core::MockedPlatformUser::IsAchievementUnlockedAsync(::StringW achievementId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(), "IsAchievementUnlockedAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* OculusStudios::Platform::Core::MockedPlatformUser::GetUnlockedAchievementIdsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::Platform::Core::MockedPlatformUser*>::get(),
                                                                             "GetUnlockedAchievementIdsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>*, false>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Core::MockedPlatformUser* OculusStudios::Platform::Core::MockedPlatformUser::New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::Platform::Core::MockedPlatformUser*>(initParams));
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
