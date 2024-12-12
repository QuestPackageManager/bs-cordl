#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassBackgroundTextureGradient.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundTextureGradient)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundTextureGradient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundTextureGradient);
// Dependencies BloomPrePassNonLightPass, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: BloomPrePassBackgroundTextureGradient
class CORDL_TYPE BloomPrePassBackgroundTextureGradient : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  /// @brief Field _cameraToWorldMatrixID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__cameraToWorldMatrixID, put = setStaticF__cameraToWorldMatrixID)) int32_t _cameraToWorldMatrixID;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  /// @brief Field _gradientTexID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__gradientTexID, put = setStaticF__gradientTexID)) int32_t _gradientTexID;

  /// @brief Field _inverseProjectionMatrixID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__inverseProjectionMatrixID, put = setStaticF__inverseProjectionMatrixID)) int32_t _inverseProjectionMatrixID;

  /// @brief Field _material, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__material, put = __cordl_internal_set__material)) ::UnityW<::UnityEngine::Material> _material;

  /// @brief Field _texture, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__texture, put = __cordl_internal_set__texture)) ::UnityW<::UnityEngine::Texture2D> _texture;

  /// @brief Field _tintColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__tintColor, put = __cordl_internal_set__tintColor)) ::UnityEngine::Color _tintColor;

  __declspec(property(get = get_tintColor, put = set_tintColor)) ::UnityEngine::Color tintColor;

  /// @brief Method InitIfNeeded, addr 0x39d8d14, size 0x22c, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* New_ctor();

  /// @brief Method OnDestroy, addr 0x39d8fd0, size 0x24, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnValidate, addr 0x39d8ff4, size 0xa8, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method Render, addr 0x39d90c8, size 0x198, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  /// @brief Method Start, addr 0x39d8f40, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateGradientTexture, addr 0x39d8f44, size 0x8c, virtual false, abstract: false, final false
  inline void UpdateGradientTexture();

  /// @brief Method UpdatePixels, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels);

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get__material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get__material();

  constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__texture() const;

  constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__texture();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__tintColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__tintColor();

  constexpr void __cordl_internal_set__material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set__texture(::UnityW<::UnityEngine::Texture2D> value);

  constexpr void __cordl_internal_set__tintColor(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x39d7284, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF__cameraToWorldMatrixID();

  static inline int32_t getStaticF__colorID();

  static inline int32_t getStaticF__gradientTexID();

  static inline int32_t getStaticF__inverseProjectionMatrixID();

  /// @brief Method get_tintColor, addr 0x39d8cfc, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_tintColor();

  static inline void setStaticF__cameraToWorldMatrixID(int32_t value);

  static inline void setStaticF__colorID(int32_t value);

  static inline void setStaticF__gradientTexID(int32_t value);

  static inline void setStaticF__inverseProjectionMatrixID(int32_t value);

  /// @brief Method set_tintColor, addr 0x39d8d08, size 0xc, virtual false, abstract: false, final false
  inline void set_tintColor(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundTextureGradient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16246 };

  /// @brief Field kSkyGradientShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kSkyGradientShaderName{ u"Hidden/SkyGradient" };

  /// @brief Field kTextureWidth offset 0xffffffff size 0x4
  static constexpr int32_t kTextureWidth{ static_cast<int32_t>(0x80) };

  /// @brief Field kUseToneMappingKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kUseToneMappingKeyword{ u"USE_TONE_MAPPING" };

  /// @brief Field _tintColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____tintColor;

  /// @brief Field _texture, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture2D> ____texture;

  /// @brief Field _material, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ____material;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient, ____tintColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient, ____texture) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient, ____material) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundTextureGradient, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundTextureGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, "", "BloomPrePassBackgroundTextureGradient");
