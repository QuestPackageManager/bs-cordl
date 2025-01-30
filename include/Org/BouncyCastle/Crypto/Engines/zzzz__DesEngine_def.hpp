#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/DesEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::DesEngine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.DesEngine
class CORDL_TYPE DesEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field SP1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP1, put = setStaticF_SP1)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP1;

  /// @brief Field SP2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP2, put = setStaticF_SP2)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP2;

  /// @brief Field SP3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP3, put = setStaticF_SP3)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP3;

  /// @brief Field SP4, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP4, put = setStaticF_SP4)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP4;

  /// @brief Field SP5, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP5, put = setStaticF_SP5)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP5;

  /// @brief Field SP6, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP6, put = setStaticF_SP6)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP6;

  /// @brief Field SP7, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP7, put = setStaticF_SP7)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP7;

  /// @brief Field SP8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_SP8, put = setStaticF_SP8)) ::ArrayW<uint32_t, ::Array<uint32_t>*> SP8;

  /// @brief Field bigbyte, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_bigbyte, put = setStaticF_bigbyte)) ::ArrayW<int32_t, ::Array<int32_t>*> bigbyte;

  /// @brief Field bytebit, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_bytebit, put = setStaticF_bytebit)) ::ArrayW<int16_t, ::Array<int16_t>*> bytebit;

  /// @brief Field pc1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pc1, put = setStaticF_pc1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> pc1;

  /// @brief Field pc2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_pc2, put = setStaticF_pc2)) ::ArrayW<uint8_t, ::Array<uint8_t>*> pc2;

  /// @brief Field totrot, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_totrot, put = setStaticF_totrot)) ::ArrayW<uint8_t, ::Array<uint8_t>*> totrot;

  /// @brief Field workingKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<int32_t, ::Array<int32_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method DesFunc, addr 0x2355958, size 0x434, virtual false, abstract: false, final false
  static inline void DesFunc(::ArrayW<int32_t, ::Array<int32_t>*> wKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GenerateWorkingKey, addr 0x2355280, size 0x550, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateWorkingKey(bool encrypting, ::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method GetBlockSize, addr 0x2355818, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetWorkingKey, addr 0x235513c, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetWorkingKey();

  /// @brief Method Init, addr 0x2355144, size 0x13c, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::DesEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x2355820, size 0x138, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x2355d8c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_workingKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x2356148, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP1();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP2();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP3();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP4();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP5();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP6();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP7();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP8();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_bigbyte();

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_bytebit();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_pc1();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_pc2();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_totrot();

  /// @brief Method get_AlgorithmName, addr 0x23557d0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x2355810, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_SP1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SP2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SP3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SP4(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SP5(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SP6(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SP7(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_SP8(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_bigbyte(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_bytebit(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline void setStaticF_pc1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_pc2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_totrot(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEngine(DesEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEngine(DesEngine const&) = delete;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 839 };

  /// @brief Field workingKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEngine, ___workingKey) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::DesEngine, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::DesEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::DesEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEngine");
