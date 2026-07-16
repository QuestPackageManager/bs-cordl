#pragma once
// IWYU pragma private; include "UnityEngine/AssetReferenceUILabelRestriction.hpp"
#include "UnityEngine/zzzz__AssetReferenceUIRestriction_impl.hpp"
#include "UnityEngine/zzzz__AssetReferenceUILabelRestriction_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AssetReferenceUILabelRestriction::*)(::ArrayW<::StringW>)>(&::UnityEngine::AssetReferenceUILabelRestriction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644523c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction.ValidateAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AssetReferenceUILabelRestriction::*)(::UnityEngine::Object*)>(
    &::UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6445244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), { ::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction.ValidateAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AssetReferenceUILabelRestriction::*)(::StringW)>(&::UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x644524c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), { ::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AssetReferenceUILabelRestriction.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::AssetReferenceUILabelRestriction::*)()>(&::UnityEngine::AssetReferenceUILabelRestriction::ToString)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6445254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), { ::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_AllowedLabels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowedLabels;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_AllowedLabels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AllowedLabels;
}
constexpr void UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_set_m_AllowedLabels(::ArrayW<::StringW> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AllowedLabels = value;
}
constexpr ::StringW& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_CachedToString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedToString;
}
constexpr ::StringW const& UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_get_m_CachedToString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedToString;
}
constexpr void UnityEngine::AssetReferenceUILabelRestriction::__cordl_internal_set_m_CachedToString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedToString = value;
}
inline void UnityEngine::AssetReferenceUILabelRestriction::_ctor(::ArrayW<::StringW> allowedLabels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), { ".ctor", {}, { ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, allowedLabels);
}
inline bool UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset(::UnityEngine::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline bool UnityEngine::AssetReferenceUILabelRestriction::ValidateAsset(::StringW path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, path);
}
inline ::StringW UnityEngine::AssetReferenceUILabelRestriction::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AssetReferenceUILabelRestriction*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::AssetReferenceUILabelRestriction* UnityEngine::AssetReferenceUILabelRestriction::New_ctor(::ArrayW<::StringW> allowedLabels) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AssetReferenceUILabelRestriction*>(allowedLabels));
}
// Ctor Parameters []
constexpr ::UnityEngine::AssetReferenceUILabelRestriction::AssetReferenceUILabelRestriction() {}
