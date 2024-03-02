#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BitmapAllocator32_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__TextCoreSettings_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRVEShaderInfoAllocator)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
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
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine {
struct Color32;
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
struct UIRVEShaderInfoAllocator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator);
// Type: UnityEngine.UIElements.UIR::UIRVEShaderInfoAllocator
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 224, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UnityEngine.UIElements.UIR::UIRVEShaderInfoAllocator
struct CORDL_TYPE UIRVEShaderInfoAllocator {
public:
  // Declarations
  __declspec(property(get = get_atlas))::UnityW<::UnityEngine::Texture> atlas;

  /// @brief Field clearColor, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clearColor, put = setStaticF_clearColor))::UnityEngine::UIElements::UIR::BMPAlloc clearColor;

  /// @brief Field clearColorTexel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_clearColorTexel, put = setStaticF_clearColorTexel))::UnityEngine::Vector2Int clearColorTexel;

  /// @brief Field clearColorValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_clearColorValue, put = setStaticF_clearColorValue))::UnityEngine::Vector4 clearColorValue;

  __declspec(property(get = get_clipRectConstants))::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRectConstants;

  /// @brief Field defaultTextCoreSettings, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultTextCoreSettings, put = setStaticF_defaultTextCoreSettings))::UnityEngine::UIElements::UIR::BMPAlloc defaultTextCoreSettings;

  /// @brief Field defaultTextCoreSettingsTexel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_defaultTextCoreSettingsTexel, put = setStaticF_defaultTextCoreSettingsTexel))::UnityEngine::Vector2Int defaultTextCoreSettingsTexel;

  /// @brief Field defaultTextCoreSettingsValue, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_defaultTextCoreSettingsValue,
                             put = setStaticF_defaultTextCoreSettingsValue))::UnityEngine::UIElements::UIR::TextCoreSettings defaultTextCoreSettingsValue;

  /// @brief Field fullOpacity, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fullOpacity, put = setStaticF_fullOpacity))::UnityEngine::UIElements::UIR::BMPAlloc fullOpacity;

  /// @brief Field fullOpacityTexel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fullOpacityTexel, put = setStaticF_fullOpacityTexel))::UnityEngine::Vector2Int fullOpacityTexel;

  /// @brief Field fullOpacityValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_fullOpacityValue, put = setStaticF_fullOpacityValue))::UnityEngine::Vector4 fullOpacityValue;

  /// @brief Field identityTransform, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_identityTransform, put = setStaticF_identityTransform))::UnityEngine::UIElements::UIR::BMPAlloc identityTransform;

  /// @brief Field identityTransformRow0Value, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_identityTransformRow0Value, put = setStaticF_identityTransformRow0Value))::UnityEngine::Vector4 identityTransformRow0Value;

  /// @brief Field identityTransformRow1Value, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_identityTransformRow1Value, put = setStaticF_identityTransformRow1Value))::UnityEngine::Vector4 identityTransformRow1Value;

  /// @brief Field identityTransformRow2Value, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_identityTransformRow2Value, put = setStaticF_identityTransformRow2Value))::UnityEngine::Vector4 identityTransformRow2Value;

  /// @brief Field identityTransformTexel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_identityTransformTexel, put = setStaticF_identityTransformTexel))::UnityEngine::Vector2Int identityTransformTexel;

  /// @brief Field identityTransformValue, offset 0xffffffff, size 0x40
  static __declspec(property(get = getStaticF_identityTransformValue, put = setStaticF_identityTransformValue))::UnityEngine::Matrix4x4 identityTransformValue;

  /// @brief Field infiniteClipRect, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_infiniteClipRect, put = setStaticF_infiniteClipRect))::UnityEngine::UIElements::UIR::BMPAlloc infiniteClipRect;

  /// @brief Field infiniteClipRectTexel, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_infiniteClipRectTexel, put = setStaticF_infiniteClipRectTexel))::UnityEngine::Vector2Int infiniteClipRectTexel;

  /// @brief Field infiniteClipRectValue, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_infiniteClipRectValue, put = setStaticF_infiniteClipRectValue))::UnityEngine::Vector4 infiniteClipRectValue;

  __declspec(property(get = get_transformConstants))::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transformConstants;

  /// @brief Method AllocClipRect, addr 0x2f987b8, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocClipRect();

  /// @brief Method AllocColor, addr 0x2f988c8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocColor();

  /// @brief Method AllocOpacity, addr 0x2f988a0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocOpacity();

  /// @brief Method AllocTextCoreSettings, addr 0x2f988f0, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocTextCoreSettings(::UnityEngine::UIElements::UIR::TextCoreSettings settings);

  /// @brief Method AllocToConstantBufferIndex, addr 0x2f974a4, size 0x68, virtual false, abstract: false, final false
  static inline int32_t AllocToConstantBufferIndex(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method AllocToTexelCoord, addr 0x2f97454, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2Int AllocToTexelCoord(ByRef<::UnityEngine::UIElements::UIR::BitmapAllocator32> allocator, ::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method AllocTransform, addr 0x2f986d0, size 0xe8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::BMPAlloc AllocTransform();

  /// @brief Method AtlasRectMatchesPage, addr 0x2f9750c, size 0xf8, virtual false, abstract: false, final false
  static inline bool AtlasRectMatchesPage(ByRef<::UnityEngine::UIElements::UIR::BitmapAllocator32> allocator, ::UnityEngine::UIElements::UIR::BMPAlloc defAlloc, ::UnityEngine::RectInt atlasRect);

  /// @brief Method ClipRectAllocToVertexData, addr 0x2f98c7c, size 0x120, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 ClipRectAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method ColorAllocToVertexData, addr 0x2f98e98, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 ColorAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method Construct, addr 0x2f97724, size 0x288, virtual false, abstract: false, final false
  inline void Construct();

  /// @brief Method Dispose, addr 0x2f9857c, size 0xd0, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method FreeClipRect, addr 0x2f9898c, size 0x74, virtual false, abstract: false, final false
  inline void FreeClipRect(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeColor, addr 0x2f98a74, size 0x74, virtual false, abstract: false, final false
  inline void FreeColor(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeOpacity, addr 0x2f98a00, size 0x74, virtual false, abstract: false, final false
  inline void FreeOpacity(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeTextCoreSettings, addr 0x2f98ae8, size 0x74, virtual false, abstract: false, final false
  inline void FreeTextCoreSettings(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method FreeTransform, addr 0x2f98918, size 0x74, virtual false, abstract: false, final false
  inline void FreeTransform(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method IssuePendingStorageChanges, addr 0x2f986b8, size 0x18, virtual false, abstract: false, final false
  inline void IssuePendingStorageChanges();

  /// @brief Method OpacityAllocToVertexData, addr 0x2f98d9c, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 OpacityAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method ReallyCreateStorage, addr 0x2f979ac, size 0x42c, virtual false, abstract: false, final false
  inline void ReallyCreateStorage();

  /// @brief Method SetClipRectValue, addr 0x2f98114, size 0x138, virtual false, abstract: false, final false
  inline void SetClipRectValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Vector4 clipRect);

  /// @brief Method SetColorValue, addr 0x2f98328, size 0xf0, virtual false, abstract: false, final false
  inline void SetColorValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Color color);

  /// @brief Method SetOpacityValue, addr 0x2f9824c, size 0xdc, virtual false, abstract: false, final false
  inline void SetOpacityValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, float_t opacity);

  /// @brief Method SetTextCoreSettingValue, addr 0x2f98418, size 0x164, virtual false, abstract: false, final false
  inline void SetTextCoreSettingValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::UIElements::UIR::TextCoreSettings settings);

  /// @brief Method SetTransformValue, addr 0x2f97f00, size 0x214, virtual false, abstract: false, final false
  inline void SetTransformValue(::UnityEngine::UIElements::UIR::BMPAlloc alloc, ::UnityEngine::Matrix4x4 xform);

  /// @brief Method TextCoreSettingsToVertexData, addr 0x2f98f94, size 0xfc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 TextCoreSettingsToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

  /// @brief Method TransformAllocToVertexData, addr 0x2f98b5c, size 0x120, virtual false, abstract: false, final false
  inline ::UnityEngine::Color32 TransformAllocToVertexData(::UnityEngine::UIElements::UIR::BMPAlloc alloc);

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

  /// @brief Method get_atlas, addr 0x2f97694, size 0x90, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture> get_atlas();

  /// @brief Method get_clipRectConstants, addr 0x2f9764c, size 0x48, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> get_clipRectConstants();

  /// @brief Method get_pageHeight, addr 0x2f9744c, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_pageHeight();

  /// @brief Method get_pageWidth, addr 0x2f97444, size 0x8, virtual false, abstract: false, final false
  static inline int32_t get_pageWidth();

  /// @brief Method get_transformConstants, addr 0x2f97604, size 0x48, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> get_transformConstants();

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

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRVEShaderInfoAllocator();

  // Ctor Parameters [CppParam { name: "m_Storage", ty: "::UnityEngine::UIElements::UIR::BaseShaderInfoStorage*", modifiers: "", def_value: None }, CppParam { name: "m_TransformAllocator", ty:
  // "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_ClipRectAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers:
  // "", def_value: None }, CppParam { name: "m_OpacityAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_ColorAllocator", ty:
  // "::UnityEngine::UIElements::UIR::BitmapAllocator32", modifiers: "", def_value: None }, CppParam { name: "m_TextSettingsAllocator", ty: "::UnityEngine::UIElements::UIR::BitmapAllocator32",
  // modifiers: "", def_value: None }, CppParam { name: "m_StorageReallyCreated", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_VertexTexturingEnabled", ty: "bool", modifiers: "",
  // def_value: None }, CppParam { name: "m_Transforms", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name:
  // "m_ClipRects", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }]
  constexpr UIRVEShaderInfoAllocator(::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* m_Storage, ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_TransformAllocator,
                                     ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_ClipRectAllocator, ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_OpacityAllocator,
                                     ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_ColorAllocator, ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_TextSettingsAllocator,
                                     bool m_StorageReallyCreated, bool m_VertexTexturingEnabled, ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4> m_Transforms,
                                     ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> m_ClipRects) noexcept;

  /// @brief Field m_Storage, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BaseShaderInfoStorage* m_Storage;

  /// @brief Field m_TransformAllocator, offset: 0x8, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_TransformAllocator;

  /// @brief Field m_ClipRectAllocator, offset: 0x28, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_ClipRectAllocator;

  /// @brief Field m_OpacityAllocator, offset: 0x48, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_OpacityAllocator;

  /// @brief Field m_ColorAllocator, offset: 0x68, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_ColorAllocator;

  /// @brief Field m_TextSettingsAllocator, offset: 0x88, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::BitmapAllocator32 m_TextSettingsAllocator;

  /// @brief Field m_StorageReallyCreated, offset: 0xa8, size: 0x1, def value: None
  bool m_StorageReallyCreated;

  /// @brief Field m_VertexTexturingEnabled, offset: 0xa9, size: 0x1, def value: None
  bool m_VertexTexturingEnabled;

  /// @brief Field m_Transforms, offset: 0xb0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::UIR::Transform3x4> m_Transforms;

  /// @brief Field m_ClipRects, offset: 0xc0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> m_ClipRects;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xd0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_Storage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_TransformAllocator) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_ClipRectAllocator) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_OpacityAllocator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_ColorAllocator) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_TextSettingsAllocator) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_StorageReallyCreated) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_VertexTexturingEnabled) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_Transforms) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, m_ClipRects) == 0xc0, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator, "UnityEngine.UIElements.UIR", "UIRVEShaderInfoAllocator");
