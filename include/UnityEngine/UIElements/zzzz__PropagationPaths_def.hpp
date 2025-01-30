#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PropagationPaths.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PropagationPaths)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::UIElements {
class PropagationPaths___c;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PropagationPaths;
}
namespace UnityEngine::UIElements {
class PropagationPaths___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PropagationPaths);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropagationPaths___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PropagationPaths/<>c
class CORDL_TYPE PropagationPaths___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PropagationPaths___c* __9;

  static inline ::UnityEngine::UIElements::PropagationPaths___c* New_ctor();

  /// @brief Method <.cctor>b__12_0, addr 0x4a355cc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PropagationPaths* __cctor_b__12_0();

  /// @brief Method .ctor, addr 0x4a355c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PropagationPaths___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PropagationPaths___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropagationPaths___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropagationPaths___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropagationPaths___c(PropagationPaths___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropagationPaths___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropagationPaths___c(PropagationPaths___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5929 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropagationPaths___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PropagationPaths
class CORDL_TYPE PropagationPaths : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PropagationPaths___c;

  /// @brief Field bubbleUpPath, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_bubbleUpPath,
                      put = __cordl_internal_set_bubbleUpPath)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* bubbleUpPath;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool)) ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* s_Pool;

  /// @brief Field targetElements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_targetElements,
                      put = __cordl_internal_set_targetElements)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* targetElements;

  /// @brief Field trickleDownPath, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_trickleDownPath,
                      put = __cordl_internal_set_trickleDownPath)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* trickleDownPath;

  /// @brief Method Build, addr 0x4a24020, size 0x2a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PropagationPaths* Build(::UnityEngine::UIElements::VisualElement* elem, ::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::PropagationPaths* New_ctor();

  /// @brief Method Release, addr 0x4a282ec, size 0x110, virtual false, abstract: false, final false
  inline void Release();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_bubbleUpPath() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_bubbleUpPath();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_targetElements() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_targetElements();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get_trickleDownPath() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get_trickleDownPath();

  constexpr void __cordl_internal_set_bubbleUpPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_targetElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set_trickleDownPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x4a3539c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* getStaticF_s_Pool();

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropagationPaths();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropagationPaths(PropagationPaths&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropagationPaths(PropagationPaths const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5930 };

  /// @brief Field k_DefaultPropagationDepth offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultPropagationDepth{ static_cast<int32_t>(0x10) };

  /// @brief Field k_DefaultTargetCount offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultTargetCount{ static_cast<int32_t>(0x4) };

  /// @brief Field trickleDownPath, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___trickleDownPath;

  /// @brief Field targetElements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___targetElements;

  /// @brief Field bubbleUpPath, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___bubbleUpPath;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PropagationPaths, ___trickleDownPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropagationPaths, ___targetElements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropagationPaths, ___bubbleUpPath) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropagationPaths, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PropagationPaths);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPaths*, "UnityEngine.UIElements", "PropagationPaths");
NEED_NO_BOX(::UnityEngine::UIElements::PropagationPaths___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPaths___c*, "UnityEngine.UIElements", "PropagationPaths/<>c");
