#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CsvReader)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Polyglot {
struct __CsvReader__ParsingMode;
}
// Forward declare root types
namespace Polyglot {
struct __CsvReader__ParsingMode;
}
namespace Polyglot {
class CsvReader;
}
// Write type traits
MARK_VAL_T(::Polyglot::__CsvReader__ParsingMode);
MARK_REF_PTR_T(::Polyglot::CsvReader);
// Type: ::ParsingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15546))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __CsvReader__ParsingMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CsvReader__ParsingMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::Polyglot::__CsvReader__ParsingMode const None;

  /// @brief Field OutQuote value: static_cast<int32_t>(0x1)
  static ::Polyglot::__CsvReader__ParsingMode const OutQuote;

  /// @brief Field InQuote value: static_cast<int32_t>(0x2)
  static ::Polyglot::__CsvReader__ParsingMode const InQuote;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::__CsvReader__ParsingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::Polyglot::__CsvReader__ParsingMode, value__) == 0x0, "Offset mismatch!");

} // namespace Polyglot
// Type: Polyglot::CsvReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Polyglot {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15547))
// CS Name: ::Polyglot::CsvReader*
class CORDL_TYPE CsvReader : public ::System::Object {
public:
  // Declarations
  using ParsingMode = ::Polyglot::__CsvReader__ParsingMode;

  /// @brief Method Parse, addr 0x2800a84, size 0x7e8, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* Parse(::StringW src);

  static inline ::Polyglot::CsvReader* New_ctor();

  /// @brief Method .ctor, addr 0x280126c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CsvReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CsvReader(CsvReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CsvReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CsvReader(CsvReader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CsvReader();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::CsvReader, 0x10>, "Size mismatch!");

} // namespace Polyglot
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::__CsvReader__ParsingMode, "Polyglot", "CsvReader/ParsingMode");
NEED_NO_BOX(::Polyglot::CsvReader);
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::CsvReader*, "Polyglot", "CsvReader");
