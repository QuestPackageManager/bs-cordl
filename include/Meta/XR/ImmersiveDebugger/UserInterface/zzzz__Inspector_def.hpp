#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Inspector.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Inspector)
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Background;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Controller;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Flex;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ImageStyle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class ToggleWithLabel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface::Generic {
class Toggle;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IInspector;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Member;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Reflection {
class MemberInfo;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class Inspector;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector);
// Dependencies Meta.XR.ImmersiveDebugger.UserInterface.Generic.Controller, Meta.XR.ImmersiveDebugger.Utils.InstanceHandle
namespace Meta::XR::ImmersiveDebugger::UserInterface {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.UserInterface.Inspector
class CORDL_TYPE Inspector : public ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller {
public:
  // Declarations
  __declspec(property(put = set_BackgroundStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> BackgroundStyle;

  __declspec(property(get = get_Foldout)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> Foldout;

  __declspec(property(get = get_InstanceHandle, put = set_InstanceHandle)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle InstanceHandle;

  __declspec(property(get = get_Title, put = set_Title)) ::StringW Title;

  /// @brief Field _background, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__background, put = __cordl_internal_set__background)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> _background;

  /// @brief Field _backgroundImageStyle, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImageStyle, put = __cordl_internal_set__backgroundImageStyle)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>
      _backgroundImageStyle;

  /// @brief Field _flex, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get__flex, put = __cordl_internal_set__flex)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> _flex;

  /// @brief Field _foldout, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__foldout, put = __cordl_internal_set__foldout)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> _foldout;

  /// @brief Field _instanceHandle, offset 0x70, size 0x18
  __declspec(property(get = __cordl_internal_get__instanceHandle, put = __cordl_internal_set__instanceHandle)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle _instanceHandle;

  /// @brief Field _previousEnabledState, offset 0xb8, size 0x1
  __declspec(property(get = __cordl_internal_get__previousEnabledState, put = __cordl_internal_set__previousEnabledState)) bool _previousEnabledState;

  /// @brief Field _registry, offset 0xa0, size 0x8
  __declspec(property(
      get = __cordl_internal_get__registry,
      put = __cordl_internal_set__registry)) ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>* _registry;

  /// @brief Field _title, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__title, put = __cordl_internal_set__title)) ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> _title;

  /// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::UserInterface::IInspector"
  constexpr operator ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector*() noexcept;

  /// @brief Method GetMember, addr 0x583acf0, size 0x74, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* GetMember(::System::Reflection::MemberInfo* memberInfo);

  static inline ::Meta::XR::ImmersiveDebugger::UserInterface::Inspector* New_ctor();

  /// @brief Method OnStateChanged, addr 0x583ad64, size 0x250, virtual false, abstract: false, final false
  inline void OnStateChanged(bool state);

  /// @brief Method OnTransparencyChanged, addr 0x583a774, size 0x78, virtual true, abstract: false, final false
  inline void OnTransparencyChanged();

  /// @brief Method RegisterMember, addr 0x583a82c, size 0x218, virtual true, abstract: false, final true
  inline ::Meta::XR::ImmersiveDebugger::UserInterface::IMember* RegisterMember(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method Setup, addr 0x583a27c, size 0x4f8, virtual true, abstract: false, final false
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner);

  /// @brief Method Update, addr 0x583afb4, size 0x8, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateBackground, addr 0x583a7ec, size 0x40, virtual false, abstract: false, final false
  inline void UpdateBackground(bool transparent);

  /// @brief Method UpdateInstanceState, addr 0x583a18c, size 0xe8, virtual false, abstract: false, final false
  inline void UpdateInstanceState(bool force);

  /// @brief Method UpdateInstanceState, addr 0x583afbc, size 0xdc, virtual false, abstract: false, final false
  inline void UpdateInstanceState(bool state, bool force);

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> const& __cordl_internal_get__background() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background>& __cordl_internal_get__background();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> const& __cordl_internal_get__backgroundImageStyle() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle>& __cordl_internal_get__backgroundImageStyle();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& __cordl_internal_get__flex() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& __cordl_internal_get__flex();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& __cordl_internal_get__foldout() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& __cordl_internal_get__foldout();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& __cordl_internal_get__instanceHandle() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& __cordl_internal_get__instanceHandle();

  constexpr bool const& __cordl_internal_get__previousEnabledState() const;

  constexpr bool& __cordl_internal_get__previousEnabledState();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>* const&
  __cordl_internal_get__registry() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>*& __cordl_internal_get__registry();

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> const& __cordl_internal_get__title() const;

  constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel>& __cordl_internal_get__title();

  constexpr void __cordl_internal_set__background(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> value);

  constexpr void __cordl_internal_set__backgroundImageStyle(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> value);

  constexpr void __cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value);

  constexpr void __cordl_internal_set__foldout(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value);

  constexpr void __cordl_internal_set__instanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  constexpr void __cordl_internal_set__previousEnabledState(bool value);

  constexpr void __cordl_internal_set__registry(::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>* value);

  constexpr void __cordl_internal_set__title(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> value);

  /// @brief Method .ctor, addr 0x583b098, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Foldout, addr 0x583a274, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> get_Foldout();

  /// @brief Method get_InstanceHandle, addr 0x583a040, size 0x14, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle get_InstanceHandle();

  /// @brief Method get_Title, addr 0x583a010, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Title();

  /// @brief Convert to "::Meta::XR::ImmersiveDebugger::UserInterface::IInspector"
  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IInspector* i___Meta__XR__ImmersiveDebugger__UserInterface__IInspector() noexcept;

  /// @brief Method set_BackgroundStyle, addr 0x5839f74, size 0x9c, virtual false, abstract: false, final false
  inline void set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value);

  /// @brief Method set_InstanceHandle, addr 0x583a054, size 0x138, virtual false, abstract: false, final false
  inline void set_InstanceHandle(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  /// @brief Method set_Title, addr 0x583a028, size 0x18, virtual false, abstract: false, final false
  inline void set_Title(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Inspector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Inspector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Inspector(Inspector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Inspector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Inspector(Inspector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18322 };

  /// @brief Field _instanceHandle, offset: 0x70, size: 0x18, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle ____instanceHandle;

  /// @brief Field _title, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> ____title;

  /// @brief Field _flex, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> ____flex;

  /// @brief Field _background, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Background> ____background;

  /// @brief Field _registry, offset: 0xa0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Member>>* ____registry;

  /// @brief Field _backgroundImageStyle, offset: 0xa8, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle> ____backgroundImageStyle;

  /// @brief Field _foldout, offset: 0xb0, size: 0x8, def value: None
  ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> ____foldout;

  /// @brief Field _previousEnabledState, offset: 0xb8, size: 0x1, def value: None
  bool ____previousEnabledState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____instanceHandle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____title) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____flex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____background) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____registry) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____backgroundImageStyle) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____foldout) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, ____previousEnabledState) == 0xb8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::UserInterface::Inspector, 0xc0>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::UserInterface
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::UserInterface::Inspector*, "Meta.XR.ImmersiveDebugger.UserInterface", "Inspector");
