#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/DesEdeEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__DesEngine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesEdeEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class DesEdeEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine);
// Dependencies Org.BouncyCastle.Crypto.Engines.DesEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.DesEdeEngine
class CORDL_TYPE DesEdeEngine : public ::Org::BouncyCastle::Crypto::Engines::DesEngine {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field forEncryption, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_forEncryption, put = __cordl_internal_set_forEncryption)) bool forEncryption;

  /// @brief Field workingKey1, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey1, put = __cordl_internal_set_workingKey1)) ::ArrayW<int32_t, ::Array<int32_t>*> workingKey1;

  /// @brief Field workingKey2, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey2, put = __cordl_internal_set_workingKey2)) ::ArrayW<int32_t, ::Array<int32_t>*> workingKey2;

  /// @brief Field workingKey3, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey3, put = __cordl_internal_set_workingKey3)) ::ArrayW<int32_t, ::Array<int32_t>*> workingKey3;

  /// @brief Method GetBlockSize, addr 0x32afb0c, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x32af824, size 0x2a4, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::DesEdeEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x32afb14, size 0x200, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0x32afd14, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr bool const& __cordl_internal_get_forEncryption() const;

  constexpr bool& __cordl_internal_get_forEncryption();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_workingKey1() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_workingKey1();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_workingKey2() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_workingKey2();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_workingKey3() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_workingKey3();

  constexpr void __cordl_internal_set_forEncryption(bool value);

  constexpr void __cordl_internal_set_workingKey1(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_workingKey2(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_workingKey3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method .ctor, addr 0x32afd18, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0x32afac8, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEdeEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesEdeEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEdeEngine(DesEdeEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEdeEngine(DesEdeEngine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 840 };

  /// @brief Field workingKey1, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey1;

  /// @brief Field workingKey2, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey2;

  /// @brief Field workingKey3, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___workingKey3;

  /// @brief Field forEncryption, offset: 0x30, size: 0x1, def value: None
  bool ___forEncryption;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___workingKey1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___workingKey2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___workingKey3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___forEncryption) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, 0x38>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEdeEngine");
