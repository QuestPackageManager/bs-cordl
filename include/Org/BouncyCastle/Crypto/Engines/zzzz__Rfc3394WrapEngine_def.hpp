#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Rfc3394WrapEngine)
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Rfc3394WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine);
// Type: Org.BouncyCastle.Crypto.Engines::Rfc3394WrapEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Rfc3394WrapEngine*
class CORDL_TYPE Rfc3394WrapEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine))::Org::BouncyCastle::Crypto::IBlockCipher* engine;

  /// @brief Field forWrapping, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forWrapping, put = __cordl_internal_set_forWrapping)) bool forWrapping;

  /// @brief Field iv, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field param, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param))::Org::BouncyCastle::Crypto::Parameters::KeyParameter* param;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  /// @brief Method Init, addr 0xf2db64, size 0x214, virtual true, abstract: false, final false
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine* New_ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method Unwrap, addr 0xf2e1b8, size 0x1438, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  /// @brief Method Wrap, addr 0xf2de18, size 0x3a0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen);

  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher*& __cordl_internal_get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBlockCipher*> const& __cordl_internal_get_engine() const;

  constexpr bool const& __cordl_internal_get_forWrapping() const;

  constexpr bool& __cordl_internal_get_forWrapping();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_iv() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_iv();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_param();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*> const& __cordl_internal_get_param() const;

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::IBlockCipher* value);

  constexpr void __cordl_internal_set_forWrapping(bool value);

  constexpr void __cordl_internal_set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  /// @brief Method .ctor, addr 0xf2dad4, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBlockCipher* engine);

  /// @brief Method get_AlgorithmName, addr 0xf2dd78, size 0xa0, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IWrapper* i___Org__BouncyCastle__Crypto__IWrapper() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Rfc3394WrapEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Rfc3394WrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Rfc3394WrapEngine(Rfc3394WrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Rfc3394WrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Rfc3394WrapEngine(Rfc3394WrapEngine const&) = delete;

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBlockCipher* ___engine;

  /// @brief Field param, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___param;

  /// @brief Field forWrapping, offset: 0x20, size: 0x1, def value: None
  bool ___forWrapping;

  /// @brief Field iv, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine, ___engine) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine, ___param) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine, ___forWrapping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine, ___iv) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Rfc3394WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "Rfc3394WrapEngine");
