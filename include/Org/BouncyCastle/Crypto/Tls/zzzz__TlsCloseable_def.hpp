#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(TlsCloseable)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsCloseable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsCloseable);
// Type: Org.BouncyCastle.Crypto.Tls::TlsCloseable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1206))
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsCloseable*
class CORDL_TYPE TlsCloseable {
public:
  // Declarations
  /// @brief Method Close, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "TlsCloseable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TlsCloseable(TlsCloseable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TlsCloseable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TlsCloseable(TlsCloseable const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsCloseable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsCloseable*, "Org.BouncyCastle.Crypto.Tls", "TlsCloseable");
