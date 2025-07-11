#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionNodeConnection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissionNodeConnection)
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeConnection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeConnection);
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: false
// CS Name: MissionNodeConnection
class CORDL_TYPE MissionNodeConnection : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _animator, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__animator, put = __cordl_internal_set__animator)) ::UnityW<::UnityEngine::Animator> _animator;

  /// @brief Field _childMissionNode, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__childMissionNode, put = __cordl_internal_set__childMissionNode)) ::UnityW<::GlobalNamespace::MissionNodeVisualController> _childMissionNode;

  /// @brief Field _childMissionNodePosition, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__childMissionNodePosition, put = __cordl_internal_set__childMissionNodePosition)) ::UnityEngine::Vector2 _childMissionNodePosition;

  /// @brief Field _image, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__image, put = __cordl_internal_set__image)) ::UnityW<::UnityEngine::UI::Image> _image;

  /// @brief Field _isActive, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive, put = __cordl_internal_set__isActive)) bool _isActive;

  /// @brief Field _parentMissionNode, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__parentMissionNode, put = __cordl_internal_set__parentMissionNode)) ::UnityW<::GlobalNamespace::MissionNodeVisualController> _parentMissionNode;

  /// @brief Field _parentMissionNodePosition, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__parentMissionNodePosition, put = __cordl_internal_set__parentMissionNodePosition)) ::UnityEngine::Vector2 _parentMissionNodePosition;

  /// @brief Field _rectTransform, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__rectTransform, put = __cordl_internal_set__rectTransform)) ::UnityW<::UnityEngine::RectTransform> _rectTransform;

  /// @brief Field _separator, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__separator, put = __cordl_internal_set__separator)) float_t _separator;

  /// @brief Field _width, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__width, put = __cordl_internal_set__width)) float_t _width;

  __declspec(property(get = get_childMissionNode)) ::UnityW<::GlobalNamespace::MissionNodeVisualController> childMissionNode;

  __declspec(property(get = get_isActive)) bool isActive;

  __declspec(property(get = get_parentMissionNode)) ::UnityW<::GlobalNamespace::MissionNodeVisualController> parentMissionNode;

  /// @brief Method MissionConnectionEnabledDidFinish, addr 0x3b54078, size 0x20, virtual false, abstract: false, final false
  inline void MissionConnectionEnabledDidFinish();

  static inline ::GlobalNamespace::MissionNodeConnection* New_ctor();

  /// @brief Method SetActive, addr 0x3b53fac, size 0xcc, virtual false, abstract: false, final false
  inline void SetActive(bool animated);

  /// @brief Method Setup, addr 0x3b53d1c, size 0x8, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::MissionNodeVisualController* parentMissionNode, ::GlobalNamespace::MissionNodeVisualController* childMissionNode);

  /// @brief Method UpdateConnectionRectTransform, addr 0x3b53d24, size 0x288, virtual false, abstract: false, final false
  inline void UpdateConnectionRectTransform();

  constexpr ::UnityW<::UnityEngine::Animator> const& __cordl_internal_get__animator() const;

  constexpr ::UnityW<::UnityEngine::Animator>& __cordl_internal_get__animator();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& __cordl_internal_get__childMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& __cordl_internal_get__childMissionNode();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__childMissionNodePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__childMissionNodePosition();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__image() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__image();

  constexpr bool const& __cordl_internal_get__isActive() const;

  constexpr bool& __cordl_internal_get__isActive();

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController> const& __cordl_internal_get__parentMissionNode() const;

  constexpr ::UnityW<::GlobalNamespace::MissionNodeVisualController>& __cordl_internal_get__parentMissionNode();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__parentMissionNodePosition() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get__parentMissionNodePosition();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rectTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rectTransform();

  constexpr float_t const& __cordl_internal_get__separator() const;

  constexpr float_t& __cordl_internal_get__separator();

  constexpr float_t const& __cordl_internal_get__width() const;

  constexpr float_t& __cordl_internal_get__width();

  constexpr void __cordl_internal_set__animator(::UnityW<::UnityEngine::Animator> value);

  constexpr void __cordl_internal_set__childMissionNode(::UnityW<::GlobalNamespace::MissionNodeVisualController> value);

  constexpr void __cordl_internal_set__childMissionNodePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__image(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__isActive(bool value);

  constexpr void __cordl_internal_set__parentMissionNode(::UnityW<::GlobalNamespace::MissionNodeVisualController> value);

  constexpr void __cordl_internal_set__parentMissionNodePosition(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set__rectTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__separator(float_t value);

  constexpr void __cordl_internal_set__width(float_t value);

  /// @brief Method .ctor, addr 0x3b54098, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_childMissionNode, addr 0x3b53d0c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNodeVisualController> get_childMissionNode();

  /// @brief Method get_isActive, addr 0x3b53d14, size 0x8, virtual false, abstract: false, final false
  inline bool get_isActive();

  /// @brief Method get_parentMissionNode, addr 0x3b53d04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MissionNodeVisualController> get_parentMissionNode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeConnection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeConnection(MissionNodeConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeConnection(MissionNodeConnection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5311 };

  /// @brief Field _separator, offset: 0x20, size: 0x4, def value: None
  float_t ____separator;

  /// @brief Field _width, offset: 0x24, size: 0x4, def value: None
  float_t ____width;

  /// @brief Field _rectTransform, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____rectTransform;

  /// @brief Field _image, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____image;

  /// @brief Field _parentMissionNode, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeVisualController> ____parentMissionNode;

  /// @brief Field _childMissionNode, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MissionNodeVisualController> ____childMissionNode;

  /// @brief Field _animator, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Animator> ____animator;

  /// @brief Field _parentMissionNodePosition, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____parentMissionNodePosition;

  /// @brief Field _childMissionNodePosition, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____childMissionNodePosition;

  /// @brief Field _isActive, offset: 0x60, size: 0x1, def value: None
  bool ____isActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____separator) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____width) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____rectTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____image) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____parentMissionNode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____childMissionNode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____animator) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____parentMissionNodePosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____childMissionNodePosition) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MissionNodeConnection, ____isActive) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeConnection, 0x68>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeConnection*, "", "MissionNodeConnection");
