#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/enum-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Enums)
namespace System {
class Array;
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
// Type: Org.BouncyCastle.Utilities::Enums
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities::Enums*
class CORDL_TYPE Enums : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetArbitraryValue, addr 0x13d0258, size 0xe0, virtual false, abstract: false, final false
  static inline ::bs_hook::EnumPtr GetArbitraryValue(::System::Type* enumType);

  /// @brief Method GetEnumValue, addr 0x13cff7c, size 0x1e4, virtual false, abstract: false, final false
  static inline ::bs_hook::EnumPtr GetEnumValue(::System::Type* enumType, ::StringW s);

  /// @brief Method GetEnumValues, addr 0x13d0180, size 0xd8, virtual false, abstract: false, final false
  static inline ::System::Array* GetEnumValues(::System::Type* enumType);

  /// @brief Method IsEnumType, addr 0x13d0160, size 0x20, virtual false, abstract: false, final false
  static inline bool IsEnumType(::System::Type* t);

  static inline ::Org::BouncyCastle::Utilities::Enums* New_ctor();

  /// @brief Method .ctor, addr 0x13d0338, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Enums, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Enums);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Enums*, "Org.BouncyCastle.Utilities", "Enums");
