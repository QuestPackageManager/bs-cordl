#pragma once
#include "UnityEngine/TextCore/Text/zzzz__ColorGradientMode_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextColorGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextColorGradient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextColorGradient::*)()>(
    &::UnityEngine::TextCore::Text::TextColorGradient::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x349fa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextColorGradient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextColorGradient::*)(::UnityEngine::Color)>(
    &::UnityEngine::TextCore::Text::TextColorGradient::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x349fb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextColorGradient._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::TextColorGradient::*)(
    ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::UnityEngine::TextCore::Text::TextColorGradient::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x349fb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_colorMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMode;
}
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode const& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_colorMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___colorMode;
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_set_colorMode(::UnityEngine::TextCore::Text::ColorGradientMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___colorMode = value;
}
constexpr ::UnityEngine::Color& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_topLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLeft;
}
constexpr ::UnityEngine::Color const& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_topLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLeft;
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_set_topLeft(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topLeft = value;
}
constexpr ::UnityEngine::Color& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_topRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topRight;
}
constexpr ::UnityEngine::Color const& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_topRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topRight;
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_set_topRight(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topRight = value;
}
constexpr ::UnityEngine::Color& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_bottomLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLeft;
}
constexpr ::UnityEngine::Color const& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_bottomLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomLeft;
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_set_bottomLeft(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomLeft = value;
}
constexpr ::UnityEngine::Color& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_bottomRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomRight;
}
constexpr ::UnityEngine::Color const& UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_get_bottomRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___bottomRight;
}
constexpr void UnityEngine::TextCore::Text::TextColorGradient::__cordl_internal_set_bottomRight(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___bottomRight = value;
}
inline void UnityEngine::TextCore::Text::TextColorGradient::setStaticF_k_DefaultColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get>(
      std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::TextCore::Text::TextColorGradient::getStaticF_k_DefaultColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "k_DefaultColor", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get>();
}
inline ::UnityEngine::TextCore::Text::TextColorGradient* UnityEngine::TextCore::Text::TextColorGradient::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::TextColorGradient*>());
}
inline void UnityEngine::TextCore::Text::TextColorGradient::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::TextCore::Text::TextColorGradient* UnityEngine::TextCore::Text::TextColorGradient::New_ctor(::UnityEngine::Color color) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::TextColorGradient*>(color));
}
inline void UnityEngine::TextCore::Text::TextColorGradient::_ctor(::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color);
}
inline ::UnityEngine::TextCore::Text::TextColorGradient* UnityEngine::TextCore::Text::TextColorGradient::New_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2,
                                                                                                                  ::UnityEngine::Color color3) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::TextCore::Text::TextColorGradient*>(color0, color1, color2, color3));
}
inline void UnityEngine::TextCore::Text::TextColorGradient::_ctor(::UnityEngine::Color color0, ::UnityEngine::Color color1, ::UnityEngine::Color color2, ::UnityEngine::Color color3) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextColorGradient*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, color0, color1, color2, color3);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextColorGradient::TextColorGradient() {}
constexpr ::UnityEngine::TextCore::Text::ColorGradientMode UnityEngine::TextCore::Text::TextColorGradient::k_DefaultColorMode{ static_cast<int32_t>(0x3) };
