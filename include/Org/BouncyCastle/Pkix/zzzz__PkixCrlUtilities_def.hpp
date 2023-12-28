#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixCrlUtilities)
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::X509::Store {
class X509CrlStoreSelector;
}
namespace System {
struct DateTime;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
namespace Org::BouncyCastle::Utilities::Collections {
class ISet;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixCrlUtilities;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixCrlUtilities);
// Type: Org.BouncyCastle.Pkix::PkixCrlUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1725))
// CS Name: ::Org.BouncyCastle.Pkix::PkixCrlUtilities*
class CORDL_TYPE PkixCrlUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method FindCrls addr 0x1105080 size 0x764 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix,
                                                                     ::System::DateTime currentDate);

  /// @brief Method FindCrls addr 0x1105d5c size 0x1d4 virtual true final false
  inline ::Org::BouncyCastle::Utilities::Collections::ISet* FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlselect, ::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix);

  /// @brief Method FindCrls addr 0x11057e4 size 0x578 virtual false final false
  inline ::System::Collections::ICollection* FindCrls(::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* crlSelect, ::System::Collections::IList* crlStores);

  static inline ::Org::BouncyCastle::Pkix::PkixCrlUtilities* New_ctor();

  /// @brief Method .ctor addr 0x1105070 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PkixCrlUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkixCrlUtilities(PkixCrlUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkixCrlUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkixCrlUtilities(PkixCrlUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkixCrlUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixCrlUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixCrlUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixCrlUtilities*, "Org.BouncyCastle.Pkix", "PkixCrlUtilities");
