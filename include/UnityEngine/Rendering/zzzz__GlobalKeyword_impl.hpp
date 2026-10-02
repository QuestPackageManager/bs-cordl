#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GlobalKeyword.hpp"
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.GetGlobalKeywordCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)()>(&::UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6f8a368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "GetGlobalKeywordCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.GetGlobalKeywordIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::StringW)>(&::UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordIndex)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6f8a390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "GetGlobalKeywordIndex", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.CreateGlobalKeyword
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::Rendering::GlobalKeyword::CreateGlobalKeyword)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6f8a4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "CreateGlobalKeyword", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.GetGlobalKeywordName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(uint32_t)>(&::UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6f8a658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "GetGlobalKeywordName", {}, { ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GlobalKeyword (*)(::StringW)>(&::UnityEngine::Rendering::GlobalKeyword::Create)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6f8a768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::GlobalKeyword::*)(::StringW)>(&::UnityEngine::Rendering::GlobalKeyword::_ctor)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6f8a798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::GlobalKeyword::*)()>(&::UnityEngine::Rendering::GlobalKeyword::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f8a8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::GlobalKeyword::*)()>(&::UnityEngine::Rendering::GlobalKeyword::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6f8a8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { ::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.GetGlobalKeywordIndex_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordIndex_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f8a4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(),
                                                             { "GetGlobalKeywordIndex_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.CreateGlobalKeyword_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Rendering::GlobalKeyword::CreateGlobalKeyword_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6f8a61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(),
                                                             { "CreateGlobalKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.GetGlobalKeywordName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6f8a724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(),
                                                { "GetGlobalKeywordName_Injected", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
inline uint32_t UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "GetGlobalKeywordCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordIndex(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "GetGlobalKeywordIndex", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::GlobalKeyword::CreateGlobalKeyword(::StringW keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "CreateGlobalKeyword", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline ::StringW UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordName(uint32_t keywordIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "GetGlobalKeywordName", {}, { ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, keywordIndex);
}
inline ::UnityEngine::Rendering::GlobalKeyword UnityEngine::Rendering::GlobalKeyword::Create(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "Create", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GlobalKeyword>(nullptr, ___internal_method, name);
}
inline void UnityEngine::Rendering::GlobalKeyword::_ctor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name);
}
inline ::StringW UnityEngine::Rendering::GlobalKeyword::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::GlobalKeyword::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline uint32_t UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordIndex_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(),
                                                           { "GetGlobalKeywordIndex_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::GlobalKeyword::CreateGlobalKeyword_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> keyword) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(),
                                                           { "CreateGlobalKeyword_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keyword);
}
inline void UnityEngine::Rendering::GlobalKeyword::GetGlobalKeywordName_Injected(uint32_t keywordIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::GlobalKeyword>(),
                                              { "GetGlobalKeywordName_Injected", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, keywordIndex, ret);
}
// Ctor Parameters [CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Rendering::GlobalKeyword::GlobalKeyword(uint32_t m_Index) noexcept {
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GlobalKeyword::GlobalKeyword() {}
