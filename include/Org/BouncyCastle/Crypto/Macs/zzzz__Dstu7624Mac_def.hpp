#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Macs::Dstu7624Mac
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(940))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::Dstu7624Mac*
class CORDL_TYPE Dstu7624Mac : public ::System::Object {
public:
  // Declarations
  /// @brief Field macSize, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_macSize, put = __cordl_internal_set_macSize)) int32_t macSize;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine))::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* engine;

  /// @brief Field blockSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field c, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c))::ArrayW<uint8_t, ::Array<uint8_t>*> c;

  /// @brief Field cTemp, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cTemp, put = __cordl_internal_set_cTemp))::ArrayW<uint8_t, ::Array<uint8_t>*> cTemp;

  /// @brief Field kDelta, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_kDelta, put = __cordl_internal_set_kDelta))::ArrayW<uint8_t, ::Array<uint8_t>*> kDelta;

  /// @brief Field buf, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field bufOff, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_bufOff, put = __cordl_internal_set_bufOff)) int32_t bufOff;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

  constexpr int32_t& __cordl_internal_get_macSize();

  constexpr int32_t const& __cordl_internal_get_macSize() const;

  constexpr void __cordl_internal_set_macSize(int32_t value);

  constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*& __cordl_internal_get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*> const& __cordl_internal_get_engine() const;

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* value);

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_c();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_c() const;

  constexpr void __cordl_internal_set_c(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_cTemp();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_cTemp() const;

  constexpr void __cordl_internal_set_cTemp(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_kDelta();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_kDelta() const;

  constexpr void __cordl_internal_set_kDelta(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_bufOff();

  constexpr int32_t const& __cordl_internal_get_bufOff() const;

  constexpr void __cordl_internal_set_bufOff(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac* New_ctor(int32_t blockSizeBits, int32_t q);

  /// @brief Method .ctor, addr 0xf38320, size 0xf8, virtual false, abstract: false, final false
  inline void _ctor(int32_t blockSizeBits, int32_t q);

  /// @brief Method Init, addr 0xf38418, size 0x130, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xf38548, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetMacSize, addr 0xf38588, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method Update, addr 0xf38590, size 0x80, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xf38658, size 0x140, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method processBlock, addr 0xf38610, size 0x48, virtual false, abstract: false, final false
  inline void processBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method Xor, addr 0xf38798, size 0x90, virtual false, abstract: false, final false
  inline void Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> c, int32_t cOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> xorResult);

  /// @brief Method DoFinal, addr 0xf38828, size 0x134, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf3895c, size 0xd8, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7624Mac(Dstu7624Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7624Mac(Dstu7624Mac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7624Mac();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___macSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___engine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___blockSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___c) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___cTemp) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___kDelta) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___buf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac, ___bufOff) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*, "Org.BouncyCastle.Crypto.Macs", "Dstu7624Mac");
