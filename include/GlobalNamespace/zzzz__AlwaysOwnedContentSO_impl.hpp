#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AlwaysOwnedContentSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentSO.get_alwaysOwnedPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> (
    ::GlobalNamespace::AlwaysOwnedContentSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22343f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO*>::get(),
                                                                               "get_alwaysOwnedPacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentSO.get_alwaysOwnedBeatmapLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> (
    ::GlobalNamespace::AlwaysOwnedContentSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22343fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO*>::get(),
                                                                               "get_alwaysOwnedBeatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AlwaysOwnedContentSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AlwaysOwnedContentSO::*)()>(&::GlobalNamespace::AlwaysOwnedContentSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2234404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*>& GlobalNamespace::AlwaysOwnedContentSO::__get__alwaysOwnedPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> const& GlobalNamespace::AlwaysOwnedContentSO::__get__alwaysOwnedPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedPacks;
}
constexpr void GlobalNamespace::AlwaysOwnedContentSO::__set__alwaysOwnedPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alwaysOwnedPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*>& GlobalNamespace::AlwaysOwnedContentSO::__get__alwaysOwnedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedBeatmapLevels;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> const& GlobalNamespace::AlwaysOwnedContentSO::__get__alwaysOwnedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedBeatmapLevels;
}
constexpr void GlobalNamespace::AlwaysOwnedContentSO::__set__alwaysOwnedBeatmapLevels(::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alwaysOwnedBeatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*> GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO*>::get(),
                                                                             "get_alwaysOwnedPacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevelPackSO*, ::Array<::GlobalNamespace::BeatmapLevelPackSO*>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*> GlobalNamespace::AlwaysOwnedContentSO::get_alwaysOwnedBeatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO*>::get(),
                                                                             "get_alwaysOwnedBeatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevelSO*, ::Array<::GlobalNamespace::BeatmapLevelSO*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::AlwaysOwnedContentSO* GlobalNamespace::AlwaysOwnedContentSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AlwaysOwnedContentSO*>());
}
inline void GlobalNamespace::AlwaysOwnedContentSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AlwaysOwnedContentSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AlwaysOwnedContentSO::AlwaysOwnedContentSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
