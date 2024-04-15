#pragma once
#include "UnityEngine/Rendering/zzzz__GlobalKeyword_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::GlobalKeyword.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Rendering::GlobalKeyword::*)()>(&::UnityEngine::Rendering::GlobalKeyword::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3229b34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(), 3));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::Rendering::GlobalKeyword::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::GlobalKeyword>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::GlobalKeyword::GlobalKeyword(::StringW m_Name, uint32_t m_Index) noexcept {
  this->m_Name = m_Name;
  this->m_Index = m_Index;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::GlobalKeyword::GlobalKeyword() {}
