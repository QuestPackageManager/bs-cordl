#pragma once
// IWYU pragma private; include "System/IO/PathInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathInternal)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::IO {
class PathInternal;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::PathInternal);
// Dependencies System.Object
namespace System::IO {
// Is value type: false
// CS Name: System.IO.PathInternal
class CORDL_TYPE PathInternal : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_isCaseSensitive, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_s_isCaseSensitive, put = setStaticF_s_isCaseSensitive)) bool s_isCaseSensitive;

  /// @brief Method EndsInDirectorySeparator, addr 0x3d3f4a8, size 0x80, virtual false, abstract: false, final false
  static inline bool EndsInDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method GetIsCaseSensitive, addr 0x3d3f898, size 0x30c, virtual false, abstract: false, final false
  static inline bool GetIsCaseSensitive();

  /// @brief Method GetRootLength, addr 0x3d3f41c, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t GetRootLength(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method IsDirectorySeparator, addr 0x3d3f498, size 0x10, virtual false, abstract: false, final false
  static inline bool IsDirectorySeparator(char16_t c);

  /// @brief Method IsPartiallyQualified, addr 0x3d3fba4, size 0x8, virtual false, abstract: false, final false
  static inline bool IsPartiallyQualified(::StringW path);

  /// @brief Method IsRoot, addr 0x3d3f6e4, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsRoot(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method StartsWithDirectorySeparator, addr 0x3d3f528, size 0x7c, virtual false, abstract: false, final false
  static inline bool StartsWithDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path);

  /// @brief Method TrimEndingDirectorySeparator, addr 0x3d3f5a4, size 0x140, virtual false, abstract: false, final false
  static inline ::StringW TrimEndingDirectorySeparator(::StringW path);

  /// @brief Method TrimEndingDirectorySeparator, addr 0x3d3f760, size 0xe0, virtual false, abstract: false, final false
  static inline ::System::ReadOnlySpan_1<char16_t> TrimEndingDirectorySeparator(::System::ReadOnlySpan_1<char16_t> path);

  static inline bool getStaticF_s_isCaseSensitive();

  /// @brief Method get_IsCaseSensitive, addr 0x3d3f840, size 0x58, virtual false, abstract: false, final false
  static inline bool get_IsCaseSensitive();

  static inline void setStaticF_s_isCaseSensitive(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PathInternal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PathInternal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PathInternal(PathInternal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PathInternal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PathInternal(PathInternal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3570 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::PathInternal, 0x10>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::PathInternal);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PathInternal*, "System.IO", "PathInternal");
