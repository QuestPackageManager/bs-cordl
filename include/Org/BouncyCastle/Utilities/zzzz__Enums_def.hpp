#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Enums.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Enums)
namespace System {
class Array;
}
namespace System {
class Enum;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Enums;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Enums);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Enums
class CORDL_TYPE Enums : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetArbitraryValue, addr 0x25e68e0, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::Enum* GetArbitraryValue(::System::Type* enumType);

  /// @brief Method GetEnumValue, addr 0x25e6614, size 0x1d8, virtual false, abstract: false, final false
  static inline ::System::Enum* GetEnumValue(::System::Type* enumType, ::StringW s);

  /// @brief Method GetEnumValues, addr 0x25e680c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Array* GetEnumValues(::System::Type* enumType);

  /// @brief Method IsEnumType, addr 0x25e67ec, size 0x20, virtual false, abstract: false, final false
  static inline bool IsEnumType(::System::Type* t);

  static inline ::Org::BouncyCastle::Utilities::Enums* New_ctor();

  /// @brief Method .ctor, addr 0x25e69c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Enums();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Enums", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Enums(Enums&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Enums", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Enums(Enums const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1833 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Enums, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Enums);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Enums*, "Org.BouncyCastle.Utilities", "Enums");
