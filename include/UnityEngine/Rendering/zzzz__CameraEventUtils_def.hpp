#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraEventUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CameraEventUtils)
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CameraEventUtils;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CameraEventUtils);
// Type: UnityEngine.Rendering::CameraEventUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::CameraEventUtils*
class CORDL_TYPE CameraEventUtils : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x3462cd8, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValid(::UnityEngine::Rendering::CameraEvent value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraEventUtils();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraEventUtils", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraEventUtils(CameraEventUtils&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraEventUtils", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraEventUtils(CameraEventUtils const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraEventUtils, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CameraEventUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraEventUtils*, "UnityEngine.Rendering", "CameraEventUtils");
