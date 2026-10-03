#pragma once
// IWYU pragma private; include "UnityEngine/LowLevelPhysics2D/PhysicsLowLevelSettings2D.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsBodyDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsChainDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsDistanceJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsFixedJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsHingeJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsRelativeJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsShapeDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsSliderJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWheelJointDefinition_def.hpp"
#include "UnityEngine/LowLevelPhysics2D/zzzz__PhysicsWorldDefinition_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PhysicsLowLevelSettings2D)
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsBodyDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsChainDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsDistanceJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsFixedJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsHingeJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsLayers_LayerNames;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsRelativeJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsShapeDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsSliderJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWheelJointDefinition;
}
namespace UnityEngine::LowLevelPhysics2D {
struct PhysicsWorldDefinition;
}
// Forward declare root types
namespace UnityEngine::LowLevelPhysics2D {
class PhysicsLowLevelSettings2D;
}
// Write type traits
MARK_REF_T(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D*);
DEFINE_IL2CPP_CLASS(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D*, "UnityEngine.LowLevelPhysics2D", "PhysicsLowLevelSettings2D");
// [RequiredByNativeCode]
// Dependencies UnityEngine.LowLevelPhysics2D.PhysicsBodyDefinition, UnityEngine.LowLevelPhysics2D.PhysicsChainDefinition, UnityEngine.LowLevelPhysics2D.PhysicsDistanceJointDefinition,
// UnityEngine.LowLevelPhysics2D.PhysicsFixedJointDefinition, UnityEngine.LowLevelPhysics2D.PhysicsHingeJointDefinition, UnityEngine.LowLevelPhysics2D.PhysicsRelativeJointDefinition,
// UnityEngine.LowLevelPhysics2D.PhysicsShapeDefinition, UnityEngine.LowLevelPhysics2D.PhysicsSliderJointDefinition, UnityEngine.LowLevelPhysics2D.PhysicsWheelJointDefinition,
// UnityEngine.LowLevelPhysics2D.PhysicsWorldDefinition, UnityEngine.ScriptableObject
namespace UnityEngine::LowLevelPhysics2D {
// Is value type: false
// CS Name: UnityEngine.LowLevelPhysics2D.PhysicsLowLevelSettings2D
class CORDL_TYPE PhysicsLowLevelSettings2D : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_bypassLowLevel, put = set_bypassLowLevel)) bool bypassLowLevel;

  /// @brief [Range(1, 64)]
  __declspec(property(get = get_concurrentSimulations, put = set_concurrentSimulations)) int32_t concurrentSimulations;

  __declspec(property(get = get_drawInBuild, put = set_drawInBuild)) bool drawInBuild;

  __declspec(property(get = get_lengthUnitsPerMeter, put = set_lengthUnitsPerMeter)) float_t lengthUnitsPerMeter;

  /// @brief Field m_BypassLowLevel, offset 0x6c9, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BypassLowLevel, put = __cordl_internal_set_m_BypassLowLevel)) bool m_BypassLowLevel;

  /// @brief Field m_ConcurrentSimulations, offset 0x6c0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ConcurrentSimulations, put = __cordl_internal_set_m_ConcurrentSimulations)) int32_t m_ConcurrentSimulations;

  /// @brief Field m_DrawInBuild, offset 0x6c8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DrawInBuild, put = __cordl_internal_set_m_DrawInBuild)) bool m_DrawInBuild;

  /// @brief Field m_LengthUnitsPerMeter, offset 0x6c4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LengthUnitsPerMeter, put = __cordl_internal_set_m_LengthUnitsPerMeter)) float_t m_LengthUnitsPerMeter;

  /// @brief Field m_PhysicsBodyDefinition, offset 0x35c, size 0x44
  __declspec(property(get = __cordl_internal_get_m_PhysicsBodyDefinition,
                      put = __cordl_internal_set_m_PhysicsBodyDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition m_PhysicsBodyDefinition;

  /// @brief Field m_PhysicsChainDefinition, offset 0x3f0, size 0x40
  __declspec(property(get = __cordl_internal_get_m_PhysicsChainDefinition,
                      put = __cordl_internal_set_m_PhysicsChainDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition m_PhysicsChainDefinition;

  /// @brief Field m_PhysicsDistanceJointDefinition, offset 0x430, size 0x78
  __declspec(property(get = __cordl_internal_get_m_PhysicsDistanceJointDefinition,
                      put = __cordl_internal_set_m_PhysicsDistanceJointDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition m_PhysicsDistanceJointDefinition;

  /// @brief Field m_PhysicsFixedJointDefinition, offset 0x4a8, size 0x58
  __declspec(property(get = __cordl_internal_get_m_PhysicsFixedJointDefinition,
                      put = __cordl_internal_set_m_PhysicsFixedJointDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition m_PhysicsFixedJointDefinition;

  /// @brief Field m_PhysicsHingeJointDefinition, offset 0x500, size 0x70
  __declspec(property(get = __cordl_internal_get_m_PhysicsHingeJointDefinition,
                      put = __cordl_internal_set_m_PhysicsHingeJointDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition m_PhysicsHingeJointDefinition;

  /// @brief Field m_PhysicsLayerNames, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PhysicsLayerNames, put = __cordl_internal_set_m_PhysicsLayerNames)) ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* m_PhysicsLayerNames;

  /// @brief Field m_PhysicsRelativeJointDefinition, offset 0x570, size 0x74
  __declspec(property(get = __cordl_internal_get_m_PhysicsRelativeJointDefinition,
                      put = __cordl_internal_set_m_PhysicsRelativeJointDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition m_PhysicsRelativeJointDefinition;

  /// @brief Field m_PhysicsShapeDefinition, offset 0x3a0, size 0x50
  __declspec(property(get = __cordl_internal_get_m_PhysicsShapeDefinition,
                      put = __cordl_internal_set_m_PhysicsShapeDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition m_PhysicsShapeDefinition;

  /// @brief Field m_PhysicsSliderJointDefinition, offset 0x5e4, size 0x70
  __declspec(property(get = __cordl_internal_get_m_PhysicsSliderJointDefinition,
                      put = __cordl_internal_set_m_PhysicsSliderJointDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition m_PhysicsSliderJointDefinition;

  /// @brief Field m_PhysicsWheelJointDefinition, offset 0x654, size 0x6c
  __declspec(property(get = __cordl_internal_get_m_PhysicsWheelJointDefinition,
                      put = __cordl_internal_set_m_PhysicsWheelJointDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition m_PhysicsWheelJointDefinition;

  /// @brief Field m_PhysicsWorldDefinition, offset 0x24, size 0x338
  __declspec(property(get = __cordl_internal_get_m_PhysicsWorldDefinition,
                      put = __cordl_internal_set_m_PhysicsWorldDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition m_PhysicsWorldDefinition;

  /// @brief Field m_UseFullLayers, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseFullLayers, put = __cordl_internal_set_m_UseFullLayers)) bool m_UseFullLayers;

  __declspec(property(get = get_physicsBodyDefinition, put = set_physicsBodyDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition physicsBodyDefinition;

  __declspec(property(get = get_physicsChainDefinition, put = set_physicsChainDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition physicsChainDefinition;

  __declspec(property(get = get_physicsLayerNames, put = set_physicsLayerNames)) ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* physicsLayerNames;

  __declspec(property(get = get_physicsShapeDefinition, put = set_physicsShapeDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition physicsShapeDefinition;

  __declspec(property(get = get_physicsWorldDefinition, put = set_physicsWorldDefinition)) ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition physicsWorldDefinition;

  __declspec(property(get = get_useFullLayers, put = set_useFullLayers)) bool useFullLayers;

  /// [RequiredByNativeCode]
  /// @brief Method GetBypassLowLevel, addr 0x6fd1f84, size 0x8, virtual false, abstract: false, final false
  inline bool GetBypassLowLevel();

  /// [RequiredByNativeCode]
  /// @brief Method GetConcurrentSimulations, addr 0x6fd1f6c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetConcurrentSimulations();

  /// [RequiredByNativeCode]
  /// @brief Method GetDrawInBuild, addr 0x6fd1f7c, size 0x8, virtual false, abstract: false, final false
  inline bool GetDrawInBuild();

  /// [RequiredByNativeCode]
  /// @brief Method GetLengthUnitsPerMeter, addr 0x6fd1f74, size 0x8, virtual false, abstract: false, final false
  inline float_t GetLengthUnitsPerMeter();

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsBodyDefinition, addr 0x6fd1eb4, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsBodyDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsChainDefinition, addr 0x6fd1edc, size 0x18, virtual false, abstract: false, final false
  inline void GetPhysicsChainDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsDistanceJointDefinition, addr 0x6fd1ef4, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsDistanceJointDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsFixedJointDefinition, addr 0x6fd1f08, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsFixedJointDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsHingeJointDefinition, addr 0x6fd1f1c, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsHingeJointDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsLayerNames, addr 0x6fd1e94, size 0xc, virtual false, abstract: false, final false
  inline void GetPhysicsLayerNames(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*> layerNames);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsRelativeJointDefinition, addr 0x6fd1f30, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsRelativeJointDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsShapeDefinition, addr 0x6fd1ec8, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsShapeDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsSliderJointDefinition, addr 0x6fd1f44, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsSliderJointDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsWheelJointDefinition, addr 0x6fd1f58, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsWheelJointDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetPhysicsWorldDefinition, addr 0x6fd1ea0, size 0x14, virtual false, abstract: false, final false
  inline void GetPhysicsWorldDefinition(::by_ref<::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition> definition);

  /// [RequiredByNativeCode]
  /// @brief Method GetUseFullLayers, addr 0x6fd1f8c, size 0x8, virtual false, abstract: false, final false
  inline bool GetUseFullLayers();

  static inline ::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D* New_ctor();

  /// @brief Method Reset, addr 0x6fd1558, size 0x210, virtual false, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get_m_BypassLowLevel() const;

  constexpr bool& __cordl_internal_get_m_BypassLowLevel();

  constexpr int32_t const& __cordl_internal_get_m_ConcurrentSimulations() const;

  constexpr int32_t& __cordl_internal_get_m_ConcurrentSimulations();

  constexpr bool const& __cordl_internal_get_m_DrawInBuild() const;

  constexpr bool& __cordl_internal_get_m_DrawInBuild();

  constexpr float_t const& __cordl_internal_get_m_LengthUnitsPerMeter() const;

  constexpr float_t& __cordl_internal_get_m_LengthUnitsPerMeter();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition const& __cordl_internal_get_m_PhysicsBodyDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition& __cordl_internal_get_m_PhysicsBodyDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition const& __cordl_internal_get_m_PhysicsChainDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition& __cordl_internal_get_m_PhysicsChainDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition const& __cordl_internal_get_m_PhysicsDistanceJointDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition& __cordl_internal_get_m_PhysicsDistanceJointDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition const& __cordl_internal_get_m_PhysicsFixedJointDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition& __cordl_internal_get_m_PhysicsFixedJointDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition const& __cordl_internal_get_m_PhysicsHingeJointDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition& __cordl_internal_get_m_PhysicsHingeJointDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* const& __cordl_internal_get_m_PhysicsLayerNames() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames*& __cordl_internal_get_m_PhysicsLayerNames();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition const& __cordl_internal_get_m_PhysicsRelativeJointDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition& __cordl_internal_get_m_PhysicsRelativeJointDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition const& __cordl_internal_get_m_PhysicsShapeDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition& __cordl_internal_get_m_PhysicsShapeDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition const& __cordl_internal_get_m_PhysicsSliderJointDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition& __cordl_internal_get_m_PhysicsSliderJointDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition const& __cordl_internal_get_m_PhysicsWheelJointDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition& __cordl_internal_get_m_PhysicsWheelJointDefinition();

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition const& __cordl_internal_get_m_PhysicsWorldDefinition() const;

  constexpr ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition& __cordl_internal_get_m_PhysicsWorldDefinition();

  constexpr bool const& __cordl_internal_get_m_UseFullLayers() const;

  constexpr bool& __cordl_internal_get_m_UseFullLayers();

  constexpr void __cordl_internal_set_m_BypassLowLevel(bool value);

  constexpr void __cordl_internal_set_m_ConcurrentSimulations(int32_t value);

  constexpr void __cordl_internal_set_m_DrawInBuild(bool value);

  constexpr void __cordl_internal_set_m_LengthUnitsPerMeter(float_t value);

  constexpr void __cordl_internal_set_m_PhysicsBodyDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsChainDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsDistanceJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsFixedJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsHingeJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsLayerNames(::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* value);

  constexpr void __cordl_internal_set_m_PhysicsRelativeJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsShapeDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsSliderJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsWheelJointDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition value);

  constexpr void __cordl_internal_set_m_PhysicsWorldDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition value);

  constexpr void __cordl_internal_set_m_UseFullLayers(bool value);

  /// @brief Method .ctor, addr 0x6fd153c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bypassLowLevel, addr 0x6fd1e84, size 0x8, virtual false, abstract: false, final false
  inline bool get_bypassLowLevel();

  /// @brief Method get_concurrentSimulations, addr 0x6fd1e30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_concurrentSimulations();

  /// @brief Method get_drawInBuild, addr 0x6fd1e74, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawInBuild();

  /// @brief Method get_lengthUnitsPerMeter, addr 0x6fd1e54, size 0x8, virtual false, abstract: false, final false
  inline float_t get_lengthUnitsPerMeter();

  /// @brief Method get_physicsBodyDefinition, addr 0x6fd1dc8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition get_physicsBodyDefinition();

  /// @brief Method get_physicsChainDefinition, addr 0x6fd1e00, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition get_physicsChainDefinition();

  /// @brief Method get_physicsLayerNames, addr 0x6fd1d8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* get_physicsLayerNames();

  /// @brief Method get_physicsShapeDefinition, addr 0x6fd1de4, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition get_physicsShapeDefinition();

  /// @brief Method get_physicsWorldDefinition, addr 0x6fd1dac, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition get_physicsWorldDefinition();

  /// @brief Method get_useFullLayers, addr 0x6fd1d9c, size 0x8, virtual false, abstract: false, final false
  inline bool get_useFullLayers();

  /// @brief Method set_bypassLowLevel, addr 0x6fd1e8c, size 0x8, virtual false, abstract: false, final false
  inline void set_bypassLowLevel(bool value);

  /// @brief Method set_concurrentSimulations, addr 0x6fd1e38, size 0x1c, virtual false, abstract: false, final false
  inline void set_concurrentSimulations(int32_t value);

  /// @brief Method set_drawInBuild, addr 0x6fd1e7c, size 0x8, virtual false, abstract: false, final false
  inline void set_drawInBuild(bool value);

  /// @brief Method set_lengthUnitsPerMeter, addr 0x6fd1e5c, size 0x18, virtual false, abstract: false, final false
  inline void set_lengthUnitsPerMeter(float_t value);

  /// @brief Method set_physicsBodyDefinition, addr 0x6fd1dd8, size 0xc, virtual false, abstract: false, final false
  inline void set_physicsBodyDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition value);

  /// @brief Method set_physicsChainDefinition, addr 0x6fd1e18, size 0x18, virtual false, abstract: false, final false
  inline void set_physicsChainDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition value);

  /// @brief Method set_physicsLayerNames, addr 0x6fd1d94, size 0x8, virtual false, abstract: false, final false
  inline void set_physicsLayerNames(::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* value);

  /// @brief Method set_physicsShapeDefinition, addr 0x6fd1df4, size 0xc, virtual false, abstract: false, final false
  inline void set_physicsShapeDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition value);

  /// @brief Method set_physicsWorldDefinition, addr 0x6fd1dbc, size 0xc, virtual false, abstract: false, final false
  inline void set_physicsWorldDefinition(::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition value);

  /// @brief Method set_useFullLayers, addr 0x6fd1da4, size 0x8, virtual false, abstract: false, final false
  inline void set_useFullLayers(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PhysicsLowLevelSettings2D();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PhysicsLowLevelSettings2D", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PhysicsLowLevelSettings2D(PhysicsLowLevelSettings2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PhysicsLowLevelSettings2D", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PhysicsLowLevelSettings2D(PhysicsLowLevelSettings2D const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21506 };

  /// [Header("Layers")]
  /// [SerializeField]
  /// @brief Field m_PhysicsLayerNames, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsLayers_LayerNames* ___m_PhysicsLayerNames;

  /// [SerializeField]
  /// @brief Field m_UseFullLayers, offset: 0x20, size: 0x1, def value: None
  bool ___m_UseFullLayers;

  /// [SerializeField]
  /// [Header("Default Definitions")]
  /// @brief Field m_PhysicsWorldDefinition, offset: 0x24, size: 0x338, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWorldDefinition ___m_PhysicsWorldDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsBodyDefinition, offset: 0x35c, size: 0x44, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsBodyDefinition ___m_PhysicsBodyDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsShapeDefinition, offset: 0x3a0, size: 0x50, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsShapeDefinition ___m_PhysicsShapeDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsChainDefinition, offset: 0x3f0, size: 0x40, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsChainDefinition ___m_PhysicsChainDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsDistanceJointDefinition, offset: 0x430, size: 0x78, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsDistanceJointDefinition ___m_PhysicsDistanceJointDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsFixedJointDefinition, offset: 0x4a8, size: 0x58, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsFixedJointDefinition ___m_PhysicsFixedJointDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsHingeJointDefinition, offset: 0x500, size: 0x70, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsHingeJointDefinition ___m_PhysicsHingeJointDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsRelativeJointDefinition, offset: 0x570, size: 0x74, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsRelativeJointDefinition ___m_PhysicsRelativeJointDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsSliderJointDefinition, offset: 0x5e4, size: 0x70, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsSliderJointDefinition ___m_PhysicsSliderJointDefinition;

  /// [SerializeField]
  /// @brief Field m_PhysicsWheelJointDefinition, offset: 0x654, size: 0x6c, def value: None
  ::UnityEngine::LowLevelPhysics2D::PhysicsWheelJointDefinition ___m_PhysicsWheelJointDefinition;

  /// [SerializeField]
  /// [Range(1, 64)]
  /// [Header("Globals")]
  /// @brief Field m_ConcurrentSimulations, offset: 0x6c0, size: 0x4, def value: None
  int32_t ___m_ConcurrentSimulations;

  /// [SerializeField]
  /// [Min(0.00001)]
  /// @brief Field m_LengthUnitsPerMeter, offset: 0x6c4, size: 0x4, def value: None
  float_t ___m_LengthUnitsPerMeter;

  /// [SerializeField]
  /// @brief Field m_DrawInBuild, offset: 0x6c8, size: 0x1, def value: None
  bool ___m_DrawInBuild;

  /// [SerializeField]
  /// @brief Field m_BypassLowLevel, offset: 0x6c9, size: 0x1, def value: None
  bool ___m_BypassLowLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsLayerNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_UseFullLayers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsWorldDefinition) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsBodyDefinition) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsShapeDefinition) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsChainDefinition) == 0x3f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsDistanceJointDefinition) == 0x430, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsFixedJointDefinition) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsHingeJointDefinition) == 0x500, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsRelativeJointDefinition) == 0x570, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsSliderJointDefinition) == 0x5e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_PhysicsWheelJointDefinition) == 0x654, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_ConcurrentSimulations) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_LengthUnitsPerMeter) == 0x6c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_DrawInBuild) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D, ___m_BypassLowLevel) == 0x6c9, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::LowLevelPhysics2D::PhysicsLowLevelSettings2D) == 0x6d0, "Size mismatch!");

} // namespace UnityEngine::LowLevelPhysics2D
