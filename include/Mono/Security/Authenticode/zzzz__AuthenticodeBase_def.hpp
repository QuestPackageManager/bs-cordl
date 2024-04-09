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
// CS Name: ::Mono.Security.Authenticode::AuthenticodeBase*
class CORDL_TYPE AuthenticodeBase : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_PEOffset)) int32_t PEOffset;

  /// @brief Field blockLength, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_blockLength, put = __cordl_internal_set_blockLength)) int32_t blockLength;

  /// @brief Field blockNo, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_blockNo, put = __cordl_internal_set_blockNo)) int32_t blockNo;

  /// @brief Field coffSymbolTableOffset, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_coffSymbolTableOffset, put = __cordl_internal_set_coffSymbolTableOffset)) int32_t coffSymbolTableOffset;

  /// @brief Field dirSecurityOffset, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_dirSecurityOffset, put = __cordl_internal_set_dirSecurityOffset)) int32_t dirSecurityOffset;

  /// @brief Field dirSecuritySize, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_dirSecuritySize, put = __cordl_internal_set_dirSecuritySize)) int32_t dirSecuritySize;

  /// @brief Field fileblock, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_fileblock, put = __cordl_internal_set_fileblock))::ArrayW<uint8_t, ::Array<uint8_t>*> fileblock;

  /// @brief Field fs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fs, put = __cordl_internal_set_fs))::System::IO::Stream* fs;

  /// @brief Field pe64, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_pe64, put = __cordl_internal_set_pe64)) bool pe64;

  /// @brief Field peOffset, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_peOffset, put = __cordl_internal_set_peOffset)) int32_t peOffset;

  /// @brief Method Close, addr 0x2684420, size 0x2c, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method GetHash, addr 0x26847e8, size 0x488, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHash(::System::Security::Cryptography::HashAlgorithm* hash);

  /// @brief Method GetSecurityEntry, addr 0x2684718, size 0xd0, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSecurityEntry();

  static inline ::Mono::Security::Authenticode::AuthenticodeBase* New_ctor();

  /// @brief Method Open, addr 0x268438c, size 0x94, virtual false, abstract: false, final false
  inline void Open(::StringW filename);

  /// @brief Method Open, addr 0x268444c, size 0x8c, virtual false, abstract: false, final false
  inline void Open(::ArrayW<uint8_t, ::Array<uint8_t>*> rawdata);

  /// @brief Method ProcessFirstBlock, addr 0x26844d8, size 0x240, virtual false, abstract: false, final false
  inline int32_t ProcessFirstBlock();

  /// @brief Method ReadFirstBlock, addr 0x26842b4, size 0xd8, virtual false, abstract: false, final false
  inline void ReadFirstBlock();

  constexpr int32_t const& __cordl_internal_get_blockLength() const;

  constexpr int32_t& __cordl_internal_get_blockLength();

  constexpr int32_t const& __cordl_internal_get_blockNo() const;

  constexpr int32_t& __cordl_internal_get_blockNo();

  constexpr int32_t const& __cordl_internal_get_coffSymbolTableOffset() const;

  constexpr int32_t& __cordl_internal_get_coffSymbolTableOffset();

  constexpr int32_t const& __cordl_internal_get_dirSecurityOffset() const;

  constexpr int32_t& __cordl_internal_get_dirSecurityOffset();

  constexpr int32_t const& __cordl_internal_get_dirSecuritySize() const;

  constexpr int32_t& __cordl_internal_get_dirSecuritySize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_fileblock() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_fileblock();

  constexpr ::System::IO::Stream*& __cordl_internal_get_fs();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_fs() const;

  constexpr bool const& __cordl_internal_get_pe64() const;

  constexpr bool& __cordl_internal_get_pe64();

  constexpr int32_t const& __cordl_internal_get_peOffset() const;

  constexpr int32_t& __cordl_internal_get_peOffset();

  constexpr void __cordl_internal_set_blockLength(int32_t value);

  constexpr void __cordl_internal_set_blockNo(int32_t value);

  constexpr void __cordl_internal_set_coffSymbolTableOffset(int32_t value);

  constexpr void __cordl_internal_set_dirSecurityOffset(int32_t value);

  constexpr void __cordl_internal_set_dirSecuritySize(int32_t value);

  constexpr void __cordl_internal_set_fileblock(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_fs(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_pe64(bool value);

  constexpr void __cordl_internal_set_peOffset(int32_t value);

  /// @brief Method .ctor, addr 0x2684230, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_PEOffset, addr 0x268428c, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_PEOffset();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthenticodeBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthenticodeBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthenticodeBase(AuthenticodeBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthenticodeBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthenticodeBase(AuthenticodeBase const&) = delete;

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

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___fileblock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___fs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___blockNo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___blockLength) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___peOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___dirSecurityOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___dirSecuritySize) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___coffSymbolTableOffset) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Authenticode::AuthenticodeBase, ___pe64) == 0x38, "Offset mismatch!");

} // namespace Mono::Security::Authenticode
NEED_NO_BOX(::Mono::Security::Authenticode::AuthenticodeBase);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Authenticode::AuthenticodeBase*, "Mono.Security.Authenticode", "AuthenticodeBase");
