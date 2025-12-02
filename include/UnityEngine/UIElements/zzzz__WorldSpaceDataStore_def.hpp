#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/WorldSpaceDataStore.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WorldSpaceDataStore)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct WorldSpaceData;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class WorldSpaceDataStore;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::WorldSpaceDataStore);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.WorldSpaceDataStore
class CORDL_TYPE WorldSpaceDataStore : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_WorldSpaceData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_WorldSpaceData,
                      put = setStaticF_m_WorldSpaceData)) ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>* m_WorldSpaceData;

  /// @brief Method GetWorldSpaceData, addr 0x6a9d128, size 0xbc, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::WorldSpaceData GetWorldSpaceData(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method SetWorldSpaceData, addr 0x6a9d060, size 0xc8, virtual false, abstract: false, final false
  static inline void SetWorldSpaceData(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::WorldSpaceData data);

  static inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>* getStaticF_m_WorldSpaceData();

  static inline void setStaticF_m_WorldSpaceData(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::UIElements::WorldSpaceData>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WorldSpaceDataStore();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WorldSpaceDataStore", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WorldSpaceDataStore(WorldSpaceDataStore&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WorldSpaceDataStore", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WorldSpaceDataStore(WorldSpaceDataStore const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5268 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::WorldSpaceDataStore, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::WorldSpaceDataStore);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::WorldSpaceDataStore*, "UnityEngine.UIElements", "WorldSpaceDataStore");
