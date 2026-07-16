#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedHoverHint.hpp"
#include "BGLib/Polyglot/zzzz__LocalizedTextComponent_1_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizedHoverHint_def.hpp"
#include "BGLib/Polyglot/zzzz__LanguageDirection_def.hpp"
#include "HMUI/zzzz__HoverHint_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizedHoverHint.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedHoverHint::*)(::HMUI::HoverHint*, ::StringW)>(&::GlobalNamespace::LocalizedHoverHint::SetText)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5a09498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), { ::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedHoverHint.UpdateAlignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedHoverHint::*)(::HMUI::HoverHint*, ::BGLib::Polyglot::LanguageDirection)>(
    &::GlobalNamespace::LocalizedHoverHint::UpdateAlignment)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a094ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), { ::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LocalizedHoverHint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LocalizedHoverHint::*)()>(&::GlobalNamespace::LocalizedHoverHint::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5a094b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LocalizedHoverHint::SetText(::HMUI::HoverHint* hoverHint, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hoverHint, value);
}
inline void GlobalNamespace::LocalizedHoverHint::UpdateAlignment(::HMUI::HoverHint* hoverHint, ::BGLib::Polyglot::LanguageDirection direction) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hoverHint, direction);
}
inline void GlobalNamespace::LocalizedHoverHint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::LocalizedHoverHint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LocalizedHoverHint* GlobalNamespace::LocalizedHoverHint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LocalizedHoverHint*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizedHoverHint::LocalizedHoverHint() {}
