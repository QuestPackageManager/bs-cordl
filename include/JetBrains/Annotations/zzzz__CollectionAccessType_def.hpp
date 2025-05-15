#pragma once
// IWYU pragma private; include "JetBrains/Annotations/CollectionAccessType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionAccessType)
// Forward declare root types
namespace JetBrains::Annotations {
struct CollectionAccessType;
}
// Write type traits
MARK_VAL_T(::JetBrains::Annotations::CollectionAccessType);
// Dependencies
namespace JetBrains::Annotations {
// Is value type: true
// CS Name: JetBrains.Annotations.CollectionAccessType
struct CORDL_TYPE CollectionAccessType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CollectionAccessType_Unwrapped
  enum struct __CollectionAccessType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Read = static_cast<int32_t>(0x1),
    __E_ModifyExistingContent = static_cast<int32_t>(0x2),
    __E_UpdatedContent = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollectionAccessType_Unwrapped() const noexcept {
    return static_cast<__CollectionAccessType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionAccessType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CollectionAccessType(int32_t value__) noexcept;

  /// @brief Field ModifyExistingContent value: I32(2)
  static ::JetBrains::Annotations::CollectionAccessType const ModifyExistingContent;

  /// @brief Field None value: I32(0)
  static ::JetBrains::Annotations::CollectionAccessType const None;

  /// @brief Field Read value: I32(1)
  static ::JetBrains::Annotations::CollectionAccessType const Read;

  /// @brief Field UpdatedContent value: I32(6)
  static ::JetBrains::Annotations::CollectionAccessType const UpdatedContent;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18501 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JetBrains::Annotations::CollectionAccessType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::CollectionAccessType, 0x4>, "Size mismatch!");

} // namespace JetBrains::Annotations
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CollectionAccessType, "JetBrains.Annotations", "CollectionAccessType");
