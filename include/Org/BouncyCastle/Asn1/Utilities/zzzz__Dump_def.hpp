#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Utilities/Dump.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Dump)
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Utilities {
class Dump;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Utilities::Dump);
// Type: Org.BouncyCastle.Asn1.Utilities::Dump
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Utilities::Dump*
class CORDL_TYPE Dump : public ::System::Object {
public:
  // Declarations
  /// @brief Method Main, addr 0x12f1a10, size 0x144, virtual false, abstract: false, final false
  static inline void Main(::ArrayW<::StringW, ::Array<::StringW>*> args);

  static inline ::Org::BouncyCastle::Asn1::Utilities::Dump* New_ctor();

  /// @brief Method .ctor, addr 0x12f1a08, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dump();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dump", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dump(Dump&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dump", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dump(Dump const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Utilities::Dump, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Utilities::Dump);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Utilities::Dump*, "Org.BouncyCastle.Asn1.Utilities", "Dump");
