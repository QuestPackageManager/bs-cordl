#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerGenerator)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerGenerator);
// Type: Org.BouncyCastle.Asn1::BerGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(451))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(476))
// CS Name: ::Org.BouncyCastle.Asn1::BerGenerator*
class CORDL_TYPE BerGenerator : public ::Org::BouncyCastle::Asn1::Asn1Generator {
public:
  // Declarations
  /// @brief Field _tagged, offset 0x18, size 0x1
  __declspec(property(get = __get__tagged, put = __set__tagged)) bool _tagged;

  /// @brief Field _isExplicit, offset 0x19, size 0x1
  __declspec(property(get = __get__isExplicit, put = __set__isExplicit)) bool _isExplicit;

  /// @brief Field _tagNo, offset 0x1c, size 0x4
  __declspec(property(get = __get__tagNo, put = __set__tagNo)) int32_t _tagNo;

  constexpr bool& __get__tagged();

  constexpr bool const& __get__tagged() const;

  constexpr void __set__tagged(bool value);

  constexpr bool& __get__isExplicit();

  constexpr bool const& __get__isExplicit() const;

  constexpr void __set__isExplicit(bool value);

  constexpr int32_t& __get__tagNo();

  constexpr int32_t const& __get__tagNo() const;

  constexpr void __set__tagNo(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::BerGenerator* New_ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor addr 0x11bbe34 size 0x2c virtual false final false
  inline void _ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::BerGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method .ctor addr 0x11bbe60 size 0x4c virtual false final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method AddObject addr 0x11bbeac size 0x80 virtual true final false
  inline void AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method GetRawOutputStream addr 0x11bbf30 size 0x8 virtual true final false
  inline ::System::IO::Stream* GetRawOutputStream();

  /// @brief Method Close addr 0x11bbf38 size 0x4 virtual true final false
  inline void Close();

  /// @brief Method WriteHdr addr 0x11bbfd4 size 0x44 virtual false final false
  inline void WriteHdr(int32_t tag);

  /// @brief Method WriteBerHeader addr 0x11bc018 size 0x58 virtual false final false
  inline void WriteBerHeader(int32_t tag);

  /// @brief Method WriteBerBody addr 0x11bc070 size 0x14 virtual false final false
  inline void WriteBerBody(::System::IO::Stream* contentStream);

  /// @brief Method WriteBerEnd addr 0x11bbf3c size 0x98 virtual false final false
  inline void WriteBerEnd();

  // Ctor Parameters [CppParam { name: "", ty: "BerGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerGenerator(BerGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerGenerator(BerGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerGenerator();

public:
  /// @brief Field _tagged, offset: 0x18, size: 0x1, def value: None
  bool ____tagged;

  /// @brief Field _isExplicit, offset: 0x19, size: 0x1, def value: None
  bool ____isExplicit;

  /// @brief Field _tagNo, offset: 0x1c, size: 0x4, def value: None
  int32_t ____tagNo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerGenerator*, "Org.BouncyCastle.Asn1", "BerGenerator");
