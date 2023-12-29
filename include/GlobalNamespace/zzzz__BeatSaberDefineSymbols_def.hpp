#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatSaberDefineSymbols)
// Forward declare root types
namespace GlobalNamespace {
class BeatSaberDefineSymbols;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatSaberDefineSymbols);
// Type: ::BeatSaberDefineSymbols
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16074))
// CS Name: ::BeatSaberDefineSymbols*
class CORDL_TYPE BeatSaberDefineSymbols : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberDefineSymbols", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatSaberDefineSymbols(BeatSaberDefineSymbols&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatSaberDefineSymbols", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatSaberDefineSymbols(BeatSaberDefineSymbols const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatSaberDefineSymbols();

public:
  /// @brief Field kIgnoreVrFocusLostEvents offset 0xffffffff size 0x8
  static constexpr ::ConstString kIgnoreVrFocusLostEvents{ u"IGNORE_VR_FOCUS_LOST_EVENTS" };

  /// @brief Field kEnableMultiplayerMock offset 0xffffffff size 0x8
  static constexpr ::ConstString kEnableMultiplayerMock{ u"MULTIPLAYER_MOCK" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatSaberDefineSymbols, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatSaberDefineSymbols);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatSaberDefineSymbols*, "", "BeatSaberDefineSymbols");
