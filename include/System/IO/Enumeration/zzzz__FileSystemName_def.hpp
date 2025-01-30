#pragma once
// IWYU pragma private; include "System/IO/Enumeration/FileSystemName.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FileSystemName)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO::Enumeration {
class FileSystemName;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Enumeration::FileSystemName);
// Dependencies System.Object
namespace System::IO::Enumeration {
// Is value type: false
// CS Name: System.IO.Enumeration.FileSystemName
class CORDL_TYPE FileSystemName : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_simpleWildcardChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_simpleWildcardChars, put = setStaticF_s_simpleWildcardChars)) ::ArrayW<char16_t, ::Array<char16_t>*> s_simpleWildcardChars;

  /// @brief Field s_wildcardChars, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_wildcardChars, put = setStaticF_s_wildcardChars)) ::ArrayW<char16_t, ::Array<char16_t>*> s_wildcardChars;

  /// @brief Method MatchPattern, addr 0x3d887e8, size 0x738, virtual false, abstract: false, final false
  static inline bool MatchPattern(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase, bool useExtendedWildcards);

  /// @brief Method MatchesSimpleExpression, addr 0x3d876b0, size 0x88, virtual false, abstract: false, final false
  static inline bool MatchesSimpleExpression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase);

  /// @brief Method MatchesWin32Expression, addr 0x3d87738, size 0x88, virtual false, abstract: false, final false
  static inline bool MatchesWin32Expression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase);

  /// @brief Method TranslateWin32Expression, addr 0x3d87110, size 0x378, virtual false, abstract: false, final false
  static inline ::StringW TranslateWin32Expression(::StringW expression);

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_simpleWildcardChars();

  static inline ::ArrayW<char16_t, ::Array<char16_t>*> getStaticF_s_wildcardChars();

  static inline void setStaticF_s_simpleWildcardChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  static inline void setStaticF_s_wildcardChars(::ArrayW<char16_t, ::Array<char16_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FileSystemName();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FileSystemName", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FileSystemName(FileSystemName&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FileSystemName", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FileSystemName(FileSystemName const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemName, 0x10>, "Size mismatch!");

} // namespace System::IO::Enumeration
NEED_NO_BOX(::System::IO::Enumeration::FileSystemName);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemName*, "System.IO.Enumeration", "FileSystemName");
