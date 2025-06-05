#pragma once
// IWYU pragma private; include "System/Security/Cryptography/DESTransform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
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
// Dependencies Mono.Security.Cryptography.SymmetricTransform
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.DESTransform
class CORDL_TYPE DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
  // Declarations
  /// @brief Field BLOCK_BIT_SIZE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BLOCK_BIT_SIZE, put = setStaticF_BLOCK_BIT_SIZE)) int32_t BLOCK_BIT_SIZE;

  /// @brief Field BLOCK_BYTE_SIZE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_BLOCK_BYTE_SIZE, put = setStaticF_BLOCK_BYTE_SIZE)) int32_t BLOCK_BYTE_SIZE;

  /// @brief Field KEY_BIT_SIZE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_KEY_BIT_SIZE, put = setStaticF_KEY_BIT_SIZE)) int32_t KEY_BIT_SIZE;

  /// @brief Field KEY_BYTE_SIZE, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_KEY_BYTE_SIZE, put = setStaticF_KEY_BYTE_SIZE)) int32_t KEY_BYTE_SIZE;

  /// @brief Field PC1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PC1, put = setStaticF_PC1)) ::ArrayW<uint8_t, ::Array<uint8_t>*> PC1;

  /// @brief Field PC2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PC2, put = setStaticF_PC2)) ::ArrayW<uint8_t, ::Array<uint8_t>*> PC2;

  /// @brief Field byteBuff, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_byteBuff, put = __cordl_internal_set_byteBuff)) ::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuff;

  /// @brief Field dwordBuff, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_dwordBuff, put = __cordl_internal_set_dwordBuff)) ::ArrayW<uint32_t, ::Array<uint32_t>*> dwordBuff;

  /// @brief Field fpTab, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_fpTab, put = setStaticF_fpTab)) ::ArrayW<uint32_t, ::Array<uint32_t>*> fpTab;

  /// @brief Field ipTab, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ipTab, put = setStaticF_ipTab)) ::ArrayW<uint32_t, ::Array<uint32_t>*> ipTab;

  /// @brief Field keySchedule, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_keySchedule, put = __cordl_internal_set_keySchedule)) ::ArrayW<uint8_t, ::Array<uint8_t>*> keySchedule;

  /// @brief Field leftRotTotal, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_leftRotTotal, put = setStaticF_leftRotTotal)) ::ArrayW<uint8_t, ::Array<uint8_t>*> leftRotTotal;

  /// @brief Field spBoxes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_spBoxes, put = setStaticF_spBoxes)) ::ArrayW<uint32_t, ::Array<uint32_t>*> spBoxes;

  /// @brief Method BSwap, addr 0x3cb2358, size 0x78, virtual false, abstract: false, final false
  static inline void BSwap(::ArrayW<uint8_t, ::Array<uint8_t>*> byteBuff);

  /// @brief Method CipherFunct, addr 0x3cb1e50, size 0x230, virtual false, abstract: false, final false
  inline uint32_t CipherFunct(uint32_t r, int32_t n);

  /// @brief Method ECB, addr 0x3cb2758, size 0xa4, virtual true, abstract: false, final false
  inline void ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method GetStrongKey, addr 0x3cb19f8, size 0xd8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStrongKey();

  static inline ::System::Security::Cryptography::DESTransform* New_ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method Permutation, addr 0x3cb2080, size 0x2d8, virtual false, abstract: false, final false
  static inline void Permutation(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint32_t, ::Array<uint32_t>*> permTab, bool preSwap);

  /// @brief Method ProcessBlock, addr 0x3cb23d0, size 0x388, virtual false, abstract: false, final false
  inline void ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method SetKey, addr 0x3cb1ad0, size 0x380, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_byteBuff() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_byteBuff();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_dwordBuff() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_dwordBuff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_keySchedule() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_keySchedule();

  constexpr void __cordl_internal_set_byteBuff(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_dwordBuff(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_keySchedule(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3cb17d8, size 0x220, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  static inline int32_t getStaticF_BLOCK_BIT_SIZE();

  static inline int32_t getStaticF_BLOCK_BYTE_SIZE();

  static inline int32_t getStaticF_KEY_BIT_SIZE();

  static inline int32_t getStaticF_KEY_BYTE_SIZE();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PC1();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PC2();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_fpTab();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_ipTab();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_leftRotTotal();

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_spBoxes();

  static inline void setStaticF_BLOCK_BIT_SIZE(int32_t value);

  static inline void setStaticF_BLOCK_BYTE_SIZE(int32_t value);

  static inline void setStaticF_KEY_BIT_SIZE(int32_t value);

  static inline void setStaticF_KEY_BYTE_SIZE(int32_t value);

  static inline void setStaticF_PC1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_PC2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_fpTab(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_ipTab(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_leftRotTotal(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_spBoxes(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DESTransform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DESTransform(DESTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DESTransform(DESTransform const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2977 };

  /// @brief Field keySchedule, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keySchedule;

  /// @brief Field byteBuff, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___byteBuff;

  /// @brief Field dwordBuff, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___dwordBuff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::DESTransform, ___keySchedule) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DESTransform, ___byteBuff) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::DESTransform, ___dwordBuff) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DESTransform, 0x70>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DESTransform*, "System.Security.Cryptography", "DESTransform");
