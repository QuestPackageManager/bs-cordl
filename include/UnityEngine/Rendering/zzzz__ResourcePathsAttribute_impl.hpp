#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ResourcePathsAttribute.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathsAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__SearchType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ResourcePathsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ResourcePathsAttribute::*)(::ArrayW<::StringW>, ::UnityEngine::Rendering::SearchType)>(
    &::UnityEngine::Rendering::ResourcePathsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f66b48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourcePathsAttribute*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ResourcePathsAttribute::_ctor(::ArrayW<::StringW> paths, ::UnityEngine::Rendering::SearchType location) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourcePathsAttribute*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, location);
}
inline ::UnityEngine::Rendering::ResourcePathsAttribute* UnityEngine::Rendering::ResourcePathsAttribute::New_ctor(::ArrayW<::StringW> paths, ::UnityEngine::Rendering::SearchType location) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ResourcePathsAttribute*>(paths, location));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ResourcePathsAttribute::ResourcePathsAttribute() {}
