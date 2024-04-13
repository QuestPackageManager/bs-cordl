#pragma once
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
// Type: System::EventArgs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::EventArgs*
class CORDL_TYPE EventArgs : public ::System::Object {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::EventArgs* Empty;

  static inline ::System::EventArgs* New_ctor();

  /// @brief Method .ctor, addr 0x281c1cc, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EventArgs, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::EventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::EventArgs*, "System", "EventArgs");
