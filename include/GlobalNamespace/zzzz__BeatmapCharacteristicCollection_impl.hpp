#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicCollection.hpp"
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
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x3612084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppStaticSettingsSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapCharacteristicCollection.GetBeatmapCharacteristicBySerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (::GlobalNamespace::BeatmapCharacteristicCollection::*)(
    ::StringW)>(&::GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x36125c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), "GetBeatmapCharacteristicBySerializedName",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get__beatmapCharacteristicsBySerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get__beatmapCharacteristicsBySerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicsBySerializedName;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set__beatmapCharacteristicsBySerializedName(
    ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristicsBySerializedName)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_beatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_beatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set_beatmapCharacteristics(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_disabledBeatmapCharacteristics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledBeatmapCharacteristics;
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const&
GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_get_disabledBeatmapCharacteristics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___disabledBeatmapCharacteristics;
}
constexpr void GlobalNamespace::BeatmapCharacteristicCollection::__cordl_internal_set_disabledBeatmapCharacteristics(
    ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___disabledBeatmapCharacteristics)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BeatmapCharacteristicCollection::_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection, ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicCollectionSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AppStaticSettingsSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, collection, appStaticSettings);
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GlobalNamespace::BeatmapCharacteristicCollection::GetBeatmapCharacteristicBySerializedName(::StringW serializedName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapCharacteristicCollection*>::get(), "GetBeatmapCharacteristicBySerializedName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, false>(this, ___internal_method, serializedName);
}
inline ::GlobalNamespace::BeatmapCharacteristicCollection* GlobalNamespace::BeatmapCharacteristicCollection::New_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection,
                                                                                                                      ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapCharacteristicCollection*>(collection, appStaticSettings));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapCharacteristicCollection::BeatmapCharacteristicCollection() {}
