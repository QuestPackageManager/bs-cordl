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
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(874))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::TeaEngine*
class CORDL_TYPE TeaEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field _a, offset 0x10, size 0x4
  __declspec(property(get = __get__a, put = __set__a)) uint32_t _a;

  /// @brief Field _b, offset 0x14, size 0x4
  __declspec(property(get = __get__b, put = __set__b)) uint32_t _b;

  /// @brief Field _c, offset 0x18, size 0x4
  __declspec(property(get = __get__c, put = __set__c)) uint32_t _c;

  /// @brief Field _d, offset 0x1c, size 0x4
  __declspec(property(get = __get__d, put = __set__d)) uint32_t _d;

  /// @brief Field _initialised, offset 0x20, size 0x1
  __declspec(property(get = __get__initialised, put = __set__initialised)) bool _initialised;

  /// @brief Field _forEncryption, offset 0x21, size 0x1
  __declspec(property(get = __get__forEncryption, put = __set__forEncryption)) bool _forEncryption;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  constexpr uint32_t& __get__a();

  constexpr uint32_t const& __get__a() const;

  constexpr void __set__a(uint32_t value);

  constexpr uint32_t& __get__b();

  constexpr uint32_t const& __get__b() const;

  constexpr void __set__b(uint32_t value);

  constexpr uint32_t& __get__c();

  constexpr uint32_t const& __get__c() const;

  constexpr void __set__c(uint32_t value);

  constexpr uint32_t& __get__d();

  constexpr uint32_t const& __get__d() const;

  constexpr void __set__d(uint32_t value);

  constexpr bool& __get__initialised();

  constexpr bool const& __get__initialised() const;

  constexpr void __set__initialised(bool value);

  constexpr bool& __get__forEncryption();

  constexpr bool const& __get__forEncryption() const;

  constexpr void __set__forEncryption(bool value);

  static inline ::Org::BouncyCastle::Crypto::Engines::TeaEngine* New_ctor();

  /// @brief Method .ctor addr 0xeea390 size 0x1c virtual false final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName addr 0xeea3ac size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay addr 0xeea3ec size 0x8 virtual true final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Method GetBlockSize addr 0xeea3f4 size 0x8 virtual true final false
  inline int32_t GetBlockSize();

  /// @brief Method Init addr 0xeea3fc size 0x148 virtual true final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method ProcessBlock addr 0xeea5b0 size 0x160 virtual true final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset addr 0xeea8d8 size 0x4 virtual true final false
  inline void Reset();

  /// @brief Method setKey addr 0xeea544 size 0x6c virtual false final false
  inline void setKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method encryptBlock addr 0xeea7f4 size 0xe4 virtual false final false
  inline int32_t encryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method decryptBlock addr 0xeea710 size 0xe4 virtual false final false
  inline int32_t decryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  // Ctor Parameters [CppParam { name: "", ty: "TeaEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TeaEngine(TeaEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TeaEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TeaEngine(TeaEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TeaEngine();

public:
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

  /// @brief Field rounds offset 0xffffffff size 0x4
  static constexpr int32_t rounds{ static_cast<int32_t>(0x20) };

  /// @brief Field block_size offset 0xffffffff size 0x4
  static constexpr int32_t block_size{ static_cast<int32_t>(0x8) };

  /// @brief Field delta offset 0xffffffff size 0x4
  static constexpr uint32_t delta{ static_cast<uint32_t>(0x3779b9f0u) };

  /// @brief Field d_sum offset 0xffffffff size 0x4
  static constexpr uint32_t d_sum{ static_cast<uint32_t>(0xef3720f0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::TeaEngine, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::TeaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::TeaEngine*, "Org.BouncyCastle.Crypto.Engines", "TeaEngine");
