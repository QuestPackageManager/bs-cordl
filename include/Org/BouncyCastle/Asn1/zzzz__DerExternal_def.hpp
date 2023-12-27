#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerExternal)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace System::IO {
class MemoryStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerTaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerExternal;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerExternal);
// Type: Org.BouncyCastle.Asn1::DerExternal
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(504))
// CS Name: ::Org.BouncyCastle.Asn1::DerExternal*
class CORDL_TYPE DerExternal : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Field directReference, offset 0x10, size 0x8
  __declspec(property(get = __get_directReference, put = __set_directReference))::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference;

  /// @brief Field indirectReference, offset 0x18, size 0x8
  __declspec(property(get = __get_indirectReference, put = __set_indirectReference))::Org::BouncyCastle::Asn1::DerInteger* indirectReference;

  /// @brief Field dataValueDescriptor, offset 0x20, size 0x8
  __declspec(property(get = __get_dataValueDescriptor, put = __set_dataValueDescriptor))::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor;

  /// @brief Field encoding, offset 0x28, size 0x4
  __declspec(property(get = __get_encoding, put = __set_encoding)) int32_t encoding;

  /// @brief Field externalContent, offset 0x30, size 0x8
  __declspec(property(get = __get_externalContent, put = __set_externalContent))::Org::BouncyCastle::Asn1::Asn1Object* externalContent;

  __declspec(property(get = get_DataValueDescriptor, put = set_DataValueDescriptor))::Org::BouncyCastle::Asn1::Asn1Object* DataValueDescriptor;

  __declspec(property(get = get_DirectReference, put = set_DirectReference))::Org::BouncyCastle::Asn1::DerObjectIdentifier* DirectReference;

  __declspec(property(get = get_Encoding, put = set_Encoding)) int32_t Encoding;

  __declspec(property(get = get_ExternalContent, put = set_ExternalContent))::Org::BouncyCastle::Asn1::Asn1Object* ExternalContent;

  __declspec(property(get = get_IndirectReference, put = set_IndirectReference))::Org::BouncyCastle::Asn1::DerInteger* IndirectReference;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __get_directReference();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __get_directReference() const;

  constexpr void __set_directReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_indirectReference();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_indirectReference() const;

  constexpr void __set_indirectReference(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_dataValueDescriptor();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_dataValueDescriptor() const;

  constexpr void __set_dataValueDescriptor(::Org::BouncyCastle::Asn1::Asn1Object* value);

  constexpr int32_t& __get_encoding();

  constexpr int32_t const& __get_encoding() const;

  constexpr void __set_encoding(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __get_externalContent();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Object*> const& __get_externalContent() const;

  constexpr void __set_externalContent(::Org::BouncyCastle::Asn1::Asn1Object* value);

  static inline ::Org::BouncyCastle::Asn1::DerExternal* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* vector);

  /// @brief Method .ctor addr 0x11b4eac size 0x2f4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* vector);

  static inline ::Org::BouncyCastle::Asn1::DerExternal* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                                 ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, ::Org::BouncyCastle::Asn1::DerTaggedObject* externalData);

  /// @brief Method .ctor addr 0x11c12b4 size 0x60 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                    ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, ::Org::BouncyCastle::Asn1::DerTaggedObject* externalData);

  static inline ::Org::BouncyCastle::Asn1::DerExternal* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                                 ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, int32_t encoding, ::Org::BouncyCastle::Asn1::Asn1Object* externalData);

  /// @brief Method .ctor addr 0x11c1314 size 0x74 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                    ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, int32_t encoding, ::Org::BouncyCastle::Asn1::Asn1Object* externalData);

  /// @brief Method Encode addr 0x11c1388 size 0x108 virtual true final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method Asn1GetHashCode addr 0x11c14e0 size 0x74 virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals addr 0x11c1554 size 0xec virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method get_DataValueDescriptor addr 0x11c1640 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_DataValueDescriptor();

  /// @brief Method set_DataValueDescriptor addr 0x11c1648 size 0x8 virtual false final false
  inline void set_DataValueDescriptor(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method get_DirectReference addr 0x11c1650 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DirectReference();

  /// @brief Method set_DirectReference addr 0x11c1658 size 0x8 virtual false final false
  inline void set_DirectReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method get_Encoding addr 0x11c1660 size 0x8 virtual false final false
  inline int32_t get_Encoding();

  /// @brief Method set_Encoding addr 0x11c1218 size 0x9c virtual false final false
  inline void set_Encoding(int32_t value);

  /// @brief Method get_ExternalContent addr 0x11c1668 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_ExternalContent();

  /// @brief Method set_ExternalContent addr 0x11c1670 size 0x8 virtual false final false
  inline void set_ExternalContent(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method get_IndirectReference addr 0x11c1678 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_IndirectReference();

  /// @brief Method set_IndirectReference addr 0x11c1680 size 0x8 virtual false final false
  inline void set_IndirectReference(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method GetObjFromVector addr 0x11c1180 size 0x98 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObjFromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t index);

  /// @brief Method WriteEncodable addr 0x11c1490 size 0x50 virtual false final false
  static inline void WriteEncodable(::System::IO::MemoryStream* ms, ::Org::BouncyCastle::Asn1::Asn1Encodable* e);

  // Ctor Parameters [CppParam { name: "", ty: "DerExternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerExternal(DerExternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerExternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerExternal(DerExternal const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerExternal();

public:
  /// @brief Field directReference, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___directReference;

  /// @brief Field indirectReference, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___indirectReference;

  /// @brief Field dataValueDescriptor, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___dataValueDescriptor;

  /// @brief Field encoding, offset: 0x28, size: 0x4, def value: None
  int32_t ___encoding;

  /// @brief Field externalContent, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Object* ___externalContent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerExternal, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerExternal);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerExternal*, "Org.BouncyCastle.Asn1", "DerExternal");
