#pragma once
// IWYU pragma private; include "System/Xml/Res.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Res)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class Res;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Res);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.Res
class CORDL_TYPE Res : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetString, addr 0x43586a8, size 0x4, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW name);

  /// @brief Method GetString, addr 0x43562ec, size 0x10, virtual false, abstract: false, final false
  static inline ::StringW GetString(::StringW name, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Res();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Res", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Res(Res&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Res", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Res(Res const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7376 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Res, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Res);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Res*, "System.Xml", "Res");
