#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ThreefishEngine)
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__Threefish1024Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__Threefish256Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__Threefish512Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__ThreefishCipher;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class ThreefishEngine;
}
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__Threefish1024Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__Threefish256Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__Threefish512Cipher;
}
namespace Org::BouncyCastle::Crypto::Engines {
class __ThreefishEngine__ThreefishCipher;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish1024Cipher);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish256Cipher);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish512Cipher);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher);
// Type: ::ThreefishCipher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(875))
// CS Name: ::ThreefishEngine::ThreefishCipher*
class CORDL_TYPE __ThreefishEngine__ThreefishCipher : public ::System::Object {
public:
  // Declarations
  /// @brief Field t, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::ArrayW<uint64_t, ::Array<uint64_t>*> t;

  /// @brief Field kw, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_kw, put = __cordl_internal_set_kw))::ArrayW<uint64_t, ::Array<uint64_t>*> kw;

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_t();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_t() const;

  constexpr void __cordl_internal_set_t(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_kw();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_kw() const;

  constexpr void __cordl_internal_set_kw(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method .ctor, addr 0xf16744, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method EncryptBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void EncryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> outWords);

  /// @brief Method DecryptBlock, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void DecryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> outWords);

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__ThreefishCipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreefishEngine__ThreefishCipher(__ThreefishEngine__ThreefishCipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__ThreefishCipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreefishEngine__ThreefishCipher(__ThreefishEngine__ThreefishCipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreefishEngine__ThreefishCipher();

public:
  /// @brief Field t, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___t;

  /// @brief Field kw, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___kw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher, ___t) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher, ___kw) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
// Type: ::Threefish256Cipher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(875))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(876))
// CS Name: ::ThreefishEngine::Threefish256Cipher*
class CORDL_TYPE __ThreefishEngine__Threefish256Cipher : public ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish256Cipher* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method .ctor, addr 0xf15ac0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method EncryptBlock, addr 0xf16770, size 0x3d4, virtual true, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> outWords);

  /// @brief Method DecryptBlock, addr 0xf16b44, size 0x434, virtual true, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> state);

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__Threefish256Cipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreefishEngine__Threefish256Cipher(__ThreefishEngine__Threefish256Cipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__Threefish256Cipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreefishEngine__Threefish256Cipher(__ThreefishEngine__Threefish256Cipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreefishEngine__Threefish256Cipher();

public:
  /// @brief Field ROTATION_0_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_0{ static_cast<int32_t>(0xe) };

  /// @brief Field ROTATION_0_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_1{ static_cast<int32_t>(0x10) };

  /// @brief Field ROTATION_1_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_0{ static_cast<int32_t>(0x34) };

  /// @brief Field ROTATION_1_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_1{ static_cast<int32_t>(0x39) };

  /// @brief Field ROTATION_2_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_0{ static_cast<int32_t>(0x17) };

  /// @brief Field ROTATION_2_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_1{ static_cast<int32_t>(0x28) };

  /// @brief Field ROTATION_3_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_0{ static_cast<int32_t>(0x5) };

  /// @brief Field ROTATION_3_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_1{ static_cast<int32_t>(0x25) };

  /// @brief Field ROTATION_4_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_0{ static_cast<int32_t>(0x19) };

  /// @brief Field ROTATION_4_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_1{ static_cast<int32_t>(0x21) };

  /// @brief Field ROTATION_5_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_0{ static_cast<int32_t>(0x2e) };

  /// @brief Field ROTATION_5_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_1{ static_cast<int32_t>(0xc) };

  /// @brief Field ROTATION_6_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_0{ static_cast<int32_t>(0x3a) };

  /// @brief Field ROTATION_6_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_1{ static_cast<int32_t>(0x16) };

  /// @brief Field ROTATION_7_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_0{ static_cast<int32_t>(0x20) };

  /// @brief Field ROTATION_7_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_1{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish256Cipher, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
// Type: ::Threefish512Cipher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(875))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(877))
// CS Name: ::ThreefishEngine::Threefish512Cipher*
class CORDL_TYPE __ThreefishEngine__Threefish512Cipher : public ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish512Cipher* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method .ctor, addr 0xf15aec, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method EncryptBlock, addr 0xf16f78, size 0x584, virtual true, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> outWords);

  /// @brief Method DecryptBlock, addr 0xf174fc, size 0x6b0, virtual true, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> state);

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__Threefish512Cipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreefishEngine__Threefish512Cipher(__ThreefishEngine__Threefish512Cipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__Threefish512Cipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreefishEngine__Threefish512Cipher(__ThreefishEngine__Threefish512Cipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreefishEngine__Threefish512Cipher();

public:
  /// @brief Field ROTATION_0_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_0{ static_cast<int32_t>(0x2e) };

  /// @brief Field ROTATION_0_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_1{ static_cast<int32_t>(0x24) };

  /// @brief Field ROTATION_0_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_2{ static_cast<int32_t>(0x13) };

  /// @brief Field ROTATION_0_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_3{ static_cast<int32_t>(0x25) };

  /// @brief Field ROTATION_1_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_0{ static_cast<int32_t>(0x21) };

  /// @brief Field ROTATION_1_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_1{ static_cast<int32_t>(0x1b) };

  /// @brief Field ROTATION_1_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_2{ static_cast<int32_t>(0xe) };

  /// @brief Field ROTATION_1_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_3{ static_cast<int32_t>(0x2a) };

  /// @brief Field ROTATION_2_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_0{ static_cast<int32_t>(0x11) };

  /// @brief Field ROTATION_2_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_1{ static_cast<int32_t>(0x31) };

  /// @brief Field ROTATION_2_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_2{ static_cast<int32_t>(0x24) };

  /// @brief Field ROTATION_2_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_3{ static_cast<int32_t>(0x27) };

  /// @brief Field ROTATION_3_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_0{ static_cast<int32_t>(0x2c) };

  /// @brief Field ROTATION_3_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_1{ static_cast<int32_t>(0x9) };

  /// @brief Field ROTATION_3_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_2{ static_cast<int32_t>(0x36) };

  /// @brief Field ROTATION_3_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_3{ static_cast<int32_t>(0x38) };

  /// @brief Field ROTATION_4_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_0{ static_cast<int32_t>(0x27) };

  /// @brief Field ROTATION_4_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_1{ static_cast<int32_t>(0x1e) };

  /// @brief Field ROTATION_4_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_2{ static_cast<int32_t>(0x22) };

  /// @brief Field ROTATION_4_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_3{ static_cast<int32_t>(0x18) };

  /// @brief Field ROTATION_5_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_0{ static_cast<int32_t>(0xd) };

  /// @brief Field ROTATION_5_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_1{ static_cast<int32_t>(0x32) };

  /// @brief Field ROTATION_5_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_2{ static_cast<int32_t>(0xa) };

  /// @brief Field ROTATION_5_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_3{ static_cast<int32_t>(0x11) };

  /// @brief Field ROTATION_6_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_0{ static_cast<int32_t>(0x19) };

  /// @brief Field ROTATION_6_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_1{ static_cast<int32_t>(0x1d) };

  /// @brief Field ROTATION_6_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_2{ static_cast<int32_t>(0x27) };

  /// @brief Field ROTATION_6_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_3{ static_cast<int32_t>(0x2b) };

  /// @brief Field ROTATION_7_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_0{ static_cast<int32_t>(0x8) };

  /// @brief Field ROTATION_7_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_1{ static_cast<int32_t>(0x23) };

  /// @brief Field ROTATION_7_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_2{ static_cast<int32_t>(0x38) };

  /// @brief Field ROTATION_7_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_3{ static_cast<int32_t>(0x16) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish512Cipher, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
// Type: ::Threefish1024Cipher
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(875))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(878))
// CS Name: ::ThreefishEngine::Threefish1024Cipher*
class CORDL_TYPE __ThreefishEngine__Threefish1024Cipher : public ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish1024Cipher* New_ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method .ctor, addr 0xf15b18, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint64_t, ::Array<uint64_t>*> kw, ::ArrayW<uint64_t, ::Array<uint64_t>*> t);

  /// @brief Method EncryptBlock, addr 0xf17bac, size 0x99c, virtual true, abstract: false, final false
  inline void EncryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> outWords);

  /// @brief Method DecryptBlock, addr 0xf18548, size 0xbe4, virtual true, abstract: false, final false
  inline void DecryptBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> block, ::ArrayW<uint64_t, ::Array<uint64_t>*> state);

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__Threefish1024Cipher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ThreefishEngine__Threefish1024Cipher(__ThreefishEngine__Threefish1024Cipher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ThreefishEngine__Threefish1024Cipher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ThreefishEngine__Threefish1024Cipher(__ThreefishEngine__Threefish1024Cipher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ThreefishEngine__Threefish1024Cipher();

public:
  /// @brief Field ROTATION_0_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_0{ static_cast<int32_t>(0x18) };

  /// @brief Field ROTATION_0_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_1{ static_cast<int32_t>(0xd) };

  /// @brief Field ROTATION_0_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_2{ static_cast<int32_t>(0x8) };

  /// @brief Field ROTATION_0_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_3{ static_cast<int32_t>(0x2f) };

  /// @brief Field ROTATION_0_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_4{ static_cast<int32_t>(0x8) };

  /// @brief Field ROTATION_0_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_5{ static_cast<int32_t>(0x11) };

  /// @brief Field ROTATION_0_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_6{ static_cast<int32_t>(0x16) };

  /// @brief Field ROTATION_0_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_0_7{ static_cast<int32_t>(0x25) };

  /// @brief Field ROTATION_1_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_0{ static_cast<int32_t>(0x26) };

  /// @brief Field ROTATION_1_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_1{ static_cast<int32_t>(0x13) };

  /// @brief Field ROTATION_1_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_2{ static_cast<int32_t>(0xa) };

  /// @brief Field ROTATION_1_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_3{ static_cast<int32_t>(0x37) };

  /// @brief Field ROTATION_1_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_4{ static_cast<int32_t>(0x31) };

  /// @brief Field ROTATION_1_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_5{ static_cast<int32_t>(0x12) };

  /// @brief Field ROTATION_1_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_6{ static_cast<int32_t>(0x17) };

  /// @brief Field ROTATION_1_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_1_7{ static_cast<int32_t>(0x34) };

  /// @brief Field ROTATION_2_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_0{ static_cast<int32_t>(0x21) };

  /// @brief Field ROTATION_2_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_1{ static_cast<int32_t>(0x4) };

  /// @brief Field ROTATION_2_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_2{ static_cast<int32_t>(0x33) };

  /// @brief Field ROTATION_2_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_3{ static_cast<int32_t>(0xd) };

  /// @brief Field ROTATION_2_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_4{ static_cast<int32_t>(0x22) };

  /// @brief Field ROTATION_2_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_5{ static_cast<int32_t>(0x29) };

  /// @brief Field ROTATION_2_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_6{ static_cast<int32_t>(0x3b) };

  /// @brief Field ROTATION_2_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_2_7{ static_cast<int32_t>(0x11) };

  /// @brief Field ROTATION_3_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_0{ static_cast<int32_t>(0x5) };

  /// @brief Field ROTATION_3_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_1{ static_cast<int32_t>(0x14) };

  /// @brief Field ROTATION_3_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_2{ static_cast<int32_t>(0x30) };

  /// @brief Field ROTATION_3_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_3{ static_cast<int32_t>(0x29) };

  /// @brief Field ROTATION_3_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_4{ static_cast<int32_t>(0x2f) };

  /// @brief Field ROTATION_3_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_5{ static_cast<int32_t>(0x1c) };

  /// @brief Field ROTATION_3_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_6{ static_cast<int32_t>(0x10) };

  /// @brief Field ROTATION_3_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_3_7{ static_cast<int32_t>(0x19) };

  /// @brief Field ROTATION_4_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_0{ static_cast<int32_t>(0x29) };

  /// @brief Field ROTATION_4_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_1{ static_cast<int32_t>(0x9) };

  /// @brief Field ROTATION_4_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_2{ static_cast<int32_t>(0x25) };

  /// @brief Field ROTATION_4_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_3{ static_cast<int32_t>(0x1f) };

  /// @brief Field ROTATION_4_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_4{ static_cast<int32_t>(0xc) };

  /// @brief Field ROTATION_4_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_5{ static_cast<int32_t>(0x2f) };

  /// @brief Field ROTATION_4_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_6{ static_cast<int32_t>(0x2c) };

  /// @brief Field ROTATION_4_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_4_7{ static_cast<int32_t>(0x1e) };

  /// @brief Field ROTATION_5_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_0{ static_cast<int32_t>(0x10) };

  /// @brief Field ROTATION_5_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_1{ static_cast<int32_t>(0x22) };

  /// @brief Field ROTATION_5_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_2{ static_cast<int32_t>(0x38) };

  /// @brief Field ROTATION_5_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_3{ static_cast<int32_t>(0x33) };

  /// @brief Field ROTATION_5_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_4{ static_cast<int32_t>(0x4) };

  /// @brief Field ROTATION_5_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_5{ static_cast<int32_t>(0x35) };

  /// @brief Field ROTATION_5_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_6{ static_cast<int32_t>(0x2a) };

  /// @brief Field ROTATION_5_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_5_7{ static_cast<int32_t>(0x29) };

  /// @brief Field ROTATION_6_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_0{ static_cast<int32_t>(0x1f) };

  /// @brief Field ROTATION_6_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_1{ static_cast<int32_t>(0x2c) };

  /// @brief Field ROTATION_6_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_2{ static_cast<int32_t>(0x2f) };

  /// @brief Field ROTATION_6_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_3{ static_cast<int32_t>(0x2e) };

  /// @brief Field ROTATION_6_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_4{ static_cast<int32_t>(0x13) };

  /// @brief Field ROTATION_6_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_5{ static_cast<int32_t>(0x2a) };

  /// @brief Field ROTATION_6_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_6{ static_cast<int32_t>(0x2c) };

  /// @brief Field ROTATION_6_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_6_7{ static_cast<int32_t>(0x19) };

  /// @brief Field ROTATION_7_0 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_0{ static_cast<int32_t>(0x9) };

  /// @brief Field ROTATION_7_1 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_1{ static_cast<int32_t>(0x30) };

  /// @brief Field ROTATION_7_2 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_2{ static_cast<int32_t>(0x23) };

  /// @brief Field ROTATION_7_3 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_3{ static_cast<int32_t>(0x34) };

  /// @brief Field ROTATION_7_4 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_4{ static_cast<int32_t>(0x17) };

  /// @brief Field ROTATION_7_5 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_5{ static_cast<int32_t>(0x1f) };

  /// @brief Field ROTATION_7_6 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_6{ static_cast<int32_t>(0x25) };

  /// @brief Field ROTATION_7_7 offset 0xffffffff size 0x4
  static constexpr int32_t ROTATION_7_7{ static_cast<int32_t>(0x14) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish1024Cipher, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
// Type: Org.BouncyCastle.Crypto.Engines::ThreefishEngine
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(879))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::ThreefishEngine*
class CORDL_TYPE ThreefishEngine : public ::System::Object {
public:
  // Declarations
  using Threefish1024Cipher = ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish1024Cipher;

  using Threefish512Cipher = ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish512Cipher;

  using Threefish256Cipher = ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish256Cipher;

  using ThreefishCipher = ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher;

  /// @brief Field blocksizeBytes, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_blocksizeBytes, put = __cordl_internal_set_blocksizeBytes)) int32_t blocksizeBytes;

  /// @brief Field blocksizeWords, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_blocksizeWords, put = __cordl_internal_set_blocksizeWords)) int32_t blocksizeWords;

  /// @brief Field currentBlock, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_currentBlock, put = __cordl_internal_set_currentBlock))::ArrayW<uint64_t, ::Array<uint64_t>*> currentBlock;

  /// @brief Field t, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::ArrayW<uint64_t, ::Array<uint64_t>*> t;

  /// @brief Field kw, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_kw, put = __cordl_internal_set_kw))::ArrayW<uint64_t, ::Array<uint64_t>*> kw;

  /// @brief Field cipher, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher))::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher* cipher;

  /// @brief Field forEncryption, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field MOD9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MOD9, put = setStaticF_MOD9))::ArrayW<int32_t, ::Array<int32_t>*> MOD9;

  /// @brief Field MOD17, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MOD17, put = setStaticF_MOD17))::ArrayW<int32_t, ::Array<int32_t>*> MOD17;

  /// @brief Field MOD5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MOD5, put = setStaticF_MOD5))::ArrayW<int32_t, ::Array<int32_t>*> MOD5;

  /// @brief Field MOD3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_MOD3, put = setStaticF_MOD3))::ArrayW<int32_t, ::Array<int32_t>*> MOD3;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  constexpr int32_t& __cordl_internal_get_blocksizeBytes();

  constexpr int32_t const& __cordl_internal_get_blocksizeBytes() const;

  constexpr void __cordl_internal_set_blocksizeBytes(int32_t value);

  constexpr int32_t& __cordl_internal_get_blocksizeWords();

  constexpr int32_t const& __cordl_internal_get_blocksizeWords() const;

  constexpr void __cordl_internal_set_blocksizeWords(int32_t value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_currentBlock();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_currentBlock() const;

  constexpr void __cordl_internal_set_currentBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_t();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_t() const;

  constexpr void __cordl_internal_set_t(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*>& __cordl_internal_get_kw();

  constexpr ::ArrayW<uint64_t, ::Array<uint64_t>*> const& __cordl_internal_get_kw() const;

  constexpr void __cordl_internal_set_kw(::ArrayW<uint64_t, ::Array<uint64_t>*> value);

  constexpr ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher*& __cordl_internal_get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher*> const& __cordl_internal_get_cipher() const;

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher* value);

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr void __cordl_internal_set_forEncryption(bool value);

  static inline void setStaticF_MOD9(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_MOD9();

  static inline void setStaticF_MOD17(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_MOD17();

  static inline void setStaticF_MOD5(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_MOD5();

  static inline void setStaticF_MOD3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_MOD3();

  static inline ::Org::BouncyCastle::Crypto::Engines::ThreefishEngine* New_ctor(int32_t blocksizeBits);

  /// @brief Method .ctor, addr 0xf15940, size 0x180, virtual false, abstract: false, final false
  inline void _ctor(int32_t blocksizeBits);

  /// @brief Method Init, addr 0xf15b44, size 0x340, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Init, addr 0xf15f84, size 0x4c, virtual false, abstract: false, final false
  inline void Init(bool forEncryption, ::ArrayW<uint64_t, ::Array<uint64_t>*> key, ::ArrayW<uint64_t, ::Array<uint64_t>*> tweak);

  /// @brief Method SetKey, addr 0xf15fd0, size 0x164, virtual false, abstract: false, final false
  inline void SetKey(::ArrayW<uint64_t, ::Array<uint64_t>*> key);

  /// @brief Method SetTweak, addr 0xf16134, size 0x11c, virtual false, abstract: false, final false
  inline void SetTweak(::ArrayW<uint64_t, ::Array<uint64_t>*> tweak);

  /// @brief Method get_AlgorithmName, addr 0xf16250, size 0x88, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0xf162d8, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize, addr 0xf162e0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Reset, addr 0xf162e8, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ProcessBlock, addr 0xf162ec, size 0x1d8, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method ProcessBlock, addr 0xf164c4, size 0x12c, virtual false, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint64_t, ::Array<uint64_t>*> inWords, ::ArrayW<uint64_t, ::Array<uint64_t>*> outWords);

  /// @brief Method BytesToWord, addr 0xf15e84, size 0x100, virtual false, abstract: false, final false
  static inline uint64_t BytesToWord(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  /// @brief Method WordToBytes, addr 0xf165f0, size 0x138, virtual false, abstract: false, final false
  static inline void WordToBytes(uint64_t word, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t off);

  /// @brief Method RotlXor, addr 0xf16728, size 0x10, virtual false, abstract: false, final false
  static inline uint64_t RotlXor(uint64_t x, int32_t n, uint64_t _cordl_xor);

  /// @brief Method XorRotr, addr 0xf16738, size 0xc, virtual false, abstract: false, final false
  static inline uint64_t XorRotr(uint64_t x, int32_t n, uint64_t _cordl_xor);

  // Ctor Parameters [CppParam { name: "", ty: "ThreefishEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ThreefishEngine(ThreefishEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ThreefishEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ThreefishEngine(ThreefishEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ThreefishEngine();

public:
  /// @brief Field blocksizeBytes, offset: 0x10, size: 0x4, def value: None
  int32_t ___blocksizeBytes;

  /// @brief Field blocksizeWords, offset: 0x14, size: 0x4, def value: None
  int32_t ___blocksizeWords;

  /// @brief Field currentBlock, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___currentBlock;

  /// @brief Field t, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___t;

  /// @brief Field kw, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint64_t, ::Array<uint64_t>*> ___kw;

  /// @brief Field cipher, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher* ___cipher;

  /// @brief Field forEncryption, offset: 0x38, size: 0x1, def value: None
  bool ___forEncryption;

  /// @brief Field BLOCKSIZE_256 offset 0xffffffff size 0x4
  static constexpr int32_t BLOCKSIZE_256{ static_cast<int32_t>(0x100) };

  /// @brief Field BLOCKSIZE_512 offset 0xffffffff size 0x4
  static constexpr int32_t BLOCKSIZE_512{ static_cast<int32_t>(0x200) };

  /// @brief Field BLOCKSIZE_1024 offset 0xffffffff size 0x4
  static constexpr int32_t BLOCKSIZE_1024{ static_cast<int32_t>(0x400) };

  /// @brief Field TWEAK_SIZE_BYTES offset 0xffffffff size 0x4
  static constexpr int32_t TWEAK_SIZE_BYTES{ static_cast<int32_t>(0x10) };

  /// @brief Field TWEAK_SIZE_WORDS offset 0xffffffff size 0x4
  static constexpr int32_t TWEAK_SIZE_WORDS{ static_cast<int32_t>(0x2) };

  /// @brief Field ROUNDS_256 offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS_256{ static_cast<int32_t>(0x48) };

  /// @brief Field ROUNDS_512 offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS_512{ static_cast<int32_t>(0x48) };

  /// @brief Field ROUNDS_1024 offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS_1024{ static_cast<int32_t>(0x50) };

  /// @brief Field MAX_ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t MAX_ROUNDS{ static_cast<int32_t>(0x50) };

  /// @brief Field C_240 offset 0xffffffff size 0x8
  static constexpr uint64_t C_240{ static_cast<uint64_t>(0x1bd11bdaa9fc1a22u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, ___blocksizeBytes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, ___blocksizeWords) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, ___currentBlock) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, ___t) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, ___kw) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, ___cipher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine, ___forEncryption) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::ThreefishEngine*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish1024Cipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish1024Cipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish1024Cipher");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish256Cipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish256Cipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish256Cipher");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish512Cipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__Threefish512Cipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/Threefish512Cipher");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::__ThreefishEngine__ThreefishCipher*, "Org.BouncyCastle.Crypto.Engines", "ThreefishEngine/ThreefishCipher");
