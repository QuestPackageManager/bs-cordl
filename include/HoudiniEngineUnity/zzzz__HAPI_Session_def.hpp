#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_SessionType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_Session)
namespace HoudiniEngineUnity {
struct HAPI_SessionType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Session;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Session);
// Type: HoudiniEngineUnity::HAPI_Session
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9691))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9728))
// CS Name: ::HoudiniEngineUnity::HAPI_Session
struct CORDL_TYPE HAPI_Session {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_SessionType", modifiers: "", def_value: None }, CppParam { name: "id", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr HAPI_Session(::HoudiniEngineUnity::HAPI_SessionType type, int64_t id) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_Session();

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_SessionType type;

  /// @brief Field id, offset: 0x8, size: 0x8, def value: None
  int64_t id;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Session, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Session, "HoudiniEngineUnity", "HAPI_Session");
