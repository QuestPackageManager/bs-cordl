#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ShaderKeywordSet.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeywordSet_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsKeywordNameEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::ShaderKeywordSet, ::StringW)>(&::UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6b2e08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                             { "IsKeywordNameEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.CheckKeywordCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderKeywordSet::*)(::UnityEngine::Rendering::ShaderKeyword)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::CheckKeywordCompatible)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b2e210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                                                           { "CheckKeywordCompatible", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::ShaderKeywordSet::*)(::UnityEngine::Rendering::ShaderKeyword)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::IsEnabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b2e2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), { "IsEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsKeywordNameEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::ShaderKeywordSet>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b2e1cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                         { "IsKeywordNameEnabled_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderKeywordSet>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled(::UnityEngine::Rendering::ShaderKeywordSet state, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                           { "IsKeywordNameEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, name);
}
inline void UnityEngine::Rendering::ShaderKeywordSet::CheckKeywordCompatible(::UnityEngine::Rendering::ShaderKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                                                         { "CheckKeywordCompatible", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keyword);
}
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsEnabled(::UnityEngine::Rendering::ShaderKeyword keyword) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), { "IsEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, keyword);
}
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled_Injected(::by_ref<::UnityEngine::Rendering::ShaderKeywordSet> state,
                                                                                    ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                       { "IsKeywordNameEnabled_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderKeywordSet>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, name);
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
