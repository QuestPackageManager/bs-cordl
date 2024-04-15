#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PanelRaycaster)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class IRuntimePanelComponent;
}
namespace UnityEngine::UIElements {
struct __PanelRaycaster__FloatIntBits;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelRaycaster;
}
namespace UnityEngine::UIElements {
struct __PanelRaycaster__FloatIntBits;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PanelRaycaster);
MARK_VAL_T(::UnityEngine::UIElements::__PanelRaycaster__FloatIntBits);
// Type: ::FloatIntBits
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: Some(0) }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::PanelRaycaster::FloatIntBits
#pragma pack(push, 0)
struct CORDL_TYPE __PanelRaycaster__FloatIntBits {
public:
  // Declarations
  /// @brief Field f, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_f, put = __cordl_internal_set_f)) float_t f;

  /// @brief Field i, offset 0x0, size 0x4
  __declspec(property(get = __cordl_internal_get_i, put = __cordl_internal_set_i)) int32_t i;

  constexpr float_t const& __cordl_internal_get_f() const;

  constexpr float_t& __cordl_internal_get_f();

  constexpr int32_t const& __cordl_internal_get_i() const;

  constexpr int32_t& __cordl_internal_get_i();

  constexpr void __cordl_internal_set_f(float_t value);

  constexpr void __cordl_internal_set_i(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PanelRaycaster__FloatIntBits();

  // Ctor Parameters [CppParam { name: "f", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "i", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PanelRaycaster__FloatIntBits(float_t f, int32_t i) noexcept;

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___f_padding[0x0];
      /// @brief Field f, offset: 0x0, size: 0x4, def value: None
      float_t ___f;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___f_padding_forAlignment[0x0];
      /// @brief Field f, offset: 0x0, size: 0x4, def value: None
      float_t ___f_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___i_padding[0x0];
      /// @brief Field i, offset: 0x0, size: 0x4, def value: None
      int32_t ___i;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___i_padding_forAlignment[0x0];
      /// @brief Field i, offset: 0x0, size: 0x4, def value: None
      int32_t ___i_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PanelRaycaster__FloatIntBits, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PanelRaycaster
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::PanelRaycaster*
class CORDL_TYPE PanelRaycaster : public ::UnityEngine::EventSystems::BaseRaycaster {
public:
  // Declarations
  using FloatIntBits = ::UnityEngine::UIElements::__PanelRaycaster__FloatIntBits;

  __declspec(property(get = get_eventCamera))::UnityW<::UnityEngine::Camera> eventCamera;

  /// @brief Field m_Panel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Panel, put = __cordl_internal_set_m_Panel))::UnityEngine::UIElements::BaseRuntimePanel* m_Panel;

  __declspec(property(get = get_panel, put = set_panel))::UnityEngine::UIElements::IPanel* panel;

  __declspec(property(get = get_renderOrderPriority)) int32_t renderOrderPriority;

  __declspec(property(get = get_selectableGameObject))::UnityW<::UnityEngine::GameObject> selectableGameObject;

  __declspec(property(get = get_sortOrderPriority)) int32_t sortOrderPriority;

  /// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanelComponent"
  constexpr operator ::UnityEngine::UIElements::IRuntimePanelComponent*() noexcept;

  /// @brief Method ConvertFloatBitsToInt, addr 0x32e3fc4, size 0x8, virtual false, abstract: false, final false
  static inline int32_t ConvertFloatBitsToInt(float_t f);

  static inline ::UnityEngine::UIElements::PanelRaycaster* New_ctor();

  /// @brief Method OnPanelDestroyed, addr 0x32e3f58, size 0x8, virtual false, abstract: false, final false
  inline void OnPanelDestroyed();

  /// @brief Method Raycast, addr 0x32e3fcc, size 0x4f4, virtual true, abstract: false, final false
  inline void Raycast(::UnityEngine::EventSystems::PointerEventData* eventData, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList);

  /// @brief Method RegisterCallbacks, addr 0x32e3ec0, size 0x98, virtual false, abstract: false, final false
  inline void RegisterCallbacks();

  /// @brief Method UnregisterCallbacks, addr 0x32e3e28, size 0x98, virtual false, abstract: false, final false
  inline void UnregisterCallbacks();

  constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& __cordl_internal_get_m_Panel();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& __cordl_internal_get_m_Panel() const;

  constexpr void __cordl_internal_set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel* value);

  /// @brief Method .ctor, addr 0x32e44c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_eventCamera, addr 0x32e44c0, size 0x8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_eventCamera();

  /// @brief Method get_panel, addr 0x32e3d7c, size 0x8, virtual true, abstract: false, final true
  inline ::UnityEngine::UIElements::IPanel* get_panel();

  /// @brief Method get_renderOrderPriority, addr 0x32e3fac, size 0x18, virtual true, abstract: false, final false
  inline int32_t get_renderOrderPriority();

  /// @brief Method get_selectableGameObject, addr 0x32e3f60, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> get_selectableGameObject();

  /// @brief Method get_sortOrderPriority, addr 0x32e3f78, size 0x34, virtual true, abstract: false, final false
  inline int32_t get_sortOrderPriority();

  /// @brief Convert to "::UnityEngine::UIElements::IRuntimePanelComponent"
  constexpr ::UnityEngine::UIElements::IRuntimePanelComponent* i___UnityEngine__UIElements__IRuntimePanelComponent() noexcept;

  /// @brief Method set_panel, addr 0x32e3d84, size 0xa4, virtual true, abstract: false, final true
  inline void set_panel(::UnityEngine::UIElements::IPanel* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PanelRaycaster();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PanelRaycaster(PanelRaycaster&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PanelRaycaster", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PanelRaycaster(PanelRaycaster const&) = delete;

  /// @brief Field m_Panel, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseRuntimePanel* ___m_Panel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PanelRaycaster, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PanelRaycaster, ___m_Panel) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PanelRaycaster);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PanelRaycaster*, "UnityEngine.UIElements", "PanelRaycaster");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PanelRaycaster__FloatIntBits, "UnityEngine.UIElements", "PanelRaycaster/FloatIntBits");
