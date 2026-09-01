#pragma once
// IWYU pragma private; include "System\ContextBoundObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MarshalByRefObject_def.hpp"
CORDL_MODULE_EXPORT(ContextBoundObject)
// Forward declare root types
namespace System {
class ContextBoundObject;
}
// Write type traits
MARK_REF_T(::System::ContextBoundObject*);
DEFINE_IL2CPP_CLASS(::System::ContextBoundObject*, "System", "ContextBoundObject");
// Dependencies System.MarshalByRefObject
namespace System {
// Is value type: false
// CS Name: System.ContextBoundObject
class CORDL_TYPE ContextBoundObject : public ::System::MarshalByRefObject {
public:
  // Declarations
  static inline ::System::ContextBoundObject* New_ctor();

  /// @brief Method .ctor, addr 0x5c75300, size 0x4, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2559 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::ContextBoundObject) == 0x18, "Size mismatch!");

} // namespace System
