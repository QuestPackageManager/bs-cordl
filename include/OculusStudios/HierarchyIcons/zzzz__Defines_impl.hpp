#pragma once
// IWYU pragma private; include "OculusStudios/HierarchyIcons/Defines.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Defines_def.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Icon_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::HierarchyIcons::Defines._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OculusStudios::HierarchyIcons::Defines::*)()>(&::OculusStudios::HierarchyIcons::Defines::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d7f494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::Defines*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void OculusStudios::HierarchyIcons::Defines::setStaticF_iconDatabase(::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*, "iconDatabase",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::Defines*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* OculusStudios::HierarchyIcons::Defines::getStaticF_iconDatabase() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*, "iconDatabase",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::Defines*>::get>();
}
inline void OculusStudios::HierarchyIcons::Defines::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OculusStudios::HierarchyIcons::Defines*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OculusStudios::HierarchyIcons::Defines* OculusStudios::HierarchyIcons::Defines::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OculusStudios::HierarchyIcons::Defines*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::HierarchyIcons::Defines::Defines() {}
