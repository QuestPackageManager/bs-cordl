#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ATGMeshInfo.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__ATGMeshInfo_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__NativeTextElementInfo_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::ATGMeshInfo.get_textElementInfos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Span_1<::UnityEngine::TextCore::Text::NativeTextElementInfo> (::UnityEngine::TextCore::Text::ATGMeshInfo::*)()>(
    &::UnityEngine::TextCore::Text::ATGMeshInfo::get_textElementInfos)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x702d5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::ATGMeshInfo>(), { "get_textElementInfos", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Span_1<::UnityEngine::TextCore::Text::NativeTextElementInfo> UnityEngine::TextCore::Text::ATGMeshInfo::get_textElementInfos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TextCore::Text::ATGMeshInfo>(), { "get_textElementInfos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Span_1<::UnityEngine::TextCore::Text::NativeTextElementInfo>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_TextElementInfosPtr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_TextElementCount", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "textAssetId", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::TextCore::Text::ATGMeshInfo::ATGMeshInfo(::System::IntPtr m_TextElementInfosPtr, int32_t m_TextElementCount, int32_t textAssetId) noexcept {
  this->m_TextElementInfosPtr = m_TextElementInfosPtr;
  this->m_TextElementCount = m_TextElementCount;
  this->textAssetId = textAssetId;
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::ATGMeshInfo::ATGMeshInfo() {}
