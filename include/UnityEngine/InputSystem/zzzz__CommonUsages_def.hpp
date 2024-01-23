#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
CORDL_MODULE_EXPORT(CommonUsages)
// Forward declare root types
namespace UnityEngine::InputSystem {
class CommonUsages;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::CommonUsages);
// Type: UnityEngine.InputSystem::CommonUsages
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6671))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6213))
// CS Name: ::UnityEngine.InputSystem::CommonUsages*
class CORDL_TYPE CommonUsages : public ::System::Object {
public:
  // Declarations
  /// @brief Field Primary2DMotion, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Primary2DMotion, put = setStaticF_Primary2DMotion))::UnityEngine::InputSystem::Utilities::InternedString Primary2DMotion;

  /// @brief Field Secondary2DMotion, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Secondary2DMotion, put = setStaticF_Secondary2DMotion))::UnityEngine::InputSystem::Utilities::InternedString Secondary2DMotion;

  /// @brief Field PrimaryAction, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_PrimaryAction, put = setStaticF_PrimaryAction))::UnityEngine::InputSystem::Utilities::InternedString PrimaryAction;

  /// @brief Field SecondaryAction, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_SecondaryAction, put = setStaticF_SecondaryAction))::UnityEngine::InputSystem::Utilities::InternedString SecondaryAction;

  /// @brief Field PrimaryTrigger, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_PrimaryTrigger, put = setStaticF_PrimaryTrigger))::UnityEngine::InputSystem::Utilities::InternedString PrimaryTrigger;

  /// @brief Field SecondaryTrigger, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_SecondaryTrigger, put = setStaticF_SecondaryTrigger))::UnityEngine::InputSystem::Utilities::InternedString SecondaryTrigger;

  /// @brief Field Modifier, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Modifier, put = setStaticF_Modifier))::UnityEngine::InputSystem::Utilities::InternedString Modifier;

  /// @brief Field Position, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Position, put = setStaticF_Position))::UnityEngine::InputSystem::Utilities::InternedString Position;

  /// @brief Field Orientation, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Orientation, put = setStaticF_Orientation))::UnityEngine::InputSystem::Utilities::InternedString Orientation;

  /// @brief Field Hatswitch, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Hatswitch, put = setStaticF_Hatswitch))::UnityEngine::InputSystem::Utilities::InternedString Hatswitch;

  /// @brief Field Back, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Back, put = setStaticF_Back))::UnityEngine::InputSystem::Utilities::InternedString Back;

  /// @brief Field Forward, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Forward, put = setStaticF_Forward))::UnityEngine::InputSystem::Utilities::InternedString Forward;

  /// @brief Field Menu, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Menu, put = setStaticF_Menu))::UnityEngine::InputSystem::Utilities::InternedString Menu;

  /// @brief Field Submit, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Submit, put = setStaticF_Submit))::UnityEngine::InputSystem::Utilities::InternedString Submit;

  /// @brief Field Cancel, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Cancel, put = setStaticF_Cancel))::UnityEngine::InputSystem::Utilities::InternedString Cancel;

  /// @brief Field Horizontal, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Horizontal, put = setStaticF_Horizontal))::UnityEngine::InputSystem::Utilities::InternedString Horizontal;

  /// @brief Field Vertical, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Vertical, put = setStaticF_Vertical))::UnityEngine::InputSystem::Utilities::InternedString Vertical;

  /// @brief Field Twist, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Twist, put = setStaticF_Twist))::UnityEngine::InputSystem::Utilities::InternedString Twist;

  /// @brief Field Pressure, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Pressure, put = setStaticF_Pressure))::UnityEngine::InputSystem::Utilities::InternedString Pressure;

  /// @brief Field ScrollHorizontal, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_ScrollHorizontal, put = setStaticF_ScrollHorizontal))::UnityEngine::InputSystem::Utilities::InternedString ScrollHorizontal;

  /// @brief Field ScrollVertical, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_ScrollVertical, put = setStaticF_ScrollVertical))::UnityEngine::InputSystem::Utilities::InternedString ScrollVertical;

  /// @brief Field Point, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_Point, put = setStaticF_Point))::UnityEngine::InputSystem::Utilities::InternedString Point;

  /// @brief Field LowFreqMotor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_LowFreqMotor, put = setStaticF_LowFreqMotor))::UnityEngine::InputSystem::Utilities::InternedString LowFreqMotor;

  /// @brief Field HighFreqMotor, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_HighFreqMotor, put = setStaticF_HighFreqMotor))::UnityEngine::InputSystem::Utilities::InternedString HighFreqMotor;

  /// @brief Field LeftHand, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_LeftHand, put = setStaticF_LeftHand))::UnityEngine::InputSystem::Utilities::InternedString LeftHand;

  /// @brief Field RightHand, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_RightHand, put = setStaticF_RightHand))::UnityEngine::InputSystem::Utilities::InternedString RightHand;

  /// @brief Field BatteryStrength, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_BatteryStrength, put = setStaticF_BatteryStrength))::UnityEngine::InputSystem::Utilities::InternedString BatteryStrength;

  static inline void setStaticF_Primary2DMotion(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Primary2DMotion();

  static inline void setStaticF_Secondary2DMotion(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Secondary2DMotion();

  static inline void setStaticF_PrimaryAction(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_PrimaryAction();

  static inline void setStaticF_SecondaryAction(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_SecondaryAction();

  static inline void setStaticF_PrimaryTrigger(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_PrimaryTrigger();

  static inline void setStaticF_SecondaryTrigger(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_SecondaryTrigger();

  static inline void setStaticF_Modifier(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Modifier();

  static inline void setStaticF_Position(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Position();

  static inline void setStaticF_Orientation(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Orientation();

  static inline void setStaticF_Hatswitch(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Hatswitch();

  static inline void setStaticF_Back(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Back();

  static inline void setStaticF_Forward(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Forward();

  static inline void setStaticF_Menu(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Menu();

  static inline void setStaticF_Submit(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Submit();

  static inline void setStaticF_Cancel(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Cancel();

  static inline void setStaticF_Horizontal(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Horizontal();

  static inline void setStaticF_Vertical(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Vertical();

  static inline void setStaticF_Twist(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Twist();

  static inline void setStaticF_Pressure(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Pressure();

  static inline void setStaticF_ScrollHorizontal(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_ScrollHorizontal();

  static inline void setStaticF_ScrollVertical(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_ScrollVertical();

  static inline void setStaticF_Point(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_Point();

  static inline void setStaticF_LowFreqMotor(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_LowFreqMotor();

  static inline void setStaticF_HighFreqMotor(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_HighFreqMotor();

  static inline void setStaticF_LeftHand(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_LeftHand();

  static inline void setStaticF_RightHand(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_RightHand();

  static inline void setStaticF_BatteryStrength(::UnityEngine::InputSystem::Utilities::InternedString value);

  static inline ::UnityEngine::InputSystem::Utilities::InternedString getStaticF_BatteryStrength();

  // Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommonUsages(CommonUsages&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommonUsages", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommonUsages(CommonUsages const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommonUsages();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::CommonUsages, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem
NEED_NO_BOX(::UnityEngine::InputSystem::CommonUsages);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::CommonUsages*, "UnityEngine.InputSystem", "CommonUsages");
