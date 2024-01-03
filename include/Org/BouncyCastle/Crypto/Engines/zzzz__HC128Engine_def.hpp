#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HC128Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class HC128Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::HC128Engine);
// Type: Org.BouncyCastle.Crypto.Engines::HC128Engine
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(846))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::HC128Engine*
class CORDL_TYPE HC128Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __get_p, put = __set_p))::ArrayW<uint32_t, ::Array<uint32_t>*> p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __get_q, put = __set_q))::ArrayW<uint32_t, ::Array<uint32_t>*> q;

  /// @brief Field cnt, offset 0x20, size 0x4
  __declspec(property(get = __get_cnt, put = __set_cnt)) uint32_t cnt;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field iv, offset 0x30, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field initialised, offset 0x38, size 0x1
  __declspec(property(get = __get_initialised, put = __set_initialised)) bool initialised;

  /// @brief Field buf, offset 0x40, size 0x8
  __declspec(property(get = __get_buf, put = __set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field idx, offset 0x48, size 0x4
  __declspec(property(get = __get_idx, put = __set_idx)) int32_t idx;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_p();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_p() const;

  constexpr void __set_p(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_q();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_q() const;

  constexpr void __set_q(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr uint32_t& __get_cnt();

  constexpr uint32_t const& __get_cnt() const;

  constexpr void __set_cnt(uint32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_key();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_key() const;

  constexpr void __set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_iv() const;

  constexpr void __set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_initialised();

  constexpr bool const& __get_initialised() const;

  constexpr void __set_initialised(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf() const;

  constexpr void __set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_idx();

  constexpr int32_t const& __get_idx() const;

  constexpr void __set_idx(int32_t value);

  /// @brief Method F1, addr 0xed2098, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t F1(uint32_t x);

  /// @brief Method F2, addr 0xed20b0, size 0x10, virtual false, abstract: false, final false
  static inline uint32_t F2(uint32_t x);

  /// @brief Method G1, addr 0xed20c0, size 0x14, virtual false, abstract: false, final false
  inline uint32_t G1(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method G2, addr 0xed20d4, size 0x14, virtual false, abstract: false, final false
  inline uint32_t G2(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method RotateLeft, addr 0xed20e8, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t RotateLeft(uint32_t x, int32_t bits);

  /// @brief Method RotateRight, addr 0xed20a8, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t RotateRight(uint32_t x, int32_t bits);

  /// @brief Method H1, addr 0xed20f4, size 0x4c, virtual false, abstract: false, final false
  inline uint32_t H1(uint32_t x);

  /// @brief Method H2, addr 0xed2140, size 0x4c, virtual false, abstract: false, final false
  inline uint32_t H2(uint32_t x);

  /// @brief Method Mod1024, addr 0xed218c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t Mod1024(uint32_t x);

  /// @brief Method Mod512, addr 0xed2194, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t Mod512(uint32_t x);

  /// @brief Method Dim, addr 0xed219c, size 0xc, virtual false, abstract: false, final false
  static inline uint32_t Dim(uint32_t x, uint32_t y);

  /// @brief Method Step, addr 0xed21a8, size 0x1a8, virtual false, abstract: false, final false
  inline uint32_t Step();

  /// @brief Method Init, addr 0xed2350, size 0x300, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method get_AlgorithmName, addr 0xed2650, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xed2690, size 0x1d4, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetByte, addr 0xed2864, size 0x60, virtual false, abstract: false, final false
  inline uint8_t GetByte();

  /// @brief Method ProcessBytes, addr 0xed28c4, size 0x19c, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xed2a60, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnByte, addr 0xed2a64, size 0x18, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  static inline ::Org::BouncyCastle::Crypto::Engines::HC128Engine* New_ctor();

  /// @brief Method .ctor, addr 0xed2a7c, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HC128Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HC128Engine(HC128Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HC128Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HC128Engine(HC128Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HC128Engine();

public:
  /// @brief Field p, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___p;

  /// @brief Field q, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___q;

  /// @brief Field cnt, offset: 0x20, size: 0x4, def value: None
  uint32_t ___cnt;

  /// @brief Field key, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___key;

  /// @brief Field iv, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field initialised, offset: 0x38, size: 0x1, def value: None
  bool ___initialised;

  /// @brief Field buf, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field idx, offset: 0x48, size: 0x4, def value: None
  int32_t ___idx;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::HC128Engine, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___cnt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___key) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___iv) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___initialised) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___buf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC128Engine, ___idx) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::HC128Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::HC128Engine*, "Org.BouncyCastle.Crypto.Engines", "HC128Engine");
