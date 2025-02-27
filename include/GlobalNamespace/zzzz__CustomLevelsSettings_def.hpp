#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomLevelsSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CustomLevelsSettings)
// Forward declare root types
namespace GlobalNamespace {
class CustomLevelsSettings;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomLevelsSettings);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomLevelsSettings
class CORDL_TYPE CustomLevelsSettings : public ::System::Object {
public:
  // Declarations
  /// @brief Field enabled, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_enabled, put = __cordl_internal_set_enabled)) bool enabled;

  static inline ::GlobalNamespace::CustomLevelsSettings* New_ctor(bool enabled);

  constexpr bool const& __cordl_internal_get_enabled() const;

  constexpr bool& __cordl_internal_get_enabled();

  constexpr void __cordl_internal_set_enabled(bool value);

  /// @brief Method .ctor, addr 0x26b3584, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(bool enabled);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomLevelsSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelsSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomLevelsSettings(CustomLevelsSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomLevelsSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomLevelsSettings(CustomLevelsSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12814 };

  /// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
  bool ___enabled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomLevelsSettings, ___enabled) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomLevelsSettings, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomLevelsSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomLevelsSettings*, "", "CustomLevelsSettings");
