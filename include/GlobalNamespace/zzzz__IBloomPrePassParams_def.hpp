#pragma once
// IWYU pragma private; include "GlobalNamespace/IBloomPrePassParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IBloomPrePassParams)
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
class IBloomPrePassParams;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBloomPrePassParams);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IBloomPrePassParams
class CORDL_TYPE IBloomPrePassParams {
public:
  // Declarations
  __declspec(property(get = get_fov)) ::UnityEngine::Vector2 fov;

  __declspec(property(get = get_linesWidth)) float_t linesWidth;

  __declspec(property(get = get_textureEffect)) ::UnityW<::GlobalNamespace::TextureEffectSO> textureEffect;

  __declspec(property(get = get_textureHeight)) int32_t textureHeight;

  __declspec(property(get = get_textureWidth)) int32_t textureWidth;

  __declspec(property(get = get_toneMapping)) ::GlobalNamespace::ToneMapping toneMapping;

  /// @brief Method get_fov, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::Vector2 get_fov();

  /// @brief Method get_linesWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_linesWidth();

  /// @brief Method get_textureEffect, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::TextureEffectSO> get_textureEffect();

  /// @brief Method get_textureHeight, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_textureHeight();

  /// @brief Method get_textureWidth, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_textureWidth();

  /// @brief Method get_toneMapping, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ToneMapping get_toneMapping();

  // Ctor Parameters [CppParam { name: "", ty: "IBloomPrePassParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBloomPrePassParams(IBloomPrePassParams const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16269 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBloomPrePassParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBloomPrePassParams*, "", "IBloomPrePassParams");
