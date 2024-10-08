#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextHandle)
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextHandle);
// Type: UnityEngine.TextCore.Text::TextHandle
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::TextHandle*
class CORDL_TYPE TextHandle : public ::System::Object {
public:
  // Declarations
  /// @brief Field isDirty, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isDirty, put = __cordl_internal_set_isDirty)) bool isDirty;

  /// @brief Field m_LayoutTextInfo, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_LayoutTextInfo, put = setStaticF_m_LayoutTextInfo)) ::UnityEngine::TextCore::Text::TextInfo* m_LayoutTextInfo;

  /// @brief Field m_PreferredSize, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreferredSize, put = __cordl_internal_set_m_PreferredSize)) ::UnityEngine::Vector2 m_PreferredSize;

  /// @brief Field m_PreviousGenerationSettingsHash, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PreviousGenerationSettingsHash, put = __cordl_internal_set_m_PreviousGenerationSettingsHash)) int32_t m_PreviousGenerationSettingsHash;

  /// @brief Field m_TextInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextInfo, put = __cordl_internal_set_m_TextInfo)) ::UnityEngine::TextCore::Text::TextInfo* m_TextInfo;

  /// @brief Field s_LayoutSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_LayoutSettings, put = setStaticF_s_LayoutSettings)) ::UnityEngine::TextCore::Text::TextGenerationSettings* s_LayoutSettings;

  /// @brief Field textGenerationSettings, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_textGenerationSettings,
                      put = __cordl_internal_set_textGenerationSettings)) ::UnityEngine::TextCore::Text::TextGenerationSettings* textGenerationSettings;

  __declspec(property(get = get_textInfo)) ::UnityEngine::TextCore::Text::TextInfo* textInfo;

  /// @brief Method ComputeTextHeight, addr 0x48d48c0, size 0x18, virtual false, abstract: false, final false
  inline float_t ComputeTextHeight(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);

  /// @brief Method ComputeTextWidth, addr 0x48d4834, size 0x18, virtual false, abstract: false, final false
  inline float_t ComputeTextWidth(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);

  /// @brief Method DistanceToLine, addr 0x48d3f30, size 0xc8, virtual false, abstract: false, final false
  static inline float_t DistanceToLine(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 point);

  /// @brief Method FindIntersectingLink, addr 0x48d3ff8, size 0x2c4, virtual false, abstract: false, final false
  inline int32_t FindIntersectingLink(::UnityEngine::Vector3 position, bool inverseYAxis);

  /// @brief Method FindNearestCharacterOnLine, addr 0x48d380c, size 0x2c0, virtual false, abstract: false, final false
  inline int32_t FindNearestCharacterOnLine(::UnityEngine::Vector2 position, int32_t line, bool visibleOnly);

  /// @brief Method FindNearestLine, addr 0x48d373c, size 0xd0, virtual false, abstract: false, final false
  inline int32_t FindNearestLine(::UnityEngine::Vector2 position);

  /// @brief Method GetCharacterHeightFromIndex, addr 0x48d4470, size 0x98, virtual false, abstract: false, final false
  inline float_t GetCharacterHeightFromIndex(int32_t index);

  /// @brief Method GetCursorIndexFromPosition, addr 0x48d3624, size 0x118, virtual false, abstract: false, final false
  inline int32_t GetCursorIndexFromPosition(::UnityEngine::Vector2 position, bool inverseYAxis);

  /// @brief Method GetCursorPositionFromStringIndexUsingCharacterHeight, addr 0x48d3348, size 0x150, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int32_t index, bool inverseYAxis);

  /// @brief Method GetCursorPositionFromStringIndexUsingLineHeight, addr 0x48d3498, size 0x18c, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int32_t index, bool useXAdvance, bool inverseYAxis);

  /// @brief Method GetLineHeight, addr 0x48d434c, size 0x90, virtual false, abstract: false, final false
  inline float_t GetLineHeight(int32_t lineNumber);

  /// @brief Method GetLineHeightFromCharacterIndex, addr 0x48d43dc, size 0x94, virtual false, abstract: false, final false
  inline float_t GetLineHeightFromCharacterIndex(int32_t index);

  /// @brief Method GetLineNumber, addr 0x48d42bc, size 0x90, virtual false, abstract: false, final false
  inline int32_t GetLineNumber(int32_t index);

  /// @brief Method IndexOf, addr 0x48d4680, size 0xe8, virtual false, abstract: false, final false
  inline int32_t IndexOf(char16_t value, int32_t startIndex);

  /// @brief Method IsDirty, addr 0x48d32f8, size 0x50, virtual false, abstract: false, final false
  inline bool IsDirty();

  /// @brief Method IsElided, addr 0x48d4508, size 0x40, virtual false, abstract: false, final false
  inline bool IsElided();

  /// @brief Method LastIndexOf, addr 0x48d4768, size 0xcc, virtual false, abstract: false, final false
  inline int32_t LastIndexOf(char16_t value, int32_t startIndex);

  /// @brief Method LineDownCharacterPosition, addr 0x48d3acc, size 0x1dc, virtual false, abstract: false, final false
  inline int32_t LineDownCharacterPosition(int32_t originalPos);

  /// @brief Method LineUpCharacterPosition, addr 0x48d3ca8, size 0x1c8, virtual false, abstract: false, final false
  inline int32_t LineUpCharacterPosition(int32_t originalPos);

  static inline ::UnityEngine::TextCore::Text::TextHandle* New_ctor();

  /// @brief Method PointIntersectRectangle, addr 0x48d3e70, size 0xc0, virtual false, abstract: false, final false
  static inline bool PointIntersectRectangle(::UnityEngine::Vector3 m, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c, ::UnityEngine::Vector3 d);

  /// @brief Method Substring, addr 0x48d4548, size 0x138, virtual false, abstract: false, final false
  inline ::StringW Substring(int32_t startIndex, int32_t length);

  /// @brief Method Update, addr 0x48d48d8, size 0x6c, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* Update(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);

  /// @brief Method UpdatePreferredValues, addr 0x48d484c, size 0x74, virtual false, abstract: false, final false
  inline void UpdatePreferredValues(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);

  constexpr bool const& __cordl_internal_get_isDirty() const;

  constexpr bool& __cordl_internal_get_isDirty();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PreferredSize() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PreferredSize();

  constexpr int32_t const& __cordl_internal_get_m_PreviousGenerationSettingsHash() const;

  constexpr int32_t& __cordl_internal_get_m_PreviousGenerationSettingsHash();

  constexpr ::UnityEngine::TextCore::Text::TextInfo*& __cordl_internal_get_m_TextInfo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextInfo*> const& __cordl_internal_get_m_TextInfo() const;

  constexpr ::UnityEngine::TextCore::Text::TextGenerationSettings*& __cordl_internal_get_textGenerationSettings();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::TextGenerationSettings*> const& __cordl_internal_get_textGenerationSettings() const;

  constexpr void __cordl_internal_set_isDirty(bool value);

  constexpr void __cordl_internal_set_m_PreferredSize(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_m_PreviousGenerationSettingsHash(int32_t value);

  constexpr void __cordl_internal_set_m_TextInfo(::UnityEngine::TextCore::Text::TextInfo* value);

  constexpr void __cordl_internal_set_textGenerationSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* value);

  /// @brief Method .ctor, addr 0x48d3044, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::TextCore::Text::TextInfo* getStaticF_m_LayoutTextInfo();

  static inline ::UnityEngine::TextCore::Text::TextGenerationSettings* getStaticF_s_LayoutSettings();

  /// @brief Method get_layoutTextInfo, addr 0x48d3240, size 0xb8, virtual false, abstract: false, final false
  static inline ::UnityEngine::TextCore::Text::TextInfo* get_layoutTextInfo();

  /// @brief Method get_textInfo, addr 0x48d30a8, size 0x60, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* get_textInfo();

  static inline void setStaticF_m_LayoutTextInfo(::UnityEngine::TextCore::Text::TextInfo* value);

  static inline void setStaticF_s_LayoutSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextHandle(TextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextHandle(TextHandle const&) = delete;

  /// @brief Field m_PreferredSize, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_PreferredSize;

  /// @brief Field m_TextInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextInfo* ___m_TextInfo;

  /// @brief Field m_PreviousGenerationSettingsHash, offset: 0x20, size: 0x4, def value: None
  int32_t ___m_PreviousGenerationSettingsHash;

  /// @brief Field textGenerationSettings, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::TextGenerationSettings* ___textGenerationSettings;

  /// @brief Field isDirty, offset: 0x30, size: 0x1, def value: None
  bool ___isDirty;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15235 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextHandle, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_PreferredSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_TextInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___m_PreviousGenerationSettingsHash) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___textGenerationSettings) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::TextCore::Text::TextHandle, ___isDirty) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextHandle*, "UnityEngine.TextCore.Text", "TextHandle");
