#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_GeoInfo_Extensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_HAPI_GeoInfo_Extensions)
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
namespace HoudiniEngineUnity {
class Test_HAPI_GeoInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_GeoInfo_Extensions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_HAPI_GeoInfo_Extensions);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_HAPI_GeoInfo_Extensions
class CORDL_TYPE Test_HAPI_GeoInfo_Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToTestObject, addr 0x3a96d90, size 0x80, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_HAPI_GeoInfo* ToTestObject(::HoudiniEngineUnity::HAPI_GeoInfo self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_HAPI_GeoInfo_Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_GeoInfo_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_HAPI_GeoInfo_Extensions(Test_HAPI_GeoInfo_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_GeoInfo_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_HAPI_GeoInfo_Extensions(Test_HAPI_GeoInfo_Extensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11884 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_HAPI_GeoInfo_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_GeoInfo_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_GeoInfo_Extensions*, "HoudiniEngineUnity", "Test_HAPI_GeoInfo_Extensions");
