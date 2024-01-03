#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTelemetry)
namespace GlobalNamespace {
struct OVRTelemetryMarker;
}
namespace GlobalNamespace {
struct __OVRPlugin__Qpl__ResultType;
}
namespace GlobalNamespace {
struct __OVRTelemetry__MarkerPoint;
}
namespace GlobalNamespace {
class __OVRTelemetry__NullTelemetryClient;
}
namespace GlobalNamespace {
class __OVRTelemetry__QPLTelemetryClient;
}
namespace GlobalNamespace {
class __OVRTelemetry__TelemetryClient;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTelemetry;
}
namespace GlobalNamespace {
class __OVRTelemetry__NullTelemetryClient;
}
namespace GlobalNamespace {
class __OVRTelemetry__QPLTelemetryClient;
}
namespace GlobalNamespace {
class __OVRTelemetry__TelemetryClient;
}
namespace GlobalNamespace {
struct __OVRTelemetry__MarkerPoint;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRTelemetry);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetry__NullTelemetryClient);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient);
MARK_REF_PTR_T(::GlobalNamespace::__OVRTelemetry__TelemetryClient);
MARK_VAL_T(::GlobalNamespace::__OVRTelemetry__MarkerPoint);
// Type: ::MarkerPoint
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8007))
// CS Name: ::OVRTelemetry::MarkerPoint
struct CORDL_TYPE __OVRTelemetry__MarkerPoint {
public:
  // Declarations
  __declspec(property(get = get_NameHandle)) int32_t NameHandle;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method get_NameHandle, addr 0x27933ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NameHandle();

  /// @brief Method .ctor, addr 0x27933b4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method Dispose, addr 0x279343c, size 0x68, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_NameHandle_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __OVRTelemetry__MarkerPoint(int32_t _NameHandle_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetry__MarkerPoint();

  /// @brief Field <NameHandle>k__BackingField, offset: 0x0, size: 0x4, def value: None
  int32_t _NameHandle_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__MarkerPoint, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OVRTelemetry__MarkerPoint, _NameHandle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TelemetryClient
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8008))
// CS Name: ::OVRTelemetry::TelemetryClient*
class CORDL_TYPE __OVRTelemetry__TelemetryClient : public ::System::Object {
public:
  // Declarations
  /// @brief Method MarkerStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPointCached, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerAnnotation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method MarkerEnd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void MarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method CreateMarkerHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle);

  /// @brief Method DestroyMarkerHandle, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool DestroyMarkerHandle(int32_t nameHandle);

  static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* New_ctor();

  /// @brief Method .ctor, addr 0x27934a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__TelemetryClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetry__TelemetryClient(__OVRTelemetry__TelemetryClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__TelemetryClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetry__TelemetryClient(__OVRTelemetry__TelemetryClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetry__TelemetryClient();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__TelemetryClient, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NullTelemetryClient
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8008))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8009))
// CS Name: ::OVRTelemetry::NullTelemetryClient*
class CORDL_TYPE __OVRTelemetry__NullTelemetryClient : public ::GlobalNamespace::__OVRTelemetry__TelemetryClient {
public:
  // Declarations
  /// @brief Method MarkerStart, addr 0x27934ac, size 0x4, virtual true, abstract: false, final false
  inline void MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPointCached, addr 0x27934b0, size 0x4, virtual true, abstract: false, final false
  inline void MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerAnnotation, addr 0x27934b4, size 0x4, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method MarkerEnd, addr 0x27934b8, size 0x4, virtual true, abstract: false, final false
  inline void MarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method CreateMarkerHandle, addr 0x27934bc, size 0xc, virtual true, abstract: false, final false
  inline bool CreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle);

  /// @brief Method DestroyMarkerHandle, addr 0x27934c8, size 0x8, virtual true, abstract: false, final false
  inline bool DestroyMarkerHandle(int32_t nameHandle);

  static inline ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient* New_ctor();

  /// @brief Method .ctor, addr 0x279339c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__NullTelemetryClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetry__NullTelemetryClient(__OVRTelemetry__NullTelemetryClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__NullTelemetryClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetry__NullTelemetryClient(__OVRTelemetry__NullTelemetryClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetry__NullTelemetryClient();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__NullTelemetryClient, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::QPLTelemetryClient
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8008))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8010))
// CS Name: ::OVRTelemetry::QPLTelemetryClient*
class CORDL_TYPE __OVRTelemetry__QPLTelemetryClient : public ::GlobalNamespace::__OVRTelemetry__TelemetryClient {
public:
  // Declarations
  /// @brief Method MarkerStart, addr 0x27934d0, size 0x14, virtual true, abstract: false, final false
  inline void MarkerStart(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerPointCached, addr 0x27934e4, size 0x18, virtual true, abstract: false, final false
  inline void MarkerPointCached(int32_t markerId, int32_t nameHandle, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method MarkerAnnotation, addr 0x27934fc, size 0x18, virtual true, abstract: false, final false
  inline void MarkerAnnotation(int32_t markerId, ::StringW annotationKey, ::StringW annotationValue, int32_t instanceKey);

  /// @brief Method MarkerEnd, addr 0x2793514, size 0x18, virtual true, abstract: false, final false
  inline void MarkerEnd(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType resultTypeId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method CreateMarkerHandle, addr 0x279352c, size 0x10, virtual true, abstract: false, final false
  inline bool CreateMarkerHandle(::StringW name, ByRef<int32_t> nameHandle);

  /// @brief Method DestroyMarkerHandle, addr 0x279353c, size 0xc, virtual true, abstract: false, final false
  inline bool DestroyMarkerHandle(int32_t nameHandle);

  static inline ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient* New_ctor();

  /// @brief Method .ctor, addr 0x27933a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__QPLTelemetryClient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OVRTelemetry__QPLTelemetryClient(__OVRTelemetry__QPLTelemetryClient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OVRTelemetry__QPLTelemetryClient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OVRTelemetry__QPLTelemetryClient(__OVRTelemetry__QPLTelemetryClient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OVRTelemetry__QPLTelemetryClient();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::OVRTelemetry
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8011))
// CS Name: ::OVRTelemetry*
class CORDL_TYPE OVRTelemetry : public ::System::Object {
public:
  // Declarations
  using QPLTelemetryClient = ::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient;

  using NullTelemetryClient = ::GlobalNamespace::__OVRTelemetry__NullTelemetryClient;

  using TelemetryClient = ::GlobalNamespace::__OVRTelemetry__TelemetryClient;

  using MarkerPoint = ::GlobalNamespace::__OVRTelemetry__MarkerPoint;

  /// @brief Field InactiveClient, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_InactiveClient, put = setStaticF_InactiveClient))::GlobalNamespace::__OVRTelemetry__TelemetryClient* InactiveClient;

  /// @brief Field ActiveClient, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ActiveClient, put = setStaticF_ActiveClient))::GlobalNamespace::__OVRTelemetry__TelemetryClient* ActiveClient;

  /// @brief Field _sdkVersionString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__sdkVersionString, put = setStaticF__sdkVersionString))::StringW _sdkVersionString;

  static inline void setStaticF_InactiveClient(::GlobalNamespace::__OVRTelemetry__TelemetryClient* value);

  static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* getStaticF_InactiveClient();

  static inline void setStaticF_ActiveClient(::GlobalNamespace::__OVRTelemetry__TelemetryClient* value);

  static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* getStaticF_ActiveClient();

  static inline void setStaticF__sdkVersionString(::StringW value);

  static inline ::StringW getStaticF__sdkVersionString();

  /// @brief Method get_IsActive, addr 0x2792ed4, size 0x20, virtual false, abstract: false, final false
  static inline bool get_IsActive();

  /// @brief Method get_Client, addr 0x2792ef4, size 0x80, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::__OVRTelemetry__TelemetryClient* get_Client();

  /// @brief Method Start, addr 0x2792f74, size 0x1c, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker Start(int32_t markerId, int32_t instanceKey, int64_t timestampMs);

  /// @brief Method SendEvent, addr 0x279302c, size 0xb8, virtual false, abstract: false, final false
  static inline void SendEvent(int32_t markerId, ::GlobalNamespace::__OVRPlugin__Qpl__ResultType result);

  /// @brief Method AddSDKVersionAnnotation, addr 0x2793168, size 0x134, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::OVRTelemetryMarker AddSDKVersionAnnotation(::GlobalNamespace::OVRTelemetryMarker marker);

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRTelemetry(OVRTelemetry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRTelemetry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRTelemetry(OVRTelemetry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRTelemetry();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTelemetry, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRTelemetry);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTelemetry*, "", "OVRTelemetry");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetry__NullTelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__NullTelemetryClient*, "", "OVRTelemetry/NullTelemetryClient");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__QPLTelemetryClient*, "", "OVRTelemetry/QPLTelemetryClient");
NEED_NO_BOX(::GlobalNamespace::__OVRTelemetry__TelemetryClient);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__TelemetryClient*, "", "OVRTelemetry/TelemetryClient");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRTelemetry__MarkerPoint, "", "OVRTelemetry/MarkerPoint");
