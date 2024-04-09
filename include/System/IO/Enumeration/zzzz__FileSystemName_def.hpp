#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.IO.Enumeration::FileSystemName
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO::Enumeration {
// Is value type: false
// CS Name: ::System.IO.Enumeration::FileSystemName*
class CORDL_TYPE FileSystemName : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_simpleWildcardChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_simpleWildcardChars, put = setStaticF_s_simpleWildcardChars))::ArrayW<char16_t, ::Array<char16_t>*> s_simpleWildcardChars;

  /// @brief Field s_wildcardChars, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_wildcardChars, put = setStaticF_s_wildcardChars))::ArrayW<char16_t, ::Array<char16_t>*> s_wildcardChars;

  /// @brief Method MatchPattern, addr 0x27c6c5c, size 0x754, virtual false, abstract: false, final false
  static inline bool MatchPattern(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase, bool useExtendedWildcards);

  /// @brief Method MatchesSimpleExpression, addr 0x27c5b1c, size 0x88, virtual false, abstract: false, final false
  static inline bool MatchesSimpleExpression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase);

  /// @brief Method MatchesWin32Expression, addr 0x27c5ba4, size 0x88, virtual false, abstract: false, final false
  static inline bool MatchesWin32Expression(::System::ReadOnlySpan_1<char16_t> expression, ::System::ReadOnlySpan_1<char16_t> name, bool ignoreCase);

  /// @brief Method TranslateWin32Expression, addr 0x27c555c, size 0x39c, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Enumeration::FileSystemName, 0x10>, "Size mismatch!");

} // namespace System::IO::Enumeration
NEED_NO_BOX(::System::IO::Enumeration::FileSystemName);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Enumeration::FileSystemName*, "System.IO.Enumeration", "FileSystemName");
