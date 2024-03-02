#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "BeatSaber/TrackDefinitions/zzzz__LightGroupDuplicationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup.get_duplicationGroupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::*)()>(
    &::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe83604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>::get(), "get_duplicationGroupName",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup.get_lightGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> (
    ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::*)()>(&::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8360c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>::get(), "get_lightGroups",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::*)()>(
    &::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe83614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__duplicationGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroupName;
}
constexpr ::StringW const& BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__duplicationGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____duplicationGroupName;
}
constexpr void BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_set__duplicationGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____duplicationGroupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>&
BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> const&
BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightGroups;
}
constexpr void BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::__cordl_internal_set__lightGroups(
    ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                                                                             "get_duplicationGroupName", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*> BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                                                                             "get_lightGroups", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::LightGroupSO>, ::Array<::UnityW<::GlobalNamespace::LightGroupSO>>*>, false>(this, ___internal_method);
}
inline ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup* BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>());
}
inline void BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::TrackDefinitions::LightGroupDuplicationGroup::LightGroupDuplicationGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
