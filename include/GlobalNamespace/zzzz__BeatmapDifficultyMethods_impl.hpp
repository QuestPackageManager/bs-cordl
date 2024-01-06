#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMethods_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultyMethods::Name)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2340cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "Name", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.ShortName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultyMethods::ShortName)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2340d8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "ShortName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.DefaultRating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapDifficultyMethods::DefaultRating)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2340e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "DefaultRating", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDifficultyMethods.NoteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::BeatmapDifficultyMethods::NoteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2340e50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "NoteJumpMovementSpeed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::BeatmapDifficultyMethods::Name(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "Name", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, difficulty);
}
inline ::StringW GlobalNamespace::BeatmapDifficultyMethods::ShortName(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "ShortName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, difficulty);
}
inline int32_t GlobalNamespace::BeatmapDifficultyMethods::DefaultRating(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "DefaultRating", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, difficulty);
}
inline float_t GlobalNamespace::BeatmapDifficultyMethods::NoteJumpMovementSpeed(::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDifficultyMethods*>::get(), "NoteJumpMovementSpeed", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, difficulty);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDifficultyMethods::BeatmapDifficultyMethods() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
