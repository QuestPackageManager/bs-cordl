#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLErrorException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLErrorException)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLErrorException;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLErrorException);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLErrorException
class CORDL_TYPE GraphQLErrorException : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Class, put = set_Class)) ::StringW Class;

  __declspec(property(get = get_Message, put = set_Message)) ::StringW Message;

  __declspec(property(get = get_StackTrace, put = set_StackTrace)) ::System::Collections::Generic::List_1<::StringW>* StackTrace;

  /// @brief Field <Class>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Class_k__BackingField, put = __cordl_internal_set__Class_k__BackingField)) ::StringW _Class_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Message_k__BackingField, put = __cordl_internal_set__Message_k__BackingField)) ::StringW _Message_k__BackingField;

  /// @brief Field <StackTrace>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__StackTrace_k__BackingField,
                      put = __cordl_internal_set__StackTrace_k__BackingField)) ::System::Collections::Generic::List_1<::StringW>* _StackTrace_k__BackingField;

  static inline ::OculusStudios::GraphQL::Client::GraphQLErrorException* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__Class_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Class_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Message_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Message_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__StackTrace_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__StackTrace_k__BackingField();

  constexpr void __cordl_internal_set__Class_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__Message_k__BackingField(::StringW value);

  constexpr void __cordl_internal_set__StackTrace_k__BackingField(::System::Collections::Generic::List_1<::StringW>* value);

  /// @brief Method .ctor, addr 0x5d0cab8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Class, addr 0x5d0ca88, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Class();

  /// @brief Method get_Message, addr 0x5d0ca98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Message();

  /// @brief Method get_StackTrace, addr 0x5d0caa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* get_StackTrace();

  /// @brief Method set_Class, addr 0x5d0ca90, size 0x8, virtual false, abstract: false, final false
  inline void set_Class(::StringW value);

  /// @brief Method set_Message, addr 0x5d0caa0, size 0x8, virtual false, abstract: false, final false
  inline void set_Message(::StringW value);

  /// @brief Method set_StackTrace, addr 0x5d0cab0, size 0x8, virtual false, abstract: false, final false
  inline void set_StackTrace(::System::Collections::Generic::List_1<::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLErrorException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLErrorException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLErrorException(GraphQLErrorException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLErrorException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLErrorException(GraphQLErrorException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20243 };

  /// @brief Field <Class>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Class_k__BackingField;

  /// @brief Field <Message>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Message_k__BackingField;

  /// @brief Field <StackTrace>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____StackTrace_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLErrorException, ____Class_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLErrorException, ____Message_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLErrorException, ____StackTrace_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLErrorException, 0x28>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLErrorException);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLErrorException*, "OculusStudios.GraphQL.Client", "GraphQLErrorException");
