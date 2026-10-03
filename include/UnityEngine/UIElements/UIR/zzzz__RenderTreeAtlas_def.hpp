#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderTreeAtlas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTreeAtlas)
namespace UnityEngine::UIElements::UIR {
struct RenderTreeAtlas_AtlasBlock;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderTreeAtlas;
}
namespace UnityEngine::UIElements::UIR {
struct RenderTreeAtlas_AtlasBlock;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UIR::RenderTreeAtlas*);
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeAtlas*, "UnityEngine.UIElements.UIR", "RenderTreeAtlas");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock, "UnityEngine.UIElements.UIR", "RenderTreeAtlas/AtlasBlock");
// Dependencies UnityEngine.Rect, UnityEngine.RectInt
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderTreeAtlas/AtlasBlock
struct CORDL_TYPE RenderTreeAtlas_AtlasBlock {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x717cc3c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(int32_t w, int32_t h, ::UnityEngine::RectInt r, ::UnityEngine::Rect uv);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTreeAtlas_AtlasBlock();

  // Ctor Parameters [CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None, comment: None
  // }, CppParam { name: "rect", ty: "::UnityEngine::RectInt", modifiers: "", def_value: None, comment: None }, CppParam { name: "uvRect", ty: "::UnityEngine::Rect", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "texture", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None, comment: None }]
  constexpr RenderTreeAtlas_AtlasBlock(int32_t width, int32_t height, ::UnityEngine::RectInt rect, ::UnityEngine::Rect uvRect, ::UnityW<::UnityEngine::RenderTexture> texture) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5444 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field width, offset: 0x0, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x4, size: 0x4, def value: None
  int32_t height;

  /// @brief Field rect, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::RectInt rect;

  /// @brief Field uvRect, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Rect uvRect;

  /// @brief Field texture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> texture;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock, width) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock, height) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock, rect) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock, uvRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock, texture) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock) == 0x30, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderTreeAtlas
class CORDL_TYPE RenderTreeAtlas : public ::System::Object {
public:
  // Declarations
  using AtlasBlock = ::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock;

  /// @brief Method CreateTextureForAtlasBlock, addr 0x717cc54, size 0x310, virtual false, abstract: false, final false
  static inline bool CreateTextureForAtlasBlock(::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock> block, bool forceGammaRendering, ::by_ref<bool> allocatedNewTexture);

  /// @brief Method ReserveSize, addr 0x717cb54, size 0xe8, virtual false, abstract: false, final false
  static inline bool ReserveSize(int32_t width, int32_t height, ::by_ref<::UnityEngine::UIElements::UIR::RenderTreeAtlas_AtlasBlock> block);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderTreeAtlas();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeAtlas", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderTreeAtlas(RenderTreeAtlas&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderTreeAtlas", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderTreeAtlas(RenderTreeAtlas const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5445 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::UIR::RenderTreeAtlas) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
