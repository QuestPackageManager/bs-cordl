#pragma once
// IWYU pragma private; include "GlobalNamespace/LightGroupCountProviderDefault.hpp"
#include "GlobalNamespace/zzzz__LightGroupCountProvider_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupCountProviderDefault_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupAxis_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault.get_count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupCountProviderDefault::*)()>(&::GlobalNamespace::LightGroupCountProviderDefault::get_count)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { "get_count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault.get_numberOfElements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupCountProviderDefault::*)()>(&::GlobalNamespace::LightGroupCountProviderDefault::get_numberOfElements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault.GetColorCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupCountProviderDefault::*)()>(&::GlobalNamespace::LightGroupCountProviderDefault::GetColorCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba3d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault.GetFloatFxCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupCountProviderDefault::*)()>(&::GlobalNamespace::LightGroupCountProviderDefault::GetFloatFxCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault.GetRotationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupCountProviderDefault::*)(::GlobalNamespace::LightGroupAxis)>(
    &::GlobalNamespace::LightGroupCountProviderDefault::GetRotationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault.GetTranslationCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::LightGroupCountProviderDefault::*)(::GlobalNamespace::LightGroupAxis)>(
    &::GlobalNamespace::LightGroupCountProviderDefault::GetTranslationCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5cba3e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupCountProviderDefault::*)()>(&::GlobalNamespace::LightGroupCountProviderDefault::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5cb920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightGroupCountProviderDefault._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LightGroupCountProviderDefault::*)(int32_t)>(&::GlobalNamespace::LightGroupCountProviderDefault::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5cba3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::LightGroupCountProviderDefault::__cordl_internal_get__count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr int32_t const& GlobalNamespace::LightGroupCountProviderDefault::__cordl_internal_get__count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____count;
}
constexpr void GlobalNamespace::LightGroupCountProviderDefault::__cordl_internal_set__count(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____count = value;
}
inline int32_t GlobalNamespace::LightGroupCountProviderDefault::get_count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { "get_count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupCountProviderDefault::get_numberOfElements() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupCountProviderDefault::GetColorCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupCountProviderDefault::GetFloatFxCount() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LightGroupCountProviderDefault::GetRotationCount(::GlobalNamespace::LightGroupAxis axis) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, axis);
}
inline int32_t GlobalNamespace::LightGroupCountProviderDefault::GetTranslationCount(::GlobalNamespace::LightGroupAxis axis) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, axis);
}
inline void GlobalNamespace::LightGroupCountProviderDefault::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::LightGroupCountProviderDefault::_ctor(int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LightGroupCountProviderDefault*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, count);
}
inline ::GlobalNamespace::LightGroupCountProviderDefault* GlobalNamespace::LightGroupCountProviderDefault::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupCountProviderDefault*>());
}
inline ::GlobalNamespace::LightGroupCountProviderDefault* GlobalNamespace::LightGroupCountProviderDefault::New_ctor(int32_t count) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LightGroupCountProviderDefault*>(count));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupCountProviderDefault::LightGroupCountProviderDefault() {}
