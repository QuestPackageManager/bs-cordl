#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14937e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0._UnlockAchievement_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::*)(
    ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult)>(&::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_UnlockAchievement_b__0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x14939d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(), "<UnlockAchievement>b__0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO>& GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::AchievementsModelSO> const& GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AchievementsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__cordl_internal_get_achievementId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementId;
}
constexpr ::StringW const& GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__cordl_internal_get_achievementId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___achievementId;
}
constexpr void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__cordl_internal_set_achievementId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___achievementId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0* GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::_UnlockAchievement_b__0(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0*>::get(), "<UnlockAchievement>b__0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__AchievementsModelSO____c__DisplayClass4_0::__AchievementsModelSO____c__DisplayClass4_0() {}
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)()>(&::GlobalNamespace::AchievementsModelSO::Initialize)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x149274c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), "Initialize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO.UnlockAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)(::GlobalNamespace::AchievementSO*)>(
    &::GlobalNamespace::AchievementsModelSO::UnlockAchievement)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x1493598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), "UnlockAchievement", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)()>(&::GlobalNamespace::AchievementsModelSO::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x14938b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AchievementsModelSO._Initialize_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AchievementsModelSO::*)(
    ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::GlobalNamespace::AchievementsModelSO::_Initialize_b__3_0)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x1493930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), "<Initialize>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IPlatformAchievementsHandler*& GlobalNamespace::AchievementsModelSO::__cordl_internal_get__platformAchievementsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformAchievementsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformAchievementsHandler*> const& GlobalNamespace::AchievementsModelSO::__cordl_internal_get__platformAchievementsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformAchievementsHandler;
}
constexpr void GlobalNamespace::AchievementsModelSO::__cordl_internal_set__platformAchievementsHandler(::GlobalNamespace::IPlatformAchievementsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformAchievementsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::AchievementsModelSO::__cordl_internal_get__unlockedAchievementIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unlockedAchievementIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const& GlobalNamespace::AchievementsModelSO::__cordl_internal_get__unlockedAchievementIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____unlockedAchievementIds;
}
constexpr void GlobalNamespace::AchievementsModelSO::__cordl_internal_set__unlockedAchievementIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unlockedAchievementIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::AchievementsModelSO::__cordl_internal_get__initialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr bool const& GlobalNamespace::AchievementsModelSO::__cordl_internal_get__initialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initialized;
}
constexpr void GlobalNamespace::AchievementsModelSO::__cordl_internal_set__initialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initialized = value;
}
inline void GlobalNamespace::AchievementsModelSO::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), "Initialize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AchievementsModelSO::UnlockAchievement(::GlobalNamespace::AchievementSO* achievement) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), "UnlockAchievement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AchievementSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, achievement);
}
inline ::GlobalNamespace::AchievementsModelSO* GlobalNamespace::AchievementsModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::AchievementsModelSO*>());
}
inline void GlobalNamespace::AchievementsModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AchievementsModelSO::_Initialize_b__3_0(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result,
                                                                     ::ArrayW<::StringW, ::Array<::StringW>*> achievementIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AchievementsModelSO*>::get(), "<Initialize>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, achievementIds);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AchievementsModelSO::AchievementsModelSO() {}
