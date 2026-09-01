#pragma once
// IWYU pragma private; include "OculusStudios\HierarchyIcons\Defines.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Defines_def.hpp"
#include "OculusStudios/HierarchyIcons/zzzz__Icon_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::OculusStudios::HierarchyIcons::Defines._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::OculusStudios::HierarchyIcons::Defines::*)()>(&::OculusStudios::HierarchyIcons::Defines::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5f2d9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::HierarchyIcons::Defines*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void OculusStudios::HierarchyIcons::Defines::setStaticF_iconDatabase(::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*, "iconDatabase", ::OculusStudios::HierarchyIcons::Defines*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>* OculusStudios::HierarchyIcons::Defines::getStaticF_iconDatabase() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::OculusStudios::HierarchyIcons::Icon, ::StringW>*, "iconDatabase",
                                           ::OculusStudios::HierarchyIcons::Defines*>();
}
inline void OculusStudios::HierarchyIcons::Defines::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::OculusStudios::HierarchyIcons::Defines*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::OculusStudios::HierarchyIcons::Defines* OculusStudios::HierarchyIcons::Defines::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::OculusStudios::HierarchyIcons::Defines*>());
}
// Ctor Parameters []
constexpr ::OculusStudios::HierarchyIcons::Defines::Defines() {}
