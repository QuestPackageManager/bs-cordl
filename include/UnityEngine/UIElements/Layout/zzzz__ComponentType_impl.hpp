#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/ComponentType.hpp"
#include "UnityEngine/UIElements/Layout/zzzz__ComponentType_def.hpp"
template <typename T> inline ::UnityEngine::UIElements::Layout::ComponentType UnityEngine::UIElements::Layout::ComponentType::Create() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::Layout::ComponentType>::get(), "Create",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Layout::ComponentType, false>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Size", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::Layout::ComponentType::ComponentType(int32_t Size) noexcept {
  this->Size = Size;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Layout::ComponentType::ComponentType() {}
