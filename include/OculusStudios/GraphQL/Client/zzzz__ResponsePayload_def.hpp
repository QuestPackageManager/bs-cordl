#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/ResponsePayload.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ResponsePayload)
namespace Newtonsoft::Json::Linq {
class JRaw;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLError;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class ResponsePayload;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::ResponsePayload);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.ResponsePayload
class CORDL_TYPE ResponsePayload : public ::System::Object {
public:
  // Declarations
  /// @brief Field <data>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__data_k__BackingField, put = __cordl_internal_set__data_k__BackingField)) ::Newtonsoft::Json::Linq::JRaw* _data_k__BackingField;

  /// @brief Field <error>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__error_k__BackingField, put = __cordl_internal_set__error_k__BackingField)) ::OculusStudios::GraphQL::Client::GraphQLError* _error_k__BackingField;

  /// @brief Field <errors>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__errors_k__BackingField,
                      put = __cordl_internal_set__errors_k__BackingField)) ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* _errors_k__BackingField;

  __declspec(property(get = get_data, put = set_data)) ::Newtonsoft::Json::Linq::JRaw* data;

  __declspec(property(get = get_error, put = set_error)) ::OculusStudios::GraphQL::Client::GraphQLError* error;

  __declspec(property(get = get_errors, put = set_errors)) ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* errors;

  static inline ::OculusStudios::GraphQL::Client::ResponsePayload* New_ctor();

  constexpr ::Newtonsoft::Json::Linq::JRaw* const& __cordl_internal_get__data_k__BackingField() const;

  constexpr ::Newtonsoft::Json::Linq::JRaw*& __cordl_internal_get__data_k__BackingField();

  constexpr ::OculusStudios::GraphQL::Client::GraphQLError* const& __cordl_internal_get__error_k__BackingField() const;

  constexpr ::OculusStudios::GraphQL::Client::GraphQLError*& __cordl_internal_get__error_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* const& __cordl_internal_get__errors_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>*& __cordl_internal_get__errors_k__BackingField();

  constexpr void __cordl_internal_set__data_k__BackingField(::Newtonsoft::Json::Linq::JRaw* value);

  constexpr void __cordl_internal_set__error_k__BackingField(::OculusStudios::GraphQL::Client::GraphQLError* value);

  constexpr void __cordl_internal_set__errors_k__BackingField(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* value);

  /// @brief Method .ctor, addr 0x5d0dec0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_data, addr 0x5d0deb0, size 0x8, virtual false, abstract: false, final false
  inline ::Newtonsoft::Json::Linq::JRaw* get_data();

  /// @brief Method get_error, addr 0x5d0de90, size 0x8, virtual false, abstract: false, final false
  inline ::OculusStudios::GraphQL::Client::GraphQLError* get_error();

  /// @brief Method get_errors, addr 0x5d0dea0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* get_errors();

  /// @brief Method set_data, addr 0x5d0deb8, size 0x8, virtual false, abstract: false, final false
  inline void set_data(::Newtonsoft::Json::Linq::JRaw* value);

  /// @brief Method set_error, addr 0x5d0de98, size 0x8, virtual false, abstract: false, final false
  inline void set_error(::OculusStudios::GraphQL::Client::GraphQLError* value);

  /// @brief Method set_errors, addr 0x5d0dea8, size 0x8, virtual false, abstract: false, final false
  inline void set_errors(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ResponsePayload();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ResponsePayload", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ResponsePayload(ResponsePayload&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ResponsePayload", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ResponsePayload(ResponsePayload const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20266 };

  /// @brief Field <error>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::OculusStudios::GraphQL::Client::GraphQLError* ____error_k__BackingField;

  /// @brief Field <errors>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::GraphQLError*>* ____errors_k__BackingField;

  /// @brief Field <data>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::Newtonsoft::Json::Linq::JRaw* ____data_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::ResponsePayload, ____error_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::ResponsePayload, ____errors_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::ResponsePayload, ____data_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::ResponsePayload, 0x28>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::ResponsePayload);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::ResponsePayload*, "OculusStudios.GraphQL.Client", "ResponsePayload");
