#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HC256Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class HC256Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::HC256Engine);
// Type: Org.BouncyCastle.Crypto.Engines::HC256Engine
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(847))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::HC256Engine*
class CORDL_TYPE HC256Engine : public ::System::Object {
public:
  // Declarations
  /// @brief Field p, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_p, put = __cordl_internal_set_p))::ArrayW<uint32_t, ::Array<uint32_t>*> p;

  /// @brief Field q, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_q, put = __cordl_internal_set_q))::ArrayW<uint32_t, ::Array<uint32_t>*> q;

  /// @brief Field cnt, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_cnt, put = __cordl_internal_set_cnt)) uint32_t cnt;

  /// @brief Field key, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_key, put = __cordl_internal_set_key))::ArrayW<uint8_t, ::Array<uint8_t>*> key;

  /// @brief Field iv, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field initialised, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_initialised, put = __cordl_internal_set_initialised)) bool initialised;

  /// @brief Field buf, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_buf, put = __cordl_internal_set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field idx, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_idx, put = __cordl_internal_set_idx)) int32_t idx;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_p();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_p() const;

  constexpr void __cordl_internal_set_p(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_q();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_q() const;

  constexpr void __cordl_internal_set_q(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr uint32_t& __cordl_internal_get_cnt();

  constexpr uint32_t const& __cordl_internal_get_cnt() const;

  constexpr void __cordl_internal_set_cnt(uint32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_key();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_key() const;

  constexpr void __cordl_internal_set_key(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_iv() const;

  constexpr void __cordl_internal_set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __cordl_internal_get_initialised();

  constexpr bool const& __cordl_internal_get_initialised() const;

  constexpr void __cordl_internal_set_initialised(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buf() const;

  constexpr void __cordl_internal_set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __cordl_internal_get_idx();

  constexpr int32_t const& __cordl_internal_get_idx() const;

  constexpr void __cordl_internal_set_idx(int32_t value);

  /// @brief Method Step, addr 0xefe9a8, size 0x274, virtual false, abstract: false, final false
  inline uint32_t Step();

  /// @brief Method Init, addr 0xefec24, size 0x384, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method get_AlgorithmName, addr 0xefefa8, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xefefe8, size 0x1d4, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetByte, addr 0xeff1bc, size 0x60, virtual false, abstract: false, final false
  inline uint8_t GetByte();

  /// @brief Method ProcessBytes, addr 0xeff21c, size 0x19c, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xeff3b8, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnByte, addr 0xeff3bc, size 0x18, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method RotateRight, addr 0xefec1c, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t RotateRight(uint32_t x, int32_t bits);

  static inline ::Org::BouncyCastle::Crypto::Engines::HC256Engine* New_ctor();

  /// @brief Method .ctor, addr 0xeff3d4, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HC256Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HC256Engine(HC256Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HC256Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HC256Engine(HC256Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HC256Engine();

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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::HC256Engine, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___p) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___q) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___cnt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___key) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___iv) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___initialised) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___buf) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::HC256Engine, ___idx) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::HC256Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::HC256Engine*, "Org.BouncyCastle.Crypto.Engines", "HC256Engine");
