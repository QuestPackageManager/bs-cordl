#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/InvalidTypeException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidTypeException)
// Forward declare root types
namespace LiteNetLib::Utils {
class InvalidTypeException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::InvalidTypeException);
// Dependencies System.ArgumentException
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: LiteNetLib.Utils.InvalidTypeException
class CORDL_TYPE InvalidTypeException : public ::System::ArgumentException {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::InvalidTypeException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x56f8fdc, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidTypeException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidTypeException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidTypeException(InvalidTypeException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidTypeException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidTypeException(InvalidTypeException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19876 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::InvalidTypeException, 0x98>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::InvalidTypeException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::InvalidTypeException*, "LiteNetLib.Utils", "InvalidTypeException");
