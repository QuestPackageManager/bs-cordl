#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderKeywordSet.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeywordSet_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsKeywordNameEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::ShaderKeywordSet, ::StringW)>(&::UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6f8b990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                             { "IsKeywordNameEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.GetEnabledKeywords
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::ShaderKeyword> (*)(::UnityEngine::Rendering::ShaderKeywordSet)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::GetEnabledKeywords)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f8bb14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                                                           { "GetEnabledKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.CheckKeywordCompatible
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderKeywordSet::*)(::UnityEngine::Rendering::ShaderKeyword)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::CheckKeywordCompatible)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6f8bb8c;

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
  constexpr static std::size_t addrs = 0x6f8bc50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), { "IsEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ShaderKeywordSet::*)()>(&::UnityEngine::Rendering::ShaderKeywordSet::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6f8bc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), { ::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.ShaderKeywordComparer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::ShaderKeyword, ::UnityEngine::Rendering::ShaderKeyword)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::ShaderKeywordComparer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6f8bd98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                         { "ShaderKeywordComparer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.IsKeywordNameEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f8bad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), { "IsKeywordNameEnabled_Injected",
                                                                                                                 {},
                                                                                                                 { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const>>(),
                                                                                                                   ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeywordSet.GetEnabledKeywords_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::ShaderKeyword> (*)(::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const>)>(
    &::UnityEngine::Rendering::ShaderKeywordSet::GetEnabledKeywords_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f8bb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                             { "GetEnabledKeywords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const>>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled(::UnityEngine::Rendering::ShaderKeywordSet state, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                           { "IsKeywordNameEnabled", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, name);
}
inline ::ArrayW<::UnityEngine::Rendering::ShaderKeyword> UnityEngine::Rendering::ShaderKeywordSet::GetEnabledKeywords(::UnityEngine::Rendering::ShaderKeywordSet state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), { "GetEnabledKeywords", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeywordSet>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::ShaderKeyword>>(nullptr, ___internal_method, state);
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
inline ::StringW UnityEngine::Rendering::ShaderKeywordSet::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t UnityEngine::Rendering::ShaderKeywordSet::ShaderKeywordComparer(::UnityEngine::Rendering::ShaderKeyword kw1, ::UnityEngine::Rendering::ShaderKeyword kw2) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                       { "ShaderKeywordComparer", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderKeyword>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, kw1, kw2);
}
inline bool UnityEngine::Rendering::ShaderKeywordSet::IsKeywordNameEnabled_Injected(::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const> state,
                                                                                    ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                       { "IsKeywordNameEnabled_Injected",
                                         {},
                                         { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, state, name);
}
inline ::ArrayW<::UnityEngine::Rendering::ShaderKeyword> UnityEngine::Rendering::ShaderKeywordSet::GetEnabledKeywords_Injected(::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const> state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeywordSet>(),
                                                           { "GetEnabledKeywords_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Rendering::ShaderKeywordSet const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::ShaderKeyword>>(nullptr, ___internal_method, state);
}
// Ctor Parameters [CppParam { name: "m_KeywordState", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Shader", ty: "::System::IntPtr", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "m_ComputeShader", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_StateIndex", ty:
// "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::ShaderKeywordSet::ShaderKeywordSet(::System::IntPtr m_KeywordState, ::System::IntPtr m_Shader, ::System::IntPtr m_ComputeShader, uint64_t m_StateIndex) noexcept {
  this->m_KeywordState = m_KeywordState;
  this->m_Shader = m_Shader;
  this->m_ComputeShader = m_ComputeShader;
  this->m_StateIndex = m_StateIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderKeywordSet::ShaderKeywordSet() {}
