#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAchievementHandler_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__OculusPlatformAchievementHandler_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgressList_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementProgress_def.hpp"
#include "Oculus/Platform/Models/zzzz__AchievementUpdate_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23679a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0._UnlockAchievement_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*>*)>(&::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::_UnlockAchievement_b__0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2367aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0*>::get(), "<UnlockAchievement>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*&
GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::__cordl_internal_get_completionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*> const&
GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::__cordl_internal_get_completionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::__cordl_internal_set_completionHandler(
    ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completionHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0* GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0*>());
}
inline void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::_UnlockAchievement_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0*>::get(), "<UnlockAchievement>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementUpdate*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass2_0::__OculusPlatformAchievementHandler____c__DisplayClass2_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2367a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0._GetUnlockedAchievements_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*)>(
        &::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::_GetUnlockedAchievements_b__0)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x2367aec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0*>::get(), "<GetUnlockedAchievements>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*&
GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::__cordl_internal_get_completionHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*> const&
GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::__cordl_internal_get_completionHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___completionHandler;
}
constexpr void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::__cordl_internal_set_completionHandler(
    ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___completionHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OculusPlatformAchievementHandler*& GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OculusPlatformAchievementHandler*> const&
GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::__cordl_internal_set___4__this(::GlobalNamespace::OculusPlatformAchievementHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0* GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0*>());
}
inline void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::_GetUnlockedAchievements_b__0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0*>::get(), "<GetUnlockedAchievements>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_0::__OculusPlatformAchievementHandler____c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::*)()>(
    &::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2368014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1._GetUnlockedAchievements_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::*)(
    ::GlobalNamespace::AchievementSO*)>(&::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::_GetUnlockedAchievements_b__1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x236801c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1*>::get(), "<GetUnlockedAchievements>b__1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::Oculus::Platform::Models::AchievementProgress*& GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::__cordl_internal_get_achievement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievement;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::AchievementProgress*> const&
GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::__cordl_internal_get_achievement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievement;
}
constexpr void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::__cordl_internal_set_achievement(::Oculus::Platform::Models::AchievementProgress* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___achievement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1* GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1*>());
}
inline void GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::_GetUnlockedAchievements_b__1(::GlobalNamespace::AchievementSO* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1*>::get(), "<GetUnlockedAchievements>b__1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OculusPlatformAchievementHandler____c__DisplayClass3_1::__OculusPlatformAchievementHandler____c__DisplayClass3_1() {}
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAchievementHandler.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformAchievementHandler::*)()>(
    &::GlobalNamespace::OculusPlatformAchievementHandler::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23678ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAchievementHandler.UnlockAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::OculusPlatformAchievementHandler::*)(::StringW, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*)>(
    &::GlobalNamespace::OculusPlatformAchievementHandler::UnlockAchievement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x23678b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(), "UnlockAchievement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAchievementHandler.GetUnlockedAchievements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::OculusPlatformAchievementHandler::*)(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*)>(
    &::GlobalNamespace::OculusPlatformAchievementHandler::GetUnlockedAchievements)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x23679ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(), "GetUnlockedAchievements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OculusPlatformAchievementHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OculusPlatformAchievementHandler::*)()>(
    &::GlobalNamespace::OculusPlatformAchievementHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2367aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPlatformAchievementsHandler"
constexpr GlobalNamespace::OculusPlatformAchievementHandler::operator ::GlobalNamespace::IPlatformAchievementsHandler*() noexcept {
  return static_cast<::GlobalNamespace::IPlatformAchievementsHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPlatformAchievementsHandler"
constexpr ::GlobalNamespace::IPlatformAchievementsHandler* GlobalNamespace::OculusPlatformAchievementHandler::i___GlobalNamespace__IPlatformAchievementsHandler() noexcept {
  return static_cast<::GlobalNamespace::IPlatformAchievementsHandler*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO>& GlobalNamespace::OculusPlatformAchievementHandler::__cordl_internal_get__achievementIdsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr ::UnityW<::GlobalNamespace::AchievementIdsModelSO> const& GlobalNamespace::OculusPlatformAchievementHandler::__cordl_internal_get__achievementIdsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____achievementIdsModel;
}
constexpr void GlobalNamespace::OculusPlatformAchievementHandler::__cordl_internal_set__achievementIdsModel(::UnityW<::GlobalNamespace::AchievementIdsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____achievementIdsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OculusPlatformAchievementHandler::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::OculusPlatformAchievementHandler::UnlockAchievement(::StringW achievementId,
                                                                     ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(), "UnlockAchievement", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, achievementId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::OculusPlatformAchievementHandler::GetUnlockedAchievements(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* completionHandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(), "GetUnlockedAchievements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, completionHandler);
}
inline ::GlobalNamespace::OculusPlatformAchievementHandler* GlobalNamespace::OculusPlatformAchievementHandler::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OculusPlatformAchievementHandler*>());
}
inline void GlobalNamespace::OculusPlatformAchievementHandler::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OculusPlatformAchievementHandler*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OculusPlatformAchievementHandler::OculusPlatformAchievementHandler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
