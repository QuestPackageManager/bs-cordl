#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/Rfc3211WrapEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc3211WrapEngine)
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Rfc3211WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine);
// Dependencies Org.BouncyCastle.Crypto.IWrapper, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.Rfc3211WrapEngine
class CORDL_TYPE Rfc3211WrapEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* engine;

  /// @brief Field forWrapping, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forWrapping, put = __cordl_internal_set_forWrapping)) bool forWrapping;

  /// @brief Field param, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param)) ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* param;

  /// @brief Field rand, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_rand, put = __cordl_internal_set_rand)) ::Org::BouncyCastle::Security::SecureRandom* rand;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  /// @brief Method Init, addr 0x2368bc0, size 0x1ac, virtual true, abstract: false, final false
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* param);

  static inline ::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method Unwrap, addr 0x23690b0, size 0x3d0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  /// @brief Method Wrap, addr 0x2368e34, size 0x27c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t inLen);

  constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*& __cordl_internal_get_engine();

  constexpr bool const& __cordl_internal_get_forWrapping() const;

  constexpr bool& __cordl_internal_get_forWrapping();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* const& __cordl_internal_get_param() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*& __cordl_internal_get_param();

  constexpr ::Org::BouncyCastle::Security::SecureRandom* const& __cordl_internal_get_rand() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_rand();

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* value);

  constexpr void __cordl_internal_set_forWrapping(bool value);

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* value);

  constexpr void __cordl_internal_set_rand(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0x2368b4c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method get_AlgorithmName, addr 0x2368d6c, size 0xc8, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IWrapper* i___Org__BouncyCastle__Crypto__IWrapper() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc3211WrapEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rfc3211WrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc3211WrapEngine(Rfc3211WrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3211WrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc3211WrapEngine(Rfc3211WrapEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 860 };

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
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___param) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___forWrapping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, ___rand) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Rfc3211WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "Rfc3211WrapEngine");
