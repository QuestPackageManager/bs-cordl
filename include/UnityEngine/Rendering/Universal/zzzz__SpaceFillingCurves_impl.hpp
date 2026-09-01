#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\Universal\SpaceFillingCurves.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__SpaceFillingCurves_def.hpp"
#include "Unity/Mathematics/zzzz__uint2_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SpaceFillingCurves.Part1By1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::SpaceFillingCurves::Part1By1)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x68be33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "Part1By1", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SpaceFillingCurves.Compact1By1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::SpaceFillingCurves::Compact1By1)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x68be360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "Compact1By1", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SpaceFillingCurves.EncodeMorton2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::Unity::Mathematics::uint2)>(&::UnityEngine::Rendering::Universal::SpaceFillingCurves::EncodeMorton2D)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x68be388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "EncodeMorton2D", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::SpaceFillingCurves.DecodeMorton2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Mathematics::uint2 (*)(uint32_t)>(&::UnityEngine::Rendering::Universal::SpaceFillingCurves::DecodeMorton2D)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x68be3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "DecodeMorton2D", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::Universal::SpaceFillingCurves::Part1By1(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "Part1By1", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t UnityEngine::Rendering::Universal::SpaceFillingCurves::Compact1By1(uint32_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "Compact1By1", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, x);
}
inline uint32_t UnityEngine::Rendering::Universal::SpaceFillingCurves::EncodeMorton2D(::Unity::Mathematics::uint2 coord) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "EncodeMorton2D", {}, { ::i2c::type_of<::Unity::Mathematics::uint2>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, coord);
}
inline ::Unity::Mathematics::uint2 UnityEngine::Rendering::Universal::SpaceFillingCurves::DecodeMorton2D(uint32_t code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::Universal::SpaceFillingCurves*>(), { "DecodeMorton2D", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Mathematics::uint2>(nullptr, ___internal_method, code);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::SpaceFillingCurves::SpaceFillingCurves() {}
