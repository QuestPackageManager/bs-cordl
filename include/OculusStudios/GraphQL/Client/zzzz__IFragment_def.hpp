#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/Client/IFragment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IFragment)
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace OculusStudios::GraphQL::Client {
class GraphQLModel;
}
// Forward declare root types
namespace OculusStudios::GraphQL::Client {
class IFragment;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::Client::IFragment);
// Dependencies
namespace OculusStudios::GraphQL::Client {
// Is value type: false
// CS Name: OculusStudios.GraphQL.Client.IFragment
class CORDL_TYPE IFragment {
public:
  // Declarations
  /// @brief Method CovertNestedFragments, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void CovertNestedFragments(::Newtonsoft::Json::Linq::JToken* json);

  /// @brief Method GetNestedFragment, addr 0x5d74514, size 0x8, virtual true, abstract: false, final false
  inline ::OculusStudios::GraphQL::Client::GraphQLModel* GetNestedFragment();

  // Ctor Parameters [CppParam { name: "", ty: "IFragment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFragment(IFragment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20171 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::GraphQL::Client
NEED_NO_BOX(::OculusStudios::GraphQL::Client::IFragment);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::Client::IFragment*, "OculusStudios.GraphQL.Client", "IFragment");
