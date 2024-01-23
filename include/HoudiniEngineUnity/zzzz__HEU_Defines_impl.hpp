#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_Defines_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_Defines._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_Defines::*)()>(&::HoudiniEngineUnity::HEU_Defines::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21856d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void HoudiniEngineUnity::HEU_Defines::setStaticF_HEU_PLUGIN_PATH(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "HEU_PLUGIN_PATH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>(std::forward<::StringW>(value));
}
inline ::StringW HoudiniEngineUnity::HEU_Defines::getStaticF_HEU_PLUGIN_PATH() {
  return ::cordl_internals::getStaticField<::StringW, "HEU_PLUGIN_PATH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>();
}
inline void HoudiniEngineUnity::HEU_Defines::setStaticF_HEU_TEXTURES_PATH(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "HEU_TEXTURES_PATH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>(std::forward<::StringW>(value));
}
inline ::StringW HoudiniEngineUnity::HEU_Defines::getStaticF_HEU_TEXTURES_PATH() {
  return ::cordl_internals::getStaticField<::StringW, "HEU_TEXTURES_PATH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>();
}
inline void HoudiniEngineUnity::HEU_Defines::setStaticF_HEU_BAKED_ASSETS_PATH(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "HEU_BAKED_ASSETS_PATH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW HoudiniEngineUnity::HEU_Defines::getStaticF_HEU_BAKED_ASSETS_PATH() {
  return ::cordl_internals::getStaticField<::StringW, "HEU_BAKED_ASSETS_PATH", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>();
}
inline void HoudiniEngineUnity::HEU_Defines::setStaticF_HEU_ENGINE_ASSETS(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "HEU_ENGINE_ASSETS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>(std::forward<::StringW>(value));
}
inline ::StringW HoudiniEngineUnity::HEU_Defines::getStaticF_HEU_ENGINE_ASSETS() {
  return ::cordl_internals::getStaticField<::StringW, "HEU_ENGINE_ASSETS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>();
}
inline void HoudiniEngineUnity::HEU_Defines::setStaticF_DEFAULT_MATERIAL_KEY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "DEFAULT_MATERIAL_KEY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>(std::forward<int32_t>(value));
}
inline int32_t HoudiniEngineUnity::HEU_Defines::getStaticF_DEFAULT_MATERIAL_KEY() {
  return ::cordl_internals::getStaticField<int32_t, "DEFAULT_MATERIAL_KEY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>();
}
inline void HoudiniEngineUnity::HEU_Defines::setStaticF_EDITABLE_MATERIAL_KEY(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "EDITABLE_MATERIAL_KEY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>(std::forward<int32_t>(value));
}
inline int32_t HoudiniEngineUnity::HEU_Defines::getStaticF_EDITABLE_MATERIAL_KEY() {
  return ::cordl_internals::getStaticField<int32_t, "EDITABLE_MATERIAL_KEY", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get>();
}
inline ::HoudiniEngineUnity::HEU_Defines* HoudiniEngineUnity::HEU_Defines::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_Defines*>());
}
inline void HoudiniEngineUnity::HEU_Defines::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_Defines*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_Defines::HEU_Defines() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
