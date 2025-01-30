#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerGenerator)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerGenerator);
// Dependencies Org.BouncyCastle.Asn1.Asn1Generator
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerGenerator
class CORDL_TYPE DerGenerator : public ::Org::BouncyCastle::Asn1::Asn1Generator {
public:
  // Declarations
  /// @brief Field _isExplicit, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get__isExplicit, put = __cordl_internal_set__isExplicit)) bool _isExplicit;

  /// @brief Field _tagNo, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__tagNo, put = __cordl_internal_set__tagNo)) int32_t _tagNo;

  /// @brief Field _tagged, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__tagged, put = __cordl_internal_set__tagged)) bool _tagged;

  static inline ::Org::BouncyCastle::Asn1::DerGenerator* New_ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::DerGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method WriteDerEncoded, addr 0x2638b7c, size 0x34, virtual false, abstract: false, final false
  static inline void WriteDerEncoded(::System::IO::Stream* outStr, int32_t tag, ::System::IO::Stream* inStr);

  /// @brief Method WriteDerEncoded, addr 0x2638a3c, size 0x60, virtual false, abstract: false, final false
  static inline void WriteDerEncoded(::System::IO::Stream* outStream, int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteDerEncoded, addr 0x2638a9c, size 0xe0, virtual false, abstract: false, final false
  inline void WriteDerEncoded(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteLength, addr 0x2638988, size 0xb4, virtual false, abstract: false, final false
  static inline void WriteLength(::System::IO::Stream* outStr, int32_t length);

  constexpr bool const& __cordl_internal_get__isExplicit() const;

  constexpr bool& __cordl_internal_get__isExplicit();

  constexpr int32_t const& __cordl_internal_get__tagNo() const;

  constexpr int32_t& __cordl_internal_get__tagNo();

  constexpr bool const& __cordl_internal_get__tagged() const;

  constexpr bool& __cordl_internal_get__tagged();

  constexpr void __cordl_internal_set__isExplicit(bool value);

  constexpr void __cordl_internal_set__tagNo(int32_t value);

  constexpr void __cordl_internal_set__tagged(bool value);

  /// @brief Method .ctor, addr 0x2638910, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor, addr 0x263893c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerGenerator(DerGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerGenerator(DerGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 508 };

  /// @brief Field _tagged, offset: 0x18, size: 0x1, def value: None
  bool ____tagged;

  /// @brief Field _isExplicit, offset: 0x19, size: 0x1, def value: None
  bool ____isExplicit;

  /// @brief Field _tagNo, offset: 0x1c, size: 0x4, def value: None
  int32_t ____tagNo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerGenerator, ____tagged) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerGenerator, ____isExplicit) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerGenerator, ____tagNo) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerGenerator*, "Org.BouncyCastle.Asn1", "DerGenerator");
