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
struct __CsvReader__ParsingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace BGLib::Polyglot {
struct __CsvReader__ParsingMode;
}
namespace BGLib::Polyglot {
class CsvReader;
}
// Write type traits
MARK_VAL_T(::BGLib::Polyglot::__CsvReader__ParsingMode);
MARK_REF_PTR_T(::BGLib::Polyglot::CsvReader);
// Type: ::ParsingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: true
// CS Name: ::CsvReader::ParsingMode
struct CORDL_TYPE __CsvReader__ParsingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____CsvReader__ParsingMode_Unwrapped
  enum struct ____CsvReader__ParsingMode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_OutQuote = static_cast<int32_t>(0x1),
    __E_InQuote = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____CsvReader__ParsingMode_Unwrapped() const noexcept {
    return static_cast<____CsvReader__ParsingMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CsvReader__ParsingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CsvReader__ParsingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field InQuote value: static_cast<int32_t>(0x2)
  static ::BGLib::Polyglot::__CsvReader__ParsingMode const InQuote;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::BGLib::Polyglot::__CsvReader__ParsingMode const None;

  /// @brief Field OutQuote value: static_cast<int32_t>(0x1)
  static ::BGLib::Polyglot::__CsvReader__ParsingMode const OutQuote;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17977 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::__CsvReader__ParsingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::BGLib::Polyglot::__CsvReader__ParsingMode, value__) == 0x0, "Offset mismatch!");

} // namespace BGLib::Polyglot
// Type: BGLib.Polyglot::CsvReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::Polyglot {
// Is value type: false
// CS Name: ::BGLib.Polyglot::CsvReader*
class CORDL_TYPE CsvReader : public ::System::Object {
public:
  // Declarations
  using ParsingMode = ::BGLib::Polyglot::__CsvReader__ParsingMode;

  static inline ::BGLib::Polyglot::CsvReader* New_ctor();

  /// @brief Method Parse, addr 0x226c0bc, size 0x874, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Parse(::StringW src);

  /// @brief Method .ctor, addr 0x226c930, size 0x8, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17978 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::Polyglot::CsvReader, 0x10>, "Size mismatch!");

} // namespace BGLib::Polyglot
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::__CsvReader__ParsingMode, "BGLib.Polyglot", "CsvReader/ParsingMode");
NEED_NO_BOX(::BGLib::Polyglot::CsvReader);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::Polyglot::CsvReader*, "BGLib.Polyglot", "CsvReader");
