#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoProjectionDataModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::*)()>(
    &::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId.get_videoAssetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::*)()>(
    &::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_videoAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>(), { "get_videoAssetReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::*)()>(
    &::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x599d53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::__cordl_internal_set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference*& GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::__cordl_internal_get__videoAssetReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoAssetReference;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference* const& GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::__cordl_internal_get__videoAssetReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoAssetReference;
}
constexpr void GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::__cordl_internal_set__videoAssetReference(::UnityEngine::AddressableAssets::AssetReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoAssetReference = value;
}
inline int32_t GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_videoAssetReference() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>(), { "get_videoAssetReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId* GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::VideoProjectionDataModelSO_VideoClipWithId() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO.get_videoClipWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*> (::GlobalNamespace::VideoProjectionDataModelSO::*)()>(
    &::GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d51c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO*>(), { "get_videoClipWithIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VideoProjectionDataModelSO::*)()>(&::GlobalNamespace::VideoProjectionDataModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x599d524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>& GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_get__videoClipsWithId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipsWithId;
}
constexpr ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*> const& GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_get__videoClipsWithId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipsWithId;
}
constexpr void GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_set__videoClipsWithId(::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____videoClipsWithId = value;
}
inline ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*> GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO*>(), { "get_videoClipWithIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionDataModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VideoProjectionDataModelSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionDataModelSO* GlobalNamespace::VideoProjectionDataModelSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VideoProjectionDataModelSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionDataModelSO::VideoProjectionDataModelSO() {}
