#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticodeBase)
namespace System::IO {
class Stream;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace Mono::Security::Authenticode {
class AuthenticodeBase;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Authenticode::AuthenticodeBase);
// Type: Mono.Security.Authenticode::AuthenticodeBase
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Authenticode {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13801))
// CS Name: ::Mono.Security.Authenticode::AuthenticodeBase*
class CORDL_TYPE AuthenticodeBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field fileblock, offset 0x10, size 0x8
  __declspec(property(get = __get_fileblock, put = __set_fileblock))::ArrayW<uint8_t, ::Array<uint8_t>*> fileblock;

  /// @brief Field fs, offset 0x18, size 0x8
  __declspec(property(get = __get_fs, put = __set_fs))::System::IO::Stream* fs;

  /// @brief Field blockNo, offset 0x20, size 0x4
  __declspec(property(get = __get_blockNo, put = __set_blockNo)) int32_t blockNo;

  /// @brief Field blockLength, offset 0x24, size 0x4
  __declspec(property(get = __get_blockLength, put = __set_blockLength)) int32_t blockLength;

  /// @brief Field peOffset, offset 0x28, size 0x4
  __declspec(property(get = __get_peOffset, put = __set_peOffset)) int32_t peOffset;

  /// @brief Field dirSecurityOffset, offset 0x2c, size 0x4
  __declspec(property(get = __get_dirSecurityOffset, put = __set_dirSecurityOffset)) int32_t dirSecurityOffset;

  /// @brief Field dirSecuritySize, offset 0x30, size 0x4
  __declspec(property(get = __get_dirSecuritySize, put = __set_dirSecuritySize)) int32_t dirSecuritySize;

  /// @brief Field coffSymbolTableOffset, offset 0x34, size 0x4
  __declspec(property(get = __get_coffSymbolTableOffset, put = __set_coffSymbolTableOffset)) int32_t coffSymbolTableOffset;

  /// @brief Field pe64, offset 0x38, size 0x1
  __declspec(property(get = __get_pe64, put = __set_pe64)) bool pe64;

  __declspec(property(get = get_PEOffset)) int32_t PEOffset;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fileblock();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fileblock() const;

  constexpr void __set_fileblock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::IO::Stream*& __get_fs();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_fs() const;

  constexpr void __set_fs(::System::IO::Stream* value);

  constexpr int32_t& __get_blockNo();

  constexpr int32_t const& __get_blockNo() const;

  constexpr void __set_blockNo(int32_t value);

  constexpr int32_t& __get_blockLength();

  constexpr int32_t const& __get_blockLength() const;

  constexpr void __set_blockLength(int32_t value);

  constexpr int32_t& __get_peOffset();

  constexpr int32_t const& __get_peOffset() const;

  constexpr void __set_peOffset(int32_t value);

  constexpr int32_t& __get_dirSecurityOffset();

  constexpr int32_t const& __get_dirSecurityOffset() const;

  constexpr void __set_dirSecurityOffset(int32_t value);

  constexpr int32_t& __get_dirSecuritySize();

  constexpr int32_t const& __get_dirSecuritySize() const;

  constexpr void __set_dirSecuritySize(int32_t value);

  constexpr int32_t& __get_coffSymbolTableOffset();

  constexpr int32_t const& __get_coffSymbolTableOffset() const;

  constexpr void __set_coffSymbolTableOffset(int32_t value);

  constexpr bool& __get_pe64();

  constexpr bool const& __get_pe64() const;

  constexpr void __set_pe64(bool value);

  static inline ::Mono::Security::Authenticode::AuthenticodeBase* New_ctor();

  /// @brief Method .ctor addr 0x240a3f0 size 0x5c virtual false final false
  inline void _ctor();

  /// @brief Method get_PEOffset addr 0x240a44c size 0x28 virtual false final false
  inline int32_t get_PEOffset();

  /// @brief Method Open addr 0x240a54c size 0x94 virtual false final false
  inline void Open(::StringW filename);

  /// @brief Method Open addr 0x240a60c size 0x8c virtual false final false
  inline void Open(::ArrayW<uint8_t, ::Array<uint8_t>*> rawdata);

  /// @brief Method Close addr 0x240a5e0 size 0x2c virtual false final false
  inline void Close();

  /// @brief Method ReadFirstBlock addr 0x240a474 size 0xd8 virtual false final false
  inline void ReadFirstBlock();

  /// @brief Method ProcessFirstBlock addr 0x240a698 size 0x240 virtual false final false
  inline int32_t ProcessFirstBlock();

  /// @brief Method GetSecurityEntry addr 0x240a8d8 size 0xd0 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSecurityEntry();

  /// @brief Method GetHash addr 0x240a9a8 size 0x488 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHash(::System::Security::Cryptography::HashAlgorithm* hash);

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticodeBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticodeBase(AuthenticodeBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticodeBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticodeBase(AuthenticodeBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticodeBase();

public:
  /// @brief Field fileblock, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fileblock;

  /// @brief Field fs, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___fs;

  /// @brief Field blockNo, offset: 0x20, size: 0x4, def value: None
  int32_t ___blockNo;

  /// @brief Field blockLength, offset: 0x24, size: 0x4, def value: None
  int32_t ___blockLength;

  /// @brief Field peOffset, offset: 0x28, size: 0x4, def value: None
  int32_t ___peOffset;

  /// @brief Field dirSecurityOffset, offset: 0x2c, size: 0x4, def value: None
  int32_t ___dirSecurityOffset;

  /// @brief Field dirSecuritySize, offset: 0x30, size: 0x4, def value: None
  int32_t ___dirSecuritySize;

  /// @brief Field coffSymbolTableOffset, offset: 0x34, size: 0x4, def value: None
  int32_t ___coffSymbolTableOffset;

  /// @brief Field pe64, offset: 0x38, size: 0x1, def value: None
  bool ___pe64;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Authenticode::AuthenticodeBase, 0x40>, "Size mismatch!");

} // namespace Mono::Security::Authenticode
NEED_NO_BOX(::Mono::Security::Authenticode::AuthenticodeBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::AuthenticodeBase*, "Mono.Security.Authenticode", "AuthenticodeBase");
