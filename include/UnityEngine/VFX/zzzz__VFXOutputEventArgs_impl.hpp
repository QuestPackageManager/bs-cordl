#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VFXOutputEventArgs.hpp"
#include "UnityEngine/VFX/zzzz__VFXOutputEventArgs_def.hpp"
#include "UnityEngine/VFX/zzzz__VFXEventAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::VFX::VFXOutputEventArgs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::VFX::VFXOutputEventArgs::*)(int32_t, ::UnityEngine::VFX::VFXEventAttribute*)>(
    &::UnityEngine::VFX::VFXOutputEventArgs::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6c60dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXOutputEventArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VFXEventAttribute*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::VFX::VFXOutputEventArgs::_ctor(int32_t nameId, ::UnityEngine::VFX::VFXEventAttribute* eventAttribute) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::VFX::VFXOutputEventArgs>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::VFX::VFXEventAttribute*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nameId, eventAttribute);
}
// Ctor Parameters [CppParam { name: "_nameId_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_eventAttribute_k__BackingField", ty:
// "::UnityEngine::VFX::VFXEventAttribute*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::VFX::VFXOutputEventArgs::VFXOutputEventArgs(int32_t _nameId_k__BackingField, ::UnityEngine::VFX::VFXEventAttribute* _eventAttribute_k__BackingField) noexcept {
  this->_nameId_k__BackingField = _nameId_k__BackingField;
  this->_eventAttribute_k__BackingField = _eventAttribute_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::VFX::VFXOutputEventArgs::VFXOutputEventArgs() {}
