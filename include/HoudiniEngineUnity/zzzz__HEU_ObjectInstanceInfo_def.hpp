#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ObjectInstanceInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_ObjectInstanceInfo)
namespace HoudiniEngineUnity {
class HEU_InstancedInput;
}
namespace HoudiniEngineUnity {
class HEU_PartData;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ObjectInstanceInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ObjectInstanceInfo);
// Dependencies HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.ScriptableObject
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ObjectInstanceInfo
class CORDL_TYPE HEU_ObjectInstanceInfo : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _instancedInputs, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__instancedInputs,
                      put = __cordl_internal_set__instancedInputs)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* _instancedInputs;

  /// @brief Field _instancedObjectNodeID, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__instancedObjectNodeID, put = __cordl_internal_set__instancedObjectNodeID)) int32_t _instancedObjectNodeID;

  /// @brief Field _instancedObjectPath, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__instancedObjectPath, put = __cordl_internal_set__instancedObjectPath)) ::StringW _instancedObjectPath;

  /// @brief Field _instances, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__instances, put = __cordl_internal_set__instances)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* _instances;

  /// @brief Field _partTarget, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__partTarget, put = __cordl_internal_set__partTarget)) ::UnityW<::HoudiniEngineUnity::HEU_PartData> _partTarget;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a299b0, size 0x148, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectInstanceInfo* other);

  static inline ::HoudiniEngineUnity::HEU_ObjectInstanceInfo* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* const& __cordl_internal_get__instancedInputs() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*& __cordl_internal_get__instancedInputs();

  constexpr int32_t const& __cordl_internal_get__instancedObjectNodeID() const;

  constexpr int32_t& __cordl_internal_get__instancedObjectNodeID();

  constexpr ::StringW const& __cordl_internal_get__instancedObjectPath() const;

  constexpr ::StringW& __cordl_internal_get__instancedObjectPath();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__instances() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__instances();

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_PartData> const& __cordl_internal_get__partTarget() const;

  constexpr ::UnityW<::HoudiniEngineUnity::HEU_PartData>& __cordl_internal_get__partTarget();

  constexpr void __cordl_internal_set__instancedInputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* value);

  constexpr void __cordl_internal_set__instancedObjectNodeID(int32_t value);

  constexpr void __cordl_internal_set__instancedObjectPath(::StringW value);

  constexpr void __cordl_internal_set__instances(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* value);

  constexpr void __cordl_internal_set__partTarget(::UnityW<::HoudiniEngineUnity::HEU_PartData> value);

  /// @brief Method .ctor, addr 0x3a29af8, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_ObjectInstanceInfo__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ObjectInstanceInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectInstanceInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ObjectInstanceInfo(HEU_ObjectInstanceInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ObjectInstanceInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ObjectInstanceInfo(HEU_ObjectInstanceInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11634 };

  /// @brief Field _instancedInputs, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* ____instancedInputs;

  /// @brief Field _partTarget, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HoudiniEngineUnity::HEU_PartData> ____partTarget;

  /// @brief Field _instancedObjectNodeID, offset: 0x28, size: 0x4, def value: None
  int32_t ____instancedObjectNodeID;

  /// @brief Field _instancedObjectPath, offset: 0x30, size: 0x8, def value: None
  ::StringW ____instancedObjectPath;

  /// @brief Field _instances, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* ____instances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectInstanceInfo, ____instancedInputs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectInstanceInfo, ____partTarget) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectInstanceInfo, ____instancedObjectNodeID) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectInstanceInfo, ____instancedObjectPath) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ObjectInstanceInfo, ____instances) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ObjectInstanceInfo, 0x40>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ObjectInstanceInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ObjectInstanceInfo*, "HoudiniEngineUnity", "HEU_ObjectInstanceInfo");
