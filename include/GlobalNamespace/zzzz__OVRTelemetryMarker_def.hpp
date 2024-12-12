#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetryMarker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetryMarker)
namespace GlobalNamespace {
struct OVRTelemetryMarker_OVRTelemetryMarkerState;
}
namespace GlobalNamespace {
struct OVRTelemetry_MarkerPoint;
}
namespace GlobalNamespace {
class OVRTelemetry_TelemetryClient;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_ResultType;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
struct OVRTelemetryMarker_OVRTelemetryMarkerState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTelemetryMarker);
MARK_VAL_T(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState);
// Dependencies OVRPlugin::Qpl::ResultType
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryMarker/OVRTelemetryMarkerState
struct CORDL_TYPE OVRTelemetryMarker_OVRTelemetryMarkerState {
public:
  // Declarations
  __declspec(property(get = get_Result, put = set_Result)) ::GlobalNamespace::Qpl_OVRPlugin_ResultType Result;

  __declspec(property(get = get_Sent, put = set_Sent)) bool Sent;

  /// @brief Method .ctor, addr 0x4019ad8, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(bool sent, ::GlobalNamespace::Qpl_OVRPlugin_ResultType result);

  /// @brief Method get_Result, addr 0x4019bb8, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::Qpl_OVRPlugin_ResultType get_Result();

  /// @brief Method get_Sent, addr 0x4019ba4, size 0x8, virtual false, abstract: false, final false
  inline bool get_Sent();

  /// @brief Method set_Result, addr 0x4019bc0, size 0x8, virtual false, abstract: false, final false
  inline void set_Result(::GlobalNamespace::Qpl_OVRPlugin_ResultType value);

  /// @brief Method set_Sent, addr 0x4019bac, size 0xc, virtual false, abstract: false, final false
  inline void set_Sent(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetryMarker_OVRTelemetryMarkerState();

  // Ctor Parameters [CppParam { name: "_Sent_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Result_k__BackingField", ty:
  // "::GlobalNamespace::Qpl_OVRPlugin_ResultType", modifiers: "", def_value: None }]
  constexpr OVRTelemetryMarker_OVRTelemetryMarkerState(bool _Sent_k__BackingField, ::GlobalNamespace::Qpl_OVRPlugin_ResultType _Result_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8334 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field <Sent>k__BackingField, offset: 0x0, size: 0x1, def value: None
  bool _Sent_k__BackingField;

  /// @brief Field <Result>k__BackingField, offset: 0x2, size: 0x2, def value: None
  ::GlobalNamespace::Qpl_OVRPlugin_ResultType _Result_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState, _Sent_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState, _Result_k__BackingField) == 0x2, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTelemetryMarker::OVRTelemetryMarkerState, System.IDisposable
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetryMarker
struct CORDL_TYPE OVRTelemetryMarker {
public:
  // Declarations
  using OVRTelemetryMarkerState = ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState;

  __declspec(property(get = get_InstanceKey)) int32_t InstanceKey;

  __declspec(property(get = get_MarkerId)) int32_t MarkerId;

  __declspec(property(get = get_Result)) ::GlobalNamespace::Qpl_OVRPlugin_ResultType Result;

  __declspec(property(get = get_Sent)) bool Sent;

  __declspec(property(get = get_State, put = set_State)) ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState State;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AddAnnotation, addr 0x4019704, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker AddAnnotation(::StringW annotationKey, ::StringW annotationValue);

  /// @brief Method AddPoint, addr 0x4019b30, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker AddPoint(::GlobalNamespace::OVRTelemetry_MarkerPoint point);

  /// @brief Method Dispose, addr 0x4019b80, size 0x24, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Send, addr 0x4019574, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker Send();

  /// @brief Method SendIf, addr 0x4019ae8, size 0x48, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker SendIf(bool condition);

  /// @brief Method SetResult, addr 0x401954c, size 0x28, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker SetResult(::GlobalNamespace::Qpl_OVRPlugin_ResultType result);

  /// @brief Method .ctor, addr 0x4019a98, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRTelemetry_TelemetryClient* client, int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method .ctor, addr 0x4019400, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method get_InstanceKey, addr 0x4019a90, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_InstanceKey();

  /// @brief Method get_MarkerId, addr 0x4019a88, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_MarkerId();

  /// @brief Method get_Result, addr 0x4019a80, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::Qpl_OVRPlugin_ResultType get_Result();

  /// @brief Method get_Sent, addr 0x4019a70, size 0x10, virtual false, abstract: false, final false
  inline bool get_Sent();

  /// @brief Method get_State, addr 0x4019a60, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState get_State();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method set_State, addr 0x4019a68, size 0x8, virtual false, abstract: false, final false
  inline void set_State(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetryMarker();

  // Ctor Parameters [CppParam { name: "_State_k__BackingField", ty: "::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState", modifiers: "", def_value: None }, CppParam { name:
  // "_MarkerId_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_InstanceKey_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_client", ty: "::GlobalNamespace::OVRTelemetry_TelemetryClient*", modifiers: "", def_value: None }]
  constexpr OVRTelemetryMarker(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState _State_k__BackingField, int32_t _MarkerId_k__BackingField, int32_t _InstanceKey_k__BackingField,
                               ::GlobalNamespace::OVRTelemetry_TelemetryClient* _client) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8335 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <State>k__BackingField, offset: 0x0, size: 0x4, def value: None
  ::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState _State_k__BackingField;

  /// @brief Field <MarkerId>k__BackingField, offset: 0x4, size: 0x4, def value: None
  int32_t _MarkerId_k__BackingField;

  /// @brief Field <InstanceKey>k__BackingField, offset: 0x8, size: 0x4, def value: None
  int32_t _InstanceKey_k__BackingField;

  /// @brief Field _client, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::OVRTelemetry_TelemetryClient* _client;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _State_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _MarkerId_k__BackingField) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _InstanceKey_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRTelemetryMarker, _client) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetryMarker, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryMarker, "", "OVRTelemetryMarker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetryMarker_OVRTelemetryMarkerState, "", "OVRTelemetryMarker/OVRTelemetryMarkerState");
