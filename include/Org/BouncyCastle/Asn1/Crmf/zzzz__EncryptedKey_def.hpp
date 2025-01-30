#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Crmf/EncryptedKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
CORDL_MODULE_EXPORT(EncryptedKey)
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedData;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey);
// Dependencies Org.BouncyCastle.Asn1.Asn1Encodable, Org.BouncyCastle.Asn1.IAsn1Choice
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Asn1.Crmf.EncryptedKey
class CORDL_TYPE EncryptedKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_IsEncryptedValue)) bool IsEncryptedValue;

  __declspec(property(get = get_Value)) ::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Field encryptedValue, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_encryptedValue, put = __cordl_internal_set_encryptedValue)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue;

  /// @brief Field envelopedData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_envelopedData, put = __cordl_internal_set_envelopedData)) ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  /// @brief Method GetInstance, addr 0x23129d8, size 0x190, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* New_ctor(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData);

  /// @brief Method ToAsn1Object, addr 0x2312c88, size 0x84, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* const& __cordl_internal_get_encryptedValue() const;

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& __cordl_internal_get_encryptedValue();

  constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* const& __cordl_internal_get_envelopedData() const;

  constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedData*& __cordl_internal_get_envelopedData();

  constexpr void __cordl_internal_set_encryptedValue(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value);

  constexpr void __cordl_internal_set_envelopedData(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* value);

  /// @brief Method .ctor, addr 0x2312b90, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue);

  /// @brief Method .ctor, addr 0x2312b68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData);

  /// @brief Method get_IsEncryptedValue, addr 0x2312c5c, size 0x10, virtual true, abstract: false, final false
  inline bool get_IsEncryptedValue();

  /// @brief Method get_Value, addr 0x2312c6c, size 0x1c, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedKey();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EncryptedKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedKey(EncryptedKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedKey(EncryptedKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 112 };

  /// @brief Field envelopedData, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* ___envelopedData;

  /// @brief Field encryptedValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* ___encryptedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey, ___envelopedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey, ___encryptedValue) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*, "Org.BouncyCastle.Asn1.Crmf", "EncryptedKey");
