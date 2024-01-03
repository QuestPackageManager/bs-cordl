#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPackCollection_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollection.get_beatmapLevelPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> (
    ::GlobalNamespace::BeatmapLevelPackCollection::*)()>(&::GlobalNamespace::BeatmapLevelPackCollection::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23424a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollection*>::get(),
                                                                               "get_beatmapLevelPacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelPackCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelPackCollection::*)(
    ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>)>(&::GlobalNamespace::BeatmapLevelPackCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23424ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelPackCollection"
constexpr GlobalNamespace::BeatmapLevelPackCollection::operator ::GlobalNamespace::IBeatmapLevelPackCollection*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelPackCollection*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>& GlobalNamespace::BeatmapLevelPackCollection::__get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> const& GlobalNamespace::BeatmapLevelPackCollection::__get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void GlobalNamespace::BeatmapLevelPackCollection::__set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelPacks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> GlobalNamespace::BeatmapLevelPackCollection::get_beatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollection*>::get(),
                                                                             "get_beatmapLevelPacks", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPackCollection*
GlobalNamespace::BeatmapLevelPackCollection::New_ctor(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapLevelPackCollection*>(beatmapLevelPacks));
}
inline void GlobalNamespace::BeatmapLevelPackCollection::_ctor(::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*> beatmapLevelPacks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelPackCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::IBeatmapLevelPack*, ::Array<::GlobalNamespace::IBeatmapLevelPack*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPacks);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelPackCollection::BeatmapLevelPackCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
