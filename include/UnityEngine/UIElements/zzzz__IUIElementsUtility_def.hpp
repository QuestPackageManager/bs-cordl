#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IUIElementsUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IUIElementsUtility)
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IUIElementsUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IUIElementsUtility);
// Type: UnityEngine.UIElements::IUIElementsUtility
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::IUIElementsUtility*
class CORDL_TYPE IUIElementsUtility {
public:
  // Declarations
  /// @brief Method CleanupRoots, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool CleanupRoots();

  /// @brief Method EndContainerGUIFromException, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool EndContainerGUIFromException(::System::Exception* exception);

  /// @brief Method MakeCurrentIMGUIContainerDirty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool MakeCurrentIMGUIContainerDirty();

  /// @brief Method ProcessEvent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ProcessEvent(int32_t instanceID, ::System::IntPtr nativeEventPtr, ByRef<bool> eventHandled);

  /// @brief Method ReleaseCapture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool ReleaseCapture();

  /// @brief Method TakeCapture, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TakeCapture();

  // Ctor Parameters [CppParam { name: "", ty: "IUIElementsUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IUIElementsUtility(IUIElementsUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IUIElementsUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IUIElementsUtility(IUIElementsUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6185 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IUIElementsUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IUIElementsUtility*, "UnityEngine.UIElements", "IUIElementsUtility");
