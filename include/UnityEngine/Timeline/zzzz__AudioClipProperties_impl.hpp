#pragma once
// IWYU pragma private; include "UnityEngine\Timeline\AudioClipProperties.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Timeline/zzzz__AudioClipProperties_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::AudioClipProperties._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::AudioClipProperties::*)()>(&::UnityEngine::Timeline::AudioClipProperties::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x69bf438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AudioClipProperties*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::Timeline::AudioClipProperties::__cordl_internal_get_volume() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr float_t const& UnityEngine::Timeline::AudioClipProperties::__cordl_internal_get_volume() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___volume;
}
constexpr void UnityEngine::Timeline::AudioClipProperties::__cordl_internal_set_volume(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___volume = value;
}
inline void UnityEngine::Timeline::AudioClipProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::AudioClipProperties*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::AudioClipProperties* UnityEngine::Timeline::AudioClipProperties::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::AudioClipProperties*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::AudioClipProperties::AudioClipProperties() {}
