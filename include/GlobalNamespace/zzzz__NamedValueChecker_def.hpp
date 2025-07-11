#pragma once
// IWYU pragma private; include "GlobalNamespace/NamedValueChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NamedValueChecker)
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class NamedValueChecker;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NamedValueChecker);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: NamedValueChecker
class CORDL_TYPE NamedValueChecker : public ::System::Object {
public:
  // Declarations
  /// @brief Method Check, addr 0x3b181b0, size 0xb0, virtual false, abstract: false, final false
  static inline bool Check(::StringW fieldName, ::System::Object* value, ::System::Object* expectedValue, ::System::Text::StringBuilder* assertMessageSb);

  static inline ::GlobalNamespace::NamedValueChecker* New_ctor();

  /// @brief Method .ctor, addr 0x3b18260, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedValueChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamedValueChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamedValueChecker(NamedValueChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamedValueChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamedValueChecker(NamedValueChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5082 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NamedValueChecker, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NamedValueChecker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NamedValueChecker*, "", "NamedValueChecker");
