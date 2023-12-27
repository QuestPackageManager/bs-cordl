#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SipHash)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class SipHash;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::SipHash);
// Type: Org.BouncyCastle.Crypto.Macs::SipHash
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(946))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::SipHash*
class CORDL_TYPE SipHash : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x4
  __declspec(property(get = __get_c, put = __set_c)) int32_t c;

  /// @brief Field d, offset 0x14, size 0x4
  __declspec(property(get = __get_d, put = __set_d)) int32_t d;

  /// @brief Field k0, offset 0x18, size 0x8
  __declspec(property(get = __get_k0, put = __set_k0)) int64_t k0;

  /// @brief Field k1, offset 0x20, size 0x8
  __declspec(property(get = __get_k1, put = __set_k1)) int64_t k1;

  /// @brief Field v0, offset 0x28, size 0x8
  __declspec(property(get = __get_v0, put = __set_v0)) int64_t v0;

  /// @brief Field v1, offset 0x30, size 0x8
  __declspec(property(get = __get_v1, put = __set_v1)) int64_t v1;

  /// @brief Field v2, offset 0x38, size 0x8
  __declspec(property(get = __get_v2, put = __set_v2)) int64_t v2;

  /// @brief Field v3, offset 0x40, size 0x8
  __declspec(property(get = __get_v3, put = __set_v3)) int64_t v3;

  /// @brief Field m, offset 0x48, size 0x8
  __declspec(property(get = __get_m, put = __set_m)) int64_t m;

  /// @brief Field wordPos, offset 0x50, size 0x4
  __declspec(property(get = __get_wordPos, put = __set_wordPos)) int32_t wordPos;

  /// @brief Field wordCount, offset 0x54, size 0x4
  __declspec(property(get = __get_wordCount, put = __set_wordCount)) int32_t wordCount;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr int32_t& __get_c();

  constexpr int32_t const& __get_c() const;

  constexpr void __set_c(int32_t value);

  constexpr int32_t& __get_d();

  constexpr int32_t const& __get_d() const;

  constexpr void __set_d(int32_t value);

  constexpr int64_t& __get_k0();

  constexpr int64_t const& __get_k0() const;

  constexpr void __set_k0(int64_t value);

  constexpr int64_t& __get_k1();

  constexpr int64_t const& __get_k1() const;

  constexpr void __set_k1(int64_t value);

  constexpr int64_t& __get_v0();

  constexpr int64_t const& __get_v0() const;

  constexpr void __set_v0(int64_t value);

  constexpr int64_t& __get_v1();

  constexpr int64_t const& __get_v1() const;

  constexpr void __set_v1(int64_t value);

  constexpr int64_t& __get_v2();

  constexpr int64_t const& __get_v2() const;

  constexpr void __set_v2(int64_t value);

  constexpr int64_t& __get_v3();

  constexpr int64_t const& __get_v3() const;

  constexpr void __set_v3(int64_t value);

  constexpr int64_t& __get_m();

  constexpr int64_t const& __get_m() const;

  constexpr void __set_m(int64_t value);

  constexpr int32_t& __get_wordPos();

  constexpr int32_t const& __get_wordPos() const;

  constexpr void __set_wordPos(int32_t value);

  constexpr int32_t& __get_wordCount();

  constexpr int32_t const& __get_wordCount() const;

  constexpr void __set_wordCount(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Macs::SipHash* New_ctor();

  /// @brief Method .ctor addr 0xf107e0 size 0x28 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Macs::SipHash* New_ctor(int32_t c, int32_t d);

  /// @brief Method .ctor addr 0xf10808 size 0x30 virtual false final false
  inline void _ctor(int32_t c, int32_t d);

  /// @brief Method get_AlgorithmName addr 0xf10838 size 0x194 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetMacSize addr 0xf109cc size 0x8 virtual true final false
  inline int32_t GetMacSize();

  /// @brief Method Init addr 0xf109d4 size 0x154 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Update addr 0xf10b28 size 0x44 virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xf10b6c size 0x1ac virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t offset, int32_t length);

  /// @brief Method DoFinal addr 0xf10d18 size 0x9c virtual true final false
  inline int64_t DoFinal();

  /// @brief Method DoFinal addr 0xf10db4 size 0x44 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xf10df8 size 0x64 virtual true final false
  inline void Reset();

  /// @brief Method ProcessMessageWord addr 0xf10e5c size 0x4c virtual true final false
  inline void ProcessMessageWord();

  /// @brief Method ApplySipRounds addr 0xf10ea8 size 0x4c virtual true final false
  inline void ApplySipRounds(int32_t n);

  /// @brief Method RotateLeft addr 0xf10ef4 size 0xc virtual false final false
  static inline int64_t RotateLeft(int64_t x, int32_t n);

  // Ctor Parameters [CppParam { name: "", ty: "SipHash", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SipHash(SipHash&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SipHash", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SipHash(SipHash const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SipHash();

public:
  /// @brief Field c, offset: 0x10, size: 0x4, def value: None
  int32_t ___c;

  /// @brief Field d, offset: 0x14, size: 0x4, def value: None
  int32_t ___d;

  /// @brief Field k0, offset: 0x18, size: 0x8, def value: None
  int64_t ___k0;

  /// @brief Field k1, offset: 0x20, size: 0x8, def value: None
  int64_t ___k1;

  /// @brief Field v0, offset: 0x28, size: 0x8, def value: None
  int64_t ___v0;

  /// @brief Field v1, offset: 0x30, size: 0x8, def value: None
  int64_t ___v1;

  /// @brief Field v2, offset: 0x38, size: 0x8, def value: None
  int64_t ___v2;

  /// @brief Field v3, offset: 0x40, size: 0x8, def value: None
  int64_t ___v3;

  /// @brief Field m, offset: 0x48, size: 0x8, def value: None
  int64_t ___m;

  /// @brief Field wordPos, offset: 0x50, size: 0x4, def value: None
  int32_t ___wordPos;

  /// @brief Field wordCount, offset: 0x54, size: 0x4, def value: None
  int32_t ___wordCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::SipHash, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::SipHash);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::SipHash*, "Org.BouncyCastle.Crypto.Macs", "SipHash");
