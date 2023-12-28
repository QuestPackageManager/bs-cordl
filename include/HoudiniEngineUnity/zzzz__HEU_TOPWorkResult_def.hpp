#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_TOPWorkResult)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_TOPWorkResult;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_TOPWorkResult);
// Type: HoudiniEngineUnity::HEU_TOPWorkResult
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9773))
// CS Name: ::HoudiniEngineUnity::HEU_TOPWorkResult*
class CORDL_TYPE HEU_TOPWorkResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field _workItemIndex, offset 0x10, size 0x4
  __declspec(property(get = __get__workItemIndex, put = __set__workItemIndex)) int32_t _workItemIndex;

  /// @brief Field _workItemID, offset 0x14, size 0x4
  __declspec(property(get = __get__workItemID, put = __set__workItemID)) int32_t _workItemID;

  /// @brief Field _generatedGOs, offset 0x18, size 0x8
  __declspec(property(get = __get__generatedGOs, put = __set__generatedGOs))::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _generatedGOs;

  constexpr int32_t& __get__workItemIndex();

  constexpr int32_t const& __get__workItemIndex() const;

  constexpr void __set__workItemIndex(int32_t value);

  constexpr int32_t& __get__workItemID();

  constexpr int32_t const& __get__workItemID() const;

  constexpr void __set__workItemID(int32_t value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& __get__generatedGOs();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& __get__generatedGOs() const;

  constexpr void __set__generatedGOs(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value);

  static inline ::HoudiniEngineUnity::HEU_TOPWorkResult* New_ctor();

  /// @brief Method .ctor addr 0x219c068 size 0x84 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TOPWorkResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TOPWorkResult(HEU_TOPWorkResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TOPWorkResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TOPWorkResult(HEU_TOPWorkResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TOPWorkResult();

public:
  /// @brief Field _workItemIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____workItemIndex;

  /// @brief Field _workItemID, offset: 0x14, size: 0x4, def value: None
  int32_t ____workItemID;

  /// @brief Field _generatedGOs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ____generatedGOs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TOPWorkResult, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPWorkResult);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPWorkResult*, "HoudiniEngineUnity", "HEU_TOPWorkResult");
