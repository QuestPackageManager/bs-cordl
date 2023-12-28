#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__CIELabColor_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__XYZColor_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::CIELabColor::*)(float_t, float_t, float_t)>(
    &::UnityEngine::ProBuilder::CIELabColor::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b3da4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor.FromXYZ
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(::UnityEngine::ProBuilder::XYZColor*)>(
    &::UnityEngine::ProBuilder::CIELabColor::FromXYZ)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2b3da88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), "FromXYZ", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::XYZColor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor.FromRGB
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::CIELabColor* (*)(::UnityEngine::Color)>(
    &::UnityEngine::ProBuilder::CIELabColor::FromRGB)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b3dc40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::CIELabColor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::CIELabColor::*)()>(&::UnityEngine::ProBuilder::CIELabColor::ToString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b3dccc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), 3));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::ProBuilder::CIELabColor::__get_L() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr float_t const& UnityEngine::ProBuilder::CIELabColor::__get_L() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___L;
}
constexpr void UnityEngine::ProBuilder::CIELabColor::__set_L(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___L = value;
}
constexpr float_t& UnityEngine::ProBuilder::CIELabColor::__get_a() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr float_t const& UnityEngine::ProBuilder::CIELabColor::__get_a() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___a;
}
constexpr void UnityEngine::ProBuilder::CIELabColor::__set_a(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___a = value;
}
constexpr float_t& UnityEngine::ProBuilder::CIELabColor::__get_b() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr float_t const& UnityEngine::ProBuilder::CIELabColor::__get_b() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___b;
}
constexpr void UnityEngine::ProBuilder::CIELabColor::__set_b(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___b = value;
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::New_ctor(float_t L, float_t a, float_t b) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::CIELabColor*>(L, a, b));
}
inline void UnityEngine::ProBuilder::CIELabColor::_ctor(float_t L, float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, L, a, b);
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::FromXYZ(::UnityEngine::ProBuilder::XYZColor* xyz) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), "FromXYZ", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::XYZColor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::CIELabColor*, false>(nullptr, ___internal_method, xyz);
}
inline ::UnityEngine::ProBuilder::CIELabColor* UnityEngine::ProBuilder::CIELabColor::FromRGB(::UnityEngine::Color col) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), "FromRGB", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::CIELabColor*, false>(nullptr, ___internal_method, col);
}
inline ::StringW UnityEngine::ProBuilder::CIELabColor::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::CIELabColor*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::CIELabColor::CIELabColor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
