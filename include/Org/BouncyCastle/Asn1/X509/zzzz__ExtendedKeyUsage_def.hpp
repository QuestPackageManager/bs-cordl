#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/ExtendedKeyUsage.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExtendedKeyUsage)
namespace Org::BouncyCastle::Asn1::X509 {
class KeyPurposeID;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
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
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IList;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class ExtendedKeyUsage;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.X509.ExtendedKeyUsage
class CORDL_TYPE ExtendedKeyUsage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Field seq, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_seq, put = __cordl_internal_set_seq)) ::Org::BouncyCastle::Asn1::Asn1Sequence* seq;

  /// @brief Field usageTable, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_usageTable, put = __cordl_internal_set_usageTable)) ::System::Collections::IDictionary* usageTable;

  /// @brief Method FromExtensions, addr 0x3536098, size 0x78, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* FromExtensions(::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions);

  /// @brief Method GetAllUsages, addr 0x3536858, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Collections::IList* GetAllUsages();

  /// @brief Method GetInstance, addr 0x3535acc, size 0x14, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);

  /// @brief Method GetInstance, addr 0x3535ae0, size 0x104, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* GetInstance(::System::Object* obj);

  /// @brief Method GetUsages, addr 0x3536770, size 0xe8, virtual false, abstract: false, final false
  inline ::System::Collections::ArrayList* GetUsages();

  /// @brief Method HasKeyPurposeId, addr 0x35366b8, size 0xb8, virtual false, abstract: false, final false
  inline bool HasKeyPurposeId(::Org::BouncyCastle::Asn1::X509::KeyPurposeID* keyPurposeId);

  static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, ::Array<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>*> usages);

  static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::System::Collections::ArrayList* usages);

  static inline ::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage* New_ctor(::System::Collections::IEnumerable* usages);

  /// @brief Method ToAsn1Object, addr 0x35369e4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* const& __cordl_internal_get_seq() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_seq();

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_usageTable() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_usageTable();

  constexpr void __cordl_internal_set_seq(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  constexpr void __cordl_internal_set_usageTable(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x3535cec, size 0x3ac, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor, addr 0x3536110, size 0x16c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*, ::Array<::Org::BouncyCastle::Asn1::X509::KeyPurposeID*>*> usages);

  /// @brief Method .ctor, addr 0x353627c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::ArrayList* usages);

  /// @brief Method .ctor, addr 0x3536280, size 0x438, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* usages);

  /// @brief Method get_Count, addr 0x353693c, size 0xa8, virtual false, abstract: false, final false
  inline int32_t get_Count();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ExtendedKeyUsage();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ExtendedKeyUsage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ExtendedKeyUsage(ExtendedKeyUsage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ExtendedKeyUsage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ExtendedKeyUsage(ExtendedKeyUsage const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 360 };

  /// @brief Field usageTable, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___usageTable;

  /// @brief Field seq, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___seq;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage, ___usageTable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage, ___seq) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::ExtendedKeyUsage*, "Org.BouncyCastle.Asn1.X509", "ExtendedKeyUsage");
