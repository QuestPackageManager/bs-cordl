#pragma once
// IWYU pragma private; include "System/Action.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Action)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class Action;
}
// Write type traits
MARK_REF_PTR_T(::System::Action);
// Type: System::Action
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Action*
class CORDL_TYPE Action : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x3cf2e98, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::System::Action* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3cf2e10, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Action();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Action(Action&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Action(Action const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2323 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Action, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Action);
DEFINE_IL2CPP_ARG_TYPE(::System::Action*, "System", "Action");
