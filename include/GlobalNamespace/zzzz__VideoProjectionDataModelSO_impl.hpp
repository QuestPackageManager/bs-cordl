#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoProjectionDataModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::*)()>(
    &::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(), "get_id",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId.get_videoAssetReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (
    ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::*)()>(&::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_videoAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                                                 "get_videoAssetReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::*)()>(
    &::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__cordl_internal_get__id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr int32_t const& GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__cordl_internal_get__id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____id;
}
constexpr void GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__cordl_internal_set__id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____id = value;
}
constexpr ::UnityEngine::AddressableAssets::AssetReference*& GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__cordl_internal_get__videoAssetReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoAssetReference;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetReference*> const&
GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__cordl_internal_get__videoAssetReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoAssetReference;
}
constexpr void GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__cordl_internal_set__videoAssetReference(::UnityEngine::AddressableAssets::AssetReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoAssetReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(), "get_id",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::get_videoAssetReference() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(),
                                               "get_videoAssetReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId* GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>());
}
inline void GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId::__VideoProjectionDataModelSO__VideoClipWithId() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO.get_videoClipWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> (
        ::GlobalNamespace::VideoProjectionDataModelSO::*)()>(&::GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                                                               "get_videoClipWithIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionDataModelSO::*)()>(&::GlobalNamespace::VideoProjectionDataModelSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d3dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>&
GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_get__videoClipsWithId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipsWithId;
}
constexpr ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> const&
GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_get__videoClipsWithId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipsWithId;
}
constexpr void GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_set__videoClipsWithId(
    ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoClipsWithId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>
GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                                                             "get_videoClipWithIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*, ::Array<::GlobalNamespace::__VideoProjectionDataModelSO__VideoClipWithId*>*>,
                                             false>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionDataModelSO* GlobalNamespace::VideoProjectionDataModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VideoProjectionDataModelSO*>());
}
inline void GlobalNamespace::VideoProjectionDataModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionDataModelSO::VideoProjectionDataModelSO() {}
