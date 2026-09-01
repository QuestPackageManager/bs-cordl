#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\DropdownMenuItem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::DropdownMenuItem::*)()>(&::UnityEngine::UIElements::DropdownMenuItem::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d93e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuItem*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::DropdownMenuItem::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::DropdownMenuItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::DropdownMenuItem* UnityEngine::UIElements::DropdownMenuItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::DropdownMenuItem*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenuItem::DropdownMenuItem() {}
