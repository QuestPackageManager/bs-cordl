#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Layout/LayoutDataAccess.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/Layout/zzzz__LayoutDataStore_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LayoutDataAccess)
namespace UnityEngine::UIElements::Layout {
class LayoutBaselineFunction;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutComputedData;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutConfigDataType;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutConfigData;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutDataStore;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutHandle;
}
namespace UnityEngine::UIElements::Layout {
class LayoutMeasureFunction;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNodeDataType;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutNodeData;
}
namespace UnityEngine::UIElements::Layout {
struct LayoutStyleData;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements::Layout {
struct LayoutDataAccess;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::Layout::LayoutDataAccess);
// Dependencies UnityEngine.UIElements.Layout.LayoutDataStore
namespace UnityEngine::UIElements::Layout {
// Is value type: true
// CS Name: UnityEngine.UIElements.Layout.LayoutDataAccess
struct CORDL_TYPE LayoutDataAccess {
public:
  // Declarations
  __declspec(property(get = get_IsValid)) bool IsValid;

  /// @brief Method GetBaselineFunction, addr 0x6b37884, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutBaselineFunction* GetBaselineFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetComputedData, addr 0x6b375d0, size 0x64, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutComputedData> GetComputedData(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetConfigData, addr 0x6b37634, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutConfigData> GetConfigData(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetMeasureFunction, addr 0x6b37694, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* GetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetNodeData, addr 0x6b3750c, size 0x60, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutNodeData> GetNodeData(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetOwner, addr 0x6b3778c, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* GetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetStyleData, addr 0x6b3756c, size 0x64, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::UIElements::Layout::LayoutStyleData> GetStyleData(::UnityEngine::UIElements::Layout::LayoutHandle handle);

  /// @brief Method GetTypedConfigDataRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> GetTypedConfigDataRef(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::Layout::LayoutConfigDataType type);

  /// @brief Method GetTypedNodeDataRef, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::ByRef<T> GetTypedNodeDataRef(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::Layout::LayoutNodeDataType type);

  /// @brief Method SetMeasureFunction, addr 0x6b3770c, size 0x80, virtual false, abstract: false, final false
  inline void SetMeasureFunction(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::Layout::LayoutMeasureFunction* value);

  /// @brief Method SetOwner, addr 0x6b37804, size 0x80, virtual false, abstract: false, final false
  inline void SetOwner(::UnityEngine::UIElements::Layout::LayoutHandle handle, ::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method .ctor, addr 0x6b3372c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(int32_t manager, ::UnityEngine::UIElements::Layout::LayoutDataStore nodes, ::UnityEngine::UIElements::Layout::LayoutDataStore configs);

  /// @brief Method get_IsValid, addr 0x6b340e4, size 0x20, virtual false, abstract: false, final false
  inline bool get_IsValid();

  // Ctor Parameters []
  // @brief default ctor
  constexpr LayoutDataAccess();

  // Ctor Parameters [CppParam { name: "m_Manager", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Nodes", ty: "::UnityEngine::UIElements::Layout::LayoutDataStore", modifiers:
  // "", def_value: None }, CppParam { name: "m_Configs", ty: "::UnityEngine::UIElements::Layout::LayoutDataStore", modifiers: "", def_value: None }]
  constexpr LayoutDataAccess(int32_t m_Manager, ::UnityEngine::UIElements::Layout::LayoutDataStore m_Nodes, ::UnityEngine::UIElements::Layout::LayoutDataStore m_Configs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5412 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field m_Manager, offset: 0x0, size: 0x4, def value: None
  int32_t m_Manager;

  /// @brief Field m_Nodes, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore m_Nodes;

  /// @brief Field m_Configs, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::UIElements::Layout::LayoutDataStore m_Configs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataAccess, m_Manager) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataAccess, m_Nodes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Layout::LayoutDataAccess, m_Configs) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Layout::LayoutDataAccess, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::Layout
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Layout::LayoutDataAccess, "UnityEngine.UIElements.Layout", "LayoutDataAccess");
