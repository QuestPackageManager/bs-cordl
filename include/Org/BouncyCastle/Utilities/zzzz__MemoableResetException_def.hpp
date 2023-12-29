#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__InvalidCastException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MemoableResetException)
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class MemoableResetException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::MemoableResetException);
// Type: Org.BouncyCastle.Utilities::MemoableResetException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2424))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1835))
// CS Name: ::Org.BouncyCastle.Utilities::MemoableResetException*
class CORDL_TYPE MemoableResetException : public ::System::InvalidCastException {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::MemoableResetException* New_ctor(::StringW msg);

  /// @brief Method .ctor addr 0x10fd9f4 size 0x8 virtual false final false
  inline void _ctor(::StringW msg);

  // Ctor Parameters [CppParam { name: "", ty: "MemoableResetException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemoableResetException(MemoableResetException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemoableResetException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemoableResetException(MemoableResetException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoableResetException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::MemoableResetException, 0x90>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::MemoableResetException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::MemoableResetException*, "Org.BouncyCastle.Utilities", "MemoableResetException");
