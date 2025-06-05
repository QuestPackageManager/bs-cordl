#pragma once
// IWYU pragma private; include "StyledUITemplates/OverridableSprite.hpp"
#include "StyledUITemplates/zzzz__OverridableData_1_impl.hpp"
#include "StyledUITemplates/zzzz__OverridableSprite_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::StyledUITemplates::OverridableSprite._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::StyledUITemplates::OverridableSprite::*)()>(&::StyledUITemplates::OverridableSprite::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x407e9f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableSprite*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void StyledUITemplates::OverridableSprite::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::StyledUITemplates::OverridableSprite*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StyledUITemplates::OverridableSprite* StyledUITemplates::OverridableSprite::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::StyledUITemplates::OverridableSprite*>());
}
// Ctor Parameters []
constexpr ::StyledUITemplates::OverridableSprite::OverridableSprite() {}
