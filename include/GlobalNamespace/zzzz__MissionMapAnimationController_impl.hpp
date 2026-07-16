#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionMapAnimationController.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionMapAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MenuShockwave_def.hpp"
#include "GlobalNamespace/zzzz__MissionMapAnimationController_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
#include "GlobalNamespace/zzzz__MissionNode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController___c::*)()>(&::GlobalNamespace::MissionMapAnimationController___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController___c._UpdateNodesAndConnectionCoroutine_b__15_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MissionMapAnimationController___c::*)(::GlobalNamespace::MissionNodeConnection*)>(
    &::GlobalNamespace::MissionMapAnimationController___c::_UpdateNodesAndConnectionCoroutine_b__15_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5938ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController___c*>(),
                                                             { "<UpdateNodesAndConnectionCoroutine>b__15_0", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeConnection*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController___c._UpdateNodesAndConnectionCoroutine_b__15_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MissionMapAnimationController___c::*)(::GlobalNamespace::MissionNodeConnection*)>(
    &::GlobalNamespace::MissionMapAnimationController___c::_UpdateNodesAndConnectionCoroutine_b__15_1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5938ce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController___c*>(),
                                                             { "<UpdateNodesAndConnectionCoroutine>b__15_1", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeConnection*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MissionMapAnimationController___c::setStaticF___9(::GlobalNamespace::MissionMapAnimationController___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MissionMapAnimationController___c*, "<>9", ::GlobalNamespace::MissionMapAnimationController___c*>(
      std::forward<::GlobalNamespace::MissionMapAnimationController___c*>(value));
}
inline ::GlobalNamespace::MissionMapAnimationController___c* GlobalNamespace::MissionMapAnimationController___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MissionMapAnimationController___c*, "<>9", ::GlobalNamespace::MissionMapAnimationController___c*>();
}
inline void GlobalNamespace::MissionMapAnimationController___c::setStaticF___9__15_0(::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>*, "<>9__15_0", ::GlobalNamespace::MissionMapAnimationController___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* GlobalNamespace::MissionMapAnimationController___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>*, "<>9__15_0", ::GlobalNamespace::MissionMapAnimationController___c*>();
}
inline void GlobalNamespace::MissionMapAnimationController___c::setStaticF___9__15_1(::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>*, "<>9__15_1", ::GlobalNamespace::MissionMapAnimationController___c*>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>* GlobalNamespace::MissionMapAnimationController___c::getStaticF___9__15_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::MissionNodeConnection>, float_t>*, "<>9__15_1", ::GlobalNamespace::MissionMapAnimationController___c*>();
}
inline void GlobalNamespace::MissionMapAnimationController___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t GlobalNamespace::MissionMapAnimationController___c::_UpdateNodesAndConnectionCoroutine_b__15_0(::GlobalNamespace::MissionNodeConnection* connection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController___c*>(),
                                                           { "<UpdateNodesAndConnectionCoroutine>b__15_0", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, connection);
}
inline float_t GlobalNamespace::MissionMapAnimationController___c::_UpdateNodesAndConnectionCoroutine_b__15_1(::GlobalNamespace::MissionNodeConnection* connection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController___c*>(),
                                                           { "<UpdateNodesAndConnectionCoroutine>b__15_1", {}, { ::i2c::type_of<::GlobalNamespace::MissionNodeConnection*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, connection);
}
inline ::GlobalNamespace::MissionMapAnimationController___c* GlobalNamespace::MissionMapAnimationController___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionMapAnimationController___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionMapAnimationController___c::MissionMapAnimationController___c() {}
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::*)(int32_t)>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::MoveNext)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5938d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5938e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(),
                                                                                           { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(),
                                                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode>& GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get_lastClearedMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastClearedMissionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode> const& GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get_lastClearedMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastClearedMissionNode;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_set_lastClearedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastClearedMissionNode = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const&
GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(),
                                                                                         { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*
GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13::MissionMapAnimationController__UpdateClearedNodeStateCoroutine_d__13() {}
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::*)(int32_t)>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5938e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::MoveNext)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5938e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5939048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5939050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5939088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(),
                                                                                           { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode>& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get_lastClearedMissionNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastClearedMissionNode;
}
constexpr ::UnityW<::GlobalNamespace::MissionNode> const& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get_lastClearedMissionNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastClearedMissionNode;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_set_lastClearedMissionNode(::UnityW<::GlobalNamespace::MissionNode> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastClearedMissionNode = value;
}
constexpr ::System::Action*& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get_finishCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr ::System::Action* const& GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_get_finishCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishCallback;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::__cordl_internal_set_finishCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishCallback = value;
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*
GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12::MissionMapAnimationController__UpdateMissionMapCoroutine_d__12() {}
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::*)(int32_t)>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5939090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5939094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5939624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(),
                                                             { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x593962c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5939664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const&
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>>&
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get__newEnabledConnection_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newEnabledConnection_5__2;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> const&
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get__newEnabledConnection_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____newEnabledConnection_5__2;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_set__newEnabledConnection_5__2(
    ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____newEnabledConnection_5__2 = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>>& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> const&
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_set___7__wrap2(::ArrayW<::UnityW<::GlobalNamespace::MissionNodeConnection>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
constexpr int32_t& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___7__wrap3() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr int32_t const& GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_get___7__wrap3() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap3;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::__cordl_internal_set___7__wrap3(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap3 = value;
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(),
                                                                                         { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(),
                                                                                         { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15::MissionMapAnimationController__UpdateNodesAndConnectionCoroutine_d__15() {}
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::*)(int32_t)>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5938bdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x593966c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5939670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59398f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(),
                                                                                           { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5939900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::*)()>(
    &::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5939938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController>& GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionMapAnimationController> const& GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionMapAnimationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::_ctor(int32_t __1__state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(),
                                                                                         { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14* GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionMapAnimationController__UpdateStageCoroutine_d__14::MissionMapAnimationController__UpdateStageCoroutine_d__14() {}
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController.get_animatedUpdateIsRequired
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionMapAnimationController::*)()>(&::GlobalNamespace::MissionMapAnimationController::get_animatedUpdateIsRequired)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5938624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "get_animatedUpdateIsRequired", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController.ScrollToTopMostNotClearedMission
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController::*)()>(
    &::GlobalNamespace::MissionMapAnimationController::ScrollToTopMostNotClearedMission)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5938754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "ScrollToTopMostNotClearedMission", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController.UpdateMissionMapAfterMissionWasCleared
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController::*)(bool, ::System::Action*)>(
    &::GlobalNamespace::MissionMapAnimationController::UpdateMissionMapAfterMissionWasCleared)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5938984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(),
                                                             { "UpdateMissionMapAfterMissionWasCleared", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController.UpdateMissionMapCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionMapAnimationController::*)(::GlobalNamespace::MissionNode*, ::System::Action*)>(
    &::GlobalNamespace::MissionMapAnimationController::UpdateMissionMapCoroutine)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5938ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(),
                                                             { "UpdateMissionMapCoroutine", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController.UpdateClearedNodeStateCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionMapAnimationController::*)(::GlobalNamespace::MissionNode*)>(
    &::GlobalNamespace::MissionMapAnimationController::UpdateClearedNodeStateCoroutine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5938b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(),
                                                                                           { "UpdateClearedNodeStateCoroutine", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController.UpdateStageCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionMapAnimationController::*)()>(
    &::GlobalNamespace::MissionMapAnimationController::UpdateStageCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5938b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "UpdateStageCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController.UpdateNodesAndConnectionCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionMapAnimationController::*)()>(
    &::GlobalNamespace::MissionMapAnimationController::UpdateNodesAndConnectionCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5938be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "UpdateNodesAndConnectionCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionMapAnimationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionMapAnimationController::*)()>(&::GlobalNamespace::MissionMapAnimationController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5938c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager>& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__missionNodesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionNodesManager> const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__missionNodesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionNodesManager;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__missionNodesManager(::UnityW<::GlobalNamespace::MissionNodesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionNodesManager = value;
}
constexpr ::UnityW<::HMUI::ScrollView>& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__mapScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapScrollView;
}
constexpr ::UnityW<::HMUI::ScrollView> const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__mapScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mapScrollView;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__mapScrollView(::UnityW<::HMUI::ScrollView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mapScrollView = value;
}
constexpr float_t& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__startDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startDelay;
}
constexpr float_t const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__startDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startDelay;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__startDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startDelay = value;
}
constexpr float_t& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__stageAnimationStartDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stageAnimationStartDelay;
}
constexpr float_t const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__stageAnimationStartDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stageAnimationStartDelay;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__stageAnimationStartDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stageAnimationStartDelay = value;
}
constexpr float_t& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__missionConnectionAnimationStartDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionConnectionAnimationStartDelay;
}
constexpr float_t const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__missionConnectionAnimationStartDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionConnectionAnimationStartDelay;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__missionConnectionAnimationStartDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionConnectionAnimationStartDelay = value;
}
constexpr float_t& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__missionConnectionAnimationSeparationTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionConnectionAnimationSeparationTime;
}
constexpr float_t const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__missionConnectionAnimationSeparationTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missionConnectionAnimationSeparationTime;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__missionConnectionAnimationSeparationTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missionConnectionAnimationSeparationTime = value;
}
constexpr float_t& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__stageAnimationDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stageAnimationDuration;
}
constexpr float_t const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__stageAnimationDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stageAnimationDuration;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__stageAnimationDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stageAnimationDuration = value;
}
constexpr ::UnityW<::GlobalNamespace::MenuShockwave>& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__shockwaveEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwaveEffect;
}
constexpr ::UnityW<::GlobalNamespace::MenuShockwave> const& GlobalNamespace::MissionMapAnimationController::__cordl_internal_get__shockwaveEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shockwaveEffect;
}
constexpr void GlobalNamespace::MissionMapAnimationController::__cordl_internal_set__shockwaveEffect(::UnityW<::GlobalNamespace::MenuShockwave> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shockwaveEffect = value;
}
inline bool GlobalNamespace::MissionMapAnimationController::get_animatedUpdateIsRequired() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "get_animatedUpdateIsRequired", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionMapAnimationController::ScrollToTopMostNotClearedMission() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "ScrollToTopMostNotClearedMission", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MissionMapAnimationController::UpdateMissionMapAfterMissionWasCleared(bool animated, ::System::Action* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(),
                                                           { "UpdateMissionMapAfterMissionWasCleared", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated, finishCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateMissionMapCoroutine(::GlobalNamespace::MissionNode* lastClearedMissionNode,
                                                                                                                     ::System::Action* finishCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(),
                                                           { "UpdateMissionMapCoroutine", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>(), ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, lastClearedMissionNode, finishCallback);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateClearedNodeStateCoroutine(::GlobalNamespace::MissionNode* lastClearedMissionNode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(),
                                                                                         { "UpdateClearedNodeStateCoroutine", {}, { ::i2c::type_of<::GlobalNamespace::MissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method, lastClearedMissionNode);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateStageCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "UpdateStageCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionMapAnimationController::UpdateNodesAndConnectionCoroutine() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { "UpdateNodesAndConnectionCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::MissionMapAnimationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionMapAnimationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionMapAnimationController* GlobalNamespace::MissionMapAnimationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionMapAnimationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionMapAnimationController::MissionMapAnimationController() {}
