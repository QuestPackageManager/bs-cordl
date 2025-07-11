#pragma once
// IWYU pragma private; include "GlobalNamespace/VideoProjectionDataModelSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "GlobalNamespace/zzzz__VideoProjectionDataModelSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetReference_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::*)()>(
    &::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9ac58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>::get(), "get_id",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId.get_videoAssetReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetReference* (
    ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::*)()>(&::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_videoAssetReference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9ac60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>::get(),
                                                 "get_videoAssetReference", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::*)()>(
    &::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9ac68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoAssetReference)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_id() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>::get(), "get_id",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::AddressableAssets::AssetReference* GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::get_videoAssetReference() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>::get(), "get_videoAssetReference",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetReference*, false>(this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId* GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId::VideoProjectionDataModelSO_VideoClipWithId() {}
//  Writing Method size for method: ::GlobalNamespace::VideoProjectionDataModelSO.get_videoClipWithIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*> (
        ::GlobalNamespace::VideoProjectionDataModelSO::*)()>(&::GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b9ac48;

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
  constexpr static std::size_t addrs = 0x3b9ac50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*>&
GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_get__videoClipsWithId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipsWithId;
}
constexpr ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*> const&
GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_get__videoClipsWithId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____videoClipsWithId;
}
constexpr void GlobalNamespace::VideoProjectionDataModelSO::__cordl_internal_set__videoClipsWithId(
    ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____videoClipsWithId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*>
GlobalNamespace::VideoProjectionDataModelSO::get_videoClipWithIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(),
                                                                             "get_videoClipWithIds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*, ::Array<::GlobalNamespace::VideoProjectionDataModelSO_VideoClipWithId*>*>, false>(
      this, ___internal_method);
}
inline void GlobalNamespace::VideoProjectionDataModelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VideoProjectionDataModelSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::VideoProjectionDataModelSO* GlobalNamespace::VideoProjectionDataModelSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VideoProjectionDataModelSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VideoProjectionDataModelSO::VideoProjectionDataModelSO() {}
