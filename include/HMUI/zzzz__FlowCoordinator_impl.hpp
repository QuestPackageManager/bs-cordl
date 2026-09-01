#pragma once
// IWYU pragma private; include "HMUI\FlowCoordinator.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__FlowCoordinator_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "HMUI/zzzz__ScreenSystem_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass39_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass39_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f1c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass39_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass39_0._PresentFlowCoordinator_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass39_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass39_0::_PresentFlowCoordinator_b__1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32f3c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass39_0*>(), { "<PresentFlowCoordinator>b__1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass39_0._PresentFlowCoordinator_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass39_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass39_0::_PresentFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32f3c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass39_0*>(), { "<PresentFlowCoordinator>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_get_flowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_get_flowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flowCoordinator = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass39_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass39_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass39_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass39_0::_PresentFlowCoordinator_b__1() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass39_0*>(), { "<PresentFlowCoordinator>b__1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass39_0::_PresentFlowCoordinator_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass39_0*>(), { "<PresentFlowCoordinator>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass39_0* HMUI::FlowCoordinator___c__DisplayClass39_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass39_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass39_0::FlowCoordinator___c__DisplayClass39_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass40_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f22a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass40_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass40_0._DismissFlowCoordinator_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass40_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass40_0::_DismissFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x32f3d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass40_0*>(), { "<DismissFlowCoordinator>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewController = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_flowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_get_flowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass40_0::__cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flowCoordinator = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass40_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass40_0::_DismissFlowCoordinator_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass40_0*>(), { "<DismissFlowCoordinator>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass40_0* HMUI::FlowCoordinator___c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass40_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass40_0::FlowCoordinator___c__DisplayClass40_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass43_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass43_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass43_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f279c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass43_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass43_0._ReplaceChildFlowCoordinator_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass43_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass43_0::_ReplaceChildFlowCoordinator_b__0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x32f3da8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass43_0*>(), { "<ReplaceChildFlowCoordinator>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get_flowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get_flowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinator;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_set_flowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flowCoordinator = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get_flowCoordinatorToReplace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinatorToReplace;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_get_flowCoordinatorToReplace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flowCoordinatorToReplace;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass43_0::__cordl_internal_set_flowCoordinatorToReplace(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flowCoordinatorToReplace = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass43_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass43_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass43_0::_ReplaceChildFlowCoordinator_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass43_0*>(), { "<ReplaceChildFlowCoordinator>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass43_0* HMUI::FlowCoordinator___c__DisplayClass43_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass43_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass43_0::FlowCoordinator___c__DisplayClass43_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass44_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass44_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f27a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass44_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass44_0._PresentViewController_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass44_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass44_0::_PresentViewController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32f3e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass44_0*>(), { "<PresentViewController>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get_topViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_get_topViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topViewController;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass44_0::__cordl_internal_set_topViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topViewController = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass44_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass44_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass44_0::_PresentViewController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass44_0*>(), { "<PresentViewController>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass44_0* HMUI::FlowCoordinator___c__DisplayClass44_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass44_0::FlowCoordinator___c__DisplayClass44_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass45_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass45_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f2b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass45_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass45_0._DismissViewController_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass45_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass45_0::_DismissViewController_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x32f3ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass45_0*>(), { "<DismissViewController>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_newTopViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newTopViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_newTopViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newTopViewController;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_set_newTopViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newTopViewController = value;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>*& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_taskCompletionSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* const& HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_get_taskCompletionSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___taskCompletionSource;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass45_0::__cordl_internal_set_taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___taskCompletionSource = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass45_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass45_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass45_0::_DismissViewController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass45_0*>(), { "<DismissViewController>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass45_0* HMUI::FlowCoordinator___c__DisplayClass45_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass45_0::FlowCoordinator___c__DisplayClass45_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass47_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass47_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f2c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass47_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass47_0._ReplaceTopViewController_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass47_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass47_0::_ReplaceTopViewController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32f3f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass47_0*>(), { "<ReplaceTopViewController>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::HMUI::ViewController_AnimationType& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get_animationType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationType;
}
constexpr ::HMUI::ViewController_AnimationType const& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get_animationType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___animationType;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_set_animationType(::HMUI::ViewController_AnimationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___animationType = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get_originalTopViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalTopViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_get_originalTopViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalTopViewController;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass47_0::__cordl_internal_set_originalTopViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalTopViewController = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass47_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass47_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass47_0::_ReplaceTopViewController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass47_0*>(), { "<ReplaceTopViewController>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass47_0* HMUI::FlowCoordinator___c__DisplayClass47_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass47_0::FlowCoordinator___c__DisplayClass47_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass48_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass48_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f2d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass48_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass48_0._PushViewControllerToNavigationController_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass48_0::*)()>(
    &::HMUI::FlowCoordinator___c__DisplayClass48_0::_PushViewControllerToNavigationController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32f4008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass48_0*>(), { "<PushViewControllerToNavigationController>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass48_0::__cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___viewController = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass48_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass48_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass48_0::_PushViewControllerToNavigationController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass48_0*>(), { "<PushViewControllerToNavigationController>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass48_0* HMUI::FlowCoordinator___c__DisplayClass48_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass48_0::FlowCoordinator___c__DisplayClass48_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass51_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass51_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass51_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f302c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass51_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass51_0._PopViewControllerFromNavigationController_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass51_0::*)()>(
    &::HMUI::FlowCoordinator___c__DisplayClass51_0::_PopViewControllerFromNavigationController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32f4088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass51_0*>(), { "<PopViewControllerFromNavigationController>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::NavigationController>& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get_navigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr ::UnityW<::HMUI::NavigationController> const& HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_get_navigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass51_0::__cordl_internal_set_navigationController(::UnityW<::HMUI::NavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___navigationController = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass51_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass51_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass51_0::_PopViewControllerFromNavigationController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass51_0*>(), { "<PopViewControllerFromNavigationController>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass51_0* HMUI::FlowCoordinator___c__DisplayClass51_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass51_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass51_0::FlowCoordinator___c__DisplayClass51_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass52_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass52_0::*)()>(&::HMUI::FlowCoordinator___c__DisplayClass52_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f31a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass52_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator___c__DisplayClass52_0._PopViewControllersFromNavigationController_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator___c__DisplayClass52_0::*)()>(
    &::HMUI::FlowCoordinator___c__DisplayClass52_0::_PopViewControllersFromNavigationController_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32f4108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass52_0*>(), { "<PopViewControllersFromNavigationController>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get_immediately() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr bool const& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get_immediately() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___immediately;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_set_immediately(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___immediately = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_set___4__this(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
constexpr ::System::Action*& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get_finishedCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr ::System::Action* const& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get_finishedCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___finishedCallback;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_set_finishedCallback(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___finishedCallback = value;
}
constexpr ::UnityW<::HMUI::NavigationController>& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get_navigationController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr ::UnityW<::HMUI::NavigationController> const& HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_get_navigationController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___navigationController;
}
constexpr void HMUI::FlowCoordinator___c__DisplayClass52_0::__cordl_internal_set_navigationController(::UnityW<::HMUI::NavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___navigationController = value;
}
inline void HMUI::FlowCoordinator___c__DisplayClass52_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass52_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator___c__DisplayClass52_0::_PopViewControllersFromNavigationController_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator___c__DisplayClass52_0*>(), { "<PopViewControllersFromNavigationController>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator___c__DisplayClass52_0* HMUI::FlowCoordinator___c__DisplayClass52_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator___c__DisplayClass52_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator___c__DisplayClass52_0::FlowCoordinator___c__DisplayClass52_0() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::*)()>(
    &::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::MoveNext)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x32f4188;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32f44c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::HMUI::FlowCoordinator> __4__this, bool immediately,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->immediately = immediately;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41::FlowCoordinator__DismissChildFlowCoordinatorsRecursively_d__41() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::*)()>(
    &::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::MoveNext)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x32f4534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x32f4784;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::HMUI::FlowCoordinator>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "immediately", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::FlowCoordinator__DismissChildViewControllersRecursively_d__42(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::HMUI::FlowCoordinator> __4__this, bool immediately,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->immediately = immediately;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator__DismissChildViewControllersRecursively_d__42::FlowCoordinator__DismissChildViewControllersRecursively_d__42() {}
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_topViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_topViewController)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32f0c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_topViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_rightScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_rightScreenViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f0c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_rightScreenViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_childFlowCoordinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::FlowCoordinator> (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_childFlowCoordinator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f0c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_childFlowCoordinator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_isActivated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_isActivated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f0ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_isActivated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_isInTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_isInTransition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f0cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_isInTransition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_title
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_title)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f0cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_title", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::StringW, ::HMUI::ViewController_AnimationType)>(&::HMUI::FlowCoordinator::SetTitle)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32f0cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "SetTitle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.set_showBackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::set_showBackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f0e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "set_showBackButton", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.get_showBackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::get_showBackButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f0e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_showBackButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__StartOnScreenSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ScreenSystem*)>(&::HMUI::FlowCoordinator::__StartOnScreenSystem)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x32f0e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "__StartOnScreenSystem", {}, { ::i2c::type_of<::HMUI::ScreenSystem*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentFlowCoordinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::ViewController_AnimationDirection, bool, bool)>(
    &::HMUI::FlowCoordinator::PresentFlowCoordinator)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0x32f17d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PresentFlowCoordinator",
                                                                           {},
                                                                           { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::System::Action*>(),
                                                                             ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissFlowCoordinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*, ::HMUI::ViewController_AnimationDirection, ::System::Action*, bool)>(
    &::HMUI::FlowCoordinator::DismissFlowCoordinator)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x32f1f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissFlowCoordinator",
                                                                                        {},
                                                                                        { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(),
                                                                                          ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissChildFlowCoordinatorsRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::DismissChildFlowCoordinatorsRecursively)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32f22e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissChildFlowCoordinatorsRecursively", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissChildViewControllersRecursively
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::DismissChildViewControllersRecursively)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x32f23ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissChildViewControllersRecursively", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceChildFlowCoordinator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*, ::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(
    &::HMUI::FlowCoordinator::ReplaceChildFlowCoordinator)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x32f2474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "ReplaceChildFlowCoordinator",
                                                                                               {},
                                                                                               { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                 ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationDirection, bool)>(
    &::HMUI::FlowCoordinator::PresentViewController)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0x32f13e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PresentViewController",
                                                                                               {},
                                                                                               { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                 ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DismissViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController_AnimationDirection,
                                                                                                                      ::System::Action*, bool)>(&::HMUI::FlowCoordinator::DismissViewController)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x32f2898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissViewController",
                                                                                               {},
                                                                                               { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(),
                                                                                                 ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceTopViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::System::Action*, ::HMUI::ViewController_AnimationType,
                                                                                         ::HMUI::ViewController_AnimationDirection)>(&::HMUI::FlowCoordinator::ReplaceTopViewController)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x32f2b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "ReplaceTopViewController",
                                                                           {},
                                                                           { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                             ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ReplaceTopViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::FlowCoordinator*, ::HMUI::FlowCoordinator*, ::System::Action*,
                                                                                         ::HMUI::ViewController_AnimationType, ::HMUI::ViewController_AnimationDirection)>(
    &::HMUI::FlowCoordinator::ReplaceTopViewController)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x32f1cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                            { "ReplaceTopViewController",
                              {},
                              { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::System::Action*>(),
                                ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PushViewControllerToNavigationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::HMUI::ViewController*, ::System::Action*, bool)>(
    &::HMUI::FlowCoordinator::PushViewControllerToNavigationController)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x32f2c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PushViewControllerToNavigationController",
                                                                                               {},
                                                                                               { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::HMUI::ViewController*>(),
                                                                                                 ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetViewControllersToNavigationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::ArrayW<::HMUI::ViewController*>)>(
    &::HMUI::FlowCoordinator::SetViewControllersToNavigationController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32f2ea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                            { "SetViewControllersToNavigationController", {}, { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetViewControllerToNavigationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::HMUI::ViewController*)>(
    &::HMUI::FlowCoordinator::SetViewControllerToNavigationController)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32f2eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                { "SetViewControllerToNavigationController", {}, { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PopViewControllerFromNavigationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, ::System::Action*, bool)>(
    &::HMUI::FlowCoordinator::PopViewControllerFromNavigationController)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x32f2ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                            { "PopViewControllerFromNavigationController", {}, { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PopViewControllersFromNavigationController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::NavigationController*, int32_t, ::System::Action*, bool)>(
    &::HMUI::FlowCoordinator::PopViewControllersFromNavigationController)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x32f3040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                { "PopViewControllersFromNavigationController",
                                                  {},
                                                  { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetLeftScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
    &::HMUI::FlowCoordinator::SetLeftScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32f1088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                { "SetLeftScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetRightScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
    &::HMUI::FlowCoordinator::SetRightScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32f1160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                { "SetRightScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetBottomScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
    &::HMUI::FlowCoordinator::SetBottomScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32f1238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                { "SetBottomScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetTopScreenViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
    &::HMUI::FlowCoordinator::SetTopScreenViewController)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x32f1310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                { "SetTopScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.PresentTitle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::StringW, ::HMUI::ViewController_AnimationType)>(&::HMUI::FlowCoordinator::PresentTitle)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x32f0db0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PresentTitle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.IsFlowCoordinatorInHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::FlowCoordinator::*)(::HMUI::FlowCoordinator*)>(&::HMUI::FlowCoordinator::IsFlowCoordinatorInHierarchy)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x32f0d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "IsFlowCoordinatorInHierarchy", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.YoungestChildFlowCoordinatorOrSelf
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::FlowCoordinator> (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::YoungestChildFlowCoordinatorOrSelf)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32f3400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "YoungestChildFlowCoordinatorOrSelf", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.ProvideInitialViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController*,
                                                                                         ::HMUI::ViewController*)>(&::HMUI::FlowCoordinator::ProvideInitialViewControllers)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x32f3480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                             { "ProvideInitialViewControllers",
                                                               {},
                                                               { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>(),
                                                                 ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Activate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool, bool)>(&::HMUI::FlowCoordinator::Activate)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x32f0fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "Activate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Deactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool)>(&::HMUI::FlowCoordinator::Deactivate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32f1c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "Deactivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__ExternalActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::__ExternalActivate)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x32f35f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "__ExternalActivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.__ExternalDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::__ExternalDeactivate)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x32f37ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "__ExternalDeactivate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.HandleScreenSystemBackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::HandleScreenSystemBackButtonWasPressed)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x32f39f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "HandleScreenSystemBackButtonWasPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.CanPressBackButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::CanPressBackButton)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32f3a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "CanPressBackButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.SetGlobalUserInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(bool)>(&::HMUI::FlowCoordinator::SetGlobalUserInteraction)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x32f22a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "SetGlobalUserInteraction", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool, bool)>(&::HMUI::FlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(bool, bool)>(&::HMUI::FlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f3b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TransitionDidStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32f3b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TransitionDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32f3b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::ViewController_AnimationType)>(
    &::HMUI::FlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f3b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.InitialViewControllerWasPresented
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::InitialViewControllerWasPresented)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f3b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)(::HMUI::ViewController*)>(&::HMUI::FlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f3b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::HMUI::FlowCoordinator::Log)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32f3b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::FlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::FlowCoordinator::*)()>(&::HMUI::FlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x32f3ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule>& HMUI::FlowCoordinator::__cordl_internal_get__baseInputModule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseInputModule;
}
constexpr ::UnityW<::UnityEngine::EventSystems::BaseInputModule> const& HMUI::FlowCoordinator::__cordl_internal_get__baseInputModule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseInputModule;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__baseInputModule(::UnityW<::UnityEngine::EventSystems::BaseInputModule> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseInputModule = value;
}
constexpr ::UnityW<::HMUI::ScreenSystem>& HMUI::FlowCoordinator::__cordl_internal_get__screenSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenSystem;
}
constexpr ::UnityW<::HMUI::ScreenSystem> const& HMUI::FlowCoordinator::__cordl_internal_get__screenSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____screenSystem;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__screenSystem(::UnityW<::HMUI::ScreenSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____screenSystem = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator::__cordl_internal_get__parentFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator::__cordl_internal_get__parentFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentFlowCoordinator;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__parentFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____parentFlowCoordinator = value;
}
constexpr ::UnityW<::HMUI::FlowCoordinator>& HMUI::FlowCoordinator::__cordl_internal_get__childFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childFlowCoordinator;
}
constexpr ::UnityW<::HMUI::FlowCoordinator> const& HMUI::FlowCoordinator::__cordl_internal_get__childFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____childFlowCoordinator;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__childFlowCoordinator(::UnityW<::HMUI::FlowCoordinator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____childFlowCoordinator = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*& HMUI::FlowCoordinator::__cordl_internal_get__mainScreenViewControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainScreenViewControllers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* const& HMUI::FlowCoordinator::__cordl_internal_get__mainScreenViewControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mainScreenViewControllers;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__mainScreenViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mainScreenViewControllers = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__leftScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__leftScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__leftScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftScreenViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__rightScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__rightScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__rightScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightScreenViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__bottomScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__bottomScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bottomScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__bottomScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bottomScreenViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__topScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__topScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____topScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__topScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____topScreenViewController = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__wasActivatedBefore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasActivatedBefore;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__wasActivatedBefore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasActivatedBefore;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__wasActivatedBefore(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasActivatedBefore = value;
}
constexpr ::StringW& HMUI::FlowCoordinator::__cordl_internal_get__title() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr ::StringW const& HMUI::FlowCoordinator::__cordl_internal_get__title() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____title;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__title(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____title = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedMainViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedMainViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedMainViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedMainViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedMainViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providedMainViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedLeftScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedLeftScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedLeftScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedLeftScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedLeftScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providedLeftScreenViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedRightScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedRightScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedRightScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedRightScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedRightScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providedRightScreenViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedBottomScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedBottomScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedBottomScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedBottomScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedBottomScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providedBottomScreenViewController = value;
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::FlowCoordinator::__cordl_internal_get__providedTopScreenViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedTopScreenViewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::FlowCoordinator::__cordl_internal_get__providedTopScreenViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____providedTopScreenViewController;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__providedTopScreenViewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____providedTopScreenViewController = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__viewControllersWereProvided() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersWereProvided;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__viewControllersWereProvided() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersWereProvided;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__viewControllersWereProvided(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllersWereProvided = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__isInDidActivatePhase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInDidActivatePhase;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__isInDidActivatePhase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInDidActivatePhase;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__isInDidActivatePhase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInDidActivatePhase = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__isActivated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActivated;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__isActivated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isActivated;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__isActivated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isActivated = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__isInTransition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInTransition;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__isInTransition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInTransition;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__isInTransition(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInTransition = value;
}
constexpr bool& HMUI::FlowCoordinator::__cordl_internal_get__showBackButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBackButton;
}
constexpr bool const& HMUI::FlowCoordinator::__cordl_internal_get__showBackButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____showBackButton;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__showBackButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____showBackButton = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& HMUI::FlowCoordinator::__cordl_internal_get__prevEventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevEventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& HMUI::FlowCoordinator::__cordl_internal_get__prevEventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevEventSystem;
}
constexpr void HMUI::FlowCoordinator::__cordl_internal_set__prevEventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevEventSystem = value;
}
inline ::UnityW<::HMUI::ViewController> HMUI::FlowCoordinator::get_topViewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_topViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> HMUI::FlowCoordinator::get_rightScreenViewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_rightScreenViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline ::UnityW<::HMUI::FlowCoordinator> HMUI::FlowCoordinator::get_childFlowCoordinator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_childFlowCoordinator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::FlowCoordinator>>(this, ___internal_method);
}
inline bool HMUI::FlowCoordinator::get_isActivated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_isActivated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool HMUI::FlowCoordinator::get_isInTransition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_isInTransition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW HMUI::FlowCoordinator::get_title() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_title", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::SetTitle(::StringW value, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "SetTitle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value, animationType);
}
inline void HMUI::FlowCoordinator::set_showBackButton(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "set_showBackButton", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::FlowCoordinator::get_showBackButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "get_showBackButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::__StartOnScreenSystem(::HMUI::ScreenSystem* screenSystem) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "__StartOnScreenSystem", {}, { ::i2c::type_of<::HMUI::ScreenSystem*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenSystem);
}
inline void HMUI::FlowCoordinator::PresentFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                          bool immediately, bool replaceTopViewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PresentFlowCoordinator",
                                                                         {},
                                                                         { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::System::Action*>(),
                                                                           ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, finishedCallback, animationDirection, immediately, replaceTopViewController);
}
inline void HMUI::FlowCoordinator::DismissFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::HMUI::ViewController_AnimationDirection animationDirection, ::System::Action* finishedCallback,
                                                          bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissFlowCoordinator",
                                                                                             {},
                                                                                             { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(),
                                                                                               ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, animationDirection, finishedCallback, immediately);
}
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissChildFlowCoordinatorsRecursively(bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissChildFlowCoordinatorsRecursively", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, immediately);
}
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissChildViewControllersRecursively(bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissChildViewControllersRecursively", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, immediately);
}
inline void HMUI::FlowCoordinator::ReplaceChildFlowCoordinator(::HMUI::FlowCoordinator* flowCoordinator, ::System::Action* finishedCallback,
                                                               ::HMUI::ViewController_AnimationDirection animationDirection, bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "ReplaceChildFlowCoordinator",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                            ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, flowCoordinator, finishedCallback, animationDirection, immediately);
}
inline void HMUI::FlowCoordinator::PresentViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                         bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PresentViewController",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                                                            ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, finishedCallback, animationDirection, immediately);
}
inline ::System::Threading::Tasks::Task* HMUI::FlowCoordinator::DismissViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationDirection animationDirection,
                                                                                      ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "DismissViewController",
                                                                                             {},
                                                                                             { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>(),
                                                                                               ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, viewController, animationDirection, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::ReplaceTopViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType,
                                                            ::HMUI::ViewController_AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "ReplaceTopViewController",
                                                                         {},
                                                                         { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(),
                                                                           ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, finishedCallback, animationType, animationDirection);
}
inline void HMUI::FlowCoordinator::ReplaceTopViewController(::HMUI::ViewController* viewController, ::HMUI::FlowCoordinator* originalOwnerFlowCoordinator,
                                                            ::HMUI::FlowCoordinator* newOwnerFlowCoordinator, ::System::Action* finishedCallback, ::HMUI::ViewController_AnimationType animationType,
                                                            ::HMUI::ViewController_AnimationDirection animationDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                          { "ReplaceTopViewController",
                            {},
                            { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::HMUI::FlowCoordinator*>(), ::i2c::type_of<::System::Action*>(),
                              ::i2c::type_of<::HMUI::ViewController_AnimationType>(), ::i2c::type_of<::HMUI::ViewController_AnimationDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, originalOwnerFlowCoordinator, newOwnerFlowCoordinator, finishedCallback, animationType,
                                                   animationDirection);
}
inline void HMUI::FlowCoordinator::PushViewControllerToNavigationController(::HMUI::NavigationController* navigationController, ::HMUI::ViewController* viewController,
                                                                            ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PushViewControllerToNavigationController",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::HMUI::ViewController*>(),
                                                                                                            ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationController, viewController, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::SetViewControllersToNavigationController(::HMUI::NavigationController* navigationController, ::ArrayW<::HMUI::ViewController*> viewControllers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                       { "SetViewControllersToNavigationController", {}, { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationController, viewControllers);
}
inline void HMUI::FlowCoordinator::SetViewControllerToNavigationController(::HMUI::NavigationController* navigationController, ::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                              { "SetViewControllerToNavigationController", {}, { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationController, viewController);
}
inline void HMUI::FlowCoordinator::PopViewControllerFromNavigationController(::HMUI::NavigationController* navigationController, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                          { "PopViewControllerFromNavigationController", {}, { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationController, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::PopViewControllersFromNavigationController(::HMUI::NavigationController* navigationController, int32_t numberOfControllers, ::System::Action* finishedCallback,
                                                                              bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                              { "PopViewControllersFromNavigationController",
                                                {},
                                                { ::i2c::type_of<::HMUI::NavigationController*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, navigationController, numberOfControllers, finishedCallback, immediately);
}
inline void HMUI::FlowCoordinator::SetLeftScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                              { "SetLeftScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetRightScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                              { "SetRightScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetBottomScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                              { "SetBottomScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::SetTopScreenViewController(::HMUI::ViewController* viewController, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                              { "SetTopScreenViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, animationType);
}
inline void HMUI::FlowCoordinator::PresentTitle(::StringW title, ::HMUI::ViewController_AnimationType animationType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "PresentTitle", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::HMUI::ViewController_AnimationType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, title, animationType);
}
inline bool HMUI::FlowCoordinator::IsFlowCoordinatorInHierarchy(::HMUI::FlowCoordinator* flowCoordinator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "IsFlowCoordinatorInHierarchy", {}, { ::i2c::type_of<::HMUI::FlowCoordinator*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flowCoordinator);
}
inline ::UnityW<::HMUI::FlowCoordinator> HMUI::FlowCoordinator::YoungestChildFlowCoordinatorOrSelf() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "YoungestChildFlowCoordinatorOrSelf", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::FlowCoordinator>>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::ProvideInitialViewControllers(::HMUI::ViewController* mainViewController, ::HMUI::ViewController* leftScreenViewController,
                                                                 ::HMUI::ViewController* rightScreenViewController, ::HMUI::ViewController* bottomScreenViewController,
                                                                 ::HMUI::ViewController* topScreenViewController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(),
                                                           { "ProvideInitialViewControllers",
                                                             {},
                                                             { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>(),
                                                               ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::HMUI::ViewController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainViewController, leftScreenViewController, rightScreenViewController, bottomScreenViewController,
                                                   topScreenViewController);
}
inline void HMUI::FlowCoordinator::Activate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "Activate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::FlowCoordinator::Deactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "Deactivate", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::FlowCoordinator::__ExternalActivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "__ExternalActivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::__ExternalDeactivate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "__ExternalDeactivate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::HandleScreenSystemBackButtonWasPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "HandleScreenSystemBackButtonWasPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::FlowCoordinator::CanPressBackButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "CanPressBackButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::SetGlobalUserInteraction(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "SetGlobalUserInteraction", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::FlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void HMUI::FlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void HMUI::FlowCoordinator::TransitionDidStart() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::TransitionDidFinish() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                               ::HMUI::ViewController_AnimationType animationType) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void HMUI::FlowCoordinator::InitialViewControllerWasPresented() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::FlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::FlowCoordinator*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topViewController);
}
inline void HMUI::FlowCoordinator::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void HMUI::FlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::FlowCoordinator*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::FlowCoordinator* HMUI::FlowCoordinator::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::FlowCoordinator*>());
}
// Ctor Parameters []
constexpr ::HMUI::FlowCoordinator::FlowCoordinator() {}
