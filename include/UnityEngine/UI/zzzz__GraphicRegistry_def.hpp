#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphicRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI::Collections {
template <typename T> class IndexedSet_1;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace UnityEngine::UI {
class GraphicRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::GraphicRegistry);
// Type: UnityEngine.UI::GraphicRegistry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::GraphicRegistry*
class CORDL_TYPE GraphicRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Graphics, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Graphics, put = __cordl_internal_set_m_Graphics))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* m_Graphics;

  /// @brief Field m_RaycastableGraphics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RaycastableGraphics, put = __cordl_internal_set_m_RaycastableGraphics))::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* m_RaycastableGraphics;

  /// @brief Field s_EmptyList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EmptyList, put = setStaticF_s_EmptyList))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* s_EmptyList;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::UI::GraphicRegistry* s_Instance;

  /// @brief Method DisableGraphicForCanvas, addr 0x34b12dc, size 0x180, virtual false, abstract: false, final false
  static inline void DisableGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method DisableRaycastGraphicForCanvas, addr 0x34b5a78, size 0x180, virtual false, abstract: false, final false
  static inline void DisableRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method GetGraphicsForCanvas, addr 0x34b5bf8, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* GetGraphicsForCanvas(::UnityEngine::Canvas* canvas);

  /// @brief Method GetRaycastableGraphicsForCanvas, addr 0x34b4ff0, size 0xbc, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IList_1<::UnityW<::UnityEngine::UI::Graphic>>* GetRaycastableGraphicsForCanvas(::UnityEngine::Canvas* canvas);

  static inline ::UnityEngine::UI::GraphicRegistry* New_ctor();

  /// @brief Method RegisterGraphicForCanvas, addr 0x34b1680, size 0x1f4, virtual false, abstract: false, final false
  static inline void RegisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method RegisterRaycastGraphicForCanvas, addr 0x34b0b58, size 0x1f4, virtual false, abstract: false, final false
  static inline void RegisterRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method UnregisterGraphicForCanvas, addr 0x34b2084, size 0x1a4, virtual false, abstract: false, final false
  static inline void UnregisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method UnregisterRaycastGraphicForCanvas, addr 0x34b09dc, size 0x17c, virtual false, abstract: false, final false
  static inline void UnregisterRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>*&
  __cordl_internal_get_m_Graphics();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>*> const&
  __cordl_internal_get_m_Graphics() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>*&
  __cordl_internal_get_m_RaycastableGraphics();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>*> const&
  __cordl_internal_get_m_RaycastableGraphics() const;

  constexpr void __cordl_internal_set_m_Graphics(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* value);

  constexpr void __cordl_internal_set_m_RaycastableGraphics(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* value);

  /// @brief Method .ctor, addr 0x34b5828, size 0x1a8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* getStaticF_s_EmptyList();

  static inline ::UnityEngine::UI::GraphicRegistry* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x34b59d0, size 0xa8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::GraphicRegistry* get_instance();

  static inline void setStaticF_s_EmptyList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Graphic>>* value);

  static inline void setStaticF_s_Instance(::UnityEngine::UI::GraphicRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GraphicRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicRegistry(GraphicRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicRegistry(GraphicRegistry const&) = delete;

  /// @brief Field m_Graphics, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* ___m_Graphics;

  /// @brief Field m_RaycastableGraphics, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Canvas>, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityW<::UnityEngine::UI::Graphic>>*>* ___m_RaycastableGraphics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GraphicRegistry, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRegistry, ___m_Graphics) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::GraphicRegistry, ___m_RaycastableGraphics) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::GraphicRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRegistry*, "UnityEngine.UI", "GraphicRegistry");
