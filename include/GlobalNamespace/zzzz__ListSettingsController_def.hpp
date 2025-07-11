#pragma once
// IWYU pragma private; include "GlobalNamespace/ListSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IncDecSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListSettingsController)
// Forward declare root types
namespace GlobalNamespace {
class ListSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ListSettingsController);
// Dependencies IncDecSettingsController
namespace GlobalNamespace {
// Is value type: false
// CS Name: ListSettingsController
class CORDL_TYPE ListSettingsController : public ::GlobalNamespace::IncDecSettingsController {
public:
  // Declarations
  /// @brief Field _idx, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__idx, put = __cordl_internal_set__idx)) int32_t _idx;

  /// @brief Field _numberOfElements, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElements, put = __cordl_internal_set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Method ApplyValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method DecButtonPressed, addr 0x3c27e34, size 0x38, virtual true, abstract: false, final false
  inline void DecButtonPressed();

  /// @brief Method GetInitValues, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements);

  /// @brief Method IncButtonPressed, addr 0x3c27df4, size 0x40, virtual true, abstract: false, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::ListSettingsController* New_ctor();

  /// @brief Method OnEnable, addr 0x3c27d10, size 0x34, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x3c27d98, size 0x5c, virtual false, abstract: false, final false
  inline void Refresh(bool applyValue);

  /// @brief Method RefreshUI, addr 0x3c27d44, size 0x54, virtual false, abstract: false, final false
  inline void RefreshUI();

  /// @brief Method TextForValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr int32_t const& __cordl_internal_get__idx() const;

  constexpr int32_t& __cordl_internal_get__idx();

  constexpr int32_t const& __cordl_internal_get__numberOfElements() const;

  constexpr int32_t& __cordl_internal_get__numberOfElements();

  constexpr void __cordl_internal_set__idx(int32_t value);

  constexpr void __cordl_internal_set__numberOfElements(int32_t value);

  /// @brief Method .ctor, addr 0x3c27e6c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListSettingsController(ListSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListSettingsController(ListSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18980 };

  /// @brief Field _idx, offset: 0x28, size: 0x4, def value: None
  int32_t ____idx;

  /// @brief Field _numberOfElements, offset: 0x2c, size: 0x4, def value: None
  int32_t ____numberOfElements;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ListSettingsController, ____idx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListSettingsController, ____numberOfElements) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListSettingsController, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListSettingsController*, "", "ListSettingsController");
