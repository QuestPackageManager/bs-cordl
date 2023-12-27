#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVROverlay)
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct VROverlayInputMethod;
}
namespace OVR::OpenVR {
struct EVROverlayError;
}
namespace OVR::OpenVR {
struct EColorSpace;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct VROverlayTransformType;
}
namespace OVR::OpenVR {
struct EDualAnalogWhich;
}
namespace OVR::OpenVR {
struct __CVROverlay__PollNextOverlayEventUnion;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
namespace OVR::OpenVR {
struct VRMessageOverlayResponse;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionParams_t;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
class __CVROverlay___PollNextOverlayEventPacked;
}
namespace OVR::OpenVR {
struct HmdRect2_t;
}
namespace OVR::OpenVR {
struct EOverlayDirection;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace OVR::OpenVR {
struct VROverlayFlags;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdVector2_t;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VREvent_t;
}
namespace System {
class AsyncCallback;
}
namespace OVR::OpenVR {
struct VREvent_t_Packed;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
namespace OVR::OpenVR {
class __IVROverlay___PollNextOverlayEvent;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVROverlay;
}
namespace OVR::OpenVR {
class __CVROverlay___PollNextOverlayEventPacked;
}
namespace OVR::OpenVR {
struct __CVROverlay__PollNextOverlayEventUnion;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVROverlay);
MARK_REF_PTR_T(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked);
MARK_VAL_T(::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion);
// Type: ::_PollNextOverlayEventPacked
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8565))
// CS Name: ::CVROverlay::_PollNextOverlayEventPacked*
class CORDL_TYPE __CVROverlay___PollNextOverlayEventPacked : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x27f47ac size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x27f4870 size 0x14 virtual true final false
  inline bool Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent);

  /// @brief Method BeginInvoke addr 0x27f4884 size 0xe8 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, uint32_t uncbVREvent, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke addr 0x27f496c size 0x2c virtual true final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::VREvent_t_Packed> pEvent, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__CVROverlay___PollNextOverlayEventPacked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CVROverlay___PollNextOverlayEventPacked(__CVROverlay___PollNextOverlayEventPacked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CVROverlay___PollNextOverlayEventPacked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CVROverlay___PollNextOverlayEventPacked(__CVROverlay___PollNextOverlayEventPacked const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVROverlay___PollNextOverlayEventPacked();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::PollNextOverlayEventUnion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8566))
// CS Name: ::CVROverlay::PollNextOverlayEventUnion
struct CORDL_TYPE __CVROverlay__PollNextOverlayEventUnion {
public:
  // Declarations
  /// @brief Field pPollNextOverlayEvent, offset 0x0, size 0x8
  __declspec(property(get = __get_pPollNextOverlayEvent, put = __set_pPollNextOverlayEvent))::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* pPollNextOverlayEvent;

  /// @brief Field pPollNextOverlayEventPacked, offset 0x0, size 0x8
  __declspec(property(get = __get_pPollNextOverlayEventPacked, put = __set_pPollNextOverlayEventPacked))::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* pPollNextOverlayEventPacked;

  constexpr ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*& __get_pPollNextOverlayEvent();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*> const& __get_pPollNextOverlayEvent() const;

  constexpr void __set_pPollNextOverlayEvent(::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* value);

  constexpr ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*& __get_pPollNextOverlayEventPacked();

  constexpr ::cordl_internals::to_const_pointer<::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*> const& __get_pPollNextOverlayEventPacked() const;

  constexpr void __set_pPollNextOverlayEventPacked(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* value);

  // Ctor Parameters [CppParam { name: "pPollNextOverlayEvent", ty: "::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*", modifiers: "", def_value: None }, CppParam { name:
  // "pPollNextOverlayEventPacked", ty: "::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*", modifiers: "", def_value: None }]
  constexpr __CVROverlay__PollNextOverlayEventUnion(::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* pPollNextOverlayEvent,
                                                    ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* pPollNextOverlayEventPacked) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CVROverlay__PollNextOverlayEventUnion();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextOverlayEvent_padding[0x0];
      /// @brief Field pPollNextOverlayEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* ___pPollNextOverlayEvent;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextOverlayEvent_padding_forAlignment[0x0];
      /// @brief Field pPollNextOverlayEvent, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* ___pPollNextOverlayEvent_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___pPollNextOverlayEventPacked_padding[0x0];
      /// @brief Field pPollNextOverlayEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* ___pPollNextOverlayEventPacked;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___pPollNextOverlayEventPacked_padding_forAlignment[0x0];
      /// @brief Field pPollNextOverlayEventPacked, offset: 0x0, size: 0x8, def value: None
      ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked* ___pPollNextOverlayEventPacked_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion, 0x8>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::CVROverlay
// SizeInfo { instance_size: 672, native_size: -1, calculated_instance_size: 672, calculated_native_size: 672, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8470)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8567))
// CS Name: ::OVR.OpenVR::CVROverlay*
class CORDL_TYPE CVROverlay : public ::System::Object {
public:
  // Declarations
  using PollNextOverlayEventUnion = ::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion;

  using _PollNextOverlayEventPacked = ::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked;

  /// @brief Field FnTable, offset 0x10, size 0x290
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVROverlay FnTable;

  constexpr ::OVR::OpenVR::IVROverlay& __get_FnTable();

  constexpr ::OVR::OpenVR::IVROverlay const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVROverlay value);

  static inline ::OVR::OpenVR::CVROverlay* New_ctor(void* pInterface);

  /// @brief Method .ctor addr 0x27f38c4 size 0x114 virtual false final false
  inline void _ctor(void* pInterface);

  /// @brief Method FindOverlay addr 0x27f39d8 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError FindOverlay(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle);

  /// @brief Method CreateOverlay addr 0x27f3a00 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError CreateOverlay(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle);

  /// @brief Method DestroyOverlay addr 0x27f3a28 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError DestroyOverlay(uint64_t ulOverlayHandle);

  /// @brief Method SetHighQualityOverlay addr 0x27f3a4c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetHighQualityOverlay(uint64_t ulOverlayHandle);

  /// @brief Method GetHighQualityOverlay addr 0x27f3a70 size 0x24 virtual false final false
  inline uint64_t GetHighQualityOverlay();

  /// @brief Method GetOverlayKey addr 0x27f3a94 size 0x24 virtual false final false
  inline uint32_t GetOverlayKey(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method GetOverlayName addr 0x27f3ab8 size 0x24 virtual false final false
  inline uint32_t GetOverlayName(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method SetOverlayName addr 0x27f3adc size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayName(uint64_t ulOverlayHandle, ::StringW pchName);

  /// @brief Method GetOverlayImageData addr 0x27f3b00 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayImageData(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight);

  /// @brief Method GetOverlayErrorNameFromEnum addr 0x27f3b2c size 0x84 virtual false final false
  inline ::StringW GetOverlayErrorNameFromEnum(::OVR::OpenVR::EVROverlayError error);

  /// @brief Method SetOverlayRenderingPid addr 0x27f3bb0 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayRenderingPid(uint64_t ulOverlayHandle, uint32_t unPID);

  /// @brief Method GetOverlayRenderingPid addr 0x27f3bd4 size 0x24 virtual false final false
  inline uint32_t GetOverlayRenderingPid(uint64_t ulOverlayHandle);

  /// @brief Method SetOverlayFlag addr 0x27f3bf8 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled);

  /// @brief Method GetOverlayFlag addr 0x27f3c20 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayFlag(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled);

  /// @brief Method SetOverlayColor addr 0x27f3c48 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayColor(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue);

  /// @brief Method GetOverlayColor addr 0x27f3c6c size 0x30 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayColor(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue);

  /// @brief Method SetOverlayAlpha addr 0x27f3c9c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayAlpha(uint64_t ulOverlayHandle, float_t fAlpha);

  /// @brief Method GetOverlayAlpha addr 0x27f3cc0 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayAlpha(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha);

  /// @brief Method SetOverlayTexelAspect addr 0x27f3ce8 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTexelAspect(uint64_t ulOverlayHandle, float_t fTexelAspect);

  /// @brief Method GetOverlayTexelAspect addr 0x27f3d0c size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTexelAspect(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect);

  /// @brief Method SetOverlaySortOrder addr 0x27f3d34 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlaySortOrder(uint64_t ulOverlayHandle, uint32_t unSortOrder);

  /// @brief Method GetOverlaySortOrder addr 0x27f3d58 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlaySortOrder(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder);

  /// @brief Method SetOverlayWidthInMeters addr 0x27f3d80 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayWidthInMeters(uint64_t ulOverlayHandle, float_t fWidthInMeters);

  /// @brief Method GetOverlayWidthInMeters addr 0x27f3da4 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayWidthInMeters(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters);

  /// @brief Method SetOverlayAutoCurveDistanceRangeInMeters addr 0x27f3dcc size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters);

  /// @brief Method GetOverlayAutoCurveDistanceRangeInMeters addr 0x27f3df0 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayAutoCurveDistanceRangeInMeters(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters);

  /// @brief Method SetOverlayTextureColorSpace addr 0x27f3e1c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace);

  /// @brief Method GetOverlayTextureColorSpace addr 0x27f3e40 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureColorSpace(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace);

  /// @brief Method SetOverlayTextureBounds addr 0x27f3e64 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTextureBounds(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  /// @brief Method GetOverlayTextureBounds addr 0x27f3e88 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureBounds(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds);

  /// @brief Method GetOverlayRenderModel addr 0x27f3eac size 0x24 virtual false final false
  inline uint32_t GetOverlayRenderModel(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ByRef<::OVR::OpenVR::HmdColor_t> pColor,
                                        ByRef<::OVR::OpenVR::EVROverlayError> pError);

  /// @brief Method SetOverlayRenderModel addr 0x27f3ed0 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayRenderModel(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor);

  /// @brief Method GetOverlayTransformType addr 0x27f3ef4 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformType(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType);

  /// @brief Method SetOverlayTransformAbsolute addr 0x27f3f18 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                    ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  /// @brief Method GetOverlayTransformAbsolute addr 0x27f3f3c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformAbsolute(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                    ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform);

  /// @brief Method SetOverlayTransformTrackedDeviceRelative addr 0x27f3f60 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                 ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  /// @brief Method GetOverlayTransformTrackedDeviceRelative addr 0x27f3f84 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceRelative(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice,
                                                                                 ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform);

  /// @brief Method SetOverlayTransformTrackedDeviceComponent addr 0x27f3fac size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName);

  /// @brief Method GetOverlayTransformTrackedDeviceComponent addr 0x27f3fd0 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformTrackedDeviceComponent(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex, ::System::Text::StringBuilder* pchComponentName,
                                                                                  uint32_t unComponentNameSize);

  /// @brief Method GetOverlayTransformOverlayRelative addr 0x27f3ff8 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent,
                                                                           ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  /// @brief Method SetOverlayTransformOverlayRelative addr 0x27f4020 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTransformOverlayRelative(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                           ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform);

  /// @brief Method ShowOverlay addr 0x27f4044 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError ShowOverlay(uint64_t ulOverlayHandle);

  /// @brief Method HideOverlay addr 0x27f4068 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError HideOverlay(uint64_t ulOverlayHandle);

  /// @brief Method IsOverlayVisible addr 0x27f408c size 0x24 virtual false final false
  inline bool IsOverlayVisible(uint64_t ulOverlayHandle);

  /// @brief Method GetTransformForOverlayCoordinates addr 0x27f40b0 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetTransformForOverlayCoordinates(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                          ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform);

  /// @brief Method PollNextOverlayEvent addr 0x27f40d4 size 0x180 virtual false final false
  inline bool PollNextOverlayEvent(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent);

  /// @brief Method GetOverlayInputMethod addr 0x27f4254 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayInputMethod(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod);

  /// @brief Method SetOverlayInputMethod addr 0x27f4278 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayInputMethod(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod);

  /// @brief Method GetOverlayMouseScale addr 0x27f429c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayMouseScale(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  /// @brief Method SetOverlayMouseScale addr 0x27f42c0 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayMouseScale(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale);

  /// @brief Method ComputeOverlayIntersection addr 0x27f42e4 size 0x24 virtual false final false
  inline bool ComputeOverlayIntersection(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults);

  /// @brief Method IsHoverTargetOverlay addr 0x27f4308 size 0x24 virtual false final false
  inline bool IsHoverTargetOverlay(uint64_t ulOverlayHandle);

  /// @brief Method GetGamepadFocusOverlay addr 0x27f432c size 0x24 virtual false final false
  inline uint64_t GetGamepadFocusOverlay();

  /// @brief Method SetGamepadFocusOverlay addr 0x27f4350 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetGamepadFocusOverlay(uint64_t ulNewFocusOverlay);

  /// @brief Method SetOverlayNeighbor addr 0x27f4374 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo);

  /// @brief Method MoveGamepadFocusToNeighbor addr 0x27f4398 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError MoveGamepadFocusToNeighbor(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom);

  /// @brief Method SetOverlayDualAnalogTransform addr 0x27f43bc size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, void* vCenter, float_t fRadius);

  /// @brief Method GetOverlayDualAnalogTransform addr 0x27f43e0 size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayDualAnalogTransform(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius);

  /// @brief Method SetOverlayTexture addr 0x27f4408 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayTexture(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture);

  /// @brief Method ClearOverlayTexture addr 0x27f442c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError ClearOverlayTexture(uint64_t ulOverlayHandle);

  /// @brief Method SetOverlayRaw addr 0x27f4450 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayRaw(uint64_t ulOverlayHandle, void* pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth);

  /// @brief Method SetOverlayFromFile addr 0x27f4474 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayFromFile(uint64_t ulOverlayHandle, ::StringW pchFilePath);

  /// @brief Method GetOverlayTexture addr 0x27f4498 size 0x3c virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTexture(uint64_t ulOverlayHandle, ByRef<void*> pNativeTextureHandle, void* pNativeTextureRef, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight,
                                                          ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                          ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds);

  /// @brief Method ReleaseNativeOverlayHandle addr 0x27f44d4 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError ReleaseNativeOverlayHandle(uint64_t ulOverlayHandle, void* pNativeTextureHandle);

  /// @brief Method GetOverlayTextureSize addr 0x27f44f8 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayTextureSize(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight);

  /// @brief Method CreateDashboardOverlay addr 0x27f4524 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVROverlayError CreateDashboardOverlay(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle);

  /// @brief Method IsDashboardVisible addr 0x27f4550 size 0x24 virtual false final false
  inline bool IsDashboardVisible();

  /// @brief Method IsActiveDashboardOverlay addr 0x27f4574 size 0x24 virtual false final false
  inline bool IsActiveDashboardOverlay(uint64_t ulOverlayHandle);

  /// @brief Method SetDashboardOverlaySceneProcess addr 0x27f4598 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, uint32_t unProcessId);

  /// @brief Method GetDashboardOverlaySceneProcess addr 0x27f45bc size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetDashboardOverlaySceneProcess(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId);

  /// @brief Method ShowDashboard addr 0x27f45e4 size 0x24 virtual false final false
  inline void ShowDashboard(::StringW pchOverlayToShow);

  /// @brief Method GetPrimaryDashboardDevice addr 0x27f4608 size 0x24 virtual false final false
  inline uint32_t GetPrimaryDashboardDevice();

  /// @brief Method ShowKeyboard addr 0x27f462c size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVROverlayError ShowKeyboard(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode,
                                                     uint64_t uUserValue);

  /// @brief Method ShowKeyboardForOverlay addr 0x27f4658 size 0x30 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError ShowKeyboardForOverlay(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax,
                                                               ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue);

  /// @brief Method GetKeyboardText addr 0x27f4688 size 0x24 virtual false final false
  inline uint32_t GetKeyboardText(::System::Text::StringBuilder* pchText, uint32_t cchText);

  /// @brief Method HideKeyboard addr 0x27f46ac size 0x24 virtual false final false
  inline void HideKeyboard();

  /// @brief Method SetKeyboardTransformAbsolute addr 0x27f46d0 size 0x24 virtual false final false
  inline void SetKeyboardTransformAbsolute(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform);

  /// @brief Method SetKeyboardPositionForOverlay addr 0x27f46f4 size 0x24 virtual false final false
  inline void SetKeyboardPositionForOverlay(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect);

  /// @brief Method SetOverlayIntersectionMask addr 0x27f4718 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError SetOverlayIntersectionMask(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives, uint32_t unNumMaskPrimitives,
                                                                   uint32_t unPrimitiveSize);

  /// @brief Method GetOverlayFlags addr 0x27f473c size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVROverlayError GetOverlayFlags(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags);

  /// @brief Method ShowMessageOverlay addr 0x27f4764 size 0x24 virtual false final false
  inline ::OVR::OpenVR::VRMessageOverlayResponse ShowMessageOverlay(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text, ::StringW pchButton2Text,
                                                                    ::StringW pchButton3Text);

  /// @brief Method CloseMessageOverlay addr 0x27f4788 size 0x24 virtual false final false
  inline void CloseMessageOverlay();

  // Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVROverlay(CVROverlay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVROverlay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVROverlay(CVROverlay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVROverlay();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x290, def value: None
  ::OVR::OpenVR::IVROverlay ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVROverlay, 0x2a0>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVROverlay);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVROverlay*, "OVR.OpenVR", "CVROverlay");
NEED_NO_BOX(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVROverlay___PollNextOverlayEventPacked*, "OVR.OpenVR", "CVROverlay/_PollNextOverlayEventPacked");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__CVROverlay__PollNextOverlayEventUnion, "OVR.OpenVR", "CVROverlay/PollNextOverlayEventUnion");
