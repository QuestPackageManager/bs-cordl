#pragma once
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
// Type: ::StringExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::StringExtensions*
class CORDL_TYPE StringExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x1074380, size 0x20, virtual false, abstract: false, final false
  static inline bool Contains(::StringW source, ::StringW substring, ::System::StringComparison comp);

  /// @brief Method Truncate, addr 0x10742b8, size 0xc8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StringExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StringExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StringExtensions*, "", "StringExtensions");
