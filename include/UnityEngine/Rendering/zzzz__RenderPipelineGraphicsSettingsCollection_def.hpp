#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderPipelineGraphicsSettingsCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(RenderPipelineGraphicsSettingsCollection)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipelineGraphicsSettingsCollection;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderPipelineGraphicsSettingsCollection
class CORDL_TYPE RenderPipelineGraphicsSettingsCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_List, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_List, put = __cordl_internal_set_m_List)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* m_List;

  __declspec(property(get = get_settingsList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* settingsList;

  static inline ::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* const& __cordl_internal_get_m_List() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>*& __cordl_internal_get_m_List();

  constexpr void __cordl_internal_set_m_List(::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* value);

  /// @brief Method .ctor, addr 0x68d7518, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_settingsList, addr 0x68d7510, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* get_settingsList();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderPipelineGraphicsSettingsCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGraphicsSettingsCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderPipelineGraphicsSettingsCollection(RenderPipelineGraphicsSettingsCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderPipelineGraphicsSettingsCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderPipelineGraphicsSettingsCollection(RenderPipelineGraphicsSettingsCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10747 };

  /// @brief Field m_List, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*>* ___m_List;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection, ___m_List) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineGraphicsSettingsCollection*, "UnityEngine.Rendering", "RenderPipelineGraphicsSettingsCollection");
