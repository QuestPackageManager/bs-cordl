#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/LazyAsn1InputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1InputStream_def.hpp"
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
// Dependencies Org.BouncyCastle.Asn1.Asn1InputStream
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.LazyAsn1InputStream
class CORDL_TYPE LazyAsn1InputStream : public ::Org::BouncyCastle::Asn1::Asn1InputStream {
public:
  // Declarations
  /// @brief Method CreateDerSequence, addr 0x356d1c4, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSequence* CreateDerSequence(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  /// @brief Method CreateDerSet, addr 0x356d2a4, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerSet* CreateDerSet(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* dIn);

  static inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  static inline ::Org::BouncyCastle::Asn1::LazyAsn1InputStream* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x356d190, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> input);

  /// @brief Method .ctor, addr 0x356d194, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyAsn1InputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LazyAsn1InputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyAsn1InputStream(LazyAsn1InputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyAsn1InputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyAsn1InputStream(LazyAsn1InputStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 524 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::LazyAsn1InputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LazyAsn1InputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LazyAsn1InputStream*, "Org.BouncyCastle.Asn1", "LazyAsn1InputStream");
