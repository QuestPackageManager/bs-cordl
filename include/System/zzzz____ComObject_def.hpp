#pragma once
// IWYU pragma private; include "System/__ComObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(__ComObject)
// Forward declare root types
namespace System {
class __ComObject;
}
// Write type traits
MARK_REF_PTR_T(::System::__ComObject);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.__ComObject
class CORDL_TYPE __ComObject : public ::System::Object {
public:
  // Declarations
  static inline ::System::__ComObject* New_ctor();

  /// @brief Method .ctor, addr 0x3e45ba8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ComObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ComObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ComObject(__ComObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ComObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ComObject(__ComObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2652 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__ComObject, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::__ComObject);
DEFINE_IL2CPP_ARG_TYPE(::System::__ComObject*, "System", "__ComObject");
