#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemWriter)
namespace System::IO {
class TextWriter;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemWriter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemWriter);
// Type: Org.BouncyCastle.OpenSsl::PemWriter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1690))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1691))
// CS Name: ::Org.BouncyCastle.OpenSsl::PemWriter*
class CORDL_TYPE PemWriter : public ::Org::BouncyCastle::Utilities::IO::Pem::PemWriter {
public:
  // Declarations
  static inline ::Org::BouncyCastle::OpenSsl::PemWriter* New_ctor(::System::IO::TextWriter* writer);

  /// @brief Method .ctor addr 0x10d4db8 size 0x4 virtual false final false
  inline void _ctor(::System::IO::TextWriter* writer);

  /// @brief Method WriteObject addr 0x10d4dbc size 0x170 virtual false final false
  inline void WriteObject(::System::Object* obj);

  /// @brief Method WriteObject addr 0x10d4f2c size 0x8c virtual false final false
  inline void WriteObject(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Security::SecureRandom* random);

  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemWriter(PemWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemWriter(PemWriter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemWriter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemWriter, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemWriter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemWriter*, "Org.BouncyCastle.OpenSsl", "PemWriter");
