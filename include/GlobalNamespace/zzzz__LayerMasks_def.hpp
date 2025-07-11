#pragma once
// IWYU pragma private; include "GlobalNamespace/LayerMasks.hpp"
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
// Dependencies System.Object, UnityEngine.LayerMask
namespace GlobalNamespace {
// Is value type: false
// CS Name: LayerMasks
class CORDL_TYPE LayerMasks : public ::System::Object {
public:
  // Declarations
  /// @brief Field cutEffectParticlesLayer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_cutEffectParticlesLayer, put = setStaticF_cutEffectParticlesLayer)) int32_t cutEffectParticlesLayer;

  /// @brief Field cutEffectParticlesLayerMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_cutEffectParticlesLayerMask, put = setStaticF_cutEffectParticlesLayerMask)) ::UnityEngine::LayerMask cutEffectParticlesLayerMask;

  /// @brief Field noteDebrisLayer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_noteDebrisLayer, put = setStaticF_noteDebrisLayer)) int32_t noteDebrisLayer;

  /// @brief Field noteDebrisLayerMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_noteDebrisLayerMask, put = setStaticF_noteDebrisLayerMask)) ::UnityEngine::LayerMask noteDebrisLayerMask;

  /// @brief Field noteLayerMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_noteLayerMask, put = setStaticF_noteLayerMask)) ::UnityEngine::LayerMask noteLayerMask;

  /// @brief Field saberLayerMask, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_saberLayerMask, put = setStaticF_saberLayerMask)) ::UnityEngine::LayerMask saberLayerMask;

  /// @brief Method GetLayer, addr 0x26a2430, size 0x8, virtual false, abstract: false, final false
  static inline int32_t GetLayer(::StringW layerName);

  /// @brief Method GetLayerMask, addr 0x26a23d8, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask GetLayerMask(::StringW layerName);

  /// @brief Method GetLayerMask, addr 0x26a2408, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::LayerMask GetLayerMask(int32_t layerNum);

  static inline ::GlobalNamespace::LayerMasks* New_ctor();

  /// @brief Method .ctor, addr 0x26a2438, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_cutEffectParticlesLayer();

  static inline ::UnityEngine::LayerMask getStaticF_cutEffectParticlesLayerMask();

  static inline int32_t getStaticF_noteDebrisLayer();

  static inline ::UnityEngine::LayerMask getStaticF_noteDebrisLayerMask();

  static inline ::UnityEngine::LayerMask getStaticF_noteLayerMask();

  static inline ::UnityEngine::LayerMask getStaticF_saberLayerMask();

  static inline void setStaticF_cutEffectParticlesLayer(int32_t value);

  static inline void setStaticF_cutEffectParticlesLayerMask(::UnityEngine::LayerMask value);

  static inline void setStaticF_noteDebrisLayer(int32_t value);

  static inline void setStaticF_noteDebrisLayerMask(::UnityEngine::LayerMask value);

  static inline void setStaticF_noteLayerMask(::UnityEngine::LayerMask value);

  static inline void setStaticF_saberLayerMask(::UnityEngine::LayerMask value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LayerMasks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LayerMasks(LayerMasks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LayerMasks(LayerMasks const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19201 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LayerMasks, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LayerMasks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LayerMasks*, "", "LayerMasks");
