#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/VolumeComponentMenu.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VolumeComponentMenu_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::VolumeComponentMenu._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::VolumeComponentMenu::*)(::StringW)>(
    &::UnityEngine::Rendering::VolumeComponentMenu::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65ac498;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeComponentMenu*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Rendering::VolumeComponentMenu::__cordl_internal_get_menu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menu;
}
constexpr ::StringW const& UnityEngine::Rendering::VolumeComponentMenu::__cordl_internal_get_menu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___menu;
}
constexpr void UnityEngine::Rendering::VolumeComponentMenu::__cordl_internal_set_menu(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___menu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::VolumeComponentMenu::_ctor(::StringW menu) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::VolumeComponentMenu*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menu);
}
inline ::UnityEngine::Rendering::VolumeComponentMenu* UnityEngine::Rendering::VolumeComponentMenu::New_ctor(::StringW menu) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::VolumeComponentMenu*>(menu));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::VolumeComponentMenu::VolumeComponentMenu() {}
