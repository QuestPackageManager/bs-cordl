#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ConnectionEnd.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConnectionEnd)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ConnectionEnd;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ConnectionEnd);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.ConnectionEnd
class CORDL_TYPE ConnectionEnd : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::ConnectionEnd* New_ctor();

  /// @brief Method .ctor, addr 0x23e91e0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConnectionEnd();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConnectionEnd", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConnectionEnd(ConnectionEnd&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConnectionEnd", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConnectionEnd(ConnectionEnd const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1204 };

  /// @brief Field client offset 0xffffffff size 0x4
  static constexpr int32_t client{ static_cast<int32_t>(0x1) };

  /// @brief Field server offset 0xffffffff size 0x4
  static constexpr int32_t server{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ConnectionEnd, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ConnectionEnd);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ConnectionEnd*, "Org.BouncyCastle.Crypto.Tls", "ConnectionEnd");
