#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Cast5Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cast6Engine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Cast6Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Cast6Engine);
// Type: Org.BouncyCastle.Crypto.Engines::Cast6Engine
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(833))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(834))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Cast6Engine*
class CORDL_TYPE Cast6Engine : public ::Org::BouncyCastle::Crypto::Engines::Cast5Engine {
public:
  // Declarations
  /// @brief Field _Kr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__Kr, put = __cordl_internal_set__Kr))::ArrayW<int32_t, ::Array<int32_t>*> _Kr;

  /// @brief Field _Km, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__Km, put = __cordl_internal_set__Km))::ArrayW<uint32_t, ::Array<uint32_t>*> _Km;

  /// @brief Field _Tr, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__Tr, put = __cordl_internal_set__Tr))::ArrayW<int32_t, ::Array<int32_t>*> _Tr;

  /// @brief Field _Tm, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__Tm, put = __cordl_internal_set__Tm))::ArrayW<uint32_t, ::Array<uint32_t>*> _Tm;

  /// @brief Field _workingKey, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__workingKey, put = __cordl_internal_set__workingKey))::ArrayW<uint32_t, ::Array<uint32_t>*> _workingKey;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__Kr();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__Kr() const;

  constexpr void __cordl_internal_set__Kr(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__Km();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__Km() const;

  constexpr void __cordl_internal_set__Km(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get__Tr();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get__Tr() const;

  constexpr void __cordl_internal_set__Tr(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__Tm();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__Tm() const;

  constexpr void __cordl_internal_set__Tm(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__workingKey();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__workingKey() const;

  constexpr void __cordl_internal_set__workingKey(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Engines::Cast6Engine* New_ctor();

  /// @brief Method .ctor, addr 0xec5fd8, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0xec60ac, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method Reset, addr 0xec60ec, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method GetBlockSize, addr 0xec60f0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method SetKey, addr 0xec60f8, size 0x9b8, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method EncryptBlock, addr 0xec6ab0, size 0x174, virtual true, abstract: false, final false
  inline int32_t EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method DecryptBlock, addr 0xec6f68, size 0x174, virtual true, abstract: false, final false
  inline int32_t DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstIndex);

  /// @brief Method CAST_Encipher, addr 0xec6c24, size 0x344, virtual false, abstract: false, final false
  inline void CAST_Encipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, ::ArrayW<uint32_t, ::Array<uint32_t>*> result);

  /// @brief Method CAST_Decipher, addr 0xec70dc, size 0x348, virtual false, abstract: false, final false
  inline void CAST_Decipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, ::ArrayW<uint32_t, ::Array<uint32_t>*> result);

  // Ctor Parameters [CppParam { name: "", ty: "Cast6Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cast6Engine(Cast6Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cast6Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cast6Engine(Cast6Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cast6Engine();

public:
  /// @brief Field _Kr, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____Kr;

  /// @brief Field _Km, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____Km;

  /// @brief Field _Tr, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____Tr;

  /// @brief Field _Tm, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____Tm;

  /// @brief Field _workingKey, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____workingKey;

  /// @brief Field ROUNDS offset 0xffffffff size 0x4
  static constexpr int32_t ROUNDS{ static_cast<int32_t>(0xc) };

  /// @brief Field BLOCK_SIZE offset 0xffffffff size 0x4
  static constexpr int32_t BLOCK_SIZE{ static_cast<int32_t>(0x10) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Cast6Engine, 0x60>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast6Engine, ____Kr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast6Engine, ____Km) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast6Engine, ____Tr) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast6Engine, ____Tm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::Cast6Engine, ____workingKey) == 0x58, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Cast6Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Cast6Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast6Engine");
