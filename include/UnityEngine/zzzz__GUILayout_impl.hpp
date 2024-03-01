#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUILayout_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUILayout.Label
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>)>(
    &::UnityEngine::GUILayout::Label)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2e0061c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "Label", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.DoLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>)>(&::UnityEngine::GUILayout::DoLabel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2e006c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "DoLabel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIContent*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Width
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Width)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2df56a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "Width", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUILayout.Height
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutOption* (*)(float_t)>(&::UnityEngine::GUILayout::Height)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2df5744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "Height", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::GUILayout::Label(::StringW text, ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "Label", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, text, options);
}
inline void UnityEngine::GUILayout::DoLabel(::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style,
                                            ::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*> options) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "DoLabel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIContent*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUILayoutOption*, ::Array<::UnityEngine::GUILayoutOption*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, content, style, options);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Width(float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "Width", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*, false>(nullptr, ___internal_method, width);
}
inline ::UnityEngine::GUILayoutOption* UnityEngine::GUILayout::Height(float_t height) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUILayout*>::get(), "Height", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutOption*, false>(nullptr, ___internal_method, height);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUILayout::GUILayout() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
