#pragma once
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityDropdown_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivityDropdown.GetNamedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag, ::StringW>*>* (::GlobalNamespace::PlayerSensitivityDropdown::*)()>(
        &::GlobalNamespace::PlayerSensitivityDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x22a56d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSensitivityDropdown*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSensitivityDropdown*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSensitivityDropdown._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlayerSensitivityDropdown::*)()>(&::GlobalNamespace::PlayerSensitivityDropdown::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a5800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSensitivityDropdown*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag, ::StringW>*>* GlobalNamespace::PlayerSensitivityDropdown::GetNamedValues() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSensitivityDropdown*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag, ::StringW>*>*, false>(this,
                                                                                                                                                                               ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivityDropdown* GlobalNamespace::PlayerSensitivityDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlayerSensitivityDropdown*>());
}
inline void GlobalNamespace::PlayerSensitivityDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlayerSensitivityDropdown*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSensitivityDropdown::PlayerSensitivityDropdown() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
