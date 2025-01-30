#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ChoiceListType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ChoiceListType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ChoiceListType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ChoiceListType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_ChoiceListType
struct CORDL_TYPE HAPI_ChoiceListType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_ChoiceListType_Unwrapped
  enum struct __HAPI_ChoiceListType_Unwrapped : int32_t {
    __E_HAPI_CHOICELISTTYPE_NONE = static_cast<int32_t>(0x0),
    __E_HAPI_CHOICELISTTYPE_NORMAL = static_cast<int32_t>(0x1),
    __E_HAPI_CHOICELISTTYPE_MINI = static_cast<int32_t>(0x2),
    __E_HAPI_CHOICELISTTYPE_REPLACE = static_cast<int32_t>(0x3),
    __E_HAPI_CHOICELISTTYPE_TOGGLE = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_ChoiceListType_Unwrapped() const noexcept {
    return static_cast<__HAPI_ChoiceListType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ChoiceListType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ChoiceListType(int32_t value__) noexcept;

  /// @brief Field HAPI_CHOICELISTTYPE_MINI value: I32(2)
  static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_MINI;

  /// @brief Field HAPI_CHOICELISTTYPE_NONE value: I32(0)
  static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_NONE;

  /// @brief Field HAPI_CHOICELISTTYPE_NORMAL value: I32(1)
  static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_NORMAL;

  /// @brief Field HAPI_CHOICELISTTYPE_REPLACE value: I32(3)
  static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_REPLACE;

  /// @brief Field HAPI_CHOICELISTTYPE_TOGGLE value: I32(4)
  static ::HoudiniEngineUnity::HAPI_ChoiceListType const HAPI_CHOICELISTTYPE_TOGGLE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11683 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_ChoiceListType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ChoiceListType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ChoiceListType, "HoudiniEngineUnity", "HAPI_ChoiceListType");
