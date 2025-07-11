#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevelCollectionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.get_beatmapLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* (
    ::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                                                                               "get_beatmapLevels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> (*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::Create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26c5dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), "Create",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.AddBeatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelCollectionSO::*)(::GlobalNamespace::BeatmapLevelSO*)>(
    &::GlobalNamespace::BeatmapLevelCollectionSO::AddBeatmapLevel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x26c5e8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), "AddBeatmapLevel", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26c5f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*& GlobalNamespace::BeatmapLevelCollectionSO::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* const& GlobalNamespace::BeatmapLevelCollectionSO::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelCollectionSO::__cordl_internal_set__beatmapLevels(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(),
                                                                             "get_beatmapLevels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> GlobalNamespace::BeatmapLevelCollectionSO::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), "Create",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO>, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelCollectionSO::AddBeatmapLevel(::GlobalNamespace::BeatmapLevelSO* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), "AddBeatmapLevel", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::BeatmapLevelCollectionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelCollectionSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelCollectionSO* GlobalNamespace::BeatmapLevelCollectionSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelCollectionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelCollectionSO::BeatmapLevelCollectionSO() {}
