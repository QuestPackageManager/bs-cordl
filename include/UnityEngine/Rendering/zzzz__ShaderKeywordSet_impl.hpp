#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderKeywordSet.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeywordSet_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsKeywordNameEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Rendering::ShaderKeywordSet, ::StringW)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x68f9d24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "IsKeywordNameEnabled", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeywordSet>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.CheckKeywordCompatible
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::ShaderKeywordSet::*)(::UnityEngine::Rendering::ShaderKeyword)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::CheckKeywordCompatible)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x68f9ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "CheckKeywordCompatible", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::ShaderKeywordSet::*)(::UnityEngine::Rendering::ShaderKeyword)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::IsEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x68f9f6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "IsEnabled", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeyword>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsKeywordNameEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::Rendering::ShaderKeywordSet>, ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68f9e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "IsKeywordNameEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ShaderKeywordSet>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled(::UnityEngine::Rendering::ShaderKeywordSet state, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "IsKeywordNameEnabled", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeywordSet>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, name);
}
inline void UnityEngine::Rendering::ShaderKeywordSet::CheckKeywordCompatible(::UnityEngine::Rendering::ShaderKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "CheckKeywordCompatible", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyword);
}
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsEnabled(::UnityEngine::Rendering::ShaderKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "IsEnabled", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::ShaderKeyword>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, keyword);
}
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled_Injected(::ByRef<::UnityEngine::Rendering::ShaderKeywordSet> state,
                                                                                    ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::ShaderKeywordSet>::get(), "IsKeywordNameEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rendering::ShaderKeywordSet>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, state, name);
}
// Ctor Parameters [CppParam { name: "m_KeywordState", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Shader", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_ComputeShader", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_StateIndex", ty: "uint64_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderKeywordSet::ShaderKeywordSet(::System::IntPtr m_KeywordState, ::System::IntPtr m_Shader, ::System::IntPtr m_ComputeShader, uint64_t m_StateIndex) noexcept {
  this->m_KeywordState = m_KeywordState;
  this->m_Shader = m_Shader;
  this->m_ComputeShader = m_ComputeShader;
  this->m_StateIndex = m_StateIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderKeywordSet::ShaderKeywordSet() {}
