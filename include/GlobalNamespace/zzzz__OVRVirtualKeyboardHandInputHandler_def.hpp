#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(OVRVirtualKeyboardHandInputHandler)
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardHandInputHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler);
// Type: ::OVRVirtualKeyboardHandInputHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8059))
// CS Name: ::OVRVirtualKeyboardHandInputHandler*
class CORDL_TYPE OVRVirtualKeyboardHandInputHandler : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Method Awake, addr 0x279ef80, size 0x58, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRVirtualKeyboardHandInputHandler* New_ctor();

  /// @brief Method .ctor, addr 0x279efd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardHandInputHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRVirtualKeyboardHandInputHandler(OVRVirtualKeyboardHandInputHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardHandInputHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRVirtualKeyboardHandInputHandler(OVRVirtualKeyboardHandInputHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRVirtualKeyboardHandInputHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardHandInputHandler, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardHandInputHandler*, "", "OVRVirtualKeyboardHandInputHandler");
