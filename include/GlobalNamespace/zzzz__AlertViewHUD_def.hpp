#pragma once
// IWYU pragma private; include "GlobalNamespace/AlertViewHUD.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AlertViewHUD)
namespace GlobalNamespace {
struct AlertViewHUD_MessageType;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct AlertViewHUD_MessageType;
}
namespace GlobalNamespace {
class AlertViewHUD;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AlertViewHUD_MessageType);
MARK_REF_PTR_T(::GlobalNamespace::AlertViewHUD);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: AlertViewHUD/MessageType
struct CORDL_TYPE AlertViewHUD_MessageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AlertViewHUD_MessageType_Unwrapped
  enum struct __AlertViewHUD_MessageType_Unwrapped : int32_t {
    __E_Info = static_cast<int32_t>(0x0),
    __E_Warning = static_cast<int32_t>(0x1),
    __E_Error = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AlertViewHUD_MessageType_Unwrapped() const noexcept {
    return static_cast<__AlertViewHUD_MessageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AlertViewHUD_MessageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AlertViewHUD_MessageType(int32_t value__) noexcept;

  /// @brief Field Error value: I32(2)
  static ::GlobalNamespace::AlertViewHUD_MessageType const Error;

  /// @brief Field Info value: I32(0)
  static ::GlobalNamespace::AlertViewHUD_MessageType const Info;

  /// @brief Field Warning value: I32(1)
  static ::GlobalNamespace::AlertViewHUD_MessageType const Warning;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21144 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AlertViewHUD_MessageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlertViewHUD_MessageType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AlertViewHUD
class CORDL_TYPE AlertViewHUD : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using MessageType = ::GlobalNamespace::AlertViewHUD_MessageType;

  __declspec(property(get = get_CenterInCamera, put = set_CenterInCamera)) bool CenterInCamera;

  __declspec(property(get = get_Hidden)) bool Hidden;

  __declspec(property(get = get_HideAfterSec, put = set_HideAfterSec)) int32_t HideAfterSec;

  /// @brief Field <Instance>k__BackingField, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__Instance_k__BackingField, put = setStaticF__Instance_k__BackingField)) ::UnityW<::GlobalNamespace::AlertViewHUD> _Instance_k__BackingField;

  /// @brief Field _centerEyeTransform, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__centerEyeTransform, put = __cordl_internal_set__centerEyeTransform)) ::UnityW<::UnityEngine::Transform> _centerEyeTransform;

  /// @brief Field _centerInCamera, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get__centerInCamera, put = __cordl_internal_set__centerInCamera)) bool _centerInCamera;

  /// @brief Field _errorIcon, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__errorIcon, put = __cordl_internal_set__errorIcon)) ::UnityW<::UnityEngine::Sprite> _errorIcon;

  /// @brief Field _hideAfterSec, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__hideAfterSec, put = __cordl_internal_set__hideAfterSec)) int32_t _hideAfterSec;

  /// @brief Field _infoIcon, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__infoIcon, put = __cordl_internal_set__infoIcon)) ::UnityW<::UnityEngine::Sprite> _infoIcon;

  /// @brief Field _initialPosition, offset 0x6c, size 0xc
  __declspec(property(get = __cordl_internal_get__initialPosition, put = __cordl_internal_set__initialPosition)) ::UnityEngine::Vector3 _initialPosition;

  /// @brief Field _initialRotation, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__initialRotation, put = __cordl_internal_set__initialRotation)) ::UnityEngine::Quaternion _initialRotation;

  /// @brief Field _initialTime, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get__initialTime, put = __cordl_internal_set__initialTime)) float_t _initialTime;

  /// @brief Field _messageTextField, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__messageTextField, put = __cordl_internal_set__messageTextField)) ::UnityW<::UnityEngine::UI::Text> _messageTextField;

  /// @brief Field _messageTypeIconField, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__messageTypeIconField, put = __cordl_internal_set__messageTypeIconField)) ::UnityW<::UnityEngine::UI::Image> _messageTypeIconField;

  /// @brief Field _messageTypeTextField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__messageTypeTextField, put = __cordl_internal_set__messageTypeTextField)) ::UnityW<::UnityEngine::UI::Text> _messageTypeTextField;

  /// @brief Field _panel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__panel, put = __cordl_internal_set__panel)) ::UnityW<::UnityEngine::GameObject> _panel;

  /// @brief Field _speed, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__speed, put = __cordl_internal_set__speed)) float_t _speed;

  /// @brief Field _warningIcon, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__warningIcon, put = __cordl_internal_set__warningIcon)) ::UnityW<::UnityEngine::Sprite> _warningIcon;

  /// @brief Method Awake, addr 0x5881984, size 0x134, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method CalculateHideAfterMessage, addr 0x5881e04, size 0x74, virtual false, abstract: false, final false
  inline void CalculateHideAfterMessage();

  /// @brief Method ClearMessage, addr 0x5881d8c, size 0x60, virtual false, abstract: false, final false
  inline void ClearMessage();

  /// @brief Method FollowCamera, addr 0x5881e78, size 0x2d8, virtual false, abstract: false, final false
  inline void FollowCamera();

  /// @brief Method Hide, addr 0x5881ab8, size 0x1c, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::GlobalNamespace::AlertViewHUD* New_ctor();

  /// @brief Method Post, addr 0x5881bd0, size 0x168, virtual false, abstract: false, final false
  inline void Post(::StringW message, ::GlobalNamespace::AlertViewHUD_MessageType type);

  /// @brief Method PostMessage, addr 0x5881ad4, size 0xfc, virtual false, abstract: false, final false
  static inline void PostMessage(::StringW message, ::GlobalNamespace::AlertViewHUD_MessageType messageType);

  /// @brief Method Reset, addr 0x5881d38, size 0x54, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x5881dec, size 0x18, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__centerEyeTransform() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__centerEyeTransform();

  constexpr bool const& __cordl_internal_get__centerInCamera() const;

  constexpr bool& __cordl_internal_get__centerInCamera();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__errorIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__errorIcon();

  constexpr int32_t const& __cordl_internal_get__hideAfterSec() const;

  constexpr int32_t& __cordl_internal_get__hideAfterSec();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__infoIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__infoIcon();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__initialPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__initialPosition();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__initialRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__initialRotation();

  constexpr float_t const& __cordl_internal_get__initialTime() const;

  constexpr float_t& __cordl_internal_get__initialTime();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__messageTextField() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__messageTextField();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__messageTypeIconField() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__messageTypeIconField();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__messageTypeTextField() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__messageTypeTextField();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__panel() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__panel();

  constexpr float_t const& __cordl_internal_get__speed() const;

  constexpr float_t& __cordl_internal_get__speed();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__warningIcon() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__warningIcon();

  constexpr void __cordl_internal_set__centerEyeTransform(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set__centerInCamera(bool value);

  constexpr void __cordl_internal_set__errorIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__hideAfterSec(int32_t value);

  constexpr void __cordl_internal_set__infoIcon(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__initialPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__initialRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__initialTime(float_t value);

  constexpr void __cordl_internal_set__messageTextField(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set__messageTypeIconField(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__messageTypeTextField(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set__panel(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__speed(float_t value);

  constexpr void __cordl_internal_set__warningIcon(::UnityW<::UnityEngine::Sprite> value);

  /// @brief Method .ctor, addr 0x5882150, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::GlobalNamespace::AlertViewHUD> getStaticF__Instance_k__BackingField();

  /// @brief Method get_CenterInCamera, addr 0x588194c, size 0x8, virtual false, abstract: false, final false
  inline bool get_CenterInCamera();

  /// @brief Method get_Hidden, addr 0x588195c, size 0x28, virtual false, abstract: false, final false
  inline bool get_Hidden();

  /// @brief Method get_HideAfterSec, addr 0x588193c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_HideAfterSec();

  /// @brief Method get_Instance, addr 0x58818a0, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::GlobalNamespace::AlertViewHUD> get_Instance();

  static inline void setStaticF__Instance_k__BackingField(::UnityW<::GlobalNamespace::AlertViewHUD> value);

  /// @brief Method set_CenterInCamera, addr 0x5881954, size 0x8, virtual false, abstract: false, final false
  inline void set_CenterInCamera(bool value);

  /// @brief Method set_HideAfterSec, addr 0x5881944, size 0x8, virtual false, abstract: false, final false
  inline void set_HideAfterSec(int32_t value);

  /// @brief Method set_Instance, addr 0x58818ec, size 0x50, virtual false, abstract: false, final false
  static inline void set_Instance(::GlobalNamespace::AlertViewHUD* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlertViewHUD();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlertViewHUD", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlertViewHUD(AlertViewHUD&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlertViewHUD", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlertViewHUD(AlertViewHUD const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21145 };

  /// @brief Field _hideAfterSec, offset: 0x20, size: 0x4, def value: None
  int32_t ____hideAfterSec;

  /// @brief Field _centerInCamera, offset: 0x24, size: 0x1, def value: None
  bool ____centerInCamera;

  /// @brief Field _panel, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____panel;

  /// @brief Field _warningIcon, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____warningIcon;

  /// @brief Field _errorIcon, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____errorIcon;

  /// @brief Field _infoIcon, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____infoIcon;

  /// @brief Field _messageTextField, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ____messageTextField;

  /// @brief Field _messageTypeTextField, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ____messageTypeTextField;

  /// @brief Field _messageTypeIconField, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____messageTypeIconField;

  /// @brief Field _centerEyeTransform, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____centerEyeTransform;

  /// @brief Field _initialTime, offset: 0x68, size: 0x4, def value: None
  float_t ____initialTime;

  /// @brief Field _initialPosition, offset: 0x6c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____initialPosition;

  /// @brief Field _initialRotation, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____initialRotation;

  /// @brief Field _speed, offset: 0x88, size: 0x4, def value: None
  float_t ____speed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____hideAfterSec) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____centerInCamera) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____panel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____warningIcon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____errorIcon) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____infoIcon) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____messageTextField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____messageTypeTextField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____messageTypeIconField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____centerEyeTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____initialTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____initialPosition) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____initialRotation) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AlertViewHUD, ____speed) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AlertViewHUD, 0x90>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlertViewHUD_MessageType, "", "AlertViewHUD/MessageType");
NEED_NO_BOX(::GlobalNamespace::AlertViewHUD);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AlertViewHUD*, "", "AlertViewHUD");
