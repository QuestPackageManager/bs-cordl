#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CertStatus)
namespace Org::BouncyCastle::Asn1::Ocsp {
class RevokedInfo;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ocsp {
class CertStatus;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ocsp::CertStatus);
// Type: Org.BouncyCastle.Asn1.Ocsp::CertStatus
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ocsp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(7))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(208))
// CS Name: ::Org.BouncyCastle.Asn1.Ocsp::CertStatus*
class CORDL_TYPE CertStatus : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field tagNo, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_tagNo, put = __cordl_internal_set_tagNo)) int32_t tagNo;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::Org::BouncyCastle::Asn1::Asn1Encodable* value;

  __declspec(property(get = get_TagNo)) int32_t TagNo;

  __declspec(property(get = get_Status))::Org::BouncyCastle::Asn1::Asn1Encodable* Status;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

  constexpr int32_t& __cordl_internal_get_tagNo();

  constexpr int32_t const& __cordl_internal_get_tagNo() const;

  constexpr void __cordl_internal_set_tagNo(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_value();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_value() const;

  constexpr void __cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor();

  /// @brief Method .ctor, addr 0xf7ff04, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info);

  /// @brief Method .ctor, addr 0xf7ff74, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Ocsp::RevokedInfo* info);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0xf7ffa4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t tagNo, ::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* choice);

  /// @brief Method .ctor, addr 0xf7ffd4, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* choice);

  /// @brief Method GetInstance, addr 0xf80124, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Ocsp::CertStatus* GetInstance(::System::Object* obj);

  /// @brief Method get_TagNo, addr 0xf802ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_TagNo();

  /// @brief Method get_Status, addr 0xf802b4, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Status();

  /// @brief Method ToAsn1Object, addr 0xf802bc, size 0x74, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CertStatus(CertStatus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CertStatus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CertStatus(CertStatus const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CertStatus();

public:
  /// @brief Field tagNo, offset: 0x10, size: 0x4, def value: None
  int32_t ___tagNo;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ocsp::CertStatus, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CertStatus, ___tagNo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ocsp::CertStatus, ___value) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Ocsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ocsp::CertStatus);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ocsp::CertStatus*, "Org.BouncyCastle.Asn1.Ocsp", "CertStatus");
