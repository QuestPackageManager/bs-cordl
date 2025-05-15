#pragma once
// IWYU pragma private; include "GlobalNamespace/PresetsSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PresetsSettingsController)
namespace GlobalNamespace {
class NamedPresetsSO;
}
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PresetsSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PresetsSettingsController);
// Dependencies ListSettingsController
namespace GlobalNamespace {
// Is value type: false
// CS Name: PresetsSettingsController
class CORDL_TYPE PresetsSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _customIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__customIndex, put = __cordl_internal_set__customIndex)) int32_t _customIndex;

  /// @brief Field _limitNumberOfElements, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__limitNumberOfElements, put = __cordl_internal_set__limitNumberOfElements)) bool _limitNumberOfElements;

  /// @brief Field _numberOfElementsLimit, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElementsLimit, put = __cordl_internal_set__numberOfElementsLimit)) int32_t _numberOfElementsLimit;

  /// @brief Field _presets, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__presets, put = __cordl_internal_set__presets)) ::UnityW<::GlobalNamespace::NamedPresetsSO> _presets;

  /// @brief Field valueDidChangeEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent, put = __cordl_internal_set_valueDidChangeEvent)) ::System::Action_1<int32_t>* valueDidChangeEvent;

  /// @brief Method ApplyValue, addr 0x3c136e8, size 0x20, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3c13644, size 0xa4, virtual true, abstract: false, final false
  inline bool GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements);

  /// @brief Method GetValue, addr 0x3c13588, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetValue();

  static inline ::GlobalNamespace::PresetsSettingsController* New_ctor();

  /// @brief Method SetInteractable, addr 0x3c13610, size 0x34, virtual false, abstract: false, final false
  inline void SetInteractable(bool interactable);

  /// @brief Method SetNumberOfElementsLimit, addr 0x3c135f0, size 0x20, virtual false, abstract: false, final false
  inline void SetNumberOfElementsLimit(int32_t numberOfElementsLimit);

  /// @brief Method SetValue, addr 0x3c13590, size 0x60, virtual false, abstract: false, final false
  inline void SetValue(int32_t index);

  /// @brief Method TextForValue, addr 0x3c13708, size 0x50, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr int32_t const& __cordl_internal_get__customIndex() const;

  constexpr int32_t& __cordl_internal_get__customIndex();

  constexpr bool const& __cordl_internal_get__limitNumberOfElements() const;

  constexpr bool& __cordl_internal_get__limitNumberOfElements();

  constexpr int32_t const& __cordl_internal_get__numberOfElementsLimit() const;

  constexpr int32_t& __cordl_internal_get__numberOfElementsLimit();

  constexpr ::UnityW<::GlobalNamespace::NamedPresetsSO> const& __cordl_internal_get__presets() const;

  constexpr ::UnityW<::GlobalNamespace::NamedPresetsSO>& __cordl_internal_get__presets();

  constexpr ::System::Action_1<int32_t>* const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr void __cordl_internal_set__customIndex(int32_t value);

  constexpr void __cordl_internal_set__limitNumberOfElements(bool value);

  constexpr void __cordl_internal_set__numberOfElementsLimit(int32_t value);

  constexpr void __cordl_internal_set__presets(::UnityW<::GlobalNamespace::NamedPresetsSO> value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x3c13758, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x3c13428, size 0xb0, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_valueDidChangeEvent, addr 0x3c134d8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PresetsSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PresetsSettingsController(PresetsSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PresetsSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PresetsSettingsController(PresetsSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4860 };

  /// @brief Field _presets, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::NamedPresetsSO> ____presets;

  /// @brief Field _limitNumberOfElements, offset: 0x38, size: 0x1, def value: None
  bool ____limitNumberOfElements;

  /// @brief Field _numberOfElementsLimit, offset: 0x3c, size: 0x4, def value: None
  int32_t ____numberOfElementsLimit;

  /// @brief Field _customIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ____customIndex;

  /// @brief Field valueDidChangeEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___valueDidChangeEvent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____presets) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____limitNumberOfElements) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____numberOfElementsLimit) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ____customIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PresetsSettingsController, ___valueDidChangeEvent) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PresetsSettingsController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PresetsSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PresetsSettingsController*, "", "PresetsSettingsController");
