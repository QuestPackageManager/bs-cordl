#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__TrailElement_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TrailElement.SetData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElement::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::TrailElement::SetData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x249521c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement.CopyFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElement::*)(::GlobalNamespace::TrailElement*)>(
    &::GlobalNamespace::TrailElement::CopyFrom)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x249525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TrailElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement.SetDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElement::*)(float_t)>(&::GlobalNamespace::TrailElement::SetDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x249529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "SetDistance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement.UpdateLocalDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElement::*)(::GlobalNamespace::TrailElement*)>(
    &::GlobalNamespace::TrailElement::UpdateLocalDistance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24952a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "UpdateLocalDistance", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TrailElement*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TrailElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TrailElement::*)()>(&::GlobalNamespace::TrailElement::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x249534c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::TrailElement::__cordl_internal_get_position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TrailElement::__cordl_internal_get_position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___position;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_position(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___position = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::TrailElement::__cordl_internal_get_normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normal;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::TrailElement::__cordl_internal_get_normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___normal;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_normal(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___normal = value;
}
constexpr float_t& GlobalNamespace::TrailElement::__cordl_internal_get_distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr float_t const& GlobalNamespace::TrailElement::__cordl_internal_get_distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___distance;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___distance = value;
}
constexpr float_t& GlobalNamespace::TrailElement::__cordl_internal_get_localDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localDistance;
}
constexpr float_t const& GlobalNamespace::TrailElement::__cordl_internal_get_localDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___localDistance;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_localDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___localDistance = value;
}
constexpr float_t& GlobalNamespace::TrailElement::__cordl_internal_get_time() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr float_t const& GlobalNamespace::TrailElement::__cordl_internal_get_time() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___time;
}
constexpr void GlobalNamespace::TrailElement::__cordl_internal_set_time(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___time = value;
}
inline void GlobalNamespace::TrailElement::SetData(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "SetData", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, time);
}
inline void GlobalNamespace::TrailElement::CopyFrom(::GlobalNamespace::TrailElement* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "CopyFrom", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TrailElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void GlobalNamespace::TrailElement::SetDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "SetDistance", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::TrailElement::UpdateLocalDistance(::GlobalNamespace::TrailElement* prev) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), "UpdateLocalDistance", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::TrailElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prev);
}
inline ::GlobalNamespace::TrailElement* GlobalNamespace::TrailElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TrailElement*>());
}
inline void GlobalNamespace::TrailElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TrailElement*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TrailElement::TrailElement() {}
