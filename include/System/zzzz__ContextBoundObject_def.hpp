#pragma once
// IWYU pragma private; include "System/ContextBoundObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
CORDL_MODULE_EXPORT(ContextBoundObject)
// Forward declare root types
namespace System {
class ContextBoundObject;
}
// Write type traits
MARK_REF_PTR_T(::System::ContextBoundObject);
// Dependencies System.MarshalByRefObject
namespace System {
// Is value type: false
// CS Name: System.ContextBoundObject
class CORDL_TYPE ContextBoundObject : public ::System::MarshalByRefObject {
public:
  // Declarations
  static inline ::System::ContextBoundObject* New_ctor();

  /// @brief Method .ctor, addr 0x3e18918, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextBoundObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextBoundObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextBoundObject(ContextBoundObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextBoundObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextBoundObject(ContextBoundObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2550 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ContextBoundObject, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ContextBoundObject);
DEFINE_IL2CPP_ARG_TYPE(::System::ContextBoundObject*, "System", "ContextBoundObject");
