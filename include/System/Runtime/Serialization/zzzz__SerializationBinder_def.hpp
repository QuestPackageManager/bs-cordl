#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/SerializationBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SerializationBinder)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class SerializationBinder;
}
// Write type traits
MARK_REF_T(::System::Runtime::Serialization::SerializationBinder*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Serialization::SerializationBinder*, "System.Runtime.Serialization", "SerializationBinder");
// Dependencies System.Object
namespace System::Runtime::Serialization {
// Is value type: false
// CS Name: System.Runtime.Serialization.SerializationBinder
class CORDL_TYPE SerializationBinder : public ::System::Object {
public:
  // Declarations
  /// @brief Method BindToName, addr 0x5b4a320, size 0xc, virtual true, abstract: false, final false
  inline void BindToName(::System::Type* serializedType, ::by_ref<::StringW> assemblyName, ::by_ref<::StringW> typeName);

  /// @brief Method BindToType, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Type* BindToType(::StringW assemblyName, ::StringW typeName);

  static inline ::System::Runtime::Serialization::SerializationBinder* New_ctor();

  /// @brief Method .ctor, addr 0x5b4a32c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationBinder(SerializationBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationBinder(SerializationBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3223 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::Serialization::SerializationBinder) == 0x10, "Size mismatch!");

} // namespace System::Runtime::Serialization
