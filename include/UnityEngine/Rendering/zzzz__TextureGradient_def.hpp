#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TextureGradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ColorSpace_def.hpp"
#include "UnityEngine/zzzz__GradientMode_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureGradient)
namespace System {
class IDisposable;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct GradientAlphaKey;
}
namespace UnityEngine {
struct GradientColorKey;
}
namespace UnityEngine {
struct GradientMode;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class TextureGradient;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::TextureGradient);
// Dependencies System.Object, UnityEngine.ColorSpace, UnityEngine.GradientMode
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.TextureGradient
class CORDL_TYPE TextureGradient : public ::System::Object {
public:
  // Declarations
  /// @brief Field <textureSize>k__BackingField, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__textureSize_k__BackingField, put = __cordl_internal_set__textureSize_k__BackingField)) int32_t _textureSize_k__BackingField;

  __declspec(property(get = get_alphaKeys)) ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys;

  __declspec(property(get = get_colorKeys)) ::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys;

  /// @brief Field colorSpace, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_colorSpace, put = __cordl_internal_set_colorSpace)) ::UnityEngine::ColorSpace colorSpace;

  /// @brief Field m_Gradient, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Gradient, put = __cordl_internal_set_m_Gradient)) ::UnityEngine::Gradient* m_Gradient;

  /// @brief Field m_IsTextureDirty, offset 0x2c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTextureDirty, put = __cordl_internal_set_m_IsTextureDirty)) bool m_IsTextureDirty;

  /// @brief Field m_Precise, offset 0x2d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Precise, put = __cordl_internal_set_m_Precise)) bool m_Precise;

  /// @brief Field m_RequestedTextureSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RequestedTextureSize, put = __cordl_internal_set_m_RequestedTextureSize)) int32_t m_RequestedTextureSize;

  /// @brief Field m_Texture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Texture, put = __cordl_internal_set_m_Texture)) ::UnityW<::UnityEngine::Texture2D> m_Texture;

  /// @brief Field mode, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_mode, put = __cordl_internal_set_mode)) ::UnityEngine::GradientMode mode;

  __declspec(property(get = get_textureSize, put = set_textureSize)) int32_t textureSize;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method Dispose, addr 0x6611ce8, size 0x4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Evaluate, addr 0x661203c, size 0x38, virtual false, abstract: false, final false
  inline ::UnityEngine::Color Evaluate(float_t time);

  /// @brief Method GetTexture, addr 0x6611da8, size 0x294, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Texture2D> GetTexture();

  /// @brief Method GetTextureFormat, addr 0x6611da0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetTextureFormat();

  static inline ::UnityEngine::Rendering::TextureGradient* New_ctor(::UnityEngine::Gradient* baseCurve);

  static inline ::UnityEngine::Rendering::TextureGradient* New_ctor(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys,
                                                                    ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys, ::UnityEngine::GradientMode mode,
                                                                    ::UnityEngine::ColorSpace colorSpace, int32_t requestedTextureSize, bool precise);

  /// @brief Method Rebuild, addr 0x661190c, size 0x3dc, virtual false, abstract: false, final false
  inline void Rebuild(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys,
                      ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys, ::UnityEngine::GradientMode mode, ::UnityEngine::ColorSpace colorSpace,
                      int32_t requestedTextureSize, bool precise);

  /// @brief Method Release, addr 0x6611cec, size 0xa8, virtual false, abstract: false, final false
  inline void Release();

  /// @brief Method SetDirty, addr 0x6611d94, size 0xc, virtual false, abstract: false, final false
  inline void SetDirty();

  /// @brief Method SetKeys, addr 0x6612074, size 0x88, virtual false, abstract: false, final false
  inline void SetKeys(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys,
                      ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys, ::UnityEngine::GradientMode mode, ::UnityEngine::ColorSpace colorSpace);

  constexpr int32_t const& __cordl_internal_get__textureSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__textureSize_k__BackingField();

  constexpr ::UnityEngine::ColorSpace const& __cordl_internal_get_colorSpace() const;

  constexpr ::UnityEngine::ColorSpace& __cordl_internal_get_colorSpace();

  constexpr ::UnityEngine::Gradient* const& __cordl_internal_get_m_Gradient() const;

  constexpr ::UnityEngine::Gradient*& __cordl_internal_get_m_Gradient();

  constexpr bool const& __cordl_internal_get_m_IsTextureDirty() const;

  constexpr bool& __cordl_internal_get_m_IsTextureDirty();

  constexpr bool const& __cordl_internal_get_m_Precise() const;

  constexpr bool& __cordl_internal_get_m_Precise();

  constexpr int32_t const& __cordl_internal_get_m_RequestedTextureSize() const;

  constexpr int32_t& __cordl_internal_get_m_RequestedTextureSize();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_m_Texture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_m_Texture();

  constexpr ::UnityEngine::GradientMode const& __cordl_internal_get_mode() const;

  constexpr ::UnityEngine::GradientMode& __cordl_internal_get_mode();

  constexpr void __cordl_internal_set__textureSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_colorSpace(::UnityEngine::ColorSpace value);

  constexpr void __cordl_internal_set_m_Gradient(::UnityEngine::Gradient* value);

  constexpr void __cordl_internal_set_m_IsTextureDirty(bool value);

  constexpr void __cordl_internal_set_m_Precise(bool value);

  constexpr void __cordl_internal_set_m_RequestedTextureSize(int32_t value);

  constexpr void __cordl_internal_set_m_Texture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set_mode(::UnityEngine::GradientMode value);

  /// @brief Method .ctor, addr 0x661181c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Gradient* baseCurve);

  /// @brief Method .ctor, addr 0x66118f4, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> colorKeys,
                    ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> alphaKeys, ::UnityEngine::GradientMode mode, ::UnityEngine::ColorSpace colorSpace,
                    int32_t requestedTextureSize, bool precise);

  /// @brief Method get_alphaKeys, addr 0x6611808, size 0x14, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientAlphaKey, ::Array<::UnityEngine::GradientAlphaKey>*> get_alphaKeys();

  /// @brief Method get_colorKeys, addr 0x66117f4, size 0x14, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::GradientColorKey, ::Array<::UnityEngine::GradientColorKey>*> get_colorKeys();

  /// @brief Method get_textureSize, addr 0x66117e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_textureSize();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Method set_textureSize, addr 0x66117ec, size 0x8, virtual false, abstract: false, final false
  inline void set_textureSize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureGradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextureGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextureGradient(TextureGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextureGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextureGradient(TextureGradient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12291 };

  /// @brief Field <textureSize>k__BackingField, offset: 0x10, size: 0x4, def value: None
  int32_t ____textureSize_k__BackingField;

  /// @brief Field m_Gradient, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___m_Gradient;

  /// @brief Field m_Texture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ___m_Texture;

  /// @brief Field m_RequestedTextureSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_RequestedTextureSize;

  /// @brief Field m_IsTextureDirty, offset: 0x2c, size: 0x1, def value: None
  bool ___m_IsTextureDirty;

  /// @brief Field m_Precise, offset: 0x2d, size: 0x1, def value: None
  bool ___m_Precise;

  /// @brief Field mode, offset: 0x30, size: 0x4, def value: None
  ::UnityEngine::GradientMode ___mode;

  /// @brief Field colorSpace, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::ColorSpace ___colorSpace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ____textureSize_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ___m_Gradient) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ___m_Texture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ___m_RequestedTextureSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ___m_IsTextureDirty) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ___m_Precise) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ___mode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::TextureGradient, ___colorSpace) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TextureGradient, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::TextureGradient);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TextureGradient*, "UnityEngine.Rendering", "TextureGradient");
