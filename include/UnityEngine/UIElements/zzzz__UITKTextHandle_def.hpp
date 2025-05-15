#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UITKTextHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/Text/zzzz__TextHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UITKTextHandle)
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextOverflowMode;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerOutEvent;
}
namespace UnityEngine::UIElements {
class PointerOverEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class TextElement;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UITKTextHandle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UITKTextHandle);
// Dependencies UnityEngine.TextCore.Text.TextHandle, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UITKTextHandle
class CORDL_TYPE UITKTextHandle : public ::UnityEngine::TextCore::Text::TextHandle {
public:
  // Declarations
  __declspec(property(get = get_MeasuredSizes, put = set_MeasuredSizes)) ::UnityEngine::Vector2 MeasuredSizes;

  __declspec(property(get = get_RoundedSizes, put = set_RoundedSizes)) ::UnityEngine::Vector2 RoundedSizes;

  /// @brief Field <MeasuredSizes>k__BackingField, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get__MeasuredSizes_k__BackingField, put = __cordl_internal_set__MeasuredSizes_k__BackingField)) ::UnityEngine::Vector2 _MeasuredSizes_k__BackingField;

  /// @brief Field <RoundedSizes>k__BackingField, offset 0x3c, size 0x8
  __declspec(property(get = __cordl_internal_get__RoundedSizes_k__BackingField, put = __cordl_internal_set__RoundedSizes_k__BackingField)) ::UnityEngine::Vector2 _RoundedSizes_k__BackingField;

  /// @brief Field currentLinkIDHash, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_currentLinkIDHash, put = __cordl_internal_set_currentLinkIDHash)) int32_t currentLinkIDHash;

  /// @brief Field hasATag, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_hasATag, put = __cordl_internal_set_hasATag)) bool hasATag;

  /// @brief Field hasLinkTag, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_hasLinkTag, put = __cordl_internal_set_hasLinkTag)) bool hasLinkTag;

  /// @brief Field isOverridingCursor, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_isOverridingCursor, put = __cordl_internal_set_isOverridingCursor)) bool isOverridingCursor;

  /// @brief Field k_MinPadding, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_k_MinPadding, put = setStaticF_k_MinPadding)) float_t k_MinPadding;

  /// @brief Field m_TextElement, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextElement, put = __cordl_internal_set_m_TextElement)) ::UnityEngine::UIElements::TextElement* m_TextElement;

  /// @brief Method ATagOnPointerMove, addr 0x4a94d3c, size 0x2b8, virtual false, abstract: false, final false
  inline void ATagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);

  /// @brief Method ATagOnPointerOut, addr 0x4a94ff4, size 0x8, virtual false, abstract: false, final false
  inline void ATagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* _);

  /// @brief Method ATagOnPointerOver, addr 0x4a94d34, size 0x8, virtual false, abstract: false, final false
  inline void ATagOnPointerOver(::UnityEngine::UIElements::PointerOverEvent* _);

  /// @brief Method ATagOnPointerUp, addr 0x4a94b98, size 0x19c, virtual false, abstract: false, final false
  inline void ATagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);

  /// @brief Method ComputeTextHeight, addr 0x4a940cc, size 0xac, virtual false, abstract: false, final false
  inline float_t ComputeTextHeight(::StringW textToMeasure, float_t width, float_t height);

  /// @brief Method ComputeTextWidth, addr 0x4a93d08, size 0xbc, virtual false, abstract: false, final false
  inline float_t ComputeTextWidth(::StringW textToMeasure, bool wordWrap, float_t width, float_t height);

  /// @brief Method ConvertUssToTextGenerationSettings, addr 0x4a93dc4, size 0x308, virtual false, abstract: false, final false
  inline void ConvertUssToTextGenerationSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);

  /// @brief Method GetTextEffectPadding, addr 0x4a96198, size 0x1b0, virtual false, abstract: false, final false
  inline float_t GetTextEffectPadding(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetTextOverflowMode, addr 0x4a95e44, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextOverflowMode GetTextOverflowMode();

  /// @brief Method HandleATag, addr 0x4a94260, size 0x528, virtual false, abstract: false, final false
  inline void HandleATag();

  /// @brief Method HandleLinkTag, addr 0x4a94788, size 0x410, virtual false, abstract: false, final false
  inline void HandleLinkTag();

  /// @brief Method LinkTagOnPointerDown, addr 0x4a94ffc, size 0x2f8, virtual false, abstract: false, final false
  inline void LinkTagOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* pde);

  /// @brief Method LinkTagOnPointerMove, addr 0x4a955ec, size 0x648, virtual false, abstract: false, final false
  inline void LinkTagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);

  /// @brief Method LinkTagOnPointerOut, addr 0x4a95c34, size 0x210, virtual false, abstract: false, final false
  inline void LinkTagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* poe);

  /// @brief Method LinkTagOnPointerUp, addr 0x4a952f4, size 0x2f8, virtual false, abstract: false, final false
  inline void LinkTagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);

  static inline ::UnityEngine::UIElements::UITKTextHandle* New_ctor(::UnityEngine::UIElements::TextElement* te);

  /// @brief Method TextLibraryCanElide, addr 0x4a95ee8, size 0x30, virtual false, abstract: false, final false
  inline bool TextLibraryCanElide();

  /// @brief Method Update, addr 0x4a94178, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::TextCore::Text::TextInfo* Update();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__MeasuredSizes_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__MeasuredSizes_k__BackingField();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__RoundedSizes_k__BackingField() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__RoundedSizes_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_currentLinkIDHash() const;

  constexpr int32_t& __cordl_internal_get_currentLinkIDHash();

  constexpr bool const& __cordl_internal_get_hasATag() const;

  constexpr bool& __cordl_internal_get_hasATag();

  constexpr bool const& __cordl_internal_get_hasLinkTag() const;

  constexpr bool& __cordl_internal_get_hasLinkTag();

  constexpr bool const& __cordl_internal_get_isOverridingCursor() const;

  constexpr bool& __cordl_internal_get_isOverridingCursor();

  constexpr ::UnityEngine::UIElements::TextElement* const& __cordl_internal_get_m_TextElement() const;

  constexpr ::UnityEngine::UIElements::TextElement*& __cordl_internal_get_m_TextElement();

  constexpr void __cordl_internal_set__MeasuredSizes_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__RoundedSizes_k__BackingField(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_currentLinkIDHash(int32_t value);

  constexpr void __cordl_internal_set_hasATag(bool value);

  constexpr void __cordl_internal_set_hasLinkTag(bool value);

  constexpr void __cordl_internal_set_isOverridingCursor(bool value);

  constexpr void __cordl_internal_set_m_TextElement(::UnityEngine::UIElements::TextElement* value);

  /// @brief Method .ctor, addr 0x4a93c6c, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextElement* te);

  static inline float_t getStaticF_k_MinPadding();

  /// @brief Method get_MeasuredSizes, addr 0x4a93ce8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_MeasuredSizes();

  /// @brief Method get_RoundedSizes, addr 0x4a93cf8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_RoundedSizes();

  static inline void setStaticF_k_MinPadding(float_t value);

  /// @brief Method set_MeasuredSizes, addr 0x4a93cf0, size 0x8, virtual false, abstract: false, final false
  inline void set_MeasuredSizes(::UnityEngine::Vector2 value);

  /// @brief Method set_RoundedSizes, addr 0x4a93d00, size 0x8, virtual false, abstract: false, final false
  inline void set_RoundedSizes(::UnityEngine::Vector2 value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UITKTextHandle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UITKTextHandle(UITKTextHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UITKTextHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UITKTextHandle(UITKTextHandle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6201 };

  /// @brief Field <MeasuredSizes>k__BackingField, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____MeasuredSizes_k__BackingField;

  /// @brief Field <RoundedSizes>k__BackingField, offset: 0x3c, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____RoundedSizes_k__BackingField;

  /// @brief Field m_TextElement, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextElement* ___m_TextElement;

  /// @brief Field isOverridingCursor, offset: 0x50, size: 0x1, def value: None
  bool ___isOverridingCursor;

  /// @brief Field currentLinkIDHash, offset: 0x54, size: 0x4, def value: None
  int32_t ___currentLinkIDHash;

  /// @brief Field hasLinkTag, offset: 0x58, size: 0x1, def value: None
  bool ___hasLinkTag;

  /// @brief Field hasATag, offset: 0x59, size: 0x1, def value: None
  bool ___hasATag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____MeasuredSizes_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ____RoundedSizes_k__BackingField) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___m_TextElement) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___isOverridingCursor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___currentLinkIDHash) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___hasLinkTag) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UITKTextHandle, ___hasATag) == 0x59, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UITKTextHandle, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::UITKTextHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextHandle*, "UnityEngine.UIElements", "UITKTextHandle");
