#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelOrPackPromoInfoIdAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelOrPackPromoInfoIdAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::*)(bool)>(
    &::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x368d684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::__cordl_internal_get_allowEmpty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowEmpty;
}
constexpr bool const& GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::__cordl_internal_get_allowEmpty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allowEmpty;
}
constexpr void GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::__cordl_internal_set_allowEmpty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allowEmpty = value;
}
inline void GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::_ctor(bool allowEmpty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, allowEmpty);
}
inline ::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute* GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::New_ctor(bool allowEmpty) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute*>(allowEmpty));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelOrPackPromoInfoIdAttribute::BeatmapLevelOrPackPromoInfoIdAttribute() {}
