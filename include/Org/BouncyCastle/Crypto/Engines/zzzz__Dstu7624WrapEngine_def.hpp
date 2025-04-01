#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/Dstu7624WrapEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Dstu7624WrapEngine)
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624Engine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Dstu7624WrapEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine);
// Dependencies Org.BouncyCastle.Crypto.IWrapper, System.Object
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.Dstu7624WrapEngine
class CORDL_TYPE Dstu7624WrapEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field blockSize, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSize, put = __cordl_internal_set_blockSize)) int32_t blockSize;

  /// @brief Field engine, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* engine;

  /// @brief Field forWrapping, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_forWrapping, put = __cordl_internal_set_forWrapping)) bool forWrapping;

  /// @brief Field param, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_param, put = __cordl_internal_set_param)) ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* param;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  /// @brief Method Init, addr 0x2357578, size 0x118, virtual true, abstract: false, final true
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine* New_ctor(int32_t blockSizeBits);

  /// @brief Method Unwrap, addr 0x2357e3c, size 0x890, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Wrap, addr 0x2357690, size 0x7ac, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  constexpr int32_t const& __cordl_internal_get_blockSize() const;

  constexpr int32_t& __cordl_internal_get_blockSize();

  constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*& __cordl_internal_get_engine();

  constexpr bool const& __cordl_internal_get_forWrapping() const;

  constexpr bool& __cordl_internal_get_forWrapping();

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* const& __cordl_internal_get_param() const;

  constexpr ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*& __cordl_internal_get_param();

  constexpr void __cordl_internal_set_blockSize(int32_t value);

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* value);

  constexpr void __cordl_internal_set_forWrapping(bool value);

  constexpr void __cordl_internal_set_param(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* value);

  /// @brief Method .ctor, addr 0x23574b0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t blockSizeBits);

  /// @brief Method get_AlgorithmName, addr 0x2357538, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IWrapper* i___Org__BouncyCastle__Crypto__IWrapper() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Dstu7624WrapEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624WrapEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Dstu7624WrapEngine(Dstu7624WrapEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Dstu7624WrapEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Dstu7624WrapEngine(Dstu7624WrapEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 843 };

  /// @brief Field param, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* ___param;

  /// @brief Field engine, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* ___engine;

  /// @brief Field forWrapping, offset: 0x20, size: 0x1, def value: None
  bool ___forWrapping;

  /// @brief Field blockSize, offset: 0x24, size: 0x4, def value: None
  int32_t ___blockSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___param) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___engine) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___forWrapping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, ___blockSize) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Dstu7624WrapEngine*, "Org.BouncyCastle.Crypto.Engines", "Dstu7624WrapEngine");
