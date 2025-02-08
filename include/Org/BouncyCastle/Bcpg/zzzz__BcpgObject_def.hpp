#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/BcpgObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BcpgObject)
namespace Org::BouncyCastle::Bcpg {
class BcpgOutputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgObject);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.BcpgObject
class CORDL_TYPE BcpgObject : public ::System::Object {
public:
  // Declarations
  /// @brief Method Encode, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x2646b44, size 0xb8, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::BcpgObject* New_ctor();

  /// @brief Method .ctor, addr 0x2646c98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BcpgObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BcpgObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BcpgObject(BcpgObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BcpgObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BcpgObject(BcpgObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 554 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgObject, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgObject*, "Org.BouncyCastle.Bcpg", "BcpgObject");
