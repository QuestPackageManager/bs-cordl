#pragma once
// IWYU pragma private; include "TMPro/GlyphPairKey.hpp"
#include "TMPro/zzzz__GlyphPairKey_def.hpp"
#include "TMPro/zzzz__TMP_GlyphPairAdjustmentRecord_def.hpp"
//  Writing Method size for method: ::TMPro::GlyphPairKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::GlyphPairKey::*)(uint32_t, uint32_t)>(&::TMPro::GlyphPairKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4773a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::GlyphPairKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::GlyphPairKey::*)(::TMPro::TMP_GlyphPairAdjustmentRecord*)>(&::TMPro::GlyphPairKey::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x476b69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_GlyphPairAdjustmentRecord*>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::GlyphPairKey::_ctor(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstGlyphIndex, secondGlyphIndex);
}
inline void TMPro::GlyphPairKey::_ctor(::TMPro::TMP_GlyphPairAdjustmentRecord* record) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphPairKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TMP_GlyphPairAdjustmentRecord*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, record);
}
// Ctor Parameters [CppParam { name: "firstGlyphIndex", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "secondGlyphIndex", ty: "uint32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::GlyphPairKey::GlyphPairKey(uint32_t firstGlyphIndex, uint32_t secondGlyphIndex, uint32_t key) noexcept {
  this->firstGlyphIndex = firstGlyphIndex;
  this->secondGlyphIndex = secondGlyphIndex;
  this->key = key;
}
// Ctor Parameters []
constexpr ::TMPro::GlyphPairKey::GlyphPairKey() {}
