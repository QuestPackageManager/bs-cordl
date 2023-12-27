#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_InputData)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputData);
// Type: HoudiniEngineUnity::HEU_InputData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9838))
// CS Name: ::HoudiniEngineUnity::HEU_InputData*
class CORDL_TYPE HEU_InputData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _inputObject, offset 0x10, size 0x8
  __declspec(property(get = __get__inputObject, put = __set__inputObject))::UnityEngine::GameObject* _inputObject;

  constexpr ::UnityEngine::GameObject*& __get__inputObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__inputObject() const;

  constexpr void __set__inputObject(::UnityEngine::GameObject* value);

  static inline ::HoudiniEngineUnity::HEU_InputData* New_ctor();

  /// @brief Method .ctor addr 0x21c5274 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputData(HEU_InputData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputData(HEU_InputData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputData();

public:
  /// @brief Field _inputObject, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____inputObject;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputData, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputData*, "HoudiniEngineUnity", "HEU_InputData");
