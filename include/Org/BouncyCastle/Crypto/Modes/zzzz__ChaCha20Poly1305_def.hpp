#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/ChaCha20Poly1305.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Modes/zzzz__ChaCha20Poly1305_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ChaCha20Poly1305)
namespace Org::BouncyCastle::Crypto::Engines {
class ChaCha7539Engine;
}
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
struct __ChaCha20Poly1305__State;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes {
struct __ChaCha20Poly1305__State;
}
namespace Org::BouncyCastle::Crypto::Modes {
class ChaCha20Poly1305;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: true
// CS Name: ::ChaCha20Poly1305::State
struct CORDL_TYPE __ChaCha20Poly1305__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____ChaCha20Poly1305__State_Unwrapped
  enum struct ____ChaCha20Poly1305__State_Unwrapped : int32_t {
    __E_Uninitialized = static_cast<int32_t>(0x0),
    __E_EncInit = static_cast<int32_t>(0x1),
    __E_EncAad = static_cast<int32_t>(0x2),
    __E_EncData = static_cast<int32_t>(0x3),
    __E_EncFinal = static_cast<int32_t>(0x4),
    __E_DecInit = static_cast<int32_t>(0x5),
    __E_DecAad = static_cast<int32_t>(0x6),
    __E_DecData = static_cast<int32_t>(0x7),
    __E_DecFinal = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____ChaCha20Poly1305__State_Unwrapped() const noexcept {
    return static_cast<____ChaCha20Poly1305__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChaCha20Poly1305__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ChaCha20Poly1305__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field DecAad value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecAad;

  /// @brief Field DecData value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecData;

  /// @brief Field DecFinal value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecFinal;

  /// @brief Field DecInit value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecInit;

  /// @brief Field EncAad value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncAad;

  /// @brief Field EncData value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncData;

  /// @brief Field EncFinal value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncFinal;

  /// @brief Field EncInit value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncInit;

  /// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const Uninitialized;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 962 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
// Type: Org.BouncyCastle.Crypto.Modes::ChaCha20Poly1305
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Modes::ChaCha20Poly1305*
class CORDL_TYPE ChaCha20Poly1305 : public ::System::Object {
public:
  // Declarations
  using State = ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State;

  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field Zeroes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zeroes, put = setStaticF_Zeroes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Zeroes;

  /// @brief Field mAadCount, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mAadCount, put = __cordl_internal_set_mAadCount)) uint64_t mAadCount;

  /// @brief Field mBuf, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_mBuf, put = __cordl_internal_set_mBuf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mBuf;

  /// @brief Field mBufPos, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_mBufPos, put = __cordl_internal_set_mBufPos)) int32_t mBufPos;

  /// @brief Field mChacha20, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mChacha20, put = __cordl_internal_set_mChacha20)) ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* mChacha20;

  /// @brief Field mDataCount, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_mDataCount, put = __cordl_internal_set_mDataCount)) uint64_t mDataCount;

  /// @brief Field mInitialAad, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_mInitialAad, put = __cordl_internal_set_mInitialAad)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mInitialAad;

  /// @brief Field mKey, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mKey, put = __cordl_internal_set_mKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mKey;

  /// @brief Field mMac, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_mMac, put = __cordl_internal_set_mMac)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mMac;

  /// @brief Field mNonce, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_mNonce, put = __cordl_internal_set_mNonce)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mPoly1305, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mPoly1305, put = __cordl_internal_set_mPoly1305)) ::Org::BouncyCastle::Crypto::IMac* mPoly1305;

  /// @brief Field mState, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_mState, put = __cordl_internal_set_mState)) ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State mState;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  /// @brief Method CheckAad, addr 0x2362034, size 0xac, virtual false, abstract: false, final false
  inline void CheckAad();

  /// @brief Method CheckData, addr 0x23625b8, size 0xc8, virtual false, abstract: false, final false
  inline void CheckData();

  /// @brief Method DoFinal, addr 0x2362c58, size 0x3c8, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method FinishAad, addr 0x2363218, size 0x2c, virtual false, abstract: false, final false
  inline void FinishAad(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State nextState);

  /// @brief Method FinishData, addr 0x2363020, size 0x190, virtual false, abstract: false, final false
  inline void FinishData(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State nextState);

  /// @brief Method GetMac, addr 0x23631b0, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method GetOutputSize, addr 0x2361d88, size 0xf0, virtual true, abstract: false, final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUpdateOutputSize, addr 0x2361e78, size 0xf4, virtual true, abstract: false, final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method IncrementCount, addr 0x23620e0, size 0x64, virtual false, abstract: false, final false
  inline uint64_t IncrementCount(uint64_t count, uint32_t increment, uint64_t limit);

  /// @brief Method Init, addr 0x2361810, size 0x444, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method InitMac, addr 0x2363344, size 0x1c8, virtual false, abstract: false, final false
  inline void InitMac();

  static inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* New_ctor(::Org::BouncyCastle::Crypto::IMac* poly1305);

  /// @brief Method PadMac, addr 0x2363244, size 0x100, virtual false, abstract: false, final false
  inline void PadMac(uint64_t count);

  /// @brief Method ProcessAadByte, addr 0x2361f6c, size 0xc8, virtual true, abstract: false, final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes, addr 0x2362144, size 0x1ec, virtual true, abstract: false, final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method ProcessByte, addr 0x2362330, size 0x288, virtual true, abstract: false, final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes, addr 0x2362748, size 0x510, virtual true, abstract: false, final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessData, addr 0x2362680, size 0xc8, virtual false, abstract: false, final false
  inline void ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset, addr 0x236320c, size 0xc, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Reset, addr 0x2361c54, size 0x134, virtual false, abstract: false, final false
  inline void Reset(bool clearMac, bool resetCipher);

  constexpr uint64_t const& __cordl_internal_get_mAadCount() const;

  constexpr uint64_t& __cordl_internal_get_mAadCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mBuf();

  constexpr int32_t const& __cordl_internal_get_mBufPos() const;

  constexpr int32_t& __cordl_internal_get_mBufPos();

  constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& __cordl_internal_get_mChacha20();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*> const& __cordl_internal_get_mChacha20() const;

  constexpr uint64_t const& __cordl_internal_get_mDataCount() const;

  constexpr uint64_t& __cordl_internal_get_mDataCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mInitialAad() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mInitialAad();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mMac() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mNonce() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mNonce();

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mPoly1305();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __cordl_internal_get_mPoly1305() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const& __cordl_internal_get_mState() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State& __cordl_internal_get_mState();

  constexpr void __cordl_internal_set_mAadCount(uint64_t value);

  constexpr void __cordl_internal_set_mBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mBufPos(int32_t value);

  constexpr void __cordl_internal_set_mChacha20(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value);

  constexpr void __cordl_internal_set_mDataCount(uint64_t value);

  constexpr void __cordl_internal_set_mInitialAad(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mPoly1305(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_mState(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State value);

  /// @brief Method .ctor, addr 0x23615a4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23615fc, size 0x1d4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* poly1305);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Zeroes();

  /// @brief Method get_AlgorithmName, addr 0x23617d0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr ::Org::BouncyCastle::Crypto::Modes::IAeadCipher* i___Org__BouncyCastle__Crypto__Modes__IAeadCipher() noexcept;

  static inline void setStaticF_Zeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChaCha20Poly1305();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChaCha20Poly1305", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChaCha20Poly1305(ChaCha20Poly1305&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChaCha20Poly1305", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChaCha20Poly1305(ChaCha20Poly1305 const&) = delete;

  /// @brief Field mChacha20, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* ___mChacha20;

  /// @brief Field mPoly1305, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mPoly1305;

  /// @brief Field mKey, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mKey;

  /// @brief Field mNonce, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mNonce;

  /// @brief Field mBuf, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mBuf;

  /// @brief Field mMac, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mMac;

  /// @brief Field mInitialAad, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mInitialAad;

  /// @brief Field mAadCount, offset: 0x48, size: 0x8, def value: None
  uint64_t ___mAadCount;

  /// @brief Field mDataCount, offset: 0x50, size: 0x8, def value: None
  uint64_t ___mDataCount;

  /// @brief Field mState, offset: 0x58, size: 0x4, def value: None
  ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State ___mState;

  /// @brief Field mBufPos, offset: 0x5c, size: 0x4, def value: None
  int32_t ___mBufPos;

  /// @brief Field AadLimit offset 0xffffffff size 0x8
  static constexpr uint64_t AadLimit{ static_cast<uint64_t>(0xffffffffffffffffu) };

  /// @brief Field BufSize offset 0xffffffff size 0x4
  static constexpr int32_t BufSize{ static_cast<int32_t>(0x40) };

  /// @brief Field DataLimit offset 0xffffffff size 0x8
  static constexpr uint64_t DataLimit{ static_cast<uint64_t>(0x3fffffffc0u) };

  /// @brief Field KeySize offset 0xffffffff size 0x4
  static constexpr int32_t KeySize{ static_cast<int32_t>(0x20) };

  /// @brief Field MacSize offset 0xffffffff size 0x4
  static constexpr int32_t MacSize{ static_cast<int32_t>(0x10) };

  /// @brief Field NonceSize offset 0xffffffff size 0x4
  static constexpr int32_t NonceSize{ static_cast<int32_t>(0xc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 963 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mChacha20) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mPoly1305) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mNonce) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mBuf) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mMac) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mInitialAad) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mAadCount) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mDataCount) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mState) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305, ___mBufPos) == 0x5c, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305/State");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305*, "Org.BouncyCastle.Crypto.Modes", "ChaCha20Poly1305");
