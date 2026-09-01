#pragma once
// IWYU pragma private; include "UnityEngine\TextCore\Text\CharacterSubstitution.hpp"
#include "UnityEngine/TextCore/Text/zzzz__CharacterSubstitution_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::CharacterSubstitution._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TextCore::Text::CharacterSubstitution::*)(int32_t, uint32_t)>(
    &::UnityEngine::TextCore::Text::CharacterSubstitution::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6c07968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::CharacterSubstitution>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::TextCore::Text::CharacterSubstitution::_ctor(int32_t index, uint32_t unicode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::CharacterSubstitution>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, index, unicode);
}
// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::Text::CharacterSubstitution::CharacterSubstitution(int32_t index, uint32_t unicode) noexcept {
  this->index = index;
  this->unicode = unicode;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::CharacterSubstitution::CharacterSubstitution() {}
