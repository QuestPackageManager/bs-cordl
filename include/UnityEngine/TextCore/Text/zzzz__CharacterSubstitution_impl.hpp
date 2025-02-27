#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/CharacterSubstitution.hpp"
#include "UnityEngine/TextCore/Text/zzzz__CharacterSubstitution_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::CharacterSubstitution._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::CharacterSubstitution::*)(int32_t, uint32_t)>(
    &::UnityEngine::TextCore::Text::CharacterSubstitution::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4956954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::CharacterSubstitution>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::CharacterSubstitution::_ctor(int32_t index, uint32_t unicode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::CharacterSubstitution>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index, unicode);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::CharacterSubstitution::CharacterSubstitution(int32_t index, uint32_t unicode) noexcept {
  this->index = index;
  this->unicode = unicode;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::CharacterSubstitution::CharacterSubstitution() {}
