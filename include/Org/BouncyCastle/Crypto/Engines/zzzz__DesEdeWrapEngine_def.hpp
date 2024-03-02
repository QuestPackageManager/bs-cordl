#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEdeWrapEngine)
namespace Org::BouncyCastle::Crypto::Modes {
class CbcBlockCipher;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
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
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEdeWrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::DesEdeWrapEngine
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::DesEdeWrapEngine*
class CORDL_TYPE DesEdeWrapEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field IV2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IV2, put = setStaticF_IV2))::ArrayW<uint8_t, ::Array<uint8_t>*> IV2;

  /// @brief Field digest, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest))::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine))::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* engine;

  /// @brief Field forWrapping, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_forWrapping, put = __cordl_internal_set_forWrapping)) bool forWrapping;

  /// @brief Field iv, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field param, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* param;

  /// @brief Field paramPlusIV, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_paramPlusIV, put = __cordl_internal_set_paramPlusIV))::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* paramPlusIV;

  /// @brief Field sha1, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_sha1, put = __cordl_internal_set_sha1))::Org::BouncyCastle::Crypto::IDigest* sha1;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  /// @brief Method CalculateCmsKeyChecksum, addr 0xf3dfec, size 0x180, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateCmsKeyChecksum(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method CheckCmsKeyChecksum, addr 0xf3e644, size 0x80, virtual false, abstract: false, final false
  inline bool CheckCmsKeyChecksum(::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> checksum);

  /// @brief Method Init, addr 0xf3d8d8, size 0x39c, virtual true, abstract: false, final false
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine* New_ctor();

  /// @brief Method Unwrap, addr 0xf3e214, size 0x430, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Wrap, addr 0xf3dcb4, size 0x338, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_digest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_digest();

  constexpr ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*& __cordl_internal_get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher*> const& __cordl_internal_get_engine() const;

  constexpr bool const& __cordl_internal_get_forWrapping() const;

  constexpr bool& __cordl_internal_get_forWrapping();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_iv() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_iv();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __cordl_internal_get_param() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*& __cordl_internal_get_paramPlusIV();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV*> const& __cordl_internal_get_paramPlusIV() const;

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_sha1();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_sha1() const;

  constexpr void __cordl_internal_set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* value);

  constexpr void __cordl_internal_set_forWrapping(bool value);

  constexpr void __cordl_internal_set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  constexpr void __cordl_internal_set_paramPlusIV(::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* value);

  constexpr void __cordl_internal_set_sha1(::Org::BouncyCastle::Crypto::IDigest* value);

  /// @brief Method .ctor, addr 0xf3e758, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_IV2();

  /// @brief Method get_AlgorithmName, addr 0xf3dc74, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IWrapper* i___Org__BouncyCastle__Crypto__IWrapper() noexcept;

  /// @brief Method reverse, addr 0xf3e16c, size 0xa8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> reverse(::ArrayW<uint8_t, ::Array<uint8_t>*> bs);

  static inline void setStaticF_IV2(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEdeWrapEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesEdeWrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEdeWrapEngine(DesEdeWrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeWrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEdeWrapEngine(DesEdeWrapEngine const&) = delete;

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Modes::CbcBlockCipher* ___engine;

  /// @brief Field param, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___param;

  /// @brief Field paramPlusIV, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::ParametersWithIV* ___paramPlusIV;

  /// @brief Field iv, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field forWrapping, offset: 0x30, size: 0x1, def value: None
  bool ___forWrapping;

  /// @brief Field sha1, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___sha1;

  /// @brief Field digest, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, 0x48>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, ___param) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, ___paramPlusIV) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, ___iv) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, ___forWrapping) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, ___sha1) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine, ___digest) == 0x40, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::DesEdeWrapEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEdeWrapEngine");
