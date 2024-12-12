#pragma once
// IWYU pragma private; include "GlobalNamespace/StringExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StringExtensions)
namespace System {
struct StringComparison;
}
// Forward declare root types
namespace GlobalNamespace {
class StringExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StringExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: StringExtensions
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method AnyContains, addr 0x229dee4, size 0x8c, virtual false, abstract: false, final false
  static inline bool AnyContains(::ArrayW<::StringW, ::Array<::StringW>*> stringArray, ::StringW value, ::System::StringComparison stringComparison);

  /// @brief Method Contains, addr 0x229dec4, size 0x20, virtual false, abstract: false, final false
  static inline bool Contains(::StringW source, ::StringW substring, ::System::StringComparison comp);

  /// @brief Method Truncate, addr 0x229ddfc, size 0xc8, virtual false, abstract: false, final false
  static inline ::StringW Truncate(::StringW s, int32_t length, bool appendEllipsis);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringExtensions(StringExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringExtensions(StringExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StringExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StringExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringExtensions*, "", "StringExtensions");
