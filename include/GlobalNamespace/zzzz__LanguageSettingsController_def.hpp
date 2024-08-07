#pragma once
// IWYU pragma private; include "GlobalNamespace/LanguageSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DropdownSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LanguageSettingsController)
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class LanguageSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageSettingsController);
// Type: ::LanguageSettingsController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LanguageSettingsController*
class CORDL_TYPE LanguageSettingsController : public ::GlobalNamespace::DropdownSettingsController {
public:
  // Declarations
  /// @brief Field _mainSettingsHandler, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Method ApplyValue, addr 0x266040c, size 0xf8, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x26602e8, size 0x124, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::LanguageSettingsController* New_ctor();

  /// @brief Method TextForValue, addr 0x2660504, size 0x64, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  /// @brief Method .ctor, addr 0x2660568, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageSettingsController(LanguageSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageSettingsController(LanguageSettingsController const&) = delete;

  /// @brief Field _mainSettingsHandler, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageSettingsController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageSettingsController, ____mainSettingsHandler) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSettingsController*, "", "LanguageSettingsController");
