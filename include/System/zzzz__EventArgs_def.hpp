#pragma once
// IWYU pragma private; include "System/EventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EventArgs)
// Forward declare root types
namespace System {
class EventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::EventArgs);
// Dependencies System.Object
namespace System {
// Is value type: false
// CS Name: System.EventArgs
class CORDL_TYPE EventArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::EventArgs* Empty;

  static inline ::System::EventArgs* New_ctor();

  /// @brief Method .ctor, addr 0x3dcffa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::EventArgs* getStaticF_Empty();

  static inline void setStaticF_Empty(::System::EventArgs* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventArgs(EventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventArgs(EventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2378 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EventArgs, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::EventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::EventArgs*, "System", "EventArgs");
