#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRChaperone.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRChaperone)
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace OVR::OpenVR {
class IVRChaperone__AreBoundsVisible;
}
namespace OVR::OpenVR {
class IVRChaperone__ForceBoundsVisible;
}
namespace OVR::OpenVR {
class IVRChaperone__GetBoundsColor;
}
namespace OVR::OpenVR {
class IVRChaperone__GetCalibrationState;
}
namespace OVR::OpenVR {
class IVRChaperone__GetPlayAreaRect;
}
namespace OVR::OpenVR {
class IVRChaperone__GetPlayAreaSize;
}
namespace OVR::OpenVR {
class IVRChaperone__ReloadInfo;
}
namespace OVR::OpenVR {
class IVRChaperone__SetSceneColor;
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
class IVRChaperone__AreBoundsVisible;
}
namespace OVR::OpenVR {
class IVRChaperone__ForceBoundsVisible;
}
namespace OVR::OpenVR {
class IVRChaperone__GetBoundsColor;
}
namespace OVR::OpenVR {
class IVRChaperone__GetCalibrationState;
}
namespace OVR::OpenVR {
class IVRChaperone__GetPlayAreaRect;
}
namespace OVR::OpenVR {
class IVRChaperone__GetPlayAreaSize;
}
namespace OVR::OpenVR {
class IVRChaperone__ReloadInfo;
}
namespace OVR::OpenVR {
class IVRChaperone__SetSceneColor;
}
namespace OVR::OpenVR {
struct IVRChaperone;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__AreBoundsVisible);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__ForceBoundsVisible);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__GetBoundsColor);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__GetCalibrationState);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__GetPlayAreaRect);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__GetPlayAreaSize);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__ReloadInfo);
MARK_REF_PTR_T(::OVR::OpenVR::IVRChaperone__SetSceneColor);
MARK_VAL_T(::OVR::OpenVR::IVRChaperone);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_GetCalibrationState
class CORDL_TYPE IVRChaperone__GetCalibrationState : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ea14, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ea34, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ChaperoneCalibrationState EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ea00, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ChaperoneCalibrationState Invoke();

  static inline ::OVR::OpenVR::IVRChaperone__GetCalibrationState* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405e978, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__GetCalibrationState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetCalibrationState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__GetCalibrationState(IVRChaperone__GetCalibrationState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetCalibrationState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__GetCalibrationState(IVRChaperone__GetCalibrationState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8630 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__GetCalibrationState, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_GetPlayAreaSize
class CORDL_TYPE IVRChaperone__GetPlayAreaSize : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405eb10, size 0xa4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ebb4, size 0x34, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405eafc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<float_t> pSizeX, ::ByRef<float_t> pSizeZ);

  static inline ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ea5c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__GetPlayAreaSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetPlayAreaSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__GetPlayAreaSize(IVRChaperone__GetPlayAreaSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetPlayAreaSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__GetPlayAreaSize(IVRChaperone__GetPlayAreaSize const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8631 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__GetPlayAreaSize, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_GetPlayAreaRect
class CORDL_TYPE IVRChaperone__GetPlayAreaRect : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ec98, size 0x8c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ed24, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ec84, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::HmdQuad_t> rect);

  static inline ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ebe8, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__GetPlayAreaRect();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetPlayAreaRect", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__GetPlayAreaRect(IVRChaperone__GetPlayAreaRect&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetPlayAreaRect", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__GetPlayAreaRect(IVRChaperone__GetPlayAreaRect const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8632 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__GetPlayAreaRect, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_ReloadInfo
class CORDL_TYPE IVRChaperone__ReloadInfo : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405edec, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ee0c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405edd8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRChaperone__ReloadInfo* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ed50, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__ReloadInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__ReloadInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__ReloadInfo(IVRChaperone__ReloadInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__ReloadInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__ReloadInfo(IVRChaperone__ReloadInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8633 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__ReloadInfo, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_SetSceneColor
class CORDL_TYPE IVRChaperone__SetSceneColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405eeb8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::HmdColor_t color, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ef40, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405eea4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::HmdColor_t color);

  static inline ::OVR::OpenVR::IVRChaperone__SetSceneColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ee18, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__SetSceneColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__SetSceneColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__SetSceneColor(IVRChaperone__SetSceneColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__SetSceneColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__SetSceneColor(IVRChaperone__SetSceneColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8634 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__SetSceneColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_GetBoundsColor
class CORDL_TYPE IVRChaperone__GetBoundsColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405f000, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance,
                                             ::ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405f10c, size 0x24, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, ::ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405efec, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance, ::ByRef<::OVR::OpenVR::HmdColor_t> pOutputCameraColor);

  static inline ::OVR::OpenVR::IVRChaperone__GetBoundsColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ef4c, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__GetBoundsColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetBoundsColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__GetBoundsColor(IVRChaperone__GetBoundsColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__GetBoundsColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__GetBoundsColor(IVRChaperone__GetBoundsColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8635 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__GetBoundsColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_AreBoundsVisible
class CORDL_TYPE IVRChaperone__AreBoundsVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405f1cc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405f1ec, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405f1b8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRChaperone__AreBoundsVisible* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405f130, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__AreBoundsVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__AreBoundsVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__AreBoundsVisible(IVRChaperone__AreBoundsVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__AreBoundsVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__AreBoundsVisible(IVRChaperone__AreBoundsVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8636 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__AreBoundsVisible, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRChaperone/_ForceBoundsVisible
class CORDL_TYPE IVRChaperone__ForceBoundsVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405f2b8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bForce, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405f340, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405f2a0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool bForce);

  static inline ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405f214, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone__ForceBoundsVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__ForceBoundsVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRChaperone__ForceBoundsVisible(IVRChaperone__ForceBoundsVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRChaperone__ForceBoundsVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRChaperone__ForceBoundsVisible(IVRChaperone__ForceBoundsVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8637 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone__ForceBoundsVisible, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRChaperone
struct CORDL_TYPE IVRChaperone {
public:
  // Declarations
  using _AreBoundsVisible = ::OVR::OpenVR::IVRChaperone__AreBoundsVisible;

  using _ForceBoundsVisible = ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible;

  using _GetBoundsColor = ::OVR::OpenVR::IVRChaperone__GetBoundsColor;

  using _GetCalibrationState = ::OVR::OpenVR::IVRChaperone__GetCalibrationState;

  using _GetPlayAreaRect = ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect;

  using _GetPlayAreaSize = ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize;

  using _ReloadInfo = ::OVR::OpenVR::IVRChaperone__ReloadInfo;

  using _SetSceneColor = ::OVR::OpenVR::IVRChaperone__SetSceneColor;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRChaperone();

  // Ctor Parameters [CppParam { name: "GetCalibrationState", ty: "::OVR::OpenVR::IVRChaperone__GetCalibrationState*", modifiers: "", def_value: None }, CppParam { name: "GetPlayAreaSize", ty:
  // "::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*", modifiers: "", def_value: None }, CppParam { name: "GetPlayAreaRect", ty: "::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*", modifiers: "",
  // def_value: None }, CppParam { name: "ReloadInfo", ty: "::OVR::OpenVR::IVRChaperone__ReloadInfo*", modifiers: "", def_value: None }, CppParam { name: "SetSceneColor", ty:
  // "::OVR::OpenVR::IVRChaperone__SetSceneColor*", modifiers: "", def_value: None }, CppParam { name: "GetBoundsColor", ty: "::OVR::OpenVR::IVRChaperone__GetBoundsColor*", modifiers: "", def_value:
  // None }, CppParam { name: "AreBoundsVisible", ty: "::OVR::OpenVR::IVRChaperone__AreBoundsVisible*", modifiers: "", def_value: None }, CppParam { name: "ForceBoundsVisible", ty:
  // "::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*", modifiers: "", def_value: None }]
  constexpr IVRChaperone(::OVR::OpenVR::IVRChaperone__GetCalibrationState* GetCalibrationState, ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize* GetPlayAreaSize,
                         ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect* GetPlayAreaRect, ::OVR::OpenVR::IVRChaperone__ReloadInfo* ReloadInfo, ::OVR::OpenVR::IVRChaperone__SetSceneColor* SetSceneColor,
                         ::OVR::OpenVR::IVRChaperone__GetBoundsColor* GetBoundsColor, ::OVR::OpenVR::IVRChaperone__AreBoundsVisible* AreBoundsVisible,
                         ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible* ForceBoundsVisible) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8638 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field GetCalibrationState, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__GetCalibrationState* GetCalibrationState;

  /// @brief Field GetPlayAreaSize, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__GetPlayAreaSize* GetPlayAreaSize;

  /// @brief Field GetPlayAreaRect, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__GetPlayAreaRect* GetPlayAreaRect;

  /// @brief Field ReloadInfo, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__ReloadInfo* ReloadInfo;

  /// @brief Field SetSceneColor, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__SetSceneColor* SetSceneColor;

  /// @brief Field GetBoundsColor, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__GetBoundsColor* GetBoundsColor;

  /// @brief Field AreBoundsVisible, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__AreBoundsVisible* AreBoundsVisible;

  /// @brief Field ForceBoundsVisible, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRChaperone__ForceBoundsVisible* ForceBoundsVisible;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRChaperone, GetCalibrationState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperone, GetPlayAreaSize) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperone, GetPlayAreaRect) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperone, ReloadInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperone, SetSceneColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperone, GetBoundsColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperone, AreBoundsVisible) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRChaperone, ForceBoundsVisible) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRChaperone, 0x40>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__AreBoundsVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__AreBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_AreBoundsVisible");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__ForceBoundsVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__ForceBoundsVisible*, "OVR.OpenVR", "IVRChaperone/_ForceBoundsVisible");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__GetBoundsColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__GetBoundsColor*, "OVR.OpenVR", "IVRChaperone/_GetBoundsColor");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__GetCalibrationState);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__GetCalibrationState*, "OVR.OpenVR", "IVRChaperone/_GetCalibrationState");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__GetPlayAreaRect);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__GetPlayAreaRect*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaRect");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__GetPlayAreaSize);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__GetPlayAreaSize*, "OVR.OpenVR", "IVRChaperone/_GetPlayAreaSize");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__ReloadInfo);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__ReloadInfo*, "OVR.OpenVR", "IVRChaperone/_ReloadInfo");
NEED_NO_BOX(::OVR::OpenVR::IVRChaperone__SetSceneColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone__SetSceneColor*, "OVR.OpenVR", "IVRChaperone/_SetSceneColor");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRChaperone, "OVR.OpenVR", "IVRChaperone");
