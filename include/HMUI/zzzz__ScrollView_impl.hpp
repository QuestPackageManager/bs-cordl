#pragma once
// IWYU pragma private; include "HMUI/ScrollView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "GlobalNamespace/zzzz__IXRSystemState_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__EventSystemListener_def.hpp"
#include "HMUI/zzzz__ItemForFocussedScrolling_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "HMUI/zzzz__VerticalScrollController_def.hpp"
#include "HMUI/zzzz__VerticalScrollIndicator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::ScrollView_ScrollType::ScrollView_ScrollType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView_ScrollType::ScrollView_ScrollType() {}
constexpr ::HMUI::ScrollView_ScrollType HMUI::ScrollView_ScrollType::PageSize{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::ScrollView_ScrollType HMUI::ScrollView_ScrollType::FixedCellSize{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::ScrollView_ScrollType HMUI::ScrollView_ScrollType::FocusItems{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::ScrollView_ScrollDirection::ScrollView_ScrollDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView_ScrollDirection::ScrollView_ScrollDirection() {}
constexpr ::HMUI::ScrollView_ScrollDirection HMUI::ScrollView_ScrollDirection::None{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::ScrollView_ScrollDirection HMUI::ScrollView_ScrollDirection::Up{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::ScrollView_ScrollDirection HMUI::ScrollView_ScrollDirection::Down{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::ScrollView_ScrollDirection HMUI::ScrollView_ScrollDirection::Left{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::ScrollView_ScrollDirection HMUI::ScrollView_ScrollDirection::Right{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::ScrollView_ScrollViewDirection::ScrollView_ScrollViewDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView_ScrollViewDirection::ScrollView_ScrollViewDirection() {}
constexpr ::HMUI::ScrollView_ScrollViewDirection HMUI::ScrollView_ScrollViewDirection::Vertical{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::ScrollView_ScrollViewDirection HMUI::ScrollView_ScrollViewDirection::Horizontal{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HMUI::ScrollView___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView___c::*)()>(&::HMUI::ScrollView___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588bf94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView___c._Awake_b__49_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView___c::*)(float_t)>(&::HMUI::ScrollView___c::_Awake_b__49_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588bf98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c*>(), { "<Awake>b__49_1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView___c._Awake_b__49_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView___c::*)(float_t)>(&::HMUI::ScrollView___c::_Awake_b__49_3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588bf9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c*>(), { "<Awake>b__49_3", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
inline void HMUI::ScrollView___c::setStaticF___9(::HMUI::ScrollView___c* value) {
  ::cordl_internals::setStaticField<::HMUI::ScrollView___c*, "<>9", ::HMUI::ScrollView___c*>(std::forward<::HMUI::ScrollView___c*>(value));
}
inline ::HMUI::ScrollView___c* HMUI::ScrollView___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HMUI::ScrollView___c*, "<>9", ::HMUI::ScrollView___c*>();
}
inline void HMUI::ScrollView___c::setStaticF___9__49_1(::System::Func_2<float_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<float_t, float_t>*, "<>9__49_1", ::HMUI::ScrollView___c*>(std::forward<::System::Func_2<float_t, float_t>*>(value));
}
inline ::System::Func_2<float_t, float_t>* HMUI::ScrollView___c::getStaticF___9__49_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<float_t, float_t>*, "<>9__49_1", ::HMUI::ScrollView___c*>();
}
inline void HMUI::ScrollView___c::setStaticF___9__49_3(::System::Func_2<float_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<float_t, float_t>*, "<>9__49_3", ::HMUI::ScrollView___c*>(std::forward<::System::Func_2<float_t, float_t>*>(value));
}
inline ::System::Func_2<float_t, float_t>* HMUI::ScrollView___c::getStaticF___9__49_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<float_t, float_t>*, "<>9__49_3", ::HMUI::ScrollView___c*>();
}
inline void HMUI::ScrollView___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t HMUI::ScrollView___c::_Awake_b__49_1(float_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c*>(), { "<Awake>b__49_1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, i);
}
inline float_t HMUI::ScrollView___c::_Awake_b__49_3(float_t i) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c*>(), { "<Awake>b__49_3", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, i);
}
inline ::HMUI::ScrollView___c* HMUI::ScrollView___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollView___c*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView___c::ScrollView___c() {}
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass63_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView___c__DisplayClass63_0::*)()>(&::HMUI::ScrollView___c__DisplayClass63_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588bad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass63_0._PageUpButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ScrollView___c__DisplayClass63_0::*)(float_t)>(&::HMUI::ScrollView___c__DisplayClass63_0::_PageUpButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x588bfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass63_0*>(), { "<PageUpButtonPressed>b__0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::ScrollView___c__DisplayClass63_0::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::ScrollView___c__DisplayClass63_0::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::ScrollView___c__DisplayClass63_0::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline void HMUI::ScrollView___c__DisplayClass63_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass63_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ScrollView___c__DisplayClass63_0::_PageUpButtonPressed_b__0(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass63_0*>(), { "<PageUpButtonPressed>b__0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline ::HMUI::ScrollView___c__DisplayClass63_0* HMUI::ScrollView___c__DisplayClass63_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollView___c__DisplayClass63_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView___c__DisplayClass63_0::ScrollView___c__DisplayClass63_0() {}
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass64_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView___c__DisplayClass64_0::*)()>(&::HMUI::ScrollView___c__DisplayClass64_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588be2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass64_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass64_0._PageDownButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ScrollView___c__DisplayClass64_0::*)(float_t)>(&::HMUI::ScrollView___c__DisplayClass64_0::_PageDownButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x588bfb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass64_0*>(), { "<PageDownButtonPressed>b__0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::ScrollView___c__DisplayClass64_0::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::ScrollView___c__DisplayClass64_0::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::ScrollView___c__DisplayClass64_0::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline void HMUI::ScrollView___c__DisplayClass64_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass64_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ScrollView___c__DisplayClass64_0::_PageDownButtonPressed_b__0(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass64_0*>(), { "<PageDownButtonPressed>b__0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline ::HMUI::ScrollView___c__DisplayClass64_0* HMUI::ScrollView___c__DisplayClass64_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollView___c__DisplayClass64_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView___c__DisplayClass64_0::ScrollView___c__DisplayClass64_0() {}
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass69_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView___c__DisplayClass69_0::*)()>(&::HMUI::ScrollView___c__DisplayClass69_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588be9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass69_0._HandleJoystickWasCenteredThisFrame_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ScrollView___c__DisplayClass69_0::*)(float_t)>(
    &::HMUI::ScrollView___c__DisplayClass69_0::_HandleJoystickWasCenteredThisFrame_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x588bfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_0*>(), { "<HandleJoystickWasCenteredThisFrame>b__0", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::ScrollView___c__DisplayClass69_0::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::ScrollView___c__DisplayClass69_0::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::ScrollView___c__DisplayClass69_0::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline void HMUI::ScrollView___c__DisplayClass69_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ScrollView___c__DisplayClass69_0::_HandleJoystickWasCenteredThisFrame_b__0(float_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_0*>(), { "<HandleJoystickWasCenteredThisFrame>b__0", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline ::HMUI::ScrollView___c__DisplayClass69_0* HMUI::ScrollView___c__DisplayClass69_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollView___c__DisplayClass69_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView___c__DisplayClass69_0::ScrollView___c__DisplayClass69_0() {}
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass69_1._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView___c__DisplayClass69_1::*)()>(&::HMUI::ScrollView___c__DisplayClass69_1::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x588bea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_1*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView___c__DisplayClass69_1._HandleJoystickWasCenteredThisFrame_b__1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ScrollView___c__DisplayClass69_1::*)(float_t)>(
    &::HMUI::ScrollView___c__DisplayClass69_1::_HandleJoystickWasCenteredThisFrame_b__1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x588bfd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_1*>(), { "<HandleJoystickWasCenteredThisFrame>b__1", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::ScrollView___c__DisplayClass69_1::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::ScrollView___c__DisplayClass69_1::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::ScrollView___c__DisplayClass69_1::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline void HMUI::ScrollView___c__DisplayClass69_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_1*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::ScrollView___c__DisplayClass69_1::_HandleJoystickWasCenteredThisFrame_b__1(float_t pos) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView___c__DisplayClass69_1*>(), { "<HandleJoystickWasCenteredThisFrame>b__1", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pos);
}
inline ::HMUI::ScrollView___c__DisplayClass69_1* HMUI::ScrollView___c__DisplayClass69_1::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollView___c__DisplayClass69_1*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView___c__DisplayClass69_1::ScrollView___c__DisplayClass69_1() {}
//  Writing Method size for method: ::HMUI::ScrollView.get_needsScrolling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_needsScrolling)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_needsScrolling", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_needsVerticalScrollController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_needsVerticalScrollController)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5889a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_needsVerticalScrollController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.add_scrollPositionChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(::System::Action_1<float_t>*)>(&::HMUI::ScrollView::add_scrollPositionChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5889b50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "add_scrollPositionChangedEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.remove_scrollPositionChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(::System::Action_1<float_t>*)>(&::HMUI::ScrollView::remove_scrollPositionChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5889c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "remove_scrollPositionChangedEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_viewportTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_viewportTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_viewportTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_contentTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_contentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_contentTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_position)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5889ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_scrollableSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_scrollableSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5889d1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_scrollableSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_scrollPageSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_scrollPageSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5889d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_scrollPageSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_contentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_contentSize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5889d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_contentSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::Awake)> {
  constexpr static std::size_t size = 0x63c;
  constexpr static std::size_t addrs = 0x5889dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::OnDestroy)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x588a644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.CheckScrollInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::CheckScrollInput)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x588a908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "CheckScrollInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::Update)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x588b098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.SetContentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::SetContentSize)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x588b2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "SetContentSize", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.UpdateContentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::UpdateContentSize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x588a4cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "UpdateContentSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToEnd
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(bool)>(&::HMUI::ScrollView::ScrollToEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x588b4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToEnd", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector3, float_t, bool)>(&::HMUI::ScrollView::ScrollToWorldPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x588b538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToWorldPositionIfOutsideArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector3, float_t, float_t, float_t, bool)>(
    &::HMUI::ScrollView::ScrollToWorldPositionIfOutsideArea)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x588b648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToWorldPositionIfOutsideArea",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                         ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToByPercentage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::ScrollToByPercentage)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x588b6fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToByPercentage", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(float_t, bool)>(&::HMUI::ScrollView::ScrollTo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x58899b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollTo", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.WorldPositionToScrollViewPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::HMUI::ScrollView::*)(::UnityEngine::Vector3)>(&::HMUI::ScrollView::WorldPositionToScrollViewPosition)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x588b588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "WorldPositionToScrollViewPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.SetDestinationPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::SetDestinationPos)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x588b738;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "SetDestinationPos", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.UpdateVerticalScrollIndicator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::UpdateVerticalScrollIndicator)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x588b1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "UpdateVerticalScrollIndicator", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.PageUpButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::PageUpButtonPressed)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x588b7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "PageUpButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.PageDownButtonPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::PageDownButtonPressed)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x588bad8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "PageDownButtonPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.RefreshButtons
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::RefreshButtons)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x588a530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "RefreshButtons", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandlePointerDidEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::ScrollView::HandlePointerDidEnter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x588be30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandlePointerDidEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandlePointerDidExit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::ScrollView::HandlePointerDidExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588be44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandlePointerDidExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandleJoystickWasNotCenteredThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector2)>(&::HMUI::ScrollView::HandleJoystickWasNotCenteredThisFrame)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x588aa80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandleJoystickWasNotCenteredThisFrame", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandleJoystickWasCenteredThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::HandleJoystickWasCenteredThisFrame)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x588abbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandleJoystickWasCenteredThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ResolveScrollDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::ScrollView_ScrollDirection (::HMUI::ScrollView::*)(::UnityEngine::Vector2)>(&::HMUI::ScrollView::ResolveScrollDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x588be4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ResolveScrollDirection", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x588bea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._Awake_b__49_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView::*)(::HMUI::ItemForFocussedScrolling*)>(&::HMUI::ScrollView::_Awake_b__49_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x588bed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "<Awake>b__49_0", {}, { ::i2c::type_of<::HMUI::ItemForFocussedScrolling*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._Awake_b__49_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::HMUI::ScrollView::*)(::HMUI::ItemForFocussedScrolling*)>(&::HMUI::ScrollView::_Awake_b__49_2)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x588bf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "<Awake>b__49_2", {}, { ::i2c::type_of<::HMUI::ItemForFocussedScrolling*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::ScrollView::__cordl_internal_get__viewport() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewport;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::ScrollView::__cordl_internal_get__viewport() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewport;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__viewport(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____viewport = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& HMUI::ScrollView::__cordl_internal_get__contentRectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& HMUI::ScrollView::__cordl_internal_get__contentRectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRectTransform;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__contentRectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentRectTransform = value;
}
constexpr ::HMUI::ScrollView_ScrollViewDirection& HMUI::ScrollView::__cordl_internal_get__scrollViewDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollViewDirection;
}
constexpr ::HMUI::ScrollView_ScrollViewDirection const& HMUI::ScrollView::__cordl_internal_get__scrollViewDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollViewDirection;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollViewDirection(::HMUI::ScrollView_ScrollViewDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollViewDirection = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::ScrollView::__cordl_internal_get__pageUpButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageUpButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::ScrollView::__cordl_internal_get__pageUpButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageUpButton;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__pageUpButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageUpButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::ScrollView::__cordl_internal_get__pageDownButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageDownButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::ScrollView::__cordl_internal_get__pageDownButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageDownButton;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__pageDownButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageDownButton = value;
}
constexpr ::UnityW<::HMUI::VerticalScrollIndicator>& HMUI::ScrollView::__cordl_internal_get__verticalScrollIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScrollIndicator;
}
constexpr ::UnityW<::HMUI::VerticalScrollIndicator> const& HMUI::ScrollView::__cordl_internal_get__verticalScrollIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScrollIndicator;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__verticalScrollIndicator(::UnityW<::HMUI::VerticalScrollIndicator> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalScrollIndicator = value;
}
constexpr ::UnityW<::HMUI::VerticalScrollController>& HMUI::ScrollView::__cordl_internal_get__verticalScrollController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScrollController;
}
constexpr ::UnityW<::HMUI::VerticalScrollController> const& HMUI::ScrollView::__cordl_internal_get__verticalScrollController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____verticalScrollController;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__verticalScrollController(::UnityW<::HMUI::VerticalScrollController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____verticalScrollController = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__smooth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__smooth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____smooth;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__smooth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____smooth = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__joystickScrollSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystickScrollSpeed;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__joystickScrollSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystickScrollSpeed;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__joystickScrollSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____joystickScrollSpeed = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__joystickQuickSnapMaxTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystickQuickSnapMaxTime;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__joystickQuickSnapMaxTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystickQuickSnapMaxTime;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__joystickQuickSnapMaxTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____joystickQuickSnapMaxTime = value;
}
constexpr ::HMUI::ScrollView_ScrollType& HMUI::ScrollView::__cordl_internal_get__scrollType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollType;
}
constexpr ::HMUI::ScrollView_ScrollType const& HMUI::ScrollView::__cordl_internal_get__scrollType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollType;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollType(::HMUI::ScrollView_ScrollType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollType = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__fixedCellSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedCellSize;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__fixedCellSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fixedCellSize;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__fixedCellSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fixedCellSize = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__scrollItemRelativeThresholdPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollItemRelativeThresholdPosition;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__scrollItemRelativeThresholdPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollItemRelativeThresholdPosition;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollItemRelativeThresholdPosition(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollItemRelativeThresholdPosition = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__pageStepNormalizedSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageStepNormalizedSize;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__pageStepNormalizedSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pageStepNormalizedSize;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__pageStepNormalizedSize(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pageStepNormalizedSize = value;
}
constexpr bool& HMUI::ScrollView::__cordl_internal_get__needsScrolling() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsScrolling;
}
constexpr bool const& HMUI::ScrollView::__cordl_internal_get__needsScrolling() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____needsScrolling;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__needsScrolling(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____needsScrolling = value;
}
constexpr bool& HMUI::ScrollView::__cordl_internal_get__scrollingLastFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollingLastFrame;
}
constexpr bool const& HMUI::ScrollView::__cordl_internal_get__scrollingLastFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollingLastFrame;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollingLastFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollingLastFrame = value;
}
constexpr bool& HMUI::ScrollView::__cordl_internal_get__isHoveredByPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isHoveredByPointer;
}
constexpr bool const& HMUI::ScrollView::__cordl_internal_get__isHoveredByPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isHoveredByPointer;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__isHoveredByPointer(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isHoveredByPointer = value;
}
constexpr bool& HMUI::ScrollView::__cordl_internal_get__shouldAnimate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldAnimate;
}
constexpr bool const& HMUI::ScrollView::__cordl_internal_get__shouldAnimate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shouldAnimate;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__shouldAnimate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shouldAnimate = value;
}
constexpr ::GlobalNamespace::IVRPlatformHelper*& HMUI::ScrollView::__cordl_internal_get__platformHelper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformHelper;
}
constexpr ::GlobalNamespace::IVRPlatformHelper* const& HMUI::ScrollView::__cordl_internal_get__platformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformHelper;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__platformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____platformHelper = value;
}
constexpr ::GlobalNamespace::IXRSystemState*& HMUI::ScrollView::__cordl_internal_get__xrSystemState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr ::GlobalNamespace::IXRSystemState* const& HMUI::ScrollView::__cordl_internal_get__xrSystemState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xrSystemState;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__xrSystemState(::GlobalNamespace::IXRSystemState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xrSystemState = value;
}
constexpr ::System::Action_1<float_t>*& HMUI::ScrollView::__cordl_internal_get_scrollPositionChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollPositionChangedEvent;
}
constexpr ::System::Action_1<float_t>* const& HMUI::ScrollView::__cordl_internal_get_scrollPositionChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollPositionChangedEvent;
}
constexpr void HMUI::ScrollView::__cordl_internal_set_scrollPositionChangedEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___scrollPositionChangedEvent = value;
}
constexpr ::HMUI::ButtonBinder*& HMUI::ScrollView::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& HMUI::ScrollView::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__destinationPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationPos;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__destinationPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____destinationPos;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__destinationPos(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____destinationPos = value;
}
constexpr ::ArrayW<float_t>& HMUI::ScrollView::__cordl_internal_get__scrollFocusPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollFocusPositions;
}
constexpr ::ArrayW<float_t> const& HMUI::ScrollView::__cordl_internal_get__scrollFocusPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollFocusPositions;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollFocusPositions(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scrollFocusPositions = value;
}
constexpr ::UnityW<::HMUI::EventSystemListener>& HMUI::ScrollView::__cordl_internal_get__eventSystemListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystemListener;
}
constexpr ::UnityW<::HMUI::EventSystemListener> const& HMUI::ScrollView::__cordl_internal_get__eventSystemListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystemListener;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__eventSystemListener(::UnityW<::HMUI::EventSystemListener> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventSystemListener = value;
}
constexpr ::HMUI::ScrollView_ScrollDirection& HMUI::ScrollView::__cordl_internal_get__lastJoystickScrollDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastJoystickScrollDirection;
}
constexpr ::HMUI::ScrollView_ScrollDirection const& HMUI::ScrollView::__cordl_internal_get__lastJoystickScrollDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastJoystickScrollDirection;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__lastJoystickScrollDirection(::HMUI::ScrollView_ScrollDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastJoystickScrollDirection = value;
}
constexpr float_t& HMUI::ScrollView::__cordl_internal_get__joystickScrollStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystickScrollStartTime;
}
constexpr float_t const& HMUI::ScrollView::__cordl_internal_get__joystickScrollStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joystickScrollStartTime;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__joystickScrollStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____joystickScrollStartTime = value;
}
inline bool HMUI::ScrollView::get_needsScrolling() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_needsScrolling", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool HMUI::ScrollView::get_needsVerticalScrollController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_needsVerticalScrollController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void HMUI::ScrollView::add_scrollPositionChangedEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "add_scrollPositionChangedEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ScrollView::remove_scrollPositionChangedEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "remove_scrollPositionChangedEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ScrollView::get_viewportTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_viewportTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ScrollView::get_contentTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_contentTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_scrollableSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_scrollableSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_scrollPageSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_scrollPageSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_contentSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "get_contentSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void HMUI::ScrollView::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::CheckScrollInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "CheckScrollInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::SetContentSize(float_t contentSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "SetContentSize", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, contentSize);
}
inline void HMUI::ScrollView::UpdateContentSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "UpdateContentSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::ScrollToEnd(bool animated) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToEnd", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, animated);
}
inline void HMUI::ScrollView::ScrollToWorldPosition(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, bool animated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToWorldPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition, pageRelativePosition, animated);
}
inline void HMUI::ScrollView::ScrollToWorldPositionIfOutsideArea(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, float_t relativeBoundaryStart, float_t relativeBoundaryEnd,
                                                                 bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToWorldPositionIfOutsideArea",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                       ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, worldPosition, pageRelativePosition, relativeBoundaryStart, relativeBoundaryEnd, animated);
}
inline void HMUI::ScrollView::ScrollToByPercentage(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollToByPercentage", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ScrollView::ScrollTo(float_t destinationPos, bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ScrollTo", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, destinationPos, animated);
}
inline ::UnityEngine::Vector2 HMUI::ScrollView::WorldPositionToScrollViewPosition(::UnityEngine::Vector3 worldPosition) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "WorldPositionToScrollViewPosition", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, worldPosition);
}
inline void HMUI::ScrollView::SetDestinationPos(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "SetDestinationPos", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::ScrollView::UpdateVerticalScrollIndicator(float_t posY) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "UpdateVerticalScrollIndicator", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, posY);
}
inline void HMUI::ScrollView::PageUpButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "PageUpButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::PageDownButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "PageDownButtonPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::RefreshButtons() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "RefreshButtons", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::ScrollView::HandlePointerDidEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandlePointerDidEnter", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::ScrollView::HandlePointerDidExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandlePointerDidExit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void HMUI::ScrollView::HandleJoystickWasNotCenteredThisFrame(::UnityEngine::Vector2 deltaPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandleJoystickWasNotCenteredThisFrame", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deltaPos);
}
inline void HMUI::ScrollView::HandleJoystickWasCenteredThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "HandleJoystickWasCenteredThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ScrollView_ScrollDirection HMUI::ScrollView::ResolveScrollDirection(::UnityEngine::Vector2 deltaPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "ResolveScrollDirection", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::ScrollView_ScrollDirection>(this, ___internal_method, deltaPos);
}
inline void HMUI::ScrollView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::_Awake_b__49_0(::HMUI::ItemForFocussedScrolling* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "<Awake>b__49_0", {}, { ::i2c::type_of<::HMUI::ItemForFocussedScrolling*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, item);
}
inline float_t HMUI::ScrollView::_Awake_b__49_2(::HMUI::ItemForFocussedScrolling* item) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScrollView*>(), { "<Awake>b__49_2", {}, { ::i2c::type_of<::HMUI::ItemForFocussedScrolling*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, item);
}
inline ::HMUI::ScrollView* HMUI::ScrollView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScrollView*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView::ScrollView() {}
