#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Constants)
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class Constants;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::Constants);
// Type: UnityEngine.XR.OpenXR::Constants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14404))
// CS Name: ::UnityEngine.XR.OpenXR::Constants*
class CORDL_TYPE Constants : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Constants(Constants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Constants(Constants const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Constants();

public:
  /// @brief Field k_SettingsKey offset 0xffffffff size 0x8
  static constexpr ::ConstString k_SettingsKey{ u"com.unity.xr.openxr.settings4" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::Constants, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Constants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Constants*, "UnityEngine.XR.OpenXR", "Constants");
