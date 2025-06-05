#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/LigatureSubstitutionRecord.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__LigatureSubstitutionRecord_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord.get_componentGlyphIDs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint32_t, ::Array<uint32_t>*> (::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_componentGlyphIDs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4923924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>::get(), "get_componentGlyphIDs",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord.get_ligatureGlyphID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::*)()>(
    &::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_ligatureGlyphID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x492392c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>::get(), "get_ligatureGlyphID",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::ArrayW<uint32_t, ::Array<uint32_t>*> UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_componentGlyphIDs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>::get(), "get_componentGlyphIDs",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint32_t, ::Array<uint32_t>*>, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::get_ligatureGlyphID() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord>::get(), "get_ligatureGlyphID",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_ComponentGlyphIDs", ty: "::ArrayW<uint32_t,::Array<uint32_t>*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_LigatureGlyphID", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::LigatureSubstitutionRecord(::ArrayW<uint32_t, ::Array<uint32_t>*> m_ComponentGlyphIDs, uint32_t m_LigatureGlyphID) noexcept {
  this->m_ComponentGlyphIDs = m_ComponentGlyphIDs;
  this->m_LigatureGlyphID = m_LigatureGlyphID;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::LowLevel::LigatureSubstitutionRecord::LigatureSubstitutionRecord() {}
