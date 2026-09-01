#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Core\IPlatformUser.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OculusStudios::Platform::Core::IPlatformUser::*)()>(&::OculusStudios::Platform::Core::IPlatformUser::get_userId)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IPlatformUser::*)()>(&::OculusStudios::Platform::Core::IPlatformUser::get_displayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.GetAccessTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Core::IPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::IPlatformUser::GetAccessTokenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.GetXPlatformAccessTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Core::IPlatformUser::*)(bool)>(
    &::OculusStudios::Platform::Core::IPlatformUser::GetXPlatformAccessTokenAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.GetLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Core::IPlatformUser::*)()>(&::OculusStudios::Platform::Core::IPlatformUser::GetLocale)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.GetAgeCategoryAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* (::OculusStudios::Platform::Core::IPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::IPlatformUser::GetAgeCategoryAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.GetAllAchievementIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* (::OculusStudios::Platform::Core::IPlatformUser::*)()>(
    &::OculusStudios::Platform::Core::IPlatformUser::GetAllAchievementIds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.UnlockAchievement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformUser::*)(::StringW)>(&::OculusStudios::Platform::Core::IPlatformUser::UnlockAchievement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.IsAchievementUnlockedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::OculusStudios::Platform::Core::IPlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Core::IPlatformUser::IsAchievementUnlockedAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.GetUnlockedAchievementIdsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* (
    ::OculusStudios::Platform::Core::IPlatformUser::*)()>(&::OculusStudios::Platform::Core::IPlatformUser::GetUnlockedAchievementIdsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Core::IPlatformUser.FlushAchievements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Core::IPlatformUser::*)()>(&::OculusStudios::Platform::Core::IPlatformUser::FlushAchievements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 10 }));
    return ___internal_method;
  }
};
inline uint64_t OculusStudios::Platform::Core::IPlatformUser::get_userId() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Core::IPlatformUser::get_displayName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Core::IPlatformUser::GetAccessTokenAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Core::IPlatformUser::GetXPlatformAccessTokenAsync(bool skipCache) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, skipCache);
}
inline ::StringW OculusStudios::Platform::Core::IPlatformUser::GetLocale() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* OculusStudios::Platform::Core::IPlatformUser::GetAgeCategoryAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* OculusStudios::Platform::Core::IPlatformUser::GetAllAchievementIds() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::IPlatformUser::UnlockAchievement(::StringW achievementId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<bool>* OculusStudios::Platform::Core::IPlatformUser::IsAchievementUnlockedAsync(::StringW achievementId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* OculusStudios::Platform::Core::IPlatformUser::GetUnlockedAchievementIdsAsync() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>*>(this, ___internal_method);
}
inline void OculusStudios::Platform::Core::IPlatformUser::FlushAchievements() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::OculusStudios::Platform::Core::IPlatformUser*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
