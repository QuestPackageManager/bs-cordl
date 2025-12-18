#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTelemetry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetry)
namespace GlobalNamespace {
struct OVRPlugin_Bool;
}
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
struct OVRTelemetry_MarkerPoint;
}
namespace GlobalNamespace {
class OVRTelemetry_MarkersAttribute;
}
namespace GlobalNamespace {
class OVRTelemetry_NullTelemetryClient;
}
namespace GlobalNamespace {
class OVRTelemetry_QPLTelemetryClient;
}
namespace GlobalNamespace {
class OVRTelemetry_TelemetryClient;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Annotation;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_ResultType;
}
namespace GlobalNamespace {
struct Qpl_OVRPlugin_Variant;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTelemetry;
}
namespace GlobalNamespace {
class OVRTelemetry_MarkersAttribute;
}
namespace GlobalNamespace {
class OVRTelemetry_NullTelemetryClient;
}
namespace GlobalNamespace {
class OVRTelemetry_QPLTelemetryClient;
}
namespace GlobalNamespace {
class OVRTelemetry_TelemetryClient;
}
namespace GlobalNamespace {
struct OVRTelemetry_MarkerPoint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetry);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetry_MarkersAttribute);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetry_NullTelemetryClient);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetry_QPLTelemetryClient);
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetry_TelemetryClient);
MARK_VAL_T(::GlobalNamespace::OVRTelemetry_MarkerPoint);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: OVRTelemetry/MarkerPoint
struct CORDL_TYPE OVRTelemetry_MarkerPoint {
public:
  // Declarations
  __declspec(property(get = get_NameHandle)) int32_t NameHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x5d306e4, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x5d30658, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_NameHandle, addr 0x5d30650, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NameHandle();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetry_MarkerPoint();

  // Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRTelemetry_MarkerPoint(int32_t _NameHandle_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field <NameHandle>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _NameHandle_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRTelemetry_MarkerPoint, _NameHandle_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry_MarkerPoint, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetry/TelemetryClient
class CORDL_TYPE OVRTelemetry_TelemetryClient : public ::System::Object {
public:
  // Declarations
  /// @brief Method CreateMarkerHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool CreateMarkerHandle(::StringW name, ::ByRef<int32_t> nameHandle);

  /// @brief Method DestroyMarkerHandle, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool DestroyMarkerHandle(int32_t nameHandle);

  /// @brief Method MarkerAnnotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d30750, size 0x18, virtual false, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, bool annotationValue, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d30780, size 0x18, virtual false, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, double_t annotationValue, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d30768, size 0x18, virtual false, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, int64_t annotationValue, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d307ec, size 0x1c, virtual false, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::GlobalNamespace::OVRPlugin_Bool* annotationValues, int32_t count, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d307d0, size 0x1c, virtual false, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, double_t* annotationValues, int32_t count, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d307b4, size 0x1c, virtual false, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, int64_t* annotationValues, int32_t count, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d30798, size 0x1c, virtual false, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, uint8_t* annotationValues, int32_t count, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW key, ::GlobalNamespace::Qpl_OVRPlugin_Variant value, int32_t instanceKey);

  /// @brief Method MarkerEnd, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkerPoint(int32_t markerId, ::StringW name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation* annotations, int32_t annotationCount, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPoint, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkerPoint(int32_t markerId, ::StringW name, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPointCached, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerStart, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs, ::StringW joinId);

  static inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* New_ctor();

  /// @brief Method .ctor, addr 0x5d30808, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetry_TelemetryClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_TelemetryClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTelemetry_TelemetryClient(OVRTelemetry_TelemetryClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_TelemetryClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTelemetry_TelemetryClient(OVRTelemetry_TelemetryClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7711 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry_TelemetryClient, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTelemetry::TelemetryClient
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetry/NullTelemetryClient
class CORDL_TYPE OVRTelemetry_NullTelemetryClient : public ::GlobalNamespace::OVRTelemetry_TelemetryClient {
public:
  // Declarations
  /// @brief Method CreateMarkerHandle, addr 0x5d30828, size 0xc, virtual true, abstract: false, final false
  inline bool CreateMarkerHandle(::StringW name, ::ByRef<int32_t> nameHandle);

  /// @brief Method DestroyMarkerHandle, addr 0x5d30834, size 0x8, virtual true, abstract: false, final false
  inline bool DestroyMarkerHandle(int32_t nameHandle);

  /// @brief Method MarkerAnnotation, addr 0x5d30820, size 0x4, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d3081c, size 0x4, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW key, ::GlobalNamespace::Qpl_OVRPlugin_Variant value, int32_t instanceKey);

  /// @brief Method MarkerEnd, addr 0x5d30824, size 0x4, virtual true, abstract: false, final false
  inline void MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPoint, addr 0x5d30818, size 0x4, virtual true, abstract: false, final false
  inline void MarkerPoint(int32_t markerId, ::StringW name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation* annotations, int32_t annotationCount, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPoint, addr 0x5d30814, size 0x4, virtual true, abstract: false, final false
  inline void MarkerPoint(int32_t markerId, ::StringW name, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPointCached, addr 0x5d30810, size 0x4, virtual true, abstract: false, final false
  inline void MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerStart, addr 0x5d3080c, size 0x4, virtual true, abstract: false, final false
  inline void MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs, ::StringW joinId);

  static inline ::GlobalNamespace::OVRTelemetry_NullTelemetryClient* New_ctor();

  /// @brief Method .ctor, addr 0x5d30648, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetry_NullTelemetryClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_NullTelemetryClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTelemetry_NullTelemetryClient(OVRTelemetry_NullTelemetryClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_NullTelemetryClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTelemetry_NullTelemetryClient(OVRTelemetry_NullTelemetryClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7712 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry_NullTelemetryClient, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies OVRTelemetry::TelemetryClient
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetry/QPLTelemetryClient
class CORDL_TYPE OVRTelemetry_QPLTelemetryClient : public ::GlobalNamespace::OVRTelemetry_TelemetryClient {
public:
  // Declarations
  /// @brief Method CreateMarkerHandle, addr 0x5d30914, size 0x10, virtual true, abstract: false, final false
  inline bool CreateMarkerHandle(::StringW name, ::ByRef<int32_t> nameHandle);

  /// @brief Method DestroyMarkerHandle, addr 0x5d30924, size 0xc, virtual true, abstract: false, final false
  inline bool DestroyMarkerHandle(int32_t nameHandle);

  /// @brief Method MarkerAnnotation, addr 0x5d308c8, size 0x18, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method MarkerAnnotation, addr 0x5d308e0, size 0x1c, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW key, ::GlobalNamespace::Qpl_OVRPlugin_Variant value, int32_t instanceKey);

  /// @brief Method MarkerEnd, addr 0x5d308fc, size 0x18, virtual true, abstract: false, final false
  inline void MarkerEnd(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPoint, addr 0x5d308a8, size 0x20, virtual true, abstract: false, final false
  inline void MarkerPoint(int32_t markerId, ::StringW name, ::GlobalNamespace::Qpl_OVRPlugin_Annotation* annotations, int32_t annotationCount, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPoint, addr 0x5d30890, size 0x18, virtual true, abstract: false, final false
  inline void MarkerPoint(int32_t markerId, ::StringW name, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPointCached, addr 0x5d30878, size 0x18, virtual true, abstract: false, final false
  inline void MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerStart, addr 0x5d3083c, size 0x3c, virtual true, abstract: false, final false
  inline void MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs, ::StringW joinId);

  static inline ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient* New_ctor();

  /// @brief Method .ctor, addr 0x5d3064c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetry_QPLTelemetryClient();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_QPLTelemetryClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTelemetry_QPLTelemetryClient(OVRTelemetry_QPLTelemetryClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_QPLTelemetryClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTelemetry_QPLTelemetryClient(OVRTelemetry_QPLTelemetryClient const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7713 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry_QPLTelemetryClient, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Attribute
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetry/MarkersAttribute
class CORDL_TYPE OVRTelemetry_MarkersAttribute : public ::System::Attribute {
public:
  // Declarations
  static inline ::GlobalNamespace::OVRTelemetry_MarkersAttribute* New_ctor();

  /// @brief Method .ctor, addr 0x5d30930, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetry_MarkersAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_MarkersAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTelemetry_MarkersAttribute(OVRTelemetry_MarkersAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry_MarkersAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTelemetry_MarkersAttribute(OVRTelemetry_MarkersAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7714 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry_MarkersAttribute, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRTelemetry
class CORDL_TYPE OVRTelemetry : public ::System::Object {
public:
  // Declarations
  using MarkerPoint = ::GlobalNamespace::OVRTelemetry_MarkerPoint;

  using MarkersAttribute = ::GlobalNamespace::OVRTelemetry_MarkersAttribute;

  using NullTelemetryClient = ::GlobalNamespace::OVRTelemetry_NullTelemetryClient;

  using QPLTelemetryClient = ::GlobalNamespace::OVRTelemetry_QPLTelemetryClient;

  using TelemetryClient = ::GlobalNamespace::OVRTelemetry_TelemetryClient;

  /// @brief Field ActiveClient, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ActiveClient, put = setStaticF_ActiveClient)) ::GlobalNamespace::OVRTelemetry_TelemetryClient* ActiveClient;

  /// @brief Field InactiveClient, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_InactiveClient, put = setStaticF_InactiveClient)) ::GlobalNamespace::OVRTelemetry_TelemetryClient* InactiveClient;

  /// @brief Field _sdkVersionString, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__sdkVersionString, put = setStaticF__sdkVersionString)) ::StringW _sdkVersionString;

  /// @brief Method AddPlayModeOrigin, addr 0x5d30490, size 0xa8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker AddPlayModeOrigin(::GlobalNamespace::OVRTelemetryMarker marker);

  /// @brief Method AddSDKVersionAnnotation, addr 0x5d301f8, size 0x140, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker AddSDKVersionAnnotation(::GlobalNamespace::OVRTelemetryMarker marker);

  /// @brief Method GetPlayModeOrigin, addr 0x5d303b8, size 0xd8, virtual false, abstract: false, final false
  static inline ::StringW GetPlayModeOrigin();

  /// @brief Method GetTelemetrySettingString, addr 0x5d30538, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW GetTelemetrySettingString(bool value);

  /// @brief Method SendEvent, addr 0x5d30118, size 0xb8, virtual false, abstract: false, final false
  static inline void SendEvent(int32_t markerId, ::GlobalNamespace::Qpl_OVRPlugin_ResultType result);

  /// @brief Method Start, addr 0x5d2ffdc, size 0x20, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker Start(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  static inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* getStaticF_ActiveClient();

  static inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* getStaticF_InactiveClient();

  static inline ::StringW getStaticF__sdkVersionString();

  /// @brief Method get_Client, addr 0x5d30004, size 0x6c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetry_TelemetryClient* get_Client();

  /// @brief Method get_IsActive, addr 0x5d2fffc, size 0x8, virtual false, abstract: false, final false
  static inline bool get_IsActive();

  static inline void setStaticF_ActiveClient(::GlobalNamespace::OVRTelemetry_TelemetryClient* value);

  static inline void setStaticF_InactiveClient(::GlobalNamespace::OVRTelemetry_TelemetryClient* value);

  static inline void setStaticF__sdkVersionString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTelemetry(OVRTelemetry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTelemetry(OVRTelemetry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7715 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTelemetry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry*, "", "OVRTelemetry");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetry_MarkersAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry_MarkersAttribute*, "", "OVRTelemetry/MarkersAttribute");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetry_NullTelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry_NullTelemetryClient*, "", "OVRTelemetry/NullTelemetryClient");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetry_QPLTelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry_QPLTelemetryClient*, "", "OVRTelemetry/QPLTelemetryClient");
NEED_NO_BOX(::GlobalNamespace::OVRTelemetry_TelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry_TelemetryClient*, "", "OVRTelemetry/TelemetryClient");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry_MarkerPoint, "", "OVRTelemetry/MarkerPoint");
