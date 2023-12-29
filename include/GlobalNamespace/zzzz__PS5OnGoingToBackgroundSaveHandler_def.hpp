#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
CORDL_MODULE_EXPORT(PS5OnGoingToBackgroundSaveHandler)
// Forward declare root types
namespace GlobalNamespace {
class PS5OnGoingToBackgroundSaveHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS5OnGoingToBackgroundSaveHandler);
// Type: ::PS5OnGoingToBackgroundSaveHandler
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4682))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4653))
// CS Name: ::PS5OnGoingToBackgroundSaveHandler*
class CORDL_TYPE PS5OnGoingToBackgroundSaveHandler : public ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler {
public:
  // Declarations
  /// @brief Method Subscribe addr 0x222e394 size 0x4 virtual true final false
  inline void Subscribe();

  /// @brief Method Unsubscribe addr 0x222e398 size 0x4 virtual true final false
  inline void Unsubscribe();

  static inline ::GlobalNamespace::PS5OnGoingToBackgroundSaveHandler* New_ctor();

  /// @brief Method .ctor addr 0x222e39c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS5OnGoingToBackgroundSaveHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS5OnGoingToBackgroundSaveHandler(PS5OnGoingToBackgroundSaveHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS5OnGoingToBackgroundSaveHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS5OnGoingToBackgroundSaveHandler(PS5OnGoingToBackgroundSaveHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS5OnGoingToBackgroundSaveHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS5OnGoingToBackgroundSaveHandler, 0x38>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS5OnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS5OnGoingToBackgroundSaveHandler*, "", "PS5OnGoingToBackgroundSaveHandler");
