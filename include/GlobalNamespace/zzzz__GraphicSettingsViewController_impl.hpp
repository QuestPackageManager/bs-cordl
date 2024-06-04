#pragma once
// IWYU pragma private; include "GlobalNamespace/GraphicSettingsViewController.hpp"
#include "HMUI/zzzz__ViewController_impl.hpp"
#include "GlobalNamespace/zzzz__GraphicSettingsViewController_def.hpp"
#include "BeatSaber/GameSettings/zzzz__GraphicSettingsHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GraphicSettingsViewController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GraphicSettingsViewController::*)()>(
    &::GlobalNamespace::GraphicSettingsViewController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2678dbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsViewController*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& GlobalNamespace::GraphicSettingsViewController::__cordl_internal_get__graphicSettingsHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicSettingsHandler;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const&
GlobalNamespace::GraphicSettingsViewController::__cordl_internal_get__graphicSettingsHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____graphicSettingsHandler;
}
constexpr void GlobalNamespace::GraphicSettingsViewController::__cordl_internal_set__graphicSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____graphicSettingsHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::GraphicSettingsViewController* GlobalNamespace::GraphicSettingsViewController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GraphicSettingsViewController*>());
}
inline void GlobalNamespace::GraphicSettingsViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GraphicSettingsViewController*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GraphicSettingsViewController::GraphicSettingsViewController() {}
