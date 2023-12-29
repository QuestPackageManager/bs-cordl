#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DropdownSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LanguageSettingsController)
namespace GlobalNamespace {
class LanguageSO;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5683))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5700))
// CS Name: ::LanguageSettingsController*
class CORDL_TYPE LanguageSettingsController : public ::GlobalNamespace::DropdownSettingsController {
public:
  // Declarations
  /// @brief Field _settingsValue, offset 0x30, size 0x8
  __declspec(property(get = __get__settingsValue, put = __set__settingsValue))::GlobalNamespace::LanguageSO* _settingsValue;

  constexpr ::GlobalNamespace::LanguageSO*& __get__settingsValue();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LanguageSO*> const& __get__settingsValue() const;

  constexpr void __set__settingsValue(::GlobalNamespace::LanguageSO* value);

  /// @brief Method GetInitValues addr 0x21665b4 size 0xa8 virtual true final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue addr 0x216665c size 0x90 virtual true final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue addr 0x21666ec size 0x64 virtual true final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::LanguageSettingsController* New_ctor();

  /// @brief Method .ctor addr 0x2166750 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LanguageSettingsController(LanguageSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LanguageSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LanguageSettingsController(LanguageSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LanguageSettingsController();

public:
  /// @brief Field _settingsValue, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::LanguageSO* ____settingsValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LanguageSettingsController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LanguageSettingsController, ____settingsValue) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LanguageSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LanguageSettingsController*, "", "LanguageSettingsController");
