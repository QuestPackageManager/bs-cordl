#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/IObjectReference.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IObjectReference)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class IObjectReference;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::IObjectReference);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.IObjectReference
class CORDL_TYPE IObjectReference {
public:
  // Declarations
  /// @brief Method GetRealObject, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "IObjectReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IObjectReference(IObjectReference const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3212 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::IObjectReference);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::IObjectReference*, "System.Runtime.Serialization", "IObjectReference");
