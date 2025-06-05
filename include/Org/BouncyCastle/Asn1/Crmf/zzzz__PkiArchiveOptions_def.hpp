#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/PkiArchiveOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiArchiveOptions)
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedKey;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class PkiArchiveOptions;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.PkiArchiveOptions
class CORDL_TYPE PkiArchiveOptions : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_Type)) int32_t Type;

  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Field value, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* value;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x2314820, size 0x17c, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(bool archiveRemGenPrivKey);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* encKey);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyGenParameters);

  static inline ::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method ToAsn1Object, addr 0x2314c80, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable* const& __cordl_internal_get_value() const;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  /// @brief Method .ctor, addr 0x2314b40, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(bool archiveRemGenPrivKey);

  /// @brief Method .ctor, addr 0x2314af0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* encKey);

  /// @brief Method .ctor, addr 0x2314b18, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* keyGenParameters);

  /// @brief Method .ctor, addr 0x231499c, size 0x154, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject* tagged);

  /// @brief Method get_Type, addr 0x2314bb8, size 0xc0, virtual true, abstract: false, final false
  inline int32_t get_Type();

  /// @brief Method get_Value, addr 0x2314c78, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiArchiveOptions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveOptions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiArchiveOptions(PkiArchiveOptions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiArchiveOptions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiArchiveOptions(PkiArchiveOptions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 115 };

  /// @brief Field archiveRemGenPrivKey offset 0xffffffff size 0x4
  static constexpr int32_t archiveRemGenPrivKey{ static_cast<int32_t>(0x2) };

  /// @brief Field encryptedPrivKey offset 0xffffffff size 0x4
  static constexpr int32_t encryptedPrivKey{ static_cast<int32_t>(0x0) };

  /// @brief Field keyGenParameters offset 0xffffffff size 0x4
  static constexpr int32_t keyGenParameters{ static_cast<int32_t>(0x1) };

  /// @brief Field value, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions, ___value) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::PkiArchiveOptions*, "Org.BouncyCastle.Asn1.Crmf", "PkiArchiveOptions");
