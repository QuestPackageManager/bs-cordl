#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SonyOnGoingToBackgroundSaveHandler_def.hpp"
CORDL_MODULE_EXPORT(PS4OnGoingToBackgroundSaveHandler)
namespace GlobalNamespace {
class PS4Helper;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4OnGoingToBackgroundSaveHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler);
// Type: ::PS4OnGoingToBackgroundSaveHandler
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4682))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4641))
// CS Name: ::PS4OnGoingToBackgroundSaveHandler*
class CORDL_TYPE PS4OnGoingToBackgroundSaveHandler : public ::GlobalNamespace::SonyOnGoingToBackgroundSaveHandler {
public:
  // Declarations
  /// @brief Field _ps4Helper, offset 0x38, size 0x8
  __declspec(property(get = __get__ps4Helper, put = __set__ps4Helper))::GlobalNamespace::PS4Helper* _ps4Helper;

  constexpr ::GlobalNamespace::PS4Helper*& __get__ps4Helper();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS4Helper*> const& __get__ps4Helper() const;

  constexpr void __set__ps4Helper(::GlobalNamespace::PS4Helper* value);

  /// @brief Method Subscribe addr 0x222e168 size 0x88 virtual true final false
  inline void Subscribe();

  /// @brief Method Unsubscribe addr 0x222e1f0 size 0x94 virtual true final false
  inline void Unsubscribe();

  static inline ::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler* New_ctor();

  /// @brief Method .ctor addr 0x222e284 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS4OnGoingToBackgroundSaveHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4OnGoingToBackgroundSaveHandler(PS4OnGoingToBackgroundSaveHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4OnGoingToBackgroundSaveHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4OnGoingToBackgroundSaveHandler(PS4OnGoingToBackgroundSaveHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4OnGoingToBackgroundSaveHandler();

public:
  /// @brief Field _ps4Helper, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::PS4Helper* ____ps4Helper;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler, ____ps4Helper) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4OnGoingToBackgroundSaveHandler*, "", "PS4OnGoingToBackgroundSaveHandler");
