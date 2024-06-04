#pragma once
// IWYU pragma private; include "TMPro/GlyphValueRecord_Legacy.hpp"
#include "TMPro/zzzz__GlyphValueRecord_Legacy_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphValueRecord_def.hpp"
//  Writing Method size for method: ::TMPro::GlyphValueRecord_Legacy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::GlyphValueRecord_Legacy::*)(::UnityEngine::TextCore::LowLevel::GlyphValueRecord)>(
    &::TMPro::GlyphValueRecord_Legacy::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x336e9f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphValueRecord_Legacy>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::GlyphValueRecord_Legacy.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::TMPro::GlyphValueRecord_Legacy (*)(::TMPro::GlyphValueRecord_Legacy, ::TMPro::GlyphValueRecord_Legacy)>(
    &::TMPro::GlyphValueRecord_Legacy::op_Addition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x336ea58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphValueRecord_Legacy>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::GlyphValueRecord_Legacy>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::GlyphValueRecord_Legacy>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::GlyphValueRecord_Legacy::_ctor(::UnityEngine::TextCore::LowLevel::GlyphValueRecord valueRecord) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphValueRecord_Legacy>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TextCore::LowLevel::GlyphValueRecord>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueRecord);
}
inline ::TMPro::GlyphValueRecord_Legacy TMPro::GlyphValueRecord_Legacy::op_Addition(::TMPro::GlyphValueRecord_Legacy a, ::TMPro::GlyphValueRecord_Legacy b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::GlyphValueRecord_Legacy>::get(), "op_Addition", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::GlyphValueRecord_Legacy>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::GlyphValueRecord_Legacy>::get() })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::GlyphValueRecord_Legacy, false>(nullptr, ___internal_method, a, b);
}
// Ctor Parameters [CppParam { name: "xPlacement", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yPlacement", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "xAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yAdvance", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::GlyphValueRecord_Legacy::GlyphValueRecord_Legacy(float_t xPlacement, float_t yPlacement, float_t xAdvance, float_t yAdvance) noexcept {
  this->xPlacement = xPlacement;
  this->yPlacement = yPlacement;
  this->xAdvance = xAdvance;
  this->yAdvance = yAdvance;
}
// Ctor Parameters []
constexpr ::TMPro::GlyphValueRecord_Legacy::GlyphValueRecord_Legacy() {}
