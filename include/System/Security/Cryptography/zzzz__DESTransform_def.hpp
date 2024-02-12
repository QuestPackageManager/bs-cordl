#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DESTransform)
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DESTransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DESTransform);
// Type: System.Security.Cryptography::DESTransform
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2284))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2978))
// CS Name: ::System.Security.Cryptography::DESTransform*
class CORDL_TYPE DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
  // Declarations
  /// @brief Field keySchedule, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_keySchedule, put = __cordl_internal_set_keySchedule))::ArrayW<uint8_t, ::Array<uint8_t>*> keySchedule;

  /// @brief Field byteBuff, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_byteBuff, put = __cordl_internal_set_byteBuff))::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuff;

  /// @brief Field dwordBuff, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_dwordBuff, put = __cordl_internal_set_dwordBuff))::ArrayW<uint32_t, ::Array<uint32_t>*> dwordBuff;

  /// @brief Field KEY_BIT_SIZE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_KEY_BIT_SIZE, put = setStaticF_KEY_BIT_SIZE)) int32_t KEY_BIT_SIZE;

  /// @brief Field KEY_BYTE_SIZE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_KEY_BYTE_SIZE, put = setStaticF_KEY_BYTE_SIZE)) int32_t KEY_BYTE_SIZE;

  /// @brief Field BLOCK_BIT_SIZE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BLOCK_BIT_SIZE, put = setStaticF_BLOCK_BIT_SIZE)) int32_t BLOCK_BIT_SIZE;

  /// @brief Field BLOCK_BYTE_SIZE, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_BLOCK_BYTE_SIZE, put = setStaticF_BLOCK_BYTE_SIZE)) int32_t BLOCK_BYTE_SIZE;

  /// @brief Field spBoxes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_spBoxes, put = setStaticF_spBoxes))::ArrayW<uint32_t, ::Array<uint32_t>*> spBoxes;

  /// @brief Field PC1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PC1, put = setStaticF_PC1))::ArrayW<uint8_t, ::Array<uint8_t>*> PC1;

  /// @brief Field leftRotTotal, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_leftRotTotal, put = setStaticF_leftRotTotal))::ArrayW<uint8_t, ::Array<uint8_t>*> leftRotTotal;

  /// @brief Field PC2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PC2, put = setStaticF_PC2))::ArrayW<uint8_t, ::Array<uint8_t>*> PC2;

  /// @brief Field ipTab, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ipTab, put = setStaticF_ipTab))::ArrayW<uint32_t, ::Array<uint32_t>*> ipTab;

  /// @brief Field fpTab, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_fpTab, put = setStaticF_fpTab))::ArrayW<uint32_t, ::Array<uint32_t>*> fpTab;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_keySchedule();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_keySchedule() const;

  constexpr void __cordl_internal_set_keySchedule(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_byteBuff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_byteBuff() const;

  constexpr void __cordl_internal_set_byteBuff(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_dwordBuff();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_dwordBuff() const;

  constexpr void __cordl_internal_set_dwordBuff(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_KEY_BIT_SIZE(int32_t value);

  static inline int32_t getStaticF_KEY_BIT_SIZE();

  static inline void setStaticF_KEY_BYTE_SIZE(int32_t value);

  static inline int32_t getStaticF_KEY_BYTE_SIZE();

  static inline void setStaticF_BLOCK_BIT_SIZE(int32_t value);

  static inline int32_t getStaticF_BLOCK_BIT_SIZE();

  static inline void setStaticF_BLOCK_BYTE_SIZE(int32_t value);

  static inline int32_t getStaticF_BLOCK_BYTE_SIZE();

  static inline void setStaticF_spBoxes(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_spBoxes();

  static inline void setStaticF_PC1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PC1();

  static inline void setStaticF_leftRotTotal(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_leftRotTotal();

  static inline void setStaticF_PC2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PC2();

  static inline void setStaticF_ipTab(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_ipTab();

  static inline void setStaticF_fpTab(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_fpTab();

  static inline ::System::Security::Cryptography::DESTransform* New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor, addr 0x2491374, size 0x228, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method CipherFunct, addr 0x2491a00, size 0x230, virtual false, abstract: false, final false
  inline uint32_t CipherFunct(uint32_t r, int32_t n);

  /// @brief Method Permutation, addr 0x2491c30, size 0x324, virtual false, abstract: false, final false
  static inline void Permutation(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint32_t, ::Array<uint32_t>*> permTab, bool preSwap);

  /// @brief Method BSwap, addr 0x2491f54, size 0x78, virtual false, abstract: false, final false
  static inline void BSwap(::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuff);

  /// @brief Method SetKey, addr 0x2491674, size 0x38c, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method ProcessBlock, addr 0x2491fcc, size 0x388, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method ECB, addr 0x2492354, size 0xa4, virtual true, abstract: false, final false
  inline void ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method GetStrongKey, addr 0x249159c, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStrongKey();

  // Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DESTransform(DESTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DESTransform(DESTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DESTransform();

public:
  /// @brief Field keySchedule, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keySchedule;

  /// @brief Field byteBuff, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___byteBuff;

  /// @brief Field dwordBuff, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___dwordBuff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DESTransform, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DESTransform, ___keySchedule) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DESTransform, ___byteBuff) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DESTransform, ___dwordBuff) == 0x68, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DESTransform*, "System.Security.Cryptography", "DESTransform");
