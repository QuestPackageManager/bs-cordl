#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsController_def.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormattedFloatListSettingsController)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace GlobalNamespace {
struct __FormattedFloatListSettingsController__ValueType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __FormattedFloatListSettingsController__ValueType;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__FormattedFloatListSettingsController__ValueType);
MARK_REF_PTR_T(::GlobalNamespace::FormattedFloatListSettingsController);
// Type: ::ValueType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5591))
// CS Name: ::FormattedFloatListSettingsController::ValueType
struct CORDL_TYPE __FormattedFloatListSettingsController__ValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FormattedFloatListSettingsController__ValueType_Unwrapped
  enum struct ____FormattedFloatListSettingsController__ValueType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Normalized = static_cast<int32_t>(0x1),
    __E_InvertedNormalized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FormattedFloatListSettingsController__ValueType_Unwrapped() const noexcept {
    return static_cast<____FormattedFloatListSettingsController__ValueType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FormattedFloatListSettingsController__ValueType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FormattedFloatListSettingsController__ValueType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType const Normal;

  /// @brief Field Normalized value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType const Normalized;

  /// @brief Field InvertedNormalized value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType const InvertedNormalized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FormattedFloatListSettingsController__ValueType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FormattedFloatListSettingsController__ValueType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::FormattedFloatListSettingsController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 85, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(16149)), TypeDefinitionIndex(TypeDefinitionIndex(5591))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5592))
// CS Name: ::FormattedFloatListSettingsController*
class CORDL_TYPE FormattedFloatListSettingsController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using ValueType = ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType;

  /// @brief Field _values, offset 0x28, size 0x8
  __declspec(property(get = __get__values, put = __set__values))::ArrayW<float_t, ::Array<float_t>*> _values;

  /// @brief Field _formattingString, offset 0x30, size 0x8
  __declspec(property(get = __get__formattingString, put = __set__formattingString))::StringW _formattingString;

  /// @brief Field valueType, offset 0x38, size 0x4
  __declspec(property(get = __get_valueType, put = __set_valueType))::GlobalNamespace::__FormattedFloatListSettingsController__ValueType valueType;

  /// @brief Field valueDidChangeEvent, offset 0x40, size 0x8
  __declspec(property(get = __get_valueDidChangeEvent, put = __set_valueDidChangeEvent))::System::Action_2<::GlobalNamespace::FormattedFloatListSettingsController*, float_t>* valueDidChangeEvent;

  /// @brief Field _value, offset 0x48, size 0x4
  __declspec(property(get = __get__value, put = __set__value)) float_t _value;

  /// @brief Field _min, offset 0x4c, size 0x4
  __declspec(property(get = __get__min, put = __set__min)) float_t _min;

  /// @brief Field _max, offset 0x50, size 0x4
  __declspec(property(get = __get__max, put = __set__max)) float_t _max;

  /// @brief Field _hasValue, offset 0x54, size 0x1
  __declspec(property(get = __get__hasValue, put = __set__hasValue)) bool _hasValue;

  __declspec(property(get = get_value)) float_t value;

  __declspec(property(get = get_values, put = set_values))::ArrayW<float_t, ::Array<float_t>*> values;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__values();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__values() const;

  constexpr void __set__values(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::StringW& __get__formattingString();

  constexpr ::StringW const& __get__formattingString() const;

  constexpr void __set__formattingString(::StringW value);

  constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType& __get_valueType();

  constexpr ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType const& __get_valueType() const;

  constexpr void __set_valueType(::GlobalNamespace::__FormattedFloatListSettingsController__ValueType value);

  constexpr ::System::Action_2<::GlobalNamespace::FormattedFloatListSettingsController*, float_t>*& __get_valueDidChangeEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::FormattedFloatListSettingsController*, float_t>*> const& __get_valueDidChangeEvent() const;

  constexpr void __set_valueDidChangeEvent(::System::Action_2<::GlobalNamespace::FormattedFloatListSettingsController*, float_t>* value);

  constexpr float_t& __get__value();

  constexpr float_t const& __get__value() const;

  constexpr void __set__value(float_t value);

  constexpr float_t& __get__min();

  constexpr float_t const& __get__min() const;

  constexpr void __set__min(float_t value);

  constexpr float_t& __get__max();

  constexpr float_t const& __get__max() const;

  constexpr void __set__max(float_t value);

  constexpr bool& __get__hasValue();

  constexpr bool const& __get__hasValue() const;

  constexpr void __set__hasValue(bool value);

  /// @brief Method add_valueDidChangeEvent, addr 0x22aa3b4, size 0xb0, virtual false, abstract: false, final false
  inline void add_valueDidChangeEvent(::System::Action_2<::GlobalNamespace::FormattedFloatListSettingsController*, float_t>* value);

  /// @brief Method remove_valueDidChangeEvent, addr 0x22aa464, size 0xb0, virtual false, abstract: false, final false
  inline void remove_valueDidChangeEvent(::System::Action_2<::GlobalNamespace::FormattedFloatListSettingsController*, float_t>* value);

  /// @brief Method get_value, addr 0x22aa514, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Method get_values, addr 0x22aa51c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<float_t, ::Array<float_t>*> get_values();

  /// @brief Method set_values, addr 0x22aa524, size 0x10, virtual false, abstract: false, final false
  inline void set_values(::ArrayW<float_t, ::Array<float_t>*> value);

  /// @brief Method SetValue, addr 0x22a3bd4, size 0x18, virtual false, abstract: false, final false
  /// @param callCallback: bool (default: false)
  inline void SetValue(float_t value, bool callCallback = false);

  /// @brief Method GetInitValues, addr 0x22aa534, size 0x150, virtual true, abstract: false, final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue, addr 0x22aa684, size 0x58, virtual true, abstract: false, final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue, addr 0x22aa6dc, size 0xdc, virtual true, abstract: false, final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::FormattedFloatListSettingsController* New_ctor();

  /// @brief Method .ctor, addr 0x22aa7b8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattedFloatListSettingsController(FormattedFloatListSettingsController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattedFloatListSettingsController(FormattedFloatListSettingsController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattedFloatListSettingsController();

public:
  /// @brief Field _values, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____values;

  /// @brief Field _formattingString, offset: 0x30, size: 0x8, def value: None
  ::StringW ____formattingString;

  /// @brief Field valueType, offset: 0x38, size: 0x4, def value: None
  ::GlobalNamespace::__FormattedFloatListSettingsController__ValueType ___valueType;

  /// @brief Field valueDidChangeEvent, offset: 0x40, size: 0x8, def value: None
  ::System::Action_2<::GlobalNamespace::FormattedFloatListSettingsController*, float_t>* ___valueDidChangeEvent;

  /// @brief Field _value, offset: 0x48, size: 0x4, def value: None
  float_t ____value;

  /// @brief Field _min, offset: 0x4c, size: 0x4, def value: None
  float_t ____min;

  /// @brief Field _max, offset: 0x50, size: 0x4, def value: None
  float_t ____max;

  /// @brief Field _hasValue, offset: 0x54, size: 0x1, def value: None
  bool ____hasValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FormattedFloatListSettingsController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____values) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____formattingString) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ___valueType) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ___valueDidChangeEvent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____value) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____min) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____max) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::FormattedFloatListSettingsController, ____hasValue) == 0x54, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FormattedFloatListSettingsController__ValueType, "", "FormattedFloatListSettingsController/ValueType");
NEED_NO_BOX(::GlobalNamespace::FormattedFloatListSettingsController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FormattedFloatListSettingsController*, "", "FormattedFloatListSettingsController");
