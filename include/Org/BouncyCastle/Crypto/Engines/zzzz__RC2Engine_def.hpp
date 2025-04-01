#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/RC2Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC2Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC2Engine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.RC2Engine
class CORDL_TYPE RC2Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field encrypting, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_encrypting, put = __cordl_internal_set_encrypting)) bool encrypting;

  /// @brief Field piTable, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_piTable, put = setStaticF_piTable)) ::ArrayW<uint8_t, ::Array<uint8_t>*> piTable;

  /// @brief Field workingKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<int32_t, ::Array<int32_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DecryptBlock, addr 0x23613d0, size 0x44c, virtual false, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method EncryptBlock, addr 0x2360efc, size 0x4d4, virtual false, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GenerateWorkingKey, addr 0x2360920, size 0x2e8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t bits);

  /// @brief Method GetBlockSize, addr 0x2360dc0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x2360c08, size 0x16c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::RC2Engine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x2360dc8, size 0x134, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x2360d74, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method RotateWordLeft, addr 0x236181c, size 0x1c, virtual false, abstract: false, final false
  inline int32_t RotateWordLeft(int32_t x, int32_t y);

  constexpr bool const& __cordl_internal_get_encrypting() const;

  constexpr bool& __cordl_internal_get_encrypting();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_encrypting(bool value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x23618cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_piTable();

  /// @brief Method get_AlgorithmName, addr 0x2360d78, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x2360db8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_piTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC2Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2Engine(RC2Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2Engine(RC2Engine const&) = delete;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 854 };

  /// @brief Field workingKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey;

  /// @brief Field encrypting, offset: 0x18, size: 0x1, def value: None
  bool ___encrypting;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2Engine, ___workingKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2Engine, ___encrypting) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC2Engine, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC2Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC2Engine*, "Org.BouncyCastle.Crypto.Engines", "RC2Engine");
