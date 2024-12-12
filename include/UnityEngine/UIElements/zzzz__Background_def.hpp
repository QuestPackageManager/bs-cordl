#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Background.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IEquatable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Background)
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
class VectorImage;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct Background;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Background);
// Dependencies System.IEquatable`1<T>
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: UnityEngine.UIElements.Background
struct CORDL_TYPE Background {
public:
  // Declarations
  __declspec(property(get = get_renderTexture, put = set_renderTexture)) ::UnityW<::UnityEngine::RenderTexture> renderTexture;

  __declspec(property(get = get_sprite, put = set_sprite)) ::UnityW<::UnityEngine::Sprite> sprite;

  __declspec(property(get = get_texture, put = set_texture)) ::UnityW<::UnityEngine::Texture2D> texture;

  __declspec(property(get = get_vectorImage, put = set_vectorImage)) ::UnityW<::UnityEngine::UIElements::VectorImage> vectorImage;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Background>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Background>*();

  /// @brief Method Equals, addr 0x4a67260, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a6722c, size 0x34, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Background other);

  /// @brief Method FromObject, addr 0x4a66e9c, size 0x250, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromObject(::System::Object* obj);

  /// @brief Method FromRenderTexture, addr 0x4a66e00, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromRenderTexture(::UnityEngine::RenderTexture* rt);

  /// @brief Method FromSprite, addr 0x4a66e34, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromSprite(::UnityEngine::Sprite* s);

  /// @brief Method FromTexture2D, addr 0x4a66dcc, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromTexture2D(::UnityEngine::Texture2D* t);

  /// @brief Method FromVectorImage, addr 0x4a66e68, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Background FromVectorImage(::UnityEngine::UIElements::VectorImage* vi);

  /// @brief Method GetHashCode, addr 0x4a672f0, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x4a67388, size 0x138, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_renderTexture, addr 0x4a66ccc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_renderTexture();

  /// @brief Method get_sprite, addr 0x4a66c48, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> get_sprite();

  /// @brief Method get_texture, addr 0x4a66bc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> get_texture();

  /// @brief Method get_vectorImage, addr 0x4a658e8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UIElements::VectorImage> get_vectorImage();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Background>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Background>* i___System__IEquatable_1___UnityEngine__UIElements__Background_();

  /// @brief Method op_Equality, addr 0x4a670ec, size 0x108, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Background lhs, ::UnityEngine::UIElements::Background rhs);

  /// @brief Method op_Inequality, addr 0x4a671f4, size 0x38, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Background lhs, ::UnityEngine::UIElements::Background rhs);

  /// @brief Method set_renderTexture, addr 0x4a66cd4, size 0x7c, virtual false, abstract: false, final false
  inline void set_renderTexture(::UnityEngine::RenderTexture* value);

  /// @brief Method set_sprite, addr 0x4a66c50, size 0x7c, virtual false, abstract: false, final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method set_texture, addr 0x4a66bcc, size 0x7c, virtual false, abstract: false, final false
  inline void set_texture(::UnityEngine::Texture2D* value);

  /// @brief Method set_vectorImage, addr 0x4a66d50, size 0x7c, virtual false, abstract: false, final false
  inline void set_vectorImage(::UnityEngine::UIElements::VectorImage* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Background();

  // Ctor Parameters [CppParam { name: "m_Texture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None }, CppParam { name: "m_Sprite", ty: "::UnityW<::UnityEngine::Sprite>",
  // modifiers: "", def_value: None }, CppParam { name: "m_RenderTexture", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "m_VectorImage", ty:
  // "::UnityW<::UnityEngine::UIElements::VectorImage>", modifiers: "", def_value: None }]
  constexpr Background(::UnityW<::UnityEngine::Texture2D> m_Texture, ::UnityW<::UnityEngine::Sprite> m_Sprite, ::UnityW<::UnityEngine::RenderTexture> m_RenderTexture,
                       ::UnityW<::UnityEngine::UIElements::VectorImage> m_VectorImage) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6050 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Texture, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> m_Texture;

  /// @brief Field m_Sprite, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> m_Sprite;

  /// @brief Field m_RenderTexture, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> m_RenderTexture;

  /// @brief Field m_VectorImage, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UIElements::VectorImage> m_VectorImage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Background, m_Texture) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Background, m_Sprite) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Background, m_RenderTexture) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Background, m_VectorImage) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Background, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Background, "UnityEngine.UIElements", "Background");
