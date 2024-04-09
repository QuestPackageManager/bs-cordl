#pragma once
#include "TMPro/zzzz__TMP_TextElement_impl.hpp"
#include "TMPro/zzzz__TMP_Character_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Character::*)()>(&::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x312c00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Character::*)(uint32_t, ::UnityEngine::TextCore::Glyph*)>(&::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x312c034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Character::*)(uint32_t, ::TMPro::TMP_FontAsset*, ::UnityEngine::TextCore::Glyph*)>(
    &::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x312c088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TMP_Character._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Character::*)(uint32_t, uint32_t)>(&::TMPro::TMP_Character::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x312c0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_Character*>());
}
inline void TMPro::TMP_Character::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_Character*>(unicode, glyph));
}
inline void TMPro::TMP_Character::_ctor(uint32_t unicode, ::UnityEngine::TextCore::Glyph* glyph) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, glyph);
}
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor(uint32_t unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_Character*>(unicode, fontAsset, glyph));
}
inline void TMPro::TMP_Character::_ctor(uint32_t unicode, ::TMPro::TMP_FontAsset* fontAsset, ::UnityEngine::TextCore::Glyph* glyph) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_FontAsset*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::Glyph*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, fontAsset, glyph);
}
inline ::TMPro::TMP_Character* TMPro::TMP_Character::New_ctor(uint32_t unicode, uint32_t glyphIndex) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::TMPro::TMP_Character*>(unicode, glyphIndex));
}
inline void TMPro::TMP_Character::_ctor(uint32_t unicode, uint32_t glyphIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Character*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, unicode, glyphIndex);
}
// Ctor Parameters []
constexpr ::TMPro::TMP_Character::TMP_Character() {}
