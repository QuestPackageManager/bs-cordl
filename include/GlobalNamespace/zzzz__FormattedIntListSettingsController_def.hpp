#pragma once
// IWYU pragma private; include "GlobalNamespace/FormattedIntListSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FormattedIntListSettingsController)
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
class FormattedIntListSettingsController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FormattedIntListSettingsController);
// Dependencies ListSettingsController
namespace GlobalNamespace {
// Is value type: false
// CS Name: FormattedIntListSettingsController
class CORDL_TYPE FormattedIntListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  /// @brief Field _formattingString, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__formattingString, put = __cordl_internal_set__formattingString)) ::StringW _formattingString;

  /// @brief Field _maxValue, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__maxValue, put = __cordl_internal_set__maxValue)) int32_t _maxValue;

  /// @brief Field _minValue, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__minValue, put = __cordl_internal_set__minValue)) int32_t _minValue;

  /// @brief Field _value, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) int32_t _value;

  /// @brief Field valueDidChangeEvent, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent,
                      put = __cordl_internal_set_valueDidChangeEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* valueDidChangeEvent;

  /// @brief Method ApplyValue, addr 0x3c0e814, size 0x30, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x3c0e7ec, size 0x28, virtual true, abstract: false, final false
  inline bool GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::FormattedIntListSettingsController* New_ctor();

  /// @brief Method SetValue, addr 0x3c0e7d8, size 0x14, virtual false, abstract: false, final false
  inline void SetValue(int32_t value, bool callCallback);

  /// @brief Method TextForValue, addr 0x3c0e844, size 0x78, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::StringW const& __cordl_internal_get__formattingString() const;

  constexpr ::StringW& __cordl_internal_get__formattingString();

  constexpr int32_t const& __cordl_internal_get__maxValue() const;

  constexpr int32_t& __cordl_internal_get__maxValue();

  constexpr int32_t const& __cordl_internal_get__minValue() const;

  constexpr int32_t& __cordl_internal_get__minValue();

  constexpr int32_t const& __cordl_internal_get__value() const;

  constexpr int32_t& __cordl_internal_get__value();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr void __cordl_internal_set__formattingString(::StringW value);

  constexpr void __cordl_internal_set__maxValue(int32_t value);

  constexpr void __cordl_internal_set__minValue(int32_t value);

  constexpr void __cordl_internal_set__value(int32_t value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* value);

  /// @brief Method .ctor, addr 0x3c0e8bc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x3c0e678, size 0xb0, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* value);

  /// @brief Method remove_valueDidChangeEvent, addr 0x3c0e728, size 0xb0, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattedIntListSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormattedIntListSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattedIntListSettingsController(FormattedIntListSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattedIntListSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattedIntListSettingsController(FormattedIntListSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4852 };

  /// @brief Field _minValue, offset: 0x30, size: 0x4, def value: None
  int32_t ____minValue;

  /// @brief Field _maxValue, offset: 0x34, size: 0x4, def value: None
  int32_t ____maxValue;

  /// @brief Field _formattingString, offset: 0x38, size: 0x8, def value: None
  ::StringW ____formattingString;

  /// @brief Field valueDidChangeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::FormattedIntListSettingsController>, int32_t>* ___valueDidChangeEvent;

  /// @brief Field _value, offset: 0x48, size: 0x4, def value: None
  int32_t ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FormattedIntListSettingsController, ____minValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedIntListSettingsController, ____maxValue) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedIntListSettingsController, ____formattingString) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedIntListSettingsController, ___valueDidChangeEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedIntListSettingsController, ____value) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FormattedIntListSettingsController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FormattedIntListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FormattedIntListSettingsController*, "", "FormattedIntListSettingsController");
