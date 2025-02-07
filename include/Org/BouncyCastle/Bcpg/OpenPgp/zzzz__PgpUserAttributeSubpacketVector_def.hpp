#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpUserAttributeSubpacketVector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpUserAttributeSubpacketVector)
namespace Org::BouncyCastle::Bcpg::Attr {
class ImageAttrib;
}
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpUserAttributeSubpacketVector
class CORDL_TYPE PgpUserAttributeSubpacketVector : public ::System::Object {
public:
  // Declarations
  /// @brief Field packets, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_packets,
                      put = __cordl_internal_set_packets)) ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>
      packets;

  /// @brief Method Equals, addr 0x254d348, size 0x124, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x254d46c, size 0x78, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetImageAttribute, addr 0x254d2c0, size 0x80, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* GetImageAttribute();

  /// @brief Method GetSubpacket, addr 0x254d220, size 0xa0, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* GetSubpacket(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> packets);

  /// @brief Method ToSubpacketArray, addr 0x254d340, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> ToSubpacketArray();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> const& __cordl_internal_get_packets() const;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>& __cordl_internal_get_packets();

  constexpr void __cordl_internal_set_packets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> value);

  /// @brief Method .ctor, addr 0x254d1f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> packets);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpUserAttributeSubpacketVector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpUserAttributeSubpacketVector(PgpUserAttributeSubpacketVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpUserAttributeSubpacketVector(PgpUserAttributeSubpacketVector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1671 };

  /// @brief Field packets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> ___packets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, ___packets) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUserAttributeSubpacketVector");
