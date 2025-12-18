#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/TweakEnum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Tweak_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TweakEnum)
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class TweakEnum;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum);
// Dependencies Meta.XR.ImmersiveDebugger.Manager.Tweak
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.TweakEnum
class CORDL_TYPE TweakEnum : public ::Meta::XR::ImmersiveDebugger::Manager::Tweak {
public:
  // Declarations
  __declspec(property(get = get_Member)) ::System::Reflection::MemberInfo* Member;

  __declspec(property(get = get_Tween, put = set_Tween)) float_t Tween;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field <Tween>k__BackingField, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__Tween_k__BackingField, put = __cordl_internal_set__Tween_k__BackingField)) float_t _Tween_k__BackingField;

  /// @brief Field _enumType, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__enumType, put = __cordl_internal_set__enumType)) ::System::Type* _enumType;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::TweakEnum* New_ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle,
                                                                            ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::System::Type* enumType);

  constexpr float_t const& __cordl_internal_get__Tween_k__BackingField() const;

  constexpr float_t& __cordl_internal_get__Tween_k__BackingField();

  constexpr ::System::Type* const& __cordl_internal_get__enumType() const;

  constexpr ::System::Type*& __cordl_internal_get__enumType();

  constexpr void __cordl_internal_set__Tween_k__BackingField(float_t value);

  constexpr void __cordl_internal_set__enumType(::System::Type* value);

  /// @brief Method .ctor, addr 0x58b6360, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instanceHandle, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute,
                    ::System::Type* enumType);

  /// @brief Method get_Member, addr 0x58b6358, size 0x8, virtual false, abstract: false, final false
  inline ::System::Reflection::MemberInfo* get_Member();

  /// @brief Method get_Tween, addr 0x58b6388, size 0x8, virtual true, abstract: false, final false
  inline float_t get_Tween();

  /// @brief Method get_Value, addr 0x58aafb4, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Tween, addr 0x58b6390, size 0x8, virtual true, abstract: false, final false
  inline void set_Tween(float_t value);

  /// @brief Method set_Value, addr 0x58aae8c, size 0x54, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TweakEnum();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TweakEnum", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TweakEnum(TweakEnum&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TweakEnum", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TweakEnum(TweakEnum const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18410 };

  /// @brief Field _enumType, offset: 0x40, size: 0x8, def value: None
  ::System::Type* ____enumType;

  /// @brief Field <Tween>k__BackingField, offset: 0x48, size: 0x4, def value: None
  float_t ____Tween_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum, ____enumType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum, ____Tween_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::TweakEnum, 0x50>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::TweakEnum*, "Meta.XR.ImmersiveDebugger.Manager", "TweakEnum");
