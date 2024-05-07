#pragma once
// IWYU pragma private; include "System/Action.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Action)
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
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Action*
class CORDL_TYPE Action : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x28982a4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::System::Action* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x28981e8, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Action, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Action);
DEFINE_IL2CPP_ARG_TYPE(::System::Action*, "System", "Action");
