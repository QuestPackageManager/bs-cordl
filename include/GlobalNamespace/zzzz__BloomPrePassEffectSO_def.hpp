#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TextureEffectSO_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BloomPrePassEffectSO)
namespace GlobalNamespace {
class IBloomPrePassParams;
}
namespace GlobalNamespace {
class TextureEffectSO;
}
namespace GlobalNamespace {
struct ToneMapping;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassEffectSO);
// Type: ::BloomPrePassEffectSO
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(14579))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14470))
// CS Name: ::BloomPrePassEffectSO*
class CORDL_TYPE BloomPrePassEffectSO : public ::GlobalNamespace::TextureEffectSO {
public:
  // Declarations
  /// @brief Field _textureWidth, offset 0x18, size 0x4
  __declspec(property(get = __get__textureWidth, put = __set__textureWidth)) int32_t _textureWidth;

  /// @brief Field _textureHeight, offset 0x1c, size 0x4
  __declspec(property(get = __get__textureHeight, put = __set__textureHeight)) int32_t _textureHeight;

  /// @brief Field _fov, offset 0x20, size 0x8
  __declspec(property(get = __get__fov, put = __set__fov))::UnityEngine::Vector2 _fov;

  /// @brief Field _linesWidth, offset 0x28, size 0x4
  __declspec(property(get = __get__linesWidth, put = __set__linesWidth)) float_t _linesWidth;

  __declspec(property(get = get_textureEffect))::GlobalNamespace::TextureEffectSO* textureEffect;

  __declspec(property(get = get_textureWidth)) int32_t textureWidth;

  __declspec(property(get = get_textureHeight)) int32_t textureHeight;

  __declspec(property(get = get_fov))::UnityEngine::Vector2 fov;

  __declspec(property(get = get_linesWidth)) float_t linesWidth;

  __declspec(property(get = get_toneMapping))::GlobalNamespace::ToneMapping toneMapping;

  /// @brief Convert operator to "::GlobalNamespace::IBloomPrePassParams"
  constexpr operator ::GlobalNamespace::IBloomPrePassParams*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBloomPrePassParams"
  constexpr ::GlobalNamespace::IBloomPrePassParams* i___GlobalNamespace__IBloomPrePassParams() noexcept;

  constexpr int32_t& __get__textureWidth();

  constexpr int32_t const& __get__textureWidth() const;

  constexpr void __set__textureWidth(int32_t value);

  constexpr int32_t& __get__textureHeight();

  constexpr int32_t const& __get__textureHeight() const;

  constexpr void __set__textureHeight(int32_t value);

  constexpr ::UnityEngine::Vector2& __get__fov();

  constexpr ::UnityEngine::Vector2 const& __get__fov() const;

  constexpr void __set__fov(::UnityEngine::Vector2 value);

  constexpr float_t& __get__linesWidth();

  constexpr float_t const& __get__linesWidth() const;

  constexpr void __set__linesWidth(float_t value);

  /// @brief Method get_textureEffect, addr 0x21068e4, size 0x4, virtual true, abstract: false, final true
  inline ::GlobalNamespace::TextureEffectSO* get_textureEffect();

  /// @brief Method get_textureWidth, addr 0x21068e8, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_textureWidth();

  /// @brief Method get_textureHeight, addr 0x21068f0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_textureHeight();

  /// @brief Method get_fov, addr 0x21068f8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::Vector2 get_fov();

  /// @brief Method get_linesWidth, addr 0x2106900, size 0x8, virtual true, abstract: false, final true
  inline float_t get_linesWidth();

  /// @brief Method get_toneMapping, addr 0x2106908, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ToneMapping get_toneMapping();

  static inline ::GlobalNamespace::BloomPrePassEffectSO* New_ctor();

  /// @brief Method .ctor, addr 0x2106910, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BloomPrePassEffectSO(BloomPrePassEffectSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BloomPrePassEffectSO(BloomPrePassEffectSO const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BloomPrePassEffectSO();

public:
  /// @brief Field _textureWidth, offset: 0x18, size: 0x4, def value: None
  int32_t ____textureWidth;

  /// @brief Field _textureHeight, offset: 0x1c, size: 0x4, def value: None
  int32_t ____textureHeight;

  /// @brief Field _fov, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____fov;

  /// @brief Field _linesWidth, offset: 0x28, size: 0x4, def value: None
  float_t ____linesWidth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassEffectSO, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassEffectSO, ____textureWidth) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassEffectSO, ____textureHeight) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassEffectSO, ____fov) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassEffectSO, ____linesWidth) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassEffectSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassEffectSO*, "", "BloomPrePassEffectSO");
