#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionDataExtensions_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionDataExtensions.Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType)>(
    &::GlobalNamespace::MissionDataExtensions::Name)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x1294408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionDataExtensions*>::get(), "Name", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MissionDataExtensions::Name(::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType comparisonType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionDataExtensions*>::get(), "Name", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MissionObjective__ReferenceValueComparisonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, comparisonType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionDataExtensions::MissionDataExtensions() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
