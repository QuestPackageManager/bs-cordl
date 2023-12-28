#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextureId_def.hpp"
#include "UnityEngine/zzzz__FilterMode_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DynamicAtlasPage)
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine::UIElements::UIR {
class TextureBlitter;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine::UIElements::UIR {
struct __Allocator2D__Alloc2D;
}
namespace UnityEngine::UIElements::UIR {
class Allocator2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DynamicAtlasPage;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DynamicAtlasPage);
// Type: UnityEngine.UIElements::DynamicAtlasPage
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7339)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10117)),
// TypeDefinitionIndex(TypeDefinitionIndex(10113)), TypeDefinitionIndex(TypeDefinitionIndex(10244))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7342)) CS Name:
// ::UnityEngine.UIElements::DynamicAtlasPage*
class CORDL_TYPE DynamicAtlasPage : public ::System::Object {
public:
  // Declarations
  /// @brief Field <textureId>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __get__textureId_k__BackingField, put = __set__textureId_k__BackingField))::UnityEngine::UIElements::TextureId _textureId_k__BackingField;

  /// @brief Field <atlas>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__atlas_k__BackingField, put = __set__atlas_k__BackingField))::UnityEngine::RenderTexture* _atlas_k__BackingField;

  /// @brief Field <format>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__format_k__BackingField, put = __set__format_k__BackingField))::UnityEngine::RenderTextureFormat _format_k__BackingField;

  /// @brief Field <filterMode>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__filterMode_k__BackingField, put = __set__filterMode_k__BackingField))::UnityEngine::FilterMode _filterMode_k__BackingField;

  /// @brief Field <minSize>k__BackingField, offset 0x28, size 0x8
  __declspec(property(get = __get__minSize_k__BackingField, put = __set__minSize_k__BackingField))::UnityEngine::Vector2Int _minSize_k__BackingField;

  /// @brief Field <maxSize>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__maxSize_k__BackingField, put = __set__maxSize_k__BackingField))::UnityEngine::Vector2Int _maxSize_k__BackingField;

  /// @brief Field m_1Padding, offset 0x38, size 0x4
  __declspec(property(get = __get_m_1Padding, put = __set_m_1Padding)) int32_t m_1Padding;

  /// @brief Field m_2Padding, offset 0x3c, size 0x4
  __declspec(property(get = __get_m_2Padding, put = __set_m_2Padding)) int32_t m_2Padding;

  /// @brief Field m_Allocator, offset 0x40, size 0x8
  __declspec(property(get = __get_m_Allocator, put = __set_m_Allocator))::UnityEngine::UIElements::UIR::Allocator2D* m_Allocator;

  /// @brief Field m_Blitter, offset 0x48, size 0x8
  __declspec(property(get = __get_m_Blitter, put = __set_m_Blitter))::UnityEngine::UIElements::UIR::TextureBlitter* m_Blitter;

  /// @brief Field m_CurrentSize, offset 0x50, size 0x8
  __declspec(property(get = __get_m_CurrentSize, put = __set_m_CurrentSize))::UnityEngine::Vector2Int m_CurrentSize;

  /// @brief Field <disposed>k__BackingField, offset 0x58, size 0x1
  __declspec(property(get = __get__disposed_k__BackingField, put = __set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field s_TextureCounter, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_TextureCounter, put = setStaticF_s_TextureCounter)) int32_t s_TextureCounter;

  __declspec(property(get = get_textureId, put = set_textureId))::UnityEngine::UIElements::TextureId textureId;

  __declspec(property(get = get_atlas, put = set_atlas))::UnityEngine::RenderTexture* atlas;

  __declspec(property(get = get_format))::UnityEngine::RenderTextureFormat format;

  __declspec(property(get = get_filterMode))::UnityEngine::FilterMode filterMode;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::UnityEngine::UIElements::TextureId& __get__textureId_k__BackingField();

  constexpr ::UnityEngine::UIElements::TextureId const& __get__textureId_k__BackingField() const;

  constexpr void __set__textureId_k__BackingField(::UnityEngine::UIElements::TextureId value);

  constexpr ::UnityEngine::RenderTexture*& __get__atlas_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RenderTexture*> const& __get__atlas_k__BackingField() const;

  constexpr void __set__atlas_k__BackingField(::UnityEngine::RenderTexture* value);

  constexpr ::UnityEngine::RenderTextureFormat& __get__format_k__BackingField();

  constexpr ::UnityEngine::RenderTextureFormat const& __get__format_k__BackingField() const;

  constexpr void __set__format_k__BackingField(::UnityEngine::RenderTextureFormat value);

  constexpr ::UnityEngine::FilterMode& __get__filterMode_k__BackingField();

  constexpr ::UnityEngine::FilterMode const& __get__filterMode_k__BackingField() const;

  constexpr void __set__filterMode_k__BackingField(::UnityEngine::FilterMode value);

  constexpr ::UnityEngine::Vector2Int& __get__minSize_k__BackingField();

  constexpr ::UnityEngine::Vector2Int const& __get__minSize_k__BackingField() const;

  constexpr void __set__minSize_k__BackingField(::UnityEngine::Vector2Int value);

  constexpr ::UnityEngine::Vector2Int& __get__maxSize_k__BackingField();

  constexpr ::UnityEngine::Vector2Int const& __get__maxSize_k__BackingField() const;

  constexpr void __set__maxSize_k__BackingField(::UnityEngine::Vector2Int value);

  constexpr int32_t& __get_m_1Padding();

  constexpr int32_t const& __get_m_1Padding() const;

  constexpr void __set_m_1Padding(int32_t value);

  constexpr int32_t& __get_m_2Padding();

  constexpr int32_t const& __get_m_2Padding() const;

  constexpr void __set_m_2Padding(int32_t value);

  constexpr ::UnityEngine::UIElements::UIR::Allocator2D*& __get_m_Allocator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Allocator2D*> const& __get_m_Allocator() const;

  constexpr void __set_m_Allocator(::UnityEngine::UIElements::UIR::Allocator2D* value);

  constexpr ::UnityEngine::UIElements::UIR::TextureBlitter*& __get_m_Blitter();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TextureBlitter*> const& __get_m_Blitter() const;

  constexpr void __set_m_Blitter(::UnityEngine::UIElements::UIR::TextureBlitter* value);

  constexpr ::UnityEngine::Vector2Int& __get_m_CurrentSize();

  constexpr ::UnityEngine::Vector2Int const& __get_m_CurrentSize() const;

  constexpr void __set_m_CurrentSize(::UnityEngine::Vector2Int value);

  constexpr bool& __get__disposed_k__BackingField();

  constexpr bool const& __get__disposed_k__BackingField() const;

  constexpr void __set__disposed_k__BackingField(bool value);

  static inline void setStaticF_s_TextureCounter(int32_t value);

  static inline int32_t getStaticF_s_TextureCounter();

  /// @brief Method get_textureId addr 0x2e7cfb8 size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::TextureId get_textureId();

  /// @brief Method set_textureId addr 0x2e7cfc0 size 0x8 virtual false final false
  inline void set_textureId(::UnityEngine::UIElements::TextureId value);

  /// @brief Method get_atlas addr 0x2e7cfc8 size 0x8 virtual false final false
  inline ::UnityEngine::RenderTexture* get_atlas();

  /// @brief Method set_atlas addr 0x2e7cfd0 size 0x8 virtual false final false
  inline void set_atlas(::UnityEngine::RenderTexture* value);

  /// @brief Method get_format addr 0x2e7cfd8 size 0x8 virtual false final false
  inline ::UnityEngine::RenderTextureFormat get_format();

  /// @brief Method get_filterMode addr 0x2e7cfe0 size 0x8 virtual false final false
  inline ::UnityEngine::FilterMode get_filterMode();

  static inline ::UnityEngine::UIElements::DynamicAtlasPage* New_ctor(::UnityEngine::RenderTextureFormat format, ::UnityEngine::FilterMode filterMode, ::UnityEngine::Vector2Int minSize,
                                                                      ::UnityEngine::Vector2Int maxSize);

  /// @brief Method .ctor addr 0x2e7cfe8 size 0x154 virtual false final false
  inline void _ctor(::UnityEngine::RenderTextureFormat format, ::UnityEngine::FilterMode filterMode, ::UnityEngine::Vector2Int minSize, ::UnityEngine::Vector2Int maxSize);

  /// @brief Method get_disposed addr 0x2e7d1f0 size 0x8 virtual false final false
  inline bool get_disposed();

  /// @brief Method set_disposed addr 0x2e7d1f8 size 0xc virtual false final false
  inline void set_disposed(bool value);

  /// @brief Method Dispose addr 0x2e7d204 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x2e7d270 size 0x1d4 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method TryAdd addr 0x2e7d4b0 size 0x1e4 virtual false final false
  inline bool TryAdd(::UnityEngine::Texture2D* image, ByRef<::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D> alloc, ByRef<::UnityEngine::RectInt> rect);

  /// @brief Method Update addr 0x2e7d694 size 0x19c virtual false final false
  inline void Update(::UnityEngine::Texture2D* image, ::UnityEngine::RectInt rect);

  /// @brief Method Remove addr 0x2e7d9d4 size 0xfc virtual false final false
  inline void Remove(::UnityEngine::UIElements::UIR::__Allocator2D__Alloc2D alloc);

  /// @brief Method Commit addr 0x2e7dad0 size 0x40 virtual false final false
  inline void Commit();

  /// @brief Method UpdateAtlasTexture addr 0x2e7db10 size 0x380 virtual false final false
  inline void UpdateAtlasTexture();

  /// @brief Method CreateAtlasTexture addr 0x2e7df7c size 0x138 virtual false final false
  inline ::UnityEngine::RenderTexture* CreateAtlasTexture();

  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasPage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DynamicAtlasPage(DynamicAtlasPage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DynamicAtlasPage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DynamicAtlasPage(DynamicAtlasPage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DynamicAtlasPage();

public:
  /// @brief Field <textureId>k__BackingField, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::UIElements::TextureId ____textureId_k__BackingField;

  /// @brief Field <atlas>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::RenderTexture* ____atlas_k__BackingField;

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
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DynamicAtlasPage, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DynamicAtlasPage);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DynamicAtlasPage*, "UnityEngine.UIElements", "DynamicAtlasPage");
