#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterDataModel_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::*)()>(
    &::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                                                               "get_id", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId.get_prefabAssetReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::*)()>(
    &::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_prefabAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                                                               "get_prefabAssetReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::*)()>(
    &::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference*& GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__prefabAssetReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabAssetReference;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const& GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__get__prefabAssetReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabAssetReference;
}
constexpr void GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__set__prefabAssetReference(::UnityEngine::AddressableAssets::AssetReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefabAssetReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                                                             "get_id", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::get_prefabAssetReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                                                             "get_prefabAssetReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId* GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>());
}
inline void GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId::__BTSCharacterDataModel__PrefabWithId() {}
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::*)()>(
    &::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219adc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(), "get_id",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId.get_animationClipAssetReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (
    ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::*)()>(&::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_animationClipAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                                                 "get_animationClipAssetReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::*)()>(
    &::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference*& GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__animationClipAssetReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipAssetReference;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const&
GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__get__animationClipAssetReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipAssetReference;
}
constexpr void GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__set__animationClipAssetReference(::UnityEngine::AddressableAssets::AssetReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationClipAssetReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(), "get_id",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::get_animationClipAssetReference() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(),
                                               "get_animationClipAssetReference", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId* GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>());
}
inline void GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId::__BTSCharacterDataModel__AnimationClipWithId() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel.get_prefabsWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> (::GlobalNamespace::BTSCharacterDataModel::*)()>(
    &::GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                                                                               "get_prefabsWithIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel.get_animationClipsWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> (
        ::GlobalNamespace::BTSCharacterDataModel::*)()>(&::GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                                                                               "get_animationClipsWithIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterDataModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterDataModel::*)()>(&::GlobalNamespace::BTSCharacterDataModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>&
GlobalNamespace::BTSCharacterDataModel::__get__prefabsWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabsWithIds;
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> const&
GlobalNamespace::BTSCharacterDataModel::__get__prefabsWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prefabsWithIds;
}
constexpr void GlobalNamespace::BTSCharacterDataModel::__set__prefabsWithIds(
    ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prefabsWithIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>&
GlobalNamespace::BTSCharacterDataModel::__get__animationClipsWithIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipsWithIds;
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> const&
GlobalNamespace::BTSCharacterDataModel::__get__animationClipsWithIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationClipsWithIds;
}
constexpr void GlobalNamespace::BTSCharacterDataModel::__set__animationClipsWithIds(
    ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____animationClipsWithIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>
GlobalNamespace::BTSCharacterDataModel::get_prefabsWithIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                                                                             "get_prefabsWithIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__PrefabWithId*>*>, false>(
      this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>
GlobalNamespace::BTSCharacterDataModel::get_animationClipsWithIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(),
                                                                             "get_animationClipsWithIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*, ::Array<::GlobalNamespace::__BTSCharacterDataModel__AnimationClipWithId*>*>,
                                             false>(this, ___internal_method);
}
inline ::GlobalNamespace::BTSCharacterDataModel* GlobalNamespace::BTSCharacterDataModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BTSCharacterDataModel*>());
}
inline void GlobalNamespace::BTSCharacterDataModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterDataModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterDataModel::BTSCharacterDataModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
