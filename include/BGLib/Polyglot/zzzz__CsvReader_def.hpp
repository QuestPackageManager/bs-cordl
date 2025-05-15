#pragma once
// IWYU pragma private; include "BGLib/Polyglot/CsvReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CsvReader)
namespace BGLib::Polyglot {
struct CsvReader_ParsingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BGLib::Polyglot {
struct CsvReader_ParsingMode;
}
namespace BGLib::Polyglot {
class CsvReader;
}
// Write type traits
MARK_VAL_T(::BGLib::Polyglot::CsvReader_ParsingMode);
MARK_REF_PTR_T(::BGLib::Polyglot::CsvReader);
// Dependencies
namespace BGLib::Polyglot {
// Is value type: true
// CS Name: BGLib.Polyglot.CsvReader/ParsingMode
struct CORDL_TYPE CsvReader_ParsingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CsvReader_ParsingMode_Unwrapped
  enum struct __CsvReader_ParsingMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OutQuote = static_cast<int32_t>(0x1),
    __E_InQuote = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CsvReader_ParsingMode_Unwrapped() const noexcept {
    return static_cast<__CsvReader_ParsingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CsvReader_ParsingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CsvReader_ParsingMode(int32_t value__) noexcept;

  /// @brief Field InQuote value: I32(2)
  static ::BGLib::Polyglot::CsvReader_ParsingMode const InQuote;

  /// @brief Field None value: I32(0)
  static ::BGLib::Polyglot::CsvReader_ParsingMode const None;

  /// @brief Field OutQuote value: I32(1)
  static ::BGLib::Polyglot::CsvReader_ParsingMode const OutQuote;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18047 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::Polyglot::CsvReader_ParsingMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::CsvReader_ParsingMode, 0x4>, "Size mismatch!");

} // namespace BGLib::Polyglot
// Dependencies System.Object
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: BGLib.Polyglot.CsvReader
class CORDL_TYPE CsvReader : public ::System::Object {
public:
  // Declarations
  using ParsingMode = ::BGLib::Polyglot::CsvReader_ParsingMode;

  static inline ::BGLib::Polyglot::CsvReader* New_ctor();

  /// @brief Method Parse, addr 0x22abb1c, size 0x874, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Parse(::StringW src);

  /// @brief Method .ctor, addr 0x22ac390, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CsvReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CsvReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CsvReader(CsvReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CsvReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CsvReader(CsvReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18048 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::CsvReader, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::CsvReader_ParsingMode, "BGLib.Polyglot", "CsvReader/ParsingMode");
NEED_NO_BOX(::BGLib::Polyglot::CsvReader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::CsvReader*, "BGLib.Polyglot", "CsvReader");
