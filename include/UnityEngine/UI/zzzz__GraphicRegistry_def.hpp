#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphicRegistry)
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI::Collections {
template <typename T> class IndexedSet_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13046))
// CS Name: ::UnityEngine.UI::GraphicRegistry*
class CORDL_TYPE GraphicRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Graphics, offset 0x10, size 0x8
  __declspec(
      property(get = __get_m_Graphics,
               put = __set_m_Graphics))::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* m_Graphics;

  /// @brief Field m_RaycastableGraphics, offset 0x18, size 0x8
  __declspec(property(get = __get_m_RaycastableGraphics, put = __set_m_RaycastableGraphics))::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* m_RaycastableGraphics;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::UI::GraphicRegistry* s_Instance;

  /// @brief Field s_EmptyList, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_EmptyList, put = setStaticF_s_EmptyList))::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* s_EmptyList;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>*& __get_m_Graphics();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>*> const&
  __get_m_Graphics() const;

  constexpr void __set_m_Graphics(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>*& __get_m_RaycastableGraphics();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>*> const&
  __get_m_RaycastableGraphics() const;

  constexpr void __set_m_RaycastableGraphics(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* value);

  static inline void setStaticF_s_Instance(::UnityEngine::UI::GraphicRegistry* value);

  static inline ::UnityEngine::UI::GraphicRegistry* getStaticF_s_Instance();

  static inline void setStaticF_s_EmptyList(::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>* getStaticF_s_EmptyList();

  static inline ::UnityEngine::UI::GraphicRegistry* New_ctor();

  /// @brief Method .ctor addr 0x2d6098c size 0x1a8 virtual false final false
  inline void _ctor();

  /// @brief Method get_instance addr 0x2d60b34 size 0xa8 virtual false final false
  static inline ::UnityEngine::UI::GraphicRegistry* get_instance();

  /// @brief Method RegisterGraphicForCanvas addr 0x2d5c7e4 size 0x1f4 virtual false final false
  static inline void RegisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method RegisterRaycastGraphicForCanvas addr 0x2d5bcbc size 0x1f4 virtual false final false
  static inline void RegisterRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method UnregisterGraphicForCanvas addr 0x2d5d1e8 size 0x1a4 virtual false final false
  static inline void UnregisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method UnregisterRaycastGraphicForCanvas addr 0x2d5bb40 size 0x17c virtual false final false
  static inline void UnregisterRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method DisableGraphicForCanvas addr 0x2d5c440 size 0x180 virtual false final false
  static inline void DisableGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method DisableRaycastGraphicForCanvas addr 0x2d60bdc size 0x180 virtual false final false
  static inline void DisableRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic);

  /// @brief Method GetGraphicsForCanvas addr 0x2d60d5c size 0xbc virtual false final false
  static inline ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* GetGraphicsForCanvas(::UnityEngine::Canvas* canvas);

  /// @brief Method GetRaycastableGraphicsForCanvas addr 0x2d60154 size 0xbc virtual false final false
  static inline ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* GetRaycastableGraphicsForCanvas(::UnityEngine::Canvas* canvas);

  // Ctor Parameters [CppParam { name: "", ty: "GraphicRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GraphicRegistry(GraphicRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GraphicRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GraphicRegistry(GraphicRegistry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GraphicRegistry();

public:
  /// @brief Field m_Graphics, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* ___m_Graphics;

  /// @brief Field m_RaycastableGraphics, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* ___m_RaycastableGraphics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::GraphicRegistry, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::GraphicRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::GraphicRegistry*, "UnityEngine.UI", "GraphicRegistry");
