#pragma once
#include "RootMotion/FinalIK/zzzz__FullBodyBipedEffector_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "RootMotion/FinalIK/zzzz__FullBodyBipedIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__OffsetModifier_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKEffector_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::*)(
    ::RootMotion::FinalIK::IKEffector*, ::UnityEngine::Quaternion)>(&::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::Apply)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x1297d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits.SpringAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::*)(float_t, float_t, float_t)>(
    &::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::SpringAxis)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1297fc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(), "SpringAxis", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits.Spring
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::*)(float_t, float_t, bool)>(
    &::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::Spring)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x1298038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(), "Spring", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::*)()>(
    &::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1298080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_effector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedEffector const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_effector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___effector;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_effector(::RootMotion::FinalIK::FullBodyBipedEffector value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___effector = value;
}
constexpr float_t& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_spring() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spring;
}
constexpr float_t const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_spring() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spring;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_spring(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spring = value;
}
constexpr bool& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_x() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr bool const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_x() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___x;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_x(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___x = value;
}
constexpr bool& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_y() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr bool const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_y() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___y;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_y(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___y = value;
}
constexpr bool& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_z() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr bool const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_z() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___z;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_z(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___z = value;
}
constexpr float_t& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_minX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minX;
}
constexpr float_t const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_minX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minX;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_minX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minX = value;
}
constexpr float_t& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_maxX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxX;
}
constexpr float_t const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_maxX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxX;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_maxX(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxX = value;
}
constexpr float_t& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_minY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minY;
}
constexpr float_t const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_minY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minY;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_minY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minY = value;
}
constexpr float_t& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_maxY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxY;
}
constexpr float_t const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_maxY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxY;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_maxY(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxY = value;
}
constexpr float_t& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_minZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minZ;
}
constexpr float_t const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_minZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minZ;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_minZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minZ = value;
}
constexpr float_t& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_maxZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxZ;
}
constexpr float_t const& RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__get_maxZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxZ;
}
constexpr void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__set_maxZ(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxZ = value;
}
inline void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::Apply(::RootMotion::FinalIK::IKEffector* e, ::UnityEngine::Quaternion rootRotation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(), "Apply", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::RootMotion::FinalIK::IKEffector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, rootRotation);
}
inline float_t RootMotion::FinalIK::__OffsetModifier__OffsetLimits::SpringAxis(float_t value, float_t min, float_t max) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(), "SpringAxis", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value, min, max);
}
inline float_t RootMotion::FinalIK::__OffsetModifier__OffsetLimits::Spring(float_t value, float_t limit, bool negative) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(), "Spring", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, value, limit, negative);
}
inline ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits* RootMotion::FinalIK::__OffsetModifier__OffsetLimits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>());
}
inline void RootMotion::FinalIK::__OffsetModifier__OffsetLimits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__OffsetModifier__OffsetLimits::__OffsetModifier__OffsetLimits() {}
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::*)(int32_t)>(
    &::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1297c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::*)()>(
    &::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x1298088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::*)()>(
    &::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::MoveNext)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x129808c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::*)()>(
    &::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12981dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                 "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::*)()>(
    &::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12981e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::*)()>(
    &::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1298224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::RootMotion::FinalIK::OffsetModifier*& RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::OffsetModifier*> const& RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__set___4__this(::RootMotion::FinalIK::OffsetModifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8* RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>(__1__state));
}
inline void RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                               "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::__OffsetModifier___Initiate_d__8::__OffsetModifier___Initiate_d__8() {}
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier.get_deltaTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::RootMotion::FinalIK::OffsetModifier::*)()>(&::RootMotion::FinalIK::OffsetModifier::get_deltaTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x12946ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "get_deltaTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier.OnModifyOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetModifier::*)()>(&::RootMotion::FinalIK::OffsetModifier::OnModifyOffset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetModifier::*)()>(&::RootMotion::FinalIK::OffsetModifier::Start)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1294a74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier.Initiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::RootMotion::FinalIK::OffsetModifier::*)()>(
    &::RootMotion::FinalIK::OffsetModifier::Initiate)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x1297bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "Initiate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier.ModifyOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetModifier::*)()>(&::RootMotion::FinalIK::OffsetModifier::ModifyOffset)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x1297c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "ModifyOffset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier.ApplyLimits
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetModifier::*)(
    ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>)>(&::RootMotion::FinalIK::OffsetModifier::ApplyLimits)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x12970dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "ApplyLimits", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetModifier::*)()>(&::RootMotion::FinalIK::OffsetModifier::OnDestroy)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x1297ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::OffsetModifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::OffsetModifier::*)()>(&::RootMotion::FinalIK::OffsetModifier::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x12949ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& RootMotion::FinalIK::OffsetModifier::__get_weight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr float_t const& RootMotion::FinalIK::OffsetModifier::__get_weight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___weight;
}
constexpr void RootMotion::FinalIK::OffsetModifier::__set_weight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___weight = value;
}
constexpr ::RootMotion::FinalIK::FullBodyBipedIK*& RootMotion::FinalIK::OffsetModifier::__get_ik() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::FullBodyBipedIK*> const& RootMotion::FinalIK::OffsetModifier::__get_ik() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ik;
}
constexpr void RootMotion::FinalIK::OffsetModifier::__set_ik(::RootMotion::FinalIK::FullBodyBipedIK* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ik)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& RootMotion::FinalIK::OffsetModifier::__get_lastTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTime;
}
constexpr float_t const& RootMotion::FinalIK::OffsetModifier::__get_lastTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastTime;
}
constexpr void RootMotion::FinalIK::OffsetModifier::__set_lastTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastTime = value;
}
inline float_t RootMotion::FinalIK::OffsetModifier::get_deltaTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "get_deltaTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::OffsetModifier::OnModifyOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "OnModifyOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::OffsetModifier::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* RootMotion::FinalIK::OffsetModifier::Initiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "Initiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::OffsetModifier::ModifyOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "ModifyOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
RootMotion::FinalIK::OffsetModifier::ApplyLimits(::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*> limits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "ApplyLimits", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::ArrayW<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*, ::Array<::RootMotion::FinalIK::__OffsetModifier__OffsetLimits*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, limits);
}
inline void RootMotion::FinalIK::OffsetModifier::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::OffsetModifier* RootMotion::FinalIK::OffsetModifier::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::OffsetModifier*>());
}
inline void RootMotion::FinalIK::OffsetModifier::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::OffsetModifier*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::OffsetModifier::OffsetModifier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
