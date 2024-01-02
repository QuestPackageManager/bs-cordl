#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollectionSO.get_allBeatmapCharacteristics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>* (
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(&::GlobalNamespace::BeatmapCharacteristicCollectionSO::get_allBeatmapCharacteristics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232d138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                                                               "get_allBeatmapCharacteristics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollectionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollectionSO::*)()>(
    &::GlobalNamespace::BeatmapCharacteristicCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x232d140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*>&
GlobalNamespace::BeatmapCharacteristicCollectionSO::__get__beatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristics;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
GlobalNamespace::BeatmapCharacteristicCollectionSO::__get__beatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristics;
}
constexpr void
GlobalNamespace::BeatmapCharacteristicCollectionSO::__set__beatmapCharacteristics(::ArrayW<::GlobalNamespace::BeatmapCharacteristicSO*, ::Array<::GlobalNamespace::BeatmapCharacteristicSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>* GlobalNamespace::BeatmapCharacteristicCollectionSO::get_allBeatmapCharacteristics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                                                             "get_allBeatmapCharacteristics", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::BeatmapCharacteristicSO*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapCharacteristicCollectionSO* GlobalNamespace::BeatmapCharacteristicCollectionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>());
}
inline void GlobalNamespace::BeatmapCharacteristicCollectionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicCollectionSO::BeatmapCharacteristicCollectionSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
