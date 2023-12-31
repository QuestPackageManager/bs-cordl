#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ErrorEventArgs)
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ErrorEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ErrorEventArgs);
// Type: Newtonsoft.Json.Serialization::ErrorEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11916))
// CS Name: ::Newtonsoft.Json.Serialization::ErrorEventArgs*
class CORDL_TYPE ErrorEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <CurrentObject>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__CurrentObject_k__BackingField, put = __set__CurrentObject_k__BackingField))::System::Object* _CurrentObject_k__BackingField;

  /// @brief Field <ErrorContext>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__ErrorContext_k__BackingField, put = __set__ErrorContext_k__BackingField))::Newtonsoft::Json::Serialization::ErrorContext* _ErrorContext_k__BackingField;

  __declspec(property(get = get_CurrentObject, put = set_CurrentObject))::System::Object* CurrentObject;

  __declspec(property(get = get_ErrorContext, put = set_ErrorContext))::Newtonsoft::Json::Serialization::ErrorContext* ErrorContext;

  constexpr ::System::Object*& __get__CurrentObject_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__CurrentObject_k__BackingField() const;

  constexpr void __set__CurrentObject_k__BackingField(::System::Object* value);

  constexpr ::Newtonsoft::Json::Serialization::ErrorContext*& __get__ErrorContext_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ErrorContext*> const& __get__ErrorContext_k__BackingField() const;

  constexpr void __set__ErrorContext_k__BackingField(::Newtonsoft::Json::Serialization::ErrorContext* value);

  /// @brief Method get_CurrentObject, addr 0x266e72c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_CurrentObject();

  /// @brief Method set_CurrentObject, addr 0x266e734, size 0x8, virtual false, abstract: false, final false
  inline void set_CurrentObject(::System::Object* value);

  /// @brief Method get_ErrorContext, addr 0x266e73c, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ErrorContext* get_ErrorContext();

  /// @brief Method set_ErrorContext, addr 0x266e744, size 0x8, virtual false, abstract: false, final false
  inline void set_ErrorContext(::Newtonsoft::Json::Serialization::ErrorContext* value);

  static inline ::Newtonsoft::Json::Serialization::ErrorEventArgs* New_ctor(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);

  /// @brief Method .ctor, addr 0x266e74c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);

  // Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorEventArgs(ErrorEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorEventArgs(ErrorEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorEventArgs();

public:
  /// @brief Field <CurrentObject>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____CurrentObject_k__BackingField;

  /// @brief Field <ErrorContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ErrorContext* ____ErrorContext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ErrorEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorEventArgs, ____CurrentObject_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorEventArgs, ____ErrorContext_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ErrorEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ErrorEventArgs*, "Newtonsoft.Json.Serialization", "ErrorEventArgs");
