#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IReferenceResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IReferenceResolver)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::IReferenceResolver);
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.IReferenceResolver
class CORDL_TYPE IReferenceResolver {
public:
  // Declarations
  /// @brief Method AddReference, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddReference(::System::Object* context, ::StringW reference, ::System::Object* value);

  /// @brief Method GetReference, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetReference(::System::Object* context, ::System::Object* value);

  /// @brief Method IsReferenced, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsReferenced(::System::Object* context, ::System::Object* value);

  /// @brief Method ResolveReference, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* ResolveReference(::System::Object* context, ::StringW reference);

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReferenceResolver(IReferenceResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10307 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IReferenceResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IReferenceResolver*, "Newtonsoft.Json.Serialization", "IReferenceResolver");
