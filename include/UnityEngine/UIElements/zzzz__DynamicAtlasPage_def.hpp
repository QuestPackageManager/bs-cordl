#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DynamicAtlasPage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasPage)
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements::UIR {
struct Allocator2D_Alloc2D;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D;
}
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2Int;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasPage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DynamicAtlasPage);
// Dependencies System.Object, UnityEngine.FilterMode, UnityEngine.RenderTextureFormat, UnityEngine.UIElements.TextureId, UnityEngine.Vector2Int
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DynamicAtlasPage
class CORDL_TYPE DynamicAtlasPage : public ::System::Object {
public:
  // Declarations
  /// @brief Field <atlas>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__atlas_k__BackingField, put = __cordl_internal_set__atlas_k__BackingField)) ::UnityW<::UnityEngine::RenderTexture> _atlas_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <filterMode>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__filterMode_k__BackingField, put = __cordl_internal_set__filterMode_k__BackingField)) ::UnityEngine::FilterMode _filterMode_k__BackingField;

  /// @brief Field <format>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__format_k__BackingField, put = __cordl_internal_set__format_k__BackingField)) ::UnityEngine::RenderTextureFormat _format_k__BackingField;

  /// @brief Field <maxSize>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__maxSize_k__BackingField, put = __cordl_internal_set__maxSize_k__BackingField)) ::UnityEngine::Vector2Int _maxSize_k__BackingField;

  /// @brief Field <minSize>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__minSize_k__BackingField, put = __cordl_internal_set__minSize_k__BackingField)) ::UnityEngine::Vector2Int _minSize_k__BackingField;

  /// @brief Field <textureId>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__textureId_k__BackingField, put = __cordl_internal_set__textureId_k__BackingField)) ::UnityEngine::UIElements::TextureId _textureId_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas)) ::UnityW<::UnityEngine::RenderTexture> atlas;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_filterMode)) ::UnityEngine::FilterMode filterMode;

  __declspec(property(get = get_format)) ::UnityEngine::RenderTextureFormat format;

  /// @brief Field m_1Padding, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_1Padding, put = __cordl_internal_set_m_1Padding)) int32_t m_1Padding;

  /// @brief Field m_2Padding, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_2Padding, put = __cordl_internal_set_m_2Padding)) int32_t m_2Padding;

  /// @brief Field m_Allocator, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Allocator, put = __cordl_internal_set_m_Allocator)) ::UnityEngine::UIElements::UIR::Allocator2D* m_Allocator;

  /// @brief Field m_Blitter, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Blitter, put = __cordl_internal_set_m_Blitter)) ::UnityEngine::UIElements::UIR::TextureBlitter* m_Blitter;

  /// @brief Field m_CurrentSize, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentSize, put = __cordl_internal_set_m_CurrentSize)) ::UnityEngine::Vector2Int m_CurrentSize;

  /// @brief Field s_TextureCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_TextureCounter, put = setStaticF_s_TextureCounter)) int32_t s_TextureCounter;

  __declspec(property(get = get_textureId, put = set_textureId)) ::UnityEngine::UIElements::TextureId textureId;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Commit, addr 0x6b89f94, size 0x44, virtual false, abstract: false, final false
  inline void Commit();

  /// @brief Method CreateAtlasTexture, addr 0x6b8a348, size 0x134, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> CreateAtlasTexture();

  /// @brief Method Dispose, addr 0x6b89810, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6b89880, size 0x20c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  static inline ::UnityEngine::UIElements::DynamicAtlasPage* New_ctor(::UnityEngine::RenderTextureFormat format, ::UnityEngine::FilterMode filterMode, ::UnityEngine::Vector2Int minSize,
                                                                      ::UnityEngine::Vector2Int maxSize);

  /// @brief Method Remove, addr 0x6b89eb4, size 0xe0, virtual false, abstract: false, final false
  inline void Remove(::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D alloc);

  /// @brief Method TryAdd, addr 0x6b89a8c, size 0x2d0, virtual false, abstract: false, final false
  inline bool TryAdd(::UnityEngine::Texture2D* image, ::ByRef<::UnityEngine::UIElements::UIR::Allocator2D_Alloc2D> alloc, ::ByRef<::UnityEngine::RectInt> rect);

  /// @brief Method Update, addr 0x6b89d5c, size 0x158, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::Texture2D* image, ::UnityEngine::RectInt rect);

  /// @brief Method UpdateAtlasTexture, addr 0x6b89fd8, size 0x370, virtual false, abstract: false, final false
  inline void UpdateAtlasTexture();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get__atlas_k__BackingField() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get__atlas_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr ::UnityEngine::FilterMode const& __cordl_internal_get__filterMode_k__BackingField() const;

  constexpr ::UnityEngine::FilterMode& __cordl_internal_get__filterMode_k__BackingField();

  constexpr ::UnityEngine::RenderTextureFormat const& __cordl_internal_get__format_k__BackingField() const;

  constexpr ::UnityEngine::RenderTextureFormat& __cordl_internal_get__format_k__BackingField();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__maxSize_k__BackingField() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__maxSize_k__BackingField();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get__minSize_k__BackingField() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get__minSize_k__BackingField();

  constexpr ::UnityEngine::UIElements::TextureId const& __cordl_internal_get__textureId_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::TextureId& __cordl_internal_get__textureId_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_1Padding() const;

  constexpr int32_t& __cordl_internal_get_m_1Padding();

  constexpr int32_t const& __cordl_internal_get_m_2Padding() const;

  constexpr int32_t& __cordl_internal_get_m_2Padding();

  constexpr ::UnityEngine::UIElements::UIR::Allocator2D* const& __cordl_internal_get_m_Allocator() const;

  constexpr ::UnityEngine::UIElements::UIR::Allocator2D*& __cordl_internal_get_m_Allocator();

  constexpr ::UnityEngine::UIElements::UIR::TextureBlitter* const& __cordl_internal_get_m_Blitter() const;

  constexpr ::UnityEngine::UIElements::UIR::TextureBlitter*& __cordl_internal_get_m_Blitter();

  constexpr ::UnityEngine::Vector2Int const& __cordl_internal_get_m_CurrentSize() const;

  constexpr ::UnityEngine::Vector2Int& __cordl_internal_get_m_CurrentSize();

  constexpr void __cordl_internal_set__atlas_k__BackingField(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__filterMode_k__BackingField(::UnityEngine::FilterMode value);

  constexpr void __cordl_internal_set__format_k__BackingField(::UnityEngine::RenderTextureFormat value);

  constexpr void __cordl_internal_set__maxSize_k__BackingField(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set__minSize_k__BackingField(::UnityEngine::Vector2Int value);

  constexpr void __cordl_internal_set__textureId_k__BackingField(::UnityEngine::UIElements::TextureId value);

  constexpr void __cordl_internal_set_m_1Padding(int32_t value);

  constexpr void __cordl_internal_set_m_2Padding(int32_t value);

  constexpr void __cordl_internal_set_m_Allocator(::UnityEngine::UIElements::UIR::Allocator2D* value);

  constexpr void __cordl_internal_set_m_Blitter(::UnityEngine::UIElements::UIR::TextureBlitter* value);

  constexpr void __cordl_internal_set_m_CurrentSize(::UnityEngine::Vector2Int value);

  /// @brief Method .ctor, addr 0x6b896a0, size 0x160, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::RenderTextureFormat format, ::UnityEngine::FilterMode filterMode, ::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize);

  static inline int32_t getStaticF_s_TextureCounter();

  /// @brief Method get_atlas, addr 0x6b89680, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_atlas();

  /// @brief Method get_disposed, addr 0x6b89800, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_filterMode, addr 0x6b89698, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::FilterMode get_filterMode();

  /// @brief Method get_format, addr 0x6b89690, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::RenderTextureFormat get_format();

  /// @brief Method get_textureId, addr 0x6b89670, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextureId get_textureId();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_TextureCounter(int32_t value);

  /// @brief Method set_atlas, addr 0x6b89688, size 0x8, virtual false, abstract: false, final false
  inline void set_atlas(::UnityEngine::RenderTexture* value);

  /// @brief Method set_disposed, addr 0x6b89808, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_textureId, addr 0x6b89678, size 0x8, virtual false, abstract: false, final false
  inline void set_textureId(::UnityEngine::UIElements::TextureId value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicAtlasPage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasPage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicAtlasPage(DynamicAtlasPage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasPage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicAtlasPage(DynamicAtlasPage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4664 };

  /// @brief Field <textureId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId ____textureId_k__BackingField;

  /// @brief Field <atlas>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ____atlas_k__BackingField;

  /// @brief Field <format>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::RenderTextureFormat ____format_k__BackingField;

  /// @brief Field <filterMode>k__BackingField, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::FilterMode ____filterMode_k__BackingField;

  /// @brief Field <minSize>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ____minSize_k__BackingField;

  /// @brief Field <maxSize>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ____maxSize_k__BackingField;

  /// @brief Field m_1Padding, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_1Padding;

  /// @brief Field m_2Padding, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_2Padding;

  /// @brief Field m_Allocator, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Allocator2D* ___m_Allocator;

  /// @brief Field m_Blitter, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TextureBlitter* ___m_Blitter;

  /// @brief Field m_CurrentSize, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2Int ___m_CurrentSize;

  /// @brief Field <disposed>k__BackingField, offset: 0x58, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ____textureId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ____atlas_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ____format_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ____filterMode_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ____minSize_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ____maxSize_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ___m_1Padding) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ___m_2Padding) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ___m_Allocator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ___m_Blitter) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ___m_CurrentSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DynamicAtlasPage, ____disposed_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasPage, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlasPage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasPage*, "UnityEngine.UIElements", "DynamicAtlasPage");
