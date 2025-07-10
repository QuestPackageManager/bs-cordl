#pragma once
// IWYU pragma private; include "HMUI/NavigationController.hpp"
#include "HMUI/zzzz__ContainerViewController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "HMUI/zzzz__NavigationController_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::NavigationController_Orientation::NavigationController_Orientation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::NavigationController_Orientation::NavigationController_Orientation() {}
constexpr ::HMUI::NavigationController_Orientation HMUI::NavigationController_Orientation::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::NavigationController_Orientation HMUI::NavigationController_Orientation::Vertical{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::NavigationController_Alignment::NavigationController_Alignment(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::NavigationController_Alignment::NavigationController_Alignment() {}
constexpr ::HMUI::NavigationController_Alignment HMUI::NavigationController_Alignment::Beginning{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::NavigationController_Alignment HMUI::NavigationController_Alignment::Middle{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::NavigationController_Alignment HMUI::NavigationController_Alignment::End{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::HMUI::NavigationController___c__DisplayClass10_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController___c__DisplayClass10_0::*)()>(
    &::HMUI::NavigationController___c__DisplayClass10_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228a544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass10_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController___c__DisplayClass10_0._PopViewControllers_g__AnimationLayouter_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController___c__DisplayClass10_0::*)(
    float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*)>(
    &::HMUI::NavigationController___c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x228a5ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass10_0*>::get(), "<PopViewControllers>g__AnimationLayouter|0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get_startPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get_startPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr void HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_set_startPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::NavigationController>& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::NavigationController> const& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_set___4__this(::UnityW<::HMUI::NavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get_endPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get_endPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr void HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_set_endPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get_moveOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr float_t const& HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_get_moveOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___moveOffset;
}
constexpr void HMUI::NavigationController___c__DisplayClass10_0::__cordl_internal_set_moveOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___moveOffset = value;
}
inline void HMUI::NavigationController___c__DisplayClass10_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass10_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
HMUI::NavigationController___c__DisplayClass10_0::_PopViewControllers_g__AnimationLayouter_0(float_t t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers,
                                                                                             ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* removingViewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass10_0*>::get(), "<PopViewControllers>g__AnimationLayouter|0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, viewControllers, removingViewControllers);
}
inline ::HMUI::NavigationController___c__DisplayClass10_0* HMUI::NavigationController___c__DisplayClass10_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::NavigationController___c__DisplayClass10_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::NavigationController___c__DisplayClass10_0::NavigationController___c__DisplayClass10_0() {}
//  Writing Method size for method: ::HMUI::NavigationController___c__DisplayClass8_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController___c__DisplayClass8_0::*)()>(
    &::HMUI::NavigationController___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228a53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass8_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController___c__DisplayClass8_0._PushViewController_g__AnimationLayouter_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController___c__DisplayClass8_0::*)(
    float_t, ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>)>(&::HMUI::NavigationController___c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x228a864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass8_0*>::get(), "<PushViewController>g__AnimationLayouter|0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get_startPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get_startPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startPositions;
}
constexpr void HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_set_startPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___startPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::NavigationController>& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::NavigationController> const& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_set___4__this(::UnityW<::HMUI::NavigationController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::ViewController>& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get_viewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr ::UnityW<::HMUI::ViewController> const& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get_viewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___viewController;
}
constexpr void HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_set_viewController(::UnityW<::HMUI::ViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___viewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get_endPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_get_endPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___endPositions;
}
constexpr void HMUI::NavigationController___c__DisplayClass8_0::__cordl_internal_set_endPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___endPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::NavigationController___c__DisplayClass8_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass8_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::NavigationController___c__DisplayClass8_0::_PushViewController_g__AnimationLayouter_0(float_t t,
                                                                                                        ::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*> viewControllers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController___c__DisplayClass8_0*>::get(), "<PushViewController>g__AnimationLayouter|0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HMUI::ViewController*, ::Array<::HMUI::ViewController*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, t, viewControllers);
}
inline ::HMUI::NavigationController___c__DisplayClass8_0* HMUI::NavigationController___c__DisplayClass8_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::NavigationController___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::NavigationController___c__DisplayClass8_0::NavigationController___c__DisplayClass8_0() {}
//  Writing Method size for method: ::HMUI::NavigationController.LayoutViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*)>(
    &::HMUI::NavigationController::LayoutViewControllers)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2289f50;

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
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x228827c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PushViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::System::Action*, bool)>(&::HMUI::NavigationController::PopViewController)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22884b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewController", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PopViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(int32_t, ::System::Action*, bool)>(
    &::HMUI::NavigationController::PopViewControllers)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x22885f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.PositionVector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HMUI::NavigationController::*)(float_t)>(&::HMUI::NavigationController::PositionVector)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x228a51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PositionVector", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.SetupViewControllerRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)(::HMUI::ViewController*)>(
    &::HMUI::NavigationController::SetupViewControllerRect)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x228a4f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "SetupViewControllerRect", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController.GetNewPositionsForViewControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float_t, ::Array<float_t>*> (::HMUI::NavigationController::*)(
    ::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*, ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*, float_t)>(
    &::HMUI::NavigationController::GetNewPositionsForViewControllers)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x228a068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "GetNewPositionsForViewControllers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NavigationController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NavigationController::*)()>(&::HMUI::NavigationController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x228a5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::HMUI::NavigationController_Orientation& HMUI::NavigationController::__cordl_internal_get__orientation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orientation;
}
constexpr ::HMUI::NavigationController_Orientation const& HMUI::NavigationController::__cordl_internal_get__orientation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____orientation;
}
constexpr void HMUI::NavigationController::__cordl_internal_set__orientation(::HMUI::NavigationController_Orientation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____orientation = value;
}
constexpr bool& HMUI::NavigationController::__cordl_internal_get__reversedStacking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reversedStacking;
}
constexpr bool const& HMUI::NavigationController::__cordl_internal_get__reversedStacking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reversedStacking;
}
constexpr void HMUI::NavigationController::__cordl_internal_set__reversedStacking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reversedStacking = value;
}
constexpr ::HMUI::NavigationController_Alignment& HMUI::NavigationController::__cordl_internal_get__alignment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignment;
}
constexpr ::HMUI::NavigationController_Alignment const& HMUI::NavigationController::__cordl_internal_get__alignment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alignment;
}
constexpr void HMUI::NavigationController::__cordl_internal_set__alignment(::HMUI::NavigationController_Alignment value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____alignment = value;
}
constexpr float_t& HMUI::NavigationController::__cordl_internal_get__edgeSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr float_t const& HMUI::NavigationController::__cordl_internal_get__edgeSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____edgeSize;
}
constexpr void HMUI::NavigationController::__cordl_internal_set__edgeSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____edgeSize = value;
}
constexpr float_t& HMUI::NavigationController::__cordl_internal_get__viewControllersSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersSeparator;
}
constexpr float_t const& HMUI::NavigationController::__cordl_internal_get__viewControllersSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllersSeparator;
}
constexpr void HMUI::NavigationController::__cordl_internal_set__viewControllersSeparator(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewControllersSeparator = value;
}
inline void HMUI::NavigationController::LayoutViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewControllers);
}
inline void HMUI::NavigationController::PushViewController(::HMUI::ViewController* viewController, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PushViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, finishedCallback, immediately);
}
inline void HMUI::NavigationController::PopViewController(::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewController", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, finishedCallback, immediately);
}
inline void HMUI::NavigationController::PopViewControllers(int32_t numberOfViewControllersToPop, ::System::Action* finishedCallback, bool immediately) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PopViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, numberOfViewControllersToPop, finishedCallback, immediately);
}
inline ::UnityEngine::Vector3 HMUI::NavigationController::PositionVector(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "PositionVector", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, pos);
}
inline void HMUI::NavigationController::SetupViewControllerRect(::HMUI::ViewController* viewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "SetupViewControllerRect", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController);
}
inline ::ArrayW<float_t, ::Array<float_t>*>
HMUI::NavigationController::GetNewPositionsForViewControllers(::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>* viewControllers,
                                                              ::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>* fixedViewControllers, float_t fixedEndPos) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), "GetNewPositionsForViewControllers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::HMUI::ViewController>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::UnityW<::HMUI::ViewController>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<float_t, ::Array<float_t>*>, false>(this, ___internal_method, viewControllers, fixedViewControllers, fixedEndPos);
}
inline void HMUI::NavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NavigationController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::NavigationController* HMUI::NavigationController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::NavigationController*>());
}
// Ctor Parameters []
constexpr ::HMUI::NavigationController::NavigationController() {}
