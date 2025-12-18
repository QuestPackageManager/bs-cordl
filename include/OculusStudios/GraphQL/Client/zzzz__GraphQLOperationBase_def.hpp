#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/GraphQLOperationBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GraphQLOperationBase)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class SortedDictionary_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class GraphQLOperationBase;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::GraphQLOperationBase);
// Dependencies System.Object
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.GraphQLOperationBase
class CORDL_TYPE GraphQLOperationBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _params, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__params, put = __cordl_internal_set__params)) ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* _params;

  /// @brief Method GetParams, addr 0x5d7382c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* GetParams();

  /// @brief Method GetVariableNames, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::StringW>* GetVariableNames();

  static inline ::OculusStudios::GraphQL::Client::GraphQLOperationBase* New_ctor();

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const& __cordl_internal_get__params() const;

  constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*& __cordl_internal_get__params();

  constexpr void __cordl_internal_set__params(::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value);

  /// @brief Method .ctor, addr 0x5d737a8, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphQLOperationBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphQLOperationBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphQLOperationBase(GraphQLOperationBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphQLOperationBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphQLOperationBase(GraphQLOperationBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20159 };

  /// @brief Field _params, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* ____params;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OculusStudios::GraphQL::Client::GraphQLOperationBase, ____params) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::Client::GraphQLOperationBase, 0x18>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::GraphQLOperationBase);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::GraphQLOperationBase*, "OculusStudios.GraphQL.Client", "GraphQLOperationBase");
