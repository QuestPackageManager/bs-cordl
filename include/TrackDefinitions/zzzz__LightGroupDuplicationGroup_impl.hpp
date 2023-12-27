#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "TrackDefinitions/zzzz__LightGroupDuplicationGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSO_def.hpp"
//  Writing Method size for method: ::TrackDefinitions::LightGroupDuplicationGroup.get_duplicationGroupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TrackDefinitions::LightGroupDuplicationGroup::*)()>(
    &::TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b058;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                                                                               "get_duplicationGroupName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::LightGroupDuplicationGroup.get_lightGroups
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> (
    ::TrackDefinitions::LightGroupDuplicationGroup::*)()>(&::TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                                                                               "get_lightGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::LightGroupDuplicationGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::LightGroupDuplicationGroup::*)()>(&::TrackDefinitions::LightGroupDuplicationGroup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0b068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& TrackDefinitions::LightGroupDuplicationGroup::__get__duplicationGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____duplicationGroupName;
}
constexpr ::StringW const& TrackDefinitions::LightGroupDuplicationGroup::__get__duplicationGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____duplicationGroupName;
}
constexpr void TrackDefinitions::LightGroupDuplicationGroup::__set__duplicationGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____duplicationGroupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>& TrackDefinitions::LightGroupDuplicationGroup::__get__lightGroups() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroups;
}
constexpr ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> const& TrackDefinitions::LightGroupDuplicationGroup::__get__lightGroups() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lightGroups;
}
constexpr void TrackDefinitions::LightGroupDuplicationGroup::__set__lightGroups(::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW TrackDefinitions::LightGroupDuplicationGroup::get_duplicationGroupName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                                                                             "get_duplicationGroupName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*> TrackDefinitions::LightGroupDuplicationGroup::get_lightGroups() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(),
                                                                             "get_lightGroups", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LightGroupSO*, ::Array<::GlobalNamespace::LightGroupSO*>*>, false>(this, ___internal_method);
}
inline ::TrackDefinitions::LightGroupDuplicationGroup* TrackDefinitions::LightGroupDuplicationGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::LightGroupDuplicationGroup*>());
}
inline void TrackDefinitions::LightGroupDuplicationGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::LightGroupDuplicationGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::LightGroupDuplicationGroup::LightGroupDuplicationGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
