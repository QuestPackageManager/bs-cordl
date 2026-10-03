#pragma once
// IWYU pragma private; include "UnityEngine/XR/OpenXR/OpenXRUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OpenXRUtility)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
MARK_REF_T(::UnityEngine::XR::OpenXR::OpenXRUtility*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::OpenXR::OpenXRUtility*, "UnityEngine.XR.OpenXR", "OpenXRUtility");
// Dependencies System.Object
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// CS Name: UnityEngine.XR.OpenXR.OpenXRUtility
class CORDL_TYPE OpenXRUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_DisplaySubsystems, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DisplaySubsystems, put = setStaticF_s_DisplaySubsystems)) ::System::Collections::Generic::List_1<Il2CppObject*>* s_DisplaySubsystems;

  /// @brief Method ComputePoseToWorldSpace, addr 0x6e38064, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose ComputePoseToWorldSpace(::UnityEngine::Transform* t, ::UnityEngine::Camera* camera);

  /// @brief Method GetFirstDisplaySubsystem, addr 0x6e38420, size 0x12c, virtual false, abstract: false, final false
  static inline Il2CppObject* GetFirstDisplaySubsystem();

  /// @brief Method Internal_GetUserPresence, addr 0x6e383b4, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_GetUserPresence();

  /// @brief Method Internal_IsSessionFocused, addr 0x6e382f8, size 0x6c, virtual false, abstract: false, final false
  static inline bool Internal_IsSessionFocused();

  /// @brief Method Inverse, addr 0x6e37fd4, size 0x90, virtual false, abstract: false, final false
  static inline ::UnityEngine::Pose Inverse(::UnityEngine::Pose p);

  static inline ::System::Collections::Generic::List_1<Il2CppObject*>* getStaticF_s_DisplaySubsystems();

  /// @brief Method get_IsSessionFocused, addr 0x6e382a8, size 0x50, virtual false, abstract: false, final false
  static inline bool get_IsSessionFocused();

  /// @brief Method get_IsUserPresent, addr 0x6e38364, size 0x50, virtual false, abstract: false, final false
  static inline bool get_IsUserPresent();

  static inline void setStaticF_s_DisplaySubsystems(::System::Collections::Generic::List_1<Il2CppObject*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OpenXRUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OpenXRUtility", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OpenXRUtility(OpenXRUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OpenXRUtility", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OpenXRUtility(OpenXRUtility const&) = delete;

  /// @brief Field LibraryName offset 0xffffffff size 0x8
  static constexpr ::ConstString LibraryName{ u"UnityOpenXR" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17484 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::OpenXR::OpenXRUtility) == 0x10, "Size mismatch!");

} // namespace UnityEngine::XR::OpenXR
