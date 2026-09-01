#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IGroupBox.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBox_def.hpp"
#include "UnityEngine/UIElements/zzzz__IGroupBoxOption_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IGroupBox.OnOptionAdded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGroupBox::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::IGroupBox::OnOptionAdded)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGroupBox*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGroupBox*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IGroupBox.OnOptionRemoved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IGroupBox::*)(::UnityEngine::UIElements::IGroupBoxOption*)>(
    &::UnityEngine::UIElements::IGroupBox::OnOptionRemoved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IGroupBox*>(), { ::i2c::class_of<::UnityEngine::UIElements::IGroupBox*>(), 1 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IGroupBox::OnOptionAdded(::UnityEngine::UIElements::IGroupBoxOption* option) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGroupBox*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
inline void UnityEngine::UIElements::IGroupBox::OnOptionRemoved(::UnityEngine::UIElements::IGroupBoxOption* option) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IGroupBox*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, option);
}
