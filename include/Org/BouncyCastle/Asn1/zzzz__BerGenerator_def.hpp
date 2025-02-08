#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/BerGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerGenerator)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerGenerator);
// Dependencies Org.BouncyCastle.Asn1.Asn1Generator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.BerGenerator
class CORDL_TYPE BerGenerator : public ::Org::BouncyCastle::Asn1::Asn1Generator {
public:
  // Declarations
  /// @brief Field _isExplicit, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__isExplicit, put = __cordl_internal_set__isExplicit)) bool _isExplicit;

  /// @brief Field _tagNo, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__tagNo, put = __cordl_internal_set__tagNo)) int32_t _tagNo;

  /// @brief Field _tagged, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__tagged, put = __cordl_internal_set__tagged)) bool _tagged;

  /// @brief Method AddObject, addr 0x2633810, size 0x80, virtual true, abstract: false, final false
  inline void AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method Close, addr 0x263389c, size 0x4, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method GetRawOutputStream, addr 0x2633894, size 0x8, virtual true, abstract: false, final false
  inline ::System::IO::Stream* GetRawOutputStream();

  static inline ::Org::BouncyCastle::Asn1::BerGenerator* New_ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::BerGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method WriteBerBody, addr 0x26339d4, size 0x14, virtual false, abstract: false, final false
  inline void WriteBerBody(::System::IO::Stream* contentStream);

  /// @brief Method WriteBerEnd, addr 0x26338a0, size 0x98, virtual false, abstract: false, final false
  inline void WriteBerEnd();

  /// @brief Method WriteBerHeader, addr 0x263397c, size 0x58, virtual false, abstract: false, final false
  inline void WriteBerHeader(int32_t tag);

  /// @brief Method WriteHdr, addr 0x2633938, size 0x44, virtual false, abstract: false, final false
  inline void WriteHdr(int32_t tag);

  constexpr bool const& __cordl_internal_get__isExplicit() const;

  constexpr bool& __cordl_internal_get__isExplicit();

  constexpr int32_t const& __cordl_internal_get__tagNo() const;

  constexpr int32_t& __cordl_internal_get__tagNo();

  constexpr bool const& __cordl_internal_get__tagged() const;

  constexpr bool& __cordl_internal_get__tagged();

  constexpr void __cordl_internal_set__isExplicit(bool value);

  constexpr void __cordl_internal_set__tagNo(int32_t value);

  constexpr void __cordl_internal_set__tagged(bool value);

  /// @brief Method .ctor, addr 0x2633798, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor, addr 0x26337c4, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BerGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerGenerator(BerGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerGenerator(BerGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 476 };

  /// @brief Field _tagged, offset: 0x18, size: 0x1, def value: None
  bool ____tagged;

  /// @brief Field _isExplicit, offset: 0x19, size: 0x1, def value: None
  bool ____isExplicit;

  /// @brief Field _tagNo, offset: 0x1c, size: 0x4, def value: None
  int32_t ____tagNo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::BerGenerator, ____tagged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerGenerator, ____isExplicit) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::BerGenerator, ____tagNo) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerGenerator*, "Org.BouncyCastle.Asn1", "BerGenerator");
