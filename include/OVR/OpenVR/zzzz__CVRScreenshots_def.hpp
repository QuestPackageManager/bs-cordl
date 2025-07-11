#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRScreenshots.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRScreenshots_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRScreenshots)
namespace OVR::OpenVR {
struct EVRScreenshotError;
}
namespace OVR::OpenVR {
struct EVRScreenshotPropertyFilenames;
}
namespace OVR::OpenVR {
struct EVRScreenshotType;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRScreenshots;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRScreenshots);
// Dependencies OVR.OpenVR.IVRScreenshots, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRScreenshots
class CORDL_TYPE CVRScreenshots : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x38
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRScreenshots FnTable;

  /// @brief Method GetScreenshotPropertyFilename, addr 0x4075dcc, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetScreenshotPropertyFilename(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotPropertyFilenames filenameType, ::System::Text::StringBuilder* pchFilename, uint32_t cchFilename,
                                                ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError);

  /// @brief Method GetScreenshotPropertyType, addr 0x4075da8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotType GetScreenshotPropertyType(uint32_t screenshotHandle, ::ByRef<::OVR::OpenVR::EVRScreenshotError> pError);

  /// @brief Method HookScreenshot, addr 0x4075d7c, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError HookScreenshot(::ArrayW<::OVR::OpenVR::EVRScreenshotType, ::Array<::OVR::OpenVR::EVRScreenshotType>*> pSupportedTypes);

  static inline ::OVR::OpenVR::CVRScreenshots* New_ctor(::System::IntPtr pInterface);

  /// @brief Method RequestScreenshot, addr 0x4075d54, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError RequestScreenshot(::ByRef<uint32_t> pOutScreenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchPreviewFilename, ::StringW pchVRFilename);

  /// @brief Method SubmitScreenshot, addr 0x4075e3c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError SubmitScreenshot(uint32_t screenshotHandle, ::OVR::OpenVR::EVRScreenshotType type, ::StringW pchSourcePreviewFilename, ::StringW pchSourceVRFilename);

  /// @brief Method TakeStereoScreenshot, addr 0x4075e14, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError TakeStereoScreenshot(::ByRef<uint32_t> pOutScreenshotHandle, ::StringW pchPreviewFilename, ::StringW pchVRFilename);

  /// @brief Method UpdateScreenshotProgress, addr 0x4075df0, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRScreenshotError UpdateScreenshotProgress(uint32_t screenshotHandle, float_t flProgress);

  constexpr ::OVR::OpenVR::IVRScreenshots const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRScreenshots& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRScreenshots value);

  /// @brief Method .ctor, addr 0x4075c38, size 0x11c, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRScreenshots();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRScreenshots", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRScreenshots(CVRScreenshots&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRScreenshots", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRScreenshots(CVRScreenshots const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8891 };

  /// @brief Field FnTable, offset: 0x10, size: 0x38, def value: None
  ::OVR::OpenVR::IVRScreenshots ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRScreenshots, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRScreenshots, 0x48>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRScreenshots);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRScreenshots*, "OVR.OpenVR", "CVRScreenshots");
