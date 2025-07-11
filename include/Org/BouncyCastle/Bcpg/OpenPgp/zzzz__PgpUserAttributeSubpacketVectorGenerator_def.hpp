#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/OpenPgp/PgpUserAttributeSubpacketVectorGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpUserAttributeSubpacketVectorGenerator)
namespace Org::BouncyCastle::Bcpg::Attr {
struct ImageAttrib_Format;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVector;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpUserAttributeSubpacketVectorGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.OpenPgp.PgpUserAttributeSubpacketVectorGenerator
class CORDL_TYPE PgpUserAttributeSubpacketVectorGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field list, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_list, put = __cordl_internal_set_list)) ::System::Collections::IList* list;

  /// @brief Method Generate, addr 0x254cff4, size 0x2c4, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVector* Generate();

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator* New_ctor();

  /// @brief Method SetImageAttribute, addr 0x254ceac, size 0x148, virtual true, abstract: false, final false
  inline void SetImageAttribute(::Org::BouncyCastle::Bcpg::Attr::ImageAttrib_Format imageType, ::ArrayW<uint8_t, ::Array<uint8_t>*> imageData);

  constexpr ::System::Collections::IList* const& __cordl_internal_get_list() const;

  constexpr ::System::Collections::IList*& __cordl_internal_get_list();

  constexpr void __cordl_internal_set_list(::System::Collections::IList* value);

  /// @brief Method .ctor, addr 0x254d2b8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpUserAttributeSubpacketVectorGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpUserAttributeSubpacketVectorGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpUserAttributeSubpacketVectorGenerator(PgpUserAttributeSubpacketVectorGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1672 };

  /// @brief Field list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IList* ___list;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator, ___list) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpUserAttributeSubpacketVectorGenerator*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpUserAttributeSubpacketVectorGenerator");
