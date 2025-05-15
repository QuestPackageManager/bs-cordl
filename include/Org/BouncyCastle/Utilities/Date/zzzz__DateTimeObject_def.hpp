#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Date/DateTimeObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DateTimeObject)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Date {
class DateTimeObject;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Date::DateTimeObject);
// Dependencies System.DateTime, System.Object
namespace Org::BouncyCastle::Utilities::Date {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Date.DateTimeObject
class CORDL_TYPE DateTimeObject : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value)) ::System::DateTime Value;

  /// @brief Field dt, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dt, put = __cordl_internal_set_dt)) ::System::DateTime dt;

  static inline ::Org::BouncyCastle::Utilities::Date::DateTimeObject* New_ctor(::System::DateTime dt);

  /// @brief Method ToString, addr 0x25d5ba0, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::DateTime const& __cordl_internal_get_dt() const;

  constexpr ::System::DateTime& __cordl_internal_get_dt();

  constexpr void __cordl_internal_set_dt(::System::DateTime value);

  /// @brief Method .ctor, addr 0x25cbd74, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::DateTime dt);

  /// @brief Method get_Value, addr 0x25d5b98, size 0x8, virtual false, abstract: false, final false
  inline ::System::DateTime get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DateTimeObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeObject(DateTimeObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeObject(DateTimeObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1791 };

  /// @brief Field dt, offset: 0x10, size: 0x8, def value: None
  ::System::DateTime ___dt;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Utilities::Date::DateTimeObject, ___dt) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Date::DateTimeObject, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Date
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Date::DateTimeObject);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Date::DateTimeObject*, "Org.BouncyCastle.Utilities.Date", "DateTimeObject");
