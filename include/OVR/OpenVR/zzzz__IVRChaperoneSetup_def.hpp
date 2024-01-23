#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRChaperoneSetup)
namespace OVR::OpenVR {
struct EChaperoneConfigFile;
}
namespace OVR::OpenVR {
struct HmdMatrix34_t;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___CommitWorkingCopy;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___ExportLiveToBuffer;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLiveCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLivePhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingPlayAreaRect;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___ImportFromBufferToWorking;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___ReloadFromDisk;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___RevertWorkingCopy;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class __IVRChaperoneSetup___CommitWorkingCopy;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___ExportLiveToBuffer;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLiveCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLivePhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingPlayAreaRect;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___ImportFromBufferToWorking;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___ReloadFromDisk;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___RevertWorkingCopy;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class __IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
struct IVRChaperoneSetup;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose);
MARK_VAL_T(::OVR::OpenVR::IVRChaperoneSetup);
// Type: ::_CommitWorkingCopy
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8323))
// CS Name: ::IVRChaperoneSetup::_CommitWorkingCopy*
class CORDL_TYPE __IVRChaperoneSetup___CommitWorkingCopy : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27da280, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27da344, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::EChaperoneConfigFile configFile);

  /// @brief Method BeginInvoke, addr 0x27da358, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27da3dc, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___CommitWorkingCopy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___CommitWorkingCopy(__IVRChaperoneSetup___CommitWorkingCopy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___CommitWorkingCopy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___CommitWorkingCopy(__IVRChaperoneSetup___CommitWorkingCopy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___CommitWorkingCopy();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_RevertWorkingCopy
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8324))
// CS Name: ::IVRChaperoneSetup::_RevertWorkingCopy*
class CORDL_TYPE __IVRChaperoneSetup___RevertWorkingCopy : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27da404, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27da4c0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  /// @brief Method BeginInvoke, addr 0x27da4d4, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27da4f4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___RevertWorkingCopy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___RevertWorkingCopy(__IVRChaperoneSetup___RevertWorkingCopy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___RevertWorkingCopy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___RevertWorkingCopy(__IVRChaperoneSetup___RevertWorkingCopy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___RevertWorkingCopy();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetWorkingPlayAreaSize
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8325))
// CS Name: ::IVRChaperoneSetup::_GetWorkingPlayAreaSize*
class CORDL_TYPE __IVRChaperoneSetup___GetWorkingPlayAreaSize : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27da500, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27da5d8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ);

  /// @brief Method BeginInvoke, addr 0x27da5ec, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27da690, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingPlayAreaSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetWorkingPlayAreaSize(__IVRChaperoneSetup___GetWorkingPlayAreaSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingPlayAreaSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetWorkingPlayAreaSize(__IVRChaperoneSetup___GetWorkingPlayAreaSize const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetWorkingPlayAreaSize();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetWorkingPlayAreaRect
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8326))
// CS Name: ::IVRChaperoneSetup::_GetWorkingPlayAreaRect*
class CORDL_TYPE __IVRChaperoneSetup___GetWorkingPlayAreaRect : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27da6c4, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27da798, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::OVR::OpenVR::HmdQuad_t> rect);

  /// @brief Method BeginInvoke, addr 0x27da7ac, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27da838, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingPlayAreaRect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetWorkingPlayAreaRect(__IVRChaperoneSetup___GetWorkingPlayAreaRect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingPlayAreaRect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetWorkingPlayAreaRect(__IVRChaperoneSetup___GetWorkingPlayAreaRect const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetWorkingPlayAreaRect();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetWorkingCollisionBoundsInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8327))
// CS Name: ::IVRChaperoneSetup::_GetWorkingCollisionBoundsInfo*
class CORDL_TYPE __IVRChaperoneSetup___GetWorkingCollisionBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27da864, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27da93c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount);

  /// @brief Method BeginInvoke, addr 0x27da950, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27da9e4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<uint32_t> punQuadsCount, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetWorkingCollisionBoundsInfo(__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetWorkingCollisionBoundsInfo(__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetWorkingCollisionBoundsInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetLiveCollisionBoundsInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8328))
// CS Name: ::IVRChaperoneSetup::_GetLiveCollisionBoundsInfo*
class CORDL_TYPE __IVRChaperoneSetup___GetLiveCollisionBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27daa10, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27daae8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount);

  /// @brief Method BeginInvoke, addr 0x27daafc, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27dab90, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<uint32_t> punQuadsCount, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLiveCollisionBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetLiveCollisionBoundsInfo(__IVRChaperoneSetup___GetLiveCollisionBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLiveCollisionBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetLiveCollisionBoundsInfo(__IVRChaperoneSetup___GetLiveCollisionBoundsInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetLiveCollisionBoundsInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetWorkingSeatedZeroPoseToRawTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8329))
// CS Name: ::IVRChaperoneSetup::_GetWorkingSeatedZeroPoseToRawTrackingPose*
class CORDL_TYPE __IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27dabbc, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dac90, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method BeginInvoke, addr 0x27daca4, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27dad30, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose(__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose(__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetWorkingStandingZeroPoseToRawTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8330))
// CS Name: ::IVRChaperoneSetup::_GetWorkingStandingZeroPoseToRawTrackingPose*
class CORDL_TYPE __IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27dad5c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dae30, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose);

  /// @brief Method BeginInvoke, addr 0x27dae44, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27daed0, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose(__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose(__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetWorkingPlayAreaSize
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8331))
// CS Name: ::IVRChaperoneSetup::_SetWorkingPlayAreaSize*
class CORDL_TYPE __IVRChaperoneSetup___SetWorkingPlayAreaSize : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27daefc, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dafc0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(float_t sizeX, float_t sizeZ);

  /// @brief Method BeginInvoke, addr 0x27dafd4, size 0x98, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t sizeX, float_t sizeZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27db06c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingPlayAreaSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___SetWorkingPlayAreaSize(__IVRChaperoneSetup___SetWorkingPlayAreaSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingPlayAreaSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___SetWorkingPlayAreaSize(__IVRChaperoneSetup___SetWorkingPlayAreaSize const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___SetWorkingPlayAreaSize();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetWorkingCollisionBoundsInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8332))
// CS Name: ::IVRChaperoneSetup::_SetWorkingCollisionBoundsInfo*
class CORDL_TYPE __IVRChaperoneSetup___SetWorkingCollisionBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27db078, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27db150, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount);

  /// @brief Method BeginInvoke, addr 0x27db164, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27db1f8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___SetWorkingCollisionBoundsInfo(__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___SetWorkingCollisionBoundsInfo(__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___SetWorkingCollisionBoundsInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetWorkingSeatedZeroPoseToRawTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8333))
// CS Name: ::IVRChaperoneSetup::_SetWorkingSeatedZeroPoseToRawTrackingPose*
class CORDL_TYPE __IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27db204, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27db2d8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method BeginInvoke, addr 0x27db2ec, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27db378, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose(__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose(__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetWorkingStandingZeroPoseToRawTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8334))
// CS Name: ::IVRChaperoneSetup::_SetWorkingStandingZeroPoseToRawTrackingPose*
class CORDL_TYPE __IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27db394, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27db468, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose);

  /// @brief Method BeginInvoke, addr 0x27db47c, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27db508, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose(__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose(__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ReloadFromDisk
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8335))
// CS Name: ::IVRChaperoneSetup::_ReloadFromDisk*
class CORDL_TYPE __IVRChaperoneSetup___ReloadFromDisk : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27db524, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27db5e8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EChaperoneConfigFile configFile);

  /// @brief Method BeginInvoke, addr 0x27db5fc, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27db680, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___ReloadFromDisk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___ReloadFromDisk(__IVRChaperoneSetup___ReloadFromDisk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___ReloadFromDisk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___ReloadFromDisk(__IVRChaperoneSetup___ReloadFromDisk const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___ReloadFromDisk();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetLiveSeatedZeroPoseToRawTrackingPose
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8336))
// CS Name: ::IVRChaperoneSetup::_GetLiveSeatedZeroPoseToRawTrackingPose*
class CORDL_TYPE __IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27db68c, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27db760, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  /// @brief Method BeginInvoke, addr 0x27db774, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27db800, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose(__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose(__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetWorkingCollisionBoundsTagsInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8337))
// CS Name: ::IVRChaperoneSetup::_SetWorkingCollisionBoundsTagsInfo*
class CORDL_TYPE __IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27db82c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27db904, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, uint32_t unTagCount);

  /// @brief Method BeginInvoke, addr 0x27db918, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, uint32_t unTagCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27db9ac, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo(__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo(__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetLiveCollisionBoundsTagsInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8338))
// CS Name: ::IVRChaperoneSetup::_GetLiveCollisionBoundsTagsInfo*
class CORDL_TYPE __IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27db9b8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dba90, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, ByRef<uint32_t> punTagCount);

  /// @brief Method BeginInvoke, addr 0x27dbaa4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, ByRef<uint32_t> punTagCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27dbb38, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<uint32_t> punTagCount, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo(__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo(__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_SetWorkingPhysicalBoundsInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8339))
// CS Name: ::IVRChaperoneSetup::_SetWorkingPhysicalBoundsInfo*
class CORDL_TYPE __IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27dbb64, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dbc3c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount);

  /// @brief Method BeginInvoke, addr 0x27dbc50, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27dbce4, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo(__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo(__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_GetLivePhysicalBoundsInfo
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8340))
// CS Name: ::IVRChaperoneSetup::_GetLivePhysicalBoundsInfo*
class CORDL_TYPE __IVRChaperoneSetup___GetLivePhysicalBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27dbd0c, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dbde4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount);

  /// @brief Method BeginInvoke, addr 0x27dbdf8, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ByRef<uint32_t> punQuadsCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27dbe8c, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<uint32_t> punQuadsCount, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLivePhysicalBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___GetLivePhysicalBoundsInfo(__IVRChaperoneSetup___GetLivePhysicalBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___GetLivePhysicalBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___GetLivePhysicalBoundsInfo(__IVRChaperoneSetup___GetLivePhysicalBoundsInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___GetLivePhysicalBoundsInfo();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ExportLiveToBuffer
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8341))
// CS Name: ::IVRChaperoneSetup::_ExportLiveToBuffer*
class CORDL_TYPE __IVRChaperoneSetup___ExportLiveToBuffer : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27dbeb8, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dbf90, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::System::Text::StringBuilder* pBuffer, ByRef<uint32_t> pnBufferLength);

  /// @brief Method BeginInvoke, addr 0x27dbfa4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pBuffer, ByRef<uint32_t> pnBufferLength, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27dc038, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(ByRef<uint32_t> pnBufferLength, ::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___ExportLiveToBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___ExportLiveToBuffer(__IVRChaperoneSetup___ExportLiveToBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___ExportLiveToBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___ExportLiveToBuffer(__IVRChaperoneSetup___ExportLiveToBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___ExportLiveToBuffer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: ::_ImportFromBufferToWorking
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2611))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8342))
// CS Name: ::IVRChaperoneSetup::_ImportFromBufferToWorking*
class CORDL_TYPE __IVRChaperoneSetup___ImportFromBufferToWorking : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x27dc064, size 0xd8, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x27dc13c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pBuffer, uint32_t nImportFlags);

  /// @brief Method BeginInvoke, addr 0x27dc150, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pBuffer, uint32_t nImportFlags, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x27dc1e4, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___ImportFromBufferToWorking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __IVRChaperoneSetup___ImportFromBufferToWorking(__IVRChaperoneSetup___ImportFromBufferToWorking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__IVRChaperoneSetup___ImportFromBufferToWorking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __IVRChaperoneSetup___ImportFromBufferToWorking(__IVRChaperoneSetup___ImportFromBufferToWorking const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __IVRChaperoneSetup___ImportFromBufferToWorking();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Type: OVR.OpenVR::IVRChaperoneSetup
// SizeInfo { instance_size: 160, native_size: 160, calculated_instance_size: 160, calculated_native_size: 176, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8343))
// CS Name: ::OVR.OpenVR::IVRChaperoneSetup
struct CORDL_TYPE IVRChaperoneSetup {
public:
  // Declarations
  using _ImportFromBufferToWorking = ::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking;

  using _ExportLiveToBuffer = ::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer;

  using _GetLivePhysicalBoundsInfo = ::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo;

  using _SetWorkingPhysicalBoundsInfo = ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo;

  using _GetLiveCollisionBoundsTagsInfo = ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo;

  using _SetWorkingCollisionBoundsTagsInfo = ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo;

  using _GetLiveSeatedZeroPoseToRawTrackingPose = ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose;

  using _ReloadFromDisk = ::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk;

  using _SetWorkingStandingZeroPoseToRawTrackingPose = ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose;

  using _SetWorkingSeatedZeroPoseToRawTrackingPose = ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose;

  using _SetWorkingCollisionBoundsInfo = ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo;

  using _SetWorkingPlayAreaSize = ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize;

  using _GetWorkingStandingZeroPoseToRawTrackingPose = ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose;

  using _GetWorkingSeatedZeroPoseToRawTrackingPose = ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose;

  using _GetLiveCollisionBoundsInfo = ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo;

  using _GetWorkingCollisionBoundsInfo = ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo;

  using _GetWorkingPlayAreaRect = ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect;

  using _GetWorkingPlayAreaSize = ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize;

  using _RevertWorkingCopy = ::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy;

  using _CommitWorkingCopy = ::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy;

  // Ctor Parameters [CppParam { name: "CommitWorkingCopy", ty: "::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy*", modifiers: "", def_value: None }, CppParam { name: "RevertWorkingCopy", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingPlayAreaSize", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingPlayAreaRect", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingCollisionBoundsInfo", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetLiveCollisionBoundsInfo", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingSeatedZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingStandingZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingPlayAreaSize", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingCollisionBoundsInfo", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingSeatedZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingStandingZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "ReloadFromDisk", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk*", modifiers: "", def_value: None }, CppParam { name: "GetLiveSeatedZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingCollisionBoundsTagsInfo", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetLiveCollisionBoundsTagsInfo", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingPhysicalBoundsInfo", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetLivePhysicalBoundsInfo", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "ExportLiveToBuffer", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer*", modifiers: "", def_value: None }, CppParam { name: "ImportFromBufferToWorking", ty:
  // "::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking*", modifiers: "", def_value: None }]
  constexpr IVRChaperoneSetup(
      ::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy* CommitWorkingCopy, ::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy* RevertWorkingCopy,
      ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize* GetWorkingPlayAreaSize, ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect* GetWorkingPlayAreaRect,
      ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo* GetWorkingCollisionBoundsInfo, ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo* GetLiveCollisionBoundsInfo,
      ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose* GetWorkingSeatedZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose* GetWorkingStandingZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize* SetWorkingPlayAreaSize, ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo* SetWorkingCollisionBoundsInfo,
      ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose* SetWorkingSeatedZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose* SetWorkingStandingZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk* ReloadFromDisk, ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose* GetLiveSeatedZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo* SetWorkingCollisionBoundsTagsInfo,
      ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo* GetLiveCollisionBoundsTagsInfo,
      ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo* SetWorkingPhysicalBoundsInfo, ::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo* GetLivePhysicalBoundsInfo,
      ::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer* ExportLiveToBuffer, ::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking* ImportFromBufferToWorking) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup();

  /// @brief Field CommitWorkingCopy, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy* CommitWorkingCopy;

  /// @brief Field RevertWorkingCopy, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy* RevertWorkingCopy;

  /// @brief Field GetWorkingPlayAreaSize, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize* GetWorkingPlayAreaSize;

  /// @brief Field GetWorkingPlayAreaRect, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect* GetWorkingPlayAreaRect;

  /// @brief Field GetWorkingCollisionBoundsInfo, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo* GetWorkingCollisionBoundsInfo;

  /// @brief Field GetLiveCollisionBoundsInfo, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo* GetLiveCollisionBoundsInfo;

  /// @brief Field GetWorkingSeatedZeroPoseToRawTrackingPose, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose* GetWorkingSeatedZeroPoseToRawTrackingPose;

  /// @brief Field GetWorkingStandingZeroPoseToRawTrackingPose, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose* GetWorkingStandingZeroPoseToRawTrackingPose;

  /// @brief Field SetWorkingPlayAreaSize, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize* SetWorkingPlayAreaSize;

  /// @brief Field SetWorkingCollisionBoundsInfo, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo* SetWorkingCollisionBoundsInfo;

  /// @brief Field SetWorkingSeatedZeroPoseToRawTrackingPose, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose* SetWorkingSeatedZeroPoseToRawTrackingPose;

  /// @brief Field SetWorkingStandingZeroPoseToRawTrackingPose, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose* SetWorkingStandingZeroPoseToRawTrackingPose;

  /// @brief Field ReloadFromDisk, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk* ReloadFromDisk;

  /// @brief Field GetLiveSeatedZeroPoseToRawTrackingPose, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose* GetLiveSeatedZeroPoseToRawTrackingPose;

  /// @brief Field SetWorkingCollisionBoundsTagsInfo, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo* SetWorkingCollisionBoundsTagsInfo;

  /// @brief Field GetLiveCollisionBoundsTagsInfo, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo* GetLiveCollisionBoundsTagsInfo;

  /// @brief Field SetWorkingPhysicalBoundsInfo, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo* SetWorkingPhysicalBoundsInfo;

  /// @brief Field GetLivePhysicalBoundsInfo, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo* GetLivePhysicalBoundsInfo;

  /// @brief Field ExportLiveToBuffer, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer* ExportLiveToBuffer;

  /// @brief Field ImportFromBufferToWorking, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking* ImportFromBufferToWorking;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup, 0xa0>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, CommitWorkingCopy) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, RevertWorkingCopy) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetWorkingPlayAreaSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetWorkingPlayAreaRect) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetWorkingCollisionBoundsInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetLiveCollisionBoundsInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetWorkingSeatedZeroPoseToRawTrackingPose) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetWorkingStandingZeroPoseToRawTrackingPose) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, SetWorkingPlayAreaSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, SetWorkingCollisionBoundsInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, SetWorkingSeatedZeroPoseToRawTrackingPose) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, SetWorkingStandingZeroPoseToRawTrackingPose) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, ReloadFromDisk) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetLiveSeatedZeroPoseToRawTrackingPose) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, SetWorkingCollisionBoundsTagsInfo) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetLiveCollisionBoundsTagsInfo) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, SetWorkingPhysicalBoundsInfo) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, GetLivePhysicalBoundsInfo) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, ExportLiveToBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperoneSetup, ImportFromBufferToWorking) == 0x98, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___CommitWorkingCopy*, "OVR.OpenVR", "IVRChaperoneSetup/_CommitWorkingCopy");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___ExportLiveToBuffer*, "OVR.OpenVR", "IVRChaperoneSetup/_ExportLiveToBuffer");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetLivePhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLivePhysicalBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetLiveSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaRect*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___GetWorkingStandingZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___ImportFromBufferToWorking*, "OVR.OpenVR", "IVRChaperoneSetup/_ImportFromBufferToWorking");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___ReloadFromDisk*, "OVR.OpenVR", "IVRChaperoneSetup/_ReloadFromDisk");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___RevertWorkingCopy*, "OVR.OpenVR", "IVRChaperoneSetup/_RevertWorkingCopy");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::__IVRChaperoneSetup___SetWorkingStandingZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup, "OVR.OpenVR", "IVRChaperoneSetup");
