#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/IContractResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
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
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::IContractResolver);
// Type: Newtonsoft.Json.Serialization::IContractResolver
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::IContractResolver*
class CORDL_TYPE IContractResolver {
public:
  // Declarations
  /// @brief Method ResolveContract, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Newtonsoft::Json::Serialization::JsonContract* ResolveContract(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "IContractResolver", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IContractResolver(IContractResolver&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IContractResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IContractResolver(IContractResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10271 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IContractResolver*, "Newtonsoft.Json.Serialization", "IContractResolver");
