#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Documentation.hpp"
#include "UnityEngine/Rendering/zzzz__DocumentationInfo_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__Documentation_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Documentation.GetPageLink
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::Rendering::Universal::Documentation::GetPageLink)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x686f320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Documentation*>(), { "GetPageLink", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::Documentation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::Documentation::*)()>(&::UnityEngine::Rendering::Universal::Documentation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x686f370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Documentation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::Universal::Documentation::GetPageLink(::StringW pageName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Documentation*>(), { "GetPageLink", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, pageName);
}
inline void UnityEngine::Rendering::Universal::Documentation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::Documentation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::Documentation* UnityEngine::Rendering::Universal::Documentation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::Documentation*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Documentation::Documentation() {}
