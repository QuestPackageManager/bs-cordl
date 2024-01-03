#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollection_def.hpp"
#include "GlobalNamespace/zzzz__AppStaticSettingsSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapCharacteristicCollection::*)(
    ::GlobalNamespace::BeatmapCharacteristicCollectionSO*, ::GlobalNamespace::AppStaticSettingsSO*)>(&::GlobalNamespace::BeatmapCharacteristicCollection::_ctor)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x232cc44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppStaticSettingsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection.GetBeatmapCharacteristicBySerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (::GlobalNamespace::BeatmapCharacteristicCollection::*)(::StringW)>(
    &::GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x232d0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), "GetBeatmapCharacteristicBySerializedName",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>*&
GlobalNamespace::BeatmapCharacteristicCollection::__get__beatmapCharacteristicsBySerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
GlobalNamespace::BeatmapCharacteristicCollection::__get__beatmapCharacteristicsBySerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__set__beatmapCharacteristicsBySerializedName(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicsBySerializedName)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& GlobalNamespace::BeatmapCharacteristicCollection::__get_beatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
GlobalNamespace::BeatmapCharacteristicCollection::__get_beatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__set_beatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapCharacteristicCollection* GlobalNamespace::BeatmapCharacteristicCollection::New_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection,
                                                                                                                      ::GlobalNamespace::AppStaticSettingsSO* appSettings) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapCharacteristicCollection*>(collection, appSettings));
}
inline void GlobalNamespace::BeatmapCharacteristicCollection::_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection, ::GlobalNamespace::AppStaticSettingsSO* appSettings) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppStaticSettingsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, appSettings);
}
inline ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), "GetBeatmapCharacteristicBySerializedName",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(this, ___internal_method, serializedName);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection::BeatmapCharacteristicCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
