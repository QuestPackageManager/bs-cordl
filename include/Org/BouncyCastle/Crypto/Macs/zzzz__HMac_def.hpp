#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/HMac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMac)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::HMac);
// Dependencies Org.BouncyCastle.Crypto.IMac, System.Object
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Macs.HMac
class CORDL_TYPE HMac : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field blockLength, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_blockLength, put = __cordl_internal_set_blockLength)) int32_t blockLength;

  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field digestSize, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_digestSize, put = __cordl_internal_set_digestSize)) int32_t digestSize;

  /// @brief Field inputPad, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_inputPad, put = __cordl_internal_set_inputPad)) ::ArrayW<uint8_t, ::Array<uint8_t>*> inputPad;

  /// @brief Field ipadState, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ipadState, put = __cordl_internal_set_ipadState)) ::Org::BouncyCastle::Utilities::IMemoable* ipadState;

  /// @brief Field opadState, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_opadState, put = __cordl_internal_set_opadState)) ::Org::BouncyCastle::Utilities::IMemoable* opadState;

  /// @brief Field outputBuf, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_outputBuf, put = __cordl_internal_set_outputBuf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuf;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Method BlockUpdate, addr 0x2394e54, size 0xc4, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x2394f18, size 0x4a8, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetMacSize, addr 0x2394da0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetMacSize();

  /// @brief Method GetUnderlyingDigest, addr 0x2394820, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* GetUnderlyingDigest();

  /// @brief Method Init, addr 0x2394828, size 0x528, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Macs::HMac* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method Reset, addr 0x23953c0, size 0x120, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x2394da8, size 0xac, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  /// @brief Method XorPad, addr 0x2394d50, size 0x50, virtual false, abstract: false, final false
  static inline void XorPad(::ArrayW<uint8_t, ::Array<uint8_t>*> pad, int32_t len, uint8_t n);

  constexpr int32_t const& __cordl_internal_get_blockLength() const;

  constexpr int32_t& __cordl_internal_get_blockLength();

  constexpr ::Org::BouncyCastle::Crypto::IDigest* const& __cordl_internal_get_digest() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr int32_t const& __cordl_internal_get_digestSize() const;

  constexpr int32_t& __cordl_internal_get_digestSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_inputPad() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_inputPad();

  constexpr ::Org::BouncyCastle::Utilities::IMemoable* const& __cordl_internal_get_ipadState() const;

  constexpr ::Org::BouncyCastle::Utilities::IMemoable*& __cordl_internal_get_ipadState();

  constexpr ::Org::BouncyCastle::Utilities::IMemoable* const& __cordl_internal_get_opadState() const;

  constexpr ::Org::BouncyCastle::Utilities::IMemoable*& __cordl_internal_get_opadState();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_outputBuf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_outputBuf();

  constexpr void __cordl_internal_set_blockLength(int32_t value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_digestSize(int32_t value);

  constexpr void __cordl_internal_set_inputPad(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ipadState(::Org::BouncyCastle::Utilities::IMemoable* value);

  constexpr void __cordl_internal_set_opadState(::Org::BouncyCastle::Utilities::IMemoable* value);

  constexpr void __cordl_internal_set_outputBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x2394604, size 0x15c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName, addr 0x2394760, size 0xc0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMac();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMac(HMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMac(HMac const&) = delete;

  /// @brief Field IPAD offset 0xffffffff size 0x1
  static constexpr uint8_t IPAD{ static_cast<uint8_t>(0x36u) };

  /// @brief Field OPAD offset 0xffffffff size 0x1
  static constexpr uint8_t OPAD{ static_cast<uint8_t>(0x5cu) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 943 };

  /// @brief Field digest, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field digestSize, offset: 0x18, size: 0x4, def value: None
  int32_t ___digestSize;

  /// @brief Field blockLength, offset: 0x1c, size: 0x4, def value: None
  int32_t ___blockLength;

  /// @brief Field ipadState, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::IMemoable* ___ipadState;

  /// @brief Field opadState, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::IMemoable* ___opadState;

  /// @brief Field inputPad, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___inputPad;

  /// @brief Field outputBuf, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___outputBuf;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___digestSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___blockLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___ipadState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___opadState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___inputPad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___outputBuf) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::HMac, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::HMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::HMac*, "Org.BouncyCastle.Crypto.Macs", "HMac");
