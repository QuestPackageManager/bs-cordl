#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC2Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC2Engine);
// Type: Org.BouncyCastle.Crypto.Engines::RC2Engine
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(854))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC2Engine*
class CORDL_TYPE RC2Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field workingKey, offset 0x10, size 0x8
  __declspec(property(get = __get_workingKey, put = __set_workingKey))::ArrayW<int32_t, ::Array<int32_t>*> workingKey;

  /// @brief Field encrypting, offset 0x18, size 0x1
  __declspec(property(get = __get_encrypting, put = __set_encrypting)) bool encrypting;

  /// @brief Field piTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_piTable, put = setStaticF_piTable))::ArrayW<uint8_t, ::Array<uint8_t>*> piTable;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_workingKey();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_workingKey() const;

  constexpr void __set_workingKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get_encrypting();

  constexpr bool const& __get_encrypting() const;

  constexpr void __set_encrypting(bool value);

  static inline void setStaticF_piTable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_piTable();

  /// @brief Method GenerateWorkingKey addr 0xed8610 size 0x2e0 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key, int32_t bits);

  /// @brief Method Init addr 0xed88f0 size 0x174 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Reset addr 0xed8a64 size 0x4 virtual true final false
  inline void Reset();

  /// @brief Method get_AlgorithmName addr 0xed8a68 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay addr 0xed8aa8 size 0x8 virtual true final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize addr 0xed8ab0 size 0x8 virtual true final false
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock addr 0xed8ab8 size 0x138 virtual true final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method RotateWordLeft addr 0xed9528 size 0x1c virtual false final false
  inline int32_t RotateWordLeft(int32_t x, int32_t y);

  /// @brief Method EncryptBlock addr 0xed8bf0 size 0x4e0 virtual false final false
  inline void EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DecryptBlock addr 0xed90d0 size 0x458 virtual false final false
  inline void DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  static inline ::Org::BouncyCastle::Crypto::Engines::RC2Engine* New_ctor();

  /// @brief Method .ctor addr 0xed95d8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RC2Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2Engine(RC2Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2Engine(RC2Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2Engine();

public:
  /// @brief Field workingKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey;

  /// @brief Field encrypting, offset: 0x18, size: 0x1, def value: None
  bool ___encrypting;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC2Engine, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC2Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC2Engine*, "Org.BouncyCastle.Crypto.Engines", "RC2Engine");
