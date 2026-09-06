#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ISerializationBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ISerializationBinder)
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ISerializationBinder;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::ISerializationBinder*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::ISerializationBinder*, "Newtonsoft.Json.Serialization", "ISerializationBinder");
// [NullableContext(1)]
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.ISerializationBinder
class CORDL_TYPE ISerializationBinder {
public:
  // Declarations
  /// [NullableContext(2)]
  /// @brief Method BindToName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void BindToName(/* [Nullable(1)] */ ::System::Type* serializedType, ::by_ref<::StringW> assemblyName, ::by_ref<::StringW> typeName);

  /// @brief Method BindToType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* BindToType(/* [Nullable(2)] */ ::StringW assemblyName, ::StringW typeName);

  // Ctor Parameters [CppParam { name: "", ty: "ISerializationBinder", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISerializationBinder(ISerializationBinderconst&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13493 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
