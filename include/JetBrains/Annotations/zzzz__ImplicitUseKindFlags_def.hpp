#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ImplicitUseKindFlags)
// Forward declare root types
namespace JetBrains::Annotations {
struct ImplicitUseKindFlags;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::ImplicitUseKindFlags);
// Type: JetBrains.Annotations::ImplicitUseKindFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9956))
// CS Name: ::JetBrains.Annotations::ImplicitUseKindFlags
struct CORDL_TYPE ImplicitUseKindFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ImplicitUseKindFlags_Unwrapped
  enum struct __ImplicitUseKindFlags_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x7),
    __E_Access = static_cast<int32_t>(0x1),
    __E_Assign = static_cast<int32_t>(0x2),
    __E_InstantiatedWithFixedConstructorSignature = static_cast<int32_t>(0x4),
    __E_InstantiatedNoFixedConstructorSignature = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ImplicitUseKindFlags_Unwrapped() const noexcept {
    return static_cast<__ImplicitUseKindFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ImplicitUseKindFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ImplicitUseKindFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Default value: static_cast<int32_t>(0x7)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const Default;

  /// @brief Field Access value: static_cast<int32_t>(0x1)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const Access;

  /// @brief Field Assign value: static_cast<int32_t>(0x2)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const Assign;

  /// @brief Field InstantiatedWithFixedConstructorSignature value: static_cast<int32_t>(0x4)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedWithFixedConstructorSignature;

  /// @brief Field InstantiatedNoFixedConstructorSignature value: static_cast<int32_t>(0x8)
  static ::JetBrains::Annotations::ImplicitUseKindFlags const InstantiatedNoFixedConstructorSignature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::ImplicitUseKindFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::JetBrains::Annotations::ImplicitUseKindFlags, value__) == 0x0, "Offset mismatch!");

} // namespace JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::ImplicitUseKindFlags, "JetBrains.Annotations", "ImplicitUseKindFlags");
