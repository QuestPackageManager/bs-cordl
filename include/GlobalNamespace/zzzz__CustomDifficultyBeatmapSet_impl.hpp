#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__CustomDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmapSet.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapCharacteristicSO* (::GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(),
                                                                               "get_beatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* (
    ::GlobalNamespace::CustomDifficultyBeatmapSet::*)()>(&::GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346ab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(),
                                                                               "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomDifficultyBeatmapSet::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::CustomDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2346abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomDifficultyBeatmapSet.SetCustomDifficultyBeatmaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomDifficultyBeatmapSet::*)(
    ::ArrayW<::GlobalNamespace::CustomDifficultyBeatmap*, ::Array<::GlobalNamespace::CustomDifficultyBeatmap*>*>)>(&::GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346ae4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(), "SetCustomDifficultyBeatmaps", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomDifficultyBeatmap*, ::Array<::GlobalNamespace::CustomDifficultyBeatmap*>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
constexpr GlobalNamespace::CustomDifficultyBeatmapSet::operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept {
  return static_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IDifficultyBeatmapSet"
constexpr ::GlobalNamespace::IDifficultyBeatmapSet* GlobalNamespace::CustomDifficultyBeatmapSet::i___GlobalNamespace__IDifficultyBeatmapSet() noexcept {
  return static_cast<::GlobalNamespace::IDifficultyBeatmapSet*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& GlobalNamespace::CustomDifficultyBeatmapSet::__get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& GlobalNamespace::CustomDifficultyBeatmapSet::__get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmapSet::__set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>*& GlobalNamespace::CustomDifficultyBeatmapSet::__get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>*> const&
GlobalNamespace::CustomDifficultyBeatmapSet::__get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::CustomDifficultyBeatmapSet::__set__difficultyBeatmaps(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____difficultyBeatmaps)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapCharacteristicSO* GlobalNamespace::CustomDifficultyBeatmapSet::get_beatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(),
                                                                             "get_beatmapCharacteristic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristicSO*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* GlobalNamespace::CustomDifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(),
                                                                             "get_difficultyBeatmaps", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomDifficultyBeatmapSet* GlobalNamespace::CustomDifficultyBeatmapSet::New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomDifficultyBeatmapSet*>(beatmapCharacteristic));
}
inline void GlobalNamespace::CustomDifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristic);
}
inline void GlobalNamespace::CustomDifficultyBeatmapSet::SetCustomDifficultyBeatmaps(
    ::ArrayW<::GlobalNamespace::CustomDifficultyBeatmap*, ::Array<::GlobalNamespace::CustomDifficultyBeatmap*>*> difficultyBeatmaps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomDifficultyBeatmapSet*>::get(), "SetCustomDifficultyBeatmaps", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomDifficultyBeatmap*, ::Array<::GlobalNamespace::CustomDifficultyBeatmap*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, difficultyBeatmaps);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomDifficultyBeatmapSet::CustomDifficultyBeatmapSet() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
