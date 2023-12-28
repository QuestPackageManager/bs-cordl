#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__HSVColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::HSVColor::*)(float_t, float_t, float_t)>(
    &::UnityEngine::ProBuilder::HSVColor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b3d220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::HSVColor::*)(float_t, float_t, float_t, float_t)>(
    &::UnityEngine::ProBuilder::HSVColor::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b3d25c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor.FromRGB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::HSVColor* (*)(::UnityEngine::Color)>(&::UnityEngine::ProBuilder::HSVColor::FromRGB)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b3d2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::HSVColor::*)()>(&::UnityEngine::ProBuilder::HSVColor::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b3d540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::HSVColor.SqrDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::ProBuilder::HSVColor::*)(::UnityEngine::ProBuilder::HSVColor*)>(
    &::UnityEngine::ProBuilder::HSVColor::SqrDistance)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b3d604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), "SqrDistance", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::HSVColor*>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::HSVColor::__get_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr float_t const& UnityEngine::ProBuilder::HSVColor::__get_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___h;
}
constexpr void UnityEngine::ProBuilder::HSVColor::__set_h(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___h = value;
}
constexpr float_t& UnityEngine::ProBuilder::HSVColor::__get_s() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr float_t const& UnityEngine::ProBuilder::HSVColor::__get_s() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___s;
}
constexpr void UnityEngine::ProBuilder::HSVColor::__set_s(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___s = value;
}
constexpr float_t& UnityEngine::ProBuilder::HSVColor::__get_v() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr float_t const& UnityEngine::ProBuilder::HSVColor::__get_v() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___v;
}
constexpr void UnityEngine::ProBuilder::HSVColor::__set_v(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___v = value;
}
inline ::UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::New_ctor(float_t h, float_t s, float_t v) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::HSVColor*>(h, s, v));
}
inline void UnityEngine::ProBuilder::HSVColor::_ctor(float_t h, float_t s, float_t v) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, h, s, v);
}
inline ::UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::New_ctor(float_t h, float_t s, float_t v, float_t sv_modifier) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::HSVColor*>(h, s, v, sv_modifier));
}
inline void UnityEngine::ProBuilder::HSVColor::_ctor(float_t h, float_t s, float_t v, float_t sv_modifier) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, h, s, v, sv_modifier);
}
inline ::UnityEngine::ProBuilder::HSVColor* UnityEngine::ProBuilder::HSVColor::FromRGB(::UnityEngine::Color col) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::HSVColor*, false>(nullptr, ___internal_method, col);
}
inline ::StringW UnityEngine::ProBuilder::HSVColor::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline float_t UnityEngine::ProBuilder::HSVColor::SqrDistance(::UnityEngine::ProBuilder::HSVColor* InColor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::HSVColor*>::get(), "SqrDistance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::HSVColor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, InColor);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::HSVColor::HSVColor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
