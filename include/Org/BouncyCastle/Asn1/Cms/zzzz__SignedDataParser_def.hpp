#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SignedDataParser)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SequenceParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1SetParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class SignedDataParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::SignedDataParser);
// Type: Org.BouncyCastle.Asn1.Cms::SignedDataParser
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(94))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::SignedDataParser*
class CORDL_TYPE SignedDataParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _seq, offset 0x10, size 0x8
  __declspec(property(get = __get__seq, put = __set__seq))::Org::BouncyCastle::Asn1::Asn1SequenceParser* _seq;

  /// @brief Field _version, offset 0x18, size 0x8
  __declspec(property(get = __get__version, put = __set__version))::Org::BouncyCastle::Asn1::DerInteger* _version;

  /// @brief Field _nextObject, offset 0x20, size 0x8
  __declspec(property(get = __get__nextObject, put = __set__nextObject))::System::Object* _nextObject;

  /// @brief Field _certsCalled, offset 0x28, size 0x1
  __declspec(property(get = __get__certsCalled, put = __set__certsCalled)) bool _certsCalled;

  /// @brief Field _crlsCalled, offset 0x29, size 0x1
  __declspec(property(get = __get__crlsCalled, put = __set__crlsCalled)) bool _crlsCalled;

  __declspec(property(get = get_Version))::Org::BouncyCastle::Asn1::DerInteger* Version;

  constexpr ::Org::BouncyCastle::Asn1::Asn1SequenceParser*& __get__seq();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1SequenceParser*> const& __get__seq() const;

  constexpr void __set__seq(::Org::BouncyCastle::Asn1::Asn1SequenceParser* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get__version();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get__version() const;

  constexpr void __set__version(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::System::Object*& __get__nextObject();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__nextObject() const;

  constexpr void __set__nextObject(::System::Object* value);

  constexpr bool& __get__certsCalled();

  constexpr bool const& __get__certsCalled() const;

  constexpr void __set__certsCalled(bool value);

  constexpr bool& __get__crlsCalled();

  constexpr bool const& __get__crlsCalled() const;

  constexpr void __set__crlsCalled(bool value);

  /// @brief Method GetInstance, addr 0xe7ed10, size 0x19c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Cms::SignedDataParser* New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method .ctor, addr 0xe7eeac, size 0x124, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq);

  /// @brief Method get_Version, addr 0xe7efd0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Version();

  /// @brief Method GetDigestAlgorithms, addr 0xe7efd8, size 0xdc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetDigestAlgorithms();

  /// @brief Method GetEncapContentInfo, addr 0xe7f0b4, size 0x108, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* GetEncapContentInfo();

  /// @brief Method GetCertificates, addr 0xe7f1bc, size 0x258, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetCertificates();

  /// @brief Method GetCrls, addr 0xe7f414, size 0x2b8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetCrls();

  /// @brief Method GetSignerInfos, addr 0xe7f6cc, size 0x1148, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1SetParser* GetSignerInfos();

  // Ctor Parameters [CppParam { name: "", ty: "SignedDataParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignedDataParser(SignedDataParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignedDataParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignedDataParser(SignedDataParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignedDataParser();

public:
  /// @brief Field _seq, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1SequenceParser* ____seq;

  /// @brief Field _version, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ____version;

  /// @brief Field _nextObject, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____nextObject;

  /// @brief Field _certsCalled, offset: 0x28, size: 0x1, def value: None
  bool ____certsCalled;

  /// @brief Field _crlsCalled, offset: 0x29, size: 0x1, def value: None
  bool ____crlsCalled;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::SignedDataParser, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedDataParser, ____seq) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedDataParser, ____version) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedDataParser, ____nextObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedDataParser, ____certsCalled) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cms::SignedDataParser, ____crlsCalled) == 0x29, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::SignedDataParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::SignedDataParser*, "Org.BouncyCastle.Asn1.Cms", "SignedDataParser");
