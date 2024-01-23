#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "TrackDefinitions/zzzz__EnvironmentDefinitionsListSO_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "TrackDefinitions/zzzz__EnvironmentTracksDefinitionSO_def.hpp"
//  Writing Method size for method: ::TrackDefinitions::EnvironmentDefinitionsListSO.get_environmentTrackDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>>* (
    ::TrackDefinitions::EnvironmentDefinitionsListSO::*)()>(&::TrackDefinitions::EnvironmentDefinitionsListSO::get_environmentTrackDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a0ad6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentDefinitionsListSO*>::get(), "get_environmentTrackDefinitions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::Array<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>>*>&
TrackDefinitions::EnvironmentDefinitionsListSO::__cordl_internal_get__environmentTracksDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksDefinitions;
}
constexpr ::ArrayW<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::Array<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>>*> const&
TrackDefinitions::EnvironmentDefinitionsListSO::__cordl_internal_get__environmentTracksDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentTracksDefinitions;
}
constexpr void TrackDefinitions::EnvironmentDefinitionsListSO::__cordl_internal_set__environmentTracksDefinitions(
    ::ArrayW<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>, ::Array<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____environmentTracksDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>>* TrackDefinitions::EnvironmentDefinitionsListSO::get_environmentTrackDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentDefinitionsListSO*>::get(),
                                                                             "get_environmentTrackDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::TrackDefinitions::EnvironmentTracksDefinitionSO>>*, false>(this, ___internal_method);
}
inline ::TrackDefinitions::EnvironmentDefinitionsListSO* TrackDefinitions::EnvironmentDefinitionsListSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TrackDefinitions::EnvironmentDefinitionsListSO*>());
}
inline void TrackDefinitions::EnvironmentDefinitionsListSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TrackDefinitions::EnvironmentDefinitionsListSO*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TrackDefinitions::EnvironmentDefinitionsListSO::EnvironmentDefinitionsListSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
