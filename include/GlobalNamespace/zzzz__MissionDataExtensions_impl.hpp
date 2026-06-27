#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionDataExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionDataExtensions_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjective_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionDataExtensions.Name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType)>(&::GlobalNamespace::MissionDataExtensions::Name)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3671788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionDataExtensions*>::get(),
                        "Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::MissionDataExtensions::Name(::GlobalNamespace::MissionObjective_ReferenceValueComparisonType  comparisonType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionDataExtensions*>::get(),
                        "Name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MissionObjective_ReferenceValueComparisonType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, comparisonType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionDataExtensions::MissionDataExtensions()   {
}
