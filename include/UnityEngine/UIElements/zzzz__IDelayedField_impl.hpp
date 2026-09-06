#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IDelayedField.hpp"
#include "UnityEngine/UIElements/zzzz__IDelayedField_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IDelayedField.get_isDelayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IDelayedField::*)()>(&::UnityEngine::UIElements::IDelayedField::get_isDelayed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IDelayedField*>(), { ::i2c::class_of<::UnityEngine::UIElements::IDelayedField*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::IDelayedField::get_isDelayed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IDelayedField*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
