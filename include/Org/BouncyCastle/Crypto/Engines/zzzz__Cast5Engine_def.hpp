#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/Cast5Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cast5Engine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Cast5Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Cast5Engine);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.Cast5Engine
class CORDL_TYPE Cast5Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field MAX_ROUNDS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MAX_ROUNDS, put = setStaticF_MAX_ROUNDS)) int32_t MAX_ROUNDS;

  /// @brief Field RED_ROUNDS, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_RED_ROUNDS, put = setStaticF_RED_ROUNDS)) int32_t RED_ROUNDS;

  /// @brief Field S1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S1, put = setStaticF_S1)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S1;

  /// @brief Field S2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S2, put = setStaticF_S2)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S2;

  /// @brief Field S3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S3, put = setStaticF_S3)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S3;

  /// @brief Field S4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S4, put = setStaticF_S4)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S4;

  /// @brief Field S5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S5, put = setStaticF_S5)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S5;

  /// @brief Field S6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S6, put = setStaticF_S6)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S6;

  /// @brief Field S7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S7, put = setStaticF_S7)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S7;

  /// @brief Field S8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_S8, put = setStaticF_S8)) ::ArrayW<uint32_t, ::Array<uint32_t>*> S8;

  /// @brief Field _Km, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Km, put = __cordl_internal_set__Km)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _Km;

  /// @brief Field _Kr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Kr, put = __cordl_internal_set__Kr)) ::ArrayW<int32_t, ::Array<int32_t>*> _Kr;

  /// @brief Field _encrypting, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__encrypting, put = __cordl_internal_set__encrypting)) bool _encrypting;

  /// @brief Field _rounds, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__rounds, put = __cordl_internal_set__rounds)) int32_t _rounds;

  /// @brief Field _workingKey, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__workingKey, put = __cordl_internal_set__workingKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method Bits32ToInts, addr 0x32aace8, size 0x78, virtual false, abstract: false, final false
  static inline void Bits32ToInts(uint32_t inData, ::ArrayW<int32_t, ::Array<int32_t>*> b, int32_t offset);

  /// @brief Method CAST_Decipher, addr 0x32ab180, size 0x210, virtual false, abstract: false, final false
  inline void CAST_Decipher(uint32_t L16, uint32_t R16, ::ArrayW<uint32_t, ::Array<uint32_t>*> result);

  /// @brief Method CAST_Encipher, addr 0x32aae60, size 0x220, virtual false, abstract: false, final false
  inline void CAST_Encipher(uint32_t L0, uint32_t R0, ::ArrayW<uint32_t, ::Array<uint32_t>*> result);

  /// @brief Method DecryptBlock, addr 0x32ab080, size 0x100, virtual true, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method EncryptBlock, addr 0x32aad60, size 0x100, virtual true, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method F1, addr 0x32ab390, size 0x10c, virtual false, abstract: false, final false
  static inline uint32_t F1(uint32_t D, uint32_t Kmi, int32_t Kri);

  /// @brief Method F2, addr 0x32ab49c, size 0x10c, virtual false, abstract: false, final false
  static inline uint32_t F2(uint32_t D, uint32_t Kmi, int32_t Kri);

  /// @brief Method F3, addr 0x32ab5a8, size 0x10c, virtual false, abstract: false, final false
  static inline uint32_t F3(uint32_t D, uint32_t Kmi, int32_t Kri);

  /// @brief Method GetBlockSize, addr 0x32a7a30, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x32a76e8, size 0x180, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method IntsTo32bits, addr 0x32aac70, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t IntsTo32bits(::ArrayW<int32_t, ::Array<int32_t>*> b, int32_t i);

  static inline ::Org::BouncyCastle::Crypto::Engines::Cast5Engine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x32a78b4, size 0x178, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x32a7a2c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method SetKey, addr 0x32a7a38, size 0x3238, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__Km() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__Km();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__Kr() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__Kr();

  constexpr bool const& __cordl_internal_get__encrypting() const;

  constexpr bool& __cordl_internal_get__encrypting();

  constexpr int32_t const& __cordl_internal_get__rounds() const;

  constexpr int32_t& __cordl_internal_get__rounds();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__workingKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__workingKey();

  constexpr void __cordl_internal_set__Km(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set__Kr(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set__encrypting(bool value);

  constexpr void __cordl_internal_set__rounds(int32_t value);

  constexpr void __cordl_internal_set__workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x32a762c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_MAX_ROUNDS();

  static inline int32_t getStaticF_RED_ROUNDS();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S1();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S2();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S3();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S4();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S5();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S6();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S7();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_S8();

  /// @brief Method get_AlgorithmName, addr 0x32a7868, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x32a78ac, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_MAX_ROUNDS(int32_t value);

  static inline void setStaticF_RED_ROUNDS(int32_t value);

  static inline void setStaticF_S1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_S2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_S3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_S4(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_S5(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_S6(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_S7(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_S8(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cast5Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cast5Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cast5Engine(Cast5Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cast5Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cast5Engine(Cast5Engine const&) = delete;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 833 };

  /// @brief Field _Kr, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____Kr;

  /// @brief Field _Km, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____Km;

  /// @brief Field _encrypting, offset: 0x20, size: 0x1, def value: None
  bool ____encrypting;

  /// @brief Field _workingKey, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____workingKey;

  /// @brief Field _rounds, offset: 0x30, size: 0x4, def value: None
  int32_t ____rounds;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast5Engine, ____Kr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast5Engine, ____Km) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast5Engine, ____encrypting) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast5Engine, ____workingKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast5Engine, ____rounds) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Cast5Engine, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Cast5Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Cast5Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast5Engine");
