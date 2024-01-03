#pragma once
#include "UnityEngine/TextCore/zzzz__Glyph_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__SpriteGlyph_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::SpriteGlyph._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::TextCore::Text::SpriteGlyph::*)()>(&::UnityEngine::TextCore::Text::SpriteGlyph::_ctor)> {
  constexpr static std::size_t size = 0x1008;
  constexpr static std::size_t addrs = 0x2d4cab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::SpriteGlyph*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Sprite*& UnityEngine::TextCore::Text::SpriteGlyph::__get_sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& UnityEngine::TextCore::Text::SpriteGlyph::__get_sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sprite;
}
constexpr void UnityEngine::TextCore::Text::SpriteGlyph::__set_sprite(::UnityEngine::Sprite* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::TextCore::Text::SpriteGlyph* UnityEngine::TextCore::Text::SpriteGlyph::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::TextCore::Text::SpriteGlyph*>());
}
inline void UnityEngine::TextCore::Text::SpriteGlyph::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::SpriteGlyph*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::SpriteGlyph::SpriteGlyph() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
