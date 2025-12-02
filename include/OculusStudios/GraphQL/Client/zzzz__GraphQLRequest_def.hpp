#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLRequest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLRequest)
namespace OculusStudios::GraphQL::Client {
struct MultipartFile;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLRequest;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLRequest);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLRequest
class CORDL_TYPE GraphQLRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field docId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_docId, put = __cordl_internal_set_docId)) ::StringW docId;

  /// @brief Field document, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_document, put = __cordl_internal_set_document)) ::StringW document;

  /// @brief Field files, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_files, put = __cordl_internal_set_files)) ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>* files;

  /// @brief Field graphqlType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_graphqlType, put = __cordl_internal_set_graphqlType)) ::StringW graphqlType;

  /// @brief Field operationName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_operationName, put = __cordl_internal_set_operationName)) ::StringW operationName;

  /// @brief Field size, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int64_t size;

  /// @brief Field variables, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_variables, put = __cordl_internal_set_variables)) ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* variables;

  static inline ::OculusStudios::GraphQL::Client::GraphQLRequest* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_docId() const;

  constexpr ::StringW& __cordl_internal_get_docId();

  constexpr ::StringW const& __cordl_internal_get_document() const;

  constexpr ::StringW& __cordl_internal_get_document();

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>* const& __cordl_internal_get_files() const;

  constexpr ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>*& __cordl_internal_get_files();

  constexpr ::StringW const& __cordl_internal_get_graphqlType() const;

  constexpr ::StringW& __cordl_internal_get_graphqlType();

  constexpr ::StringW const& __cordl_internal_get_operationName() const;

  constexpr ::StringW& __cordl_internal_get_operationName();

  constexpr int64_t const& __cordl_internal_get_size() const;

  constexpr int64_t& __cordl_internal_get_size();

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* const& __cordl_internal_get_variables() const;

  constexpr ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get_variables();

  constexpr void __cordl_internal_set_docId(::StringW value);

  constexpr void __cordl_internal_set_document(::StringW value);

  constexpr void __cordl_internal_set_files(::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>* value);

  constexpr void __cordl_internal_set_graphqlType(::StringW value);

  constexpr void __cordl_internal_set_operationName(::StringW value);

  constexpr void __cordl_internal_set_size(int64_t value);

  constexpr void __cordl_internal_set_variables(::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5d16cd0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLRequest(GraphQLRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLRequest(GraphQLRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20296 };

  /// @brief Field operationName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___operationName;

  /// @brief Field document, offset: 0x18, size: 0x8, def value: None
  ::StringW ___document;

  /// @brief Field docId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___docId;

  /// @brief Field variables, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* ___variables;

  /// @brief Field files, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::OculusStudios::GraphQL::Client::MultipartFile>* ___files;

  /// @brief Field size, offset: 0x38, size: 0x8, def value: None
  int64_t ___size;

  /// @brief Field graphqlType, offset: 0x40, size: 0x8, def value: None
  ::StringW ___graphqlType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequest, ___operationName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequest, ___document) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequest, ___docId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequest, ___variables) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequest, ___files) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequest, ___size) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLRequest, ___graphqlType) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLRequest, 0x48>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLRequest);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLRequest*, "OculusStudios.GraphQL.Client", "GraphQLRequest");
