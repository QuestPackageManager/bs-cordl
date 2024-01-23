#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PresetsSettingsController)
namespace GlobalNamespace {
class IntSO;
}
namespace GlobalNamespace {
class NamedPresetsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PresetsSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PresetsSettingsController);
// Type: ::PresetsSettingsController
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(16149))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5599))
// CS Name: ::PresetsSettingsController*
class CORDL_TYPE PresetsSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _settingsValue, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsValue, put = __cordl_internal_set__settingsValue))::UnityW<::GlobalNamespace::IntSO> _settingsValue;

  /// @brief Field _presets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__presets, put = __cordl_internal_set__presets))::UnityW<::GlobalNamespace::NamedPresetsSO> _presets;

  /// @brief Field _limitNumberOfElements, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__limitNumberOfElements, put = __cordl_internal_set__limitNumberOfElements)) bool _limitNumberOfElements;

  /// @brief Field _numberOfElementsLimit, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElementsLimit, put = __cordl_internal_set__numberOfElementsLimit)) int32_t _numberOfElementsLimit;

  constexpr ::UnityW<::GlobalNamespace::IntSO>& __cordl_internal_get__settingsValue();

  constexpr ::UnityW<::GlobalNamespace::IntSO> const& __cordl_internal_get__settingsValue() const;

  constexpr void __cordl_internal_set__settingsValue(::UnityW<::GlobalNamespace::IntSO> value);

  constexpr ::UnityW<::GlobalNamespace::NamedPresetsSO>& __cordl_internal_get__presets();

  constexpr ::UnityW<::GlobalNamespace::NamedPresetsSO> const& __cordl_internal_get__presets() const;

  constexpr void __cordl_internal_set__presets(::UnityW<::GlobalNamespace::NamedPresetsSO> value);

  constexpr bool& __cordl_internal_get__limitNumberOfElements();

  constexpr bool const& __cordl_internal_get__limitNumberOfElements() const;

  constexpr void __cordl_internal_set__limitNumberOfElements(bool value);

  constexpr int32_t& __cordl_internal_get__numberOfElementsLimit();

  constexpr int32_t const& __cordl_internal_get__numberOfElementsLimit() const;

  constexpr void __cordl_internal_set__numberOfElementsLimit(int32_t value);

  /// @brief Method GetInitValues, addr 0x22ab000, size 0xd8, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue, addr 0x22ab0d8, size 0x58, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue, addr 0x22ab130, size 0x50, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::PresetsSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x22ab180, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresetsSettingsController(PresetsSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresetsSettingsController(PresetsSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresetsSettingsController();

public:
  /// @brief Field _settingsValue, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::IntSO> ____settingsValue;

  /// @brief Field _presets, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedPresetsSO> ____presets;

  /// @brief Field _limitNumberOfElements, offset: 0x38, size: 0x1, def value: None
  bool ____limitNumberOfElements;

  /// @brief Field _numberOfElementsLimit, offset: 0x3c, size: 0x4, def value: None
  int32_t ____numberOfElementsLimit;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PresetsSettingsController, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____settingsValue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____presets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____limitNumberOfElements) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____numberOfElementsLimit) == 0x3c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PresetsSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresetsSettingsController*, "", "PresetsSettingsController");
