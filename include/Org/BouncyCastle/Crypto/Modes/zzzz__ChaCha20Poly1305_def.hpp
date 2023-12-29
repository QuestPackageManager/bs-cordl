#pragma once
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
namespace Org::BouncyCastle::Crypto::Modes {
class IAeadCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
struct __ChaCha20Poly1305__State;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto::Engines {
class ChaCha7539Engine;
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
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(962))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __ChaCha20Poly1305__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __ChaCha20Poly1305__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Uninitialized value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const Uninitialized;

  /// @brief Field EncInit value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncInit;

  /// @brief Field EncAad value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncAad;

  /// @brief Field EncData value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncData;

  /// @brief Field EncFinal value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const EncFinal;

  /// @brief Field DecInit value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecInit;

  /// @brief Field DecAad value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecAad;

  /// @brief Field DecData value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecData;

  /// @brief Field DecFinal value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const DecFinal;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State, value__) == 0x0, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes
// Type: Org.BouncyCastle.Crypto.Modes::ChaCha20Poly1305
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(962)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(963))
// CS Name: ::Org.BouncyCastle.Crypto.Modes::ChaCha20Poly1305*
class CORDL_TYPE ChaCha20Poly1305 : public ::System::Object {
public:
  // Declarations
  using State = ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State;

  /// @brief Field mChacha20, offset 0x10, size 0x8
  __declspec(property(get = __get_mChacha20, put = __set_mChacha20))::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* mChacha20;

  /// @brief Field mPoly1305, offset 0x18, size 0x8
  __declspec(property(get = __get_mPoly1305, put = __set_mPoly1305))::Org::BouncyCastle::Crypto::IMac* mPoly1305;

  /// @brief Field mKey, offset 0x20, size 0x8
  __declspec(property(get = __get_mKey, put = __set_mKey))::ArrayW<uint8_t, ::Array<uint8_t>*> mKey;

  /// @brief Field mNonce, offset 0x28, size 0x8
  __declspec(property(get = __get_mNonce, put = __set_mNonce))::ArrayW<uint8_t, ::Array<uint8_t>*> mNonce;

  /// @brief Field mBuf, offset 0x30, size 0x8
  __declspec(property(get = __get_mBuf, put = __set_mBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> mBuf;

  /// @brief Field mMac, offset 0x38, size 0x8
  __declspec(property(get = __get_mMac, put = __set_mMac))::ArrayW<uint8_t, ::Array<uint8_t>*> mMac;

  /// @brief Field mInitialAad, offset 0x40, size 0x8
  __declspec(property(get = __get_mInitialAad, put = __set_mInitialAad))::ArrayW<uint8_t, ::Array<uint8_t>*> mInitialAad;

  /// @brief Field mAadCount, offset 0x48, size 0x8
  __declspec(property(get = __get_mAadCount, put = __set_mAadCount)) uint64_t mAadCount;

  /// @brief Field mDataCount, offset 0x50, size 0x8
  __declspec(property(get = __get_mDataCount, put = __set_mDataCount)) uint64_t mDataCount;

  /// @brief Field mState, offset 0x58, size 0x4
  __declspec(property(get = __get_mState, put = __set_mState))::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State mState;

  /// @brief Field mBufPos, offset 0x5c, size 0x4
  __declspec(property(get = __get_mBufPos, put = __set_mBufPos)) int32_t mBufPos;

  /// @brief Field Zeroes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Zeroes, put = setStaticF_Zeroes))::ArrayW<uint8_t, ::Array<uint8_t>*> Zeroes;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::IAeadCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::IAeadCipher*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*& __get_mChacha20();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine*> const& __get_mChacha20() const;

  constexpr void __set_mChacha20(::Org::BouncyCastle::Crypto::Engines::ChaCha7539Engine* value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_mPoly1305();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_mPoly1305() const;

  constexpr void __set_mPoly1305(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mKey() const;

  constexpr void __set_mKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mNonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mNonce() const;

  constexpr void __set_mNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mBuf() const;

  constexpr void __set_mBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mMac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mMac() const;

  constexpr void __set_mMac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mInitialAad();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mInitialAad() const;

  constexpr void __set_mInitialAad(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint64_t& __get_mAadCount();

  constexpr uint64_t const& __get_mAadCount() const;

  constexpr void __set_mAadCount(uint64_t value);

  constexpr uint64_t& __get_mDataCount();

  constexpr uint64_t const& __get_mDataCount() const;

  constexpr void __set_mDataCount(uint64_t value);

  constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State& __get_mState();

  constexpr ::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State const& __get_mState() const;

  constexpr void __set_mState(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State value);

  constexpr int32_t& __get_mBufPos();

  constexpr int32_t const& __get_mBufPos() const;

  constexpr void __set_mBufPos(int32_t value);

  static inline void setStaticF_Zeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Zeroes();

  static inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* New_ctor();

  /// @brief Method .ctor addr 0xea29f0 size 0x60 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Modes::ChaCha20Poly1305* New_ctor(::Org::BouncyCastle::Crypto::IMac* poly1305);

  /// @brief Method .ctor addr 0xea2a50 size 0x1e4 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* poly1305);

  /// @brief Method get_AlgorithmName addr 0xea2c34 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xea2c74 size 0x464 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetOutputSize addr 0xea3218 size 0xf8 virtual true final false
  inline int32_t GetOutputSize(int32_t len);

  /// @brief Method GetUpdateOutputSize addr 0xea3310 size 0xfc virtual true final false
  inline int32_t GetUpdateOutputSize(int32_t len);

  /// @brief Method ProcessAadByte addr 0xea340c size 0xc8 virtual true final false
  inline void ProcessAadByte(uint8_t input);

  /// @brief Method ProcessAadBytes addr 0xea35f4 size 0x1f8 virtual true final false
  inline void ProcessAadBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method ProcessByte addr 0xea37ec size 0x288 virtual true final false
  inline int32_t ProcessByte(uint8_t input, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBytes addr 0xea3c10 size 0x508 virtual true final false
  inline int32_t ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DoFinal addr 0xea4118 size 0x3d0 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetMac addr 0xea4678 size 0x5c virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetMac();

  /// @brief Method Reset addr 0xea46d4 size 0xc virtual true final false
  inline void Reset();

  /// @brief Method CheckAad addr 0xea34d4 size 0xb8 virtual false final false
  inline void CheckAad();

  /// @brief Method CheckData addr 0xea3a74 size 0xd4 virtual false final false
  inline void CheckData();

  /// @brief Method FinishAad addr 0xea46e0 size 0x2c virtual false final false
  inline void FinishAad(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State nextState);

  /// @brief Method FinishData addr 0xea44e8 size 0x190 virtual false final false
  inline void FinishData(::Org::BouncyCastle::Crypto::Modes::__ChaCha20Poly1305__State nextState);

  /// @brief Method IncrementCount addr 0xea358c size 0x68 virtual false final false
  inline uint64_t IncrementCount(uint64_t count, uint32_t increment, uint64_t limit);

  /// @brief Method InitMac addr 0xea480c size 0x1d4 virtual false final false
  inline void InitMac();

  /// @brief Method PadMac addr 0xea470c size 0x100 virtual false final false
  inline void PadMac(uint64_t count);

  /// @brief Method ProcessData addr 0xea3b48 size 0xc8 virtual false final false
  inline void ProcessData(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset addr 0xea30d8 size 0x140 virtual false final false
  inline void Reset(bool clearMac, bool resetCipher);

  // Ctor Parameters [CppParam { name: "", ty: "ChaCha20Poly1305", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChaCha20Poly1305(ChaCha20Poly1305&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChaCha20Poly1305", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChaCha20Poly1305(ChaCha20Poly1305 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChaCha20Poly1305();

public:
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

  /// @brief Field BufSize offset 0xffffffff size 0x4
  static constexpr int32_t BufSize{ static_cast<int32_t>(0x40) };

  /// @brief Field KeySize offset 0xffffffff size 0x4
  static constexpr int32_t KeySize{ static_cast<int32_t>(0x20) };

  /// @brief Field NonceSize offset 0xffffffff size 0x4
  static constexpr int32_t NonceSize{ static_cast<int32_t>(0xc) };

  /// @brief Field MacSize offset 0xffffffff size 0x4
  static constexpr int32_t MacSize{ static_cast<int32_t>(0x10) };

  /// @brief Field AadLimit offset 0xffffffff size 0x8
  static constexpr uint64_t AadLimit{ static_cast<uint64_t>(0xffffffffffffffffu) };

  /// @brief Field DataLimit offset 0xffffffff size 0x8
  static constexpr uint64_t DataLimit{ static_cast<uint64_t>(0x3fffffffc0u) };

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
