#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkcs/Pkcs12Utilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Pkcs12Utilities)
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Utilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkcs::Pkcs12Utilities);
// Type: Org.BouncyCastle.Pkcs::Pkcs12Utilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkcs::Pkcs12Utilities*
class CORDL_TYPE Pkcs12Utilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToDefiniteLength, addr 0x252ede8, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertToDefiniteLength(::ArrayW<uint8_t, ::Array<uint8_t>*> berPkcs12File);

  /// @brief Method ConvertToDefiniteLength, addr 0x252ee84, size 0x444, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConvertToDefiniteLength(::ArrayW<uint8_t, ::Array<uint8_t>*> berPkcs12File, ::ArrayW<char16_t, ::Array<char16_t>*> passwd);

  static inline ::Org::BouncyCastle::Pkcs::Pkcs12Utilities* New_ctor();

  /// @brief Method .ctor, addr 0x252f2c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Pkcs12Utilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Utilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Pkcs12Utilities(Pkcs12Utilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Pkcs12Utilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Pkcs12Utilities(Pkcs12Utilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1702 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkcs::Pkcs12Utilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Pkcs::Pkcs12Utilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkcs::Pkcs12Utilities*, "Org.BouncyCastle.Pkcs", "Pkcs12Utilities");
