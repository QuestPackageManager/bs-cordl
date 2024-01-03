#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CmsCompressedDataGenerator)
namespace Org::BouncyCastle::Cms {
class CmsCompressedData;
}
namespace Org::BouncyCastle::Cms {
class CmsProcessable;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsCompressedDataGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsCompressedDataGenerator);
// Type: Org.BouncyCastle.Cms::CmsCompressedDataGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(629))
// CS Name: ::Org.BouncyCastle.Cms::CmsCompressedDataGenerator*
class CORDL_TYPE CmsCompressedDataGenerator : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Cms::CmsCompressedDataGenerator* New_ctor();

  /// @brief Method .ctor, addr 0x11dcb44, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Generate, addr 0x11dcb4c, size 0x3ec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Cms::CmsCompressedData* Generate(::Org::BouncyCastle::Cms::CmsProcessable* content, ::StringW compressionOid);

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsCompressedDataGenerator(CmsCompressedDataGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsCompressedDataGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsCompressedDataGenerator(CmsCompressedDataGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsCompressedDataGenerator();

public:
  /// @brief Field ZLib offset 0xffffffff size 0x8
  static constexpr ::ConstString ZLib{ u"1.2.840.113549.1.9.16.3.8" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsCompressedDataGenerator, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsCompressedDataGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsCompressedDataGenerator*, "Org.BouncyCastle.Cms", "CmsCompressedDataGenerator");
