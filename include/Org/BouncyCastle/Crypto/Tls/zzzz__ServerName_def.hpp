#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ServerName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ServerName)
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ServerName;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ServerName);
// Type: Org.BouncyCastle.Crypto.Tls::ServerName
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ServerName*
class CORDL_TYPE ServerName : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name))::System::Object* Name;

  __declspec(property(get = get_NameType)) uint8_t NameType;

  /// @brief Field mName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mName, put = __cordl_internal_set_mName))::System::Object* mName;

  /// @brief Field mNameType, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mNameType, put = __cordl_internal_set_mNameType)) uint8_t mNameType;

  /// @brief Method Encode, addr 0x1206354, size 0x124, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  /// @brief Method GetHostName, addr 0x1206278, size 0xdc, virtual true, abstract: false, final false
  inline ::StringW GetHostName();

  /// @brief Method IsCorrectType, addr 0x12061a0, size 0xc8, virtual false, abstract: false, final false
  static inline bool IsCorrectType(uint8_t nameType, ::System::Object* name);

  static inline ::Org::BouncyCastle::Crypto::Tls::ServerName* New_ctor(uint8_t nameType, ::System::Object* name);

  /// @brief Method Parse, addr 0x1206478, size 0x118, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::ServerName* Parse(::System::IO::Stream* input);

  constexpr ::System::Object*& __cordl_internal_get_mName();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_mName() const;

  constexpr uint8_t const& __cordl_internal_get_mNameType() const;

  constexpr uint8_t& __cordl_internal_get_mNameType();

  constexpr void __cordl_internal_set_mName(::System::Object* value);

  constexpr void __cordl_internal_set_mNameType(uint8_t value);

  /// @brief Method .ctor, addr 0x1206100, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(uint8_t nameType, ::System::Object* name);

  /// @brief Method get_Name, addr 0x1206270, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* get_Name();

  /// @brief Method get_NameType, addr 0x1206268, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_NameType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ServerName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ServerName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ServerName(ServerName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ServerName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ServerName(ServerName const&) = delete;

  /// @brief Field mNameType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mNameType;

  /// @brief Field mName, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___mName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ServerName, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ServerName, ___mNameType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::ServerName, ___mName) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ServerName);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ServerName*, "Org.BouncyCastle.Crypto.Tls", "ServerName");
