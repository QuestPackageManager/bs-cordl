#pragma once
// IWYU pragma private; include "System/Runtime/Remoting/Contexts/IContributeDynamicSink.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContributeDynamicSink)
namespace System::Runtime::Remoting::Contexts {
class IDynamicMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class IContributeDynamicSink;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Contexts::IContributeDynamicSink);
// Dependencies
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// CS Name: System.Runtime.Remoting.Contexts.IContributeDynamicSink
class CORDL_TYPE IContributeDynamicSink {
public:
  // Declarations
  /// @brief Method GetDynamicSink, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Runtime::Remoting::Contexts::IDynamicMessageSink* GetDynamicSink();

  // Ctor Parameters [CppParam { name: "", ty: "IContributeDynamicSink", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContributeDynamicSink(IContributeDynamicSink const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3124 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Remoting::Contexts
NEED_NO_BOX(::System::Runtime::Remoting::Contexts::IContributeDynamicSink);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Contexts::IContributeDynamicSink*, "System.Runtime.Remoting.Contexts", "IContributeDynamicSink");
