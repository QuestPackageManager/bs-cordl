#pragma once
// IWYU pragma private; include "GlobalNamespace/PerlinNoise.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerlinNoise_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerlinNoise.OctavePerlin3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, int32_t, float_t, int32_t)>(&::GlobalNamespace::PerlinNoise::OctavePerlin3D)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x5859bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "OctavePerlin3D",
                                                                                                      {},
                                                                                                      { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                        ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerlinNoise.Perlin3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t, int32_t)>(&::GlobalNamespace::PerlinNoise::Perlin3D)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x5859ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(),
                                                             { "Perlin3D", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerlinNoise.Inc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::GlobalNamespace::PerlinNoise::Inc)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x585a250;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "Inc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerlinNoise.Grad3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t, float_t, float_t, float_t)>(&::GlobalNamespace::PerlinNoise::Grad3D)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x585a268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(),
                                                             { "Grad3D", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerlinNoise.Fade
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::GlobalNamespace::PerlinNoise::Fade)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x585a224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "Fade", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerlinNoise.Lerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t, float_t, float_t)>(&::GlobalNamespace::PerlinNoise::Lerp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x585a2dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "Lerp", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerlinNoise._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerlinNoise::*)()>(&::GlobalNamespace::PerlinNoise::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x585a2ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PerlinNoise::setStaticF_permutation(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "permutation", ::GlobalNamespace::PerlinNoise*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::PerlinNoise::getStaticF_permutation() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "permutation", ::GlobalNamespace::PerlinNoise*>();
}
inline void GlobalNamespace::PerlinNoise::setStaticF_p(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "p", ::GlobalNamespace::PerlinNoise*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> GlobalNamespace::PerlinNoise::getStaticF_p() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "p", ::GlobalNamespace::PerlinNoise*>();
}
inline float_t GlobalNamespace::PerlinNoise::OctavePerlin3D(float_t x, float_t y, float_t z, int32_t octaves, float_t persistence, int32_t repeat) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "OctavePerlin3D",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                                                                      ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, y, z, octaves, persistence, repeat);
}
inline float_t GlobalNamespace::PerlinNoise::Perlin3D(float_t x, float_t y, float_t z, int32_t repeat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(),
                                                           { "Perlin3D", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, x, y, z, repeat);
}
inline int32_t GlobalNamespace::PerlinNoise::Inc(int32_t num, int32_t repeat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "Inc", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, num, repeat);
}
inline float_t GlobalNamespace::PerlinNoise::Grad3D(int32_t hash, float_t x, float_t y, float_t z) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(),
                                                           { "Grad3D", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, hash, x, y, z);
}
inline float_t GlobalNamespace::PerlinNoise::Fade(float_t t) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "Fade", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, t);
}
inline float_t GlobalNamespace::PerlinNoise::Lerp(float_t a, float_t b, float_t x) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { "Lerp", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, x);
}
inline void GlobalNamespace::PerlinNoise::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerlinNoise*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PerlinNoise* GlobalNamespace::PerlinNoise::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerlinNoise*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerlinNoise::PerlinNoise() {}
