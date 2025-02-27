#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/Gost28147Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockCipher_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost28147Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Gost28147Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine);
// Dependencies Org.BouncyCastle.Crypto.IBlockCipher, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.Gost28147Engine
class CORDL_TYPE Gost28147Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field DSbox_A, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DSbox_A, put = setStaticF_DSbox_A)) ::ArrayW<uint8_t, ::Array<uint8_t>*> DSbox_A;

  /// @brief Field DSbox_Test, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_DSbox_Test, put = setStaticF_DSbox_Test)) ::ArrayW<uint8_t, ::Array<uint8_t>*> DSbox_Test;

  /// @brief Field ESbox_A, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ESbox_A, put = setStaticF_ESbox_A)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ESbox_A;

  /// @brief Field ESbox_B, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ESbox_B, put = setStaticF_ESbox_B)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ESbox_B;

  /// @brief Field ESbox_C, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ESbox_C, put = setStaticF_ESbox_C)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ESbox_C;

  /// @brief Field ESbox_D, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ESbox_D, put = setStaticF_ESbox_D)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ESbox_D;

  /// @brief Field ESbox_Test, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ESbox_Test, put = setStaticF_ESbox_Test)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ESbox_Test;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field S, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_S, put = __cordl_internal_set_S)) ::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  /// @brief Field Sbox_Default, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Sbox_Default, put = setStaticF_Sbox_Default)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Sbox_Default;

  /// @brief Field forEncryption, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field sBoxes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_sBoxes, put = setStaticF_sBoxes)) ::System::Collections::IDictionary* sBoxes;

  /// @brief Field workingKey, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<int32_t, ::Array<int32_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method AddSBox, addr 0x2361194, size 0x11c, virtual false, abstract: false, final false
  static inline void AddSBox(::StringW sBoxName, ::ArrayW<uint8_t, ::Array<uint8_t>*> sBox);

  /// @brief Method GetBlockSize, addr 0x23616ec, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method GetSBox, addr 0x2361c30, size 0x1bc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSBox(::StringW sBoxName);

  /// @brief Method GetSBoxName, addr 0x2361dec, size 0x560, virtual false, abstract: false, final false
  static inline ::StringW GetSBoxName(::ArrayW<uint8_t, ::Array<uint8_t>*> sBox);

  /// @brief Method Gost28147Func, addr 0x2361808, size 0x248, virtual false, abstract: false, final false
  inline void Gost28147Func(::ArrayW<int32_t, ::Array<int32_t>*> workingKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes,
                            int32_t outOff);

  /// @brief Method Gost28147_mainStep, addr 0x2361ac8, size 0xe8, virtual false, abstract: false, final false
  inline int32_t Gost28147_mainStep(int32_t n1, int32_t key);

  /// @brief Method Init, addr 0x236131c, size 0x258, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x23616f4, size 0x114, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x2361a50, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_S() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_S();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x23612b0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method bytesToint, addr 0x2361a54, size 0x74, virtual false, abstract: false, final false
  static inline int32_t bytesToint(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff);

  /// @brief Method generateWorkingKey, addr 0x2361574, size 0x130, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> generateWorkingKey(bool forEncryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> userKey);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_DSbox_A();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_DSbox_Test();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ESbox_A();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ESbox_B();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ESbox_C();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ESbox_D();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_ESbox_Test();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Sbox_Default();

  static inline ::System::Collections::IDictionary* getStaticF_sBoxes();

  /// @brief Method get_AlgorithmName, addr 0x23616a4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x23616e4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  /// @brief Method intTobytes, addr 0x2361bb0, size 0x80, virtual false, abstract: false, final false
  static inline void intTobytes(int32_t num, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  static inline void setStaticF_DSbox_A(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_DSbox_Test(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ESbox_A(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ESbox_B(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ESbox_C(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ESbox_D(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_ESbox_Test(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_Sbox_Default(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_sBoxes(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost28147Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost28147Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost28147Engine(Gost28147Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost28147Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost28147Engine(Gost28147Engine const&) = delete;

  /// @brief Field BlockSize offset 0xffffffff size 0x4
  static constexpr int32_t BlockSize{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 845 };

  /// @brief Field workingKey, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey;

  /// @brief Field forEncryption, offset: 0x18, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field S, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___S;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine, ___workingKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine, ___forEncryption) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine, ___S) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*, "Org.BouncyCastle.Crypto.Engines", "Gost28147Engine");
