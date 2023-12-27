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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(847))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::HC256Engine*
class CORDL_TYPE HC256Engine : public ::System::Object {
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

  /// @brief Method Step addr 0xed2b18 size 0x274 virtual false final false
  inline uint32_t Step();

  /// @brief Method Init addr 0xed2d94 size 0x384 virtual false final false
  inline void Init();

  /// @brief Method get_AlgorithmName addr 0xed3118 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0xed3158 size 0x1d4 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetByte addr 0xed332c size 0x60 virtual false final false
  inline uint8_t GetByte();

  /// @brief Method ProcessBytes addr 0xed338c size 0x19c virtual true final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset addr 0xed3528 size 0x4 virtual true final false
  inline void Reset();

  /// @brief Method ReturnByte addr 0xed352c size 0x18 virtual true final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method RotateRight addr 0xed2d8c size 0x8 virtual false final false
  static inline uint32_t RotateRight(uint32_t x, int32_t bits);

  static inline ::Org::BouncyCastle::Crypto::Engines::HC256Engine* New_ctor();

  /// @brief Method .ctor addr 0xed3544 size 0x9c virtual false final false
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

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::HC256Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::HC256Engine*, "Org.BouncyCastle.Crypto.Engines", "HC256Engine");
