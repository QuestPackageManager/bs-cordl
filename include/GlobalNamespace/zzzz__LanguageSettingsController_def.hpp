#pragma once
// IWYU pragma private; include "GlobalNamespace/LanguageSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/Polyglot/zzzz__Language_def.hpp"
#include "GlobalNamespace/zzzz__DropdownSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LanguageSettingsController)
namespace BGLib::Polyglot {
struct Language;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class LanguageSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageSettingsController);
// Dependencies BGLib.Polyglot.Language, DropdownSettingsController
namespace GlobalNamespace {
// Is value type: false
// CS Name: LanguageSettingsController
class CORDL_TYPE LanguageSettingsController : public ::GlobalNamespace::DropdownSettingsController {
public:
  // Declarations
  /// @brief Field _language, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__language, put = __cordl_internal_set__language)) ::BGLib::Polyglot::Language _language;

  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  __declspec(property(get = get_language)) ::BGLib::Polyglot::Language language;

  /// @brief Method ApplyValue, addr 0x3c21254, size 0xd8, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3c21098, size 0x1bc, virtual true, abstract: false, final false
  inline bool GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::LanguageSettingsController* New_ctor();

  /// @brief Method TextForValue, addr 0x3c2132c, size 0x64, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::BGLib::Polyglot::Language const& __cordl_internal_get__language() const;

  constexpr ::BGLib::Polyglot::Language& __cordl_internal_get__language();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__language(::BGLib::Polyglot::Language value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3c21390, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_language, addr 0x3c21090, size 0x8, virtual false, abstract: false, final false
  inline ::BGLib::Polyglot::Language get_language();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4865 };

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _language, offset: 0x40, size: 0x4, def value: None
  ::BGLib::Polyglot::Language ____language;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LanguageSettingsController, ____settingsManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageSettingsController, ____language) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageSettingsController, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSettingsController*, "", "LanguageSettingsController");
