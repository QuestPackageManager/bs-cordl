#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2WrapEngine)
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithIV;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class RC2WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::RC2WrapEngine
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::RC2WrapEngine*
class CORDL_TYPE RC2WrapEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field IV2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IV2, put = setStaticF_IV2))::ArrayW<uint8_t, ::Array<uint8_t>*> IV2;

  /// @brief Field digest, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest))::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine))::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* engine;

  /// @brief Field forWrapping, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_forWrapping, put = __cordl_internal_set_forWrapping)) bool forWrapping;

  /// @brief Field iv, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field paramPlusIV, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_paramPlusIV, put = __cordl_internal_set_paramPlusIV))::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* paramPlusIV;

  /// @brief Field parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters))::Org::BouncyCastle::Crypto::ICipherParameters* parameters;

  /// @brief Field sha1, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_sha1, put = __cordl_internal_set_sha1))::Org::BouncyCastle::Crypto::IDigest* sha1;

  /// @brief Field sr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_sr, put = __cordl_internal_set_sr))::Org::BouncyCastle::Security::SecureRandom* sr;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  /// @brief Method CalculateCmsKeyChecksum, addr 0xf4bbb8, size 0x180, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateCmsKeyChecksum(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method CheckCmsKeyChecksum, addr 0xf4c2f8, size 0x80, virtual false, abstract: false, final false
  inline bool CheckCmsKeyChecksum(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> checksum);

  /// @brief Method Init, addr 0xf4b440, size 0x2c0, virtual true, abstract: false, final false
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine* New_ctor();

  /// @brief Method Unwrap, addr 0xf4bd38, size 0x5c0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Wrap, addr 0xf4b740, size 0x478, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_digest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_digest();

  constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*& __cordl_internal_get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*> const& __cordl_internal_get_engine() const;

  constexpr bool const& __cordl_internal_get_forWrapping() const;

  constexpr bool& __cordl_internal_get_forWrapping();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_iv() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_iv();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*& __cordl_internal_get_paramPlusIV();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*> const& __cordl_internal_get_paramPlusIV() const;

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __cordl_internal_get_parameters() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_sha1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_sha1() const;

  constexpr ::Org::BouncyCastle::Security::SecureRandom*& __cordl_internal_get_sr();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& __cordl_internal_get_sr() const;

  constexpr void __cordl_internal_set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* value);

  constexpr void __cordl_internal_set_forWrapping(bool value);

  constexpr void __cordl_internal_set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_paramPlusIV(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* value);

  constexpr void __cordl_internal_set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr void __cordl_internal_set_sha1(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_sr(::Org::BouncyCastle::Security::SecureRandom* value);

  /// @brief Method .ctor, addr 0xf4c40c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_IV2();

  /// @brief Method get_AlgorithmName, addr 0xf4b700, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IWrapper* i___Org__BouncyCastle__Crypto__IWrapper() noexcept;

  static inline void setStaticF_IV2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2WrapEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC2WrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2WrapEngine(RC2WrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2WrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2WrapEngine(RC2WrapEngine const&) = delete;

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* ___engine;

  /// @brief Field parameters, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherParameters* ___parameters;

  /// @brief Field paramPlusIV, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* ___paramPlusIV;

  /// @brief Field iv, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field forWrapping, offset: 0x30, size: 0x1, def value: None
  bool ___forWrapping;

  /// @brief Field sr, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Security::SecureRandom* ___sr;

  /// @brief Field sha1, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___sha1;

  /// @brief Field digest, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___parameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___paramPlusIV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___iv) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___forWrapping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___sr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___sha1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine, ___digest) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::RC2WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "RC2WrapEngine");
