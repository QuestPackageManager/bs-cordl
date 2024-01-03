#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_Curve_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__CurveNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Curve_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Parameters_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState::__HEU_Curve__CurveEditState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState::__HEU_Curve__CurveEditState() {}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState HoudiniEngineUnity::__HEU_Curve__CurveEditState::INVALID{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState HoudiniEngineUnity::__HEU_Curve__CurveEditState::GENERATED{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState HoudiniEngineUnity::__HEU_Curve__CurveEditState::EDITING{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState HoudiniEngineUnity::__HEU_Curve__CurveEditState::REQUIRES_GENERATION{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Curve__Interaction::__HEU_Curve__Interaction(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Curve__Interaction::__HEU_Curve__Interaction() {}
constexpr ::HoudiniEngineUnity::__HEU_Curve__Interaction HoudiniEngineUnity::__HEU_Curve__Interaction::VIEW{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_Curve__Interaction HoudiniEngineUnity::__HEU_Curve__Interaction::ADD{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::__HEU_Curve__Interaction HoudiniEngineUnity::__HEU_Curve__Interaction::EDIT{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision::__HEU_Curve__CurveDrawCollision(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision::__HEU_Curve__CurveDrawCollision() {}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision::COLLIDERS{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision HoudiniEngineUnity::__HEU_Curve__CurveDrawCollision::LAYERMASK{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::*)()>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21533d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0._UpdateCurveInputForCustomAttributes_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::*)(::HoudiniEngineUnity::CurveNodeData*)>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__0)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x21552e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(), "<UpdateCurveInputForCustomAttributes>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::CurveNodeData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0._UpdateCurveInputForCustomAttributes_b__1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::*)(int32_t, int32_t, float_t, int32_t)>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__1)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x21554a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(), "<UpdateCurveInputForCustomAttributes>b__1",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0._UpdateCurveInputForCustomAttributes_b__2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::*)(int32_t, int32_t)>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__2)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x215586c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(), "<UpdateCurveInputForCustomAttributes>b__2",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__get_positions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__get_positions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positions;
}
constexpr void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__set_positions(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__get_rotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Quaternion>*> const&
HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__get_rotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotations;
}
constexpr void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__set_rotations(::System::Collections::Generic::List_1<::UnityEngine::Quaternion>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__get_scales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scales;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__get_scales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scales;
}
constexpr void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__set_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scales)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0* HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>());
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__0(::HoudiniEngineUnity::CurveNodeData* data) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(), "<UpdateCurveInputForCustomAttributes>b__0",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::CurveNodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__1(int32_t nIndex1, int32_t nIndex2, float_t fCoeff, int32_t nInsertIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(), "<UpdateCurveInputForCustomAttributes>b__1",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nIndex1, nIndex2, fCoeff, nInsertIndex);
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::_UpdateCurveInputForCustomAttributes_b__2(int32_t nIndex, int32_t nInsertIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0*>::get(), "<UpdateCurveInputForCustomAttributes>b__2",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nIndex, nInsertIndex);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass38_0::__HEU_Curve____c__DisplayClass38_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::*)()>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2153eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0._UpdatePoints_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::*)(::HoudiniEngineUnity::CurveNodeData*)>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::_UpdatePoints_b__0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2155b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0*>::get(), "<UpdatePoints>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::CurveNodeData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::__get_rotations() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::__get_rotations() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___rotations;
}
constexpr void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::__set_rotations(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::__get_scales() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scales;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::__get_scales() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___scales;
}
constexpr void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::__set_scales(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___scales)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0* HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0*>());
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::_UpdatePoints_b__0(::HoudiniEngineUnity::CurveNodeData* data) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0*>::get(), "<UpdatePoints>b__0",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::CurveNodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass40_0::__HEU_Curve____c__DisplayClass40_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::*)()>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21548a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0._GetAllPoints_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::*)(::HoudiniEngineUnity::CurveNodeData*)>(
    &::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::_GetAllPoints_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2155c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0*>::get(), "<GetAllPoints>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::CurveNodeData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::__get_points() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___points;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::__get_points() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___points;
}
constexpr void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::__set_points(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___points)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0* HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0*>());
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::_GetAllPoints_b__0(::HoudiniEngineUnity::CurveNodeData* transform) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0*>::get(), "<GetAllPoints>b__0",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::CurveNodeData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, transform);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_Curve____c__DisplayClass48_0::__HEU_Curve____c__DisplayClass48_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.get_GeoID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_Curve::*)()>(&::HoudiniEngineUnity::HEU_Curve::get_GeoID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215117c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_GeoID",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.get_CurveNodeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::get_CurveNodeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2151184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_CurveNodeData",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.IsEditable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Curve::*)()>(&::HoudiniEngineUnity::HEU_Curve::IsEditable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215118c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "IsEditable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.get_Parameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Parameters* (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2151194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_Parameters",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SetUploadParameterPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(bool)>(&::HoudiniEngineUnity::HEU_Curve::SetUploadParameterPreset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x215119c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetUploadParameterPreset",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.get_CurveName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_Curve::*)()>(&::HoudiniEngineUnity::HEU_Curve::get_CurveName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21511a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_CurveName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.IsGeoCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Curve::*)()>(&::HoudiniEngineUnity::HEU_Curve::IsGeoCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21511b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "IsGeoCurve",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.get_EditState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_Curve__CurveEditState (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::get_EditState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21511b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_EditState",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.get_ParentAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_HoudiniAsset* (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::get_ParentAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21511c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_ParentAsset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.CreateSetupCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_Curve* (*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::StringW, int32_t, bool)>(
    &::HoudiniEngineUnity::HEU_Curve::CreateSetupCurve)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x21511c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "CreateSetupCurve", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.DestroyAllData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(bool)>(&::HoudiniEngineUnity::HEU_Curve::DestroyAllData)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2151420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "DestroyAllData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SetCurveName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::StringW)>(&::HoudiniEngineUnity::HEU_Curve::SetCurveName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x215156c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.UploadParameterPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_Curve::UploadParameterPreset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2151608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UploadParameterPreset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.ResetCurveParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_Curve::ResetCurveParameters)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21516f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "ResetCurveParameters", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SetCurveParameterPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::HoudiniEngineUnity::HEU_Curve::SetCurveParameterPreset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21517c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveParameterPreset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.UpdateCurve
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t)>(
    &::HoudiniEngineUnity::HEU_Curve::UpdateCurve)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x2151890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UpdateCurve", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GenerateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::UnityEngine::GameObject*)>(
    &::HoudiniEngineUnity::HEU_Curve::GenerateMesh)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x2151a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GenerateMesh", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.UpdateCurveInputForCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Curve::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_Curve::UpdateCurveInputForCustomAttributes)> {
  constexpr static std::size_t size = 0x15ac;
  constexpr static std::size_t addrs = 0x2151e2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UpdateCurveInputForCustomAttributes", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SyncFromParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_Curve::SyncFromParameters)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2153640;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SyncFromParameters", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.UpdatePoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t)>(
    &::HoudiniEngineUnity::HEU_Curve::UpdatePoints)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x21538b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UpdatePoints", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.ProjectToColliders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, ::UnityEngine::Vector3, float_t)>(
    &::HoudiniEngineUnity::HEU_Curve::ProjectToColliders)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x2153eb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "ProjectToColliders", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetPointsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*)>(
    &::HoudiniEngineUnity::HEU_Curve::GetPointsString)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x2154390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetPointsString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetPointsString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(
    &::HoudiniEngineUnity::HEU_Curve::GetPointsString)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x21533e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetPointsString", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SetEditState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::__HEU_Curve__CurveEditState)>(
    &::HoudiniEngineUnity::HEU_Curve::SetEditState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2154604;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetEditState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Curve__CurveEditState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SetCurvePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(int32_t, ::UnityEngine::Vector3)>(
    &::HoudiniEngineUnity::HEU_Curve::SetCurvePoint)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x215460c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurvePoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetCurvePoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Curve::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_Curve::GetCurvePoint)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x21546ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetCurvePoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetAllPointTransforms
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::GetAllPointTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x215477c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetAllPointTransforms",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetAllPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Vector3>* (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::GetAllPoints)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2154784;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetAllPoints",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetNumPoints
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_Curve::*)()>(&::HoudiniEngineUnity::HEU_Curve::GetNumPoints)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21548ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetNumPoints",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetTransformedPoint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Curve::*)(int32_t)>(
    &::HoudiniEngineUnity::HEU_Curve::GetTransformedPoint)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21548f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetTransformedPoint", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetTransformedPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Curve::*)(::UnityEngine::Vector3)>(
    &::HoudiniEngineUnity::HEU_Curve::GetTransformedPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21549bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetTransformedPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetInvertedTransformedPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Curve::*)(::UnityEngine::Vector3)>(
    &::HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedPosition)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2154a0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetInvertedTransformedPosition", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetInvertedTransformedDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HoudiniEngineUnity::HEU_Curve::*)(::UnityEngine::Vector3)>(
    &::HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedDirection)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2154a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetInvertedTransformedDirection", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.GetVertices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::GetVertices)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2154aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetVertices",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SetCurveGeometryVisibility
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(bool)>(&::HoudiniEngineUnity::HEU_Curve::SetCurveGeometryVisibility)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2154ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveGeometryVisibility",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.DownloadPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Curve::DownloadPresetData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2153e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "DownloadPresetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.UploadPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Curve::UploadPresetData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2154b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UploadPresetData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.DownloadAsDefaultPresetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_Curve::DownloadAsDefaultPresetData)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2154c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "DownloadAsDefaultPresetData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.DuplicateCurveNodeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* (::HoudiniEngineUnity::HEU_Curve::*)()>(
    &::HoudiniEngineUnity::HEU_Curve::DuplicateCurveNodeData)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x2154ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(),
                                                                               "DuplicateCurveNodeData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.SetCurveNodeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*)>(&::HoudiniEngineUnity::HEU_Curve::SetCurveNodeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2154ef0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveNodeData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_Curve::*)(::HoudiniEngineUnity::HEU_Curve*)>(
    &::HoudiniEngineUnity::HEU_Curve::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x2154ef8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Curve._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Curve::*)()>(&::HoudiniEngineUnity::HEU_Curve::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2155264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>"
constexpr HoudiniEngineUnity::HEU_Curve::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>* HoudiniEngineUnity::HEU_Curve::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_Curve__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_Curve*>*>(static_cast<void*>(this));
}
constexpr int32_t& HoudiniEngineUnity::HEU_Curve::__get__geoID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_Curve::__get__geoID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoID;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__geoID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____geoID = value;
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*& HoudiniEngineUnity::HEU_Curve::__get__curveNodeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveNodeData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*> const& HoudiniEngineUnity::HEU_Curve::__get__curveNodeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveNodeData;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__curveNodeData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curveNodeData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>& HoudiniEngineUnity::HEU_Curve::__get__vertices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> const& HoudiniEngineUnity::HEU_Curve::__get__vertices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vertices;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__vertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vertices)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_Curve::__get__isEditable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isEditable;
}
constexpr bool const& HoudiniEngineUnity::HEU_Curve::__get__isEditable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isEditable;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__isEditable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isEditable = value;
}
constexpr ::HoudiniEngineUnity::HEU_Parameters*& HoudiniEngineUnity::HEU_Curve::__get__parameters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_Parameters*> const& HoudiniEngineUnity::HEU_Curve::__get__parameters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parameters;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__parameters(::HoudiniEngineUnity::HEU_Parameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_Curve::__get__bUploadParameterPreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bUploadParameterPreset;
}
constexpr bool const& HoudiniEngineUnity::HEU_Curve::__get__bUploadParameterPreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bUploadParameterPreset;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__bUploadParameterPreset(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bUploadParameterPreset = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_Curve::__get__curveName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_Curve::__get__curveName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____curveName;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__curveName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____curveName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& HoudiniEngineUnity::HEU_Curve::__get__targetGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetGameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HoudiniEngineUnity::HEU_Curve::__get__targetGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetGameObject;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__targetGameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____targetGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_Curve::__get__isGeoCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGeoCurve;
}
constexpr bool const& HoudiniEngineUnity::HEU_Curve::__get__isGeoCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isGeoCurve;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__isGeoCurve(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isGeoCurve = value;
}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState& HoudiniEngineUnity::HEU_Curve::__get__editState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editState;
}
constexpr ::HoudiniEngineUnity::__HEU_Curve__CurveEditState const& HoudiniEngineUnity::HEU_Curve::__get__editState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editState;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__editState(::HoudiniEngineUnity::__HEU_Curve__CurveEditState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____editState = value;
}
constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset*& HoudiniEngineUnity::HEU_Curve::__get__parentAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentAsset;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> const& HoudiniEngineUnity::HEU_Curve::__get__parentAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parentAsset;
}
constexpr void HoudiniEngineUnity::HEU_Curve::__set__parentAsset(::HoudiniEngineUnity::HEU_HoudiniAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parentAsset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_Curve::setStaticF_PreferredNextInteractionMode(::HoudiniEngineUnity::__HEU_Curve__Interaction value) {
  ::cordl_internals::setStaticField<::HoudiniEngineUnity::__HEU_Curve__Interaction, "PreferredNextInteractionMode",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get>(std::forward<::HoudiniEngineUnity::__HEU_Curve__Interaction>(value));
}
inline ::HoudiniEngineUnity::__HEU_Curve__Interaction HoudiniEngineUnity::HEU_Curve::getStaticF_PreferredNextInteractionMode() {
  return ::cordl_internals::getStaticField<::HoudiniEngineUnity::__HEU_Curve__Interaction, "PreferredNextInteractionMode",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get>();
}
inline int32_t HoudiniEngineUnity::HEU_Curve::get_GeoID() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_GeoID",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* HoudiniEngineUnity::HEU_Curve::get_CurveNodeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_CurveNodeData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Curve::IsEditable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "IsEditable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Parameters* HoudiniEngineUnity::HEU_Curve::get_Parameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_Parameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Parameters*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Curve::SetUploadParameterPreset(bool bValue) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetUploadParameterPreset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bValue);
}
inline ::StringW HoudiniEngineUnity::HEU_Curve::get_CurveName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_CurveName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_Curve::IsGeoCurve() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "IsGeoCurve",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_Curve__CurveEditState HoudiniEngineUnity::HEU_Curve::get_EditState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_EditState",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_Curve__CurveEditState, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_HoudiniAsset* HoudiniEngineUnity::HEU_Curve::get_ParentAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "get_ParentAsset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_HoudiniAsset*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_Curve* HoudiniEngineUnity::HEU_Curve::CreateSetupCurve(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, bool isEditable, ::StringW curveName, int32_t geoID,
                                                                                        bool bGeoCurve) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "CreateSetupCurve", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_Curve*, false>(nullptr, ___internal_method, parentAsset, isEditable, curveName, geoID, bGeoCurve);
}
/// @param bIsRebuild: bool (default: false)
inline void HoudiniEngineUnity::HEU_Curve::DestroyAllData(bool bIsRebuild) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "DestroyAllData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bIsRebuild);
}
inline void HoudiniEngineUnity::HEU_Curve::SetCurveName(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline void HoudiniEngineUnity::HEU_Curve::UploadParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UploadParameterPreset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, parentAsset);
}
inline void HoudiniEngineUnity::HEU_Curve::ResetCurveParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "ResetCurveParameters", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, parentAsset);
}
inline void HoudiniEngineUnity::HEU_Curve::SetCurveParameterPreset(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset,
                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> parameterPreset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveParameterPreset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, parentAsset, parameterPreset);
}
inline void HoudiniEngineUnity::HEU_Curve::UpdateCurve(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UpdateCurve", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, partID);
}
inline void HoudiniEngineUnity::HEU_Curve::GenerateMesh(::UnityEngine::GameObject* inGameObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GenerateMesh", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inGameObject);
}
inline bool HoudiniEngineUnity::HEU_Curve::UpdateCurveInputForCustomAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UpdateCurveInputForCustomAttributes", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, parentAsset);
}
inline void HoudiniEngineUnity::HEU_Curve::SyncFromParameters(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SyncFromParameters", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, parentAsset);
}
inline void HoudiniEngineUnity::HEU_Curve::UpdatePoints(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t partID) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UpdatePoints", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, partID);
}
inline void HoudiniEngineUnity::HEU_Curve::ProjectToColliders(::HoudiniEngineUnity::HEU_HoudiniAsset* parentAsset, ::UnityEngine::Vector3 rayDirection, float_t rayDistance) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "ProjectToColliders", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parentAsset, rayDirection, rayDistance);
}
inline ::StringW HoudiniEngineUnity::HEU_Curve::GetPointsString(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* points) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetPointsString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, points);
}
inline ::StringW HoudiniEngineUnity::HEU_Curve::GetPointsString(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* points) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetPointsString", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, points);
}
inline void HoudiniEngineUnity::HEU_Curve::SetEditState(::HoudiniEngineUnity::__HEU_Curve__CurveEditState editState) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetEditState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::__HEU_Curve__CurveEditState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, editState);
}
inline void HoudiniEngineUnity::HEU_Curve::SetCurvePoint(int32_t pointIndex, ::UnityEngine::Vector3 newPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurvePoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointIndex, newPosition);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetCurvePoint(int32_t pointIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetCurvePoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, pointIndex);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* HoudiniEngineUnity::HEU_Curve::GetAllPointTransforms() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetAllPointTransforms",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* HoudiniEngineUnity::HEU_Curve::GetAllPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetAllPoints",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_Curve::GetNumPoints() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetNumPoints",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetTransformedPoint(int32_t pointIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetTransformedPoint", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, pointIndex);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetTransformedPosition(::UnityEngine::Vector3 inPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetTransformedPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, inPosition);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedPosition(::UnityEngine::Vector3 inPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetInvertedTransformedPosition",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, inPosition);
}
inline ::UnityEngine::Vector3 HoudiniEngineUnity::HEU_Curve::GetInvertedTransformedDirection(::UnityEngine::Vector3 inPosition) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetInvertedTransformedDirection",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method, inPosition);
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> HoudiniEngineUnity::HEU_Curve::GetVertices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "GetVertices",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Curve::SetCurveGeometryVisibility(bool bVisible) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveGeometryVisibility",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bVisible);
}
inline void HoudiniEngineUnity::HEU_Curve::DownloadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "DownloadPresetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_Curve::UploadPresetData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "UploadPresetData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_Curve::DownloadAsDefaultPresetData(::HoudiniEngineUnity::HEU_SessionBase* session) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "DownloadAsDefaultPresetData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* HoudiniEngineUnity::HEU_Curve::DuplicateCurveNodeData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "DuplicateCurveNodeData",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_Curve::SetCurveNodeData(::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>* curveNodeData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "SetCurveNodeData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::CurveNodeData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curveNodeData);
}
inline bool HoudiniEngineUnity::HEU_Curve::IsEquivalentTo(::HoudiniEngineUnity::HEU_Curve* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_Curve*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_Curve* HoudiniEngineUnity::HEU_Curve::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_Curve*>());
}
inline void HoudiniEngineUnity::HEU_Curve::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Curve*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_Curve::HEU_Curve() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
