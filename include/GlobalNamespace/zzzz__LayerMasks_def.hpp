#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMasks)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class LayerMasks;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LayerMasks);
// Type: ::LayerMasks
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10204)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16245))
// CS Name: ::LayerMasks*
class CORDL_TYPE LayerMasks : public ::System::Object {
public:
  // Declarations
  /// @brief Field saberLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_saberLayerMask, put = setStaticF_saberLayerMask))::UnityEngine::LayerMask saberLayerMask;

  /// @brief Field noteLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_noteLayerMask, put = setStaticF_noteLayerMask))::UnityEngine::LayerMask noteLayerMask;

  /// @brief Field noteDebrisLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_noteDebrisLayerMask, put = setStaticF_noteDebrisLayerMask))::UnityEngine::LayerMask noteDebrisLayerMask;

  /// @brief Field cutEffectParticlesLayerMask, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_cutEffectParticlesLayerMask, put = setStaticF_cutEffectParticlesLayerMask))::UnityEngine::LayerMask cutEffectParticlesLayerMask;

  /// @brief Field noteDebrisLayer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_noteDebrisLayer, put = setStaticF_noteDebrisLayer)) int32_t noteDebrisLayer;

  /// @brief Field cutEffectParticlesLayer, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_cutEffectParticlesLayer, put = setStaticF_cutEffectParticlesLayer)) int32_t cutEffectParticlesLayer;

  static inline void setStaticF_saberLayerMask(::UnityEngine::LayerMask value);

  static inline ::UnityEngine::LayerMask getStaticF_saberLayerMask();

  static inline void setStaticF_noteLayerMask(::UnityEngine::LayerMask value);

  static inline ::UnityEngine::LayerMask getStaticF_noteLayerMask();

  static inline void setStaticF_noteDebrisLayerMask(::UnityEngine::LayerMask value);

  static inline ::UnityEngine::LayerMask getStaticF_noteDebrisLayerMask();

  static inline void setStaticF_cutEffectParticlesLayerMask(::UnityEngine::LayerMask value);

  static inline ::UnityEngine::LayerMask getStaticF_cutEffectParticlesLayerMask();

  static inline void setStaticF_noteDebrisLayer(int32_t value);

  static inline int32_t getStaticF_noteDebrisLayer();

  static inline void setStaticF_cutEffectParticlesLayer(int32_t value);

  static inline int32_t getStaticF_cutEffectParticlesLayer();

  /// @brief Method GetLayerMask addr 0x122da84 size 0x30 virtual false final false
  static inline ::UnityEngine::LayerMask GetLayerMask(::StringW layerName);

  /// @brief Method GetLayerMask addr 0x122dab4 size 0x28 virtual false final false
  static inline ::UnityEngine::LayerMask GetLayerMask(int32_t layerNum);

  /// @brief Method GetLayer addr 0x122dadc size 0x8 virtual false final false
  static inline int32_t GetLayer(::StringW layerName);

  static inline ::GlobalNamespace::LayerMasks* New_ctor();

  /// @brief Method .ctor addr 0x122dae4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerMasks(LayerMasks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerMasks(LayerMasks const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMasks();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LayerMasks, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LayerMasks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LayerMasks*, "", "LayerMasks");
