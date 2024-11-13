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
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class LanguageSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LanguageSettingsController);
// Type: ::LanguageSettingsController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LanguageSettingsController*
class CORDL_TYPE LanguageSettingsController : public ::GlobalNamespace::DropdownSettingsController {
public:
  // Declarations
  /// @brief Field _settingsManager, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Method ApplyValue, addr 0x3bacb18, size 0xd4, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3bac9f4, size 0x124, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::LanguageSettingsController* New_ctor();

  /// @brief Method TextForValue, addr 0x3bacbec, size 0x64, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x3bacc50, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field _settingsManager, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageSettingsController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageSettingsController, ____settingsManager) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSettingsController*, "", "LanguageSettingsController");
