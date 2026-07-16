#pragma once
// IWYU pragma private; include "BeatSaber/GameSettings/ControllerProfilesModel.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileFileModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfileSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfile_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesModel_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesSaveData_def.hpp"
#include "BeatSaber/GameSettings/zzzz__Controller_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel___c::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3291bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel___c._GetControllerProfilesSaveData_b__27_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::GameSettings::ControllerProfilesModel___c::*)(::BeatSaber::GameSettings::ControllerProfile*)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__27_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3291bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(),
                                                             { "<GetControllerProfilesSaveData>b__27_0", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel___c._GetControllerProfilesSaveData_b__27_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::BeatSaber::GameSettings::ControllerProfileSaveData* (::BeatSaber::GameSettings::ControllerProfilesModel___c::*)(::BeatSaber::GameSettings::ControllerProfile*)>(
        &::BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__27_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3291bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(),
                                                             { "<GetControllerProfilesSaveData>b__27_1", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::setStaticF___9(::BeatSaber::GameSettings::ControllerProfilesModel___c* value) {
  ::cordl_internals::setStaticField<::BeatSaber::GameSettings::ControllerProfilesModel___c*, "<>9", ::BeatSaber::GameSettings::ControllerProfilesModel___c*>(
      std::forward<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(value));
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel___c* BeatSaber::GameSettings::ControllerProfilesModel___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::BeatSaber::GameSettings::ControllerProfilesModel___c*, "<>9", ::BeatSaber::GameSettings::ControllerProfilesModel___c*>();
}
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::setStaticF___9__27_0(::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>*, "<>9__27_0", ::BeatSaber::GameSettings::ControllerProfilesModel___c*>(
      std::forward<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>*>(value));
}
inline ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>* BeatSaber::GameSettings::ControllerProfilesModel___c::getStaticF___9__27_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, bool>*, "<>9__27_0", ::BeatSaber::GameSettings::ControllerProfilesModel___c*>();
}
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::setStaticF___9__27_1(
    ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*, "<>9__27_1",
                                    ::BeatSaber::GameSettings::ControllerProfilesModel___c*>(
      std::forward<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*>(value));
}
inline ::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*
BeatSaber::GameSettings::ControllerProfilesModel___c::getStaticF___9__27_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatSaber::GameSettings::ControllerProfile*, ::BeatSaber::GameSettings::ControllerProfileSaveData*>*, "<>9__27_1",
                                           ::BeatSaber::GameSettings::ControllerProfilesModel___c*>();
}
inline void BeatSaber::GameSettings::ControllerProfilesModel___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__27_0(::BeatSaber::GameSettings::ControllerProfile* profile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(),
                                                           { "<GetControllerProfilesSaveData>b__27_0", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, profile);
}
inline ::BeatSaber::GameSettings::ControllerProfileSaveData*
BeatSaber::GameSettings::ControllerProfilesModel___c::_GetControllerProfilesSaveData_b__27_1(::BeatSaber::GameSettings::ControllerProfile* profile) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel___c*>(),
                                                           { "<GetControllerProfilesSaveData>b__27_1", {}, { ::i2c::type_of<::BeatSaber::GameSettings::ControllerProfile*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfileSaveData*>(this, ___internal_method, profile);
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel___c* BeatSaber::GameSettings::ControllerProfilesModel___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfilesModel___c*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel___c::ControllerProfilesModel___c() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x329187c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3291c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3291c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25.System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3291d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(),
                                                             { "System.Collections.Generic.IEnumerator<BeatSaber.GameSettings.ControllerProfile>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3291d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3291d44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method:
//  ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25.System_Collections_Generic_IEnumerable_BeatSaber_GameSettings_ControllerProfile__GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)()>(
        &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_Generic_IEnumerable_BeatSaber_GameSettings_ControllerProfile__GetEnumerator)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3291d4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(),
                                                             { "System.Collections.Generic.IEnumerable<BeatSaber.GameSettings.ControllerProfile>.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3291dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(),
                                                                                           { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::BeatSaber::GameSettings::ControllerProfile*& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::BeatSaber::GameSettings::ControllerProfile* const& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_set___2__current(::BeatSaber::GameSettings::ControllerProfile* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr int32_t& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfile*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_Generic_IEnumerator_BeatSaber_GameSettings_ControllerProfile__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<BeatSaber.GameSettings.ControllerProfile>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_Generic_IEnumerable_BeatSaber_GameSettings_ControllerProfile__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(),
                                                           { "System.Collections.Generic.IEnumerable<BeatSaber.GameSettings.ControllerProfile>.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(), { "System.Collections.IEnumerable.GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::operator ::System::Collections::Generic::IEnumerable_1<
    ::BeatSaber::GameSettings::ControllerProfile*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::i___System__Collections__Generic__IEnumerable_1___BeatSaber__GameSettings__ControllerProfile__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::operator ::System::Collections::Generic::IEnumerator_1<
    ::BeatSaber::GameSettings::ControllerProfile*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*
BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::i___System__Collections__Generic__IEnumerator_1___BeatSaber__GameSettings__ControllerProfile__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::BeatSaber::GameSettings::ControllerProfile*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__GetBuiltInProfiles_d__25::ControllerProfilesModel__GetBuiltInProfiles_d__25() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x3291ddc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3292020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfilesModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::ControllerProfilesModel__Initialize_d__19(int32_t __1__state,
                                                                                                                          ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                                          ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this,
                                                                                                                          ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__Initialize_d__19::ControllerProfilesModel__Initialize_d__19() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x3292028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3292660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BeatSaber::GameSettings::ControllerProfilesModel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::ControllerProfilesModel__LoadAsync_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::BeatSaber::GameSettings::ControllerProfilesModel* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BeatSaber::GameSettings::ControllerProfilesSaveData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel__LoadAsync_d__20::ControllerProfilesModel__LoadAsync_d__20() {}
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.get_profiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>* (
    ::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::get_profiles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3290dd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "get_profiles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.get_selectedProfileIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3290de0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "get_selectedProfileIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.set_selectedProfileIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::set_selectedProfileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3290de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "set_selectedProfileIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.get_selectedProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3290df0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "get_selectedProfile", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.add_onControllerProfilesUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)(::System::Action_1<bool>*)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::add_onControllerProfilesUI)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3290e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(),
                                                                                           { "add_onControllerProfilesUI", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.remove_onControllerProfilesUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)(::System::Action_1<bool>*)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::remove_onControllerProfilesUI)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3290f08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(),
                                                                                           { "remove_onControllerProfilesUI", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3290fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::Initialize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x329111c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.LoadAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::LoadAsync)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x32911c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "LoadAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.UpdateSelectedProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t, bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::UpdateSelectedProfile)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x3291270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(),
                                                                                           { "UpdateSelectedProfile", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::SaveAsync)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32914ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "SaveAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.OnControllerProfilesUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)(bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::OnControllerProfilesUI)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3291810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "OnControllerProfilesUI", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetSelectedProfileIndexFromSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::GetSelectedProfileIndexFromSettings)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3291830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetSelectedProfileIndexFromSettings", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetBuiltInProfiles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>* (
    ::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::GetBuiltInProfiles)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x32910b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetBuiltInProfiles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.RefreshControllersReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::RefreshControllersReference)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3291444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "RefreshControllersReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetControllerProfilesSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* (
    ::BeatSaber::GameSettings::ControllerProfilesModel::*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::GetControllerProfilesSaveData)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3291568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetControllerProfilesSaveData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetDefaultCustomControllerProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (::BeatSaber::GameSettings::ControllerProfilesModel::*)(int32_t)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultCustomControllerProfile)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x329189c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetDefaultCustomControllerProfile", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetDefaultControllersProfile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::ControllerProfile* (*)(::StringW, int32_t, bool)>(
    &::BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultControllersProfile)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3291a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(),
                                                             { "GetDefaultControllersProfile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::GameSettings::ControllerProfilesModel.GetDefaultController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::GameSettings::Controller (*)()>(&::BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultController)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3291af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetDefaultController", {}, {} })));
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
  this->____fileModel = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
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
  this->____settingsManager = value;
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
constexpr ::System::Action_1<bool>*& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get_onControllerProfilesUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onControllerProfilesUI;
}
constexpr ::System::Action_1<bool>* const& BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_get_onControllerProfilesUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___onControllerProfilesUI;
}
constexpr void BeatSaber::GameSettings::ControllerProfilesModel::__cordl_internal_set_onControllerProfilesUI(::System::Action_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___onControllerProfilesUI = value;
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
  this->____profiles = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>* BeatSaber::GameSettings::ControllerProfilesModel::get_profiles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "get_profiles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::BeatSaber::GameSettings::ControllerProfile*>*>(this, ___internal_method);
}
inline int32_t BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfileIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "get_selectedProfileIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::set_selectedProfileIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "set_selectedProfileIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfilesModel::get_selectedProfile() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "get_selectedProfile", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::add_onControllerProfilesUI(::System::Action_1<bool>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "add_onControllerProfilesUI", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::remove_onControllerProfilesUI(::System::Action_1<bool>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(),
                                                                                         { "remove_onControllerProfilesUI", {}, { ::i2c::type_of<::System::Action_1<bool>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GameSettings::ControllerProfilesModel::LoadAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "LoadAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::UpdateSelectedProfile(int32_t newSelectedProfileIndex, bool forceUpdate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(),
                                                                                         { "UpdateSelectedProfile", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newSelectedProfileIndex, forceUpdate);
}
inline ::System::Threading::Tasks::Task* BeatSaber::GameSettings::ControllerProfilesModel::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "SaveAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::OnControllerProfilesUI(bool opened) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "OnControllerProfilesUI", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, opened);
}
inline int32_t BeatSaber::GameSettings::ControllerProfilesModel::GetSelectedProfileIndexFromSettings(int32_t builtInProfilesCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetSelectedProfileIndexFromSettings", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, builtInProfilesCount);
}
inline ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>* BeatSaber::GameSettings::ControllerProfilesModel::GetBuiltInProfiles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetBuiltInProfiles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfile*>*>(this, ___internal_method);
}
inline void BeatSaber::GameSettings::ControllerProfilesModel::RefreshControllersReference() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "RefreshControllersReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>* BeatSaber::GameSettings::ControllerProfilesModel::GetControllerProfilesSaveData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetControllerProfilesSaveData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::BeatSaber::GameSettings::ControllerProfileSaveData*>*>(this, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultCustomControllerProfile(int32_t profileIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetDefaultCustomControllerProfile", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*>(this, ___internal_method, profileIndex);
}
inline ::BeatSaber::GameSettings::ControllerProfile* BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultControllersProfile(::StringW localizationKey, int32_t index, bool modifiable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(),
                                                           { "GetDefaultControllersProfile", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::ControllerProfile*>(nullptr, ___internal_method, localizationKey, index, modifiable);
}
inline ::BeatSaber::GameSettings::Controller BeatSaber::GameSettings::ControllerProfilesModel::GetDefaultController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::GameSettings::ControllerProfilesModel*>(), { "GetDefaultController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::GameSettings::Controller>(nullptr, ___internal_method);
}
inline ::BeatSaber::GameSettings::ControllerProfilesModel* BeatSaber::GameSettings::ControllerProfilesModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::GameSettings::ControllerProfilesModel*>());
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
