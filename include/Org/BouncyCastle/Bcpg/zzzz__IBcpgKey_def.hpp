#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/IBcpgKey.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IBcpgKey)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class IBcpgKey;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::IBcpgKey);
// Type: Org.BouncyCastle.Bcpg::IBcpgKey
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::IBcpgKey*
class CORDL_TYPE IBcpgKey {
public:
  // Declarations
  __declspec(property(get = get_Format)) ::StringW Format;

  /// @brief Method get_Format, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_Format();

  // Ctor Parameters [CppParam { name: "", ty: "IBcpgKey", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBcpgKey(IBcpgKey&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBcpgKey", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBcpgKey(IBcpgKey const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 562 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::IBcpgKey);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::IBcpgKey*, "Org.BouncyCastle.Bcpg", "IBcpgKey");
