#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpUserAttributeSubpacketVector)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
namespace Org::BouncyCastle::Bcpg::Attr {
class ImageAttrib;
}
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVector
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1671))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpUserAttributeSubpacketVector*
class CORDL_TYPE PgpUserAttributeSubpacketVector : public ::System::Object {
public:
  // Declarations
  /// @brief Field packets, offset 0x10, size 0x8
  __declspec(property(get = __get_packets, put = __set_packets))::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> packets;

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*>& __get_packets();

  constexpr ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> const& __get_packets() const;

  constexpr void __set_packets(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*
  New_ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> packets);

  /// @brief Method .ctor addr 0x10cd480 size 0x28 virtual false final false
  inline void _ctor(::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> packets);

  /// @brief Method GetSubpacket addr 0x10cd4a8 size 0xa0 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* GetSubpacket(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag type);

  /// @brief Method GetImageAttribute addr 0x10cd548 size 0x80 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::Attr::ImageAttrib* GetImageAttribute();

  /// @brief Method ToSubpacketArray addr 0x10cd5c8 size 0x8 virtual false final false
  inline ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> ToSubpacketArray();

  /// @brief Method Equals addr 0x10cd5d0 size 0x124 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x10cd6f4 size 0x78 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpUserAttributeSubpacketVector(PgpUserAttributeSubpacketVector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpUserAttributeSubpacketVector(PgpUserAttributeSubpacketVector const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpUserAttributeSubpacketVector();

public:
  /// @brief Field packets, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, ::Array<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*>*> ___packets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUserAttributeSubpacketVector");
