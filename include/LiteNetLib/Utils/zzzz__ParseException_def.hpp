#pragma once
// IWYU pragma private; include "LiteNetLib/Utils/ParseException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ParseException)
// Forward declare root types
namespace LiteNetLib::Utils {
class ParseException;
}
// Write type traits
MARK_REF_PTR_T(::LiteNetLib::Utils::ParseException);
// Type: LiteNetLib.Utils::ParseException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, packing: None, specified_packing: None }
namespace LiteNetLib::Utils {
// Is value type: false
// CS Name: ::LiteNetLib.Utils::ParseException*
class CORDL_TYPE ParseException : public ::System::Exception {
public:
  // Declarations
  static inline ::LiteNetLib::Utils::ParseException* New_ctor(::StringW message);

  /// @brief Method .ctor, addr 0x3a68208, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::StringW message);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParseException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParseException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParseException(ParseException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParseException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParseException(ParseException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16547 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LiteNetLib::Utils::ParseException, 0x90>, "Size mismatch!");

} // namespace LiteNetLib::Utils
NEED_NO_BOX(::LiteNetLib::Utils::ParseException);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::ParseException*, "LiteNetLib.Utils", "ParseException");
