#pragma once
// IWYU pragma private; include "GlobalNamespace\BTSCharacterDataModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel_PrefabWithId.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BTSCharacterDataModel_PrefabWithId::*)()>(&::GlobalNamespace::BTSCharacterDataModel_PrefabWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel_PrefabWithId.get_prefabAssetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (::GlobalNamespace::BTSCharacterDataModel_PrefabWithId::*)()>(
    &::GlobalNamespace::BTSCharacterDataModel_PrefabWithId::get_prefabAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x328481c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>(), { "get_prefabAssetReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel_PrefabWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterDataModel_PrefabWithId::*)()>(&::GlobalNamespace::BTSCharacterDataModel_PrefabWithId::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3284824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BTSCharacterDataModel_PrefabWithId::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::BTSCharacterDataModel_PrefabWithId::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::BTSCharacterDataModel_PrefabWithId::__cordl_internal_set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference*& GlobalNamespace::BTSCharacterDataModel_PrefabWithId::__cordl_internal_get__prefabAssetReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabAssetReference;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference* const& GlobalNamespace::BTSCharacterDataModel_PrefabWithId::__cordl_internal_get__prefabAssetReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabAssetReference;
}
constexpr void GlobalNamespace::BTSCharacterDataModel_PrefabWithId::__cordl_internal_set__prefabAssetReference(::UnityEngine::AddressableAssets::AssetReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefabAssetReference = value;
}
inline int32_t GlobalNamespace::BTSCharacterDataModel_PrefabWithId::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::BTSCharacterDataModel_PrefabWithId::get_prefabAssetReference() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>(), { "get_prefabAssetReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterDataModel_PrefabWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterDataModel_PrefabWithId* GlobalNamespace::BTSCharacterDataModel_PrefabWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterDataModel_PrefabWithId::BTSCharacterDataModel_PrefabWithId() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId.get_id
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::*)()>(
    &::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>(), { "get_id", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId.get_animationClipAssetReference
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::*)()>(
    &::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::get_animationClipAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>(), { "get_animationClipAssetReference", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::*)()>(
    &::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3284838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::__cordl_internal_set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference*& GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::__cordl_internal_get__animationClipAssetReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipAssetReference;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference* const& GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::__cordl_internal_get__animationClipAssetReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipAssetReference;
}
constexpr void GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::__cordl_internal_set__animationClipAssetReference(::UnityEngine::AddressableAssets::AssetReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationClipAssetReference = value;
}
inline int32_t GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::get_id() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>(), { "get_id", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::get_animationClipAssetReference() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>(), { "get_animationClipAssetReference", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId* GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId::BTSCharacterDataModel_AnimationClipWithId() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel.get_prefabsWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*> (::GlobalNamespace::BTSCharacterDataModel::*)()>(
    &::GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel*>(), { "get_prefabsWithIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel.get_animationClipsWithIds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*> (::GlobalNamespace::BTSCharacterDataModel::*)()>(
    &::GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3284808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel*>(), { "get_animationClipsWithIds", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BTSCharacterDataModel::*)()>(&::GlobalNamespace::BTSCharacterDataModel::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3284810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>& GlobalNamespace::BTSCharacterDataModel::__cordl_internal_get__prefabsWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabsWithIds;
}
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*> const& GlobalNamespace::BTSCharacterDataModel::__cordl_internal_get__prefabsWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabsWithIds;
}
constexpr void GlobalNamespace::BTSCharacterDataModel::__cordl_internal_set__prefabsWithIds(::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prefabsWithIds = value;
}
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>& GlobalNamespace::BTSCharacterDataModel::__cordl_internal_get__animationClipsWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipsWithIds;
}
constexpr ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*> const& GlobalNamespace::BTSCharacterDataModel::__cordl_internal_get__animationClipsWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipsWithIds;
}
constexpr void GlobalNamespace::BTSCharacterDataModel::__cordl_internal_set__animationClipsWithIds(::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationClipsWithIds = value;
}
inline ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*> GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel*>(), { "get_prefabsWithIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BTSCharacterDataModel_PrefabWithId*>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*> GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel*>(), { "get_animationClipsWithIds", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BTSCharacterDataModel_AnimationClipWithId*>>(this, ___internal_method);
}
inline void GlobalNamespace::BTSCharacterDataModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BTSCharacterDataModel*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterDataModel* GlobalNamespace::BTSCharacterDataModel::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BTSCharacterDataModel*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterDataModel::BTSCharacterDataModel() {}
