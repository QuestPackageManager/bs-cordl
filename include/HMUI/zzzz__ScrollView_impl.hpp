#pragma once
#include "HMUI/zzzz__ScrollView_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "GlobalNamespace/zzzz__IVRPlatformHelper_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__EventSystemListener_def.hpp"
#include "HMUI/zzzz__ItemForFocussedScrolling_def.hpp"
#include "HMUI/zzzz__ScrollView_def.hpp"
#include "HMUI/zzzz__VerticalScrollIndicator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ScrollView__ScrollType::__ScrollView__ScrollType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView__ScrollType::__ScrollView__ScrollType() {}
constexpr ::HMUI::__ScrollView__ScrollType HMUI::__ScrollView__ScrollType::PageSize{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__ScrollView__ScrollType HMUI::__ScrollView__ScrollType::FixedCellSize{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__ScrollView__ScrollType HMUI::__ScrollView__ScrollType::FocusItems{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ScrollView__ScrollDirection::__ScrollView__ScrollDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView__ScrollDirection::__ScrollView__ScrollDirection() {}
constexpr ::HMUI::__ScrollView__ScrollDirection HMUI::__ScrollView__ScrollDirection::None{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__ScrollView__ScrollDirection HMUI::__ScrollView__ScrollDirection::Up{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__ScrollView__ScrollDirection HMUI::__ScrollView__ScrollDirection::Down{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::__ScrollView__ScrollDirection HMUI::__ScrollView__ScrollDirection::Left{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::__ScrollView__ScrollDirection HMUI::__ScrollView__ScrollDirection::Right{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ScrollView__ScrollViewDirection::__ScrollView__ScrollViewDirection(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView__ScrollViewDirection::__ScrollView__ScrollViewDirection() {}
constexpr ::HMUI::__ScrollView__ScrollViewDirection HMUI::__ScrollView__ScrollViewDirection::Vertical{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__ScrollView__ScrollViewDirection HMUI::__ScrollView__ScrollViewDirection::Horizontal{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HMUI::__ScrollView____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c::*)()>(&::HMUI::__ScrollView____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5d40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c._Awake_b__42_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::__ScrollView____c::*)(float_t)>(&::HMUI::__ScrollView____c::_Awake_b__42_1)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a5d48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(), "<Awake>b__42_1", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c._Awake_b__42_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::__ScrollView____c::*)(float_t)>(&::HMUI::__ScrollView____c::_Awake_b__42_3)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22a5d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(), "<Awake>b__42_3", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void HMUI::__ScrollView____c::setStaticF___9(::HMUI::__ScrollView____c* value) {
  ::cordl_internals::setStaticField<::HMUI::__ScrollView____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>(
      std::forward<::HMUI::__ScrollView____c*>(value));
}
inline ::HMUI::__ScrollView____c* HMUI::__ScrollView____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::HMUI::__ScrollView____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>();
}
inline void HMUI::__ScrollView____c::setStaticF___9__42_1(::System::Func_2<float_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<float_t, float_t>*, "<>9__42_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>(
      std::forward<::System::Func_2<float_t, float_t>*>(value));
}
inline ::System::Func_2<float_t, float_t>* HMUI::__ScrollView____c::getStaticF___9__42_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<float_t, float_t>*, "<>9__42_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>();
}
inline void HMUI::__ScrollView____c::setStaticF___9__42_3(::System::Func_2<float_t, float_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<float_t, float_t>*, "<>9__42_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>(
      std::forward<::System::Func_2<float_t, float_t>*>(value));
}
inline ::System::Func_2<float_t, float_t>* HMUI::__ScrollView____c::getStaticF___9__42_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<float_t, float_t>*, "<>9__42_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get>();
}
inline ::HMUI::__ScrollView____c* HMUI::__ScrollView____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__ScrollView____c*>());
}
inline void HMUI::__ScrollView____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t HMUI::__ScrollView____c::_Awake_b__42_1(float_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(), "<Awake>b__42_1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, i);
}
inline float_t HMUI::__ScrollView____c::_Awake_b__42_3(float_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c*>::get(), "<Awake>b__42_3", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, i);
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView____c::__ScrollView____c() {}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass55_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass55_0::*)()>(&::HMUI::__ScrollView____c__DisplayClass55_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a589c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass55_0._PageUpButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass55_0::*)(float_t)>(
    &::HMUI::__ScrollView____c__DisplayClass55_0::_PageUpButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22a5d50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(), "<PageUpButtonPressed>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::__ScrollView____c__DisplayClass55_0::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass55_0::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::__ScrollView____c__DisplayClass55_0::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline ::HMUI::__ScrollView____c__DisplayClass55_0* HMUI::__ScrollView____c__DisplayClass55_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__ScrollView____c__DisplayClass55_0*>());
}
inline void HMUI::__ScrollView____c__DisplayClass55_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass55_0::_PageUpButtonPressed_b__0(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass55_0*>::get(), "<PageUpButtonPressed>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView____c__DisplayClass55_0::__ScrollView____c__DisplayClass55_0() {}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass56_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass56_0::*)()>(&::HMUI::__ScrollView____c__DisplayClass56_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass56_0._PageDownButtonPressed_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass56_0::*)(float_t)>(
    &::HMUI::__ScrollView____c__DisplayClass56_0::_PageDownButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22a5d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(), "<PageDownButtonPressed>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::__ScrollView____c__DisplayClass56_0::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass56_0::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::__ScrollView____c__DisplayClass56_0::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline ::HMUI::__ScrollView____c__DisplayClass56_0* HMUI::__ScrollView____c__DisplayClass56_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__ScrollView____c__DisplayClass56_0*>());
}
inline void HMUI::__ScrollView____c__DisplayClass56_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass56_0::_PageDownButtonPressed_b__0(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass56_0*>::get(), "<PageDownButtonPressed>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView____c__DisplayClass56_0::__ScrollView____c__DisplayClass56_0() {}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass61_0::*)()>(&::HMUI::__ScrollView____c__DisplayClass61_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5c2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_0._HandleJoystickWasCenteredThisFrame_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass61_0::*)(float_t)>(
    &::HMUI::__ScrollView____c__DisplayClass61_0::_HandleJoystickWasCenteredThisFrame_b__0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22a5d70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(), "<HandleJoystickWasCenteredThisFrame>b__0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::__ScrollView____c__DisplayClass61_0::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass61_0::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::__ScrollView____c__DisplayClass61_0::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline ::HMUI::__ScrollView____c__DisplayClass61_0* HMUI::__ScrollView____c__DisplayClass61_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__ScrollView____c__DisplayClass61_0*>());
}
inline void HMUI::__ScrollView____c__DisplayClass61_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass61_0::_HandleJoystickWasCenteredThisFrame_b__0(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_0*>::get(), "<HandleJoystickWasCenteredThisFrame>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView____c__DisplayClass61_0::__ScrollView____c__DisplayClass61_0() {}
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::__ScrollView____c__DisplayClass61_1::*)()>(&::HMUI::__ScrollView____c__DisplayClass61_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::__ScrollView____c__DisplayClass61_1._HandleJoystickWasCenteredThisFrame_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::__ScrollView____c__DisplayClass61_1::*)(float_t)>(
    &::HMUI::__ScrollView____c__DisplayClass61_1::_HandleJoystickWasCenteredThisFrame_b__1)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x22a5d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(), "<HandleJoystickWasCenteredThisFrame>b__1",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& HMUI::__ScrollView____c__DisplayClass61_1::__cordl_internal_get_threshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr float_t const& HMUI::__ScrollView____c__DisplayClass61_1::__cordl_internal_get_threshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threshold;
}
constexpr void HMUI::__ScrollView____c__DisplayClass61_1::__cordl_internal_set_threshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___threshold = value;
}
inline ::HMUI::__ScrollView____c__DisplayClass61_1* HMUI::__ScrollView____c__DisplayClass61_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::__ScrollView____c__DisplayClass61_1*>());
}
inline void HMUI::__ScrollView____c__DisplayClass61_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::__ScrollView____c__DisplayClass61_1::_HandleJoystickWasCenteredThisFrame_b__1(float_t pos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::__ScrollView____c__DisplayClass61_1*>::get(), "<HandleJoystickWasCenteredThisFrame>b__1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pos);
}
// Ctor Parameters []
constexpr ::HMUI::__ScrollView____c__DisplayClass61_1::__ScrollView____c__DisplayClass61_1() {}
//  Writing Method size for method: ::HMUI::ScrollView.add_scrollPositionChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::System::Action_1<float_t>*)>(&::HMUI::ScrollView::add_scrollPositionChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22a3e28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "add_scrollPositionChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.remove_scrollPositionChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::System::Action_1<float_t>*)>(&::HMUI::ScrollView::remove_scrollPositionChangedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22a3ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "remove_scrollPositionChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_viewportTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_viewportTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a3f88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_viewportTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_contentTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::RectTransform> (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_contentTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a3f90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_contentTransform",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_position
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_position)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22a3f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_position",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_scrollableSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_scrollableSize)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22a3fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_scrollableSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_scrollPageSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_scrollPageSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22a4050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_scrollPageSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.get_contentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::get_contentSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22a3ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_contentSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::Awake)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x22a40a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22a4730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.CheckScrollInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::CheckScrollInput)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x22a486c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "CheckScrollInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::Update)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x22a4f10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.SetContentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::SetContentSize)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x22a5104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "SetContentSize", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.UpdateContentSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::UpdateContentSize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22a458c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "UpdateContentSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToEnd
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(bool)>(&::HMUI::ScrollView::ScrollToEnd)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22a5350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollToEnd", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToWorldPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector3, float_t, bool)>(&::HMUI::ScrollView::ScrollToWorldPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a5390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollToWorldPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollToWorldPositionIfOutsideArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector3, float_t, float_t, float_t, bool)>(
    &::HMUI::ScrollView::ScrollToWorldPositionIfOutsideArea)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22a5488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollToWorldPositionIfOutsideArea", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ScrollTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t, bool)>(&::HMUI::ScrollView::ScrollTo)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22a3d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.WorldPositionToScrollViewPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::HMUI::ScrollView::*)(::UnityEngine::Vector3)>(
    &::HMUI::ScrollView::WorldPositionToScrollViewPosition)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x22a53d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "WorldPositionToScrollViewPosition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.SetDestinationPos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::SetDestinationPos)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22a5538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "SetDestinationPos", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.UpdateVerticalScrollIndicator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(float_t)>(&::HMUI::ScrollView::UpdateVerticalScrollIndicator)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22a5030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "UpdateVerticalScrollIndicator", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.PageUpButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::PageUpButtonPressed)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x22a55b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "PageUpButtonPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.PageDownButtonPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::PageDownButtonPressed)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x22a58a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "PageDownButtonPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.RefreshButtons
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::RefreshButtons)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22a4620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "RefreshButtons",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandlePointerDidEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::ScrollView::HandlePointerDidEnter)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x22a5bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandlePointerDidEnter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandlePointerDidExit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::HMUI::ScrollView::HandlePointerDidExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandlePointerDidExit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandleJoystickWasNotCenteredThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)(::UnityEngine::Vector2)>(&::HMUI::ScrollView::HandleJoystickWasNotCenteredThisFrame)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22a49c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandleJoystickWasNotCenteredThisFrame", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.HandleJoystickWasCenteredThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::HandleJoystickWasCenteredThisFrame)> {
  constexpr static std::size_t size = 0x454;
  constexpr static std::size_t addrs = 0x22a4abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandleJoystickWasCenteredThisFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView.ResolveScrollDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__ScrollView__ScrollDirection (::HMUI::ScrollView::*)(::UnityEngine::Vector2)>(
    &::HMUI::ScrollView::ResolveScrollDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22a5bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ResolveScrollDirection", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ScrollView::*)()>(&::HMUI::ScrollView::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22a5c3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._Awake_b__42_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)(::HMUI::ItemForFocussedScrolling*)>(&::HMUI::ScrollView::_Awake_b__42_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22a5c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "<Awake>b__42_0", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ScrollView._Awake_b__42_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HMUI::ScrollView::*)(::HMUI::ItemForFocussedScrolling*)>(&::HMUI::ScrollView::_Awake_b__42_2)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x22a5ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "<Awake>b__42_2", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewport)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contentRectTransform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__ScrollView__ScrollViewDirection& HMUI::ScrollView::__cordl_internal_get__scrollViewDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollViewDirection;
}
constexpr ::HMUI::__ScrollView__ScrollViewDirection const& HMUI::ScrollView::__cordl_internal_get__scrollViewDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollViewDirection;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollViewDirection(::HMUI::__ScrollView__ScrollViewDirection value) {
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageUpButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageDownButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____verticalScrollIndicator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::HMUI::__ScrollView__ScrollType& HMUI::ScrollView::__cordl_internal_get__scrollType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollType;
}
constexpr ::HMUI::__ScrollView__ScrollType const& HMUI::ScrollView::__cordl_internal_get__scrollType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollType;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollType(::HMUI::__ScrollView__ScrollType value) {
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
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IVRPlatformHelper*> const& HMUI::ScrollView::__cordl_internal_get__platformHelper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformHelper;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__platformHelper(::GlobalNamespace::IVRPlatformHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformHelper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& HMUI::ScrollView::__cordl_internal_get_scrollPositionChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollPositionChangedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& HMUI::ScrollView::__cordl_internal_get_scrollPositionChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scrollPositionChangedEvent;
}
constexpr void HMUI::ScrollView::__cordl_internal_set_scrollPositionChangedEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scrollPositionChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& HMUI::ScrollView::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::cordl_internals::to_const_pointer<::HMUI::ButtonBinder*> const& HMUI::ScrollView::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::ArrayW<float_t, ::Array<float_t>*>& HMUI::ScrollView::__cordl_internal_get__scrollFocusPositions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollFocusPositions;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& HMUI::ScrollView::__cordl_internal_get__scrollFocusPositions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scrollFocusPositions;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__scrollFocusPositions(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scrollFocusPositions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eventSystemListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::__ScrollView__ScrollDirection& HMUI::ScrollView::__cordl_internal_get__lastJoystickScrollDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastJoystickScrollDirection;
}
constexpr ::HMUI::__ScrollView__ScrollDirection const& HMUI::ScrollView::__cordl_internal_get__lastJoystickScrollDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastJoystickScrollDirection;
}
constexpr void HMUI::ScrollView::__cordl_internal_set__lastJoystickScrollDirection(::HMUI::__ScrollView__ScrollDirection value) {
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
inline void HMUI::ScrollView::add_scrollPositionChangedEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "add_scrollPositionChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ScrollView::remove_scrollPositionChangedEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "remove_scrollPositionChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ScrollView::get_viewportTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_viewportTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::RectTransform> HMUI::ScrollView::get_contentTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_contentTransform",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>, false>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_position() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_position",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_scrollableSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_scrollableSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_scrollPageSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_scrollPageSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::get_contentSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "get_contentSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::CheckScrollInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "CheckScrollInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::SetContentSize(float_t contentSize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "SetContentSize", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, contentSize);
}
inline void HMUI::ScrollView::UpdateContentSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "UpdateContentSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::ScrollToEnd(bool animated) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollToEnd", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, animated);
}
inline void HMUI::ScrollView::ScrollToWorldPosition(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, bool animated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollToWorldPosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, worldPosition, pageRelativePosition, animated);
}
inline void HMUI::ScrollView::ScrollToWorldPositionIfOutsideArea(::UnityEngine::Vector3 worldPosition, float_t pageRelativePosition, float_t relativeBoundaryStart, float_t relativeBoundaryEnd,
                                                                 bool animated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollToWorldPositionIfOutsideArea", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, worldPosition, pageRelativePosition, relativeBoundaryStart, relativeBoundaryEnd, animated);
}
inline void HMUI::ScrollView::ScrollTo(float_t destinationPos, bool animated) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ScrollTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destinationPos, animated);
}
inline ::UnityEngine::Vector2 HMUI::ScrollView::WorldPositionToScrollViewPosition(::UnityEngine::Vector3 worldPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "WorldPositionToScrollViewPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, worldPosition);
}
inline void HMUI::ScrollView::SetDestinationPos(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "SetDestinationPos", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ScrollView::UpdateVerticalScrollIndicator(float_t posY) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "UpdateVerticalScrollIndicator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, posY);
}
inline void HMUI::ScrollView::PageUpButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "PageUpButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::PageDownButtonPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "PageDownButtonPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::RefreshButtons() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "RefreshButtons",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::ScrollView::HandlePointerDidEnter(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandlePointerDidEnter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::ScrollView::HandlePointerDidExit(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandlePointerDidExit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventData);
}
inline void HMUI::ScrollView::HandleJoystickWasNotCenteredThisFrame(::UnityEngine::Vector2 deltaPos) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandleJoystickWasNotCenteredThisFrame", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deltaPos);
}
inline void HMUI::ScrollView::HandleJoystickWasCenteredThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "HandleJoystickWasCenteredThisFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::__ScrollView__ScrollDirection HMUI::ScrollView::ResolveScrollDirection(::UnityEngine::Vector2 deltaPos) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "ResolveScrollDirection", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::__ScrollView__ScrollDirection, false>(this, ___internal_method, deltaPos);
}
inline ::HMUI::ScrollView* HMUI::ScrollView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ScrollView*>());
}
inline void HMUI::ScrollView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t HMUI::ScrollView::_Awake_b__42_0(::HMUI::ItemForFocussedScrolling* item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "<Awake>b__42_0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, item);
}
inline float_t HMUI::ScrollView::_Awake_b__42_2(::HMUI::ItemForFocussedScrolling* item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ScrollView*>::get(), "<Awake>b__42_2", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ItemForFocussedScrolling*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, item);
}
// Ctor Parameters []
constexpr ::HMUI::ScrollView::ScrollView() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
