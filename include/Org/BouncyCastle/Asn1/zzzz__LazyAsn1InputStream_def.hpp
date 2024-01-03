#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LazyAsn1InputStream)
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerSequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerSet;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LazyAsn1InputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::LazyAsn1InputStream);
// Type: Org.BouncyCastle.Asn1::LazyAsn1InputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(524))
// CS Name: ::Org.BouncyCastle.Asn1::LazyAsn1InputStream*
class CORDL_TYPE LazyAsn1InputStream : public ::Org::BouncyCastle::Asn1::Asn1InputStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method .ctor, addr 0x11c6394, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x11c6398, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method CreateDerSequence, addr 0x11c63c8, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  /// @brief Method CreateDerSet, addr 0x11c64a4, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSet* CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  // Ctor Parameters [CppParam { name: "", ty: "LazyAsn1InputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyAsn1InputStream(LazyAsn1InputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyAsn1InputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyAsn1InputStream(LazyAsn1InputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyAsn1InputStream();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::LazyAsn1InputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyAsn1InputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyAsn1InputStream*, "Org.BouncyCastle.Asn1", "LazyAsn1InputStream");
