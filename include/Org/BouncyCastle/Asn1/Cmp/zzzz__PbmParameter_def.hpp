#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PbmParameter)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PbmParameter;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PbmParameter);
// Type: Org.BouncyCastle.Asn1.Cmp::PbmParameter
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(28))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PbmParameter*
class CORDL_TYPE PbmParameter : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field salt, offset 0x10, size 0x8
  __declspec(property(get = __get_salt, put = __set_salt))::Org::BouncyCastle::Asn1::Asn1OctetString* salt;

  /// @brief Field owf, offset 0x18, size 0x8
  __declspec(property(get = __get_owf, put = __set_owf))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf;

  /// @brief Field iterationCount, offset 0x20, size 0x8
  __declspec(property(get = __get_iterationCount, put = __set_iterationCount))::Org::BouncyCastle::Asn1::DerInteger* iterationCount;

  /// @brief Field mac, offset 0x28, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac;

  __declspec(property(get = get_Salt))::Org::BouncyCastle::Asn1::Asn1OctetString* Salt;

  __declspec(property(get = get_Owf))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Owf;

  __declspec(property(get = get_IterationCount))::Org::BouncyCastle::Asn1::DerInteger* IterationCount;

  __declspec(property(get = get_Mac))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Mac;

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_salt();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_salt() const;

  constexpr void __set_salt(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_owf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_owf() const;

  constexpr void __set_owf(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_iterationCount();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_iterationCount() const;

  constexpr void __set_iterationCount(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_mac() const;

  constexpr void __set_mac(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xdf3a34 size 0xac virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xdf3ae0 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf, int32_t iterationCount,
                                                                       ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  /// @brief Method .ctor addr 0xdf3c68 size 0xc4 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf, int32_t iterationCount,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PbmParameter* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf,
                                                                       ::Org::BouncyCastle::Asn1::DerInteger* iterationCount, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  /// @brief Method .ctor addr 0xdf3d2c size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* salt, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* owf, ::Org::BouncyCastle::Asn1::DerInteger* iterationCount,
                    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* mac);

  /// @brief Method get_Salt addr 0xdf3d6c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Salt();

  /// @brief Method get_Owf addr 0xdf3d74 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Owf();

  /// @brief Method get_IterationCount addr 0xdf3d7c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_IterationCount();

  /// @brief Method get_Mac addr 0xdf3d84 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Mac();

  /// @brief Method ToAsn1Object addr 0xdf3d8c size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PbmParameter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbmParameter(PbmParameter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbmParameter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbmParameter(PbmParameter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbmParameter();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PbmParameter, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___salt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___owf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___iterationCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PbmParameter, ___mac) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PbmParameter);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PbmParameter*, "Org.BouncyCastle.Asn1.Cmp", "PbmParameter");
