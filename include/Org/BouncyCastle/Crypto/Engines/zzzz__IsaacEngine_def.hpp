#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IsaacEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class IsaacEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::IsaacEngine);
// Type: Org.BouncyCastle.Crypto.Engines::IsaacEngine
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(850))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::IsaacEngine*
class CORDL_TYPE IsaacEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field engineState, offset 0x10, size 0x8
  __declspec(property(get = __get_engineState, put = __set_engineState))::ArrayW<uint32_t, ::Array<uint32_t>*> engineState;

  /// @brief Field results, offset 0x18, size 0x8
  __declspec(property(get = __get_results, put = __set_results))::ArrayW<uint32_t, ::Array<uint32_t>*> results;

  /// @brief Field a, offset 0x20, size 0x4
  __declspec(property(get = __get_a, put = __set_a)) uint32_t a;

  /// @brief Field b, offset 0x24, size 0x4
  __declspec(property(get = __get_b, put = __set_b)) uint32_t b;

  /// @brief Field c, offset 0x28, size 0x4
  __declspec(property(get = __get_c, put = __set_c)) uint32_t c;

  /// @brief Field index, offset 0x2c, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Field keyStream, offset 0x30, size 0x8
  __declspec(property(get = __get_keyStream, put = __set_keyStream))::ArrayW<uint8_t, ::Array<uint8_t>*> keyStream;

  /// @brief Field workingKey, offset 0x38, size 0x8
  __declspec(property(get = __get_workingKey, put = __set_workingKey))::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Field initialised, offset 0x40, size 0x1
  __declspec(property(get = __get_initialised, put = __set_initialised)) bool initialised;

  /// @brief Field sizeL, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_sizeL, put = setStaticF_sizeL)) int32_t sizeL;

  /// @brief Field stateArraySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_stateArraySize, put = setStaticF_stateArraySize)) int32_t stateArraySize;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_engineState();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_engineState() const;

  constexpr void __set_engineState(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_results();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_results() const;

  constexpr void __set_results(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr uint32_t& __get_a();

  constexpr uint32_t const& __get_a() const;

  constexpr void __set_a(uint32_t value);

  constexpr uint32_t& __get_b();

  constexpr uint32_t const& __get_b() const;

  constexpr void __set_b(uint32_t value);

  constexpr uint32_t& __get_c();

  constexpr uint32_t const& __get_c() const;

  constexpr void __set_c(uint32_t value);

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_keyStream();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_keyStream() const;

  constexpr void __set_keyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_workingKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_workingKey() const;

  constexpr void __set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_initialised();

  constexpr bool const& __get_initialised() const;

  constexpr void __set_initialised(bool value);

  static inline void setStaticF_sizeL(int32_t value);

  static inline int32_t getStaticF_sizeL();

  static inline void setStaticF_stateArraySize(int32_t value);

  static inline int32_t getStaticF_stateArraySize();

  /// @brief Method Init, addr 0xed5614, size 0x114, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ReturnByte, addr 0xed5b10, size 0x78, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  /// @brief Method ProcessBytes, addr 0xed5d04, size 0x1ec, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method get_AlgorithmName, addr 0xed5ef0, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Reset, addr 0xed5f30, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method setKey, addr 0xed5728, size 0x3e8, virtual false, abstract: false, final false
  inline void setKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  /// @brief Method isaac, addr 0xed5b88, size 0x17c, virtual false, abstract: false, final false
  inline void isaac();

  /// @brief Method mix, addr 0xed5f38, size 0xfc, virtual false, abstract: false, final false
  inline void mix(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  static inline ::Org::BouncyCastle::Crypto::Engines::IsaacEngine* New_ctor();

  /// @brief Method .ctor, addr 0xed6084, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IsaacEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsaacEngine(IsaacEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsaacEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsaacEngine(IsaacEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsaacEngine();

public:
  /// @brief Field engineState, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___engineState;

  /// @brief Field results, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___results;

  /// @brief Field a, offset: 0x20, size: 0x4, def value: None
  uint32_t ___a;

  /// @brief Field b, offset: 0x24, size: 0x4, def value: None
  uint32_t ___b;

  /// @brief Field c, offset: 0x28, size: 0x4, def value: None
  uint32_t ___c;

  /// @brief Field index, offset: 0x2c, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field keyStream, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___keyStream;

  /// @brief Field workingKey, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingKey;

  /// @brief Field initialised, offset: 0x40, size: 0x1, def value: None
  bool ___initialised;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::IsaacEngine, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___engineState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___results) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___a) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___b) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___c) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___index) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___keyStream) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___workingKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::IsaacEngine, ___initialised) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::IsaacEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::IsaacEngine*, "Org.BouncyCastle.Crypto.Engines", "IsaacEngine");
