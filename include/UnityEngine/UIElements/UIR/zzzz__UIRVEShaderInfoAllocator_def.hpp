#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRVEShaderInfoAllocator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRVEShaderInfoAllocator)
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements::UIR {
class BaseShaderInfoStorage;
}
namespace UnityEngine::UIElements::UIR {
struct BitmapAllocator32;
}
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class UIRVEShaderInfoAllocator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator);
// Dependencies System.Object, UnityEngine.ColorSpace, UnityEngine.Matrix4x4, UnityEngine.UIElements.UIR.BMPAlloc, UnityEngine.UIElements.UIR.BitmapAllocator32,
// UnityEngine.UIElements.UIR.TextCoreSettings, UnityEngine.Vector2Int, UnityEngine.Vector4
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
class CORDL_TYPE UIRVEShaderInfoAllocator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_atlas)) ::UnityW<::UnityEngine::Texture> atlas;

  /// @brief Field clearColor, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_clearColor, put = setStaticF_clearColor)) ::UnityEngine::UIElements::UIR::BMPAlloc clearColor;

  /// @brief Field clearColorTexel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_clearColorTexel, put = setStaticF_clearColorTexel)) ::UnityEngine::Vector2Int clearColorTexel;

  /// @brief Field clearColorValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_clearColorValue, put = setStaticF_clearColorValue)) ::UnityEngine::Vector4 clearColorValue;

  /// @brief Field defaultTextCoreSettings, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultTextCoreSettings, put = setStaticF_defaultTextCoreSettings)) ::UnityEngine::UIElements::UIR::BMPAlloc defaultTextCoreSettings;

  /// @brief Field defaultTextCoreSettingsTexel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultTextCoreSettingsTexel, put = setStaticF_defaultTextCoreSettingsTexel)) ::UnityEngine::Vector2Int defaultTextCoreSettingsTexel;

  /// @brief Field defaultTextCoreSettingsValue, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_defaultTextCoreSettingsValue, put = setStaticF_defaultTextCoreSettingsValue)) ::UnityEngine::UIElements::UIR::TextCoreSettings defaultTextCoreSettingsValue;

  /// @brief Field fullOpacity, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_fullOpacity, put = setStaticF_fullOpacity)) ::UnityEngine::UIElements::UIR::BMPAlloc fullOpacity;

  /// @brief Field fullOpacityTexel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_fullOpacityTexel, put = setStaticF_fullOpacityTexel)) ::UnityEngine::Vector2Int fullOpacityTexel;

  /// @brief Field fullOpacityValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_fullOpacityValue, put = setStaticF_fullOpacityValue)) ::UnityEngine::Vector4 fullOpacityValue;

  /// @brief Field identityTransform, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_identityTransform, put = setStaticF_identityTransform)) ::UnityEngine::UIElements::UIR::BMPAlloc identityTransform;

  /// @brief Field identityTransformRow0Value, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identityTransformRow0Value, put = setStaticF_identityTransformRow0Value)) ::UnityEngine::Vector4 identityTransformRow0Value;

  /// @brief Field identityTransformRow1Value, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identityTransformRow1Value, put = setStaticF_identityTransformRow1Value)) ::UnityEngine::Vector4 identityTransformRow1Value;

  /// @brief Field identityTransformRow2Value, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_identityTransformRow2Value, put = setStaticF_identityTransformRow2Value)) ::UnityEngine::Vector4 identityTransformRow2Value;

  /// @brief Field identityTransformTexel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_identityTransformTexel, put = setStaticF_identityTransformTexel)) ::UnityEngine::Vector2Int identityTransformTexel;

  /// @brief Field identityTransformValue, offset 0xffffffff, size 0x40
  __declspec(property(get = getStaticF_identityTransformValue, put = setStaticF_identityTransformValue)) ::UnityEngine::Matrix4x4 identityTransformValue;

  /// @brief Field infiniteClipRect, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_infiniteClipRect, put = setStaticF_infiniteClipRect)) ::UnityEngine::UIElements::UIR::BMPAlloc infiniteClipRect;

  /// @brief Field infiniteClipRectTexel, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_infiniteClipRectTexel, put = setStaticF_infiniteClipRectTexel)) ::UnityEngine::Vector2Int infiniteClipRectTexel;

  /// @brief Field infiniteClipRectValue, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_infiniteClipRectValue, put = setStaticF_infiniteClipRectValue)) ::UnityEngine::Vector4 infiniteClipRectValue;

  /// @brief Field m_ClipRectAllocator, offset 0x38, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ClipRectAllocator, put = __cordl_internal_set_m_ClipRectAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_ClipRectAllocator;

  /// @brief Field m_ColorAllocator, offset 0x78, size 0x20
  __declspec(property(get = __cordl_internal_get_m_ColorAllocator, put = __cordl_internal_set_m_ColorAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_ColorAllocator;

  /// @brief Field m_ColorSpace, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ColorSpace, put = __cordl_internal_set_m_ColorSpace)) ::UnityEngine::ColorSpace m_ColorSpace;

  /// @brief Field m_OpacityAllocator, offset 0x58, size 0x20
  __declspec(property(get = __cordl_internal_get_m_OpacityAllocator, put = __cordl_internal_set_m_OpacityAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_OpacityAllocator;

  /// @brief Field m_Storage, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Storage, put = __cordl_internal_set_m_Storage)) ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* m_Storage;

  /// @brief Field m_StorageReallyCreated, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StorageReallyCreated, put = __cordl_internal_set_m_StorageReallyCreated)) bool m_StorageReallyCreated;

  /// @brief Field m_TextSettingsAllocator, offset 0x98, size 0x20
  __declspec(property(get = __cordl_internal_get_m_TextSettingsAllocator,
                      put = __cordl_internal_set_m_TextSettingsAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_TextSettingsAllocator;

  /// @brief Field m_TransformAllocator, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_m_TransformAllocator, put = __cordl_internal_set_m_TransformAllocator)) ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_TransformAllocator;

  /// @brief Field s_DefaultShaderInfoTexture, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultShaderInfoTexture, put = setStaticF_s_DefaultShaderInfoTexture)) ::UnityW<::UnityEngine::Texture2D> s_DefaultShaderInfoTexture;

  /// @brief Field s_DefaultShaderInfoTextureRefCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_DefaultShaderInfoTextureRefCount, put = setStaticF_s_DefaultShaderInfoTextureRefCount)) int32_t s_DefaultShaderInfoTextureRefCount;

  /// @brief Method AcquireDefaultShaderInfoTexture, addr 0x6ac0240, size 0x2c4, virtual false, abstract: false, final false
  static inline void AcquireDefaultShaderInfoTexture();

  /// @brief Method AllocClipRect, addr 0x6abb544, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocClipRect();

  /// @brief Method AllocColor, addr 0x6abc708, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocColor();

  /// @brief Method AllocOpacity, addr 0x6abb5a4, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocOpacity();

  /// @brief Method AllocTextCoreSettings, addr 0x6abc048, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocTextCoreSettings(::UnityEngine::UIElements::UIR::TextCoreSettings settings);

  /// @brief Method AllocToTexelCoord, addr 0x6ac05c4, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int AllocToTexelCoord(::ByRef<::UnityEngine::UIElements::UIR::BitmapAllocator32> allocator, ::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method AllocTransform, addr 0x6ab9a44, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocTransform();

  /// @brief Method AtlasRectMatchesPage, addr 0x6ac0614, size 0x170, virtual false, abstract: false, final false
  static inline bool AtlasRectMatchesPage(::ByRef<::UnityEngine::UIElements::UIR::BitmapAllocator32> allocator, ::UnityEngine::UIElements::UIR::BMPAlloc defAlloc, ::UnityEngine::RectInt atlasRect);

  /// @brief Method ClipRectAllocToVertexData, addr 0x6ac0e7c, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 ClipRectAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method ColorAllocToVertexData, addr 0x6ac1074, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 ColorAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method Dispose, addr 0x6ac0d00, size 0x68, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FreeClipRect, addr 0x6abac5c, size 0xa0, virtual false, abstract: false, final false
  inline void FreeClipRect(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeColor, addr 0x6ababbc, size 0xa0, virtual false, abstract: false, final false
  inline void FreeColor(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeOpacity, addr 0x6abab1c, size 0xa0, virtual false, abstract: false, final false
  inline void FreeOpacity(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeTextCoreSettings, addr 0x6abaa7c, size 0xa0, virtual false, abstract: false, final false
  inline void FreeTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeTransform, addr 0x6abacfc, size 0xa0, virtual false, abstract: false, final false
  inline void FreeTransform(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method IssuePendingStorageChanges, addr 0x6ac0d68, size 0x18, virtual false, abstract: false, final false
  inline void IssuePendingStorageChanges();

  static inline ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator* New_ctor(::UnityEngine::ColorSpace colorSpace);

  /// @brief Method OpacityAllocToVertexData, addr 0x6ac0f78, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 OpacityAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method ReallyCreateStorage, addr 0x6ac0948, size 0x3b8, virtual false, abstract: false, final false
  inline void ReallyCreateStorage();

  /// @brief Method ReleaseDefaultShaderInfoTexture, addr 0x6ac0504, size 0xc0, virtual false, abstract: false, final false
  static inline void ReleaseDefaultShaderInfoTexture();

  /// @brief Method SetClipRectValue, addr 0x6abb920, size 0x11c, virtual false, abstract: false, final false
  inline void SetClipRectValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Vector4 clipRect);

  /// @brief Method SetColorValue, addr 0x6abc730, size 0x1a4, virtual false, abstract: false, final false
  inline void SetColorValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Color color);

  /// @brief Method SetOpacityValue, addr 0x6abb5cc, size 0x108, virtual false, abstract: false, final false
  inline void SetOpacityValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, float_t opacity);

  /// @brief Method SetTextCoreSettingValue, addr 0x6abc070, size 0x3a0, virtual false, abstract: false, final false
  inline void SetTextCoreSettingValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::UIElements::UIR::TextCoreSettings settings);

  /// @brief Method SetTransformValue, addr 0x6aba490, size 0x168, virtual false, abstract: false, final false
  inline void SetTransformValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Matrix4x4 xform);

  /// @brief Method TextCoreSettingsToVertexData, addr 0x6ac1170, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 TextCoreSettingsToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method TransformAllocToVertexData, addr 0x6ac0d80, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 TransformAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __cordl_internal_get_m_ClipRectAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __cordl_internal_get_m_ClipRectAllocator();

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __cordl_internal_get_m_ColorAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __cordl_internal_get_m_ColorAllocator();

  constexpr ::UnityEngine::ColorSpace const& __cordl_internal_get_m_ColorSpace() const;

  constexpr ::UnityEngine::ColorSpace& __cordl_internal_get_m_ColorSpace();

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __cordl_internal_get_m_OpacityAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __cordl_internal_get_m_OpacityAllocator();

  constexpr ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* const& __cordl_internal_get_m_Storage() const;

  constexpr ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*& __cordl_internal_get_m_Storage();

  constexpr bool const& __cordl_internal_get_m_StorageReallyCreated() const;

  constexpr bool& __cordl_internal_get_m_StorageReallyCreated();

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __cordl_internal_get_m_TextSettingsAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __cordl_internal_get_m_TextSettingsAllocator();

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32 const& __cordl_internal_get_m_TransformAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::BitmapAllocator32& __cordl_internal_get_m_TransformAllocator();

  constexpr void __cordl_internal_set_m_ClipRectAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value);

  constexpr void __cordl_internal_set_m_ColorAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value);

  constexpr void __cordl_internal_set_m_ColorSpace(::UnityEngine::ColorSpace value);

  constexpr void __cordl_internal_set_m_OpacityAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value);

  constexpr void __cordl_internal_set_m_Storage(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* value);

  constexpr void __cordl_internal_set_m_StorageReallyCreated(bool value);

  constexpr void __cordl_internal_set_m_TextSettingsAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value);

  constexpr void __cordl_internal_set_m_TransformAllocator(::UnityEngine::UIElements::UIR::BitmapAllocator32 value);

  /// @brief Method .ctor, addr 0x6ac080c, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ColorSpace colorSpace);

  static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_clearColor();

  static inline ::UnityEngine::Vector2Int getStaticF_clearColorTexel();

  static inline ::UnityEngine::Vector4 getStaticF_clearColorValue();

  static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_defaultTextCoreSettings();

  static inline ::UnityEngine::Vector2Int getStaticF_defaultTextCoreSettingsTexel();

  static inline ::UnityEngine::UIElements::UIR::TextCoreSettings getStaticF_defaultTextCoreSettingsValue();

  static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_fullOpacity();

  static inline ::UnityEngine::Vector2Int getStaticF_fullOpacityTexel();

  static inline ::UnityEngine::Vector4 getStaticF_fullOpacityValue();

  static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_identityTransform();

  static inline ::UnityEngine::Vector4 getStaticF_identityTransformRow0Value();

  static inline ::UnityEngine::Vector4 getStaticF_identityTransformRow1Value();

  static inline ::UnityEngine::Vector4 getStaticF_identityTransformRow2Value();

  static inline ::UnityEngine::Vector2Int getStaticF_identityTransformTexel();

  static inline ::UnityEngine::Matrix4x4 getStaticF_identityTransformValue();

  static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_infiniteClipRect();

  static inline ::UnityEngine::Vector2Int getStaticF_infiniteClipRectTexel();

  static inline ::UnityEngine::Vector4 getStaticF_infiniteClipRectValue();

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_s_DefaultShaderInfoTexture();

  static inline int32_t getStaticF_s_DefaultShaderInfoTextureRefCount();

  /// @brief Method get_atlas, addr 0x6ac0784, size 0x88, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_atlas();

  /// @brief Method get_pageHeight, addr 0x6ac0238, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_pageHeight();

  /// @brief Method get_pageWidth, addr 0x6ac0230, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_pageWidth();

  static inline void setStaticF_clearColor(::UnityEngine::UIElements::UIR::BMPAlloc value);

  static inline void setStaticF_clearColorTexel(::UnityEngine::Vector2Int value);

  static inline void setStaticF_clearColorValue(::UnityEngine::Vector4 value);

  static inline void setStaticF_defaultTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc value);

  static inline void setStaticF_defaultTextCoreSettingsTexel(::UnityEngine::Vector2Int value);

  static inline void setStaticF_defaultTextCoreSettingsValue(::UnityEngine::UIElements::UIR::TextCoreSettings value);

  static inline void setStaticF_fullOpacity(::UnityEngine::UIElements::UIR::BMPAlloc value);

  static inline void setStaticF_fullOpacityTexel(::UnityEngine::Vector2Int value);

  static inline void setStaticF_fullOpacityValue(::UnityEngine::Vector4 value);

  static inline void setStaticF_identityTransform(::UnityEngine::UIElements::UIR::BMPAlloc value);

  static inline void setStaticF_identityTransformRow0Value(::UnityEngine::Vector4 value);

  static inline void setStaticF_identityTransformRow1Value(::UnityEngine::Vector4 value);

  static inline void setStaticF_identityTransformRow2Value(::UnityEngine::Vector4 value);

  static inline void setStaticF_identityTransformTexel(::UnityEngine::Vector2Int value);

  static inline void setStaticF_identityTransformValue(::UnityEngine::Matrix4x4 value);

  static inline void setStaticF_infiniteClipRect(::UnityEngine::UIElements::UIR::BMPAlloc value);

  static inline void setStaticF_infiniteClipRectTexel(::UnityEngine::Vector2Int value);

  static inline void setStaticF_infiniteClipRectValue(::UnityEngine::Vector4 value);

  static inline void setStaticF_s_DefaultShaderInfoTexture(::UnityW<::UnityEngine::Texture2D> value);

  static inline void setStaticF_s_DefaultShaderInfoTextureRefCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRVEShaderInfoAllocator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRVEShaderInfoAllocator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRVEShaderInfoAllocator(UIRVEShaderInfoAllocator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRVEShaderInfoAllocator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRVEShaderInfoAllocator(UIRVEShaderInfoAllocator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5359 };

  /// @brief Field m_Storage, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* ___m_Storage;

  /// @brief Field m_TransformAllocator, offset: 0x18, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 ___m_TransformAllocator;

  /// @brief Field m_ClipRectAllocator, offset: 0x38, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 ___m_ClipRectAllocator;

  /// @brief Field m_OpacityAllocator, offset: 0x58, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 ___m_OpacityAllocator;

  /// @brief Field m_ColorAllocator, offset: 0x78, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 ___m_ColorAllocator;

  /// @brief Field m_TextSettingsAllocator, offset: 0x98, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 ___m_TextSettingsAllocator;

  /// @brief Field m_StorageReallyCreated, offset: 0xb8, size: 0x1, def value: None
  bool ___m_StorageReallyCreated;

  /// @brief Field m_ColorSpace, offset: 0xbc, size: 0x4, def value: None
  ::UnityEngine::ColorSpace ___m_ColorSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_Storage) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_TransformAllocator) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_ClipRectAllocator) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_OpacityAllocator) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_ColorAllocator) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_TextSettingsAllocator) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_StorageReallyCreated) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, ___m_ColorSpace) == 0xbc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, 0xc0>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator*, "UnityEngine.UIElements.UIR", "UIRVEShaderInfoAllocator");
