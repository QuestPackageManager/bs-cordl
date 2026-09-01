#pragma once
// IWYU pragma private; include "Oculus\Haptics\HapticClip.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Haptics/zzzz__HapticClip_def.hpp"
//  Writing Method size for method: ::Oculus::Haptics::HapticClip._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::HapticClip::*)()>(&::Oculus::Haptics::HapticClip::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db01d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClip*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Haptics::HapticClip::__cordl_internal_get_json() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr ::StringW const& Oculus::Haptics::HapticClip::__cordl_internal_get_json() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr void Oculus::Haptics::HapticClip::__cordl_internal_set_json(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___json = value;
}
inline void Oculus::Haptics::HapticClip::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::HapticClip*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Haptics::HapticClip* Oculus::Haptics::HapticClip::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Haptics::HapticClip*>());
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::HapticClip::HapticClip() {}
