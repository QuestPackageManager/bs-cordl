#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RaycastUITopLevelChecker)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
// Forward declare root types
namespace HMUI {
class RaycastUITopLevelChecker;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::RaycastUITopLevelChecker);
// Type: HMUI::RaycastUITopLevelChecker
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13545))
// CS Name: ::HMUI::RaycastUITopLevelChecker*
class CORDL_TYPE RaycastUITopLevelChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field results, offset 0x18, size 0x8
  __declspec(property(get = __get_results, put = __set_results))::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* results;

  /// @brief Field _canvas, offset 0x20, size 0x8
  __declspec(property(get = __get__canvas, put = __set__canvas))::UnityEngine::Canvas* _canvas;

  __declspec(property(get = get_isOnTop)) bool isOnTop;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& __get_results();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*> const& __get_results() const;

  constexpr void __set_results(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value);

  constexpr ::UnityEngine::Canvas*& __get__canvas();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Canvas*> const& __get__canvas() const;

  constexpr void __set__canvas(::UnityEngine::Canvas* value);

  /// @brief Method Awake addr 0x211eca8 size 0x74 virtual false final false
  inline void Awake();

  /// @brief Method get_isOnTop addr 0x211ed1c size 0x208 virtual false final false
  inline bool get_isOnTop();

  static inline ::HMUI::RaycastUITopLevelChecker* New_ctor();

  /// @brief Method .ctor addr 0x211ef24 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "RaycastUITopLevelChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RaycastUITopLevelChecker(RaycastUITopLevelChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RaycastUITopLevelChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RaycastUITopLevelChecker(RaycastUITopLevelChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastUITopLevelChecker();

public:
  /// @brief Field results, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* ___results;

  /// @brief Field _canvas, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Canvas* ____canvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::RaycastUITopLevelChecker, 0x28>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::RaycastUITopLevelChecker);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::RaycastUITopLevelChecker*, "HMUI", "RaycastUITopLevelChecker");
