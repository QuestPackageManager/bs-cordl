#pragma once
// IWYU pragma private; include "GlobalNamespace\LightmapDataSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__LightmapDataSO_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightmapDataSO.get_lightmap1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::LightmapDataSO::*)()>(&::GlobalNamespace::LightmapDataSO::get_lightmap1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "get_lightmap1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapDataSO.set_lightmap1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmapDataSO::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::LightmapDataSO::set_lightmap1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "set_lightmap1", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapDataSO.get_lightmap2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::GlobalNamespace::LightmapDataSO::*)()>(&::GlobalNamespace::LightmapDataSO::get_lightmap2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "get_lightmap2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapDataSO.set_lightmap2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmapDataSO::*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::LightmapDataSO::set_lightmap2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "set_lightmap2", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightmapDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightmapDataSO::*)()>(&::GlobalNamespace::LightmapDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e4668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::LightmapDataSO::__cordl_internal_get__lightmap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmap1;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::LightmapDataSO::__cordl_internal_get__lightmap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmap1;
}
constexpr void GlobalNamespace::LightmapDataSO::__cordl_internal_set__lightmap1(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmap1 = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::LightmapDataSO::__cordl_internal_get__lightmap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmap2;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::LightmapDataSO::__cordl_internal_get__lightmap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmap2;
}
constexpr void GlobalNamespace::LightmapDataSO::__cordl_internal_set__lightmap2(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmap2 = value;
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::LightmapDataSO::get_lightmap1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "get_lightmap1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapDataSO::set_lightmap1(::UnityEngine::Texture2D* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "set_lightmap1", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::LightmapDataSO::get_lightmap2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "get_lightmap2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method);
}
inline void GlobalNamespace::LightmapDataSO::set_lightmap2(::UnityEngine::Texture2D* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { "set_lightmap2", {}, { ::i2c::type_of<::UnityEngine::Texture2D*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::LightmapDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightmapDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LightmapDataSO* GlobalNamespace::LightmapDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightmapDataSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightmapDataSO::LightmapDataSO() {}
