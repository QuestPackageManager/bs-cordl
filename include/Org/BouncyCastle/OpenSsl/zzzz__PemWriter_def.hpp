#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/PemWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/Pem/zzzz__PemWriter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemWriter)
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace System::IO {
class TextWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
class PemWriter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemWriter);
// Type: Org.BouncyCastle.OpenSsl::PemWriter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: ::Org.BouncyCastle.OpenSsl::PemWriter*
class CORDL_TYPE PemWriter : public ::Org::BouncyCastle::Utilities::IO::Pem::PemWriter {
public:
  // Declarations
  static inline ::Org::BouncyCastle::OpenSsl::PemWriter* New_ctor(::System::IO::TextWriter* writer);

  /// @brief Method WriteObject, addr 0x251ec74, size 0x164, virtual false, abstract: false, final false
  inline void WriteObject(::System::Object* obj);

  /// @brief Method WriteObject, addr 0x251edd8, size 0x84, virtual false, abstract: false, final false
  inline void WriteObject(::System::Object* obj, ::StringW algorithm, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::Security::SecureRandom* random);

  /// @brief Method .ctor, addr 0x251ec70, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextWriter* writer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemWriter(PemWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemWriter(PemWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1691 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemWriter, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemWriter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemWriter*, "Org.BouncyCastle.OpenSsl", "PemWriter");
