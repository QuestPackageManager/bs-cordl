#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\CustomBinding.hpp"
#include "UnityEngine/UIElements/zzzz__Binding_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomBinding_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingResult_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::CustomBinding.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::BindingResult (::UnityEngine::UIElements::CustomBinding::*)(::by_ref<::UnityEngine::UIElements::BindingContext>)>(
    &::UnityEngine::UIElements::CustomBinding::Update)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c3efdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(), { ::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(), 7 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::BindingResult UnityEngine::UIElements::CustomBinding::Update(::by_ref<::UnityEngine::UIElements::BindingContext> context) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::CustomBinding*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BindingResult>(this, ___internal_method, context);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::CustomBinding::CustomBinding() {}
