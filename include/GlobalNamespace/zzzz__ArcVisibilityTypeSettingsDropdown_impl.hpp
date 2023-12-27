#pragma once
#include "GlobalNamespace/zzzz__ArcVisibilityType_impl.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_impl.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityTypeSettingsDropdown_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown.GetNamedValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::ArcVisibilityType, ::StringW>*>* (::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::*)()>(
        &::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::GetNamedValues)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x22a9d60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::*)()>(
    &::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22a9ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::ArcVisibilityType, ::StringW>*>* GlobalNamespace::ArcVisibilityTypeSettingsDropdown::GetNamedValues() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>::get(),
                                                                             "GetNamedValues", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::ArcVisibilityType, ::StringW>*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown* GlobalNamespace::ArcVisibilityTypeSettingsDropdown::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>());
}
inline void GlobalNamespace::ArcVisibilityTypeSettingsDropdown::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ArcVisibilityTypeSettingsDropdown*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ArcVisibilityTypeSettingsDropdown::ArcVisibilityTypeSettingsDropdown() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
