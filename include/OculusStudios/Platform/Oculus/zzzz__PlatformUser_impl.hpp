#pragma once
// IWYU pragma private; include "OculusStudios\Platform\Oculus\PlatformUser.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__PlatformUser_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
#include "Oculus/Platform/Models/zzzz__UserAccountAgeCategory_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformLogger_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__IPlatformUser_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__PlatformInitParams_def.hpp"
#include "OculusStudios/Platform/Core/zzzz__UserAgeCategory_def.hpp"
#include "OculusStudios/Platform/Oculus/zzzz__PlatformUser_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f350c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0._UnlockAchievement_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::*)(::StringW)>(
    &::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::_UnlockAchievement_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f35298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0*>(),
                                                                                           { "<UnlockAchievement>b__0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::__cordl_internal_get_achievementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementId;
}
constexpr ::StringW const& OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::__cordl_internal_get_achievementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementId;
}
constexpr void OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::__cordl_internal_set_achievementId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___achievementId = value;
}
inline void OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::_UnlockAchievement_b__0(::StringW x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0*>(), { "<UnlockAchievement>b__0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0* OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass17_0::PlatformUser___c__DisplayClass17_0() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f352a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0._IsAchievementUnlockedAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::*)(::StringW)>(
    &::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::_IsAchievementUnlockedAsync_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5f352ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*>(),
                                                                                           { "<IsAchievementUnlockedAsync>b__0", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0._IsAchievementUnlockedAsync_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::*)(::Oculus::Platform::Models::AchievementProgress*)>(
    &::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::_IsAchievementUnlockedAsync_b__1)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f352bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*>(),
                                                             { "<IsAchievementUnlockedAsync>b__1", {}, { ::i2c::type_of<::Oculus::Platform::Models::AchievementProgress*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::__cordl_internal_get_achievementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementId;
}
constexpr ::StringW const& OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::__cordl_internal_get_achievementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementId;
}
constexpr void OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::__cordl_internal_set_achievementId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___achievementId = value;
}
inline void OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::_IsAchievementUnlockedAsync_b__0(::StringW x) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*>(),
                                                                                         { "<IsAchievementUnlockedAsync>b__0", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline bool OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::_IsAchievementUnlockedAsync_b__1(::Oculus::Platform::Models::AchievementProgress* x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*>(),
                                                           { "<IsAchievementUnlockedAsync>b__1", {}, { ::i2c::type_of<::Oculus::Platform::Models::AchievementProgress*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, x);
}
inline ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0* OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0::PlatformUser___c__DisplayClass18_0() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::MoveNext)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x5f352fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f35610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::PlatformUser__GetAccessTokenAsync_d__11(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::OculusStudios::Platform::Oculus::PlatformUser* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__GetAccessTokenAsync_d__11::PlatformUser__GetAccessTokenAsync_d__11() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5f35690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f35a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::UserAgeCategory>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::PlatformUser__GetAgeCategoryAsync_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::OculusStudios::Platform::Core::UserAgeCategory> __t__builder,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserAccountAgeCategory*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__GetAgeCategoryAsync_d__15::PlatformUser__GetAgeCategoryAsync_d__15() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x5f35a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f36180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__4__this", ty: "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::PlatformUser__GetUnlockedAchievementIdsAsync_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*> __t__builder,
    ::OculusStudios::Platform::Oculus::PlatformUser* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__GetUnlockedAchievementIdsAsync_d__19::PlatformUser__GetUnlockedAchievementIdsAsync_d__19() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x784;
  constexpr static std::size_t addrs = 0x5f36200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f36984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_messageTask_5__2", ty:
// "::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::StringW>*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutTask_5__3", ty:
// "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_completedFirst_5__4", ty: "::System::Threading::Tasks::Task*", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::PlatformUser__InternalGetAccessTokenAsync_d__12(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::OculusStudios::Platform::Oculus::PlatformUser* __4__this,
    ::System::Threading::Tasks::Task_1<::Oculus::Platform::Message_1<::StringW>*>* _messageTask_5__2, ::System::Threading::Tasks::Task* _timeoutTask_5__3,
    ::System::Threading::Tasks::Task* _completedFirst_5__4, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_messageTask_5__2 = _messageTask_5__2;
  this->_timeoutTask_5__3 = _timeoutTask_5__3;
  this->_completedFirst_5__4 = _completedFirst_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__InternalGetAccessTokenAsync_d__12::PlatformUser__InternalGetAccessTokenAsync_d__12() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x5f36a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5f36f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "achievementId", ty: "::StringW", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::OculusStudios::Platform::Oculus::PlatformUser*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::PlatformUser__IsAchievementUnlockedAsync_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::StringW achievementId, ::OculusStudios::Platform::Oculus::PlatformUser* __4__this,
    ::OculusStudios::Platform::Oculus::PlatformUser___c__DisplayClass18_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->achievementId = achievementId;
  this->__4__this = __4__this;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser__IsAchievementUnlockedAsync_d__18::PlatformUser__IsAchievementUnlockedAsync_d__18() {}
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.get_userId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(&::OculusStudios::Platform::Oculus::PlatformUser::get_userId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5f34ca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "get_userId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.get_displayName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(&::OculusStudios::Platform::Oculus::PlatformUser::get_displayName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5f34cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "get_displayName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser::*)(
    ::OculusStudios::Platform::Core::PlatformInitParams*, ::Oculus::Platform::Models::User*)>(&::OculusStudios::Platform::Oculus::PlatformUser::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5f33a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>(), ::i2c::type_of<::Oculus::Platform::Models::User*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.GetAccessTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser::GetAccessTokenAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f34cdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetAccessTokenAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.InternalGetAccessTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser::InternalGetAccessTokenAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5f34db8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "InternalGetAccessTokenAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.GetXPlatformAccessTokenAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::OculusStudios::Platform::Oculus::PlatformUser::*)(bool)>(
    &::OculusStudios::Platform::Oculus::PlatformUser::GetXPlatformAccessTokenAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f34e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetXPlatformAccessTokenAsync", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.GetLocale
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(&::OculusStudios::Platform::Oculus::PlatformUser::GetLocale)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f34e9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetLocale", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.GetAgeCategoryAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser::GetAgeCategoryAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5f34ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetAgeCategoryAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.GetAllAchievementIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(
    &::OculusStudios::Platform::Oculus::PlatformUser::GetAllAchievementIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f34f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetAllAchievementIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.UnlockAchievement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser::*)(::StringW)>(&::OculusStudios::Platform::Oculus::PlatformUser::UnlockAchievement)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5f34f84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "UnlockAchievement", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.IsAchievementUnlockedAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::OculusStudios::Platform::Oculus::PlatformUser::*)(::StringW)>(
    &::OculusStudios::Platform::Oculus::PlatformUser::IsAchievementUnlockedAsync)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5f350cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "IsAchievementUnlockedAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.GetUnlockedAchievementIdsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* (
    ::OculusStudios::Platform::Oculus::PlatformUser::*)()>(&::OculusStudios::Platform::Oculus::PlatformUser::GetUnlockedAchievementIdsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5f351b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetUnlockedAchievementIdsAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OculusStudios::Platform::Oculus::PlatformUser.FlushAchievements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::Platform::Oculus::PlatformUser::*)()>(&::OculusStudios::Platform::Oculus::PlatformUser::FlushAchievements)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f35294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "FlushAchievements", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::OculusStudios::Platform::Core::IPlatformLogger*& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::OculusStudios::Platform::Core::IPlatformLogger* const& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_set_logger(::OculusStudios::Platform::Core::IPlatformLogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logger = value;
}
constexpr ::Oculus::Platform::Models::User*& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_user() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr ::Oculus::Platform::Models::User* const& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_user() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___user;
}
constexpr void OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_set_user(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___user = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_achievementIdDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_achievementIdDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementIdDefinitions;
}
constexpr void OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_set_achievementIdDefinitions(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___achievementIdDefinitions = value;
}
constexpr ::System::Threading::Tasks::Task_1<::StringW>*& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_internalGetAccessTokenTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalGetAccessTokenTask;
}
constexpr ::System::Threading::Tasks::Task_1<::StringW>* const& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_internalGetAccessTokenTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___internalGetAccessTokenTask;
}
constexpr void OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_set_internalGetAccessTokenTask(::System::Threading::Tasks::Task_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___internalGetAccessTokenTask = value;
}
constexpr ::StringW& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_accessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr ::StringW const& OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_get_accessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___accessToken;
}
constexpr void OculusStudios::Platform::Oculus::PlatformUser::__cordl_internal_set_accessToken(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___accessToken = value;
}
inline uint64_t OculusStudios::Platform::Oculus::PlatformUser::get_userId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "get_userId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(this, ___internal_method);
}
inline ::StringW OculusStudios::Platform::Oculus::PlatformUser::get_displayName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "get_displayName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser::_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams, ::Oculus::Platform::Models::User* user) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::OculusStudios::Platform::Core::PlatformInitParams*>(), ::i2c::type_of<::Oculus::Platform::Models::User*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initParams, user);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Oculus::PlatformUser::GetAccessTokenAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetAccessTokenAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Oculus::PlatformUser::InternalGetAccessTokenAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "InternalGetAccessTokenAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* OculusStudios::Platform::Oculus::PlatformUser::GetXPlatformAccessTokenAsync(bool skipCache) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetXPlatformAccessTokenAsync", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, skipCache);
}
inline ::StringW OculusStudios::Platform::Oculus::PlatformUser::GetLocale() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetLocale", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>* OculusStudios::Platform::Oculus::PlatformUser::GetAgeCategoryAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetAgeCategoryAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::OculusStudios::Platform::Core::UserAgeCategory>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::StringW>* OculusStudios::Platform::Oculus::PlatformUser::GetAllAchievementIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetAllAchievementIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser::UnlockAchievement(::StringW achievementId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "UnlockAchievement", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<bool>* OculusStudios::Platform::Oculus::PlatformUser::IsAchievementUnlockedAsync(::StringW achievementId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "IsAchievementUnlockedAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, achievementId);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>* OculusStudios::Platform::Oculus::PlatformUser::GetUnlockedAchievementIdsAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "GetUnlockedAchievementIdsAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyCollection_1<::StringW>*>*>(this, ___internal_method);
}
inline void OculusStudios::Platform::Oculus::PlatformUser::FlushAchievements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::Platform::Oculus::PlatformUser*>(), { "FlushAchievements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::Platform::Oculus::PlatformUser* OculusStudios::Platform::Oculus::PlatformUser::New_ctor(::OculusStudios::Platform::Core::PlatformInitParams* initParams,
                                                                                                                ::Oculus::Platform::Models::User* user) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::Platform::Oculus::PlatformUser*>(initParams, user));
}
/// @brief Convert operator to "::OculusStudios::Platform::Core::IPlatformUser"
constexpr OculusStudios::Platform::Oculus::PlatformUser::operator ::OculusStudios::Platform::Core::IPlatformUser*() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformUser*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::Platform::Core::IPlatformUser"
constexpr ::OculusStudios::Platform::Core::IPlatformUser* OculusStudios::Platform::Oculus::PlatformUser::i___OculusStudios__Platform__Core__IPlatformUser() noexcept {
  return static_cast<::OculusStudios::Platform::Core::IPlatformUser*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::OculusStudios::Platform::Oculus::PlatformUser::PlatformUser() {}
