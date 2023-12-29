#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc3211WrapEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Rfc3211WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::Rfc3211WrapEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(860))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Rfc3211WrapEngine*
class CORDL_TYPE Rfc3211WrapEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* engine;

  /// @brief Field param, offset 0x18, size 0x8
  __declspec(property(get = __get_param, put = __set_param))::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* param;

  /// @brief Field forWrapping, offset 0x20, size 0x1
  __declspec(property(get = __get_forWrapping, put = __set_forWrapping)) bool forWrapping;

  /// @brief Field rand, offset 0x28, size 0x8
  __declspec(property(get = __get_rand, put = __set_rand))::Org::BouncyCastle::Security::SecureRandom* rand;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* value);

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*& __get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*> const& __get_param() const;

  constexpr void __set_param(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* value);

  constexpr bool& __get_forWrapping();

  constexpr bool const& __get_forWrapping() const;

  constexpr void __set_forWrapping(bool value);

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __get_rand();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __get_rand() const;

  constexpr void __set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  static inline ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method .ctor addr 0xe67cbc size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method Init addr 0xe67d38 size 0x1b8 virtual true final false
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  /// @brief Method get_AlgorithmName addr 0xe67ef0 size 0xc8 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Wrap addr 0xe67fb8 size 0x284 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  /// @brief Method Unwrap addr 0xe6823c size 0x3c0 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3211WrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc3211WrapEngine(Rfc3211WrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3211WrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc3211WrapEngine(Rfc3211WrapEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc3211WrapEngine();

public:
  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* ___engine;

  /// @brief Field param, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* ___param;

  /// @brief Field forWrapping, offset: 0x20, size: 0x1, def value: None
  bool ___forWrapping;

  /// @brief Field rand, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___rand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___param) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___forWrapping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___rand) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "Rfc3211WrapEngine");
