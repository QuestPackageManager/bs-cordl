#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\IContractResolver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IContractResolver)
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Serialization::IContractResolver*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Serialization::IContractResolver*, "Newtonsoft.Json.Serialization", "IContractResolver");
// Dependencies
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.IContractResolver
class CORDL_TYPE IContractResolver {
public:
  // Declarations
  /// @brief Method ResolveContract, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "IContractResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContractResolver(IContractResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13491 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
