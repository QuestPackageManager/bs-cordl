#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRChaperoneSetup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
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
class IVRChaperoneSetup__CommitWorkingCopy;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__ExportLiveToBuffer;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLiveCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLivePhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingPlayAreaRect;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__ImportFromBufferToWorking;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__ReloadFromDisk;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__RevertWorkingCopy;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose;
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
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRChaperoneSetup__CommitWorkingCopy;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__ExportLiveToBuffer;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLiveCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLivePhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingPlayAreaRect;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__ImportFromBufferToWorking;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__ReloadFromDisk;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__RevertWorkingCopy;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingCollisionBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingPlayAreaSize;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
class IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose;
}
namespace OVR::OpenVR {
struct IVRChaperoneSetup;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose);
MARK_VAL_T(::OVR::OpenVR::IVRChaperoneSetup);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_CommitWorkingCopy
class CORDL_TYPE IVRChaperoneSetup__CommitWorkingCopy : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d790, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d814, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d77c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::OVR::OpenVR::EChaperoneConfigFile configFile);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d6f0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__CommitWorkingCopy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__CommitWorkingCopy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__CommitWorkingCopy(IVRChaperoneSetup__CommitWorkingCopy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__CommitWorkingCopy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__CommitWorkingCopy(IVRChaperoneSetup__CommitWorkingCopy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8641 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_RevertWorkingCopy
class CORDL_TYPE IVRChaperoneSetup__RevertWorkingCopy : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d8d8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d8f8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d8c4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d83c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__RevertWorkingCopy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__RevertWorkingCopy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__RevertWorkingCopy(IVRChaperoneSetup__RevertWorkingCopy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__RevertWorkingCopy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__RevertWorkingCopy(IVRChaperoneSetup__RevertWorkingCopy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8642 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaSize
class CORDL_TYPE IVRChaperoneSetup__GetWorkingPlayAreaSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d9b8, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405da5c, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d9a4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d904, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetWorkingPlayAreaSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingPlayAreaSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetWorkingPlayAreaSize(IVRChaperoneSetup__GetWorkingPlayAreaSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingPlayAreaSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetWorkingPlayAreaSize(IVRChaperoneSetup__GetWorkingPlayAreaSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8643 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingPlayAreaRect
class CORDL_TYPE IVRChaperoneSetup__GetWorkingPlayAreaRect : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405db40, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405dbcc, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405db2c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405da90, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetWorkingPlayAreaRect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingPlayAreaRect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetWorkingPlayAreaRect(IVRChaperoneSetup__GetWorkingPlayAreaRect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingPlayAreaRect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetWorkingPlayAreaRect(IVRChaperoneSetup__GetWorkingPlayAreaRect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8644 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo
class CORDL_TYPE IVRChaperoneSetup__GetWorkingCollisionBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405dcac, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ::ByRef<uint32_t> punQuadsCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405dd40, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<uint32_t> punQuadsCount, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405dc98, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ::ByRef<uint32_t> punQuadsCount);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405dbf8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetWorkingCollisionBoundsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingCollisionBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetWorkingCollisionBoundsInfo(IVRChaperoneSetup__GetWorkingCollisionBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingCollisionBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetWorkingCollisionBoundsInfo(IVRChaperoneSetup__GetWorkingCollisionBoundsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsInfo
class CORDL_TYPE IVRChaperoneSetup__GetLiveCollisionBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405de20, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ::ByRef<uint32_t> punQuadsCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405deb4, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<uint32_t> punQuadsCount, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405de0c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ::ByRef<uint32_t> punQuadsCount);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405dd6c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetLiveCollisionBoundsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLiveCollisionBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetLiveCollisionBoundsInfo(IVRChaperoneSetup__GetLiveCollisionBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLiveCollisionBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetLiveCollisionBoundsInfo(IVRChaperoneSetup__GetLiveCollisionBoundsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose
class CORDL_TYPE IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405df90, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e01c, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405df7c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405dee0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose(IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose(IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8647 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose
class CORDL_TYPE IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405e0f8, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e184, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405e0e4, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e048, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose(IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose(IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8648 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPlayAreaSize
class CORDL_TYPE IVRChaperoneSetup__SetWorkingPlayAreaSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405e250, size 0x9c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t sizeX, float_t sizeZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e2ec, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405e23c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(float_t sizeX, float_t sizeZ);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e1b0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__SetWorkingPlayAreaSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingPlayAreaSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__SetWorkingPlayAreaSize(IVRChaperoneSetup__SetWorkingPlayAreaSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingPlayAreaSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__SetWorkingPlayAreaSize(IVRChaperoneSetup__SetWorkingPlayAreaSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8649 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo
class CORDL_TYPE IVRChaperoneSetup__SetWorkingCollisionBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405e3ac, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e440, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405e398, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e2f8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__SetWorkingCollisionBoundsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingCollisionBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__SetWorkingCollisionBoundsInfo(IVRChaperoneSetup__SetWorkingCollisionBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingCollisionBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__SetWorkingCollisionBoundsInfo(IVRChaperoneSetup__SetWorkingCollisionBoundsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8650 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose
class CORDL_TYPE IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405e4fc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e588, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405e4e8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e44c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose(IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose(IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8651 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose
class CORDL_TYPE IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405e654, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e6e0, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405e640, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e5a4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose(IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose(IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_ReloadFromDisk
class CORDL_TYPE IVRChaperoneSetup__ReloadFromDisk : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405e79c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EChaperoneConfigFile configFile, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e820, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405e788, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EChaperoneConfigFile configFile);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e6fc, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__ReloadFromDisk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__ReloadFromDisk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__ReloadFromDisk(IVRChaperoneSetup__ReloadFromDisk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__ReloadFromDisk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__ReloadFromDisk(IVRChaperoneSetup__ReloadFromDisk const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8653 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose
class CORDL_TYPE IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405e8dc, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405e968, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405e8c8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e82c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose(IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose(IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8654 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo
class CORDL_TYPE IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ea48, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, uint32_t unTagCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405eadc, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ea34, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, uint32_t unTagCount);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e994, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo(IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo(IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8655 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo
class CORDL_TYPE IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405eb9c, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, ::ByRef<uint32_t> punTagCount, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ec30, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<uint32_t> punTagCount, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405eb88, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer, ::ByRef<uint32_t> punTagCount);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405eae8, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo(IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo(IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8656 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo
class CORDL_TYPE IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ed10, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405eda4, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ecfc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, uint32_t unQuadsCount);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ec5c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo(IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo(IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8657 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_GetLivePhysicalBoundsInfo
class CORDL_TYPE IVRChaperoneSetup__GetLivePhysicalBoundsInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ee80, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ::ByRef<uint32_t> punQuadsCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ef14, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<uint32_t> punQuadsCount, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ee6c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer, ::ByRef<uint32_t> punQuadsCount);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405edcc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__GetLivePhysicalBoundsInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLivePhysicalBoundsInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__GetLivePhysicalBoundsInfo(IVRChaperoneSetup__GetLivePhysicalBoundsInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__GetLivePhysicalBoundsInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__GetLivePhysicalBoundsInfo(IVRChaperoneSetup__GetLivePhysicalBoundsInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8658 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_ExportLiveToBuffer
class CORDL_TYPE IVRChaperoneSetup__ExportLiveToBuffer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405eff4, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pBuffer, ::ByRef<uint32_t> pnBufferLength, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405f088, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<uint32_t> pnBufferLength, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405efe0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::System::Text::StringBuilder* pBuffer, ::ByRef<uint32_t> pnBufferLength);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ef40, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__ExportLiveToBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__ExportLiveToBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__ExportLiveToBuffer(IVRChaperoneSetup__ExportLiveToBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__ExportLiveToBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__ExportLiveToBuffer(IVRChaperoneSetup__ExportLiveToBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8659 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperoneSetup/_ImportFromBufferToWorking
class CORDL_TYPE IVRChaperoneSetup__ImportFromBufferToWorking : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405f168, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::StringW pBuffer, uint32_t nImportFlags, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405f1fc, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405f154, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::StringW pBuffer, uint32_t nImportFlags);

  static inline ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405f0b4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup__ImportFromBufferToWorking();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__ImportFromBufferToWorking", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperoneSetup__ImportFromBufferToWorking(IVRChaperoneSetup__ImportFromBufferToWorking&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperoneSetup__ImportFromBufferToWorking", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperoneSetup__ImportFromBufferToWorking(IVRChaperoneSetup__ImportFromBufferToWorking const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8660 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRChaperoneSetup
struct CORDL_TYPE IVRChaperoneSetup {
public:
  // Declarations
  using _CommitWorkingCopy = ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy;

  using _ExportLiveToBuffer = ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer;

  using _GetLiveCollisionBoundsInfo = ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo;

  using _GetLiveCollisionBoundsTagsInfo = ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo;

  using _GetLivePhysicalBoundsInfo = ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo;

  using _GetLiveSeatedZeroPoseToRawTrackingPose = ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose;

  using _GetWorkingCollisionBoundsInfo = ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo;

  using _GetWorkingPlayAreaRect = ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect;

  using _GetWorkingPlayAreaSize = ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize;

  using _GetWorkingSeatedZeroPoseToRawTrackingPose = ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose;

  using _GetWorkingStandingZeroPoseToRawTrackingPose = ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose;

  using _ImportFromBufferToWorking = ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking;

  using _ReloadFromDisk = ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk;

  using _RevertWorkingCopy = ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy;

  using _SetWorkingCollisionBoundsInfo = ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo;

  using _SetWorkingCollisionBoundsTagsInfo = ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo;

  using _SetWorkingPhysicalBoundsInfo = ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo;

  using _SetWorkingPlayAreaSize = ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize;

  using _SetWorkingSeatedZeroPoseToRawTrackingPose = ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose;

  using _SetWorkingStandingZeroPoseToRawTrackingPose = ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperoneSetup();

  // Ctor Parameters [CppParam { name: "CommitWorkingCopy", ty: "::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*", modifiers: "", def_value: None }, CppParam { name: "RevertWorkingCopy", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingPlayAreaSize", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingPlayAreaRect", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingCollisionBoundsInfo", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetLiveCollisionBoundsInfo", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingSeatedZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "GetWorkingStandingZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingPlayAreaSize", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingCollisionBoundsInfo", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingSeatedZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingStandingZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "ReloadFromDisk", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*", modifiers: "", def_value: None }, CppParam { name: "GetLiveSeatedZeroPoseToRawTrackingPose", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingCollisionBoundsTagsInfo", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetLiveCollisionBoundsTagsInfo", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*", modifiers: "", def_value: None }, CppParam { name: "SetWorkingPhysicalBoundsInfo", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "GetLivePhysicalBoundsInfo", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*", modifiers: "", def_value: None }, CppParam { name: "ExportLiveToBuffer", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*", modifiers: "", def_value: None }, CppParam { name: "ImportFromBufferToWorking", ty:
  // "::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*", modifiers: "", def_value: None }]
  constexpr IVRChaperoneSetup(
      ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy* CommitWorkingCopy, ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy* RevertWorkingCopy,
      ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize* GetWorkingPlayAreaSize, ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect* GetWorkingPlayAreaRect,
      ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo* GetWorkingCollisionBoundsInfo, ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo* GetLiveCollisionBoundsInfo,
      ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose* GetWorkingSeatedZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose* GetWorkingStandingZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize* SetWorkingPlayAreaSize, ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo* SetWorkingCollisionBoundsInfo,
      ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose* SetWorkingSeatedZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose* SetWorkingStandingZeroPoseToRawTrackingPose, ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk* ReloadFromDisk,
      ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose* GetLiveSeatedZeroPoseToRawTrackingPose,
      ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo* SetWorkingCollisionBoundsTagsInfo,
      ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo* GetLiveCollisionBoundsTagsInfo, ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo* SetWorkingPhysicalBoundsInfo,
      ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo* GetLivePhysicalBoundsInfo, ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer* ExportLiveToBuffer,
      ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking* ImportFromBufferToWorking) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8661 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xa0 };

  /// @brief Field CommitWorkingCopy, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy* CommitWorkingCopy;

  /// @brief Field RevertWorkingCopy, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy* RevertWorkingCopy;

  /// @brief Field GetWorkingPlayAreaSize, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize* GetWorkingPlayAreaSize;

  /// @brief Field GetWorkingPlayAreaRect, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect* GetWorkingPlayAreaRect;

  /// @brief Field GetWorkingCollisionBoundsInfo, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo* GetWorkingCollisionBoundsInfo;

  /// @brief Field GetLiveCollisionBoundsInfo, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo* GetLiveCollisionBoundsInfo;

  /// @brief Field GetWorkingSeatedZeroPoseToRawTrackingPose, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose* GetWorkingSeatedZeroPoseToRawTrackingPose;

  /// @brief Field GetWorkingStandingZeroPoseToRawTrackingPose, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose* GetWorkingStandingZeroPoseToRawTrackingPose;

  /// @brief Field SetWorkingPlayAreaSize, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize* SetWorkingPlayAreaSize;

  /// @brief Field SetWorkingCollisionBoundsInfo, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo* SetWorkingCollisionBoundsInfo;

  /// @brief Field SetWorkingSeatedZeroPoseToRawTrackingPose, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose* SetWorkingSeatedZeroPoseToRawTrackingPose;

  /// @brief Field SetWorkingStandingZeroPoseToRawTrackingPose, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose* SetWorkingStandingZeroPoseToRawTrackingPose;

  /// @brief Field ReloadFromDisk, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk* ReloadFromDisk;

  /// @brief Field GetLiveSeatedZeroPoseToRawTrackingPose, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose* GetLiveSeatedZeroPoseToRawTrackingPose;

  /// @brief Field SetWorkingCollisionBoundsTagsInfo, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo* SetWorkingCollisionBoundsTagsInfo;

  /// @brief Field GetLiveCollisionBoundsTagsInfo, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo* GetLiveCollisionBoundsTagsInfo;

  /// @brief Field SetWorkingPhysicalBoundsInfo, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo* SetWorkingPhysicalBoundsInfo;

  /// @brief Field GetLivePhysicalBoundsInfo, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo* GetLivePhysicalBoundsInfo;

  /// @brief Field ExportLiveToBuffer, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer* ExportLiveToBuffer;

  /// @brief Field ImportFromBufferToWorking, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking* ImportFromBufferToWorking;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
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

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperoneSetup, 0xa0>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__CommitWorkingCopy*, "OVR.OpenVR", "IVRChaperoneSetup/_CommitWorkingCopy");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__ExportLiveToBuffer*, "OVR.OpenVR", "IVRChaperoneSetup/_ExportLiveToBuffer");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveCollisionBoundsTagsInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetLivePhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLivePhysicalBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetLiveSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingCollisionBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaRect*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaRect");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingPlayAreaSize");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_GetWorkingStandingZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__ImportFromBufferToWorking*, "OVR.OpenVR", "IVRChaperoneSetup/_ImportFromBufferToWorking");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__ReloadFromDisk*, "OVR.OpenVR", "IVRChaperoneSetup/_ReloadFromDisk");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__RevertWorkingCopy*, "OVR.OpenVR", "IVRChaperoneSetup/_RevertWorkingCopy");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingCollisionBoundsTagsInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPhysicalBoundsInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingPlayAreaSize*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingPlayAreaSize");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingSeatedZeroPoseToRawTrackingPose");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose*, "OVR.OpenVR", "IVRChaperoneSetup/_SetWorkingStandingZeroPoseToRawTrackingPose");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperoneSetup, "OVR.OpenVR", "IVRChaperoneSetup");
