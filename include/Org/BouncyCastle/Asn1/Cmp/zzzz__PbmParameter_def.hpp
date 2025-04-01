#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PbmParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PbmParameter)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PbmParameter);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.PbmParameter
class CORDL_TYPE PbmParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IterationCount)) ::Org::BouncyCastle::Asn1::DerInteger* IterationCount;

  __declspec(property(get = get_Mac)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Mac;

  __declspec(property(get = get_Owf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Owf;

  __declspec(property(get = get_Salt)) ::Org::BouncyCastle::Asn1::Asn1OctetString* Salt;

  /// @brief Field iterationCount, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_iterationCount, put = __cordl_internal_set_iterationCount)) ::Org::BouncyCastle::Asn1::DerInteger* iterationCount;

  /// @brief Field mac, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac;

  /// @brief Field owf, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_owf, put = __cordl_internal_set_owf)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf;

  /// @brief Field salt, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_salt, put = __cordl_internal_set_salt)) ::Org::BouncyCastle::Asn1::Asn1OctetString* salt;

  /// @brief Method GetInstance, addr 0x22f46d8, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf, int32_t iterationCount,
                                                                       ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf,
                                                                       ::Org::BouncyCastle::Asn1::DerInteger* iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x22f4974, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_iterationCount() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_iterationCount();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_mac() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_mac();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* const& __cordl_internal_get_owf() const;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_owf();

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString* const& __cordl_internal_get_salt() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_salt();

  constexpr void __cordl_internal_set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_owf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_salt(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  /// @brief Method .ctor, addr 0x22f4854, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf, int32_t iterationCount,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  /// @brief Method .ctor, addr 0x22f4914, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf, ::Org::BouncyCastle::Asn1::DerInteger* iterationCount,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  /// @brief Method .ctor, addr 0x22f462c, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_IterationCount, addr 0x22f4964, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_IterationCount();

  /// @brief Method get_Mac, addr 0x22f496c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Mac();

  /// @brief Method get_Owf, addr 0x22f495c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Owf();

  /// @brief Method get_Salt, addr 0x22f4954, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Salt();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbmParameter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PbmParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbmParameter(PbmParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbmParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbmParameter(PbmParameter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 28 };

  /// @brief Field salt, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___salt;

  /// @brief Field owf, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___owf;

  /// @brief Field iterationCount, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___iterationCount;

  /// @brief Field mac, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___mac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___salt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___owf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___iterationCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___mac) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PbmParameter, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PbmParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, "Org.BouncyCastle.Asn1.Cmp", "PbmParameter");
