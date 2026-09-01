#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ResourcePathAttribute.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__SearchType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ResourcePathAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ResourcePathAttribute::*)(::StringW, ::UnityEngine::Rendering::SearchType)>(
    &::UnityEngine::Rendering::ResourcePathAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b0b2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourcePathAttribute*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ResourcePathAttribute::_ctor(::StringW path, ::UnityEngine::Rendering::SearchType location) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourcePathAttribute*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path, location);
}
inline ::UnityEngine::Rendering::ResourcePathAttribute* UnityEngine::Rendering::ResourcePathAttribute::New_ctor(::StringW path, ::UnityEngine::Rendering::SearchType location) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ResourcePathAttribute*>(path, location));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ResourcePathAttribute::ResourcePathAttribute() {}
