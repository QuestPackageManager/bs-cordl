#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRVirtualKeyboardHandInputHandler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRVirtualKeyboardHandInputHandler)
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardHandInputHandler;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*, "", "OVRVirtualKeyboardHandInputHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRVirtualKeyboardHandInputHandler
class CORDL_TYPE OVRVirtualKeyboardHandInputHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x5eeb108, size 0x5c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRVirtualKeyboardHandInputHandler* New_ctor();

  /// @brief Method .ctor, addr 0x5eeb164, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardHandInputHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardHandInputHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardHandInputHandler(OVRVirtualKeyboardHandInputHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardHandInputHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardHandInputHandler(OVRVirtualKeyboardHandInputHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7787 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
