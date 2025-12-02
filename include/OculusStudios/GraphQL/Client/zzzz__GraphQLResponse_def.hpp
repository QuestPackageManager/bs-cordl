#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLResponse.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphQLResponse)
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLResponse;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLResponse);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLResponse
class CORDL_TYPE GraphQLResponse : public ::System::Object {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  /// @brief Field error, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_error, put = __cordl_internal_set_error)) ::StringW error;

  /// @brief Field latency, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_latency, put = __cordl_internal_set_latency)) float_t latency;

  /// @brief Field queryName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_queryName, put = __cordl_internal_set_queryName)) ::StringW queryName;

  /// @brief Field size, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_size, put = __cordl_internal_set_size)) int64_t size;

  /// @brief Field type, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::StringW type;

  /// @brief Method Equals, addr 0x5d16ce0, size 0xac, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x5d16d8c, size 0xa0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::OculusStudios::GraphQL::Client::GraphQLResponse* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr ::StringW const& __cordl_internal_get_error() const;

  constexpr ::StringW& __cordl_internal_get_error();

  constexpr float_t const& __cordl_internal_get_latency() const;

  constexpr float_t& __cordl_internal_get_latency();

  constexpr ::StringW const& __cordl_internal_get_queryName() const;

  constexpr ::StringW& __cordl_internal_get_queryName();

  constexpr int64_t const& __cordl_internal_get_size() const;

  constexpr int64_t& __cordl_internal_get_size();

  constexpr ::StringW const& __cordl_internal_get_type() const;

  constexpr ::StringW& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_data(::StringW value);

  constexpr void __cordl_internal_set_error(::StringW value);

  constexpr void __cordl_internal_set_latency(float_t value);

  constexpr void __cordl_internal_set_queryName(::StringW value);

  constexpr void __cordl_internal_set_size(int64_t value);

  constexpr void __cordl_internal_set_type(::StringW value);

  /// @brief Method .ctor, addr 0x5d11530, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLResponse();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponse", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLResponse(GraphQLResponse&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLResponse", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLResponse(GraphQLResponse const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20300 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  ::StringW ___data;

  /// @brief Field error, offset: 0x18, size: 0x8, def value: None
  ::StringW ___error;

  /// @brief Field queryName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___queryName;

  /// @brief Field type, offset: 0x28, size: 0x8, def value: None
  ::StringW ___type;

  /// @brief Field size, offset: 0x30, size: 0x8, def value: None
  int64_t ___size;

  /// @brief Field latency, offset: 0x38, size: 0x4, def value: None
  float_t ___latency;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponse, ___data) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponse, ___error) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponse, ___queryName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponse, ___type) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponse, ___size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLResponse, ___latency) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLResponse, 0x40>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLResponse);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLResponse*, "OculusStudios.GraphQL.Client", "GraphQLResponse");
