#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRAudioSourceTest.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAudioSourceTest_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRAudioSourceTest.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAudioSourceTest::*)()>(&::GlobalNamespace::OVRAudioSourceTest::Start)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5ef1688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAudioSourceTest*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAudioSourceTest.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAudioSourceTest::*)()>(&::GlobalNamespace::OVRAudioSourceTest::Update)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x5ef179c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAudioSourceTest*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAudioSourceTest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAudioSourceTest::*)()>(&::GlobalNamespace::OVRAudioSourceTest::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ef1984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAudioSourceTest*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_period() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period;
}
constexpr float_t const& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_period() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___period;
}
constexpr void GlobalNamespace::OVRAudioSourceTest::__cordl_internal_set_period(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___period = value;
}
constexpr float_t& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_nextActionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextActionTime;
}
constexpr float_t const& GlobalNamespace::OVRAudioSourceTest::__cordl_internal_get_nextActionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextActionTime;
}
constexpr void GlobalNamespace::OVRAudioSourceTest::__cordl_internal_set_nextActionTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nextActionTime = value;
}
inline void GlobalNamespace::OVRAudioSourceTest::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAudioSourceTest*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAudioSourceTest::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAudioSourceTest*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAudioSourceTest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAudioSourceTest*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRAudioSourceTest* GlobalNamespace::OVRAudioSourceTest::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRAudioSourceTest*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAudioSourceTest::OVRAudioSourceTest() {}
