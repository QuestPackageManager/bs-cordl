#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/ContextCallbackObject.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ContextBoundObject_def.hpp"
CORDL_MODULE_EXPORT(ContextCallbackObject)
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class ContextCallbackObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::ContextCallbackObject);
// Dependencies System.ContextBoundObject
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.ContextCallbackObject
class CORDL_TYPE ContextCallbackObject : public ::System::ContextBoundObject {
public:
  // Declarations
  /// @brief Method DoCallBack, addr 0x3ce3f40, size 0x4, virtual false, abstract: false, final false
  inline void DoCallBack(::System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);

  static inline ::System::Runtime::Remoting::Contexts::ContextCallbackObject* New_ctor();

  /// @brief Method .ctor, addr 0x3ce3f38, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextCallbackObject();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextCallbackObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextCallbackObject(ContextCallbackObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextCallbackObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextCallbackObject(ContextCallbackObject const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3100 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Contexts::ContextCallbackObject, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::ContextCallbackObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::ContextCallbackObject*, "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
