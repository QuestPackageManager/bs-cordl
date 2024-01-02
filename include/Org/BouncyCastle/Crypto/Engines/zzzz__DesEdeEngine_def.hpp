#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__DesEngine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Crypto.Engines::DesEdeEngine
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(839))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(840))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::DesEdeEngine*
class CORDL_TYPE DesEdeEngine : public ::Org::BouncyCastle::Crypto::Engines::DesEngine {
public:
  // Declarations
  /// @brief Field workingKey1, offset 0x18, size 0x8
  __declspec(property(get = __get_workingKey1, put = __set_workingKey1))::ArrayW<int32_t, ::Array<int32_t>*> workingKey1;

  /// @brief Field workingKey2, offset 0x20, size 0x8
  __declspec(property(get = __get_workingKey2, put = __set_workingKey2))::ArrayW<int32_t, ::Array<int32_t>*> workingKey2;

  /// @brief Field workingKey3, offset 0x28, size 0x8
  __declspec(property(get = __get_workingKey3, put = __set_workingKey3))::ArrayW<int32_t, ::Array<int32_t>*> workingKey3;

  /// @brief Field forEncryption, offset 0x30, size 0x1
  __declspec(property(get = __get_forEncryption, put = __set_forEncryption)) bool forEncryption;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_workingKey1();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_workingKey1() const;

  constexpr void __set_workingKey1(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_workingKey2();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_workingKey2() const;

  constexpr void __set_workingKey2(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_workingKey3();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_workingKey3() const;

  constexpr void __set_workingKey3(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr bool& __get_forEncryption();

  constexpr bool const& __get_forEncryption() const;

  constexpr void __set_forEncryption(bool value);

  /// @brief Method Init, addr 0xeca540, size 0x2a4, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method get_AlgorithmName, addr 0xeca7e4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetBlockSize, addr 0xeca824, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method ProcessBlock, addr 0xeca82c, size 0x1f0, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method Reset, addr 0xecaa1c, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  static inline ::Org::BouncyCastle::Crypto::Engines::DesEdeEngine* New_ctor();

  /// @brief Method .ctor, addr 0xecaa20, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesEdeEngine(DesEdeEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesEdeEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesEdeEngine(DesEdeEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesEdeEngine();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, 0x38>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___workingKey1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___workingKey2) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___workingKey3) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine, ___forEncryption) == 0x30, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::DesEdeEngine*, "Org.BouncyCastle.Crypto.Engines", "DesEdeEngine");
