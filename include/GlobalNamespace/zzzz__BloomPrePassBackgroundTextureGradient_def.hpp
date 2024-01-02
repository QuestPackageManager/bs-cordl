#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BloomPrePassNonLightPass_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassBackgroundTextureGradient)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture2D;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundTextureGradient;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassBackgroundTextureGradient);
// Type: ::BloomPrePassBackgroundTextureGradient
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(14478))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14468))
// CS Name: ::BloomPrePassBackgroundTextureGradient*
class CORDL_TYPE BloomPrePassBackgroundTextureGradient : public ::GlobalNamespace::BloomPrePassNonLightPass {
public:
  // Declarations
  /// @brief Field _tintColor, offset 0x20, size 0x10
  __declspec(property(get = __get__tintColor, put = __set__tintColor))::UnityEngine::Color _tintColor;

  /// @brief Field _texture, offset 0x30, size 0x8
  __declspec(property(get = __get__texture, put = __set__texture))::UnityEngine::Texture2D* _texture;

  /// @brief Field _material, offset 0x38, size 0x8
  __declspec(property(get = __get__material, put = __set__material))::UnityEngine::Material* _material;

  /// @brief Field _gradientTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__gradientTexID, put = setStaticF__gradientTexID)) int32_t _gradientTexID;

  /// @brief Field _inverseProjectionMatrixID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__inverseProjectionMatrixID, put = setStaticF__inverseProjectionMatrixID)) int32_t _inverseProjectionMatrixID;

  /// @brief Field _cameraToWorldMatrixID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__cameraToWorldMatrixID, put = setStaticF__cameraToWorldMatrixID)) int32_t _cameraToWorldMatrixID;

  /// @brief Field _colorID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF__colorID, put = setStaticF__colorID)) int32_t _colorID;

  __declspec(property(get = get_tintColor, put = set_tintColor))::UnityEngine::Color tintColor;

  constexpr ::UnityEngine::Color& __get__tintColor();

  constexpr ::UnityEngine::Color const& __get__tintColor() const;

  constexpr void __set__tintColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Texture2D*& __get__texture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get__texture() const;

  constexpr void __set__texture(::UnityEngine::Texture2D* value);

  constexpr ::UnityEngine::Material*& __get__material();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& __get__material() const;

  constexpr void __set__material(::UnityEngine::Material* value);

  static inline void setStaticF__gradientTexID(int32_t value);

  static inline int32_t getStaticF__gradientTexID();

  static inline void setStaticF__inverseProjectionMatrixID(int32_t value);

  static inline int32_t getStaticF__inverseProjectionMatrixID();

  static inline void setStaticF__cameraToWorldMatrixID(int32_t value);

  static inline int32_t getStaticF__cameraToWorldMatrixID();

  static inline void setStaticF__colorID(int32_t value);

  static inline int32_t getStaticF__colorID();

  /// @brief Method get_tintColor, addr 0x210624c, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_tintColor();

  /// @brief Method set_tintColor, addr 0x2106258, size 0xc, virtual false, abstract: false, final false
  inline void set_tintColor(::UnityEngine::Color value);

  /// @brief Method InitIfNeeded, addr 0x2106264, size 0x22c, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  /// @brief Method Start, addr 0x2106490, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x2106520, size 0x24, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method UpdatePixels, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdatePixels(::Unity::Collections::NativeArray_1<::UnityEngine::Color32> pixels, int32_t numberOfPixels);

  /// @brief Method OnValidate, addr 0x2106544, size 0xa8, virtual true, abstract: false, final false
  inline void OnValidate();

  /// @brief Method UpdateGradientTexture, addr 0x2106494, size 0x8c, virtual false, abstract: false, final false
  inline void UpdateGradientTexture();

  /// @brief Method Render, addr 0x2106618, size 0x1b8, virtual true, abstract: false, final false
  inline void Render(::UnityEngine::RenderTexture* dest, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix);

  static inline ::GlobalNamespace::BloomPrePassBackgroundTextureGradient* New_ctor();

  /// @brief Method .ctor, addr 0x21045e8, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundTextureGradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassBackgroundTextureGradient(BloomPrePassBackgroundTextureGradient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassBackgroundTextureGradient();

public:
  /// @brief Field _tintColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____tintColor;

  /// @brief Field _texture, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ____texture;

  /// @brief Field _material, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Material* ____material;

  /// @brief Field kUseToneMappingKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kUseToneMappingKeyword{ u"USE_TONE_MAPPING" };

  /// @brief Field kSkyGradientShaderName offset 0xffffffff size 0x8
  static constexpr ::ConstString kSkyGradientShaderName{ u"Hidden/SkyGradient" };

  /// @brief Field kTextureWidth offset 0xffffffff size 0x4
  static constexpr int32_t kTextureWidth{ static_cast<int32_t>(0x80) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassBackgroundTextureGradient, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient, ____tintColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient, ____texture) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassBackgroundTextureGradient, ____material) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassBackgroundTextureGradient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassBackgroundTextureGradient*, "", "BloomPrePassBackgroundTextureGradient");
