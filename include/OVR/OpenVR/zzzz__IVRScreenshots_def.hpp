#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRScreenshots.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRScreenshots)
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
namespace OVR::OpenVR {
struct EVRScreenshotPropertyFilenames;
}
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
namespace OVR::OpenVR {
class IVRScreenshots__GetScreenshotPropertyFilename;
}
namespace OVR::OpenVR {
class IVRScreenshots__GetScreenshotPropertyType;
}
namespace OVR::OpenVR {
class IVRScreenshots__HookScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__RequestScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__SubmitScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__TakeStereoScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__UpdateScreenshotProgress;
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
class IVRScreenshots__GetScreenshotPropertyFilename;
}
namespace OVR::OpenVR {
class IVRScreenshots__GetScreenshotPropertyType;
}
namespace OVR::OpenVR {
class IVRScreenshots__HookScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__RequestScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__SubmitScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__TakeStereoScreenshot;
}
namespace OVR::OpenVR {
class IVRScreenshots__UpdateScreenshotProgress;
}
namespace OVR::OpenVR {
struct IVRScreenshots;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename);
MARK_REF_PTR_T(::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType);
MARK_REF_PTR_T(::OVR::OpenVR::IVRScreenshots__HookScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::IVRScreenshots__RequestScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::IVRScreenshots__SubmitScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot);
MARK_REF_PTR_T(::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress);
MARK_VAL_T(::OVR::OpenVR::IVRScreenshots);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRScreenshots/_RequestScreenshot
class CORDL_TYPE IVRScreenshots__RequestScreenshot : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407ab70, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407ac44, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x407ab5c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError Invoke(::ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename);

  static inline ::OVR::OpenVR::IVRScreenshots__RequestScreenshot* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407aabc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots__RequestScreenshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__RequestScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRScreenshots__RequestScreenshot(IVRScreenshots__RequestScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__RequestScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRScreenshots__RequestScreenshot(IVRScreenshots__RequestScreenshot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8825 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots__RequestScreenshot, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRScreenshots/_HookScreenshot
class CORDL_TYPE IVRScreenshots__HookScreenshot : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407ad24, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>> pSupportedTypes, int32_t numTypes,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407adb8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x407ad10, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError Invoke(::ByRef<::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*>> pSupportedTypes, int32_t numTypes);

  static inline ::OVR::OpenVR::IVRScreenshots__HookScreenshot* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407ac70, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots__HookScreenshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__HookScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRScreenshots__HookScreenshot(IVRScreenshots__HookScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__HookScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRScreenshots__HookScreenshot(IVRScreenshots__HookScreenshot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8826 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots__HookScreenshot, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyType
class CORDL_TYPE IVRScreenshots__GetScreenshotPropertyType : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407ae80, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t screenshotHandle, ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407af3c, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotType EndInvoke(::ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x407ae6c, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotType Invoke(uint32_t screenshotHandle, ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError);

  static inline ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407ade0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots__GetScreenshotPropertyType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__GetScreenshotPropertyType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRScreenshots__GetScreenshotPropertyType(IVRScreenshots__GetScreenshotPropertyType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__GetScreenshotPropertyType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRScreenshots__GetScreenshotPropertyType(IVRScreenshots__GetScreenshotPropertyType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRScreenshots/_GetScreenshotPropertyFilename
class CORDL_TYPE IVRScreenshots__GetScreenshotPropertyFilename : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407b008, size 0x10c, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                             ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407b114, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::ByRef<::OVR::OpenVR::EVRScreenshotError> pError, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x407aff4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                         ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError);

  static inline ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407af68, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots__GetScreenshotPropertyFilename();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__GetScreenshotPropertyFilename", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRScreenshots__GetScreenshotPropertyFilename(IVRScreenshots__GetScreenshotPropertyFilename&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__GetScreenshotPropertyFilename", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRScreenshots__GetScreenshotPropertyFilename(IVRScreenshots__GetScreenshotPropertyFilename const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8828 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRScreenshots/_UpdateScreenshotProgress
class CORDL_TYPE IVRScreenshots__UpdateScreenshotProgress : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407b1e0, size 0xbc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t screenshotHandle, float_t flProgress, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407b29c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x407b1cc, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError Invoke(uint32_t screenshotHandle, float_t flProgress);

  static inline ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407b140, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots__UpdateScreenshotProgress();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__UpdateScreenshotProgress", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRScreenshots__UpdateScreenshotProgress(IVRScreenshots__UpdateScreenshotProgress&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__UpdateScreenshotProgress", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRScreenshots__UpdateScreenshotProgress(IVRScreenshots__UpdateScreenshotProgress const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8829 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRScreenshots/_TakeStereoScreenshot
class CORDL_TYPE IVRScreenshots__TakeStereoScreenshot : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407b378, size 0xa0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407b418, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::ByRef<uint32_t> pOutScreenshotHandle, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x407b364, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError Invoke(::ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename);

  static inline ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407b2c4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots__TakeStereoScreenshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__TakeStereoScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRScreenshots__TakeStereoScreenshot(IVRScreenshots__TakeStereoScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__TakeStereoScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRScreenshots__TakeStereoScreenshot(IVRScreenshots__TakeStereoScreenshot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRScreenshots/_SubmitScreenshot
class CORDL_TYPE IVRScreenshots__SubmitScreenshot : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x407b4e4, size 0xd0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x407b5b4, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x407b4d0, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError Invoke(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename);

  static inline ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x407b444, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots__SubmitScreenshot();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__SubmitScreenshot", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRScreenshots__SubmitScreenshot(IVRScreenshots__SubmitScreenshot&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRScreenshots__SubmitScreenshot", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRScreenshots__SubmitScreenshot(IVRScreenshots__SubmitScreenshot const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8831 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots__SubmitScreenshot, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRScreenshots
struct CORDL_TYPE IVRScreenshots {
public:
  // Declarations
  using _GetScreenshotPropertyFilename = ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename;

  using _GetScreenshotPropertyType = ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType;

  using _HookScreenshot = ::OVR::OpenVR::IVRScreenshots__HookScreenshot;

  using _RequestScreenshot = ::OVR::OpenVR::IVRScreenshots__RequestScreenshot;

  using _SubmitScreenshot = ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot;

  using _TakeStereoScreenshot = ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot;

  using _UpdateScreenshotProgress = ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRScreenshots();

  // Ctor Parameters [CppParam { name: "RequestScreenshot", ty: "::OVR::OpenVR::IVRScreenshots__RequestScreenshot*", modifiers: "", def_value: None }, CppParam { name: "HookScreenshot", ty:
  // "::OVR::OpenVR::IVRScreenshots__HookScreenshot*", modifiers: "", def_value: None }, CppParam { name: "GetScreenshotPropertyType", ty: "::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*",
  // modifiers: "", def_value: None }, CppParam { name: "GetScreenshotPropertyFilename", ty: "::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*", modifiers: "", def_value: None }, CppParam
  // { name: "UpdateScreenshotProgress", ty: "::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*", modifiers: "", def_value: None }, CppParam { name: "TakeStereoScreenshot", ty:
  // "::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*", modifiers: "", def_value: None }, CppParam { name: "SubmitScreenshot", ty: "::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*", modifiers:
  // "", def_value: None }]
  constexpr IVRScreenshots(::OVR::OpenVR::IVRScreenshots__RequestScreenshot* RequestScreenshot, ::OVR::OpenVR::IVRScreenshots__HookScreenshot* HookScreenshot,
                           ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType* GetScreenshotPropertyType,
                           ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename* GetScreenshotPropertyFilename,
                           ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress* UpdateScreenshotProgress, ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot* TakeStereoScreenshot,
                           ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot* SubmitScreenshot) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8832 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field RequestScreenshot, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRScreenshots__RequestScreenshot* RequestScreenshot;

  /// @brief Field HookScreenshot, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRScreenshots__HookScreenshot* HookScreenshot;

  /// @brief Field GetScreenshotPropertyType, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType* GetScreenshotPropertyType;

  /// @brief Field GetScreenshotPropertyFilename, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename* GetScreenshotPropertyFilename;

  /// @brief Field UpdateScreenshotProgress, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress* UpdateScreenshotProgress;

  /// @brief Field TakeStereoScreenshot, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot* TakeStereoScreenshot;

  /// @brief Field SubmitScreenshot, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRScreenshots__SubmitScreenshot* SubmitScreenshot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRScreenshots, RequestScreenshot) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRScreenshots, HookScreenshot) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRScreenshots, GetScreenshotPropertyType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRScreenshots, GetScreenshotPropertyFilename) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRScreenshots, UpdateScreenshotProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRScreenshots, TakeStereoScreenshot) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRScreenshots, SubmitScreenshot) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRScreenshots, 0x38>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyFilename*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyFilename");
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots__GetScreenshotPropertyType*, "OVR.OpenVR", "IVRScreenshots/_GetScreenshotPropertyType");
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots__HookScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots__HookScreenshot*, "OVR.OpenVR", "IVRScreenshots/_HookScreenshot");
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots__RequestScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots__RequestScreenshot*, "OVR.OpenVR", "IVRScreenshots/_RequestScreenshot");
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots__SubmitScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots__SubmitScreenshot*, "OVR.OpenVR", "IVRScreenshots/_SubmitScreenshot");
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots__TakeStereoScreenshot*, "OVR.OpenVR", "IVRScreenshots/_TakeStereoScreenshot");
NEED_NO_BOX(::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots__UpdateScreenshotProgress*, "OVR.OpenVR", "IVRScreenshots/_UpdateScreenshotProgress");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRScreenshots, "OVR.OpenVR", "IVRScreenshots");
