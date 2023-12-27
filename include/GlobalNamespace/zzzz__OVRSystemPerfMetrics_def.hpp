#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSystemPerfMetrics)
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;
}
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__PerfMetrics;
}
namespace GlobalNamespace {
class __OVRNetwork__OVRNetworkTcpServer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSystemPerfMetrics;
}
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;
}
namespace GlobalNamespace {
class __OVRSystemPerfMetrics__PerfMetrics;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSystemPerfMetrics);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer);
MARK_REF_PTR_T(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics);
// Type: ::PerfMetrics
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8182))
// CS Name: ::OVRSystemPerfMetrics::PerfMetrics*
class CORDL_TYPE __OVRSystemPerfMetrics__PerfMetrics : public ::System::Object {
public:
  // Declarations
  /// @brief Field frameCount, offset 0x10, size 0x4
  __declspec(property(get = __get_frameCount, put = __set_frameCount)) int32_t frameCount;

  /// @brief Field frameTime, offset 0x14, size 0x4
  __declspec(property(get = __get_frameTime, put = __set_frameTime)) float_t frameTime;

  /// @brief Field deltaFrameTime, offset 0x18, size 0x4
  __declspec(property(get = __get_deltaFrameTime, put = __set_deltaFrameTime)) float_t deltaFrameTime;

  /// @brief Field appCpuTime_IsValid, offset 0x1c, size 0x1
  __declspec(property(get = __get_appCpuTime_IsValid, put = __set_appCpuTime_IsValid)) bool appCpuTime_IsValid;

  /// @brief Field appCpuTime, offset 0x20, size 0x4
  __declspec(property(get = __get_appCpuTime, put = __set_appCpuTime)) float_t appCpuTime;

  /// @brief Field appGpuTime_IsValid, offset 0x24, size 0x1
  __declspec(property(get = __get_appGpuTime_IsValid, put = __set_appGpuTime_IsValid)) bool appGpuTime_IsValid;

  /// @brief Field appGpuTime, offset 0x28, size 0x4
  __declspec(property(get = __get_appGpuTime, put = __set_appGpuTime)) float_t appGpuTime;

  /// @brief Field compositorCpuTime_IsValid, offset 0x2c, size 0x1
  __declspec(property(get = __get_compositorCpuTime_IsValid, put = __set_compositorCpuTime_IsValid)) bool compositorCpuTime_IsValid;

  /// @brief Field compositorCpuTime, offset 0x30, size 0x4
  __declspec(property(get = __get_compositorCpuTime, put = __set_compositorCpuTime)) float_t compositorCpuTime;

  /// @brief Field compositorGpuTime_IsValid, offset 0x34, size 0x1
  __declspec(property(get = __get_compositorGpuTime_IsValid, put = __set_compositorGpuTime_IsValid)) bool compositorGpuTime_IsValid;

  /// @brief Field compositorGpuTime, offset 0x38, size 0x4
  __declspec(property(get = __get_compositorGpuTime, put = __set_compositorGpuTime)) float_t compositorGpuTime;

  /// @brief Field compositorDroppedFrameCount_IsValid, offset 0x3c, size 0x1
  __declspec(property(get = __get_compositorDroppedFrameCount_IsValid, put = __set_compositorDroppedFrameCount_IsValid)) bool compositorDroppedFrameCount_IsValid;

  /// @brief Field compositorDroppedFrameCount, offset 0x40, size 0x4
  __declspec(property(get = __get_compositorDroppedFrameCount, put = __set_compositorDroppedFrameCount)) int32_t compositorDroppedFrameCount;

  /// @brief Field compositorSpaceWarpMode_IsValid, offset 0x44, size 0x1
  __declspec(property(get = __get_compositorSpaceWarpMode_IsValid, put = __set_compositorSpaceWarpMode_IsValid)) bool compositorSpaceWarpMode_IsValid;

  /// @brief Field compositorSpaceWarpMode, offset 0x48, size 0x4
  __declspec(property(get = __get_compositorSpaceWarpMode, put = __set_compositorSpaceWarpMode)) int32_t compositorSpaceWarpMode;

  /// @brief Field systemGpuUtilPercentage_IsValid, offset 0x4c, size 0x1
  __declspec(property(get = __get_systemGpuUtilPercentage_IsValid, put = __set_systemGpuUtilPercentage_IsValid)) bool systemGpuUtilPercentage_IsValid;

  /// @brief Field systemGpuUtilPercentage, offset 0x50, size 0x4
  __declspec(property(get = __get_systemGpuUtilPercentage, put = __set_systemGpuUtilPercentage)) float_t systemGpuUtilPercentage;

  /// @brief Field systemCpuUtilAveragePercentage_IsValid, offset 0x54, size 0x1
  __declspec(property(get = __get_systemCpuUtilAveragePercentage_IsValid, put = __set_systemCpuUtilAveragePercentage_IsValid)) bool systemCpuUtilAveragePercentage_IsValid;

  /// @brief Field systemCpuUtilAveragePercentage, offset 0x58, size 0x4
  __declspec(property(get = __get_systemCpuUtilAveragePercentage, put = __set_systemCpuUtilAveragePercentage)) float_t systemCpuUtilAveragePercentage;

  /// @brief Field systemCpuUtilWorstPercentage_IsValid, offset 0x5c, size 0x1
  __declspec(property(get = __get_systemCpuUtilWorstPercentage_IsValid, put = __set_systemCpuUtilWorstPercentage_IsValid)) bool systemCpuUtilWorstPercentage_IsValid;

  /// @brief Field systemCpuUtilWorstPercentage, offset 0x60, size 0x4
  __declspec(property(get = __get_systemCpuUtilWorstPercentage, put = __set_systemCpuUtilWorstPercentage)) float_t systemCpuUtilWorstPercentage;

  /// @brief Field deviceCpuClockFrequencyInMHz_IsValid, offset 0x64, size 0x1
  __declspec(property(get = __get_deviceCpuClockFrequencyInMHz_IsValid, put = __set_deviceCpuClockFrequencyInMHz_IsValid)) bool deviceCpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceCpuClockFrequencyInMHz, offset 0x68, size 0x4
  __declspec(property(get = __get_deviceCpuClockFrequencyInMHz, put = __set_deviceCpuClockFrequencyInMHz)) float_t deviceCpuClockFrequencyInMHz;

  /// @brief Field deviceGpuClockFrequencyInMHz_IsValid, offset 0x6c, size 0x1
  __declspec(property(get = __get_deviceGpuClockFrequencyInMHz_IsValid, put = __set_deviceGpuClockFrequencyInMHz_IsValid)) bool deviceGpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceGpuClockFrequencyInMHz, offset 0x70, size 0x4
  __declspec(property(get = __get_deviceGpuClockFrequencyInMHz, put = __set_deviceGpuClockFrequencyInMHz)) float_t deviceGpuClockFrequencyInMHz;

  /// @brief Field deviceCpuClockLevel_IsValid, offset 0x74, size 0x1
  __declspec(property(get = __get_deviceCpuClockLevel_IsValid, put = __set_deviceCpuClockLevel_IsValid)) bool deviceCpuClockLevel_IsValid;

  /// @brief Field deviceCpuClockLevel, offset 0x78, size 0x4
  __declspec(property(get = __get_deviceCpuClockLevel, put = __set_deviceCpuClockLevel)) int32_t deviceCpuClockLevel;

  /// @brief Field deviceGpuClockLevel_IsValid, offset 0x7c, size 0x1
  __declspec(property(get = __get_deviceGpuClockLevel_IsValid, put = __set_deviceGpuClockLevel_IsValid)) bool deviceGpuClockLevel_IsValid;

  /// @brief Field deviceGpuClockLevel, offset 0x80, size 0x4
  __declspec(property(get = __get_deviceGpuClockLevel, put = __set_deviceGpuClockLevel)) int32_t deviceGpuClockLevel;

  /// @brief Field deviceCpuCoreUtilPercentage_IsValid, offset 0x88, size 0x8
  __declspec(property(get = __get_deviceCpuCoreUtilPercentage_IsValid, put = __set_deviceCpuCoreUtilPercentage_IsValid))::ArrayW<bool, ::Array<bool>*> deviceCpuCoreUtilPercentage_IsValid;

  /// @brief Field deviceCpuCoreUtilPercentage, offset 0x90, size 0x8
  __declspec(property(get = __get_deviceCpuCoreUtilPercentage, put = __set_deviceCpuCoreUtilPercentage))::ArrayW<float_t, ::Array<float_t>*> deviceCpuCoreUtilPercentage;

  constexpr int32_t& __get_frameCount();

  constexpr int32_t const& __get_frameCount() const;

  constexpr void __set_frameCount(int32_t value);

  constexpr float_t& __get_frameTime();

  constexpr float_t const& __get_frameTime() const;

  constexpr void __set_frameTime(float_t value);

  constexpr float_t& __get_deltaFrameTime();

  constexpr float_t const& __get_deltaFrameTime() const;

  constexpr void __set_deltaFrameTime(float_t value);

  constexpr bool& __get_appCpuTime_IsValid();

  constexpr bool const& __get_appCpuTime_IsValid() const;

  constexpr void __set_appCpuTime_IsValid(bool value);

  constexpr float_t& __get_appCpuTime();

  constexpr float_t const& __get_appCpuTime() const;

  constexpr void __set_appCpuTime(float_t value);

  constexpr bool& __get_appGpuTime_IsValid();

  constexpr bool const& __get_appGpuTime_IsValid() const;

  constexpr void __set_appGpuTime_IsValid(bool value);

  constexpr float_t& __get_appGpuTime();

  constexpr float_t const& __get_appGpuTime() const;

  constexpr void __set_appGpuTime(float_t value);

  constexpr bool& __get_compositorCpuTime_IsValid();

  constexpr bool const& __get_compositorCpuTime_IsValid() const;

  constexpr void __set_compositorCpuTime_IsValid(bool value);

  constexpr float_t& __get_compositorCpuTime();

  constexpr float_t const& __get_compositorCpuTime() const;

  constexpr void __set_compositorCpuTime(float_t value);

  constexpr bool& __get_compositorGpuTime_IsValid();

  constexpr bool const& __get_compositorGpuTime_IsValid() const;

  constexpr void __set_compositorGpuTime_IsValid(bool value);

  constexpr float_t& __get_compositorGpuTime();

  constexpr float_t const& __get_compositorGpuTime() const;

  constexpr void __set_compositorGpuTime(float_t value);

  constexpr bool& __get_compositorDroppedFrameCount_IsValid();

  constexpr bool const& __get_compositorDroppedFrameCount_IsValid() const;

  constexpr void __set_compositorDroppedFrameCount_IsValid(bool value);

  constexpr int32_t& __get_compositorDroppedFrameCount();

  constexpr int32_t const& __get_compositorDroppedFrameCount() const;

  constexpr void __set_compositorDroppedFrameCount(int32_t value);

  constexpr bool& __get_compositorSpaceWarpMode_IsValid();

  constexpr bool const& __get_compositorSpaceWarpMode_IsValid() const;

  constexpr void __set_compositorSpaceWarpMode_IsValid(bool value);

  constexpr int32_t& __get_compositorSpaceWarpMode();

  constexpr int32_t const& __get_compositorSpaceWarpMode() const;

  constexpr void __set_compositorSpaceWarpMode(int32_t value);

  constexpr bool& __get_systemGpuUtilPercentage_IsValid();

  constexpr bool const& __get_systemGpuUtilPercentage_IsValid() const;

  constexpr void __set_systemGpuUtilPercentage_IsValid(bool value);

  constexpr float_t& __get_systemGpuUtilPercentage();

  constexpr float_t const& __get_systemGpuUtilPercentage() const;

  constexpr void __set_systemGpuUtilPercentage(float_t value);

  constexpr bool& __get_systemCpuUtilAveragePercentage_IsValid();

  constexpr bool const& __get_systemCpuUtilAveragePercentage_IsValid() const;

  constexpr void __set_systemCpuUtilAveragePercentage_IsValid(bool value);

  constexpr float_t& __get_systemCpuUtilAveragePercentage();

  constexpr float_t const& __get_systemCpuUtilAveragePercentage() const;

  constexpr void __set_systemCpuUtilAveragePercentage(float_t value);

  constexpr bool& __get_systemCpuUtilWorstPercentage_IsValid();

  constexpr bool const& __get_systemCpuUtilWorstPercentage_IsValid() const;

  constexpr void __set_systemCpuUtilWorstPercentage_IsValid(bool value);

  constexpr float_t& __get_systemCpuUtilWorstPercentage();

  constexpr float_t const& __get_systemCpuUtilWorstPercentage() const;

  constexpr void __set_systemCpuUtilWorstPercentage(float_t value);

  constexpr bool& __get_deviceCpuClockFrequencyInMHz_IsValid();

  constexpr bool const& __get_deviceCpuClockFrequencyInMHz_IsValid() const;

  constexpr void __set_deviceCpuClockFrequencyInMHz_IsValid(bool value);

  constexpr float_t& __get_deviceCpuClockFrequencyInMHz();

  constexpr float_t const& __get_deviceCpuClockFrequencyInMHz() const;

  constexpr void __set_deviceCpuClockFrequencyInMHz(float_t value);

  constexpr bool& __get_deviceGpuClockFrequencyInMHz_IsValid();

  constexpr bool const& __get_deviceGpuClockFrequencyInMHz_IsValid() const;

  constexpr void __set_deviceGpuClockFrequencyInMHz_IsValid(bool value);

  constexpr float_t& __get_deviceGpuClockFrequencyInMHz();

  constexpr float_t const& __get_deviceGpuClockFrequencyInMHz() const;

  constexpr void __set_deviceGpuClockFrequencyInMHz(float_t value);

  constexpr bool& __get_deviceCpuClockLevel_IsValid();

  constexpr bool const& __get_deviceCpuClockLevel_IsValid() const;

  constexpr void __set_deviceCpuClockLevel_IsValid(bool value);

  constexpr int32_t& __get_deviceCpuClockLevel();

  constexpr int32_t const& __get_deviceCpuClockLevel() const;

  constexpr void __set_deviceCpuClockLevel(int32_t value);

  constexpr bool& __get_deviceGpuClockLevel_IsValid();

  constexpr bool const& __get_deviceGpuClockLevel_IsValid() const;

  constexpr void __set_deviceGpuClockLevel_IsValid(bool value);

  constexpr int32_t& __get_deviceGpuClockLevel();

  constexpr int32_t const& __get_deviceGpuClockLevel() const;

  constexpr void __set_deviceGpuClockLevel(int32_t value);

  constexpr ::ArrayW<bool, ::Array<bool>*>& __get_deviceCpuCoreUtilPercentage_IsValid();

  constexpr ::ArrayW<bool, ::Array<bool>*> const& __get_deviceCpuCoreUtilPercentage_IsValid() const;

  constexpr void __set_deviceCpuCoreUtilPercentage_IsValid(::ArrayW<bool, ::Array<bool>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_deviceCpuCoreUtilPercentage();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_deviceCpuCoreUtilPercentage() const;

  constexpr void __set_deviceCpuCoreUtilPercentage(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method ToJSON addr 0x27c24c0 size 0x774 virtual false final false
  inline ::StringW ToJSON();

  /// @brief Method LoadFromJSON addr 0x27c2cd8 size 0x948 virtual false final false
  inline bool LoadFromJSON(::StringW json);

  static inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* New_ctor();

  /// @brief Method .ctor addr 0x27c3db4 size 0xb8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__PerfMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSystemPerfMetrics__PerfMetrics(__OVRSystemPerfMetrics__PerfMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__PerfMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSystemPerfMetrics__PerfMetrics(__OVRSystemPerfMetrics__PerfMetrics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSystemPerfMetrics__PerfMetrics();

public:
  /// @brief Field frameCount, offset: 0x10, size: 0x4, def value: None
  int32_t ___frameCount;

  /// @brief Field frameTime, offset: 0x14, size: 0x4, def value: None
  float_t ___frameTime;

  /// @brief Field deltaFrameTime, offset: 0x18, size: 0x4, def value: None
  float_t ___deltaFrameTime;

  /// @brief Field appCpuTime_IsValid, offset: 0x1c, size: 0x1, def value: None
  bool ___appCpuTime_IsValid;

  /// @brief Field appCpuTime, offset: 0x20, size: 0x4, def value: None
  float_t ___appCpuTime;

  /// @brief Field appGpuTime_IsValid, offset: 0x24, size: 0x1, def value: None
  bool ___appGpuTime_IsValid;

  /// @brief Field appGpuTime, offset: 0x28, size: 0x4, def value: None
  float_t ___appGpuTime;

  /// @brief Field compositorCpuTime_IsValid, offset: 0x2c, size: 0x1, def value: None
  bool ___compositorCpuTime_IsValid;

  /// @brief Field compositorCpuTime, offset: 0x30, size: 0x4, def value: None
  float_t ___compositorCpuTime;

  /// @brief Field compositorGpuTime_IsValid, offset: 0x34, size: 0x1, def value: None
  bool ___compositorGpuTime_IsValid;

  /// @brief Field compositorGpuTime, offset: 0x38, size: 0x4, def value: None
  float_t ___compositorGpuTime;

  /// @brief Field compositorDroppedFrameCount_IsValid, offset: 0x3c, size: 0x1, def value: None
  bool ___compositorDroppedFrameCount_IsValid;

  /// @brief Field compositorDroppedFrameCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___compositorDroppedFrameCount;

  /// @brief Field compositorSpaceWarpMode_IsValid, offset: 0x44, size: 0x1, def value: None
  bool ___compositorSpaceWarpMode_IsValid;

  /// @brief Field compositorSpaceWarpMode, offset: 0x48, size: 0x4, def value: None
  int32_t ___compositorSpaceWarpMode;

  /// @brief Field systemGpuUtilPercentage_IsValid, offset: 0x4c, size: 0x1, def value: None
  bool ___systemGpuUtilPercentage_IsValid;

  /// @brief Field systemGpuUtilPercentage, offset: 0x50, size: 0x4, def value: None
  float_t ___systemGpuUtilPercentage;

  /// @brief Field systemCpuUtilAveragePercentage_IsValid, offset: 0x54, size: 0x1, def value: None
  bool ___systemCpuUtilAveragePercentage_IsValid;

  /// @brief Field systemCpuUtilAveragePercentage, offset: 0x58, size: 0x4, def value: None
  float_t ___systemCpuUtilAveragePercentage;

  /// @brief Field systemCpuUtilWorstPercentage_IsValid, offset: 0x5c, size: 0x1, def value: None
  bool ___systemCpuUtilWorstPercentage_IsValid;

  /// @brief Field systemCpuUtilWorstPercentage, offset: 0x60, size: 0x4, def value: None
  float_t ___systemCpuUtilWorstPercentage;

  /// @brief Field deviceCpuClockFrequencyInMHz_IsValid, offset: 0x64, size: 0x1, def value: None
  bool ___deviceCpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceCpuClockFrequencyInMHz, offset: 0x68, size: 0x4, def value: None
  float_t ___deviceCpuClockFrequencyInMHz;

  /// @brief Field deviceGpuClockFrequencyInMHz_IsValid, offset: 0x6c, size: 0x1, def value: None
  bool ___deviceGpuClockFrequencyInMHz_IsValid;

  /// @brief Field deviceGpuClockFrequencyInMHz, offset: 0x70, size: 0x4, def value: None
  float_t ___deviceGpuClockFrequencyInMHz;

  /// @brief Field deviceCpuClockLevel_IsValid, offset: 0x74, size: 0x1, def value: None
  bool ___deviceCpuClockLevel_IsValid;

  /// @brief Field deviceCpuClockLevel, offset: 0x78, size: 0x4, def value: None
  int32_t ___deviceCpuClockLevel;

  /// @brief Field deviceGpuClockLevel_IsValid, offset: 0x7c, size: 0x1, def value: None
  bool ___deviceGpuClockLevel_IsValid;

  /// @brief Field deviceGpuClockLevel, offset: 0x80, size: 0x4, def value: None
  int32_t ___deviceGpuClockLevel;

  /// @brief Field deviceCpuCoreUtilPercentage_IsValid, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<bool, ::Array<bool>*> ___deviceCpuCoreUtilPercentage_IsValid;

  /// @brief Field deviceCpuCoreUtilPercentage, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___deviceCpuCoreUtilPercentage;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics, 0x98>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSystemPerfMetricsTcpServer
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8183))
// CS Name: ::OVRSystemPerfMetrics::OVRSystemPerfMetricsTcpServer*
class CORDL_TYPE __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field tcpServer, offset 0x18, size 0x8
  __declspec(property(get = __get_tcpServer, put = __set_tcpServer))::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* tcpServer;

  /// @brief Field listeningPort, offset 0x20, size 0x4
  __declspec(property(get = __get_listeningPort, put = __set_listeningPort)) int32_t listeningPort;

  /// @brief Field singleton, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_singleton, put = setStaticF_singleton))::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* singleton;

  constexpr ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*& __get_tcpServer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer*> const& __get_tcpServer() const;

  constexpr void __set_tcpServer(::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* value);

  constexpr int32_t& __get_listeningPort();

  constexpr int32_t const& __get_listeningPort() const;

  constexpr void __set_listeningPort(int32_t value);

  static inline void setStaticF_singleton(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* value);

  static inline ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* getStaticF_singleton();

  /// @brief Method OnEnable addr 0x27c3e6c size 0x114 virtual false final false
  inline void OnEnable();

  /// @brief Method OnDisable addr 0x27c3f80 size 0xa0 virtual false final false
  inline void OnDisable();

  /// @brief Method Update addr 0x27c4020 size 0x84 virtual false final false
  inline void Update();

  /// @brief Method GatherPerfMetrics addr 0x27c40a4 size 0x300 virtual false final false
  inline ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics* GatherPerfMetrics();

  static inline ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer* New_ctor();

  /// @brief Method .ctor addr 0x27c43a4 size 0x70 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer(__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer(__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer();

public:
  /// @brief Field tcpServer, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OVRNetwork__OVRNetworkTcpServer* ___tcpServer;

  /// @brief Field listeningPort, offset: 0x20, size: 0x4, def value: None
  int32_t ___listeningPort;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRSystemPerfMetrics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8184))
// CS Name: ::OVRSystemPerfMetrics*
class CORDL_TYPE OVRSystemPerfMetrics : public ::System::Object {
public:
  // Declarations
  using OVRSystemPerfMetricsTcpServer = ::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer;

  using PerfMetrics = ::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics;

  static inline ::GlobalNamespace::OVRSystemPerfMetrics* New_ctor();

  /// @brief Method .ctor addr 0x27c24b8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSystemPerfMetrics", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSystemPerfMetrics(OVRSystemPerfMetrics&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSystemPerfMetrics", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSystemPerfMetrics(OVRSystemPerfMetrics const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSystemPerfMetrics();

public:
  /// @brief Field TcpListeningPort offset 0xffffffff size 0x4
  static constexpr int32_t TcpListeningPort{ static_cast<int32_t>(0x7ea3) };

  /// @brief Field PayloadTypeMetrics offset 0xffffffff size 0x4
  static constexpr int32_t PayloadTypeMetrics{ static_cast<int32_t>(0x64) };

  /// @brief Field MaxBufferLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxBufferLength{ static_cast<int32_t>(0x10000) };

  /// @brief Field MaxMessageLength offset 0xffffffff size 0x4
  static constexpr int32_t MaxMessageLength{ static_cast<int32_t>(0xfffc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSystemPerfMetrics, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSystemPerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSystemPerfMetrics*, "", "OVRSystemPerfMetrics");
NEED_NO_BOX(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSystemPerfMetrics__OVRSystemPerfMetricsTcpServer*, "", "OVRSystemPerfMetrics/OVRSystemPerfMetricsTcpServer");
NEED_NO_BOX(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRSystemPerfMetrics__PerfMetrics*, "", "OVRSystemPerfMetrics/PerfMetrics");
