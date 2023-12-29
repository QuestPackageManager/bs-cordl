#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncryptedKey)
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class EnvelopedData;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey);
// Type: Org.BouncyCastle.Asn1.Crmf::EncryptedKey
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Crmf {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(112))
// CS Name: ::Org.BouncyCastle.Asn1.Crmf::EncryptedKey*
class CORDL_TYPE EncryptedKey : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field envelopedData, offset 0x10, size 0x8
  __declspec(property(get = __get_envelopedData, put = __set_envelopedData))::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData;

  /// @brief Field encryptedValue, offset 0x18, size 0x8
  __declspec(property(get = __get_encryptedValue, put = __set_encryptedValue))::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue;

  __declspec(property(get = get_IsEncryptedValue)) bool IsEncryptedValue;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Asn1::Asn1Encodable* Value;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Cms::EnvelopedData*& __get_envelopedData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::EnvelopedData*> const& __get_envelopedData() const;

  constexpr void __set_envelopedData(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* value);

  constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*& __get_encryptedValue();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*> const& __get_encryptedValue() const;

  constexpr void __set_encryptedValue(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* value);

  /// @brief Method GetInstance addr 0xe10d78 size 0x1a0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* GetInstance(::System::Object* o);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* New_ctor(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData);

  /// @brief Method .ctor addr 0xe10f18 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::EnvelopedData* envelopedData);

  static inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedKey* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue);

  /// @brief Method .ctor addr 0xe10f40 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* encryptedValue);

  /// @brief Method get_IsEncryptedValue addr 0xe1100c size 0x10 virtual true final false
  inline bool get_IsEncryptedValue();

  /// @brief Method get_Value addr 0xe1101c size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_Value();

  /// @brief Method ToAsn1Object addr 0xe11038 size 0x8c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EncryptedKey(EncryptedKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EncryptedKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EncryptedKey(EncryptedKey const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EncryptedKey();

public:
  /// @brief Field envelopedData, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::EnvelopedData* ___envelopedData;

  /// @brief Field encryptedValue, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* ___encryptedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Crmf::EncryptedKey, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey, ___envelopedData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey, ___encryptedValue) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Crmf::EncryptedKey*, "Org.BouncyCastle.Asn1.Crmf", "EncryptedKey");
