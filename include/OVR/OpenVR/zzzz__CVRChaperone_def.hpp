#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRChaperone.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRChaperone_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRChaperone)
namespace OVR::OpenVR {
struct ChaperoneCalibrationState;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct HmdQuad_t;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRChaperone;
}
// Write type traits
MARK_REF_T(::OVR::OpenVR::CVRChaperone*);
DEFINE_IL2CPP_CLASS(::OVR::OpenVR::CVRChaperone*, "OVR.OpenVR", "CVRChaperone");
// Dependencies OVR.OpenVR.IVRChaperone, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRChaperone
class CORDL_TYPE CVRChaperone : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x40
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRChaperone FnTable;

  /// @brief Method AreBoundsVisible, addr 0x5e42750, size 0x20, virtual false, abstract: false, final false
  inline bool AreBoundsVisible();

  /// @brief Method ForceBoundsVisible, addr 0x5e42770, size 0x24, virtual false, abstract: false, final false
  inline void ForceBoundsVisible(bool bForce);

  /// @brief Method GetBoundsColor, addr 0x5e42730, size 0x20, virtual false, abstract: false, final false
  inline void GetBoundsColor(::by_ref<::OVR::OpenVR::HmdColor_t> pOutputColorArray, int32_t nNumOutputColors, float_t flCollisionBoundsFadeDistance,
                             ::by_ref<::OVR::OpenVR::HmdColor_t> pOutputCameraColor);

  /// @brief Method GetCalibrationState, addr 0x5e42688, size 0x20, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::ChaperoneCalibrationState GetCalibrationState();

  /// @brief Method GetPlayAreaRect, addr 0x5e426d0, size 0x20, virtual false, abstract: false, final false
  inline bool GetPlayAreaRect(::by_ref<::OVR::OpenVR::HmdQuad_t> rect);

  /// @brief Method GetPlayAreaSize, addr 0x5e426a8, size 0x28, virtual false, abstract: false, final false
  inline bool GetPlayAreaSize(::by_ref<float_t> pSizeX, ::by_ref<float_t> pSizeZ);

  static inline ::OVR::OpenVR::CVRChaperone* New_ctor(::System::IntPtr pInterface);

  /// @brief Method ReloadInfo, addr 0x5e426f0, size 0x20, virtual false, abstract: false, final false
  inline void ReloadInfo();

  /// @brief Method SetSceneColor, addr 0x5e42710, size 0x20, virtual false, abstract: false, final false
  inline void SetSceneColor(::OVR::OpenVR::HmdColor_t color);

  constexpr ::OVR::OpenVR::IVRChaperone const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRChaperone& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRChaperone value);

  /// @brief Method .ctor, addr 0x5e4258c, size 0xfc, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRChaperone();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperone", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRChaperone(CVRChaperone&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRChaperone", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRChaperone(CVRChaperone const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8351 };

  /// @brief Field FnTable, offset: 0x10, size: 0x40, def value: None
  ::OVR::OpenVR::IVRChaperone ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRChaperone, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(sizeof(::OVR::OpenVR::CVRChaperone) == 0x50, "Size mismatch!");

} // namespace OVR::OpenVR
