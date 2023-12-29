#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XSalsa20Engine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class XSalsa20Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine);
// Type: Org.BouncyCastle.Crypto.Engines::XSalsa20Engine
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(836))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(884))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::XSalsa20Engine*
class CORDL_TYPE XSalsa20Engine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  __declspec(property(get = get_NonceSize)) int32_t NonceSize;

  /// @brief Method get_AlgorithmName addr 0xe7f8c0 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_NonceSize addr 0xe7f900 size 0x8 virtual true final false
  inline int32_t get_NonceSize();

  /// @brief Method SetKey addr 0xe7f908 size 0x264 virtual true final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  static inline ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine* New_ctor();

  /// @brief Method .ctor addr 0xe7fb6c size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XSalsa20Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XSalsa20Engine(XSalsa20Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XSalsa20Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XSalsa20Engine(XSalsa20Engine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XSalsa20Engine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*, "Org.BouncyCastle.Crypto.Engines", "XSalsa20Engine");
