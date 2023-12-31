#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
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
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __PropagationPaths__Type;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __PropagationPaths__Type;
}
namespace UnityEngine::UIElements {
class PropagationPaths;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__PropagationPaths__Type);
MARK_REF_PTR_T(::UnityEngine::UIElements::PropagationPaths);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7171))
// CS Name: ::PropagationPaths::Type
struct CORDL_TYPE __PropagationPaths__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PropagationPaths__Type_Unwrapped
  enum struct ____PropagationPaths__Type_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_TrickleDown = static_cast<int32_t>(0x1),
    __E_BubbleUp = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PropagationPaths__Type_Unwrapped() const noexcept {
    return static_cast<____PropagationPaths__Type_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PropagationPaths__Type(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PropagationPaths__Type();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__PropagationPaths__Type const None;

  /// @brief Field TrickleDown value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__PropagationPaths__Type const TrickleDown;

  /// @brief Field BubbleUp value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__PropagationPaths__Type const BubbleUp;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__PropagationPaths__Type, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__PropagationPaths__Type, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::PropagationPaths
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7172))
// CS Name: ::UnityEngine.UIElements::PropagationPaths*
class CORDL_TYPE PropagationPaths : public ::System::Object {
public:
  // Declarations
  using Type = ::UnityEngine::UIElements::__PropagationPaths__Type;

  /// @brief Field trickleDownPath, offset 0x10, size 0x8
  __declspec(property(get = __get_trickleDownPath, put = __set_trickleDownPath))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* trickleDownPath;

  /// @brief Field targetElements, offset 0x18, size 0x8
  __declspec(property(get = __get_targetElements, put = __set_targetElements))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* targetElements;

  /// @brief Field bubbleUpPath, offset 0x20, size 0x8
  __declspec(property(get = __get_bubbleUpPath, put = __set_bubbleUpPath))::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* bubbleUpPath;

  /// @brief Field s_Pool, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Pool, put = setStaticF_s_Pool))::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* s_Pool;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __get_trickleDownPath();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> const& __get_trickleDownPath() const;

  constexpr void __set_trickleDownPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __get_targetElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> const& __get_targetElements() const;

  constexpr void __set_targetElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*& __get_bubbleUpPath();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*> const& __get_bubbleUpPath() const;

  constexpr void __set_bubbleUpPath(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* value);

  static inline void setStaticF_s_Pool(::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* value);

  static inline ::UnityEngine::UIElements::ObjectPool_1<::UnityEngine::UIElements::PropagationPaths*>* getStaticF_s_Pool();

  static inline ::UnityEngine::UIElements::PropagationPaths* New_ctor();

  /// @brief Method .ctor, addr 0x2e4c718, size 0xcc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Copy, addr 0x2e4c7e4, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PropagationPaths* Copy(::UnityEngine::UIElements::PropagationPaths* paths);

  /// @brief Method Build, addr 0x2e4c8c4, size 0x29c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::PropagationPaths* Build(::UnityEngine::UIElements::VisualElement* elem, ::UnityEngine::UIElements::EventBase* evt,
                                                                   ::UnityEngine::UIElements::__PropagationPaths__Type pathTypesRequested);

  /// @brief Method Release, addr 0x2e4cbbc, size 0x110, virtual false, abstract: false, final false
  inline void Release();

  // Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PropagationPaths(PropagationPaths&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PropagationPaths", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PropagationPaths(PropagationPaths const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PropagationPaths();

public:
  /// @brief Field trickleDownPath, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___trickleDownPath;

  /// @brief Field targetElements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___targetElements;

  /// @brief Field bubbleUpPath, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* ___bubbleUpPath;

  /// @brief Field k_DefaultPropagationDepth offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultPropagationDepth{ static_cast<int32_t>(0x10) };

  /// @brief Field k_DefaultTargetCount offset 0xffffffff size 0x4
  static constexpr int32_t k_DefaultTargetCount{ static_cast<int32_t>(0x4) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PropagationPaths, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropagationPaths, ___trickleDownPath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropagationPaths, ___targetElements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::PropagationPaths, ___bubbleUpPath) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__PropagationPaths__Type, "UnityEngine.UIElements", "PropagationPaths/Type");
NEED_NO_BOX(::UnityEngine::UIElements::PropagationPaths);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PropagationPaths*, "UnityEngine.UIElements", "PropagationPaths");
