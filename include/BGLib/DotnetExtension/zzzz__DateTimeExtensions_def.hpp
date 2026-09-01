#pragma once
// IWYU pragma private; include "BGLib\DotnetExtension\DateTimeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DateTimeExtensions)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace BGLib::DotnetExtension {
class DateTimeExtensions;
}
// Write type traits
MARK_REF_T(::BGLib::DotnetExtension::DateTimeExtensions*);
DEFINE_IL2CPP_CLASS(::BGLib::DotnetExtension::DateTimeExtensions*, "BGLib.DotnetExtension", "DateTimeExtensions");
// Dependencies System.Object
namespace BGLib::DotnetExtension {
// Is value type: false
// CS Name: BGLib.DotnetExtension.DateTimeExtensions
class CORDL_TYPE DateTimeExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsAfter, addr 0x330f1c4, size 0x6c, virtual false, abstract: false, final false
  static inline bool IsAfter(::System::DateTime dateTime, ::System::DateTime other);

  /// @brief Method IsAfterOrDefault, addr 0x330f230, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsAfterOrDefault(::System::DateTime dateTime, ::StringW other, bool defaultValue);

  /// @brief Method TryParse, addr 0x330f0fc, size 0xc8, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW value, ::by_ref<::System::DateTime> date);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeExtensions(DateTimeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeExtensions(DateTimeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20509 };

  /// @brief Field kDateFormat offset 0xffffffff size 0x8
  static constexpr ::ConstString kDateFormat{ u"yyyy-MM-dd" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BGLib::DotnetExtension::DateTimeExtensions) == 0x10, "Size mismatch!");

} // namespace BGLib::DotnetExtension
