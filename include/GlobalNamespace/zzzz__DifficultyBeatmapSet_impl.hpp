#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DifficultyBeatmapSet.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (::GlobalNamespace::DifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234954c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSet*>::get(),
                                                                               "get_beatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* (
    ::GlobalNamespace::DifficultyBeatmapSet::*)()>(&::GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2349554;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSet*>::get(),
                                                                               "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DifficultyBeatmapSet::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*)>(&::GlobalNamespace::DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x234955c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
constexpr GlobalNamespace::DifficultyBeatmapSet::operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept {
  return static_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::DifficultyBeatmapSet::__get__beatmapCharacteristic_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::DifficultyBeatmapSet::__get__beatmapCharacteristic_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic_k__BackingField;
}
constexpr void GlobalNamespace::DifficultyBeatmapSet::__set__beatmapCharacteristic_k__BackingField(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristic_k__BackingField)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*& GlobalNamespace::DifficultyBeatmapSet::__get__difficultyBeatmaps_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*> const&
GlobalNamespace::DifficultyBeatmapSet::__get__difficultyBeatmaps_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps_k__BackingField;
}
constexpr void GlobalNamespace::DifficultyBeatmapSet::__set__difficultyBeatmaps_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmaps_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::DifficultyBeatmapSet::get_beatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSet*>::get(),
                                                                             "get_beatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* GlobalNamespace::DifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSet*>::get(),
                                                                             "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DifficultyBeatmapSet*
GlobalNamespace::DifficultyBeatmapSet::New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DifficultyBeatmapSet*>(beatmapCharacteristic, difficultyBeatmaps));
}
inline void GlobalNamespace::DifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                         ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristic, difficultyBeatmaps);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DifficultyBeatmapSet::DifficultyBeatmapSet() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
