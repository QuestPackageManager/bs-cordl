#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerExternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerExternal)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace Org::BouncyCastle::Asn1 {
class DerTaggedObject;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerExternal;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerExternal);
// Dependencies Org.BouncyCastle.Asn1.Asn1Object
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.DerExternal
class CORDL_TYPE DerExternal : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  __declspec(property(get = get_DataValueDescriptor, put = set_DataValueDescriptor)) ::Org::BouncyCastle::Asn1::Asn1Object* DataValueDescriptor;

  __declspec(property(get = get_DirectReference, put = set_DirectReference)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* DirectReference;

  __declspec(property(get = get_Encoding, put = set_Encoding)) int32_t Encoding;

  __declspec(property(get = get_ExternalContent, put = set_ExternalContent)) ::Org::BouncyCastle::Asn1::Asn1Object* ExternalContent;

  __declspec(property(get = get_IndirectReference, put = set_IndirectReference)) ::Org::BouncyCastle::Asn1::DerInteger* IndirectReference;

  /// @brief Field dataValueDescriptor, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_dataValueDescriptor, put = __cordl_internal_set_dataValueDescriptor)) ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor;

  /// @brief Field directReference, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_directReference, put = __cordl_internal_set_directReference)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference;

  /// @brief Field encoding, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_encoding, put = __cordl_internal_set_encoding)) int32_t encoding;

  /// @brief Field externalContent, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_externalContent, put = __cordl_internal_set_externalContent)) ::Org::BouncyCastle::Asn1::Asn1Object* externalContent;

  /// @brief Field indirectReference, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_indirectReference, put = __cordl_internal_set_indirectReference)) ::Org::BouncyCastle::Asn1::DerInteger* indirectReference;

  /// @brief Method Asn1Equals, addr 0x263cb38, size 0xe4, virtual true, abstract: false, final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method Asn1GetHashCode, addr 0x263cac4, size 0x74, virtual true, abstract: false, final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Encode, addr 0x263c970, size 0x104, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream* derOut);

  /// @brief Method GetObjFromVector, addr 0x263c774, size 0x94, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Asn1Object* GetObjFromVector(::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t index);

  static inline ::Org::BouncyCastle::Asn1::DerExternal* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                                 ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, int32_t encoding, ::Org::BouncyCastle::Asn1::Asn1Object* externalData);

  static inline ::Org::BouncyCastle::Asn1::DerExternal* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                                                                 ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, ::Org::BouncyCastle::Asn1::DerTaggedObject* externalData);

  static inline ::Org::BouncyCastle::Asn1::DerExternal* New_ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* vector);

  /// @brief Method WriteEncodable, addr 0x263ca74, size 0x50, virtual false, abstract: false, final false
  static inline void WriteEncodable(::System::IO::MemoryStream* ms, ::Org::BouncyCastle::Asn1::Asn1Encodable* e);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& __cordl_internal_get_dataValueDescriptor() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_dataValueDescriptor();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* const& __cordl_internal_get_directReference() const;

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_directReference();

  constexpr int32_t const& __cordl_internal_get_encoding() const;

  constexpr int32_t& __cordl_internal_get_encoding();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object* const& __cordl_internal_get_externalContent() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Object*& __cordl_internal_get_externalContent();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_indirectReference() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_indirectReference();

  constexpr void __cordl_internal_set_dataValueDescriptor(::Org::BouncyCastle::Asn1::Asn1Object* value);

  constexpr void __cordl_internal_set_directReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_encoding(int32_t value);

  constexpr void __cordl_internal_set_externalContent(::Org::BouncyCastle::Asn1::Asn1Object* value);

  constexpr void __cordl_internal_set_indirectReference(::Org::BouncyCastle::Asn1::DerInteger* value);

  /// @brief Method .ctor, addr 0x263c8fc, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                    ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, int32_t encoding, ::Org::BouncyCastle::Asn1::Asn1Object* externalData);

  /// @brief Method .ctor, addr 0x263c89c, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* directReference, ::Org::BouncyCastle::Asn1::DerInteger* indirectReference,
                    ::Org::BouncyCastle::Asn1::Asn1Object* dataValueDescriptor, ::Org::BouncyCastle::Asn1::DerTaggedObject* externalData);

  /// @brief Method .ctor, addr 0x26306d8, size 0x2e8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1EncodableVector* vector);

  /// @brief Method get_DataValueDescriptor, addr 0x263cc1c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_DataValueDescriptor();

  /// @brief Method get_DirectReference, addr 0x263cc2c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DirectReference();

  /// @brief Method get_Encoding, addr 0x263cc3c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Encoding();

  /// @brief Method get_ExternalContent, addr 0x263cc44, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* get_ExternalContent();

  /// @brief Method get_IndirectReference, addr 0x263cc54, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_IndirectReference();

  /// @brief Method set_DataValueDescriptor, addr 0x263cc24, size 0x8, virtual false, abstract: false, final false
  inline void set_DataValueDescriptor(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method set_DirectReference, addr 0x263cc34, size 0x8, virtual false, abstract: false, final false
  inline void set_DirectReference(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  /// @brief Method set_Encoding, addr 0x263c808, size 0x94, virtual false, abstract: false, final false
  inline void set_Encoding(int32_t value);

  /// @brief Method set_ExternalContent, addr 0x263cc4c, size 0x8, virtual false, abstract: false, final false
  inline void set_ExternalContent(::Org::BouncyCastle::Asn1::Asn1Object* value);

  /// @brief Method set_IndirectReference, addr 0x263cc5c, size 0x8, virtual false, abstract: false, final false
  inline void set_IndirectReference(::Org::BouncyCastle::Asn1::DerInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerExternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DerExternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerExternal(DerExternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerExternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerExternal(DerExternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 504 };

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
static_assert(offsetof(::Org::BouncyCastle::Asn1::DerExternal, ___directReference) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerExternal, ___indirectReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerExternal, ___dataValueDescriptor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerExternal, ___encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerExternal, ___externalContent) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerExternal, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerExternal);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerExternal*, "Org.BouncyCastle.Asn1", "DerExternal");
