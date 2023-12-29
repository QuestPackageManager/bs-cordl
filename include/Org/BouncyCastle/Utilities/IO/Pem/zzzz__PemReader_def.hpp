#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemReader)
namespace System::IO {
class TextReader;
}
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemObject;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemReader;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemReader);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemReader
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1685))
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemReader*
class CORDL_TYPE PemReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __get_reader, put = __set_reader))::System::IO::TextReader* reader;

  __declspec(property(get = get_Reader))::System::IO::TextReader* Reader;

  constexpr ::System::IO::TextReader*& __get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __get_reader() const;

  constexpr void __set_reader(::System::IO::TextReader* value);

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemReader* New_ctor(::System::IO::TextReader* reader);

  /// @brief Method .ctor addr 0x1060350 size 0x78 virtual false final false
  inline void _ctor(::System::IO::TextReader* reader);

  /// @brief Method get_Reader addr 0x10603c8 size 0x8 virtual false final false
  inline ::System::IO::TextReader* get_Reader();

  /// @brief Method ReadPemObject addr 0x10603d0 size 0x154 virtual false final false
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* ReadPemObject();

  /// @brief Method LoadObject addr 0x1060524 size 0x3d8 virtual false final false
  inline ::Org::BouncyCastle::Utilities::IO::Pem::PemObject* LoadObject(::StringW type);

  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemReader(PemReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemReader(PemReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemReader();

public:
  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::IO::TextReader* ___reader;

  /// @brief Field BeginString offset 0xffffffff size 0x8
  static constexpr ::ConstString BeginString{ u"-----BEGIN " };

  /// @brief Field EndString offset 0xffffffff size 0x8
  static constexpr ::ConstString EndString{ u"-----END " };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemReader, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::Pem::PemReader, ___reader) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemReader);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemReader*, "Org.BouncyCastle.Utilities.IO.Pem", "PemReader");
