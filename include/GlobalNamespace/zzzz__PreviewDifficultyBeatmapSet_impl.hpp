#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PreviewDifficultyBeatmapSet_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (::GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234c5e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                                                                               "get_beatmapCharacteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet.get_beatmapDifficulties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> (
    ::GlobalNamespace::PreviewDifficultyBeatmapSet::*)()>(&::GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x234c5e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                                                                               "get_beatmapDifficulties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PreviewDifficultyBeatmapSet::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*, ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*>)>(
    &::GlobalNamespace::PreviewDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x234c5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::PreviewDifficultyBeatmapSet::__cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCharacteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*>& GlobalNamespace::PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapDifficulties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulties;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> const&
GlobalNamespace::PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapDifficulties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapDifficulties;
}
constexpr void
GlobalNamespace::PreviewDifficultyBeatmapSet::__cordl_internal_set__beatmapDifficulties(::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapDifficulties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapCharacteristic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                                                                             "get_beatmapCharacteristic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> GlobalNamespace::PreviewDifficultyBeatmapSet::get_beatmapDifficulties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(),
                                                                             "get_beatmapDifficulties", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PreviewDifficultyBeatmapSet*
GlobalNamespace::PreviewDifficultyBeatmapSet::New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                       ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> beatmapDifficulties) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PreviewDifficultyBeatmapSet*>(beatmapCharacteristic, beatmapDifficulties));
}
inline void GlobalNamespace::PreviewDifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> beatmapDifficulties) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PreviewDifficultyBeatmapSet*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapCharacteristic, beatmapDifficulties);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PreviewDifficultyBeatmapSet::PreviewDifficultyBeatmapSet() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
