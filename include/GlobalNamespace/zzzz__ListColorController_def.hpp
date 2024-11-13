#pragma once
// IWYU pragma private; include "GlobalNamespace/ListColorController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IncDecColorController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListColorController)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ListColorController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ListColorController);
// Type: ::ListColorController
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ListColorController*
class CORDL_TYPE ListColorController : public ::GlobalNamespace::IncDecColorController {
public:
  // Declarations
  /// @brief Field _idx, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__idx, put = __cordl_internal_set__idx)) int32_t _idx;

  /// @brief Field _numberOfElements, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__numberOfElements, put = __cordl_internal_set__numberOfElements)) int32_t _numberOfElements;

  /// @brief Method ApplyValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method ColorForValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::Color ColorForValue(int32_t idx);

  /// @brief Method DecButtonPressed, addr 0x3bc676c, size 0x38, virtual true, abstract: false, final false
  inline void DecButtonPressed();

  /// @brief Method GetInitValues, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method IncButtonPressed, addr 0x3bc672c, size 0x40, virtual true, abstract: false, final false
  inline void IncButtonPressed();

  static inline ::GlobalNamespace::ListColorController* New_ctor();

  /// @brief Method OnEnable, addr 0x3bc664c, size 0x34, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Refresh, addr 0x3bc66d0, size 0x5c, virtual false, abstract: false, final false
  inline void Refresh(bool applyValue);

  /// @brief Method RefreshUI, addr 0x3bc6680, size 0x50, virtual false, abstract: false, final false
  inline void RefreshUI();

  constexpr int32_t const& __cordl_internal_get__idx() const;

  constexpr int32_t& __cordl_internal_get__idx();

  constexpr int32_t const& __cordl_internal_get__numberOfElements() const;

  constexpr int32_t& __cordl_internal_get__numberOfElements();

  constexpr void __cordl_internal_set__idx(int32_t value);

  constexpr void __cordl_internal_set__numberOfElements(int32_t value);

  /// @brief Method .ctor, addr 0x3bc67a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListColorController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ListColorController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListColorController(ListColorController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListColorController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListColorController(ListColorController const&) = delete;

  /// @brief Field _idx, offset: 0x28, size: 0x4, def value: None
  int32_t ____idx;

  /// @brief Field _numberOfElements, offset: 0x2c, size: 0x4, def value: None
  int32_t ____numberOfElements;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18841 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ListColorController, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ListColorController, ____idx) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ListColorController, ____numberOfElements) == 0x2c, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ListColorController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ListColorController*, "", "ListColorController");
