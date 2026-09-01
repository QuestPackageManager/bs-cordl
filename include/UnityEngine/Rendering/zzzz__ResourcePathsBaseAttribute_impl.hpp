#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ResourcePathsBaseAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__SearchType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ResourcePathsBaseAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ResourcePathsBaseAttribute::*)(::ArrayW<::StringW>, bool, ::UnityEngine::Rendering::SearchType)>(
    &::UnityEngine::Rendering::ResourcePathsBaseAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b0b2e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourcePathsBaseAttribute*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ResourcePathsBaseAttribute::_ctor(::ArrayW<::StringW> paths, bool isField, ::UnityEngine::Rendering::SearchType location) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourcePathsBaseAttribute*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, paths, isField, location);
}
inline ::UnityEngine::Rendering::ResourcePathsBaseAttribute* UnityEngine::Rendering::ResourcePathsBaseAttribute::New_ctor(::ArrayW<::StringW> paths, bool isField,
                                                                                                                          ::UnityEngine::Rendering::SearchType location) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ResourcePathsBaseAttribute*>(paths, isField, location));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ResourcePathsBaseAttribute::ResourcePathsBaseAttribute() {}
