#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/ATGMeshInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ATGMeshInfo)
namespace System {
template <typename T> struct Span_1;
}
namespace UnityEngine::TextCore::Text {
struct NativeTextElementInfo;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct ATGMeshInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::ATGMeshInfo);
DEFINE_IL2CPP_CLASS(::UnityEngine::TextCore::Text::ATGMeshInfo, "UnityEngine.TextCore.Text", "ATGMeshInfo");
// [NativeHeader("Modules/TextCoreTextEngine/Native/ATGMeshInfo.h")]
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.IntPtr
namespace UnityEngine::TextCore::Text {
// Is value type: true
// CS Name: UnityEngine.TextCore.Text.ATGMeshInfo
struct CORDL_TYPE ATGMeshInfo {
public:
  // Declarations
  __declspec(property(get = get_textElementInfos)) ::System::Span_1<::UnityEngine::TextCore::Text::NativeTextElementInfo> textElementInfos;

  /// @brief Method get_textElementInfos, addr 0x702d5c4, size 0x64, virtual false, abstract: false, final false
  inline ::System::Span_1<::UnityEngine::TextCore::Text::NativeTextElementInfo> get_textElementInfos();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ATGMeshInfo();

  // Ctor Parameters [CppParam { name: "m_TextElementInfosPtr", ty: "::System::IntPtr", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_TextElementCount", ty: "int32_t",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "textAssetId", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr ATGMeshInfo(::System::IntPtr m_TextElementInfosPtr, int32_t m_TextElementCount, int32_t textAssetId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17796 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_TextElementInfosPtr, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_TextElementInfosPtr;

  /// @brief Field m_TextElementCount, offset: 0x8, size: 0x4, def value: None
  int32_t m_TextElementCount;

  /// @brief Field textAssetId, offset: 0xc, size: 0x4, def value: None
  int32_t textAssetId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, m_TextElementInfosPtr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, m_TextElementCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::ATGMeshInfo, textAssetId) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::TextCore::Text::ATGMeshInfo) == 0x10, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
