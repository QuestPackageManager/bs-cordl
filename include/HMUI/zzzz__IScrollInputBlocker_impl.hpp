#pragma once
// IWYU pragma private; include "HMUI/IScrollInputBlocker.hpp"
#include "HMUI/zzzz__IScrollInputBlocker_def.hpp"
//  Writing Method size for method: ::HMUI::IScrollInputBlocker.get_isScrollInputBlocked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::IScrollInputBlocker::*)()>(&::HMUI::IScrollInputBlocker::get_isScrollInputBlocked)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::IScrollInputBlocker*>(), { ::i2c::class_of<::HMUI::IScrollInputBlocker*>(), 0 }));
    return ___internal_method;
  }
};
inline bool HMUI::IScrollInputBlocker::get_isScrollInputBlocked() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::IScrollInputBlocker*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
