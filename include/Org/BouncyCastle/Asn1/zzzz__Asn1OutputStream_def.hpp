#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
CORDL_MODULE_EXPORT(Asn1OutputStream)
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1OutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1OutputStream);
// Type: Org.BouncyCastle.Asn1::Asn1OutputStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(457))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(458))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1OutputStream*
class CORDL_TYPE Asn1OutputStream : public ::Org::BouncyCastle::Asn1::DerOutputStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::Asn1OutputStream* New_ctor(::System::IO::Stream* os);

  /// @brief Method .ctor, addr 0x11b7fec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* os);

  /// @brief Method WriteObject, addr 0x11b7ff0, size 0x15c, virtual true, abstract: false, final false
  inline void WriteObject(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "Asn1OutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1OutputStream(Asn1OutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1OutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1OutputStream(Asn1OutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1OutputStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1OutputStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1OutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1OutputStream*, "Org.BouncyCastle.Asn1", "Asn1OutputStream");
