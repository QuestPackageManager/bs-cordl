#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TeaEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class TeaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::TeaEngine);
// Type: Org.BouncyCastle.Crypto.Engines::TeaEngine
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::TeaEngine*
class CORDL_TYPE TeaEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field _a, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__a, put = __cordl_internal_set__a)) uint32_t _a;

  /// @brief Field _b, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__b, put = __cordl_internal_set__b)) uint32_t _b;

  /// @brief Field _c, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__c, put = __cordl_internal_set__c)) uint32_t _c;

  /// @brief Field _d, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__d, put = __cordl_internal_set__d)) uint32_t _d;

  /// @brief Field _forEncryption, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__forEncryption, put = __cordl_internal_set__forEncryption)) bool _forEncryption;

  /// @brief Field _initialised, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__initialised, put = __cordl_internal_set__initialised)) bool _initialised;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method GetBlockSize, addr 0x10544dc, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x10544e4, size 0x148, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::TeaEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x1054698, size 0x160, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset, addr 0x10549c0, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr uint32_t const& __cordl_internal_get__a() const;

  constexpr uint32_t& __cordl_internal_get__a();

  constexpr uint32_t const& __cordl_internal_get__b() const;

  constexpr uint32_t& __cordl_internal_get__b();

  constexpr uint32_t const& __cordl_internal_get__c() const;

  constexpr uint32_t& __cordl_internal_get__c();

  constexpr uint32_t const& __cordl_internal_get__d() const;

  constexpr uint32_t& __cordl_internal_get__d();

  constexpr bool const& __cordl_internal_get__forEncryption() const;

  constexpr bool& __cordl_internal_get__forEncryption();

  constexpr bool const& __cordl_internal_get__initialised() const;

  constexpr bool& __cordl_internal_get__initialised();

  constexpr void __cordl_internal_set__a(uint32_t value);

  constexpr void __cordl_internal_set__b(uint32_t value);

  constexpr void __cordl_internal_set__c(uint32_t value);

  constexpr void __cordl_internal_set__d(uint32_t value);

  constexpr void __cordl_internal_set__forEncryption(bool value);

  constexpr void __cordl_internal_set__initialised(bool value);

  /// @brief Method .ctor, addr 0x1054478, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method decryptBlock, addr 0x10547f8, size 0xe4, virtual false, abstract: false, final false
  inline int32_t decryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method encryptBlock, addr 0x10548dc, size 0xe4, virtual false, abstract: false, final false
  inline int32_t encryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method get_AlgorithmName, addr 0x1054494, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x10544d4, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  /// @brief Method setKey, addr 0x105462c, size 0x6c, virtual false, abstract: false, final false
  inline void setKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeaEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TeaEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeaEngine(TeaEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeaEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeaEngine(TeaEngine const&) = delete;

  /// @brief Field _a, offset: 0x10, size: 0x4, def value: None
  uint32_t ____a;

  /// @brief Field _b, offset: 0x14, size: 0x4, def value: None
  uint32_t ____b;

  /// @brief Field _c, offset: 0x18, size: 0x4, def value: None
  uint32_t ____c;

  /// @brief Field _d, offset: 0x1c, size: 0x4, def value: None
  uint32_t ____d;

  /// @brief Field _initialised, offset: 0x20, size: 0x1, def value: None
  bool ____initialised;

  /// @brief Field _forEncryption, offset: 0x21, size: 0x1, def value: None
  bool ____forEncryption;

  /// @brief Field block_size offset 0xffffffff size 0x4
  static constexpr int32_t block_size{ static_cast<int32_t>(0x8) };

  /// @brief Field d_sum offset 0xffffffff size 0x4
  static constexpr uint32_t d_sum{ static_cast<uint32_t>(0xef3720f0u) };

  /// @brief Field delta offset 0xffffffff size 0x4
  static constexpr uint32_t delta{ static_cast<uint32_t>(0x3779b9f0u) };

  /// @brief Field rounds offset 0xffffffff size 0x4
  static constexpr int32_t rounds{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::TeaEngine, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TeaEngine, ____a) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TeaEngine, ____b) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TeaEngine, ____c) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TeaEngine, ____d) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TeaEngine, ____initialised) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::TeaEngine, ____forEncryption) == 0x21, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::TeaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::TeaEngine*, "Org.BouncyCastle.Crypto.Engines", "TeaEngine");
