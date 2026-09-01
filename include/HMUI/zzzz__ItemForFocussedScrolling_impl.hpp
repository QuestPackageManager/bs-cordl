#pragma once
// IWYU pragma private; include "HMUI\ItemForFocussedScrolling.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ItemForFocussedScrolling_def.hpp"
//  Writing Method size for method: ::HMUI::ItemForFocussedScrolling._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ItemForFocussedScrolling::*)()>(&::HMUI::ItemForFocussedScrolling::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5887810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ItemForFocussedScrolling*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void HMUI::ItemForFocussedScrolling::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ItemForFocussedScrolling*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ItemForFocussedScrolling* HMUI::ItemForFocussedScrolling::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ItemForFocussedScrolling*>());
}
// Ctor Parameters []
constexpr ::HMUI::ItemForFocussedScrolling::ItemForFocussedScrolling() {}
