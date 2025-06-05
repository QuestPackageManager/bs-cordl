#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerEventHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventHelper_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::PointerEventHelper.GetPooled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::EventType, ::UnityEngine::Vector3, ::UnityEngine::Vector2, int32_t, int32_t, ::UnityEngine::EventModifiers)>(
        &::UnityEngine::UIElements::PointerEventHelper::GetPooled)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x4a31f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerEventHelper*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::PointerEventHelper::GetPooled(::UnityEngine::EventType eventType, ::UnityEngine::Vector3 mousePosition,
                                                                                                    ::UnityEngine::Vector2 delta, int32_t button, int32_t clickCount,
                                                                                                    ::UnityEngine::EventModifiers modifiers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PointerEventHelper*>::get(), "GetPooled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(nullptr, ___internal_method, eventType, mousePosition, delta, button, clickCount, modifiers);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::PointerEventHelper::PointerEventHelper() {}
