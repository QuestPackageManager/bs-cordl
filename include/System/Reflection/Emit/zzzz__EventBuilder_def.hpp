#pragma once
// IWYU pragma private; include "System/Reflection/Emit/EventBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventBuilder)
// Forward declare root types
namespace System::Reflection::Emit {
class EventBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::EventBuilder);
// Dependencies System.Object
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: System.Reflection.Emit.EventBuilder
class CORDL_TYPE EventBuilder : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventBuilder(EventBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventBuilder(EventBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3541 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::EventBuilder, 0x10>, "Size mismatch!");

} // namespace System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::EventBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::EventBuilder*, "System.Reflection.Emit", "EventBuilder");
