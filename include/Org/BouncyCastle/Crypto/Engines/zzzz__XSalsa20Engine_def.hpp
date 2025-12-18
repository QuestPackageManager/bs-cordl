#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/XSalsa20Engine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Salsa20Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XSalsa20Engine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class XSalsa20Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine);
// Dependencies Org.BouncyCastle.Crypto.Engines.Salsa20Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Engines.XSalsa20Engine
class CORDL_TYPE XSalsa20Engine : public ::Org::BouncyCastle::Crypto::Engines::Salsa20Engine {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_NonceSize)) int32_t NonceSize;

  static inline ::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine* New_ctor();

  /// @brief Method SetKey, addr 0x32d7630, size 0x264, virtual true, abstract: false, final false
  inline void SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  /// @brief Method .ctor, addr 0x32d7894, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0x32d75e4, size 0x44, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_NonceSize, addr 0x32d7628, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_NonceSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XSalsa20Engine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XSalsa20Engine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XSalsa20Engine(XSalsa20Engine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XSalsa20Engine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XSalsa20Engine(XSalsa20Engine const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::XSalsa20Engine*, "Org.BouncyCastle.Crypto.Engines", "XSalsa20Engine");
