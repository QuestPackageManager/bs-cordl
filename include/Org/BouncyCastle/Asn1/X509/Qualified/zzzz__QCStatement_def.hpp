#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/QCStatement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(QCStatement)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class QCStatement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::QCStatement
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::QCStatement*
class CORDL_TYPE QCStatement : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_StatementId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* StatementId;

  __declspec(property(get = get_StatementInfo)) ::Org::BouncyCastle::Asn1::Asn1Encodable* StatementInfo;

  /// @brief Field qcStatementId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_qcStatementId, put = __cordl_internal_set_qcStatementId)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier* qcStatementId;

  /// @brief Field qcStatementInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_qcStatementInfo, put = __cordl_internal_set_qcStatementInfo)) ::Org::BouncyCastle::Asn1::Asn1Encodable* qcStatementInfo;

  /// @brief Method GetInstance, addr 0x24cd59c, size 0x164, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* qcStatementId);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* qcStatementId,
                                                                                  ::Org::BouncyCastle::Asn1::Asn1Encodable* qcStatementInfo);

  static inline ::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24cd828, size 0x144, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& __cordl_internal_get_qcStatementId();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> const& __cordl_internal_get_qcStatementId() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_qcStatementInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_qcStatementInfo() const;

  constexpr void __cordl_internal_set_qcStatementId(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value);

  constexpr void __cordl_internal_set_qcStatementInfo(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x24cd7c4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* qcStatementId);

  /// @brief Method .ctor, addr 0x24cd7ec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier* qcStatementId, ::Org::BouncyCastle::Asn1::Asn1Encodable* qcStatementInfo);

  /// @brief Method .ctor, addr 0x24cd700, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_StatementId, addr 0x24cd818, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_StatementId();

  /// @brief Method get_StatementInfo, addr 0x24cd820, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_StatementInfo();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr QCStatement();

public:
  // Ctor Parameters [CppParam { name: "", ty: "QCStatement", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  QCStatement(QCStatement&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "QCStatement", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  QCStatement(QCStatement const&) = delete;

  /// @brief Field qcStatementId, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerObjectIdentifier* ___qcStatementId;

  /// @brief Field qcStatementInfo, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___qcStatementInfo;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 331 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement, ___qcStatementId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement, ___qcStatementInfo) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::QCStatement*, "Org.BouncyCastle.Asn1.X509.Qualified", "QCStatement");
