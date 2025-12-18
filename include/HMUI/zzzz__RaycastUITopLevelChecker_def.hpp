#pragma once
// IWYU pragma private; include "HMUI/RaycastUITopLevelChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RaycastUITopLevelChecker)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class Canvas;
}
// Forward declare root types
namespace HMUI {
class RaycastUITopLevelChecker;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::RaycastUITopLevelChecker);
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.RaycastUITopLevelChecker
class CORDL_TYPE RaycastUITopLevelChecker : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _canvas, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__canvas, put = __cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas> _canvas;

  __declspec(property(get = get_isOnTop)) bool isOnTop;

  /// @brief Field results, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_results, put = __cordl_internal_set_results)) ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* results;

  /// @brief Method Awake, addr 0x56c7ec8, size 0x78, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::HMUI::RaycastUITopLevelChecker* New_ctor();

  constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

  constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* const& __cordl_internal_get_results() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*& __cordl_internal_get_results();

  constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas> value);

  constexpr void __cordl_internal_set_results(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* value);

  /// @brief Method .ctor, addr 0x56c815c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isOnTop, addr 0x56c7f40, size 0x21c, virtual false, abstract: false, final false
  inline bool get_isOnTop();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RaycastUITopLevelChecker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RaycastUITopLevelChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RaycastUITopLevelChecker(RaycastUITopLevelChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RaycastUITopLevelChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RaycastUITopLevelChecker(RaycastUITopLevelChecker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19148 };

  /// @brief Field results, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* ___results;

  /// @brief Field _canvas, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Canvas> ____canvas;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::RaycastUITopLevelChecker, ___results) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::RaycastUITopLevelChecker, ____canvas) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::RaycastUITopLevelChecker, 0x30>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::RaycastUITopLevelChecker);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::RaycastUITopLevelChecker*, "HMUI", "RaycastUITopLevelChecker");
