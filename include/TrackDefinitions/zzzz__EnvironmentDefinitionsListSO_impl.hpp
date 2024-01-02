#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "TrackDefinitions/zzzz__EnvironmentDefinitionsListSO_def.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
//  Writing Method size for method: ::TrackDefinitions::EnvironmentDefinitionsListSO.get_environmentTrackDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::TrackDefinitions::EnvironmentTracksDefinitionSO*>* (
    ::TrackDefinitions::EnvironmentDefinitionsListSO::*)()>(&::TrackDefinitions::EnvironmentDefinitionsListSO::get_environmentTrackDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentDefinitionsListSO*>::get(),
                                                                               "get_environmentTrackDefinitions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TrackDefinitions::EnvironmentDefinitionsListSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TrackDefinitions::EnvironmentDefinitionsListSO::*)()>(
    &::TrackDefinitions::EnvironmentDefinitionsListSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentDefinitionsListSO*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*>&
TrackDefinitions::EnvironmentDefinitionsListSO::__get__environmentTracksDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksDefinitions;
}
constexpr ::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*> const&
TrackDefinitions::EnvironmentDefinitionsListSO::__get__environmentTracksDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksDefinitions;
}
constexpr void TrackDefinitions::EnvironmentDefinitionsListSO::__set__environmentTracksDefinitions(
    ::ArrayW<::TrackDefinitions::EnvironmentTracksDefinitionSO*, ::Array<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentTracksDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::TrackDefinitions::EnvironmentTracksDefinitionSO*>* TrackDefinitions::EnvironmentDefinitionsListSO::get_environmentTrackDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentDefinitionsListSO*>::get(),
                                                                             "get_environmentTrackDefinitions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::TrackDefinitions::EnvironmentTracksDefinitionSO*>*, false>(this, ___internal_method);
}
inline ::TrackDefinitions::EnvironmentDefinitionsListSO* TrackDefinitions::EnvironmentDefinitionsListSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TrackDefinitions::EnvironmentDefinitionsListSO*>());
}
inline void TrackDefinitions::EnvironmentDefinitionsListSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentDefinitionsListSO*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::EnvironmentDefinitionsListSO::EnvironmentDefinitionsListSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
