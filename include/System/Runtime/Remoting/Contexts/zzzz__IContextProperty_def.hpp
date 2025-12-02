#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IContextProperty.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IContextProperty)
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContextProperty;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContextProperty);
// Dependencies
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.IContextProperty
class CORDL_TYPE IContextProperty {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  /// @brief Method Freeze, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Freeze(::System::Runtime::Remoting::Contexts::Context* newContext);

  /// @brief Method IsNewContextOK, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsNewContextOK(::System::Runtime::Remoting::Contexts::Context* newCtx);

  /// @brief Method get_Name, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  // Ctor Parameters [CppParam { name: "", ty: "IContextProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContextProperty(IContextProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3122 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContextProperty);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContextProperty*, "System.Runtime.Remoting.Contexts", "IContextProperty");
