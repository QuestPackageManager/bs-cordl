#pragma once
// IWYU pragma private; include "OculusStudios/HierarchyIcons/Defines.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Defines_def.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Icon_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
inline void OculusStudios::HierarchyIcons::Defines::setStaticF_iconDatabase(::System::Collections::Generic::IReadOnlyDictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::IReadOnlyDictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*, "iconDatabase",
                                    ::OculusStudios::HierarchyIcons::Defines*>(
      std::forward<::System::Collections::Generic::IReadOnlyDictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*>(value));
}
inline ::System::Collections::Generic::IReadOnlyDictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* OculusStudios::HierarchyIcons::Defines::getStaticF_iconDatabase() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::IReadOnlyDictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*, "iconDatabase",
                                           ::OculusStudios::HierarchyIcons::Defines*>();
}
// Ctor Parameters []
constexpr ::OculusStudios::HierarchyIcons::Defines::Defines() {}
