#pragma once
// IWYU pragma private; include "HMUI/IForcedHighlightHandler.hpp"
#include "HMUI/zzzz__IForcedHighlightHandler_def.hpp"
//  Writing Method size for method: ::HMUI::IForcedHighlightHandler.SetForcedHighlight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::IForcedHighlightHandler::*)(bool)>(&::HMUI::IForcedHighlightHandler::SetForcedHighlight)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::IForcedHighlightHandler*>(), { ::i2c::class_of<::HMUI::IForcedHighlightHandler*>(), 0 }));
    return ___internal_method;
  }
};
inline void HMUI::IForcedHighlightHandler::SetForcedHighlight(bool forced) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::IForcedHighlightHandler*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, forced);
}
