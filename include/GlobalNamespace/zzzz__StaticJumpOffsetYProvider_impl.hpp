#pragma once
// IWYU pragma private; include "GlobalNamespace\StaticJumpOffsetYProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__IJumpOffsetYProvider_def.hpp"
#include "GlobalNamespace/zzzz__StaticJumpOffsetYProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider_InitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticJumpOffsetYProvider_InitData::*)(float_t)>(&::GlobalNamespace::StaticJumpOffsetYProvider_InitData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x597d4b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticJumpOffsetYProvider_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::StaticJumpOffsetYProvider_InitData::__cordl_internal_get_jumpyYOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpyYOffset;
}
constexpr float_t const& GlobalNamespace::StaticJumpOffsetYProvider_InitData::__cordl_internal_get_jumpyYOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___jumpyYOffset;
}
constexpr void GlobalNamespace::StaticJumpOffsetYProvider_InitData::__cordl_internal_set_jumpyYOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___jumpyYOffset = value;
}
inline void GlobalNamespace::StaticJumpOffsetYProvider_InitData::_ctor(float_t jumpyYOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticJumpOffsetYProvider_InitData*>(), { ".ctor", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, jumpyYOffset);
}
inline ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* GlobalNamespace::StaticJumpOffsetYProvider_InitData::New_ctor(float_t jumpyYOffset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticJumpOffsetYProvider_InitData*>(jumpyYOffset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData::StaticJumpOffsetYProvider_InitData() {}
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider.get_jumpOffsetY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::StaticJumpOffsetYProvider::*)()>(&::GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x597d494;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticJumpOffsetYProvider*>(), { "get_jumpOffsetY", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticJumpOffsetYProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StaticJumpOffsetYProvider::*)()>(&::GlobalNamespace::StaticJumpOffsetYProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x597d4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticJumpOffsetYProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData*& GlobalNamespace::StaticJumpOffsetYProvider::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider_InitData* const& GlobalNamespace::StaticJumpOffsetYProvider::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::StaticJumpOffsetYProvider::__cordl_internal_set__initData(::GlobalNamespace::StaticJumpOffsetYProvider_InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initData = value;
}
inline float_t GlobalNamespace::StaticJumpOffsetYProvider::get_jumpOffsetY() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticJumpOffsetYProvider*>(), { "get_jumpOffsetY", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::StaticJumpOffsetYProvider::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StaticJumpOffsetYProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StaticJumpOffsetYProvider* GlobalNamespace::StaticJumpOffsetYProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StaticJumpOffsetYProvider*>());
}
/// @brief Convert operator to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr GlobalNamespace::StaticJumpOffsetYProvider::operator ::GlobalNamespace::IJumpOffsetYProvider*() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IJumpOffsetYProvider"
constexpr ::GlobalNamespace::IJumpOffsetYProvider* GlobalNamespace::StaticJumpOffsetYProvider::i___GlobalNamespace__IJumpOffsetYProvider() noexcept {
  return static_cast<::GlobalNamespace::IJumpOffsetYProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticJumpOffsetYProvider::StaticJumpOffsetYProvider() {}
