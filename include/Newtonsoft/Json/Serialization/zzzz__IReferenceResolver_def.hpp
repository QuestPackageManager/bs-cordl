#pragma once
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
// Type: Newtonsoft.Json.Serialization::IReferenceResolver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11875))
// CS Name: ::Newtonsoft.Json.Serialization::IReferenceResolver*
class CORDL_TYPE IReferenceResolver {
public:
  // Declarations
  /// @brief Method ResolveReference addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ResolveReference(::System::Object* context, ::StringW reference);

  /// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW GetReference(::System::Object* context, ::System::Object* value);

  /// @brief Method IsReferenced addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool IsReferenced(::System::Object* context, ::System::Object* value);

  /// @brief Method AddReference addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddReference(::System::Object* context, ::StringW reference, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IReferenceResolver(IReferenceResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IReferenceResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReferenceResolver(IReferenceResolver const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IReferenceResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IReferenceResolver*, "Newtonsoft.Json.Serialization", "IReferenceResolver");
