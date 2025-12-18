#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OpenXRUtility)
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::OpenXR::OpenXRUtility);
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRUtility
class CORDL_TYPE OpenXRUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method ComputePoseToWorldSpace, addr 0x6826048, size 0x218, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose ComputePoseToWorldSpace(::UnityEngine::Transform* t, ::UnityEngine::Camera* camera);

  /// @brief Method Internal_GetUserPresence, addr 0x68262d4, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetUserPresence();

  /// @brief Method Internal_IsSessionFocused, addr 0x6826264, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_IsSessionFocused();

  /// @brief Method Inverse, addr 0x6825fc4, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose Inverse(::UnityEngine::Pose p);

  /// @brief Method get_IsSessionFocused, addr 0x6826260, size 0x4, virtual false, abstract: false, final false
  static inline bool get_IsSessionFocused();

  /// @brief Method get_IsUserPresent, addr 0x68262d0, size 0x4, virtual false, abstract: false, final false
  static inline bool get_IsUserPresent();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRUtility(OpenXRUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRUtility(OpenXRUtility const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18481 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::OpenXR::OpenXRUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRUtility*, "UnityEngine.XR.OpenXR", "OpenXRUtility");
