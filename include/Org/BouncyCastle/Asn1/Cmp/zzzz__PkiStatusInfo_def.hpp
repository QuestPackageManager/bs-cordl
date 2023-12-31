#pragma once
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
// Type: Org.BouncyCastle.Asn1.Cmp::PkiStatusInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(43))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiStatusInfo*
class CORDL_TYPE PkiStatusInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __get_status, put = __set_status))::Org::BouncyCastle::Asn1::DerInteger* status;

  /// @brief Field statusString, offset 0x18, size 0x8
  __declspec(property(get = __get_statusString, put = __set_statusString))::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString;

  /// @brief Field failInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_failInfo, put = __set_failInfo))::Org::BouncyCastle::Asn1::DerBitString* failInfo;

  __declspec(property(get = get_Status))::Org::BouncyCastle::Math::BigInteger* Status;

  __declspec(property(get = get_StatusString))::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* StatusString;

  __declspec(property(get = get_FailInfo))::Org::BouncyCastle::Asn1::DerBitString* FailInfo;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_status();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_status() const;

  constexpr void __set_status(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& __get_statusString();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*> const& __get_statusString() const;

  constexpr void __set_statusString(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value);

  constexpr ::Org::BouncyCastle::Asn1::DerBitString*& __get_failInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBitString*> const& __get_failInfo() const;

  constexpr void __set_failInfo(::Org::BouncyCastle::Asn1::DerBitString* value);

  /// @brief Method GetInstance, addr 0xe6d598, size 0x18, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance, addr 0xe65928, size 0x188, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0xe6d5b0, size 0x178, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(int32_t status);

  /// @brief Method .ctor, addr 0xe6d728, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t status);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString);

  /// @brief Method .ctor, addr 0xe6d7a4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* New_ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString,
                                                                        ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* failInfo);

  /// @brief Method .ctor, addr 0xe6d824, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(int32_t status, ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* statusString, ::Org::BouncyCastle::Asn1::Cmp::PkiFailureInfo* failInfo);

  /// @brief Method get_Status, addr 0xe6d8b4, size 0x1c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Status();

  /// @brief Method get_StatusString, addr 0xe6d8d0, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_StatusString();

  /// @brief Method get_FailInfo, addr 0xe6d8d8, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::DerBitString* get_FailInfo();

  /// @brief Method ToAsn1Object, addr 0xe6d8e0, size 0x174, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PkiStatusInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiStatusInfo(PkiStatusInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiStatusInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiStatusInfo(PkiStatusInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiStatusInfo();

public:
  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___status;

  /// @brief Field statusString, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* ___statusString;

  /// @brief Field failInfo, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBitString* ___failInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, ___status) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, ___statusString) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo, ___failInfo) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*, "Org.BouncyCastle.Asn1.Cmp", "PkiStatusInfo");
