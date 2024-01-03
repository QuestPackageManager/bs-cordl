#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::DesEngine);
// Type: Org.BouncyCastle.Crypto.Engines::DesEngine
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(839))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::DesEngine*
class CORDL_TYPE DesEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field workingKey, offset 0x10, size 0x8
  __declspec(property(get = __get_workingKey, put = __set_workingKey))::ArrayW<int32_t, ::Array<int32_t>*> workingKey;

  /// @brief Field bytebit, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bytebit, put = setStaticF_bytebit))::ArrayW<int16_t, ::Array<int16_t>*> bytebit;

  /// @brief Field bigbyte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_bigbyte, put = setStaticF_bigbyte))::ArrayW<int32_t, ::Array<int32_t>*> bigbyte;

  /// @brief Field pc1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pc1, put = setStaticF_pc1))::ArrayW<uint8_t, ::Array<uint8_t>*> pc1;

  /// @brief Field totrot, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_totrot, put = setStaticF_totrot))::ArrayW<uint8_t, ::Array<uint8_t>*> totrot;

  /// @brief Field pc2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pc2, put = setStaticF_pc2))::ArrayW<uint8_t, ::Array<uint8_t>*> pc2;

  /// @brief Field SP1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP1, put = setStaticF_SP1))::ArrayW<uint32_t, ::Array<uint32_t>*> SP1;

  /// @brief Field SP2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP2, put = setStaticF_SP2))::ArrayW<uint32_t, ::Array<uint32_t>*> SP2;

  /// @brief Field SP3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP3, put = setStaticF_SP3))::ArrayW<uint32_t, ::Array<uint32_t>*> SP3;

  /// @brief Field SP4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP4, put = setStaticF_SP4))::ArrayW<uint32_t, ::Array<uint32_t>*> SP4;

  /// @brief Field SP5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP5, put = setStaticF_SP5))::ArrayW<uint32_t, ::Array<uint32_t>*> SP5;

  /// @brief Field SP6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP6, put = setStaticF_SP6))::ArrayW<uint32_t, ::Array<uint32_t>*> SP6;

  /// @brief Field SP7, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP7, put = setStaticF_SP7))::ArrayW<uint32_t, ::Array<uint32_t>*> SP7;

  /// @brief Field SP8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SP8, put = setStaticF_SP8))::ArrayW<uint32_t, ::Array<uint32_t>*> SP8;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_workingKey();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_workingKey() const;

  constexpr void __set_workingKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_bytebit(::ArrayW<int16_t, ::Array<int16_t>*> value);

  static inline ::ArrayW<int16_t, ::Array<int16_t>*> getStaticF_bytebit();

  static inline void setStaticF_bigbyte(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_bigbyte();

  static inline void setStaticF_pc1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_pc1();

  static inline void setStaticF_totrot(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_totrot();

  static inline void setStaticF_pc2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_pc2();

  static inline void setStaticF_SP1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP1();

  static inline void setStaticF_SP2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP2();

  static inline void setStaticF_SP3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP3();

  static inline void setStaticF_SP4(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP4();

  static inline void setStaticF_SP5(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP5();

  static inline void setStaticF_SP6(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP6();

  static inline void setStaticF_SP7(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP7();

  static inline void setStaticF_SP8(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_SP8();

  /// @brief Method GetWorkingKey, addr 0xec9504, size 0x8, virtual true, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetWorkingKey();

  /// @brief Method Init, addr 0xec950c, size 0x144, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xec9bbc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xec9bfc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xec9c04, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock, addr 0xec9c0c, size 0x13c, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xeca17c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GenerateWorkingKey, addr 0xec9650, size 0x56c, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateWorkingKey(bool encrypting, ::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method DesFunc, addr 0xec9d48, size 0x434, virtual false, abstract: false, final false
  static inline void DesFunc(::ArrayW<int32_t, ::Array<int32_t>*> wKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  static inline ::Org::BouncyCastle::Crypto::Engines::DesEngine* New_ctor();

  /// @brief Method .ctor, addr 0xeca538, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DesEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEngine(DesEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEngine(DesEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEngine();

public:
  /// @brief Field workingKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey;

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x8) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::DesEngine, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEngine, ___workingKey) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::DesEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::DesEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEngine");
