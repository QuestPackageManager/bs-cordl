#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/SignalAsset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SignalAsset)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class SignalAsset;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::SignalAsset);
// Dependencies UnityEngine.ScriptableObject
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.SignalAsset
class CORDL_TYPE SignalAsset : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field OnEnableCallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnEnableCallback, put = setStaticF_OnEnableCallback)) ::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* OnEnableCallback;

  static inline ::UnityEngine::Timeline::SignalAsset* New_ctor();

  /// @brief Method OnEnable, addr 0x4826420, size 0x6c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method .ctor, addr 0x482648c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnEnableCallback, addr 0x4826288, size 0xcc, virtual false, abstract: false, final false
  static inline void add_OnEnableCallback(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value);

  static inline ::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* getStaticF_OnEnableCallback();

  /// @brief Method remove_OnEnableCallback, addr 0x4826354, size 0xcc, virtual false, abstract: false, final false
  static inline void remove_OnEnableCallback(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value);

  static inline void setStaticF_OnEnableCallback(::System::Action_1<::UnityW<::UnityEngine::Timeline::SignalAsset>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalAsset();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SignalAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalAsset(SignalAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalAsset(SignalAsset const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::SignalAsset, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::SignalAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::SignalAsset*, "UnityEngine.Timeline", "SignalAsset");
