#pragma once
// IWYU pragma private; include "GlobalNamespace/FormattedFloatListSettingsController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormattedFloatListSettingsController)
namespace GlobalNamespace {
struct FormattedFloatListSettingsController_ValueType;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct FormattedFloatListSettingsController_ValueType;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::FormattedFloatListSettingsController_ValueType);
MARK_REF_PTR_T(::GlobalNamespace::FormattedFloatListSettingsController);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: FormattedFloatListSettingsController/ValueType
struct CORDL_TYPE FormattedFloatListSettingsController_ValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FormattedFloatListSettingsController_ValueType_Unwrapped
  enum struct __FormattedFloatListSettingsController_ValueType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Normalized = static_cast<int32_t>(0x1),
    __E_InvertedNormalized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FormattedFloatListSettingsController_ValueType_Unwrapped() const noexcept {
    return static_cast<__FormattedFloatListSettingsController_ValueType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattedFloatListSettingsController_ValueType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FormattedFloatListSettingsController_ValueType(int32_t value__) noexcept;

  /// @brief Field InvertedNormalized value: I32(2)
  static ::GlobalNamespace::FormattedFloatListSettingsController_ValueType const InvertedNormalized;

  /// @brief Field Normal value: I32(0)
  static ::GlobalNamespace::FormattedFloatListSettingsController_ValueType const Normal;

  /// @brief Field Normalized value: I32(1)
  static ::GlobalNamespace::FormattedFloatListSettingsController_ValueType const Normalized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6439 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController_ValueType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FormattedFloatListSettingsController_ValueType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies FormattedFloatListSettingsController::ValueType, ListSettingsController
namespace GlobalNamespace {
// Is value type: false
// CS Name: FormattedFloatListSettingsController
class CORDL_TYPE FormattedFloatListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using ValueType = ::GlobalNamespace::FormattedFloatListSettingsController_ValueType;

  /// @brief Field _formattingString, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__formattingString, put = __cordl_internal_set__formattingString)) ::StringW _formattingString;

  /// @brief Field _hasValue, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get__hasValue, put = __cordl_internal_set__hasValue)) bool _hasValue;

  /// @brief Field _max, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__max, put = __cordl_internal_set__max)) float_t _max;

  /// @brief Field _min, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get__min, put = __cordl_internal_set__min)) float_t _min;

  /// @brief Field _value, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) float_t _value;

  /// @brief Field _values, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__values, put = __cordl_internal_set__values)) ::ArrayW<float_t, ::Array<float_t>*> _values;

  __declspec(property(get = get_value)) float_t value;

  /// @brief Field valueDidChangeEvent, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_valueDidChangeEvent,
                      put = __cordl_internal_set_valueDidChangeEvent)) ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* valueDidChangeEvent;

  /// @brief Field valueType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_valueType, put = __cordl_internal_set_valueType)) ::GlobalNamespace::FormattedFloatListSettingsController_ValueType valueType;

  __declspec(property(get = get_values, put = set_values)) ::ArrayW<float_t, ::Array<float_t>*> values;

  /// @brief Method ApplyValue, addr 0x5809f4c, size 0x58, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method GetInitValues, addr 0x5809de8, size 0x164, virtual true, abstract: false, final false
  inline bool GetInitValues(::ByRef<int32_t> idx, ::ByRef<int32_t> numberOfElements);

  static inline ::GlobalNamespace::FormattedFloatListSettingsController* New_ctor();

  /// @brief Method SetValue, addr 0x5809dd4, size 0x14, virtual false, abstract: false, final false
  inline void SetValue(float_t value, bool callCallback);

  /// @brief Method TextForValue, addr 0x5809fa4, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  constexpr ::StringW const& __cordl_internal_get__formattingString() const;

  constexpr ::StringW& __cordl_internal_get__formattingString();

  constexpr bool const& __cordl_internal_get__hasValue() const;

  constexpr bool& __cordl_internal_get__hasValue();

  constexpr float_t const& __cordl_internal_get__max() const;

  constexpr float_t& __cordl_internal_get__max();

  constexpr float_t const& __cordl_internal_get__min() const;

  constexpr float_t& __cordl_internal_get__min();

  constexpr float_t const& __cordl_internal_get__value() const;

  constexpr float_t& __cordl_internal_get__value();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get__values() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get__values();

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* const& __cordl_internal_get_valueDidChangeEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>*& __cordl_internal_get_valueDidChangeEvent();

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType const& __cordl_internal_get_valueType() const;

  constexpr ::GlobalNamespace::FormattedFloatListSettingsController_ValueType& __cordl_internal_get_valueType();

  constexpr void __cordl_internal_set__formattingString(::StringW value);

  constexpr void __cordl_internal_set__hasValue(bool value);

  constexpr void __cordl_internal_set__max(float_t value);

  constexpr void __cordl_internal_set__min(float_t value);

  constexpr void __cordl_internal_set__value(float_t value);

  constexpr void __cordl_internal_set__values(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value);

  constexpr void __cordl_internal_set_valueType(::GlobalNamespace::FormattedFloatListSettingsController_ValueType value);

  /// @brief Method .ctor, addr 0x580a06c, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_valueDidChangeEvent, addr 0x5809c0c, size 0xc0, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value);

  /// @brief Method get_value, addr 0x5809d8c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method get_values, addr 0x5809d94, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_values();

  /// @brief Method remove_valueDidChangeEvent, addr 0x5809ccc, size 0xc0, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* value);

  /// @brief Method set_values, addr 0x5809d9c, size 0x38, virtual false, abstract: false, final false
  inline void set_values(::ArrayW<float_t, ::Array<float_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattedFloatListSettingsController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattedFloatListSettingsController(FormattedFloatListSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattedFloatListSettingsController(FormattedFloatListSettingsController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6440 };

  /// @brief Field _values, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____values;

  /// @brief Field _formattingString, offset: 0x38, size: 0x8, def value: None
  ::StringW ____formattingString;

  /// @brief Field valueType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::FormattedFloatListSettingsController_ValueType ___valueType;

  /// @brief Field valueDidChangeEvent, offset: 0x48, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::FormattedFloatListSettingsController>, float_t>* ___valueDidChangeEvent;

  /// @brief Field _value, offset: 0x50, size: 0x4, def value: None
  float_t ____value;

  /// @brief Field _min, offset: 0x54, size: 0x4, def value: None
  float_t ____min;

  /// @brief Field _max, offset: 0x58, size: 0x4, def value: None
  float_t ____max;

  /// @brief Field _hasValue, offset: 0x5c, size: 0x1, def value: None
  bool ____hasValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____values) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____formattingString) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ___valueType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ___valueDidChangeEvent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____value) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____min) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____max) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____hasValue) == 0x5c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FormattedFloatListSettingsController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FormattedFloatListSettingsController_ValueType, "", "FormattedFloatListSettingsController/ValueType");
NEED_NO_BOX(::GlobalNamespace::FormattedFloatListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FormattedFloatListSettingsController*, "", "FormattedFloatListSettingsController");
