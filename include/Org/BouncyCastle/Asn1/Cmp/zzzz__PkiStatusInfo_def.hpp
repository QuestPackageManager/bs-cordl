#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiStatusInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiStatusInfo)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFailureInfo;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Cmp.PkiStatusInfo
class CORDL_TYPE PkiStatusInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_FailInfo)) ::Org::BouncyCastle::Asn1::DerBitString* FailInfo;

  __declspec(property(get = get_Status)) ::Org::BouncyCastle::Math::BigInteger* Status;

  __declspec(property(get = get_StatusString)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* StatusString;

  /// @brief Field failInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_failInfo, put = __cordl_internal_set_failInfo)) ::Org::BouncyCastle::Asn1::DerBitString* failInfo;

  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_status, put = __cordl_internal_set_status)) ::Org::BouncyCastle::Asn1::DerInteger* status;

  /// @brief Field statusString, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_statusString, put = __cordl_internal_set_statusString)) ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString;

  /// @brief Method GetInstance, addr 0x22f8dfc, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0x22f1470, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(int32_t status);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString,
                                                                        ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* failInfo);

  /// @brief Method ToAsn1Object, addr 0x22f912c, size 0x170, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::DerBitString* const& __cordl_internal_get_failInfo() const;

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __cordl_internal_get_failInfo();

  constexpr ::Org::BouncyCastle::Asn1::DerInteger* const& __cordl_internal_get_status() const;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __cordl_internal_get_status();

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* const& __cordl_internal_get_statusString() const;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& __cordl_internal_get_statusString();

  constexpr void __cordl_internal_set_failInfo(::Org::BouncyCastle::Asn1::DerBitString* value);

  constexpr void __cordl_internal_set_status(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr void __cordl_internal_set_statusString(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value);

  /// @brief Method .ctor, addr 0x22f8e14, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x22f8f8c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t status);

  /// @brief Method .ctor, addr 0x22f9000, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString);

  /// @brief Method .ctor, addr 0x22f9078, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString, ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* failInfo);

  /// @brief Method get_FailInfo, addr 0x22f9124, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_FailInfo();

  /// @brief Method get_Status, addr 0x22f9100, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Status();

  /// @brief Method get_StatusString, addr 0x22f911c, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_StatusString();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiStatusInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiStatusInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiStatusInfo(PkiStatusInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiStatusInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiStatusInfo(PkiStatusInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 43 };

  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___status;

  /// @brief Field statusString, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* ___statusString;

  /// @brief Field failInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___failInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, ___statusString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, ___failInfo) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, "Org.BouncyCastle.Asn1.Cmp", "PkiStatusInfo");
