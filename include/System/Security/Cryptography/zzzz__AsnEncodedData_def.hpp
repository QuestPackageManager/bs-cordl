#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsnEncodedData)
namespace System::Security::Cryptography {
class Oid;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsnEncodedData);
// Type: System.Security.Cryptography::AsnEncodedData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7814))
// CS Name: ::System.Security.Cryptography::AsnEncodedData*
class CORDL_TYPE AsnEncodedData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _oid, offset 0x10, size 0x8
  __declspec(property(get = __get__oid, put = __set__oid))::System::Security::Cryptography::Oid* _oid;

  /// @brief Field _raw, offset 0x18, size 0x8
  __declspec(property(get = __get__raw, put = __set__raw))::ArrayW<uint8_t, ::Array<uint8_t>*> _raw;

  __declspec(property(get = get_Oid, put = set_Oid))::System::Security::Cryptography::Oid* Oid;

  __declspec(property(get = get_RawData, put = set_RawData))::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  constexpr ::System::Security::Cryptography::Oid*& __get__oid();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Oid*> const& __get__oid() const;

  constexpr void __set__oid(::System::Security::Cryptography::Oid* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__raw();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__raw() const;

  constexpr void __set__raw(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor();

  /// @brief Method .ctor addr 0x27f85d4 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::StringW oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method .ctor addr 0x27f85dc size 0x84 virtual false final false
  inline void _ctor(::StringW oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::System::Security::Cryptography::Oid* oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method .ctor addr 0x27f8754 size 0x3c virtual false final false
  inline void _ctor(::System::Security::Cryptography::Oid* oid, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method .ctor addr 0x27f8800 size 0xe0 virtual false final false
  inline void _ctor(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method get_Oid addr 0x27f88e0 size 0x8 virtual false final false
  inline ::System::Security::Cryptography::Oid* get_Oid();

  /// @brief Method set_Oid addr 0x27f8790 size 0x70 virtual false final false
  inline void set_Oid(::System::Security::Cryptography::Oid* value);

  /// @brief Method get_RawData addr 0x27f88e8 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_RawData();

  /// @brief Method set_RawData addr 0x27f8660 size 0xf4 virtual false final false
  inline void set_RawData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method CopyFrom addr 0x27f88f0 size 0xfc virtual true final false
  inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData* asnEncodedData);

  /// @brief Method Format addr 0x27f89ec size 0x90 virtual true final false
  inline ::StringW Format(bool multiLine);

  /// @brief Method ToString addr 0x27f8b90 size 0x1b0 virtual true final false
  inline ::StringW ToString(bool multiLine);

  /// @brief Method Default addr 0x27f8a7c size 0x114 virtual false final false
  inline ::StringW Default(bool multiLine);

  /// @brief Method BasicConstraintsExtension addr 0x27f8d40 size 0x10c virtual false final false
  inline ::StringW BasicConstraintsExtension(bool multiLine);

  /// @brief Method EnhancedKeyUsageExtension addr 0x27f8e4c size 0x10c virtual false final false
  inline ::StringW EnhancedKeyUsageExtension(bool multiLine);

  /// @brief Method KeyUsageExtension addr 0x27f8f58 size 0x110 virtual false final false
  inline ::StringW KeyUsageExtension(bool multiLine);

  /// @brief Method SubjectKeyIdentifierExtension addr 0x27f9068 size 0x110 virtual false final false
  inline ::StringW SubjectKeyIdentifierExtension(bool multiLine);

  /// @brief Method SubjectAltName addr 0x27f9178 size 0x3c0 virtual false final false
  inline ::StringW SubjectAltName(bool multiLine);

  /// @brief Method NetscapeCertType addr 0x27f9538 size 0x394 virtual false final false
  inline ::StringW NetscapeCertType(bool multiLine);

  // Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsnEncodedData(AsnEncodedData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsnEncodedData(AsnEncodedData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsnEncodedData();

public:
  /// @brief Field _oid, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::Oid* ____oid;

  /// @brief Field _raw, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____raw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsnEncodedData, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsnEncodedData, ____oid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsnEncodedData, ____raw) == 0x18, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsnEncodedData);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsnEncodedData*, "System.Security.Cryptography", "AsnEncodedData");
