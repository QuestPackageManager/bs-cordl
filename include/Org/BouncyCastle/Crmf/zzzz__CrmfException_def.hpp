#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CrmfException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class CrmfException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::CrmfException);
// Type: Org.BouncyCastle.Crmf::CrmfException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2561))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(698))
// CS Name: ::Org.BouncyCastle.Crmf::CrmfException*
class CORDL_TYPE CrmfException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crmf::CrmfException* New_ctor();

  /// @brief Method .ctor, addr 0x123d52c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crmf::CrmfException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x123d584, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Crmf::CrmfException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor, addr 0x123b838, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  // Ctor Parameters [CppParam { name: "", ty: "CrmfException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CrmfException(CrmfException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CrmfException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CrmfException(CrmfException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CrmfException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::CrmfException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::CrmfException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::CrmfException*, "Org.BouncyCastle.Crmf", "CrmfException");
