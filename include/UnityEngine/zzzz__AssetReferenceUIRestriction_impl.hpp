#pragma once
// IWYU pragma private; include "UnityEngine\AssetReferenceUIRestriction.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetReferenceUIRestriction.ValidateAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AssetReferenceUIRestriction::*)(::UnityEngine::Object*)>(&::UnityEngine::AssetReferenceUIRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644aa40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), { ::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUIRestriction.ValidateAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AssetReferenceUIRestriction::*)(::StringW)>(&::UnityEngine::AssetReferenceUIRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644aa48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), { ::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUIRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetReferenceUIRestriction::*)()>(&::UnityEngine::AssetReferenceUIRestriction::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x644aa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::AssetReferenceUIRestriction::ValidateAsset(::UnityEngine::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::AssetReferenceUIRestriction::ValidateAsset(::StringW path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline void UnityEngine::AssetReferenceUIRestriction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUIRestriction*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::AssetReferenceUIRestriction* UnityEngine::AssetReferenceUIRestriction::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AssetReferenceUIRestriction*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetReferenceUIRestriction::AssetReferenceUIRestriction() {}
