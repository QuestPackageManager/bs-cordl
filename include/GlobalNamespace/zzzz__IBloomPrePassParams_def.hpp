#pragma once
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
// Type: ::IBloomPrePassParams
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14484))
// CS Name: ::IBloomPrePassParams*
class CORDL_TYPE IBloomPrePassParams {
public:
  // Declarations
  __declspec(property(get = get_textureEffect))::GlobalNamespace::TextureEffectSO* textureEffect;

  __declspec(property(get = get_textureWidth)) int32_t textureWidth;

  __declspec(property(get = get_textureHeight)) int32_t textureHeight;

  __declspec(property(get = get_fov))::UnityEngine::Vector2 fov;

  __declspec(property(get = get_linesWidth)) float_t linesWidth;

  __declspec(property(get = get_toneMapping))::GlobalNamespace::ToneMapping toneMapping;

  /// @brief Method get_textureEffect addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::TextureEffectSO* get_textureEffect();

  /// @brief Method get_textureWidth addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_textureWidth();

  /// @brief Method get_textureHeight addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t get_textureHeight();

  /// @brief Method get_fov addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::UnityEngine::Vector2 get_fov();

  /// @brief Method get_linesWidth addr 0x0 size 0xffffffffffffffff virtual true final false
  inline float_t get_linesWidth();

  /// @brief Method get_toneMapping addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::ToneMapping get_toneMapping();

  // Ctor Parameters [CppParam { name: "", ty: "IBloomPrePassParams", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBloomPrePassParams(IBloomPrePassParams&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBloomPrePassParams", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBloomPrePassParams(IBloomPrePassParams const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBloomPrePassParams);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBloomPrePassParams*, "", "IBloomPrePassParams");
