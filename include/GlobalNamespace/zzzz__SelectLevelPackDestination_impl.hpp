#pragma once
#include "GlobalNamespace/zzzz__MenuDestination_impl.hpp"
#include "GlobalNamespace/zzzz__SelectLevelPackDestination_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelPack_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SelectLevelPackDestination._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SelectLevelPackDestination::*)(::GlobalNamespace::IBeatmapLevelPack*)>(
    &::GlobalNamespace::SelectLevelPackDestination::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x223cf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelPackDestination*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IBeatmapLevelPack*& GlobalNamespace::SelectLevelPackDestination::__get_beatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& GlobalNamespace::SelectLevelPackDestination::__get_beatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelPack;
}
constexpr void GlobalNamespace::SelectLevelPackDestination::__set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapLevelPack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::SelectLevelPackDestination* GlobalNamespace::SelectLevelPackDestination::New_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SelectLevelPackDestination*>(beatmapLevelPack));
}
inline void GlobalNamespace::SelectLevelPackDestination::_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SelectLevelPackDestination*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelPack*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevelPack);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SelectLevelPackDestination::SelectLevelPackDestination() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
