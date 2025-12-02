#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPHelpURLAttribute.hpp"
#include "UnityEngine/Rendering/zzzz__CoreRPHelpURLAttribute_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__URPHelpURLAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::URPHelpURLAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::Universal::URPHelpURLAttribute::*)(::StringW, ::StringW)>(
    &::UnityEngine::Rendering::Universal::URPHelpURLAttribute::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6654b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPHelpURLAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::URPHelpURLAttribute::_ctor(::StringW pageName, ::StringW pageHash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::Universal::URPHelpURLAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pageName, pageHash);
}
inline ::UnityEngine::Rendering::Universal::URPHelpURLAttribute* UnityEngine::Rendering::Universal::URPHelpURLAttribute::New_ctor(::StringW pageName, ::StringW pageHash) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::Universal::URPHelpURLAttribute*>(pageName, pageHash));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::URPHelpURLAttribute::URPHelpURLAttribute() {}
