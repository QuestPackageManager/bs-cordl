#pragma once
// IWYU pragma private; include "OculusStudios/GraphQL/ClientInterface/Defines.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Defines)
// Forward declare root types
namespace OculusStudios::GraphQL::ClientInterface {
class Defines;
}
// Write type traits
MARK_REF_PTR_T(::OculusStudios::GraphQL::ClientInterface::Defines);
// Dependencies System.Object
namespace OculusStudios::GraphQL::ClientInterface {
// Is value type: false
// CS Name: OculusStudios.GraphQL.ClientInterface.Defines
class CORDL_TYPE Defines : public ::System::Object {
public:
  // Declarations
  static inline ::OculusStudios::GraphQL::ClientInterface::Defines* New_ctor();

  /// @brief Method .ctor, addr 0x5d1722c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Defines();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Defines(Defines&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Defines", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Defines(Defines const&) = delete;

  /// @brief Field BaseTimeoutMs offset 0xffffffff size 0x4
  static constexpr int32_t BaseTimeoutMs{ static_cast<int32_t>(0x1f40) };

  /// @brief Field DebugBuildAdditionalTimeoutMs offset 0xffffffff size 0x4
  static constexpr int32_t DebugBuildAdditionalTimeoutMs{ static_cast<int32_t>(0x7d0) };

  /// @brief Field DefaultTimeoutMs offset 0xffffffff size 0x4
  static constexpr int32_t DefaultTimeoutMs{ static_cast<int32_t>(0x1f40) };

  /// @brief Field MaxRequestTries offset 0xffffffff size 0x4
  static constexpr int32_t MaxRequestTries{ static_cast<int32_t>(0x3) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22432 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OculusStudios::GraphQL::ClientInterface::Defines, 0x10>, "Size mismatch!");

} // namespace OculusStudios::GraphQL::ClientInterface
NEED_NO_BOX(::OculusStudios::GraphQL::ClientInterface::Defines);
DEFINE_IL2CPP_ARG_TYPE(::OculusStudios::GraphQL::ClientInterface::Defines*, "OculusStudios.GraphQL.ClientInterface", "Defines");
