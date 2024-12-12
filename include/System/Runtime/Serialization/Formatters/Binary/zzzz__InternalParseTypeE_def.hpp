#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/Formatters/Binary/InternalParseTypeE.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalParseTypeE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalParseTypeE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE);
// Dependencies
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// CS Name: System.Runtime.Serialization.Formatters.Binary.InternalParseTypeE
struct CORDL_TYPE InternalParseTypeE {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __InternalParseTypeE_Unwrapped
  enum struct __InternalParseTypeE_Unwrapped : int32_t {
    __E_Empty = static_cast<int32_t>(0x0),
    __E_SerializedStreamHeader = static_cast<int32_t>(0x1),
    __E_Object = static_cast<int32_t>(0x2),
    __E_Member = static_cast<int32_t>(0x3),
    __E_ObjectEnd = static_cast<int32_t>(0x4),
    __E_MemberEnd = static_cast<int32_t>(0x5),
    __E_Headers = static_cast<int32_t>(0x6),
    __E_HeadersEnd = static_cast<int32_t>(0x7),
    __E_SerializedStreamHeaderEnd = static_cast<int32_t>(0x8),
    __E_Envelope = static_cast<int32_t>(0x9),
    __E_EnvelopeEnd = static_cast<int32_t>(0xa),
    __E_Body = static_cast<int32_t>(0xb),
    __E_BodyEnd = static_cast<int32_t>(0xc),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __InternalParseTypeE_Unwrapped() const noexcept {
    return static_cast<__InternalParseTypeE_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr InternalParseTypeE();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr InternalParseTypeE(int32_t value__) noexcept;

  /// @brief Field Body value: I32(11)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Body;

  /// @brief Field BodyEnd value: I32(12)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const BodyEnd;

  /// @brief Field Empty value: I32(0)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Empty;

  /// @brief Field Envelope value: I32(9)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Envelope;

  /// @brief Field EnvelopeEnd value: I32(10)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const EnvelopeEnd;

  /// @brief Field Headers value: I32(6)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Headers;

  /// @brief Field HeadersEnd value: I32(7)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const HeadersEnd;

  /// @brief Field Member value: I32(3)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Member;

  /// @brief Field MemberEnd value: I32(5)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const MemberEnd;

  /// @brief Field Object value: I32(2)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Object;

  /// @brief Field ObjectEnd value: I32(4)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const ObjectEnd;

  /// @brief Field SerializedStreamHeader value: I32(1)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const SerializedStreamHeader;

  /// @brief Field SerializedStreamHeaderEnd value: I32(8)
  static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const SerializedStreamHeaderEnd;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3247 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalParseTypeE");
