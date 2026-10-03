#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ResourceFormattedPathsAttribute.hpp"
#include "UnityEngine/Rendering/zzzz__ResourcePathsBaseAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ResourceFormattedPathsAttribute_def.hpp"
#include "UnityEngine/Rendering/zzzz__SearchType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ResourceFormattedPathsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ResourceFormattedPathsAttribute::*)(::StringW, int32_t, int32_t, ::UnityEngine::Rendering::SearchType)>(
    &::UnityEngine::Rendering::ResourceFormattedPathsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6f66b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourceFormattedPathsAttribute*>(),
                            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::ResourceFormattedPathsAttribute::_ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax, ::UnityEngine::Rendering::SearchType location) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ResourceFormattedPathsAttribute*>(),
                          { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::SearchType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pathFormat, rangeMin, rangeMax, location);
}
inline ::UnityEngine::Rendering::ResourceFormattedPathsAttribute* UnityEngine::Rendering::ResourceFormattedPathsAttribute::New_ctor(::StringW pathFormat, int32_t rangeMin, int32_t rangeMax,
                                                                                                                                    ::UnityEngine::Rendering::SearchType location) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ResourceFormattedPathsAttribute*>(pathFormat, rangeMin, rangeMax, location));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ResourceFormattedPathsAttribute::ResourceFormattedPathsAttribute() {}
