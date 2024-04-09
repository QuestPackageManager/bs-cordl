#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultySerializedMethods_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySerializedMethods.SerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xf45d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultySerializedMethods*>::get(), "SerializedName", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultySerializedMethods.BeatmapDifficultyFromSerializedName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::GlobalNamespace::BeatmapDifficulty>)>(
    &::GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xf45dbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultySerializedMethods*>::get(),
                                                 "BeatmapDifficultyFromSerializedName", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapDifficulty>>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapDifficultySerializedMethods::SerializedName(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultySerializedMethods*>::get(), "SerializedName", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, difficulty);
}
inline bool GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultyFromSerializedName(::StringW name, ByRef<::GlobalNamespace::BeatmapDifficulty> difficulty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultySerializedMethods*>::get(),
                                               "BeatmapDifficultyFromSerializedName", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::BeatmapDifficulty>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name, difficulty);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultySerializedMethods::BeatmapDifficultySerializedMethods() {}
