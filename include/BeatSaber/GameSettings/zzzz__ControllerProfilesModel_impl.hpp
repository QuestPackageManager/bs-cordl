#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfilesModel.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IInitializable_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileFileModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfile_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel___c::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel___c._GetControllerProfilesSaveData_b__23_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::ControllerProfilesModel___c::*)(::BeatSaber::GameSettings::ControllerProfile*)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__23_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x226f7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get(), "<GetControllerProfilesSaveData>b__23_0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::ControllerProfile*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel___c._GetControllerProfilesSaveData_b__23_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::GameSettings::ControllerProfileSaveData* (::BeatSaber::GameSettings::ControllerProfilesModel___c::*)(::BeatSaber::GameSettings::ControllerProfile*)>(
        &::BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__23_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x226f7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get(), "<GetControllerProfilesSaveData>b__23_1",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::ControllerProfile*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::setStaticF___9(::BeatSaber::GameSettings::ControllerProfilesModel___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::GameSettings::ControllerProfilesModel___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get>(
      std::forward<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(value));
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel___c* BeatSaber::GameSettings::ControllerProfilesModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::GameSettings::ControllerProfilesModel___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get>();
}
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::setStaticF___9__23_0(::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>*, "<>9__23_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>*>(value));
}
inline ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>* BeatSaber::GameSettings::ControllerProfilesModel___c::getStaticF___9__23_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>*, "<>9__23_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get>();
}
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::setStaticF___9__23_1(
    ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*, "<>9__23_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get>(
      std::forward<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*>(value));
}
inline ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*
BeatSaber::GameSettings::ControllerProfilesModel___c::getStaticF___9__23_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*, "<>9__23_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get>();
}
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__23_0(::BeatSaber::GameSettings::ControllerProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get(), "<GetControllerProfilesSaveData>b__23_0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::ControllerProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, profile);
}
inline ::BeatSaber::GameSettings::ControllerProfileSaveData*
BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__23_1(::BeatSaber::GameSettings::ControllerProfile* profile) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel___c*>::get(), "<GetControllerProfilesSaveData>b__23_1",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::GameSettings::ControllerProfile*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfileSaveData*, false>(this, ___internal_method, profile);
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel___c* BeatSaber::GameSettings::ControllerProfilesModel___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::ControllerProfilesModel___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel___c::ControllerProfilesModel___c() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x226f3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x226f89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x226f8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21.System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)()>(
        &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
        "System.Collections.Generic.IEnumerator<BeatSaber.GameSettings.ControllerProfile>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x226f92c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226f964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21.System_Collections_Generic_IEnumerable_BeatSaber_GameSettings_ControllerProfile__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)()>(
        &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_Generic_IEnumerable_BeatSaber_GameSettings_ControllerProfile__GetEnumerator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x226f96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
        "System.Collections.Generic.IEnumerable<BeatSaber.GameSettings.ControllerProfile>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::IEnumerator* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::*)()>(
        &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x226f9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::BeatSaber::GameSettings::ControllerProfile*& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::BeatSaber::GameSettings::ControllerProfile* const& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_set___2__current(::BeatSaber::GameSettings::ControllerProfile* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfile*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
      "System.Collections.Generic.IEnumerator<BeatSaber.GameSettings.ControllerProfile>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_Generic_IEnumerable_BeatSaber_GameSettings_ControllerProfile__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
      "System.Collections.Generic.IEnumerable<BeatSaber.GameSettings.ControllerProfile>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::operator ::System::Collections::Generic::IEnumerable_1<
    ::BeatSaber::GameSettings::ControllerProfile*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::i___System__Collections__Generic__IEnumerable_1___BeatSaber__GameSettings__ControllerProfile__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::operator ::System::Collections::Generic::IEnumerator_1<
    ::BeatSaber::GameSettings::ControllerProfile*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::i___System__Collections__Generic__IEnumerator_1___BeatSaber__GameSettings__ControllerProfile__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__21::ControllerProfilesModel__GetBuiltInProfiles_d__21() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x226fa00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x226fc28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfilesModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::ControllerProfilesModel__Initialize_d__16(int32_t __1__state,
                                                                                                                          ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                          ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this,
                                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__16::ControllerProfilesModel__Initialize_d__16() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x226fc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2270240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfilesModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::ControllerProfilesModel__LoadAsync_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__17::ControllerProfilesModel__LoadAsync_d__17() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.get_profiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>* (
    ::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::get_profiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226eb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "get_profiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.get_selectedProfileIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226eb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "get_selectedProfileIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.set_selectedProfileIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::set_selectedProfileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226eb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "set_selectedProfileIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.get_selectedProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfile)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x226eb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "get_selectedProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x226eb90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::Initialize)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x226ecd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.LoadAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::LoadAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x226ed68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "LoadAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.UpdateSelectedProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t, bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::UpdateSelectedProfile)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x226ee28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "UpdateSelectedProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::SaveAsync)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x226f098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "SaveAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetSelectedProfileIndexFromSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::GetSelectedProfileIndexFromSettings)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x226f390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "GetSelectedProfileIndexFromSettings",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetBuiltInProfiles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>* (
    ::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::GetBuiltInProfiles)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x226ec70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "GetBuiltInProfiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.RefreshControllersReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::RefreshControllersReference)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x226eff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "RefreshControllersReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetControllerProfilesSaveData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* (
    ::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::GetControllerProfilesSaveData)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x226f110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "GetControllerProfilesSaveData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetDefaultCustomControllerProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultCustomControllerProfile)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x226f418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "GetDefaultCustomControllerProfile",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetDefaultControllersProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (*)(::StringW, int32_t, bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultControllersProfile)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x226f62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "GetDefaultControllersProfile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetDefaultController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::GameSettings::Controller (*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultController)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x226f708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                               "GetDefaultController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel*& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__fileModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileModel;
}
constexpr ::BeatSaber::GameSettings::ControllerProfileFileModel* const& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__fileModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileModel;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_set__fileModel(::BeatSaber::GameSettings::ControllerProfileFileModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__vrPlatformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__vrPlatformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrPlatformHelper;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPlatformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__selectedProfileIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedProfileIndex_k__BackingField;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__selectedProfileIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedProfileIndex_k__BackingField;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_set__selectedProfileIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedProfileIndex_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>*& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__profiles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profiles;
}
constexpr ::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>* const& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__profiles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____profiles;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_set__profiles(::System::Collections::Generic::List_1<::BeatSaber::GameSettings::ControllerProfile*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____profiles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>* BeatSaber::GameSettings::ControllerProfilesModel::get_profiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "get_profiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>*, false>(this, ___internal_method);
}
inline int32_t BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfileIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "get_selectedProfileIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::set_selectedProfileIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "set_selectedProfileIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfile() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "get_selectedProfile", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "Initialize", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GameSettings::ControllerProfilesModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "LoadAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::UpdateSelectedProfile(int32_t newSelectedProfileIndex, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "UpdateSelectedProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSelectedProfileIndex, forceUpdate);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GameSettings::ControllerProfilesModel::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "SaveAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
inline int32_t BeatSaber::GameSettings::ControllerProfilesModel::GetSelectedProfileIndexFromSettings(int32_t builtInProfilesCount) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "GetSelectedProfileIndexFromSettings",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, builtInProfilesCount);
}
inline ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>* BeatSaber::GameSettings::ControllerProfilesModel::GetBuiltInProfiles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "GetBuiltInProfiles", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*, false>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::RefreshControllersReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "RefreshControllersReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* BeatSaber::GameSettings::ControllerProfilesModel::GetControllerProfilesSaveData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "GetControllerProfilesSaveData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*, false>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultCustomControllerProfile(int32_t profileIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "GetDefaultCustomControllerProfile",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*, false>(this, ___internal_method, profileIndex);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultControllersProfile(::StringW localizationKey, int32_t index, bool modifiable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(), "GetDefaultControllersProfile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*, false>(nullptr, ___internal_method, localizationKey, index, modifiable);
}
inline ::BeatSaber::GameSettings::Controller BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::GameSettings::ControllerProfilesModel*>::get(),
                                                                             "GetDefaultController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::Controller, false>(nullptr, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel* BeatSaber::GameSettings::ControllerProfilesModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::GameSettings::ControllerProfilesModel*>());
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr BeatSaber::GameSettings::ControllerProfilesModel::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* BeatSaber::GameSettings::ControllerProfilesModel::i___Zenject__IInitializable() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel::ControllerProfilesModel() {}
