#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_LayerMask_Extensions)
namespace HoudiniEngineUnity {
class Test_LayerMask;
}
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LayerMask_Extensions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_LayerMask_Extensions);
// Type: HoudiniEngineUnity::Test_LayerMask_Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9718))
// CS Name: ::HoudiniEngineUnity::Test_LayerMask_Extensions*
class CORDL_TYPE Test_LayerMask_Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToTestObject, addr 0x227c358, size 0x64, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::Test_LayerMask* ToTestObject(::UnityEngine::LayerMask self);

  // Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask_Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_LayerMask_Extensions(Test_LayerMask_Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask_Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_LayerMask_Extensions(Test_LayerMask_Extensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_LayerMask_Extensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_LayerMask_Extensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_LayerMask_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LayerMask_Extensions*, "HoudiniEngineUnity", "Test_LayerMask_Extensions");
