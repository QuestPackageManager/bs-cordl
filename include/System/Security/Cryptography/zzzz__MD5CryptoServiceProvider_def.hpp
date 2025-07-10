#pragma once
// IWYU pragma private; include "System/Security/Cryptography/MD5CryptoServiceProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__MD5_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD5CryptoServiceProvider)
// Forward declare root types
namespace System::Security::Cryptography {
class MD5CryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::MD5CryptoServiceProvider);
// Dependencies System.Security.Cryptography.MD5
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.MD5CryptoServiceProvider
class CORDL_TYPE MD5CryptoServiceProvider : public ::System::Security::Cryptography::MD5 {
public:
  // Declarations
  /// @brief Field K, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_K, put = setStaticF_K)) ::ArrayW<uint32_t, ::Array<uint32_t>*> K;

  /// @brief Field _H, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__H, put = __cordl_internal_set__H)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _H;

  /// @brief Field _ProcessingBuffer, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ProcessingBuffer, put = __cordl_internal_set__ProcessingBuffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _ProcessingBuffer;

  /// @brief Field _ProcessingBufferCount, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__ProcessingBufferCount, put = __cordl_internal_set__ProcessingBufferCount)) int32_t _ProcessingBufferCount;

  /// @brief Field buff, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_buff, put = __cordl_internal_set_buff)) ::ArrayW<uint32_t, ::Array<uint32_t>*> buff;

  /// @brief Field count, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) uint64_t count;

  /// @brief Method AddLength, addr 0x3cb3d18, size 0xf0, virtual false, abstract: false, final false
  inline void AddLength(uint64_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t position);

  /// @brief Method Dispose, addr 0x3cb2c38, size 0x70, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x3cb2b98, size 0xa0, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method HashCore, addr 0x3cb2ca8, size 0x100, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> rgb, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x3cb3a20, size 0xd8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x3cb3ca4, size 0x74, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::System::Security::Cryptography::MD5CryptoServiceProvider* New_ctor();

  /// @brief Method ProcessBlock, addr 0x3cb2da8, size 0xc78, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset);

  /// @brief Method ProcessFinalBlock, addr 0x3cb3af8, size 0x1ac, virtual false, abstract: false, final false
  inline void ProcessFinalBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inputBuffer, int32_t inputOffset, int32_t inputCount);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__H() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__H();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__ProcessingBuffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__ProcessingBuffer();

  constexpr int32_t const& __cordl_internal_get__ProcessingBufferCount() const;

  constexpr int32_t& __cordl_internal_get__ProcessingBufferCount();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_buff() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_buff();

  constexpr uint64_t const& __cordl_internal_get_count() const;

  constexpr uint64_t& __cordl_internal_get_count();

  constexpr void __cordl_internal_set__H(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set__ProcessingBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__ProcessingBufferCount(int32_t value);

  constexpr void __cordl_internal_set_buff(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_count(uint64_t value);

  /// @brief Method .ctor, addr 0x3cb061c, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_K();

  static inline void setStaticF_K(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD5CryptoServiceProvider();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD5CryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD5CryptoServiceProvider(MD5CryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD5CryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD5CryptoServiceProvider(MD5CryptoServiceProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2979 };

  /// @brief Field _H, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____H;

  /// @brief Field buff, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___buff;

  /// @brief Field count, offset: 0x38, size: 0x8, def value: None
  uint64_t ___count;

  /// @brief Field _ProcessingBuffer, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____ProcessingBuffer;

  /// @brief Field _ProcessingBufferCount, offset: 0x48, size: 0x4, def value: None
  int32_t ____ProcessingBufferCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::MD5CryptoServiceProvider, ____H) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MD5CryptoServiceProvider, ___buff) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MD5CryptoServiceProvider, ___count) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MD5CryptoServiceProvider, ____ProcessingBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::MD5CryptoServiceProvider, ____ProcessingBufferCount) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::MD5CryptoServiceProvider, 0x50>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::MD5CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::MD5CryptoServiceProvider*, "System.Security.Cryptography", "MD5CryptoServiceProvider");
