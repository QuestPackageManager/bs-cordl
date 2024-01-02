#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost28147Mac)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class Gost28147Mac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac);
// Type: Org.BouncyCastle.Crypto.Macs::Gost28147Mac
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(942))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::Gost28147Mac*
class CORDL_TYPE Gost28147Mac : public ::System::Object {
public:
  // Declarations
  /// @brief Field bufOff, offset 0x10, size 0x4
  __declspec(property(get = __get_bufOff, put = __set_bufOff)) int32_t bufOff;

  /// @brief Field buf, offset 0x18, size 0x8
  __declspec(property(get = __get_buf, put = __set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field mac, offset 0x20, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::ArrayW<uint8_t, ::Array<uint8_t>*> mac;

  /// @brief Field firstStep, offset 0x28, size 0x1
  __declspec(property(get = __get_firstStep, put = __set_firstStep)) bool firstStep;

  /// @brief Field workingKey, offset 0x30, size 0x8
  __declspec(property(get = __get_workingKey, put = __set_workingKey))::ArrayW<int32_t, ::Array<int32_t>*> workingKey;

  /// @brief Field macIV, offset 0x38, size 0x8
  __declspec(property(get = __get_macIV, put = __set_macIV))::ArrayW<uint8_t, ::Array<uint8_t>*> macIV;

  /// @brief Field S, offset 0x40, size 0x8
  __declspec(property(get = __get_S, put = __set_S))::ArrayW<uint8_t, ::Array<uint8_t>*> S;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr int32_t& __get_bufOff();

  constexpr int32_t const& __get_bufOff() const;

  constexpr void __set_bufOff(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf() const;

  constexpr void __set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_mac();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_mac() const;

  constexpr void __set_mac(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_firstStep();

  constexpr bool const& __get_firstStep() const;

  constexpr void __set_firstStep(bool value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_workingKey();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_workingKey() const;

  constexpr void __set_workingKey(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_macIV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_macIV() const;

  constexpr void __set_macIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_S();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_S() const;

  constexpr void __set_S(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Macs::Gost28147Mac* New_ctor();

  /// @brief Method .ctor, addr 0xf0cfd0, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method GenerateWorkingKey, addr 0xf0d088, size 0xfc, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GenerateWorkingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> userKey);

  /// @brief Method Init, addr 0xf0d1f8, size 0x278, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xf0d4a8, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetMacSize, addr 0xf0d4e8, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method gost28147_mainStep, addr 0xf0d4f0, size 0xe8, virtual false, abstract: false, final false
  inline int32_t gost28147_mainStep(int32_t n1, int32_t key);

  /// @brief Method gost28147MacFunc, addr 0xf0d5d8, size 0xe4, virtual false, abstract: false, final false
  inline void gost28147MacFunc(::ArrayW<int32_t, ::Array<int32_t>*> workingKey, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method bytesToint, addr 0xf0d184, size 0x74, virtual false, abstract: false, final false
  static inline int32_t bytesToint(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff);

  /// @brief Method intTobytes, addr 0xf0d6bc, size 0x80, virtual false, abstract: false, final false
  static inline void intTobytes(int32_t num, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method CM5func, addr 0xf0d73c, size 0xe4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CM5func(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t bufOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> mac);

  /// @brief Method Update, addr 0xf0d820, size 0x110, virtual true, abstract: false, final true
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate, addr 0xf0d930, size 0x200, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0xf0db30, size 0x148, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xf0d470, size 0x38, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "Gost28147Mac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost28147Mac(Gost28147Mac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost28147Mac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost28147Mac(Gost28147Mac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost28147Mac();

public:
  /// @brief Field bufOff, offset: 0x10, size: 0x4, def value: None
  int32_t ___bufOff;

  /// @brief Field buf, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field mac, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mac;

  /// @brief Field firstStep, offset: 0x28, size: 0x1, def value: None
  bool ___firstStep;

  /// @brief Field workingKey, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey;

  /// @brief Field macIV, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___macIV;

  /// @brief Field S, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___S;

  /// @brief Field blockSize offset 0xffffffff size 0x4
  static constexpr int32_t blockSize{ static_cast<int32_t>(0x8) };

  /// @brief Field macSize offset 0xffffffff size 0x4
  static constexpr int32_t macSize{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, ___bufOff) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, ___buf) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, ___mac) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, ___firstStep) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, ___workingKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, ___macIV) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac, ___S) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::Gost28147Mac*, "Org.BouncyCastle.Crypto.Macs", "Gost28147Mac");
