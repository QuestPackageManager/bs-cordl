#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpObjectFactory)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpObject;
}
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpObjectFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpObjectFactory
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1653))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpObjectFactory*
class CORDL_TYPE PgpObjectFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field bcpgIn, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bcpgIn, put = __cordl_internal_set_bcpgIn))::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& __cordl_internal_get_bcpgIn();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgInputStream*> const& __cordl_internal_get_bcpgIn() const;

  constexpr void __cordl_internal_set_bcpgIn(::Org::BouncyCastle::Bcpg::BcpgInputStream* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor, addr 0x10dd6b8, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method .ctor, addr 0x10dd6ec, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextPgpObject, addr 0x10dd778, size 0xa48, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpObject* NextPgpObject();

  /// @brief Method NextObject, addr 0x10de2a8, size 0x4, virtual false, abstract: false, final false
  inline ::System::Object* NextObject();

  /// @brief Method AllPgpObjects, addr 0x10de2ac, size 0x104, virtual false, abstract: false, final false
  inline ::System::Collections::IList* AllPgpObjects();

  /// @brief Method FilterPgpObjects, addr 0x10de3b0, size 0x134, virtual false, abstract: false, final false
  inline ::System::Collections::IList* FilterPgpObjects(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "PgpObjectFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpObjectFactory(PgpObjectFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpObjectFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpObjectFactory(PgpObjectFactory const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpObjectFactory();

public:
  /// @brief Field bcpgIn, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgInputStream* ___bcpgIn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory, ___bcpgIn) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpObjectFactory*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpObjectFactory");
