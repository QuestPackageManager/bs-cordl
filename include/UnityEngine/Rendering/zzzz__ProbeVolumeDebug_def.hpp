#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeDebug.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__DebugProbeShadingMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeDebug)
namespace System {
class Action;
}
namespace UnityEngine::Rendering {
class IDebugData;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ProbeVolumeDebug;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeVolumeDebug);
// Dependencies System.Object, UnityEngine.Rendering.DebugProbeShadingMode, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeVolumeDebug
class CORDL_TYPE ProbeVolumeDebug : public ::System::Object {
public:
  // Declarations
  /// @brief Field autoDrawProbes, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_autoDrawProbes, put = __cordl_internal_set_autoDrawProbes)) bool autoDrawProbes;

  /// @brief Field currentOffset, offset 0xffffffff, size 0xc
  __declspec(property(get = getStaticF_currentOffset, put = setStaticF_currentOffset)) ::UnityEngine::Vector3 currentOffset;

  /// @brief Field debugStreaming, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_debugStreaming, put = __cordl_internal_set_debugStreaming)) bool debugStreaming;

  /// @brief Field debugWithSamplingNoise, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_debugWithSamplingNoise, put = __cordl_internal_set_debugWithSamplingNoise)) bool debugWithSamplingNoise;

  /// @brief Field displayCellStreamingScore, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get_displayCellStreamingScore, put = __cordl_internal_set_displayCellStreamingScore)) bool displayCellStreamingScore;

  /// @brief Field displayIndexFragmentation, offset 0x52, size 0x1
  __declspec(property(get = __cordl_internal_get_displayIndexFragmentation, put = __cordl_internal_set_displayIndexFragmentation)) bool displayIndexFragmentation;

  /// @brief Field drawBricks, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_drawBricks, put = __cordl_internal_set_drawBricks)) bool drawBricks;

  /// @brief Field drawCells, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_drawCells, put = __cordl_internal_set_drawCells)) bool drawCells;

  /// @brief Field drawProbeSamplingDebug, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_drawProbeSamplingDebug, put = __cordl_internal_set_drawProbeSamplingDebug)) bool drawProbeSamplingDebug;

  /// @brief Field drawProbes, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_drawProbes, put = __cordl_internal_set_drawProbes)) bool drawProbes;

  /// @brief Field drawVirtualOffsetPush, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_drawVirtualOffsetPush, put = __cordl_internal_set_drawVirtualOffsetPush)) bool drawVirtualOffsetPush;

  /// @brief Field exposureCompensation, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_exposureCompensation, put = __cordl_internal_set_exposureCompensation)) float_t exposureCompensation;

  /// @brief Field freezeStreaming, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_freezeStreaming, put = __cordl_internal_set_freezeStreaming)) bool freezeStreaming;

  /// @brief Field isolationProbeDebug, offset 0x5b, size 0x1
  __declspec(property(get = __cordl_internal_get_isolationProbeDebug, put = __cordl_internal_set_isolationProbeDebug)) bool isolationProbeDebug;

  /// @brief Field maxSubdivToVisualize, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSubdivToVisualize, put = __cordl_internal_set_maxSubdivToVisualize)) int32_t maxSubdivToVisualize;

  /// @brief Field minSubdivToVisualize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_minSubdivToVisualize, put = __cordl_internal_set_minSubdivToVisualize)) int32_t minSubdivToVisualize;

  /// @brief Field offsetSize, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_offsetSize, put = __cordl_internal_set_offsetSize)) float_t offsetSize;

  /// @brief Field otherStateIndex, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_otherStateIndex, put = __cordl_internal_set_otherStateIndex)) int32_t otherStateIndex;

  /// @brief Field probeCullingDistance, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_probeCullingDistance, put = __cordl_internal_set_probeCullingDistance)) float_t probeCullingDistance;

  /// @brief Field probeSamplingDebugSize, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_probeSamplingDebugSize, put = __cordl_internal_set_probeSamplingDebugSize)) float_t probeSamplingDebugSize;

  /// @brief Field probeShading, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_probeShading, put = __cordl_internal_set_probeShading)) ::UnityEngine::Rendering::DebugProbeShadingMode probeShading;

  /// @brief Field probeSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_probeSize, put = __cordl_internal_set_probeSize)) float_t probeSize;

  /// @brief Field realtimeSubdivision, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_realtimeSubdivision, put = __cordl_internal_set_realtimeSubdivision)) bool realtimeSubdivision;

  /// @brief Field s_ActiveAdjustmentVolumes, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ActiveAdjustmentVolumes, put = setStaticF_s_ActiveAdjustmentVolumes)) int32_t s_ActiveAdjustmentVolumes;

  /// @brief Field samplingRenderingLayer, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_samplingRenderingLayer, put = __cordl_internal_set_samplingRenderingLayer)) uint32_t samplingRenderingLayer;

  /// @brief Field subdivisionCellUpdatePerFrame, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_subdivisionCellUpdatePerFrame, put = __cordl_internal_set_subdivisionCellUpdatePerFrame)) int32_t subdivisionCellUpdatePerFrame;

  /// @brief Field subdivisionDelayInSeconds, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_subdivisionDelayInSeconds, put = __cordl_internal_set_subdivisionDelayInSeconds)) float_t subdivisionDelayInSeconds;

  /// @brief Field subdivisionViewCullingDistance, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_subdivisionViewCullingDistance, put = __cordl_internal_set_subdivisionViewCullingDistance)) float_t subdivisionViewCullingDistance;

  /// @brief Field verboseStreamingLog, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_verboseStreamingLog, put = __cordl_internal_set_verboseStreamingLog)) bool verboseStreamingLog;

  /// @brief Field visibleLayers, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_visibleLayers, put = __cordl_internal_set_visibleLayers)) uint8_t visibleLayers;

  /// @brief Convert operator to "::UnityEngine::Rendering::IDebugData"
  constexpr operator ::UnityEngine::Rendering::IDebugData*() noexcept;

  /// @brief Method GetReset, addr 0x6572de8, size 0x7c, virtual true, abstract: false, final true
  inline ::System::Action* GetReset();

  /// @brief Method Init, addr 0x6572d7c, size 0x6c, virtual false, abstract: false, final false
  inline void Init();

  static inline ::UnityEngine::Rendering::ProbeVolumeDebug* New_ctor();

  /// @brief Method <GetReset>b__32_0, addr 0x6572e64, size 0x6c, virtual false, abstract: false, final false
  inline void _GetReset_b__32_0();

  constexpr bool const& __cordl_internal_get_autoDrawProbes() const;

  constexpr bool& __cordl_internal_get_autoDrawProbes();

  constexpr bool const& __cordl_internal_get_debugStreaming() const;

  constexpr bool& __cordl_internal_get_debugStreaming();

  constexpr bool const& __cordl_internal_get_debugWithSamplingNoise() const;

  constexpr bool& __cordl_internal_get_debugWithSamplingNoise();

  constexpr bool const& __cordl_internal_get_displayCellStreamingScore() const;

  constexpr bool& __cordl_internal_get_displayCellStreamingScore();

  constexpr bool const& __cordl_internal_get_displayIndexFragmentation() const;

  constexpr bool& __cordl_internal_get_displayIndexFragmentation();

  constexpr bool const& __cordl_internal_get_drawBricks() const;

  constexpr bool& __cordl_internal_get_drawBricks();

  constexpr bool const& __cordl_internal_get_drawCells() const;

  constexpr bool& __cordl_internal_get_drawCells();

  constexpr bool const& __cordl_internal_get_drawProbeSamplingDebug() const;

  constexpr bool& __cordl_internal_get_drawProbeSamplingDebug();

  constexpr bool const& __cordl_internal_get_drawProbes() const;

  constexpr bool& __cordl_internal_get_drawProbes();

  constexpr bool const& __cordl_internal_get_drawVirtualOffsetPush() const;

  constexpr bool& __cordl_internal_get_drawVirtualOffsetPush();

  constexpr float_t const& __cordl_internal_get_exposureCompensation() const;

  constexpr float_t& __cordl_internal_get_exposureCompensation();

  constexpr bool const& __cordl_internal_get_freezeStreaming() const;

  constexpr bool& __cordl_internal_get_freezeStreaming();

  constexpr bool const& __cordl_internal_get_isolationProbeDebug() const;

  constexpr bool& __cordl_internal_get_isolationProbeDebug();

  constexpr int32_t const& __cordl_internal_get_maxSubdivToVisualize() const;

  constexpr int32_t& __cordl_internal_get_maxSubdivToVisualize();

  constexpr int32_t const& __cordl_internal_get_minSubdivToVisualize() const;

  constexpr int32_t& __cordl_internal_get_minSubdivToVisualize();

  constexpr float_t const& __cordl_internal_get_offsetSize() const;

  constexpr float_t& __cordl_internal_get_offsetSize();

  constexpr int32_t const& __cordl_internal_get_otherStateIndex() const;

  constexpr int32_t& __cordl_internal_get_otherStateIndex();

  constexpr float_t const& __cordl_internal_get_probeCullingDistance() const;

  constexpr float_t& __cordl_internal_get_probeCullingDistance();

  constexpr float_t const& __cordl_internal_get_probeSamplingDebugSize() const;

  constexpr float_t& __cordl_internal_get_probeSamplingDebugSize();

  constexpr ::UnityEngine::Rendering::DebugProbeShadingMode const& __cordl_internal_get_probeShading() const;

  constexpr ::UnityEngine::Rendering::DebugProbeShadingMode& __cordl_internal_get_probeShading();

  constexpr float_t const& __cordl_internal_get_probeSize() const;

  constexpr float_t& __cordl_internal_get_probeSize();

  constexpr bool const& __cordl_internal_get_realtimeSubdivision() const;

  constexpr bool& __cordl_internal_get_realtimeSubdivision();

  constexpr uint32_t const& __cordl_internal_get_samplingRenderingLayer() const;

  constexpr uint32_t& __cordl_internal_get_samplingRenderingLayer();

  constexpr int32_t const& __cordl_internal_get_subdivisionCellUpdatePerFrame() const;

  constexpr int32_t& __cordl_internal_get_subdivisionCellUpdatePerFrame();

  constexpr float_t const& __cordl_internal_get_subdivisionDelayInSeconds() const;

  constexpr float_t& __cordl_internal_get_subdivisionDelayInSeconds();

  constexpr float_t const& __cordl_internal_get_subdivisionViewCullingDistance() const;

  constexpr float_t& __cordl_internal_get_subdivisionViewCullingDistance();

  constexpr bool const& __cordl_internal_get_verboseStreamingLog() const;

  constexpr bool& __cordl_internal_get_verboseStreamingLog();

  constexpr uint8_t const& __cordl_internal_get_visibleLayers() const;

  constexpr uint8_t& __cordl_internal_get_visibleLayers();

  constexpr void __cordl_internal_set_autoDrawProbes(bool value);

  constexpr void __cordl_internal_set_debugStreaming(bool value);

  constexpr void __cordl_internal_set_debugWithSamplingNoise(bool value);

  constexpr void __cordl_internal_set_displayCellStreamingScore(bool value);

  constexpr void __cordl_internal_set_displayIndexFragmentation(bool value);

  constexpr void __cordl_internal_set_drawBricks(bool value);

  constexpr void __cordl_internal_set_drawCells(bool value);

  constexpr void __cordl_internal_set_drawProbeSamplingDebug(bool value);

  constexpr void __cordl_internal_set_drawProbes(bool value);

  constexpr void __cordl_internal_set_drawVirtualOffsetPush(bool value);

  constexpr void __cordl_internal_set_exposureCompensation(float_t value);

  constexpr void __cordl_internal_set_freezeStreaming(bool value);

  constexpr void __cordl_internal_set_isolationProbeDebug(bool value);

  constexpr void __cordl_internal_set_maxSubdivToVisualize(int32_t value);

  constexpr void __cordl_internal_set_minSubdivToVisualize(int32_t value);

  constexpr void __cordl_internal_set_offsetSize(float_t value);

  constexpr void __cordl_internal_set_otherStateIndex(int32_t value);

  constexpr void __cordl_internal_set_probeCullingDistance(float_t value);

  constexpr void __cordl_internal_set_probeSamplingDebugSize(float_t value);

  constexpr void __cordl_internal_set_probeShading(::UnityEngine::Rendering::DebugProbeShadingMode value);

  constexpr void __cordl_internal_set_probeSize(float_t value);

  constexpr void __cordl_internal_set_realtimeSubdivision(bool value);

  constexpr void __cordl_internal_set_samplingRenderingLayer(uint32_t value);

  constexpr void __cordl_internal_set_subdivisionCellUpdatePerFrame(int32_t value);

  constexpr void __cordl_internal_set_subdivisionDelayInSeconds(float_t value);

  constexpr void __cordl_internal_set_subdivisionViewCullingDistance(float_t value);

  constexpr void __cordl_internal_set_verboseStreamingLog(bool value);

  constexpr void __cordl_internal_set_visibleLayers(uint8_t value);

  /// @brief Method .ctor, addr 0x6572d10, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Vector3 getStaticF_currentOffset();

  static inline int32_t getStaticF_s_ActiveAdjustmentVolumes();

  /// @brief Convert to "::UnityEngine::Rendering::IDebugData"
  constexpr ::UnityEngine::Rendering::IDebugData* i___UnityEngine__Rendering__IDebugData() noexcept;

  static inline void setStaticF_currentOffset(::UnityEngine::Vector3 value);

  static inline void setStaticF_s_ActiveAdjustmentVolumes(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeDebug();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebug", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeVolumeDebug(ProbeVolumeDebug&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeVolumeDebug", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeVolumeDebug(ProbeVolumeDebug const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12093 };

  /// @brief Field drawProbes, offset: 0x10, size: 0x1, def value: None
  bool ___drawProbes;

  /// @brief Field drawBricks, offset: 0x11, size: 0x1, def value: None
  bool ___drawBricks;

  /// @brief Field drawCells, offset: 0x12, size: 0x1, def value: None
  bool ___drawCells;

  /// @brief Field realtimeSubdivision, offset: 0x13, size: 0x1, def value: None
  bool ___realtimeSubdivision;

  /// @brief Field subdivisionCellUpdatePerFrame, offset: 0x14, size: 0x4, def value: None
  int32_t ___subdivisionCellUpdatePerFrame;

  /// @brief Field subdivisionDelayInSeconds, offset: 0x18, size: 0x4, def value: None
  float_t ___subdivisionDelayInSeconds;

  /// @brief Field probeShading, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::DebugProbeShadingMode ___probeShading;

  /// @brief Field probeSize, offset: 0x20, size: 0x4, def value: None
  float_t ___probeSize;

  /// @brief Field subdivisionViewCullingDistance, offset: 0x24, size: 0x4, def value: None
  float_t ___subdivisionViewCullingDistance;

  /// @brief Field probeCullingDistance, offset: 0x28, size: 0x4, def value: None
  float_t ___probeCullingDistance;

  /// @brief Field maxSubdivToVisualize, offset: 0x2c, size: 0x4, def value: None
  int32_t ___maxSubdivToVisualize;

  /// @brief Field minSubdivToVisualize, offset: 0x30, size: 0x4, def value: None
  int32_t ___minSubdivToVisualize;

  /// @brief Field exposureCompensation, offset: 0x34, size: 0x4, def value: None
  float_t ___exposureCompensation;

  /// @brief Field drawProbeSamplingDebug, offset: 0x38, size: 0x1, def value: None
  bool ___drawProbeSamplingDebug;

  /// @brief Field probeSamplingDebugSize, offset: 0x3c, size: 0x4, def value: None
  float_t ___probeSamplingDebugSize;

  /// @brief Field debugWithSamplingNoise, offset: 0x40, size: 0x1, def value: None
  bool ___debugWithSamplingNoise;

  /// @brief Field samplingRenderingLayer, offset: 0x44, size: 0x4, def value: None
  uint32_t ___samplingRenderingLayer;

  /// @brief Field drawVirtualOffsetPush, offset: 0x48, size: 0x1, def value: None
  bool ___drawVirtualOffsetPush;

  /// @brief Field offsetSize, offset: 0x4c, size: 0x4, def value: None
  float_t ___offsetSize;

  /// @brief Field freezeStreaming, offset: 0x50, size: 0x1, def value: None
  bool ___freezeStreaming;

  /// @brief Field displayCellStreamingScore, offset: 0x51, size: 0x1, def value: None
  bool ___displayCellStreamingScore;

  /// @brief Field displayIndexFragmentation, offset: 0x52, size: 0x1, def value: None
  bool ___displayIndexFragmentation;

  /// @brief Field otherStateIndex, offset: 0x54, size: 0x4, def value: None
  int32_t ___otherStateIndex;

  /// @brief Field verboseStreamingLog, offset: 0x58, size: 0x1, def value: None
  bool ___verboseStreamingLog;

  /// @brief Field debugStreaming, offset: 0x59, size: 0x1, def value: None
  bool ___debugStreaming;

  /// @brief Field autoDrawProbes, offset: 0x5a, size: 0x1, def value: None
  bool ___autoDrawProbes;

  /// @brief Field isolationProbeDebug, offset: 0x5b, size: 0x1, def value: None
  bool ___isolationProbeDebug;

  /// @brief Field visibleLayers, offset: 0x5c, size: 0x1, def value: None
  uint8_t ___visibleLayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___drawProbes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___drawBricks) == 0x11, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___drawCells) == 0x12, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___realtimeSubdivision) == 0x13, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___subdivisionCellUpdatePerFrame) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___subdivisionDelayInSeconds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___probeShading) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___probeSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___subdivisionViewCullingDistance) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___probeCullingDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___maxSubdivToVisualize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___minSubdivToVisualize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___exposureCompensation) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___drawProbeSamplingDebug) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___probeSamplingDebugSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___debugWithSamplingNoise) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___samplingRenderingLayer) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___drawVirtualOffsetPush) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___offsetSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___freezeStreaming) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___displayCellStreamingScore) == 0x51, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___displayIndexFragmentation) == 0x52, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___otherStateIndex) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___verboseStreamingLog) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___debugStreaming) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___autoDrawProbes) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___isolationProbeDebug) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeDebug, ___visibleLayers) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeDebug, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ProbeVolumeDebug);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeDebug*, "UnityEngine.Rendering", "ProbeVolumeDebug");
