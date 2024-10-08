#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlTypeAttributeDescription_1.hpp"
#include "UnityEngine/UIElements/zzzz__TypedUxmlAttributeDescription_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlTypeAttributeDescription_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
template <typename TBase> inline ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>());
}
template <typename TBase> inline void UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TBase>
inline ::System::Type* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::GetValueFromBag(::UnityEngine::UIElements::IUxmlAttributes* bag, ::UnityEngine::UIElements::CreationContext cc) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, bag, cc);
}
template <typename TBase> inline ::System::Type* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::ConvertValueToType(::StringW v, ::System::Type* defaultValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>::get(), "ConvertValueToType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, v, defaultValue);
}
template <typename TBase> inline ::System::Type* UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::_GetValueFromBag_b__3_0(::StringW s, ::System::Type* type1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>*>::get(), "<GetValueFromBag>b__3_0",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, s, type1);
}
// Ctor Parameters []
template <typename TBase> constexpr ::UnityEngine::UIElements::UxmlTypeAttributeDescription_1<TBase>::UxmlTypeAttributeDescription_1() {}
