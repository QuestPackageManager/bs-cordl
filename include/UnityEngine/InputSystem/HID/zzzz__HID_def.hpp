#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::HID {
class HIDLayoutBuilder_HID___c;
}
namespace UnityEngine::InputSystem::HID {
struct HID_Button;
}
namespace UnityEngine::InputSystem::HID {
struct HID_GenericDesktop;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDCollectionDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDCollectionType;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDDeviceDescriptorBuilder;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDElementDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDElementFlags;
}
namespace UnityEngine::InputSystem::HID {
class HID_HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct HID_Simulation;
}
namespace UnityEngine::InputSystem::HID {
struct HID_UsagePage;
}
namespace UnityEngine::InputSystem::HID {
class HID___c__DisplayClass13_0;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout_Builder;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputControlLayout_ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputDeviceExecuteCommandDelegate;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
struct HID_Button;
}
namespace UnityEngine::InputSystem::HID {
struct HID_GenericDesktop;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDCollectionType;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDElementFlags;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct HID_Simulation;
}
namespace UnityEngine::InputSystem::HID {
struct HID_UsagePage;
}
namespace UnityEngine::InputSystem::HID {
class HID;
}
namespace UnityEngine::InputSystem::HID {
class HIDLayoutBuilder_HID___c;
}
namespace UnityEngine::InputSystem::HID {
class HID_HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::HID {
class HID___c__DisplayClass13_0;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDCollectionDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDDeviceDescriptorBuilder;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDElementDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_Button);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_GenericDesktop);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_HIDCollectionType);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_HIDElementFlags);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_HIDReportType);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_Simulation);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_UsagePage);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HID);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor);
// Dependencies System.Object
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID/HIDLayoutBuilder/<>c
class CORDL_TYPE HIDLayoutBuilder_HID___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0)) ::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1)) ::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* __9__4_1;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2)) ::System::Func_2<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::StringW>* __9__4_2;

  static inline ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* New_ctor();

  /// @brief Method <Build>b__4_0, addr 0x63854ec, size 0x24, virtual false, abstract: false, final false
  inline bool _Build_b__4_0(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor element);

  /// @brief Method <Build>b__4_1, addr 0x6385510, size 0x24, virtual false, abstract: false, final false
  inline bool _Build_b__4_1(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor element);

  /// @brief Method <Build>b__4_2, addr 0x6385534, size 0x20, virtual false, abstract: false, final false
  inline ::StringW _Build_b__4_2(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem x);

  /// @brief Method .ctor, addr 0x63854e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* getStaticF___9__4_0();

  static inline ::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* getStaticF___9__4_1();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::StringW>* getStaticF___9__4_2();

  static inline void setStaticF___9(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c* value);

  static inline void setStaticF___9__4_0(::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* value);

  static inline void setStaticF___9__4_1(::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* value);

  static inline void setStaticF___9__4_2(::System::Func_2<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDLayoutBuilder_HID___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HIDLayoutBuilder_HID___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HIDLayoutBuilder_HID___c(HIDLayoutBuilder_HID___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HIDLayoutBuilder_HID___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HIDLayoutBuilder_HID___c(HIDLayoutBuilder_HID___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/UsagePage
struct CORDL_TYPE HID_UsagePage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HID_UsagePage_Unwrapped
  enum struct __HID_UsagePage_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_GenericDesktop = static_cast<int32_t>(0x1),
    __E_Simulation = static_cast<int32_t>(0x2),
    __E_VRControls = static_cast<int32_t>(0x3),
    __E_SportControls = static_cast<int32_t>(0x4),
    __E_GameControls = static_cast<int32_t>(0x5),
    __E_GenericDeviceControls = static_cast<int32_t>(0x6),
    __E_Keyboard = static_cast<int32_t>(0x7),
    __E_LEDs = static_cast<int32_t>(0x8),
    __E_Button = static_cast<int32_t>(0x9),
    __E_Ordinal = static_cast<int32_t>(0xa),
    __E_Telephony = static_cast<int32_t>(0xb),
    __E_Consumer = static_cast<int32_t>(0xc),
    __E_Digitizer = static_cast<int32_t>(0xd),
    __E_PID = static_cast<int32_t>(0xf),
    __E_Unicode = static_cast<int32_t>(0x10),
    __E_AlphanumericDisplay = static_cast<int32_t>(0x14),
    __E_MedicalInstruments = static_cast<int32_t>(0x40),
    __E_Monitor = static_cast<int32_t>(0x80),
    __E_Power = static_cast<int32_t>(0x84),
    __E_BarCodeScanner = static_cast<int32_t>(0x8c),
    __E_MagneticStripeReader = static_cast<int32_t>(0x8e),
    __E_Camera = static_cast<int32_t>(0x90),
    __E_Arcade = static_cast<int32_t>(0x91),
    __E_VendorDefined = static_cast<int32_t>(0xff00),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HID_UsagePage_Unwrapped() const noexcept {
    return static_cast<__HID_UsagePage_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_UsagePage();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_UsagePage(int32_t value__) noexcept;

  /// @brief Field AlphanumericDisplay value: I32(20)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const AlphanumericDisplay;

  /// @brief Field Arcade value: I32(145)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Arcade;

  /// @brief Field BarCodeScanner value: I32(140)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const BarCodeScanner;

  /// @brief Field Button value: I32(9)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Button;

  /// @brief Field Camera value: I32(144)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Camera;

  /// @brief Field Consumer value: I32(12)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Consumer;

  /// @brief Field Digitizer value: I32(13)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Digitizer;

  /// @brief Field GameControls value: I32(5)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const GameControls;

  /// @brief Field GenericDesktop value: I32(1)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const GenericDesktop;

  /// @brief Field GenericDeviceControls value: I32(6)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const GenericDeviceControls;

  /// @brief Field Keyboard value: I32(7)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Keyboard;

  /// @brief Field LEDs value: I32(8)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const LEDs;

  /// @brief Field MagneticStripeReader value: I32(142)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const MagneticStripeReader;

  /// @brief Field MedicalInstruments value: I32(64)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const MedicalInstruments;

  /// @brief Field Monitor value: I32(128)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Monitor;

  /// @brief Field Ordinal value: I32(10)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Ordinal;

  /// @brief Field PID value: I32(15)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const PID;

  /// @brief Field Power value: I32(132)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Power;

  /// @brief Field Simulation value: I32(2)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Simulation;

  /// @brief Field SportControls value: I32(4)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const SportControls;

  /// @brief Field Telephony value: I32(11)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Telephony;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Undefined;

  /// @brief Field Unicode value: I32(16)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const Unicode;

  /// @brief Field VRControls value: I32(3)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const VRControls;

  /// @brief Field VendorDefined value: I32(65280)
  static ::UnityEngine::InputSystem::HID::HID_UsagePage const VendorDefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8867 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_UsagePage, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_UsagePage, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies UnityEngine.InputSystem.HID.HID::UsagePage
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDDeviceDescriptor
struct CORDL_TYPE HID_HIDDeviceDescriptor {
public:
  // Declarations
  /// @brief Method FromJson, addr 0x63825b4, size 0xfb0, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor FromJson(::StringW json);

  /// @brief Method ToJson, addr 0x6383564, size 0x70, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDDeviceDescriptor();

  // Ctor Parameters [CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::HID_UsagePage", modifiers: "", def_value: None }, CppParam { name:
  // "inputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "outputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "featureReportSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "elements", ty:
  // "::ArrayW<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor,::Array<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>*>", modifiers: "", def_value: None }, CppParam { name:
  // "collections", ty: "::ArrayW<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor,::Array<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>*>", modifiers: "", def_value: None
  // }]
  constexpr HID_HIDDeviceDescriptor(
      int32_t vendorId, int32_t productId, int32_t usage, ::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t inputReportSize, int32_t outputReportSize, int32_t featureReportSize,
      ::ArrayW<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, ::Array<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>*> elements,
      ::ArrayW<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, ::Array<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>*> collections) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8865 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field vendorId, offset: 0x0, size: 0x4, def value: None
  int32_t vendorId;

  /// @brief Field productId, offset: 0x4, size: 0x4, def value: None
  int32_t productId;

  /// @brief Field usage, offset: 0x8, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field usagePage, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_UsagePage usagePage;

  /// @brief Field inputReportSize, offset: 0x10, size: 0x4, def value: None
  int32_t inputReportSize;

  /// @brief Field outputReportSize, offset: 0x14, size: 0x4, def value: None
  int32_t outputReportSize;

  /// @brief Field featureReportSize, offset: 0x18, size: 0x4, def value: None
  int32_t featureReportSize;

  /// @brief Field elements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, ::Array<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>*> elements;

  /// @brief Field collections, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, ::Array<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>*> collections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, vendorId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, productId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, usage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, usagePage) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, inputReportSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, outputReportSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, featureReportSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, elements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, collections) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, 0x30>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies System.Object, UnityEngine.InputSystem.HID.HID::HIDDeviceDescriptor
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID/HIDLayoutBuilder
class CORDL_TYPE HID_HIDLayoutBuilder : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c;

  /// @brief Field deviceType, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_deviceType, put = __cordl_internal_set_deviceType)) ::System::Type* deviceType;

  /// @brief Field displayName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_displayName, put = __cordl_internal_set_displayName)) ::StringW displayName;

  /// @brief Field hidDescriptor, offset 0x18, size 0x30
  __declspec(property(get = __cordl_internal_get_hidDescriptor, put = __cordl_internal_set_hidDescriptor)) ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor hidDescriptor;

  /// @brief Field parentLayout, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_parentLayout, put = __cordl_internal_set_parentLayout)) ::StringW parentLayout;

  /// @brief Method Build, addr 0x63837b0, size 0xc20, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();

  static inline ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* New_ctor();

  constexpr ::System::Type* const& __cordl_internal_get_deviceType() const;

  constexpr ::System::Type*& __cordl_internal_get_deviceType();

  constexpr ::StringW const& __cordl_internal_get_displayName() const;

  constexpr ::StringW& __cordl_internal_get_displayName();

  constexpr ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor const& __cordl_internal_get_hidDescriptor() const;

  constexpr ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor& __cordl_internal_get_hidDescriptor();

  constexpr ::StringW const& __cordl_internal_get_parentLayout() const;

  constexpr ::StringW& __cordl_internal_get_parentLayout();

  constexpr void __cordl_internal_set_deviceType(::System::Type* value);

  constexpr void __cordl_internal_set_displayName(::StringW value);

  constexpr void __cordl_internal_set_hidDescriptor(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor value);

  constexpr void __cordl_internal_set_parentLayout(::StringW value);

  /// @brief Method .ctor, addr 0x63825b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDLayoutBuilder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HID_HIDLayoutBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HID_HIDLayoutBuilder(HID_HIDLayoutBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HID_HIDLayoutBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HID_HIDLayoutBuilder(HID_HIDLayoutBuilder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8859 };

  /// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field hidDescriptor, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor ___hidDescriptor;

  /// @brief Field parentLayout, offset: 0x48, size: 0x8, def value: None
  ::StringW ___parentLayout;

  /// @brief Field deviceType, offset: 0x50, size: 0x8, def value: None
  ::System::Type* ___deviceType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___hidDescriptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___parentLayout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, ___deviceType) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder, 0x58>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDReportType
struct CORDL_TYPE HID_HIDReportType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HID_HIDReportType_Unwrapped
  enum struct __HID_HIDReportType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Input = static_cast<int32_t>(0x1),
    __E_Output = static_cast<int32_t>(0x2),
    __E_Feature = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HID_HIDReportType_Unwrapped() const noexcept {
    return static_cast<__HID_HIDReportType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDReportType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_HIDReportType(int32_t value__) noexcept;

  /// @brief Field Feature value: I32(3)
  static ::UnityEngine::InputSystem::HID::HID_HIDReportType const Feature;

  /// @brief Field Input value: I32(1)
  static ::UnityEngine::InputSystem::HID::HID_HIDReportType const Input;

  /// @brief Field Output value: I32(2)
  static ::UnityEngine::InputSystem::HID::HID_HIDReportType const Output;

  /// @brief Field Unknown value: I32(0)
  static ::UnityEngine::InputSystem::HID::HID_HIDReportType const Unknown;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8860 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDReportType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDReportType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDCollectionType
struct CORDL_TYPE HID_HIDCollectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HID_HIDCollectionType_Unwrapped
  enum struct __HID_HIDCollectionType_Unwrapped : int32_t {
    __E_Physical = static_cast<int32_t>(0x0),
    __E_Application = static_cast<int32_t>(0x1),
    __E_Logical = static_cast<int32_t>(0x2),
    __E_Report = static_cast<int32_t>(0x3),
    __E_NamedArray = static_cast<int32_t>(0x4),
    __E_UsageSwitch = static_cast<int32_t>(0x5),
    __E_UsageModifier = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HID_HIDCollectionType_Unwrapped() const noexcept {
    return static_cast<__HID_HIDCollectionType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDCollectionType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_HIDCollectionType(int32_t value__) noexcept;

  /// @brief Field Application value: I32(1)
  static ::UnityEngine::InputSystem::HID::HID_HIDCollectionType const Application;

  /// @brief Field Logical value: I32(2)
  static ::UnityEngine::InputSystem::HID::HID_HIDCollectionType const Logical;

  /// @brief Field NamedArray value: I32(4)
  static ::UnityEngine::InputSystem::HID::HID_HIDCollectionType const NamedArray;

  /// @brief Field Physical value: I32(0)
  static ::UnityEngine::InputSystem::HID::HID_HIDCollectionType const Physical;

  /// @brief Field Report value: I32(3)
  static ::UnityEngine::InputSystem::HID::HID_HIDCollectionType const Report;

  /// @brief Field UsageModifier value: I32(6)
  static ::UnityEngine::InputSystem::HID::HID_HIDCollectionType const UsageModifier;

  /// @brief Field UsageSwitch value: I32(5)
  static ::UnityEngine::InputSystem::HID::HID_HIDCollectionType const UsageSwitch;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8861 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDCollectionType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDCollectionType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDElementFlags
struct CORDL_TYPE HID_HIDElementFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HID_HIDElementFlags_Unwrapped
  enum struct __HID_HIDElementFlags_Unwrapped : int32_t {
    __E_Constant = static_cast<int32_t>(0x1),
    __E_Variable = static_cast<int32_t>(0x2),
    __E_Relative = static_cast<int32_t>(0x4),
    __E_Wrap = static_cast<int32_t>(0x8),
    __E_NonLinear = static_cast<int32_t>(0x10),
    __E_NoPreferred = static_cast<int32_t>(0x20),
    __E_NullState = static_cast<int32_t>(0x40),
    __E_Volatile = static_cast<int32_t>(0x80),
    __E_BufferedBytes = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HID_HIDElementFlags_Unwrapped() const noexcept {
    return static_cast<__HID_HIDElementFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDElementFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_HIDElementFlags(int32_t value__) noexcept;

  /// @brief Field BufferedBytes value: I32(256)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const BufferedBytes;

  /// @brief Field Constant value: I32(1)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const Constant;

  /// @brief Field NoPreferred value: I32(32)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const NoPreferred;

  /// @brief Field NonLinear value: I32(16)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const NonLinear;

  /// @brief Field NullState value: I32(64)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const NullState;

  /// @brief Field Relative value: I32(4)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const Relative;

  /// @brief Field Variable value: I32(2)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const Variable;

  /// @brief Field Volatile value: I32(128)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const Volatile;

  /// @brief Field Wrap value: I32(8)
  static ::UnityEngine::InputSystem::HID::HID_HIDElementFlags const Wrap;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8862 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDElementFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies System.Nullable`1<T>, UnityEngine.InputSystem.HID.HID::HIDElementFlags, UnityEngine.InputSystem.HID.HID::HIDReportType, UnityEngine.InputSystem.HID.HID::UsagePage
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDElementDescriptor
struct CORDL_TYPE HID_HIDElementDescriptor {
public:
  // Declarations
  __declspec(property(get = get_hasNullState)) bool hasNullState;

  __declspec(property(get = get_hasPreferredState)) bool hasPreferredState;

  __declspec(property(get = get_isArray)) bool isArray;

  __declspec(property(get = get_isConstant)) bool isConstant;

  __declspec(property(get = get_isNonLinear)) bool isNonLinear;

  __declspec(property(get = get_isRelative)) bool isRelative;

  __declspec(property(get = get_isSigned)) bool isSigned;

  __declspec(property(get = get_isWrapping)) bool isWrapping;

  __declspec(property(get = get_maxFloatValue)) float_t maxFloatValue;

  __declspec(property(get = get_minFloatValue)) float_t minFloatValue;

  /// @brief Method AddChildControls, addr 0x6384db8, size 0x6dc, virtual false, abstract: false, final false
  inline void AddChildControls(::ByRef<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor> element, ::StringW controlName,
                               ::ByRef<::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder*> builder);

  /// @brief Method DetermineAxisNormalizationParameters, addr 0x63856e8, size 0x1e8, virtual false, abstract: false, final false
  inline ::StringW DetermineAxisNormalizationParameters();

  /// @brief Method DetermineDefaultState, addr 0x638451c, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue DetermineDefaultState();

  /// @brief Method DetermineDisplayName, addr 0x63849ac, size 0x118, virtual false, abstract: false, final false
  inline ::StringW DetermineDisplayName();

  /// @brief Method DetermineFormat, addr 0x6384ac4, size 0x14c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC DetermineFormat();

  /// @brief Method DetermineLayout, addr 0x6384664, size 0x114, virtual false, abstract: false, final false
  inline ::StringW DetermineLayout();

  /// @brief Method DetermineName, addr 0x6384778, size 0x234, virtual false, abstract: false, final false
  inline ::StringW DetermineName();

  /// @brief Method DetermineParameters, addr 0x63843d0, size 0x140, virtual false, abstract: false, final false
  inline ::StringW DetermineParameters();

  /// @brief Method DetermineProcessors, addr 0x63845cc, size 0x74, virtual false, abstract: false, final false
  inline ::StringW DetermineProcessors();

  /// @brief Method DetermineUsages, addr 0x6384c10, size 0x1a8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> DetermineUsages();

  /// @brief Method Is, addr 0x6384640, size 0x24, virtual false, abstract: false, final false
  inline bool Is(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t usage);

  /// @brief Method IsUsableElement, addr 0x6382578, size 0x38, virtual false, abstract: false, final false
  inline bool IsUsableElement();

  /// @brief Method get_hasNullState, addr 0x6385554, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasNullState();

  /// @brief Method get_hasPreferredState, addr 0x6385560, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasPreferredState();

  /// @brief Method get_isArray, addr 0x6385570, size 0x10, virtual false, abstract: false, final false
  inline bool get_isArray();

  /// @brief Method get_isConstant, addr 0x6385598, size 0xc, virtual false, abstract: false, final false
  inline bool get_isConstant();

  /// @brief Method get_isNonLinear, addr 0x6385580, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNonLinear();

  /// @brief Method get_isRelative, addr 0x638558c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isRelative();

  /// @brief Method get_isSigned, addr 0x6384510, size 0xc, virtual false, abstract: false, final false
  inline bool get_isSigned();

  /// @brief Method get_isWrapping, addr 0x63855a4, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWrapping();

  /// @brief Method get_maxFloatValue, addr 0x6385648, size 0xa0, virtual false, abstract: false, final false
  inline float_t get_maxFloatValue();

  /// @brief Method get_minFloatValue, addr 0x63855b0, size 0x98, virtual false, abstract: false, final false
  inline float_t get_minFloatValue();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDElementDescriptor();

  // Ctor Parameters [CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::HID_UsagePage", modifiers: "",
  // def_value: None }, CppParam { name: "unit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitExponent", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "logicalMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "logicalMax", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "physicalMin", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "physicalMax", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportType", ty:
  // "::UnityEngine::InputSystem::HID::HID_HIDReportType", modifiers: "", def_value: None }, CppParam { name: "collectionIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "reportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportSizeInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportOffsetInBits", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::HID::HID_HIDElementFlags", modifiers: "", def_value: None }, CppParam { name: "usageMin",
  // ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageMax", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
  constexpr HID_HIDElementDescriptor(int32_t usage, ::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t unit, int32_t unitExponent, int32_t logicalMin, int32_t logicalMax,
                                     int32_t physicalMin, int32_t physicalMax, ::UnityEngine::InputSystem::HID::HID_HIDReportType reportType, int32_t collectionIndex, int32_t reportId,
                                     int32_t reportSizeInBits, int32_t reportOffsetInBits, ::UnityEngine::InputSystem::HID::HID_HIDElementFlags flags, ::System::Nullable_1<int32_t> usageMin,
                                     ::System::Nullable_1<int32_t> usageMax) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8863 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field usage, offset: 0x0, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field usagePage, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_UsagePage usagePage;

  /// @brief Field unit, offset: 0x8, size: 0x4, def value: None
  int32_t unit;

  /// @brief Field unitExponent, offset: 0xc, size: 0x4, def value: None
  int32_t unitExponent;

  /// @brief Field logicalMin, offset: 0x10, size: 0x4, def value: None
  int32_t logicalMin;

  /// @brief Field logicalMax, offset: 0x14, size: 0x4, def value: None
  int32_t logicalMax;

  /// @brief Field physicalMin, offset: 0x18, size: 0x4, def value: None
  int32_t physicalMin;

  /// @brief Field physicalMax, offset: 0x1c, size: 0x4, def value: None
  int32_t physicalMax;

  /// @brief Field reportType, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDReportType reportType;

  /// @brief Field collectionIndex, offset: 0x24, size: 0x4, def value: None
  int32_t collectionIndex;

  /// @brief Field reportId, offset: 0x28, size: 0x4, def value: None
  int32_t reportId;

  /// @brief Field reportSizeInBits, offset: 0x2c, size: 0x4, def value: None
  int32_t reportSizeInBits;

  /// @brief Field reportOffsetInBits, offset: 0x30, size: 0x4, def value: None
  int32_t reportOffsetInBits;

  /// @brief Field flags, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDElementFlags flags;

  /// @brief Field usageMin, offset: 0x38, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usageMin;

  /// @brief Field usageMax, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usageMax;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, usage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, usagePage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, unit) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, unitExponent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, logicalMin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, logicalMax) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, physicalMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, physicalMax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, reportType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, collectionIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, reportId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, reportSizeInBits) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, reportOffsetInBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, flags) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, usageMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, usageMax) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, 0x48>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies UnityEngine.InputSystem.HID.HID::HIDCollectionType, UnityEngine.InputSystem.HID.HID::UsagePage
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDCollectionDescriptor
struct CORDL_TYPE HID_HIDCollectionDescriptor {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDCollectionDescriptor();

  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::HID::HID_HIDCollectionType", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::HID_UsagePage", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "childCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstChild", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_HIDCollectionDescriptor(::UnityEngine::InputSystem::HID::HID_HIDCollectionType type, int32_t usage, ::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t parent,
                                        int32_t childCount, int32_t firstChild) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8864 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDCollectionType type;

  /// @brief Field usage, offset: 0x4, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field usagePage, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_UsagePage usagePage;

  /// @brief Field parent, offset: 0xc, size: 0x4, def value: None
  int32_t parent;

  /// @brief Field childCount, offset: 0x10, size: 0x4, def value: None
  int32_t childCount;

  /// @brief Field firstChild, offset: 0x14, size: 0x4, def value: None
  int32_t firstChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, usage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, usagePage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, parent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, childCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, firstChild) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies UnityEngine.InputSystem.HID.HID::HIDReportType, UnityEngine.InputSystem.HID.HID::UsagePage
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/HIDDeviceDescriptorBuilder
struct CORDL_TYPE HID_HIDDeviceDescriptorBuilder {
public:
  // Declarations
  /// @brief Method AddElement, addr 0x6385c68, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder AddElement(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage, int32_t sizeInBits);

  /// @brief Method AddElement, addr 0x638592c, size 0x33c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder AddElement(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t usage, int32_t sizeInBits);

  /// @brief Method Finish, addr 0x6385f90, size 0xb4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor Finish();

  /// @brief Method StartReport, addr 0x6385904, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder StartReport(::UnityEngine::InputSystem::HID::HID_HIDReportType reportType, int32_t reportId);

  /// @brief Method WithLogicalMinMax, addr 0x6385e28, size 0x168, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder WithLogicalMinMax(int32_t min, int32_t max);

  /// @brief Method WithPhysicalMinMax, addr 0x6385cb0, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder WithPhysicalMinMax(int32_t min, int32_t max);

  /// @brief Method .ctor, addr 0x63858e8, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage);

  /// @brief Method .ctor, addr 0x63858d0, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t usage);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_HIDDeviceDescriptorBuilder();

  // Ctor Parameters [CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::HID_UsagePage", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CurrentReportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentReportType", ty:
  // "::UnityEngine::InputSystem::HID::HID_HIDReportType", modifiers: "", def_value: None }, CppParam { name: "m_CurrentReportOffsetInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_Elements", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>*", modifiers: "", def_value: None }, CppParam { name: "m_Collections",
  // ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>*", modifiers: "", def_value: None }, CppParam { name: "m_InputReportSize", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_OutputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FeatureReportSize", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr HID_HIDDeviceDescriptorBuilder(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t usage, int32_t m_CurrentReportId,
                                           ::UnityEngine::InputSystem::HID::HID_HIDReportType m_CurrentReportType, int32_t m_CurrentReportOffsetInBits,
                                           ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* m_Elements,
                                           ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>* m_Collections, int32_t m_InputReportSize,
                                           int32_t m_OutputReportSize, int32_t m_FeatureReportSize) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8866 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field usagePage, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_UsagePage usagePage;

  /// @brief Field usage, offset: 0x4, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field m_CurrentReportId, offset: 0x8, size: 0x4, def value: None
  int32_t m_CurrentReportId;

  /// @brief Field m_CurrentReportType, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDReportType m_CurrentReportType;

  /// @brief Field m_CurrentReportOffsetInBits, offset: 0x10, size: 0x4, def value: None
  int32_t m_CurrentReportOffsetInBits;

  /// @brief Field m_Elements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* m_Elements;

  /// @brief Field m_Collections, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>* m_Collections;

  /// @brief Field m_InputReportSize, offset: 0x28, size: 0x4, def value: None
  int32_t m_InputReportSize;

  /// @brief Field m_OutputReportSize, offset: 0x2c, size: 0x4, def value: None
  int32_t m_OutputReportSize;

  /// @brief Field m_FeatureReportSize, offset: 0x30, size: 0x4, def value: None
  int32_t m_FeatureReportSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, usagePage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, usage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_CurrentReportId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_CurrentReportType) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_CurrentReportOffsetInBits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_Elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_Collections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_InputReportSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_OutputReportSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, m_FeatureReportSize) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, 0x38>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/GenericDesktop
struct CORDL_TYPE HID_GenericDesktop {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HID_GenericDesktop_Unwrapped
  enum struct __HID_GenericDesktop_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Pointer = static_cast<int32_t>(0x1),
    __E_Mouse = static_cast<int32_t>(0x2),
    __E_Joystick = static_cast<int32_t>(0x4),
    __E_Gamepad = static_cast<int32_t>(0x5),
    __E_Keyboard = static_cast<int32_t>(0x6),
    __E_Keypad = static_cast<int32_t>(0x7),
    __E_MultiAxisController = static_cast<int32_t>(0x8),
    __E_TabletPCControls = static_cast<int32_t>(0x9),
    __E_AssistiveControl = static_cast<int32_t>(0xa),
    __E_X = static_cast<int32_t>(0x30),
    __E_Y = static_cast<int32_t>(0x31),
    __E_Z = static_cast<int32_t>(0x32),
    __E_Rx = static_cast<int32_t>(0x33),
    __E_Ry = static_cast<int32_t>(0x34),
    __E_Rz = static_cast<int32_t>(0x35),
    __E_Slider = static_cast<int32_t>(0x36),
    __E_Dial = static_cast<int32_t>(0x37),
    __E_Wheel = static_cast<int32_t>(0x38),
    __E_HatSwitch = static_cast<int32_t>(0x39),
    __E_CountedBuffer = static_cast<int32_t>(0x3a),
    __E_ByteCount = static_cast<int32_t>(0x3b),
    __E_MotionWakeup = static_cast<int32_t>(0x3c),
    __E_Start = static_cast<int32_t>(0x3d),
    __E_Select = static_cast<int32_t>(0x3e),
    __E_Vx = static_cast<int32_t>(0x40),
    __E_Vy = static_cast<int32_t>(0x41),
    __E_Vz = static_cast<int32_t>(0x42),
    __E_Vbrx = static_cast<int32_t>(0x43),
    __E_Vbry = static_cast<int32_t>(0x44),
    __E_Vbrz = static_cast<int32_t>(0x45),
    __E_Vno = static_cast<int32_t>(0x46),
    __E_FeatureNotification = static_cast<int32_t>(0x47),
    __E_ResolutionMultiplier = static_cast<int32_t>(0x48),
    __E_SystemControl = static_cast<int32_t>(0x80),
    __E_SystemPowerDown = static_cast<int32_t>(0x81),
    __E_SystemSleep = static_cast<int32_t>(0x82),
    __E_SystemWakeUp = static_cast<int32_t>(0x83),
    __E_SystemContextMenu = static_cast<int32_t>(0x84),
    __E_SystemMainMenu = static_cast<int32_t>(0x85),
    __E_SystemAppMenu = static_cast<int32_t>(0x86),
    __E_SystemMenuHelp = static_cast<int32_t>(0x87),
    __E_SystemMenuExit = static_cast<int32_t>(0x88),
    __E_SystemMenuSelect = static_cast<int32_t>(0x89),
    __E_SystemMenuRight = static_cast<int32_t>(0x8a),
    __E_SystemMenuLeft = static_cast<int32_t>(0x8b),
    __E_SystemMenuUp = static_cast<int32_t>(0x8c),
    __E_SystemMenuDown = static_cast<int32_t>(0x8d),
    __E_SystemColdRestart = static_cast<int32_t>(0x8e),
    __E_SystemWarmRestart = static_cast<int32_t>(0x8f),
    __E_DpadUp = static_cast<int32_t>(0x90),
    __E_DpadDown = static_cast<int32_t>(0x91),
    __E_DpadRight = static_cast<int32_t>(0x92),
    __E_DpadLeft = static_cast<int32_t>(0x93),
    __E_SystemDock = static_cast<int32_t>(0xa0),
    __E_SystemUndock = static_cast<int32_t>(0xa1),
    __E_SystemSetup = static_cast<int32_t>(0xa2),
    __E_SystemBreak = static_cast<int32_t>(0xa3),
    __E_SystemDebuggerBreak = static_cast<int32_t>(0xa4),
    __E_ApplicationBreak = static_cast<int32_t>(0xa5),
    __E_ApplicationDebuggerBreak = static_cast<int32_t>(0xa6),
    __E_SystemSpeakerMute = static_cast<int32_t>(0xa7),
    __E_SystemHibernate = static_cast<int32_t>(0xa8),
    __E_SystemDisplayInvert = static_cast<int32_t>(0xb0),
    __E_SystemDisplayInternal = static_cast<int32_t>(0xb1),
    __E_SystemDisplayExternal = static_cast<int32_t>(0xb2),
    __E_SystemDisplayBoth = static_cast<int32_t>(0xb3),
    __E_SystemDisplayDual = static_cast<int32_t>(0xb4),
    __E_SystemDisplayToggleIntExt = static_cast<int32_t>(0xb5),
    __E_SystemDisplaySwapPrimarySecondary = static_cast<int32_t>(0xb6),
    __E_SystemDisplayLCDAutoScale = static_cast<int32_t>(0xb7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HID_GenericDesktop_Unwrapped() const noexcept {
    return static_cast<__HID_GenericDesktop_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_GenericDesktop();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_GenericDesktop(int32_t value__) noexcept;

  /// @brief Field ApplicationBreak value: I32(165)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const ApplicationBreak;

  /// @brief Field ApplicationDebuggerBreak value: I32(166)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const ApplicationDebuggerBreak;

  /// @brief Field AssistiveControl value: I32(10)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const AssistiveControl;

  /// @brief Field ByteCount value: I32(59)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const ByteCount;

  /// @brief Field CountedBuffer value: I32(58)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const CountedBuffer;

  /// @brief Field Dial value: I32(55)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Dial;

  /// @brief Field DpadDown value: I32(145)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const DpadDown;

  /// @brief Field DpadLeft value: I32(147)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const DpadLeft;

  /// @brief Field DpadRight value: I32(146)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const DpadRight;

  /// @brief Field DpadUp value: I32(144)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const DpadUp;

  /// @brief Field FeatureNotification value: I32(71)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const FeatureNotification;

  /// @brief Field Gamepad value: I32(5)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Gamepad;

  /// @brief Field HatSwitch value: I32(57)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const HatSwitch;

  /// @brief Field Joystick value: I32(4)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Joystick;

  /// @brief Field Keyboard value: I32(6)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Keyboard;

  /// @brief Field Keypad value: I32(7)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Keypad;

  /// @brief Field MotionWakeup value: I32(60)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const MotionWakeup;

  /// @brief Field Mouse value: I32(2)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Mouse;

  /// @brief Field MultiAxisController value: I32(8)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const MultiAxisController;

  /// @brief Field Pointer value: I32(1)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Pointer;

  /// @brief Field ResolutionMultiplier value: I32(72)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const ResolutionMultiplier;

  /// @brief Field Rx value: I32(51)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Rx;

  /// @brief Field Ry value: I32(52)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Ry;

  /// @brief Field Rz value: I32(53)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Rz;

  /// @brief Field Select value: I32(62)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Select;

  /// @brief Field Slider value: I32(54)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Slider;

  /// @brief Field Start value: I32(61)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Start;

  /// @brief Field SystemAppMenu value: I32(134)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemAppMenu;

  /// @brief Field SystemBreak value: I32(163)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemBreak;

  /// @brief Field SystemColdRestart value: I32(142)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemColdRestart;

  /// @brief Field SystemContextMenu value: I32(132)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemContextMenu;

  /// @brief Field SystemControl value: I32(128)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemControl;

  /// @brief Field SystemDebuggerBreak value: I32(164)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDebuggerBreak;

  /// @brief Field SystemDisplayBoth value: I32(179)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplayBoth;

  /// @brief Field SystemDisplayDual value: I32(180)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplayDual;

  /// @brief Field SystemDisplayExternal value: I32(178)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplayExternal;

  /// @brief Field SystemDisplayInternal value: I32(177)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplayInternal;

  /// @brief Field SystemDisplayInvert value: I32(176)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplayInvert;

  /// @brief Field SystemDisplayLCDAutoScale value: I32(183)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplayLCDAutoScale;

  /// @brief Field SystemDisplaySwapPrimarySecondary value: I32(182)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplaySwapPrimarySecondary;

  /// @brief Field SystemDisplayToggleIntExt value: I32(181)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDisplayToggleIntExt;

  /// @brief Field SystemDock value: I32(160)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemDock;

  /// @brief Field SystemHibernate value: I32(168)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemHibernate;

  /// @brief Field SystemMainMenu value: I32(133)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMainMenu;

  /// @brief Field SystemMenuDown value: I32(141)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMenuDown;

  /// @brief Field SystemMenuExit value: I32(136)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMenuExit;

  /// @brief Field SystemMenuHelp value: I32(135)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMenuHelp;

  /// @brief Field SystemMenuLeft value: I32(139)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMenuLeft;

  /// @brief Field SystemMenuRight value: I32(138)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMenuRight;

  /// @brief Field SystemMenuSelect value: I32(137)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMenuSelect;

  /// @brief Field SystemMenuUp value: I32(140)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemMenuUp;

  /// @brief Field SystemPowerDown value: I32(129)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemPowerDown;

  /// @brief Field SystemSetup value: I32(162)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemSetup;

  /// @brief Field SystemSleep value: I32(130)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemSleep;

  /// @brief Field SystemSpeakerMute value: I32(167)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemSpeakerMute;

  /// @brief Field SystemUndock value: I32(161)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemUndock;

  /// @brief Field SystemWakeUp value: I32(131)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemWakeUp;

  /// @brief Field SystemWarmRestart value: I32(143)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const SystemWarmRestart;

  /// @brief Field TabletPCControls value: I32(9)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const TabletPCControls;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Undefined;

  /// @brief Field Vbrx value: I32(67)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Vbrx;

  /// @brief Field Vbry value: I32(68)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Vbry;

  /// @brief Field Vbrz value: I32(69)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Vbrz;

  /// @brief Field Vno value: I32(70)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Vno;

  /// @brief Field Vx value: I32(64)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Vx;

  /// @brief Field Vy value: I32(65)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Vy;

  /// @brief Field Vz value: I32(66)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Vz;

  /// @brief Field Wheel value: I32(56)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Wheel;

  /// @brief Field X value: I32(48)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const X;

  /// @brief Field Y value: I32(49)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Y;

  /// @brief Field Z value: I32(50)
  static ::UnityEngine::InputSystem::HID::HID_GenericDesktop const Z;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8868 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_GenericDesktop, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_GenericDesktop, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/Simulation
struct CORDL_TYPE HID_Simulation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HID_Simulation_Unwrapped
  enum struct __HID_Simulation_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_FlightSimulationDevice = static_cast<int32_t>(0x1),
    __E_AutomobileSimulationDevice = static_cast<int32_t>(0x2),
    __E_TankSimulationDevice = static_cast<int32_t>(0x3),
    __E_SpaceshipSimulationDevice = static_cast<int32_t>(0x4),
    __E_SubmarineSimulationDevice = static_cast<int32_t>(0x5),
    __E_SailingSimulationDevice = static_cast<int32_t>(0x6),
    __E_MotorcycleSimulationDevice = static_cast<int32_t>(0x7),
    __E_SportsSimulationDevice = static_cast<int32_t>(0x8),
    __E_AirplaneSimulationDevice = static_cast<int32_t>(0x9),
    __E_HelicopterSimulationDevice = static_cast<int32_t>(0xa),
    __E_MagicCarpetSimulationDevice = static_cast<int32_t>(0xb),
    __E_BicylcleSimulationDevice = static_cast<int32_t>(0xc),
    __E_FlightControlStick = static_cast<int32_t>(0x20),
    __E_FlightStick = static_cast<int32_t>(0x21),
    __E_CyclicControl = static_cast<int32_t>(0x22),
    __E_CyclicTrim = static_cast<int32_t>(0x23),
    __E_FlightYoke = static_cast<int32_t>(0x24),
    __E_TrackControl = static_cast<int32_t>(0x25),
    __E_Aileron = static_cast<int32_t>(0xb0),
    __E_AileronTrim = static_cast<int32_t>(0xb1),
    __E_AntiTorqueControl = static_cast<int32_t>(0xb2),
    __E_AutopilotEnable = static_cast<int32_t>(0xb3),
    __E_ChaffRelease = static_cast<int32_t>(0xb4),
    __E_CollectiveControl = static_cast<int32_t>(0xb5),
    __E_DiveBreak = static_cast<int32_t>(0xb6),
    __E_ElectronicCountermeasures = static_cast<int32_t>(0xb7),
    __E_Elevator = static_cast<int32_t>(0xb8),
    __E_ElevatorTrim = static_cast<int32_t>(0xb9),
    __E_Rudder = static_cast<int32_t>(0xba),
    __E_Throttle = static_cast<int32_t>(0xbb),
    __E_FlightCommunications = static_cast<int32_t>(0xbc),
    __E_FlareRelease = static_cast<int32_t>(0xbd),
    __E_LandingGear = static_cast<int32_t>(0xbe),
    __E_ToeBreak = static_cast<int32_t>(0xbf),
    __E_Trigger = static_cast<int32_t>(0xc0),
    __E_WeaponsArm = static_cast<int32_t>(0xc1),
    __E_WeaponsSelect = static_cast<int32_t>(0xc2),
    __E_WingFlaps = static_cast<int32_t>(0xc3),
    __E_Accelerator = static_cast<int32_t>(0xc4),
    __E_Brake = static_cast<int32_t>(0xc5),
    __E_Clutch = static_cast<int32_t>(0xc6),
    __E_Shifter = static_cast<int32_t>(0xc7),
    __E_Steering = static_cast<int32_t>(0xc8),
    __E_TurretDirection = static_cast<int32_t>(0xc9),
    __E_BarrelElevation = static_cast<int32_t>(0xca),
    __E_DivePlane = static_cast<int32_t>(0xcb),
    __E_Ballast = static_cast<int32_t>(0xcc),
    __E_BicycleCrank = static_cast<int32_t>(0xcd),
    __E_HandleBars = static_cast<int32_t>(0xce),
    __E_FrontBrake = static_cast<int32_t>(0xcf),
    __E_RearBrake = static_cast<int32_t>(0xd0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HID_Simulation_Unwrapped() const noexcept {
    return static_cast<__HID_Simulation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_Simulation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_Simulation(int32_t value__) noexcept;

  /// @brief Field Accelerator value: I32(196)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Accelerator;

  /// @brief Field Aileron value: I32(176)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Aileron;

  /// @brief Field AileronTrim value: I32(177)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const AileronTrim;

  /// @brief Field AirplaneSimulationDevice value: I32(9)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const AirplaneSimulationDevice;

  /// @brief Field AntiTorqueControl value: I32(178)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const AntiTorqueControl;

  /// @brief Field AutomobileSimulationDevice value: I32(2)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const AutomobileSimulationDevice;

  /// @brief Field AutopilotEnable value: I32(179)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const AutopilotEnable;

  /// @brief Field Ballast value: I32(204)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Ballast;

  /// @brief Field BarrelElevation value: I32(202)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const BarrelElevation;

  /// @brief Field BicycleCrank value: I32(205)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const BicycleCrank;

  /// @brief Field BicylcleSimulationDevice value: I32(12)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const BicylcleSimulationDevice;

  /// @brief Field Brake value: I32(197)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Brake;

  /// @brief Field ChaffRelease value: I32(180)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const ChaffRelease;

  /// @brief Field Clutch value: I32(198)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Clutch;

  /// @brief Field CollectiveControl value: I32(181)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const CollectiveControl;

  /// @brief Field CyclicControl value: I32(34)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const CyclicControl;

  /// @brief Field CyclicTrim value: I32(35)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const CyclicTrim;

  /// @brief Field DiveBreak value: I32(182)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const DiveBreak;

  /// @brief Field DivePlane value: I32(203)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const DivePlane;

  /// @brief Field ElectronicCountermeasures value: I32(183)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const ElectronicCountermeasures;

  /// @brief Field Elevator value: I32(184)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Elevator;

  /// @brief Field ElevatorTrim value: I32(185)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const ElevatorTrim;

  /// @brief Field FlareRelease value: I32(189)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const FlareRelease;

  /// @brief Field FlightCommunications value: I32(188)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const FlightCommunications;

  /// @brief Field FlightControlStick value: I32(32)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const FlightControlStick;

  /// @brief Field FlightSimulationDevice value: I32(1)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const FlightSimulationDevice;

  /// @brief Field FlightStick value: I32(33)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const FlightStick;

  /// @brief Field FlightYoke value: I32(36)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const FlightYoke;

  /// @brief Field FrontBrake value: I32(207)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const FrontBrake;

  /// @brief Field HandleBars value: I32(206)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const HandleBars;

  /// @brief Field HelicopterSimulationDevice value: I32(10)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const HelicopterSimulationDevice;

  /// @brief Field LandingGear value: I32(190)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const LandingGear;

  /// @brief Field MagicCarpetSimulationDevice value: I32(11)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const MagicCarpetSimulationDevice;

  /// @brief Field MotorcycleSimulationDevice value: I32(7)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const MotorcycleSimulationDevice;

  /// @brief Field RearBrake value: I32(208)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const RearBrake;

  /// @brief Field Rudder value: I32(186)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Rudder;

  /// @brief Field SailingSimulationDevice value: I32(6)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const SailingSimulationDevice;

  /// @brief Field Shifter value: I32(199)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Shifter;

  /// @brief Field SpaceshipSimulationDevice value: I32(4)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const SpaceshipSimulationDevice;

  /// @brief Field SportsSimulationDevice value: I32(8)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const SportsSimulationDevice;

  /// @brief Field Steering value: I32(200)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Steering;

  /// @brief Field SubmarineSimulationDevice value: I32(5)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const SubmarineSimulationDevice;

  /// @brief Field TankSimulationDevice value: I32(3)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const TankSimulationDevice;

  /// @brief Field Throttle value: I32(187)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Throttle;

  /// @brief Field ToeBreak value: I32(191)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const ToeBreak;

  /// @brief Field TrackControl value: I32(37)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const TrackControl;

  /// @brief Field Trigger value: I32(192)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Trigger;

  /// @brief Field TurretDirection value: I32(201)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const TurretDirection;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const Undefined;

  /// @brief Field WeaponsArm value: I32(193)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const WeaponsArm;

  /// @brief Field WeaponsSelect value: I32(194)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const WeaponsSelect;

  /// @brief Field WingFlaps value: I32(195)
  static ::UnityEngine::InputSystem::HID::HID_Simulation const WingFlaps;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8869 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_Simulation, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_Simulation, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/Button
struct CORDL_TYPE HID_Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HID_Button_Unwrapped
  enum struct __HID_Button_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Primary = static_cast<int32_t>(0x1),
    __E_Secondary = static_cast<int32_t>(0x2),
    __E_Tertiary = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HID_Button_Unwrapped() const noexcept {
    return static_cast<__HID_Button_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HID_Button();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HID_Button(int32_t value__) noexcept;

  /// @brief Field Primary value: I32(1)
  static ::UnityEngine::InputSystem::HID::HID_Button const Primary;

  /// @brief Field Secondary value: I32(2)
  static ::UnityEngine::InputSystem::HID::HID_Button const Secondary;

  /// @brief Field Tertiary value: I32(3)
  static ::UnityEngine::InputSystem::HID::HID_Button const Tertiary;

  /// @brief Field Undefined value: I32(0)
  static ::UnityEngine::InputSystem::HID::HID_Button const Undefined;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8870 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID_Button, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID_Button, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies System.Object
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID/<>c__DisplayClass13_0
class CORDL_TYPE HID___c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layout, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_layout, put = __cordl_internal_set_layout)) ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* layout;

  static inline ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0* New_ctor();

  /// @brief Method <OnFindLayoutForDevice>b__0, addr 0x6386048, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* _OnFindLayoutForDevice_b__0();

  constexpr ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* const& __cordl_internal_get_layout() const;

  constexpr ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*& __cordl_internal_get_layout();

  constexpr void __cordl_internal_set_layout(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* value);

  /// @brief Method .ctor, addr 0x6386044, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HID___c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HID___c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HID___c__DisplayClass13_0(HID___c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HID___c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HID___c__DisplayClass13_0(HID___c__DisplayClass13_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8871 };

  /// @brief Field layout, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder* ___layout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0, ___layout) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.HID.HID::HIDDeviceDescriptor, UnityEngine.InputSystem.InputDevice
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HID
class CORDL_TYPE HID : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  using Button = ::UnityEngine::InputSystem::HID::HID_Button;

  using GenericDesktop = ::UnityEngine::InputSystem::HID::HID_GenericDesktop;

  using HIDCollectionDescriptor = ::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor;

  using HIDCollectionType = ::UnityEngine::InputSystem::HID::HID_HIDCollectionType;

  using HIDDeviceDescriptor = ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor;

  using HIDDeviceDescriptorBuilder = ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder;

  using HIDElementDescriptor = ::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor;

  using HIDElementFlags = ::UnityEngine::InputSystem::HID::HID_HIDElementFlags;

  using HIDLayoutBuilder = ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder;

  using HIDReportType = ::UnityEngine::InputSystem::HID::HID_HIDReportType;

  using Simulation = ::UnityEngine::InputSystem::HID::HID_Simulation;

  using UsagePage = ::UnityEngine::InputSystem::HID::HID_UsagePage;

  using __c__DisplayClass13_0 = ::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0;

  __declspec(property(get = get_hidDescriptor)) ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor hidDescriptor;

  /// @brief Field k_HIDParseDescriptorFallback, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_HIDParseDescriptorFallback, put = setStaticF_k_HIDParseDescriptorFallback)) ::Unity::Profiling::ProfilerMarker k_HIDParseDescriptorFallback;

  /// @brief Field m_HIDDescriptor, offset 0x190, size 0x30
  __declspec(property(get = __cordl_internal_get_m_HIDDescriptor, put = __cordl_internal_set_m_HIDDescriptor)) ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor m_HIDDescriptor;

  /// @brief Field m_HaveParsedHIDDescriptor, offset 0x188, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HaveParsedHIDDescriptor, put = __cordl_internal_set_m_HaveParsedHIDDescriptor)) bool m_HaveParsedHIDDescriptor;

  static inline ::UnityEngine::InputSystem::HID::HID* New_ctor();

  /// @brief Method OnFindLayoutForDevice, addr 0x63815a0, size 0x8c0, virtual false, abstract: false, final false
  static inline ::StringW OnFindLayoutForDevice(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand);

  /// @brief Method ReadHIDDeviceDescriptor, addr 0x6381e60, size 0x718, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor ReadHIDDeviceDescriptor(::ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription,
                                                                                                 ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate);

  /// @brief Method UsagePageToString, addr 0x63835d4, size 0x94, virtual false, abstract: false, final false
  static inline ::StringW UsagePageToString(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage);

  /// @brief Method UsageToString, addr 0x6383668, size 0xac, virtual false, abstract: false, final false
  static inline ::StringW UsageToString(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, int32_t usage);

  constexpr ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor const& __cordl_internal_get_m_HIDDescriptor() const;

  constexpr ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor& __cordl_internal_get_m_HIDDescriptor();

  constexpr bool const& __cordl_internal_get_m_HaveParsedHIDDescriptor() const;

  constexpr bool& __cordl_internal_get_m_HaveParsedHIDDescriptor();

  constexpr void __cordl_internal_set_m_HIDDescriptor(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor value);

  constexpr void __cordl_internal_set_m_HaveParsedHIDDescriptor(bool value);

  /// @brief Method .ctor, addr 0x6383714, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_HIDParseDescriptorFallback();

  /// @brief Method get_QueryHIDParsedReportDescriptorDeviceCommandType, addr 0x63814f0, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDParsedReportDescriptorDeviceCommandType();

  /// @brief Method get_QueryHIDReportDescriptorDeviceCommandType, addr 0x63814d8, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorDeviceCommandType();

  /// @brief Method get_QueryHIDReportDescriptorSizeDeviceCommandType, addr 0x63814e4, size 0xc, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorSizeDeviceCommandType();

  /// @brief Method get_hidDescriptor, addr 0x63814fc, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor get_hidDescriptor();

  static inline void setStaticF_k_HIDParseDescriptorFallback(::Unity::Profiling::ProfilerMarker value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HID();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HID(HID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HID(HID const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8872 };

  /// @brief Field kHIDInterface offset 0xffffffff size 0x8
  static constexpr ::ConstString kHIDInterface{ u"HID" };

  /// @brief Field kHIDNamespace offset 0xffffffff size 0x8
  static constexpr ::ConstString kHIDNamespace{ u"HID" };

  /// @brief Field m_HaveParsedHIDDescriptor, offset: 0x188, size: 0x1, def value: None
  bool ___m_HaveParsedHIDDescriptor;

  /// @brief Field m_HIDDescriptor, offset: 0x190, size: 0x30, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor ___m_HIDDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HID, ___m_HaveParsedHIDDescriptor) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID, ___m_HIDDescriptor) == 0x190, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID, 0x1c0>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_Button, "UnityEngine.InputSystem.HID", "HID/Button");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_GenericDesktop, "UnityEngine.InputSystem.HID", "HID/GenericDesktop");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDCollectionType, "UnityEngine.InputSystem.HID", "HID/HIDCollectionType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDElementFlags, "UnityEngine.InputSystem.HID", "HID/HIDElementFlags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDReportType, "UnityEngine.InputSystem.HID", "HID/HIDReportType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_Simulation, "UnityEngine.InputSystem.HID", "HID/Simulation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_UsagePage, "UnityEngine.InputSystem.HID", "HID/UsagePage");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HID);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID*, "UnityEngine.InputSystem.HID", "HID");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDLayoutBuilder_HID___c*, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder*, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID___c__DisplayClass13_0*, "UnityEngine.InputSystem.HID", "HID/<>c__DisplayClass13_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDCollectionDescriptor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptorBuilder, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptorBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDElementDescriptor");
