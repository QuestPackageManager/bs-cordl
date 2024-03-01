#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/Util/zzzz__ComponentSingleton_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MonoBehaviourCallbackHooks)
namespace System {
template <typename T> class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MonoBehaviourCallbackHooks;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MonoBehaviourCallbackHooks);
// Type: ::MonoBehaviourCallbackHooks
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MonoBehaviourCallbackHooks*
class CORDL_TYPE MonoBehaviourCallbackHooks : public ::UnityEngine::ResourceManagement::Util::ComponentSingleton_1<::UnityW<::GlobalNamespace::MonoBehaviourCallbackHooks>> {
public:
  // Declarations
  /// @brief Field m_OnUpdateDelegate, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnUpdateDelegate, put = __cordl_internal_set_m_OnUpdateDelegate))::System::Action_1<float_t>* m_OnUpdateDelegate;

  /// @brief Method GetGameObjectName, addr 0x2cb06dc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW GetGameObjectName();

  static inline ::GlobalNamespace::MonoBehaviourCallbackHooks* New_ctor();

  /// @brief Method Update, addr 0x2cb071c, size 0x30, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Action_1<float_t>*& __cordl_internal_get_m_OnUpdateDelegate();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& __cordl_internal_get_m_OnUpdateDelegate() const;

  constexpr void __cordl_internal_set_m_OnUpdateDelegate(::System::Action_1<float_t>* value);

  /// @brief Method .ctor, addr 0x2cb074c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_OnUpdateDelegate, addr 0x2cb058c, size 0xa8, virtual false, abstract: false, final false
  inline void add_OnUpdateDelegate(::System::Action_1<float_t>* value);

  /// @brief Method remove_OnUpdateDelegate, addr 0x2cb0634, size 0xa8, virtual false, abstract: false, final false
  inline void remove_OnUpdateDelegate(::System::Action_1<float_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoBehaviourCallbackHooks();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoBehaviourCallbackHooks", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoBehaviourCallbackHooks(MonoBehaviourCallbackHooks const&) = delete;

  /// @brief Field m_OnUpdateDelegate, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<float_t>* ___m_OnUpdateDelegate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MonoBehaviourCallbackHooks, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MonoBehaviourCallbackHooks, ___m_OnUpdateDelegate) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MonoBehaviourCallbackHooks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MonoBehaviourCallbackHooks*, "", "MonoBehaviourCallbackHooks");
