#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_InstanceInputUIState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_InstanceInputUIState)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InstanceInputUIState;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_InstanceInputUIState);
// Dependencies HoudiniEngineUnity.IEquivable`1<T>, UnityEngine.ScriptableObject
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_InstanceInputUIState
class CORDL_TYPE HEU_InstanceInputUIState : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _inputsPageIndexUI, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__inputsPageIndexUI, put = __cordl_internal_set__inputsPageIndexUI)) int32_t _inputsPageIndexUI;

  /// @brief Field _numInputsToShowUI, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__numInputsToShowUI, put = __cordl_internal_set__numInputsToShowUI)) int32_t _numInputsToShowUI;

  /// @brief Field _showInstanceInputs, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__showInstanceInputs, put = __cordl_internal_set__showInstanceInputs)) bool _showInstanceInputs;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>*() noexcept;

  /// @brief Method CopyTo, addr 0x3a2bc24, size 0x24, virtual false, abstract: false, final false
  inline void CopyTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* dest);

  /// @brief Method IsEquivalentTo, addr 0x3a2bc48, size 0x1dc, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* other);

  static inline ::HoudiniEngineUnity::HEU_InstanceInputUIState* New_ctor();

  constexpr int32_t const& __cordl_internal_get__inputsPageIndexUI() const;

  constexpr int32_t& __cordl_internal_get__inputsPageIndexUI();

  constexpr int32_t const& __cordl_internal_get__numInputsToShowUI() const;

  constexpr int32_t& __cordl_internal_get__numInputsToShowUI();

  constexpr bool const& __cordl_internal_get__showInstanceInputs() const;

  constexpr bool& __cordl_internal_get__showInstanceInputs();

  constexpr void __cordl_internal_set__inputsPageIndexUI(int32_t value);

  constexpr void __cordl_internal_set__numInputsToShowUI(int32_t value);

  constexpr void __cordl_internal_set__showInstanceInputs(bool value);

  /// @brief Method .ctor, addr 0x3a2be24, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::UnityW<::HoudiniEngineUnity::HEU_InstanceInputUIState>>*
  i___HoudiniEngineUnity__IEquivable_1___UnityW___HoudiniEngineUnity__HEU_InstanceInputUIState__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_InstanceInputUIState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_InstanceInputUIState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_InstanceInputUIState(HEU_InstanceInputUIState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_InstanceInputUIState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_InstanceInputUIState(HEU_InstanceInputUIState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11636 };

  /// @brief Field _showInstanceInputs, offset: 0x18, size: 0x1, def value: None
  bool ____showInstanceInputs;

  /// @brief Field _numInputsToShowUI, offset: 0x1c, size: 0x4, def value: None
  int32_t ____numInputsToShowUI;

  /// @brief Field _inputsPageIndexUI, offset: 0x20, size: 0x4, def value: None
  int32_t ____inputsPageIndexUI;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_InstanceInputUIState, ____showInstanceInputs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InstanceInputUIState, ____numInputsToShowUI) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_InstanceInputUIState, ____inputsPageIndexUI) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_InstanceInputUIState, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_InstanceInputUIState);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_InstanceInputUIState*, "HoudiniEngineUnity", "HEU_InstanceInputUIState");
