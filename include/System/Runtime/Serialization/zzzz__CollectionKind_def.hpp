#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/CollectionKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CollectionKind)
// Forward declare root types
namespace System::Runtime::Serialization {
struct CollectionKind;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::CollectionKind);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.CollectionKind
struct CORDL_TYPE CollectionKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __CollectionKind_Unwrapped
  enum struct __CollectionKind_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_GenericDictionary = static_cast<uint8_t>(0x1u),
    __E_Dictionary = static_cast<uint8_t>(0x2u),
    __E_GenericList = static_cast<uint8_t>(0x3u),
    __E_GenericCollection = static_cast<uint8_t>(0x4u),
    __E_List = static_cast<uint8_t>(0x5u),
    __E_GenericEnumerable = static_cast<uint8_t>(0x6u),
    __E_Collection = static_cast<uint8_t>(0x7u),
    __E_Enumerable = static_cast<uint8_t>(0x8u),
    __E_Array = static_cast<uint8_t>(0x9u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CollectionKind_Unwrapped() const noexcept {
    return static_cast<__CollectionKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CollectionKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr CollectionKind(uint8_t value__) noexcept;

  /// @brief Field Array value: U8(9)
  static ::System::Runtime::Serialization::CollectionKind const Array;

  /// @brief Field Collection value: U8(7)
  static ::System::Runtime::Serialization::CollectionKind const Collection;

  /// @brief Field Dictionary value: U8(2)
  static ::System::Runtime::Serialization::CollectionKind const Dictionary;

  /// @brief Field Enumerable value: U8(8)
  static ::System::Runtime::Serialization::CollectionKind const Enumerable;

  /// @brief Field GenericCollection value: U8(4)
  static ::System::Runtime::Serialization::CollectionKind const GenericCollection;

  /// @brief Field GenericDictionary value: U8(1)
  static ::System::Runtime::Serialization::CollectionKind const GenericDictionary;

  /// @brief Field GenericEnumerable value: U8(6)
  static ::System::Runtime::Serialization::CollectionKind const GenericEnumerable;

  /// @brief Field GenericList value: U8(3)
  static ::System::Runtime::Serialization::CollectionKind const GenericList;

  /// @brief Field List value: U8(5)
  static ::System::Runtime::Serialization::CollectionKind const List;

  /// @brief Field None value: U8(0)
  static ::System::Runtime::Serialization::CollectionKind const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16961 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::CollectionKind, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::CollectionKind, 0x1>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::CollectionKind, "System.Runtime.Serialization", "CollectionKind");
