#pragma once
#include "HMUI/zzzz__ContainerViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__StackedController_def.hpp"
#include "HMUI/zzzz__StackedController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
//  Writing Method size for method: ::HMUI::__StackedController____c__DisplayClass5_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__StackedController____c__DisplayClass5_0::*)()>(
    &::HMUI::__StackedController____c__DisplayClass5_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228dc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__StackedController____c__DisplayClass5_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__StackedController____c__DisplayClass5_0._PopViewControllers_g__AnimationLayouter_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__StackedController____c__DisplayClass5_0::*)(
    float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*)>(
    &::HMUI::__StackedController____c__DisplayClass5_0::_PopViewControllers_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x228dd34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__StackedController____c__DisplayClass5_0*>::get(), "<PopViewControllers>g__AnimationLayouter|0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::__StackedController____c__DisplayClass5_0::__cordl_internal_get_numberOfViewControllersToPop() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfViewControllersToPop;
}
constexpr int32_t const& HMUI::__StackedController____c__DisplayClass5_0::__cordl_internal_get_numberOfViewControllersToPop() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfViewControllersToPop;
}
constexpr void HMUI::__StackedController____c__DisplayClass5_0::__cordl_internal_set_numberOfViewControllersToPop(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numberOfViewControllersToPop = value;
}
inline ::HMUI::__StackedController____c__DisplayClass5_0* HMUI::__StackedController____c__DisplayClass5_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__StackedController____c__DisplayClass5_0*>());
}
inline void HMUI::__StackedController____c__DisplayClass5_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__StackedController____c__DisplayClass5_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
HMUI::__StackedController____c__DisplayClass5_0::_PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers,
                                                                                            ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* removingViewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__StackedController____c__DisplayClass5_0*>::get(), "<PopViewControllers>g__AnimationLayouter|0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, viewControllers, removingViewControllers);
}
// Ctor Parameters []
constexpr ::HMUI::__StackedController____c__DisplayClass5_0::__StackedController____c__DisplayClass5_0() {}
//  Writing Method size for method: ::HMUI::StackedController.get_topStackedViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::HMUI::StackedController::*)()>(
    &::HMUI::StackedController::get_topStackedViewController)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x228d86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(),
                                                                               "get_topStackedViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.LayoutViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::StackedController::*)(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*)>(
    &::HMUI::StackedController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x228d8e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.PushViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::StackedController::*)(::HMUI::ViewController*, ::System::Action*, bool)>(
    &::HMUI::StackedController::PushViewController)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x228da18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "PushViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.PopViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::StackedController::*)(::System::Action*, bool)>(&::HMUI::StackedController::PopViewController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x228dac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "PopViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.PopViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::StackedController::*)(int32_t, ::System::Action*, bool)>(
    &::HMUI::StackedController::PopViewControllers)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x228dad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "PopViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController.SetupViewControllerRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HMUI::ViewController*, int32_t)>(&::HMUI::StackedController::SetupViewControllerRect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x228d9cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "SetupViewControllerRect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::StackedController::*)()>(&::HMUI::StackedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228dc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::StackedController._PushViewController_g__AnimationLayouter_3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>)>(
    &::HMUI::StackedController::_PushViewController_g__AnimationLayouter_3_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x228dc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "<PushViewController>g__AnimationLayouter|3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
    return ___internal_method;
  }
};
inline ::UnityW<::HMUI::ViewController> HMUI::StackedController::get_topStackedViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "get_topStackedViewController",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline void HMUI::StackedController::LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewControllers);
}
/// @param immediately: bool (default: false)
inline void HMUI::StackedController::PushViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "PushViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, immediately);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param immediately: bool (default: false)
inline void HMUI::StackedController::PopViewController(::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "PopViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishedCallback, immediately);
}
/// @param finishedCallback: ::System::Action* (default: nullptr)
/// @param immediately: bool (default: false)
inline void HMUI::StackedController::PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "PopViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfViewControllersToPop, finishedCallback, immediately);
}
inline void HMUI::StackedController::SetupViewControllerRect(::HMUI::ViewController* viewController, int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "SetupViewControllerRect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewController, index);
}
inline ::HMUI::StackedController* HMUI::StackedController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::StackedController*>());
}
inline void HMUI::StackedController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::StackedController::_PushViewController_g__AnimationLayouter_3_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::StackedController*>::get(), "<PushViewController>g__AnimationLayouter|3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, t, viewControllers);
}
// Ctor Parameters []
constexpr ::HMUI::StackedController::StackedController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
