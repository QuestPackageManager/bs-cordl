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
// CS Name: ::Org.BouncyCastle.Crypto.Engines::IsaacEngine*
class CORDL_TYPE IsaacEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field a, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_a, put = __cordl_internal_set_a)) uint32_t a;

  /// @brief Field b, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_b, put = __cordl_internal_set_b)) uint32_t b;

  /// @brief Field c, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) uint32_t c;

  /// @brief Field engineState, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engineState, put = __cordl_internal_set_engineState))::ArrayW<uint32_t, ::Array<uint32_t>*> engineState;

  /// @brief Field index, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field initialised, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_initialised, put = __cordl_internal_set_initialised)) bool initialised;

  /// @brief Field keyStream, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_keyStream, put = __cordl_internal_set_keyStream))::ArrayW<uint8_t, ::Array<uint8_t>*> keyStream;

  /// @brief Field results, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_results, put = __cordl_internal_set_results))::ArrayW<uint32_t, ::Array<uint32_t>*> results;

  /// @brief Field sizeL, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_sizeL, put = setStaticF_sizeL)) int32_t sizeL;

  /// @brief Field stateArraySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_stateArraySize, put = setStaticF_stateArraySize)) int32_t stateArraySize;

  /// @brief Field workingKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey))::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCipher*() noexcept;

  /// @brief Method Init, addr 0x1134e20, size 0x114, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::IsaacEngine* New_ctor();

  /// @brief Method ProcessBytes, addr 0x1135510, size 0x1ec, virtual true, abstract: false, final false
  inline void ProcessBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x113573c, size 0x8, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ReturnByte, addr 0x113531c, size 0x78, virtual true, abstract: false, final false
  inline uint8_t ReturnByte(uint8_t input);

  constexpr uint32_t const& __cordl_internal_get_a() const;

  constexpr uint32_t& __cordl_internal_get_a();

  constexpr uint32_t const& __cordl_internal_get_b() const;

  constexpr uint32_t& __cordl_internal_get_b();

  constexpr uint32_t const& __cordl_internal_get_c() const;

  constexpr uint32_t& __cordl_internal_get_c();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_engineState() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_engineState();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr bool const& __cordl_internal_get_initialised() const;

  constexpr bool& __cordl_internal_get_initialised();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_keyStream() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_keyStream();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_results() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_results();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workingKey();

  constexpr void __cordl_internal_set_a(uint32_t value);

  constexpr void __cordl_internal_set_b(uint32_t value);

  constexpr void __cordl_internal_set_c(uint32_t value);

  constexpr void __cordl_internal_set_engineState(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_initialised(bool value);

  constexpr void __cordl_internal_set_keyStream(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_results(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x1135890, size 0x94, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_sizeL();

  static inline int32_t getStaticF_stateArraySize();

  /// @brief Method get_AlgorithmName, addr 0x11356fc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCipher"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCipher* i___Org__BouncyCastle__Crypto__IStreamCipher() noexcept;

  /// @brief Method isaac, addr 0x1135394, size 0x17c, virtual false, abstract: false, final false
  inline void isaac();

  /// @brief Method mix, addr 0x1135744, size 0xfc, virtual false, abstract: false, final false
  inline void mix(::ArrayW<uint32_t, ::Array<uint32_t>*> x);

  /// @brief Method setKey, addr 0x1134f34, size 0x3e8, virtual false, abstract: false, final false
  inline void setKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes);

  static inline void setStaticF_sizeL(int32_t value);

  static inline void setStaticF_stateArraySize(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsaacEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsaacEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsaacEngine(IsaacEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsaacEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsaacEngine(IsaacEngine const&) = delete;

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
