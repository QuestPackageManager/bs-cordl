#pragma once
// IWYU pragma private; include "System/Xml/Xsl/Runtime/StringConcat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringConcat)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace System::Xml::Xsl::Runtime {
struct StringConcat;
}
// Write type traits
MARK_VAL_T(::System::Xml::Xsl::Runtime::StringConcat);
// Dependencies
namespace System::Xml::Xsl::Runtime {
// Is value type: true
// CS Name: System.Xml.Xsl.Runtime.StringConcat
struct CORDL_TYPE StringConcat {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Method Clear, addr 0x6161c14, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ConcatNoDelimiter, addr 0x6161d1c, size 0x2c8, virtual false, abstract: false, final false
  inline void ConcatNoDelimiter(::StringW s);

  /// @brief Method GetResult, addr 0x6161c28, size 0xf4, virtual false, abstract: false, final false
  inline ::StringW GetResult();

  /// @brief Method get_Count, addr 0x6161c20, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Count();

  // Ctor Parameters []
  // @brief default ctor
  constexpr StringConcat();

  // Ctor Parameters [CppParam { name: "s1", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s2", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "s3", ty:
  // "::StringW", modifiers: "", def_value: None }, CppParam { name: "s4", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "delimiter", ty: "::StringW", modifiers: "", def_value:
  // None }, CppParam { name: "strList", ty: "::System::Collections::Generic::List_1<::StringW>*", modifiers: "", def_value: None }, CppParam { name: "idxStr", ty: "int32_t", modifiers: "", def_value:
  // None }]
  constexpr StringConcat(::StringW s1, ::StringW s2, ::StringW s3, ::StringW s4, ::StringW delimiter, ::System::Collections::Generic::List_1<::StringW>* strList, int32_t idxStr) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9542 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field s1, offset: 0x0, size: 0x8, def value: None
  ::StringW s1;

  /// @brief Field s2, offset: 0x8, size: 0x8, def value: None
  ::StringW s2;

  /// @brief Field s3, offset: 0x10, size: 0x8, def value: None
  ::StringW s3;

  /// @brief Field s4, offset: 0x18, size: 0x8, def value: None
  ::StringW s4;

  /// @brief Field delimiter, offset: 0x20, size: 0x8, def value: None
  ::StringW delimiter;

  /// @brief Field strList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* strList;

  /// @brief Field idxStr, offset: 0x30, size: 0x4, def value: None
  int32_t idxStr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Xsl::Runtime::StringConcat, s1) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Xsl::Runtime::StringConcat, s2) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Xsl::Runtime::StringConcat, s3) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Xsl::Runtime::StringConcat, s4) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Xsl::Runtime::StringConcat, delimiter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Xsl::Runtime::StringConcat, strList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Xsl::Runtime::StringConcat, idxStr) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Xsl::Runtime::StringConcat, 0x38>, "Size mismatch!");

} // namespace System::Xml::Xsl::Runtime
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Xsl::Runtime::StringConcat, "System.Xml.Xsl.Runtime", "StringConcat");
