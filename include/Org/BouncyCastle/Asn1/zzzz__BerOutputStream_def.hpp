#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerOutputStream_def.hpp"
CORDL_MODULE_EXPORT(BerOutputStream)
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerOutputStream);
// Type: Org.BouncyCastle.Asn1::BerOutputStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::BerOutputStream*
class CORDL_TYPE BerOutputStream : public ::Org::BouncyCastle::Asn1::DerOutputStream {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Asn1::BerOutputStream* New_ctor(::System::IO::Stream* os);

  /// @brief Method WriteObject, addr 0x1426920, size 0x15c, virtual true, abstract: false, final false
  inline void WriteObject(::System::Object* obj);

  /// @brief Method .ctor, addr 0x1424fa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* os);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerOutputStream(BerOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerOutputStream(BerOutputStream const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerOutputStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerOutputStream*, "Org.BouncyCastle.Asn1", "BerOutputStream");
