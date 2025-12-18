#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/Dstu7624Mac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dstu7624Mac)
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624Engine;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Dstu7624Mac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Macs.Dstu7624Mac
class CORDL_TYPE Dstu7624Mac : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field blockSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field buf, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field bufOff, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  /// @brief Field c, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::ArrayW<uint8_t, ::Array<uint8_t>*> c;

  /// @brief Field cTemp, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cTemp, put = __cordl_internal_set_cTemp)) ::ArrayW<uint8_t, ::Array<uint8_t>*> cTemp;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* engine;

  /// @brief Field kDelta, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_kDelta, put = __cordl_internal_set_kDelta)) ::ArrayW<uint8_t, ::Array<uint8_t>*> kDelta;

  /// @brief Field macSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Method BlockUpdate, addr 0x32ef160, size 0x140, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x32ef344, size 0x12c, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetMacSize, addr 0x32ef090, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method Init, addr 0x32eef18, size 0x134, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac* New_ctor(int32_t blockSizeBits, int32_t q);

  /// @brief Method Reset, addr 0x32ef470, size 0xdc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Update, addr 0x32ef098, size 0x80, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method Xor, addr 0x32ef2a0, size 0xa4, virtual false, abstract: false, final false
  inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> c, int32_t cOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> xorResult);

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_c() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_c();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_cTemp() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_cTemp();

  constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*& __cordl_internal_get_engine();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_kDelta() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_kDelta();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  constexpr void __cordl_internal_set_c(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_cTemp(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* value);

  constexpr void __cordl_internal_set_kDelta(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_macSize(int32_t value);

  /// @brief Method .ctor, addr 0x32eee20, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(int32_t blockSizeBits, int32_t q);

  /// @brief Method get_AlgorithmName, addr 0x32ef04c, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

  /// @brief Method processBlock, addr 0x32ef118, size 0x48, virtual false, abstract: false, final false
  inline void processBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7624Mac();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7624Mac(Dstu7624Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7624Mac(Dstu7624Mac const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 940 };

  /// @brief Field macSize, offset: 0x10, size: 0x4, def value: None
  int32_t ___macSize;

  /// @brief Field engine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* ___engine;

  /// @brief Field blockSize, offset: 0x20, size: 0x4, def value: None
  int32_t ___blockSize;

  /// @brief Field c, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___c;

  /// @brief Field cTemp, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___cTemp;

  /// @brief Field kDelta, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___kDelta;

  /// @brief Field buf, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field bufOff, offset: 0x48, size: 0x4, def value: None
  int32_t ___bufOff;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___macSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___engine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___blockSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___c) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___cTemp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___kDelta) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___buf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___bufOff) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*, "Org.BouncyCastle.Crypto.Macs", "Dstu7624Mac");
