#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/SM4Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SM4Engine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class SM4Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::SM4Engine);
// Type: Org.BouncyCastle.Crypto.Engines::SM4Engine
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::SM4Engine*
class CORDL_TYPE SM4Engine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field CK, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CK, put = setStaticF_CK))::ArrayW<uint32_t, ::Array<uint32_t>*> CK;

  /// @brief Field FK, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FK, put = setStaticF_FK))::ArrayW<uint32_t, ::Array<uint32_t>*> FK;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field Sbox, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Sbox, put = setStaticF_Sbox))::ArrayW<uint8_t, ::Array<uint8_t>*> Sbox;

  /// @brief Field rk, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rk, put = __cordl_internal_set_rk))::ArrayW<uint32_t, ::Array<uint32_t>*> rk;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method ExpandKey, addr 0x115aad0, size 0x568, virtual false, abstract: false, final false
  inline void ExpandKey(bool forEncryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method GetBlockSize, addr 0x115b318, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x115b108, size 0x1c8, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method L, addr 0x115b038, size 0x78, virtual false, abstract: false, final false
  static inline uint32_t L(uint32_t B);

  /// @brief Method L_ap, addr 0x115aa0c, size 0x40, virtual false, abstract: false, final false
  static inline uint32_t L_ap(uint32_t B);

  static inline ::Org::BouncyCastle::Crypto::Engines::SM4Engine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x115b320, size 0x2b0, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x115b5d0, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method T, addr 0x115b0b0, size 0x58, virtual false, abstract: false, final false
  static inline uint32_t T(uint32_t Z);

  /// @brief Method T_ap, addr 0x115aa4c, size 0x84, virtual false, abstract: false, final false
  inline uint32_t T_ap(uint32_t Z);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_rk() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_rk();

  constexpr void __cordl_internal_set_rk(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x115b6fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_CK();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_FK();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Sbox();

  /// @brief Method get_AlgorithmName, addr 0x115b2d0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x115b310, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  static inline void setStaticF_CK(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_FK(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_Sbox(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method tau, addr 0x115a944, size 0xc8, virtual false, abstract: false, final false
  static inline uint32_t tau(uint32_t A);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SM4Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SM4Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SM4Engine(SM4Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SM4Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SM4Engine(SM4Engine const&) = delete;

  /// @brief Field rk, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___rk;

  /// @brief Field BlockSize offset 0xffffffff size 0x4
  static constexpr int32_t BlockSize{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::SM4Engine, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::SM4Engine, ___rk) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::SM4Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::SM4Engine*, "Org.BouncyCastle.Crypto.Engines", "SM4Engine");
