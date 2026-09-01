#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ShaderKeyword.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderKeyword_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword.GetGlobalKeywordCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::Rendering::ShaderKeyword::GetGlobalKeywordCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b2dd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "GetGlobalKeywordCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword.GetGlobalKeywordIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::UnityEngine::Rendering::ShaderKeyword::GetGlobalKeywordIndex)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6b2dd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "GetGlobalKeywordIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword.CreateGlobalKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Rendering::ShaderKeyword::CreateGlobalKeyword)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6b2de98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "CreateGlobalKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ShaderKeyword::*)()>(&::UnityEngine::Rendering::ShaderKeyword::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2dff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderKeyword::*)(::StringW)>(&::UnityEngine::Rendering::ShaderKeyword::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b2e000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ShaderKeyword::*)()>(&::UnityEngine::Rendering::ShaderKeyword::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b2e084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { ::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword.GetGlobalKeywordIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Rendering::ShaderKeyword::GetGlobalKeywordIndex_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2de5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(),
                                                             { "GetGlobalKeywordIndex_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderKeyword.CreateGlobalKeyword_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Rendering::ShaderKeyword::CreateGlobalKeyword_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b2dfbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(),
                                                             { "CreateGlobalKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::ShaderKeyword::GetGlobalKeywordCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "GetGlobalKeywordCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::Rendering::ShaderKeyword::GetGlobalKeywordIndex(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "GetGlobalKeywordIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ShaderKeyword::CreateGlobalKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "CreateGlobalKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline ::StringW UnityEngine::Rendering::ShaderKeyword::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderKeyword::_ctor(::StringW keywordName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, keywordName);
}
inline ::StringW UnityEngine::Rendering::ShaderKeyword::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint32_t UnityEngine::Rendering::ShaderKeyword::GetGlobalKeywordIndex_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(),
                                                           { "GetGlobalKeywordIndex_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::ShaderKeyword::CreateGlobalKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderKeyword>(),
                                                           { "CreateGlobalKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_IsLocal", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsCompute", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_IsValid", ty: "bool",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderKeyword::ShaderKeyword(::StringW m_Name, uint32_t m_Index, bool m_IsLocal, bool m_IsCompute, bool m_IsValid) noexcept {
  this->m_Name = m_Name;
  this->m_Index = m_Index;
  this->m_IsLocal = m_IsLocal;
  this->m_IsCompute = m_IsCompute;
  this->m_IsValid = m_IsValid;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderKeyword::ShaderKeyword() {}
