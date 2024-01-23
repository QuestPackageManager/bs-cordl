#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeInferenceRules)
// Forward declare root types
namespace UnityEngineInternal {
struct TypeInferenceRules;
}
// Write type traits
MARK_VAL_T(::UnityEngineInternal::TypeInferenceRules);
// Type: UnityEngineInternal::TypeInferenceRules
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngineInternal {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9961))
// CS Name: ::UnityEngineInternal::TypeInferenceRules
struct CORDL_TYPE TypeInferenceRules {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeInferenceRules_Unwrapped
  enum struct __TypeInferenceRules_Unwrapped : int32_t {
    __E_TypeReferencedByFirstArgument = static_cast<int32_t>(0x0),
    __E_TypeReferencedBySecondArgument = static_cast<int32_t>(0x1),
    __E_ArrayOfTypeReferencedByFirstArgument = static_cast<int32_t>(0x2),
    __E_TypeOfFirstArgument = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeInferenceRules_Unwrapped() const noexcept {
    return static_cast<__TypeInferenceRules_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeInferenceRules(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeInferenceRules();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field TypeReferencedByFirstArgument value: static_cast<int32_t>(0x0)
  static ::UnityEngineInternal::TypeInferenceRules const TypeReferencedByFirstArgument;

  /// @brief Field TypeReferencedBySecondArgument value: static_cast<int32_t>(0x1)
  static ::UnityEngineInternal::TypeInferenceRules const TypeReferencedBySecondArgument;

  /// @brief Field ArrayOfTypeReferencedByFirstArgument value: static_cast<int32_t>(0x2)
  static ::UnityEngineInternal::TypeInferenceRules const ArrayOfTypeReferencedByFirstArgument;

  /// @brief Field TypeOfFirstArgument value: static_cast<int32_t>(0x3)
  static ::UnityEngineInternal::TypeInferenceRules const TypeOfFirstArgument;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngineInternal::TypeInferenceRules, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngineInternal::TypeInferenceRules, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngineInternal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::TypeInferenceRules, "UnityEngineInternal", "TypeInferenceRules");
