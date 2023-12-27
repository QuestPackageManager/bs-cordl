#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SerializationBinder)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationBinder;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::SerializationBinder);
// Type: System.Runtime.Serialization::SerializationBinder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3206))
// CS Name: ::System.Runtime.Serialization::SerializationBinder*
class CORDL_TYPE SerializationBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Method BindToName addr 0x24b4f68 size 0xc virtual true final false
  inline void BindToName(::System::Type* serializedType, ByRef<::StringW> assemblyName, ByRef<::StringW> typeName);

  /// @brief Method BindToType addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  static inline ::System::Runtime::Serialization::SerializationBinder* New_ctor();

  /// @brief Method .ctor addr 0x24b4f74 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationBinder(SerializationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationBinder(SerializationBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::SerializationBinder, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::SerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::SerializationBinder*, "System.Runtime.Serialization", "SerializationBinder");
