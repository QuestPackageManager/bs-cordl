#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSampledEventSender.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRSampledEventSender)
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSampledEventSender;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSampledEventSender);
// Dependencies OVRTelemetryMarker, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSampledEventSender
class CORDL_TYPE OVRSampledEventSender : public ::System::Object {
public:
  // Declarations
  /// @brief Field _addAnnotationsFunc, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__addAnnotationsFunc,
                      put = __cordl_internal_set__addAnnotationsFunc)) ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* _addAnnotationsFunc;

  /// @brief Field _marker, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get__marker, put = __cordl_internal_set__marker)) ::GlobalNamespace::OVRTelemetryMarker _marker;

  /// @brief Field _markerId, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__markerId, put = __cordl_internal_set__markerId)) int32_t _markerId;

  /// @brief Field _recordChance, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__recordChance, put = __cordl_internal_set__recordChance)) float_t _recordChance;

  /// @brief Field _shouldSend, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__shouldSend, put = __cordl_internal_set__shouldSend)) bool _shouldSend;

  static inline ::GlobalNamespace::OVRSampledEventSender* New_ctor(int32_t markerId, float_t recordRecordChance,
                                                                   ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* addAnnotationsFunc);

  /// @brief Method Send, addr 0x5cc923c, size 0x30, virtual false, abstract: false, final false
  inline void Send();

  /// @brief Method ShouldSendEvent, addr 0x5cc94bc, size 0x40, virtual false, abstract: false, final false
  static inline bool ShouldSendEvent(float_t chance);

  /// @brief Method Start, addr 0x5cc93b0, size 0x10c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* const& __cordl_internal_get__addAnnotationsFunc() const;

  constexpr ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>*& __cordl_internal_get__addAnnotationsFunc();

  constexpr ::GlobalNamespace::OVRTelemetryMarker const& __cordl_internal_get__marker() const;

  constexpr ::GlobalNamespace::OVRTelemetryMarker& __cordl_internal_get__marker();

  constexpr int32_t const& __cordl_internal_get__markerId() const;

  constexpr int32_t& __cordl_internal_get__markerId();

  constexpr float_t const& __cordl_internal_get__recordChance() const;

  constexpr float_t& __cordl_internal_get__recordChance();

  constexpr bool const& __cordl_internal_get__shouldSend() const;

  constexpr bool& __cordl_internal_get__shouldSend();

  constexpr void __cordl_internal_set__addAnnotationsFunc(::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* value);

  constexpr void __cordl_internal_set__marker(::GlobalNamespace::OVRTelemetryMarker value);

  constexpr void __cordl_internal_set__markerId(int32_t value);

  constexpr void __cordl_internal_set__recordChance(float_t value);

  constexpr void __cordl_internal_set__shouldSend(bool value);

  /// @brief Method .ctor, addr 0x5cc922c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t markerId, float_t recordRecordChance, ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* addAnnotationsFunc);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSampledEventSender();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSampledEventSender", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSampledEventSender(OVRSampledEventSender&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSampledEventSender", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSampledEventSender(OVRSampledEventSender const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7705 };

  /// @brief Field _marker, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::OVRTelemetryMarker ____marker;

  /// @brief Field _shouldSend, offset: 0x28, size: 0x1, def value: None
  bool ____shouldSend;

  /// @brief Field _recordChance, offset: 0x2c, size: 0x4, def value: None
  float_t ____recordChance;

  /// @brief Field _markerId, offset: 0x30, size: 0x4, def value: None
  int32_t ____markerId;

  /// @brief Field _addAnnotationsFunc, offset: 0x38, size: 0x8, def value: None
  ::System::Func_2<::GlobalNamespace::OVRTelemetryMarker, ::GlobalNamespace::OVRTelemetryMarker>* ____addAnnotationsFunc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSampledEventSender, ____marker) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSampledEventSender, ____shouldSend) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSampledEventSender, ____recordChance) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSampledEventSender, ____markerId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSampledEventSender, ____addAnnotationsFunc) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSampledEventSender, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSampledEventSender);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSampledEventSender*, "", "OVRSampledEventSender");
