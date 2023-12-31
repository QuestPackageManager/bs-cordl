#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PemParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class PemParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::PemParser);
// Type: Org.BouncyCastle.X509::PemParser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1855))
// CS Name: ::Org.BouncyCastle.X509::PemParser*
class CORDL_TYPE PemParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _header1, offset 0x10, size 0x8
  __declspec(property(get = __get__header1, put = __set__header1))::StringW _header1;

  /// @brief Field _header2, offset 0x18, size 0x8
  __declspec(property(get = __get__header2, put = __set__header2))::StringW _header2;

  /// @brief Field _footer1, offset 0x20, size 0x8
  __declspec(property(get = __get__footer1, put = __set__footer1))::StringW _footer1;

  /// @brief Field _footer2, offset 0x28, size 0x8
  __declspec(property(get = __get__footer2, put = __set__footer2))::StringW _footer2;

  constexpr ::StringW& __get__header1();

  constexpr ::StringW const& __get__header1() const;

  constexpr void __set__header1(::StringW value);

  constexpr ::StringW& __get__header2();

  constexpr ::StringW const& __get__header2() const;

  constexpr void __set__header2(::StringW value);

  constexpr ::StringW& __get__footer1();

  constexpr ::StringW const& __get__footer1() const;

  constexpr void __set__footer1(::StringW value);

  constexpr ::StringW& __get__footer2();

  constexpr ::StringW const& __get__footer2() const;

  constexpr void __set__footer2(::StringW value);

  static inline ::Org::BouncyCastle::X509::PemParser* New_ctor(::StringW type);

  /// @brief Method .ctor, addr 0x1174a88, size 0x118, virtual false, abstract: false, final false
  inline void _ctor(::StringW type);

  /// @brief Method ReadLine, addr 0x1174ba0, size 0xd0, virtual false, abstract: false, final false
  inline ::StringW ReadLine(::System::IO::Stream* inStream);

  /// @brief Method ReadPemObject, addr 0x1174c70, size 0x214, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Sequence* ReadPemObject(::System::IO::Stream* inStream);

  // Ctor Parameters [CppParam { name: "", ty: "PemParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemParser(PemParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemParser(PemParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemParser();

public:
  /// @brief Field _header1, offset: 0x10, size: 0x8, def value: None
  ::StringW ____header1;

  /// @brief Field _header2, offset: 0x18, size: 0x8, def value: None
  ::StringW ____header2;

  /// @brief Field _footer1, offset: 0x20, size: 0x8, def value: None
  ::StringW ____footer1;

  /// @brief Field _footer2, offset: 0x28, size: 0x8, def value: None
  ::StringW ____footer2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::PemParser, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::PemParser, ____header1) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::PemParser, ____header2) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::PemParser, ____footer1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::X509::PemParser, ____footer2) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::X509
NEED_NO_BOX(::Org::BouncyCastle::X509::PemParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::PemParser*, "Org.BouncyCastle.X509", "PemParser");
