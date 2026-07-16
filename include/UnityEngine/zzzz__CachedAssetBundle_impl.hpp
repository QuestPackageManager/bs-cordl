#pragma once
// IWYU pragma private; include "UnityEngine/CachedAssetBundle.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__CachedAssetBundle_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::UnityEngine::CachedAssetBundle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::CachedAssetBundle::*)(::StringW, ::UnityEngine::Hash128)>(&::UnityEngine::CachedAssetBundle::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a63edc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CachedAssetBundle>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CachedAssetBundle.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::CachedAssetBundle::*)()>(&::UnityEngine::CachedAssetBundle::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a63ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CachedAssetBundle>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::CachedAssetBundle.get_hash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (::UnityEngine::CachedAssetBundle::*)()>(&::UnityEngine::CachedAssetBundle::get_hash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a63ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CachedAssetBundle>(), { "get_hash", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::CachedAssetBundle::_ctor(::StringW name, ::UnityEngine::Hash128 hash) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CachedAssetBundle>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Hash128>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, name, hash);
}
inline ::StringW UnityEngine::CachedAssetBundle::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CachedAssetBundle>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::UnityEngine::Hash128 UnityEngine::CachedAssetBundle::get_hash() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::CachedAssetBundle>(), { "get_hash", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Hash", ty: "::UnityEngine::Hash128", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::CachedAssetBundle::CachedAssetBundle(::StringW m_Name, ::UnityEngine::Hash128 m_Hash) noexcept {
  this->m_Name = m_Name;
  this->m_Hash = m_Hash;
}
// Ctor Parameters []
constexpr ::UnityEngine::CachedAssetBundle::CachedAssetBundle() {}
