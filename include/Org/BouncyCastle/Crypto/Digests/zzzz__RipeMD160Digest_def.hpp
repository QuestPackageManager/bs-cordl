#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__GeneralDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RipeMD160Digest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class RipeMD160Digest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest);
// Type: Org.BouncyCastle.Crypto.Digests::RipeMD160Digest
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(750))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(763))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::RipeMD160Digest*
class CORDL_TYPE RipeMD160Digest : public ::Org::BouncyCastle::Crypto::Digests::GeneralDigest {
public:
  // Declarations
  /// @brief Field H0, offset 0x28, size 0x4
  __declspec(property(get = __get_H0, put = __set_H0)) int32_t H0;

  /// @brief Field H1, offset 0x2c, size 0x4
  __declspec(property(get = __get_H1, put = __set_H1)) int32_t H1;

  /// @brief Field H2, offset 0x30, size 0x4
  __declspec(property(get = __get_H2, put = __set_H2)) int32_t H2;

  /// @brief Field H3, offset 0x34, size 0x4
  __declspec(property(get = __get_H3, put = __set_H3)) int32_t H3;

  /// @brief Field H4, offset 0x38, size 0x4
  __declspec(property(get = __get_H4, put = __set_H4)) int32_t H4;

  /// @brief Field X, offset 0x40, size 0x8
  __declspec(property(get = __get_X, put = __set_X))::ArrayW<int32_t, ::Array<int32_t>*> X;

  /// @brief Field xOff, offset 0x48, size 0x4
  __declspec(property(get = __get_xOff, put = __set_xOff)) int32_t xOff;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  constexpr int32_t& __get_H0();

  constexpr int32_t const& __get_H0() const;

  constexpr void __set_H0(int32_t value);

  constexpr int32_t& __get_H1();

  constexpr int32_t const& __get_H1() const;

  constexpr void __set_H1(int32_t value);

  constexpr int32_t& __get_H2();

  constexpr int32_t const& __get_H2() const;

  constexpr void __set_H2(int32_t value);

  constexpr int32_t& __get_H3();

  constexpr int32_t const& __get_H3() const;

  constexpr void __set_H3(int32_t value);

  constexpr int32_t& __get_H4();

  constexpr int32_t const& __get_H4() const;

  constexpr void __set_H4(int32_t value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_X();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_X() const;

  constexpr void __set_X(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get_xOff();

  constexpr int32_t const& __get_xOff() const;

  constexpr void __set_xOff(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest* New_ctor();

  /// @brief Method .ctor addr 0x122b4bc size 0x6c virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest* New_ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest* t);

  /// @brief Method .ctor addr 0x122b528 size 0x74 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest* t);

  /// @brief Method CopyIn addr 0x122b59c size 0x64 virtual false final false
  inline void CopyIn(::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest* t);

  /// @brief Method get_AlgorithmName addr 0x122b600 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetDigestSize addr 0x122b640 size 0x8 virtual true final false
  inline int32_t GetDigestSize();

  /// @brief Method ProcessWord addr 0x122b648 size 0xbc virtual true final false
  inline void ProcessWord(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method ProcessLength addr 0x122b704 size 0x6c virtual true final false
  inline void ProcessLength(int64_t bitLength);

  /// @brief Method UnpackWord addr 0x122b770 size 0x80 virtual false final false
  inline void UnpackWord(int32_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method DoFinal addr 0x122b7f0 size 0x90 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0x122b880 size 0x6c virtual true final false
  inline void Reset();

  /// @brief Method RL addr 0x122b8ec size 0xc virtual false final false
  inline int32_t RL(int32_t x, int32_t n);

  /// @brief Method F1 addr 0x122b8f8 size 0xc virtual false final false
  inline int32_t F1(int32_t x, int32_t y, int32_t z);

  /// @brief Method F2 addr 0x122b904 size 0x10 virtual false final false
  inline int32_t F2(int32_t x, int32_t y, int32_t z);

  /// @brief Method F3 addr 0x122b914 size 0xc virtual false final false
  inline int32_t F3(int32_t x, int32_t y, int32_t z);

  /// @brief Method F4 addr 0x122b920 size 0x10 virtual false final false
  inline int32_t F4(int32_t x, int32_t y, int32_t z);

  /// @brief Method F5 addr 0x122b930 size 0xc virtual false final false
  inline int32_t F5(int32_t x, int32_t y, int32_t z);

  /// @brief Method ProcessBlock addr 0x122b93c size 0x1780 virtual true final false
  inline void ProcessBlock();

  /// @brief Method Copy addr 0x122d0bc size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method Reset addr 0x122d11c size 0x84 virtual true final false
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  // Ctor Parameters [CppParam { name: "", ty: "RipeMD160Digest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RipeMD160Digest(RipeMD160Digest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RipeMD160Digest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RipeMD160Digest(RipeMD160Digest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RipeMD160Digest();

public:
  /// @brief Field H0, offset: 0x28, size: 0x4, def value: None
  int32_t ___H0;

  /// @brief Field H1, offset: 0x2c, size: 0x4, def value: None
  int32_t ___H1;

  /// @brief Field H2, offset: 0x30, size: 0x4, def value: None
  int32_t ___H2;

  /// @brief Field H3, offset: 0x34, size: 0x4, def value: None
  int32_t ___H3;

  /// @brief Field H4, offset: 0x38, size: 0x4, def value: None
  int32_t ___H4;

  /// @brief Field X, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___X;

  /// @brief Field xOff, offset: 0x48, size: 0x4, def value: None
  int32_t ___xOff;

  /// @brief Field DigestLength offset 0xffffffff size 0x4
  static constexpr int32_t DigestLength{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::RipeMD160Digest*, "Org.BouncyCastle.Crypto.Digests", "RipeMD160Digest");
