#pragma once
// IWYU pragma private; include "GlobalNamespace/ImageWithHintItemsList.hpp"
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__ImageWithHintItemsList_def.hpp"
#include "HMUI/zzzz__ImageWithHint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImageWithHintItemsList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ImageWithHintItemsList::*)()>(&::GlobalNamespace::ImageWithHintItemsList::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x59fb610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageWithHintItemsList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ImageWithHintItemsList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ImageWithHintItemsList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ImageWithHintItemsList* GlobalNamespace::ImageWithHintItemsList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ImageWithHintItemsList*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ImageWithHintItemsList::ImageWithHintItemsList() {}
