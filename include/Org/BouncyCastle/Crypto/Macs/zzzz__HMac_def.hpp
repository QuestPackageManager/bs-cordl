#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMac)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class HMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::HMac);
// Type: Org.BouncyCastle.Crypto.Macs::HMac
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(943))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::HMac*
class CORDL_TYPE HMac : public ::System::Object {
public:
  // Declarations
  /// @brief Field digest, offset 0x10, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field digestSize, offset 0x18, size 0x4
  __declspec(property(get = __get_digestSize, put = __set_digestSize)) int32_t digestSize;

  /// @brief Field blockLength, offset 0x1c, size 0x4
  __declspec(property(get = __get_blockLength, put = __set_blockLength)) int32_t blockLength;

  /// @brief Field ipadState, offset 0x20, size 0x8
  __declspec(property(get = __get_ipadState, put = __set_ipadState))::Org::BouncyCastle::Utilities::IMemoable* ipadState;

  /// @brief Field opadState, offset 0x28, size 0x8
  __declspec(property(get = __get_opadState, put = __set_opadState))::Org::BouncyCastle::Utilities::IMemoable* opadState;

  /// @brief Field inputPad, offset 0x30, size 0x8
  __declspec(property(get = __get_inputPad, put = __set_inputPad))::ArrayW<uint8_t, ::Array<uint8_t>*> inputPad;

  /// @brief Field outputBuf, offset 0x38, size 0x8
  __declspec(property(get = __get_outputBuf, put = __set_outputBuf))::ArrayW<uint8_t, ::Array<uint8_t>*> outputBuf;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __get_digest() const;

  constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr int32_t& __get_digestSize();

  constexpr int32_t const& __get_digestSize() const;

  constexpr void __set_digestSize(int32_t value);

  constexpr int32_t& __get_blockLength();

  constexpr int32_t const& __get_blockLength() const;

  constexpr void __set_blockLength(int32_t value);

  constexpr ::Org::BouncyCastle::Utilities::IMemoable*& __get_ipadState();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::IMemoable*> const& __get_ipadState() const;

  constexpr void __set_ipadState(::Org::BouncyCastle::Utilities::IMemoable* value);

  constexpr ::Org::BouncyCastle::Utilities::IMemoable*& __get_opadState();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::IMemoable*> const& __get_opadState() const;

  constexpr void __set_opadState(::Org::BouncyCastle::Utilities::IMemoable* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_inputPad();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_inputPad() const;

  constexpr void __set_inputPad(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_outputBuf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_outputBuf() const;

  constexpr void __set_outputBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Macs::HMac* New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor addr 0xe98a98 size 0x15c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_AlgorithmName addr 0xe98bf4 size 0xc0 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetUnderlyingDigest addr 0xe98cb4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Crypto::IDigest* GetUnderlyingDigest();

  /// @brief Method Init addr 0xe98cbc size 0x528 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMacSize addr 0xe99234 size 0x8 virtual true final false
  inline int32_t GetMacSize();

  /// @brief Method Update addr 0xe9923c size 0xac virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xe992e8 size 0xc4 virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal addr 0xe993ac size 0x4a8 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xe99854 size 0x120 virtual true final false
  inline void Reset();

  /// @brief Method XorPad addr 0xe991e4 size 0x50 virtual false final false
  static inline void XorPad(::ArrayW<uint8_t, ::Array<uint8_t>*> pad, int32_t len, uint8_t n);

  // Ctor Parameters [CppParam { name: "", ty: "HMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HMac(HMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HMac(HMac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HMac();

public:
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

  /// @brief Field IPAD offset 0xffffffff size 0x1
  static constexpr uint8_t IPAD{ static_cast<uint8_t>(0x36u) };

  /// @brief Field OPAD offset 0xffffffff size 0x1
  static constexpr uint8_t OPAD{ static_cast<uint8_t>(0x5cu) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::HMac, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___digest) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___digestSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___blockLength) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___ipadState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___opadState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___inputPad) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::HMac, ___outputBuf) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::HMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::HMac*, "Org.BouncyCastle.Crypto.Macs", "HMac");
