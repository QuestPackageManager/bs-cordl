#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Schema/ValidationEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValidationEventArgs)
namespace Newtonsoft::Json::Schema {
class JsonSchemaException;
}
// Forward declare root types
namespace Newtonsoft::Json::Schema {
class ValidationEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Schema::ValidationEventArgs);
// Dependencies System.EventArgs
namespace Newtonsoft::Json::Schema {
// Is value type: false
// CS Name: Newtonsoft.Json.Schema.ValidationEventArgs
class CORDL_TYPE ValidationEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Exception)) ::Newtonsoft::Json::Schema::JsonSchemaException* Exception;

  __declspec(property(get = get_Message)) ::StringW Message;

  __declspec(property(get = get_Path)) ::StringW Path;

  /// @brief Field _ex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__ex, put = __cordl_internal_set__ex)) ::Newtonsoft::Json::Schema::JsonSchemaException* _ex;

  static inline ::Newtonsoft::Json::Schema::ValidationEventArgs* New_ctor(::Newtonsoft::Json::Schema::JsonSchemaException* ex);

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaException* const& __cordl_internal_get__ex() const;

  constexpr ::Newtonsoft::Json::Schema::JsonSchemaException*& __cordl_internal_get__ex();

  constexpr void __cordl_internal_set__ex(::Newtonsoft::Json::Schema::JsonSchemaException* value);

  /// @brief Method .ctor, addr 0x3f0cc84, size 0x90, virtual false, abstract: false, final false
  inline void _ctor(::Newtonsoft::Json::Schema::JsonSchemaException* ex);

  /// @brief Method get_Exception, addr 0x3f0cd14, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Schema::JsonSchemaException* get_Exception();

  /// @brief Method get_Message, addr 0x3f01a44, size 0x20, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_Path, addr 0x3f0cd1c, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_Path();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationEventArgs(ValidationEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationEventArgs(ValidationEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10376 };

  /// @brief Field _ex, offset: 0x10, size: 0x8, def value: None
  ::Newtonsoft::Json::Schema::JsonSchemaException* ____ex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Schema::ValidationEventArgs, ____ex) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Schema::ValidationEventArgs, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Schema
NEED_NO_BOX(::Newtonsoft::Json::Schema::ValidationEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Schema::ValidationEventArgs*, "Newtonsoft.Json.Schema", "ValidationEventArgs");
