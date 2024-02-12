#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TspException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::Tsp {
class TspException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Tsp::TspException);
// Type: Org.BouncyCastle.Tsp::TspException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Tsp {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2561))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1774))
// CS Name: ::Org.BouncyCastle.Tsp::TspException*
class CORDL_TYPE TspException : public ::System::Exception {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Tsp::TspException* New_ctor();

  /// @brief Method .ctor, addr 0x11823d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Tsp::TspException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x1181bc4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

  static inline ::Org::BouncyCastle::Tsp::TspException* New_ctor(::StringW message, ::System::Exception* e);

  /// @brief Method .ctor, addr 0x117e8e8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Exception* e);

  // Ctor Parameters [CppParam { name: "", ty: "TspException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TspException(TspException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TspException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TspException(TspException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TspException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Tsp::TspException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Tsp::TspException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Tsp::TspException*, "Org.BouncyCastle.Tsp", "TspException");
