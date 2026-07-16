#pragma once
// IWYU pragma private; include "HMUI/StackedController.hpp"
#include "HMUI/zzzz__ContainerViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__StackedController_def.hpp"
#include "HMUI/zzzz__StackedController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::HMUI::StackedController___c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::StackedController___c__DisplayClass5_0::*)()>(&::HMUI::StackedController___c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f4d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController___c__DisplayClass5_0._PopViewControllers_g__AnimationLayouter_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::HMUI::StackedController___c__DisplayClass5_0::*)(float_t, ::ArrayW<::HMUI::ViewController*>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*)>(
        &::HMUI::StackedController___c__DisplayClass5_0::_PopViewControllers_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x32f4e24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController___c__DisplayClass5_0*>(),
                                                                                           { "<PopViewControllers>g__AnimationLayouter|0",
                                                                                             {},
                                                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>(),
                                                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::StackedController___c__DisplayClass5_0::__cordl_internal_get_numberOfViewControllersToPop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfViewControllersToPop;
}
constexpr int32_t const& HMUI::StackedController___c__DisplayClass5_0::__cordl_internal_get_numberOfViewControllersToPop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfViewControllersToPop;
}
constexpr void HMUI::StackedController___c__DisplayClass5_0::__cordl_internal_set_numberOfViewControllersToPop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numberOfViewControllersToPop = value;
}
inline void HMUI::StackedController___c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController___c__DisplayClass5_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void
HMUI::StackedController___c__DisplayClass5_0::_PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*> viewControllers,
                                                                                         ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* removingViewControllers) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController___c__DisplayClass5_0*>(),
                                                                                         { "<PopViewControllers>g__AnimationLayouter|0",
                                                                                           {},
                                                                                           { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>(),
                                                                                             ::i2c::type_of<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, viewControllers, removingViewControllers);
}
inline ::HMUI::StackedController___c__DisplayClass5_0* HMUI::StackedController___c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::StackedController___c__DisplayClass5_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::StackedController___c__DisplayClass5_0::StackedController___c__DisplayClass5_0() {}
//  Writing Method size for method: ::HMUI::StackedController.get_topStackedViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::StackedController::*)()>(&::HMUI::StackedController::get_topStackedViewController)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32f4918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "get_topStackedViewController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.LayoutViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::StackedController::*)(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*)>(
    &::HMUI::StackedController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x32f499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { ::i2c::class_of<::HMUI::StackedController*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.PushViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::StackedController::*)(::HMUI::ViewController*, ::System::Action*, bool)>(&::HMUI::StackedController::PushViewController)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32f4adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(),
                                                { "PushViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.PopViewController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::StackedController::*)(::System::Action*, bool)>(&::HMUI::StackedController::PopViewController)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32f4b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "PopViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.PopViewControllers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::StackedController::*)(int32_t, ::System::Action*, bool)>(&::HMUI::StackedController::PopViewControllers)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x32f4b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "PopViewControllers", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.SetupViewControllerRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::HMUI::ViewController*, int32_t)>(&::HMUI::StackedController::SetupViewControllerRect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x32f4a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "SetupViewControllerRect", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::StackedController::*)()>(&::HMUI::StackedController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32f4d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController._PushViewController_g__AnimationLayouter_3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t, ::ArrayW<::HMUI::ViewController*>)>(&::HMUI::StackedController::_PushViewController_g__AnimationLayouter_3_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x32f4d94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(),
                                                { "<PushViewController>g__AnimationLayouter|3_0", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>() } })));
    return ___internal_method;
  }
};
inline ::UnityW<::HMUI::ViewController> HMUI::StackedController::get_topStackedViewController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "get_topStackedViewController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>>(this, ___internal_method);
}
inline void HMUI::StackedController::LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::StackedController*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewControllers);
}
inline void HMUI::StackedController::PushViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(),
                                                           { "PushViewController", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, viewController, finishedCallback, immediately);
}
inline void HMUI::StackedController::PopViewController(::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "PopViewController", {}, { ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, finishedCallback, immediately);
}
inline void HMUI::StackedController::PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "PopViewControllers", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, numberOfViewControllersToPop, finishedCallback, immediately);
}
inline void HMUI::StackedController::SetupViewControllerRect(::HMUI::ViewController* viewController, int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { "SetupViewControllerRect", {}, { ::i2c::type_of<::HMUI::ViewController*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, viewController, index);
}
inline void HMUI::StackedController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::StackedController::_PushViewController_g__AnimationLayouter_3_0(float_t t, ::ArrayW<::HMUI::ViewController*> viewControllers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::StackedController*>(),
                                              { "<PushViewController>g__AnimationLayouter|3_0", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<::HMUI::ViewController*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, t, viewControllers);
}
inline ::HMUI::StackedController* HMUI::StackedController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::StackedController*>());
}
// Ctor Parameters []
constexpr ::HMUI::StackedController::StackedController() {}
