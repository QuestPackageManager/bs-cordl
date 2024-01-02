#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_NodeInfo_Extensions)
namespace HoudiniEngineUnity {
class Test_HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_NodeInfo_Extensions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions);
// Type: HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9891))
// CS Name: ::HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions*
class CORDL_TYPE Test_HAPI_NodeInfo_Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToTestObject, addr 0x21e2bb0, size 0x88, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_HAPI_NodeInfo* ToTestObject(::HoudiniEngineUnity::HAPI_NodeInfo self);

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_NodeInfo_Extensions(Test_HAPI_NodeInfo_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_NodeInfo_Extensions(Test_HAPI_NodeInfo_Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_NodeInfo_Extensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions*, "HoudiniEngineUnity", "Test_HAPI_NodeInfo_Extensions");
