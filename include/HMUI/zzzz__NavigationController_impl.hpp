#pragma once
#include "HMUI/zzzz__ContainerViewController_impl.hpp"
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__NavigationController__Orientation::__NavigationController__Orientation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__NavigationController__Orientation::__NavigationController__Orientation() {}
constexpr ::HMUI::__NavigationController__Orientation HMUI::__NavigationController__Orientation::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__NavigationController__Orientation HMUI::__NavigationController__Orientation::Vertical{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__NavigationController__Alignment::__NavigationController__Alignment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__NavigationController__Alignment::__NavigationController__Alignment() {}
constexpr ::HMUI::__NavigationController__Alignment HMUI::__NavigationController__Alignment::Beginning{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__NavigationController__Alignment HMUI::__NavigationController__Alignment::Middle{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__NavigationController__Alignment HMUI::__NavigationController__Alignment::End{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass8_0::*)()>(
    &::HMUI::__NavigationController____c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass8_0._PushViewController_g__AnimationLayouter_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass8_0::*)(
    float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>)>(&::HMUI::__NavigationController____c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x212b5dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(), "<PushViewController>g__AnimationLayouter|0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass8_0::__get_startPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass8_0::__get_startPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set_startPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::NavigationController*& HMUI::__NavigationController____c__DisplayClass8_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> const& HMUI::__NavigationController____c__DisplayClass8_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set___4__this(::HMUI::NavigationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ViewController*& HMUI::__NavigationController____c__DisplayClass8_0::__get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ViewController*> const& HMUI::__NavigationController____c__DisplayClass8_0::__get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set_viewController(::HMUI::ViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass8_0::__get_endPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass8_0::__get_endPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr void HMUI::__NavigationController____c__DisplayClass8_0::__set_endPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::__NavigationController____c__DisplayClass8_0* HMUI::__NavigationController____c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__NavigationController____c__DisplayClass8_0*>());
}
inline void HMUI::__NavigationController____c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::__NavigationController____c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0(float_t t,
                                                                                                           ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass8_0*>::get(), "<PushViewController>g__AnimationLayouter|0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, viewControllers);
}
// Ctor Parameters []
constexpr ::HMUI::__NavigationController____c__DisplayClass8_0::__NavigationController____c__DisplayClass8_0() {}
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass10_0::*)()>(
    &::HMUI::__NavigationController____c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x212b530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__NavigationController____c__DisplayClass10_0._PopViewControllers_g__AnimationLayouter_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__NavigationController____c__DisplayClass10_0::*)(
    float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*)>(
    &::HMUI::__NavigationController____c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x212b884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(), "<PopViewControllers>g__AnimationLayouter|0",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass10_0::__get_startPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass10_0::__get_startPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set_startPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::NavigationController*& HMUI::__NavigationController____c__DisplayClass10_0::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::NavigationController*> const& HMUI::__NavigationController____c__DisplayClass10_0::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set___4__this(::HMUI::NavigationController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::__NavigationController____c__DisplayClass10_0::__get_endPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::__NavigationController____c__DisplayClass10_0::__get_endPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set_endPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::__NavigationController____c__DisplayClass10_0::__get_moveOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr float_t const& HMUI::__NavigationController____c__DisplayClass10_0::__get_moveOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr void HMUI::__NavigationController____c__DisplayClass10_0::__set_moveOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffset = value;
}
inline ::HMUI::__NavigationController____c__DisplayClass10_0* HMUI::__NavigationController____c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::__NavigationController____c__DisplayClass10_0*>());
}
inline void HMUI::__NavigationController____c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
HMUI::__NavigationController____c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers,
                                                                                                ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* removingViewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__NavigationController____c__DisplayClass10_0*>::get(), "<PopViewControllers>g__AnimationLayouter|0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, viewControllers, removingViewControllers);
}
// Ctor Parameters []
constexpr ::HMUI::__NavigationController____c__DisplayClass10_0::__NavigationController____c__DisplayClass10_0() {}
//  Writing Method size for method: ::HMUI::NavigationController.LayoutViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Collections::Generic::List_1<::HMUI::ViewController*>*)>(
    &::HMUI::NavigationController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x212abf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PushViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::HMUI::ViewController*, ::System::Action*, bool)>(
    &::HMUI::NavigationController::PushViewController)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x212b24c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PushViewController", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Action*, bool)>(&::HMUI::NavigationController::PopViewController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x212b334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewController", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(int32_t, ::System::Action*, bool)>(
    &::HMUI::NavigationController::PopViewControllers)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x212b348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewControllers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PositionVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HMUI::NavigationController::*)(float_t)>(&::HMUI::NavigationController::PositionVector)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x212b22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PositionVector", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.SetupViewControllerRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::HMUI::ViewController*)>(
    &::HMUI::NavigationController::SetupViewControllerRect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x212b200;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "SetupViewControllerRect", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.GetNewPositionsForViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::HMUI::NavigationController::*)(
    ::System::Collections::Generic::List_1<::HMUI::ViewController*>*, ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*, float_t)>(
    &::HMUI::NavigationController::GetNewPositionsForViewControllers)> {
  constexpr static std::size_t size = 0x4f4;
  constexpr static std::size_t addrs = 0x212ad0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "GetNewPositionsForViewControllers", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)()>(&::HMUI::NavigationController::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x212b5cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::HMUI::__NavigationController__Orientation& HMUI::NavigationController::__get__orientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orientation;
}
constexpr ::HMUI::__NavigationController__Orientation const& HMUI::NavigationController::__get__orientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orientation;
}
constexpr void HMUI::NavigationController::__set__orientation(::HMUI::__NavigationController__Orientation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____orientation = value;
}
constexpr bool& HMUI::NavigationController::__get__reversedStacking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reversedStacking;
}
constexpr bool const& HMUI::NavigationController::__get__reversedStacking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reversedStacking;
}
constexpr void HMUI::NavigationController::__set__reversedStacking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reversedStacking = value;
}
constexpr ::HMUI::__NavigationController__Alignment& HMUI::NavigationController::__get__alignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignment;
}
constexpr ::HMUI::__NavigationController__Alignment const& HMUI::NavigationController::__get__alignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignment;
}
constexpr void HMUI::NavigationController::__set__alignment(::HMUI::__NavigationController__Alignment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alignment = value;
}
constexpr float_t& HMUI::NavigationController::__get__edgeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr float_t const& HMUI::NavigationController::__get__edgeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr void HMUI::NavigationController::__set__edgeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____edgeSize = value;
}
constexpr float_t& HMUI::NavigationController::__get__viewControllersSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersSeparator;
}
constexpr float_t const& HMUI::NavigationController::__get__viewControllersSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersSeparator;
}
constexpr void HMUI::NavigationController::__set__viewControllersSeparator(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllersSeparator = value;
}
inline void HMUI::NavigationController::LayoutViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>* viewControllers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewControllers);
}
/// @param immediately: bool (default: false)
inline void HMUI::NavigationController::PushViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PushViewController", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, immediately);
}
inline void HMUI::NavigationController::PopViewController(::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewController", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishedCallback, immediately);
}
inline void HMUI::NavigationController::PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewControllers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfViewControllersToPop, finishedCallback, immediately);
}
inline ::UnityEngine::Vector3 HMUI::NavigationController::PositionVector(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PositionVector", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, pos);
}
inline void HMUI::NavigationController::SetupViewControllerRect(::HMUI::ViewController* viewController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "SetupViewControllerRect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
/// @param fixedViewControllers: ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* (default: nullptr)
/// @param fixedEndPos: float_t (default: 0.0)
inline ::ArrayW<float_t, ::Array<float_t>*> HMUI::NavigationController::GetNewPositionsForViewControllers(::System::Collections::Generic::List_1<::HMUI::ViewController*>* viewControllers,
                                                                                                          ::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>* fixedViewControllers,
                                                                                                          float_t fixedEndPos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "GetNewPositionsForViewControllers", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HMUI::ViewController*>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::HMUI::ViewController*>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method, viewControllers, fixedViewControllers, fixedEndPos);
}
inline ::HMUI::NavigationController* HMUI::NavigationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HMUI::NavigationController*>());
}
inline void HMUI::NavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::NavigationController::NavigationController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
