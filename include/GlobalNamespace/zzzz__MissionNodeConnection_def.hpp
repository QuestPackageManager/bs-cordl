#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MissionNodeConnection)
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionNodeConnection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionNodeConnection);
// Type: ::MissionNodeConnection
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5544))
// CS Name: ::MissionNodeConnection*
class CORDL_TYPE MissionNodeConnection : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _separator, offset 0x18, size 0x4
  __declspec(property(get = __get__separator, put = __set__separator)) float_t _separator;

  /// @brief Field _width, offset 0x1c, size 0x4
  __declspec(property(get = __get__width, put = __set__width)) float_t _width;

  /// @brief Field _rectTransform, offset 0x20, size 0x8
  __declspec(property(get = __get__rectTransform, put = __set__rectTransform))::UnityEngine::RectTransform* _rectTransform;

  /// @brief Field _image, offset 0x28, size 0x8
  __declspec(property(get = __get__image, put = __set__image))::UnityEngine::UI::Image* _image;

  /// @brief Field _parentMissionNode, offset 0x30, size 0x8
  __declspec(property(get = __get__parentMissionNode, put = __set__parentMissionNode))::GlobalNamespace::MissionNodeVisualController* _parentMissionNode;

  /// @brief Field _childMissionNode, offset 0x38, size 0x8
  __declspec(property(get = __get__childMissionNode, put = __set__childMissionNode))::GlobalNamespace::MissionNodeVisualController* _childMissionNode;

  /// @brief Field _animator, offset 0x40, size 0x8
  __declspec(property(get = __get__animator, put = __set__animator))::UnityEngine::Animator* _animator;

  /// @brief Field _parentMissionNodePosition, offset 0x48, size 0x8
  __declspec(property(get = __get__parentMissionNodePosition, put = __set__parentMissionNodePosition))::UnityEngine::Vector2 _parentMissionNodePosition;

  /// @brief Field _childMissionNodePosition, offset 0x50, size 0x8
  __declspec(property(get = __get__childMissionNodePosition, put = __set__childMissionNodePosition))::UnityEngine::Vector2 _childMissionNodePosition;

  /// @brief Field _isActive, offset 0x58, size 0x1
  __declspec(property(get = __get__isActive, put = __set__isActive)) bool _isActive;

  __declspec(property(get = get_parentMissionNode))::GlobalNamespace::MissionNodeVisualController* parentMissionNode;

  __declspec(property(get = get_childMissionNode))::GlobalNamespace::MissionNodeVisualController* childMissionNode;

  __declspec(property(get = get_isActive)) bool isActive;

  constexpr float_t& __get__separator();

  constexpr float_t const& __get__separator() const;

  constexpr void __set__separator(float_t value);

  constexpr float_t& __get__width();

  constexpr float_t const& __get__width() const;

  constexpr void __set__width(float_t value);

  constexpr ::UnityEngine::RectTransform*& __get__rectTransform();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& __get__rectTransform() const;

  constexpr void __set__rectTransform(::UnityEngine::RectTransform* value);

  constexpr ::UnityEngine::UI::Image*& __get__image();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__image() const;

  constexpr void __set__image(::UnityEngine::UI::Image* value);

  constexpr ::GlobalNamespace::MissionNodeVisualController*& __get__parentMissionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeVisualController*> const& __get__parentMissionNode() const;

  constexpr void __set__parentMissionNode(::GlobalNamespace::MissionNodeVisualController* value);

  constexpr ::GlobalNamespace::MissionNodeVisualController*& __get__childMissionNode();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeVisualController*> const& __get__childMissionNode() const;

  constexpr void __set__childMissionNode(::GlobalNamespace::MissionNodeVisualController* value);

  constexpr ::UnityEngine::Animator*& __get__animator();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> const& __get__animator() const;

  constexpr void __set__animator(::UnityEngine::Animator* value);

  constexpr ::UnityEngine::Vector2& __get__parentMissionNodePosition();

  constexpr ::UnityEngine::Vector2 const& __get__parentMissionNodePosition() const;

  constexpr void __set__parentMissionNodePosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get__childMissionNodePosition();

  constexpr ::UnityEngine::Vector2 const& __get__childMissionNodePosition() const;

  constexpr void __set__childMissionNodePosition(::UnityEngine::Vector2 value);

  constexpr bool& __get__isActive();

  constexpr bool const& __get__isActive() const;

  constexpr void __set__isActive(bool value);

  /// @brief Method get_parentMissionNode addr 0x22a05c0 size 0x8 virtual false final false
  inline ::GlobalNamespace::MissionNodeVisualController* get_parentMissionNode();

  /// @brief Method get_childMissionNode addr 0x22a05c8 size 0x8 virtual false final false
  inline ::GlobalNamespace::MissionNodeVisualController* get_childMissionNode();

  /// @brief Method get_isActive addr 0x22a05d0 size 0x8 virtual false final false
  inline bool get_isActive();

  /// @brief Method Setup addr 0x229f118 size 0x8 virtual false final false
  inline void Setup(::GlobalNamespace::MissionNodeVisualController* parentMissionNode, ::GlobalNamespace::MissionNodeVisualController* childMissionNode);

  /// @brief Method UpdateConnectionRectTransform addr 0x22a05d8 size 0x278 virtual false final false
  inline void UpdateConnectionRectTransform();

  /// @brief Method SetActive addr 0x22a03a0 size 0xcc virtual false final false
  inline void SetActive(bool animated);

  /// @brief Method MissionConnectionEnabledDidFinish addr 0x22a0850 size 0x20 virtual false final false
  inline void MissionConnectionEnabledDidFinish();

  static inline ::GlobalNamespace::MissionNodeConnection* New_ctor();

  /// @brief Method .ctor addr 0x22a0870 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeConnection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MissionNodeConnection(MissionNodeConnection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MissionNodeConnection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MissionNodeConnection(MissionNodeConnection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MissionNodeConnection();

public:
  /// @brief Field _separator, offset: 0x18, size: 0x4, def value: None
  float_t ____separator;

  /// @brief Field _width, offset: 0x1c, size: 0x4, def value: None
  float_t ____width;

  /// @brief Field _rectTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::RectTransform* ____rectTransform;

  /// @brief Field _image, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____image;

  /// @brief Field _parentMissionNode, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodeVisualController* ____parentMissionNode;

  /// @brief Field _childMissionNode, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MissionNodeVisualController* ____childMissionNode;

  /// @brief Field _animator, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Animator* ____animator;

  /// @brief Field _parentMissionNodePosition, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____parentMissionNodePosition;

  /// @brief Field _childMissionNodePosition, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Vector2 ____childMissionNodePosition;

  /// @brief Field _isActive, offset: 0x58, size: 0x1, def value: None
  bool ____isActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionNodeConnection, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionNodeConnection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionNodeConnection*, "", "MissionNodeConnection");
