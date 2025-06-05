#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_TOPWorkResult.hpp"
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
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_TOPWorkResult
class CORDL_TYPE HEU_TOPWorkResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field _generatedGOs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__generatedGOs, put = __cordl_internal_set__generatedGOs)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _generatedGOs;

  /// @brief Field _workItemID, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__workItemID, put = __cordl_internal_set__workItemID)) int32_t _workItemID;

  /// @brief Field _workItemIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__workItemIndex, put = __cordl_internal_set__workItemIndex)) int32_t _workItemIndex;

  static inline ::HoudiniEngineUnity::HEU_TOPWorkResult* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__generatedGOs() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__generatedGOs();

  constexpr int32_t const& __cordl_internal_get__workItemID() const;

  constexpr int32_t& __cordl_internal_get__workItemID();

  constexpr int32_t const& __cordl_internal_get__workItemIndex() const;

  constexpr int32_t& __cordl_internal_get__workItemIndex();

  constexpr void __cordl_internal_set__generatedGOs(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set__workItemID(int32_t value);

  constexpr void __cordl_internal_set__workItemIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3a52828, size 0x84, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_TOPWorkResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_TOPWorkResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_TOPWorkResult(HEU_TOPWorkResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_TOPWorkResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_TOPWorkResult(HEU_TOPWorkResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11760 };

  /// @brief Field _workItemIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____workItemIndex;

  /// @brief Field _workItemID, offset: 0x14, size: 0x4, def value: None
  int32_t ____workItemID;

  /// @brief Field _generatedGOs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ____generatedGOs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPWorkResult, ____workItemIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPWorkResult, ____workItemID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_TOPWorkResult, ____generatedGOs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_TOPWorkResult, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_TOPWorkResult);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_TOPWorkResult*, "HoudiniEngineUnity", "HEU_TOPWorkResult");
