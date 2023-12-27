#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerGenerator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerSequenceGenerator)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerSequenceGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerSequenceGenerator);
// Type: Org.BouncyCastle.Asn1::DerSequenceGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(508))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(513))
// CS Name: ::Org.BouncyCastle.Asn1::DerSequenceGenerator*
class CORDL_TYPE DerSequenceGenerator : public ::Org::BouncyCastle::Asn1::DerGenerator {
public:
  // Declarations
  /// @brief Field _bOut, offset 0x20, size 0x8
  __declspec(property(get = __get__bOut, put = __set__bOut))::System::IO::MemoryStream* _bOut;

  constexpr ::System::IO::MemoryStream*& __get__bOut();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __get__bOut() const;

  constexpr void __set__bOut(::System::IO::MemoryStream* value);

  static inline ::Org::BouncyCastle::Asn1::DerSequenceGenerator* New_ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor addr 0x11c3d18 size 0x80 virtual false final false
  inline void _ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::DerSequenceGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method .ctor addr 0x11c3d98 size 0xa4 virtual false final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method AddObject addr 0x11c3e3c size 0x80 virtual true final false
  inline void AddObject(::Org::BouncyCastle::Asn1::Asn1Encodable* obj);

  /// @brief Method GetRawOutputStream addr 0x11c3ebc size 0x8 virtual true final false
  inline ::System::IO::Stream* GetRawOutputStream();

  /// @brief Method Close addr 0x11c3ec4 size 0x38 virtual true final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerSequenceGenerator(DerSequenceGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerSequenceGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerSequenceGenerator(DerSequenceGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerSequenceGenerator();

public:
  /// @brief Field _bOut, offset: 0x20, size: 0x8, def value: None
  ::System::IO::MemoryStream* ____bOut;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerSequenceGenerator, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerSequenceGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerSequenceGenerator*, "Org.BouncyCastle.Asn1", "DerSequenceGenerator");
