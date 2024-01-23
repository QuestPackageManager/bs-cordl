#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollectionSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO.get_beatmapLevelPackCollection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> (
    ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::*)()>(&::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23424d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                                                                               "get_beatmapLevelPackCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::*)()>(
    &::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23424dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO>& GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__cordl_internal_get__beatmapLevelPackCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPackCollection;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> const& GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__cordl_internal_get__beatmapLevelPackCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPackCollection;
}
constexpr void GlobalNamespace::BeatmapLevelPackCollectionContainerSO::__cordl_internal_set__beatmapLevelPackCollection(::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPackCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO> GlobalNamespace::BeatmapLevelPackCollectionContainerSO::get_beatmapLevelPackCollection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                                                                             "get_beatmapLevelPackCollection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelPackCollectionSO>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO* GlobalNamespace::BeatmapLevelPackCollectionContainerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>());
}
inline void GlobalNamespace::BeatmapLevelPackCollectionContainerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollectionContainerSO*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelPackCollectionContainerSO::BeatmapLevelPackCollectionContainerSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
