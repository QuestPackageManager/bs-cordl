#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/TileSizeExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSizeExtensions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TileSize_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::TileSizeExtensions.IsValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::TileSize)>(&::UnityEngine::Rendering::Universal::TileSizeExtensions::IsValid)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x68bca44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TileSizeExtensions*>(),
                                                                                           { "IsValid", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::TileSize>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::Universal::TileSizeExtensions::IsValid(::UnityEngine::Rendering::Universal::TileSize tileSize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::TileSizeExtensions*>(),
                                                                                         { "IsValid", {}, { ::i2c::type_of<::UnityEngine::Rendering::Universal::TileSize>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tileSize);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::TileSizeExtensions::TileSizeExtensions() {}
