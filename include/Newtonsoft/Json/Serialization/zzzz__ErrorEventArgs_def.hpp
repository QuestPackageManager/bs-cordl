#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ErrorEventArgs.hpp"
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
// Dependencies System.EventArgs
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.ErrorEventArgs
class CORDL_TYPE ErrorEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_CurrentObject)) ::System::Object* CurrentObject;

  __declspec(property(get = get_ErrorContext)) ::Newtonsoft::Json::Serialization::ErrorContext* ErrorContext;

  /// @brief Field <CurrentObject>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__CurrentObject_k__BackingField, put = __cordl_internal_set__CurrentObject_k__BackingField)) ::System::Object* _CurrentObject_k__BackingField;

  /// @brief Field <ErrorContext>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__ErrorContext_k__BackingField,
                      put = __cordl_internal_set__ErrorContext_k__BackingField)) ::Newtonsoft::Json::Serialization::ErrorContext* _ErrorContext_k__BackingField;

  static inline ::Newtonsoft::Json::Serialization::ErrorEventArgs* New_ctor(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);

  constexpr ::System::Object* const& __cordl_internal_get__CurrentObject_k__BackingField() const;

  constexpr ::System::Object*& __cordl_internal_get__CurrentObject_k__BackingField();

  constexpr ::Newtonsoft::Json::Serialization::ErrorContext* const& __cordl_internal_get__ErrorContext_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Serialization::ErrorContext*& __cordl_internal_get__ErrorContext_k__BackingField();

  constexpr void __cordl_internal_set__CurrentObject_k__BackingField(::System::Object* value);

  constexpr void __cordl_internal_set__ErrorContext_k__BackingField(::Newtonsoft::Json::Serialization::ErrorContext* value);

  /// @brief Method .ctor, addr 0x3ee371c, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* currentObject, ::Newtonsoft::Json::Serialization::ErrorContext* errorContext);

  /// @brief Method get_CurrentObject, addr 0x3ee370c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_CurrentObject();

  /// @brief Method get_ErrorContext, addr 0x3ee3714, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::ErrorContext* get_ErrorContext();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ErrorEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ErrorEventArgs(ErrorEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ErrorEventArgs(ErrorEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10299 };

  /// @brief Field <CurrentObject>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____CurrentObject_k__BackingField;

  /// @brief Field <ErrorContext>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ErrorContext* ____ErrorContext_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorEventArgs, ____CurrentObject_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ErrorEventArgs, ____ErrorContext_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ErrorEventArgs, 0x20>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ErrorEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ErrorEventArgs*, "Newtonsoft.Json.Serialization", "ErrorEventArgs");
