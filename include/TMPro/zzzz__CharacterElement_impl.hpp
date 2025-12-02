#pragma once
// IWYU pragma private; include "TMPro/CharacterElement.hpp"
#include "TMPro/zzzz__CharacterElement_def.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
//  Writing Method size for method: ::TMPro::CharacterElement.get_Unicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::TMPro::CharacterElement::*)()>(&::TMPro::CharacterElement::get_Unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67869b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CharacterElement>::get(), "get_Unicode",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::CharacterElement.set_Unicode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::CharacterElement::*)(uint32_t)>(&::TMPro::CharacterElement::set_Unicode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x67869c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CharacterElement>::get(), "set_Unicode", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::CharacterElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::CharacterElement::*)(::TMPro::TMP_TextElement*)>(&::TMPro::CharacterElement::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x67869c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CharacterElement>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_TextElement*>::get() })));
    return ___internal_method;
  }
};
inline uint32_t TMPro::CharacterElement::get_Unicode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CharacterElement>::get(), "get_Unicode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void TMPro::CharacterElement::set_Unicode(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CharacterElement>::get(), "set_Unicode", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void TMPro::CharacterElement::_ctor(::TMPro::TMP_TextElement* textElement) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::CharacterElement>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_TextElement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, textElement);
}
// Ctor Parameters [CppParam { name: "m_Unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_TextElement", ty: "::TMPro::TMP_TextElement*", modifiers: "", def_value:
// Some("{}") }]
constexpr ::TMPro::CharacterElement::CharacterElement(uint32_t m_Unicode, ::TMPro::TMP_TextElement* m_TextElement) noexcept {
  this->m_Unicode = m_Unicode;
  this->m_TextElement = m_TextElement;
}
// Ctor Parameters []
constexpr ::TMPro::CharacterElement::CharacterElement() {}
