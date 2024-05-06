#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: Org.BouncyCastle.Bcpg::BcpgObject
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::BcpgObject*
class CORDL_TYPE BcpgObject : public ::System::Object {
public:
  // Declarations
  /// @brief Method Encode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut);

  /// @brief Method GetEncoded, addr 0x1432e0c, size 0xb0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  static inline ::Org::BouncyCastle::Bcpg::BcpgObject* New_ctor();

  /// @brief Method .ctor, addr 0x1432f5c, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgObject, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgObject*, "Org.BouncyCastle.Bcpg", "BcpgObject");
