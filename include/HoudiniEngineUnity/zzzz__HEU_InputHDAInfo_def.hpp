#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InputHDAInfo)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputHDAInfo;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InputHDAInfo);
// Type: HoudiniEngineUnity::HEU_InputHDAInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9647))
// CS Name: ::HoudiniEngineUnity::HEU_InputHDAInfo*
class CORDL_TYPE HEU_InputHDAInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pendingGO, offset 0x10, size 0x8
  __declspec(property(get = __get__pendingGO, put = __set__pendingGO))::UnityEngine::GameObject* _pendingGO;

  /// @brief Field _connectedGO, offset 0x18, size 0x8
  __declspec(property(get = __get__connectedGO, put = __set__connectedGO))::UnityEngine::GameObject* _connectedGO;

  /// @brief Field _connectedInputNodeID, offset 0x20, size 0x4
  __declspec(property(get = __get__connectedInputNodeID, put = __set__connectedInputNodeID)) int32_t _connectedInputNodeID;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*() noexcept;

  constexpr ::UnityEngine::GameObject*& __get__pendingGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__pendingGO() const;

  constexpr void __set__pendingGO(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get__connectedGO();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__connectedGO() const;

  constexpr void __set__connectedGO(::UnityEngine::GameObject* value);

  constexpr int32_t& __get__connectedInputNodeID();

  constexpr int32_t const& __get__connectedInputNodeID() const;

  constexpr void __set__connectedInputNodeID(int32_t value);

  /// @brief Method CopyTo addr 0x2170b94 size 0x24 virtual false final false
  inline void CopyTo(::HoudiniEngineUnity::HEU_InputHDAInfo* destInfo);

  /// @brief Method IsEquivalentTo addr 0x217226c size 0x130 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InputHDAInfo* other);

  static inline ::HoudiniEngineUnity::HEU_InputHDAInfo* New_ctor();

  /// @brief Method .ctor addr 0x2170094 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputHDAInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InputHDAInfo(HEU_InputHDAInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InputHDAInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InputHDAInfo(HEU_InputHDAInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InputHDAInfo();

public:
  /// @brief Field _pendingGO, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____pendingGO;

  /// @brief Field _connectedGO, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____connectedGO;

  /// @brief Field _connectedInputNodeID, offset: 0x20, size: 0x4, def value: None
  int32_t ____connectedInputNodeID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InputHDAInfo, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InputHDAInfo);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InputHDAInfo*, "HoudiniEngineUnity", "HEU_InputHDAInfo");
