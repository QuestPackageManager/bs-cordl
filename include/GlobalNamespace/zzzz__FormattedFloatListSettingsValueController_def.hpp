#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__FormattedFloatListSettingsValueController_def.hpp"
#include "GlobalNamespace/zzzz__ListSettingsController_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FormattedFloatListSettingsValueController)
namespace GlobalNamespace {
struct __FormattedFloatListSettingsValueController__ValueType;
}
namespace GlobalNamespace {
class FloatSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct __FormattedFloatListSettingsValueController__ValueType;
}
namespace GlobalNamespace {
class FormattedFloatListSettingsValueController;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType);
MARK_REF_PTR_T(::GlobalNamespace::FormattedFloatListSettingsValueController);
// Type: ::ValueType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5593))
// CS Name: ::FormattedFloatListSettingsValueController::ValueType
struct CORDL_TYPE __FormattedFloatListSettingsValueController__ValueType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____FormattedFloatListSettingsValueController__ValueType_Unwrapped
  enum struct ____FormattedFloatListSettingsValueController__ValueType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Normalized = static_cast<int32_t>(0x1),
    __E_InvertedNormalized = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____FormattedFloatListSettingsValueController__ValueType_Unwrapped() const noexcept {
    return static_cast<____FormattedFloatListSettingsValueController__ValueType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __FormattedFloatListSettingsValueController__ValueType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FormattedFloatListSettingsValueController__ValueType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType const Normal;

  /// @brief Field Normalized value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType const Normalized;

  /// @brief Field InvertedNormalized value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType const InvertedNormalized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::FormattedFloatListSettingsValueController
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5593)), TypeDefinitionIndex(TypeDefinitionIndex(16149))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5594))
// CS Name: ::FormattedFloatListSettingsValueController*
class CORDL_TYPE FormattedFloatListSettingsValueController : public ::GlobalNamespace::ListSettingsController {
public:
  // Declarations
  using ValueType = ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType;

  /// @brief Field _settingsValue, offset 0x28, size 0x8
  __declspec(property(get = __get__settingsValue, put = __set__settingsValue))::GlobalNamespace::FloatSO* _settingsValue;

  /// @brief Field _values, offset 0x30, size 0x8
  __declspec(property(get = __get__values, put = __set__values))::ArrayW<float_t, ::Array<float_t>*> _values;

  /// @brief Field _formattingString, offset 0x38, size 0x8
  __declspec(property(get = __get__formattingString, put = __set__formattingString))::StringW _formattingString;

  /// @brief Field valueType, offset 0x40, size 0x4
  __declspec(property(get = __get_valueType, put = __set_valueType))::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType valueType;

  /// @brief Field _min, offset 0x44, size 0x4
  __declspec(property(get = __get__min, put = __set__min)) float_t _min;

  /// @brief Field _max, offset 0x48, size 0x4
  __declspec(property(get = __get__max, put = __set__max)) float_t _max;

  constexpr ::GlobalNamespace::FloatSO*& __get__settingsValue();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FloatSO*> const& __get__settingsValue() const;

  constexpr void __set__settingsValue(::GlobalNamespace::FloatSO* value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get__values();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get__values() const;

  constexpr void __set__values(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::StringW& __get__formattingString();

  constexpr ::StringW const& __get__formattingString() const;

  constexpr void __set__formattingString(::StringW value);

  constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType& __get_valueType();

  constexpr ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType const& __get_valueType() const;

  constexpr void __set_valueType(::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType value);

  constexpr float_t& __get__min();

  constexpr float_t const& __get__min() const;

  constexpr void __set__min(float_t value);

  constexpr float_t& __get__max();

  constexpr float_t const& __get__max() const;

  constexpr void __set__max(float_t value);

  /// @brief Method GetInitValues addr 0x22aa814 size 0xe0 virtual true final false
  inline bool GetInitValues(ByRef<int32_t> idx, ByRef<int32_t> numberOfElements);

  /// @brief Method ApplyValue addr 0x22aa8f4 size 0x74 virtual true final false
  inline void ApplyValue(int32_t idx);

  /// @brief Method TextForValue addr 0x22aa968 size 0xdc virtual true final false
  inline ::StringW TextForValue(int32_t idx);

  static inline ::GlobalNamespace::FormattedFloatListSettingsValueController* New_ctor();

  /// @brief Method .ctor addr 0x22aaa44 size 0x5c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsValueController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FormattedFloatListSettingsValueController(FormattedFloatListSettingsValueController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FormattedFloatListSettingsValueController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FormattedFloatListSettingsValueController(FormattedFloatListSettingsValueController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FormattedFloatListSettingsValueController();

public:
  /// @brief Field _settingsValue, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::FloatSO* ____settingsValue;

  /// @brief Field _values, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ____values;

  /// @brief Field _formattingString, offset: 0x38, size: 0x8, def value: None
  ::StringW ____formattingString;

  /// @brief Field valueType, offset: 0x40, size: 0x4, def value: None
  ::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType ___valueType;

  /// @brief Field _min, offset: 0x44, size: 0x4, def value: None
  float_t ____min;

  /// @brief Field _max, offset: 0x48, size: 0x4, def value: None
  float_t ____max;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FormattedFloatListSettingsValueController, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FormattedFloatListSettingsValueController__ValueType, "", "FormattedFloatListSettingsValueController/ValueType");
NEED_NO_BOX(::GlobalNamespace::FormattedFloatListSettingsValueController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FormattedFloatListSettingsValueController*, "", "FormattedFloatListSettingsValueController");
