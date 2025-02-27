#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/OriginatorID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__X509CertStoreSelector_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OriginatorID)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class OriginatorID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::OriginatorID);
// Dependencies Org.BouncyCastle.X509.Store.X509CertStoreSelector
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.OriginatorID
class CORDL_TYPE OriginatorID : public ::Org::BouncyCastle::X509::Store::X509CertStoreSelector {
public:
  // Declarations
  /// @brief Method Equals, addr 0x268024c, size 0x12c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x26801a8, size 0xa4, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Cms::OriginatorID* New_ctor();

  /// @brief Method .ctor, addr 0x267db38, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OriginatorID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OriginatorID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OriginatorID(OriginatorID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OriginatorID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OriginatorID(OriginatorID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::OriginatorID, 0x88>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::OriginatorID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::OriginatorID*, "Org.BouncyCastle.Cms", "OriginatorID");
