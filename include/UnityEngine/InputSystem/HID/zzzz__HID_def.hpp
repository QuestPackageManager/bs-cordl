#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID)
namespace GlobalNamespace {
class __HID__HIDLayoutBuilder____c;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__Button;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__GenericDesktop;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDCollectionDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDCollectionType;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDDeviceDescriptorBuilder;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDElementDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDElementFlags;
}
namespace UnityEngine::InputSystem::HID {
class __HID__HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__Simulation;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__UsagePage;
}
namespace UnityEngine::InputSystem::HID {
class __HID____c__DisplayClass12_0;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem::Layouts {
class __InputControlLayout__Builder;
}
namespace UnityEngine::InputSystem::Layouts {
struct __InputControlLayout__ControlItem;
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
struct __HID__Button;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__GenericDesktop;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDCollectionType;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDElementFlags;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__Simulation;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__UsagePage;
}
namespace GlobalNamespace {
class __HID__HIDLayoutBuilder____c;
}
namespace UnityEngine::InputSystem::HID {
class HID;
}
namespace UnityEngine::InputSystem::HID {
class __HID__HIDLayoutBuilder;
}
namespace UnityEngine::InputSystem::HID {
class __HID____c__DisplayClass12_0;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDCollectionDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDDeviceDescriptorBuilder;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDElementDescriptor;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__Button);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__GenericDesktop);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__HIDCollectionType);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__HIDElementFlags);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__HIDReportType);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__Simulation);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__UsagePage);
MARK_REF_PTR_T(::GlobalNamespace::__HID__HIDLayoutBuilder____c);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HID);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::__HID____c__DisplayClass12_0);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6391))
// CS Name: ::HID::HIDLayoutBuilder::<>c*
class CORDL_TYPE __HID__HIDLayoutBuilder____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__HID__HIDLayoutBuilder____c* __9;

  /// @brief Field <>9__4_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_0, put = setStaticF___9__4_0))::System::Predicate_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* __9__4_0;

  /// @brief Field <>9__4_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_1, put = setStaticF___9__4_1))::System::Predicate_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* __9__4_1;

  /// @brief Field <>9__4_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__4_2, put = setStaticF___9__4_2))::System::Func_2<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::StringW>* __9__4_2;

  static inline void setStaticF___9(::GlobalNamespace::__HID__HIDLayoutBuilder____c* value);

  static inline ::GlobalNamespace::__HID__HIDLayoutBuilder____c* getStaticF___9();

  static inline void setStaticF___9__4_0(::System::Predicate_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* value);

  static inline ::System::Predicate_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* getStaticF___9__4_0();

  static inline void setStaticF___9__4_1(::System::Predicate_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* value);

  static inline ::System::Predicate_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* getStaticF___9__4_1();

  static inline void setStaticF___9__4_2(::System::Func_2<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem, ::StringW>* getStaticF___9__4_2();

  static inline ::GlobalNamespace::__HID__HIDLayoutBuilder____c* New_ctor();

  /// @brief Method .ctor, addr 0x2adeab4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Build>b__4_0, addr 0x2adeabc, size 0x24, virtual false, abstract: false, final false
  inline bool _Build_b__4_0(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor element);

  /// @brief Method <Build>b__4_1, addr 0x2adeae0, size 0x24, virtual false, abstract: false, final false
  inline bool _Build_b__4_1(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor element);

  /// @brief Method <Build>b__4_2, addr 0x2adeb04, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _Build_b__4_2(::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem x);

  // Ctor Parameters [CppParam { name: "", ty: "__HID__HIDLayoutBuilder____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HID__HIDLayoutBuilder____c(__HID__HIDLayoutBuilder____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HID__HIDLayoutBuilder____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HID__HIDLayoutBuilder____c(__HID__HIDLayoutBuilder____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDLayoutBuilder____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__HID__HIDLayoutBuilder____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::UsagePage
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6400))
// CS Name: ::HID::UsagePage
struct CORDL_TYPE __HID__UsagePage {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HID__UsagePage_Unwrapped
  enum struct ____HID__UsagePage_Unwrapped : int32_t {
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
  constexpr operator ____HID__UsagePage_Unwrapped() const noexcept {
    return static_cast<____HID__UsagePage_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__UsagePage(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__UsagePage();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Undefined;

  /// @brief Field GenericDesktop value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const GenericDesktop;

  /// @brief Field Simulation value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Simulation;

  /// @brief Field VRControls value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const VRControls;

  /// @brief Field SportControls value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const SportControls;

  /// @brief Field GameControls value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const GameControls;

  /// @brief Field GenericDeviceControls value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const GenericDeviceControls;

  /// @brief Field Keyboard value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Keyboard;

  /// @brief Field LEDs value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const LEDs;

  /// @brief Field Button value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Button;

  /// @brief Field Ordinal value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Ordinal;

  /// @brief Field Telephony value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Telephony;

  /// @brief Field Consumer value: static_cast<int32_t>(0xc)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Consumer;

  /// @brief Field Digitizer value: static_cast<int32_t>(0xd)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Digitizer;

  /// @brief Field PID value: static_cast<int32_t>(0xf)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const PID;

  /// @brief Field Unicode value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Unicode;

  /// @brief Field AlphanumericDisplay value: static_cast<int32_t>(0x14)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const AlphanumericDisplay;

  /// @brief Field MedicalInstruments value: static_cast<int32_t>(0x40)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const MedicalInstruments;

  /// @brief Field Monitor value: static_cast<int32_t>(0x80)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Monitor;

  /// @brief Field Power value: static_cast<int32_t>(0x84)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Power;

  /// @brief Field BarCodeScanner value: static_cast<int32_t>(0x8c)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const BarCodeScanner;

  /// @brief Field MagneticStripeReader value: static_cast<int32_t>(0x8e)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const MagneticStripeReader;

  /// @brief Field Camera value: static_cast<int32_t>(0x90)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Camera;

  /// @brief Field Arcade value: static_cast<int32_t>(0x91)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const Arcade;

  /// @brief Field VendorDefined value: static_cast<int32_t>(0xff00)
  static ::UnityEngine::InputSystem::HID::__HID__UsagePage const VendorDefined;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__UsagePage, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__UsagePage, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDDeviceDescriptor
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6400))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6398))
// CS Name: ::HID::HIDDeviceDescriptor
struct CORDL_TYPE __HID__HIDDeviceDescriptor {
public:
  // Declarations
  /// @brief Method ToJson, addr 0x2adcc40, size 0x70, virtual false, abstract: false, final false
  inline ::StringW ToJson();

  /// @brief Method FromJson, addr 0x2adb0d4, size 0xf28, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor FromJson(::StringW json);

  // Ctor Parameters [CppParam { name: "vendorId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "productId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name:
  // "inputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "outputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "featureReportSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "elements", ty:
  // "::ArrayW<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor,::Array<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>*>", modifiers: "", def_value: None }, CppParam { name:
  // "collections", ty: "::ArrayW<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor,::Array<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor>*>", modifiers: "", def_value:
  // None }]
  constexpr __HID__HIDDeviceDescriptor(
      int32_t vendorId, int32_t productId, int32_t usage, ::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t inputReportSize, int32_t outputReportSize, int32_t featureReportSize,
      ::ArrayW<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, ::Array<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>*> elements,
      ::ArrayW<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, ::Array<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor>*> collections) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDDeviceDescriptor();

  /// @brief Field vendorId, offset: 0x0, size: 0x4, def value: None
  int32_t vendorId;

  /// @brief Field productId, offset: 0x4, size: 0x4, def value: None
  int32_t productId;

  /// @brief Field usage, offset: 0x8, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field usagePage, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage;

  /// @brief Field inputReportSize, offset: 0x10, size: 0x4, def value: None
  int32_t inputReportSize;

  /// @brief Field outputReportSize, offset: 0x14, size: 0x4, def value: None
  int32_t outputReportSize;

  /// @brief Field featureReportSize, offset: 0x18, size: 0x4, def value: None
  int32_t featureReportSize;

  /// @brief Field elements, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, ::Array<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>*> elements;

  /// @brief Field collections, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, ::Array<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor>*> collections;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, vendorId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, productId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, usage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, usagePage) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, inputReportSize) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, outputReportSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, featureReportSize) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, elements) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, collections) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDLayoutBuilder
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(6398))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6392))
// CS Name: ::HID::HIDLayoutBuilder*
class CORDL_TYPE __HID__HIDLayoutBuilder : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__HID__HIDLayoutBuilder____c;

  /// @brief Field displayName, offset 0x10, size 0x8
  __declspec(property(get = __get_displayName, put = __set_displayName))::StringW displayName;

  /// @brief Field hidDescriptor, offset 0x18, size 0x30
  __declspec(property(get = __get_hidDescriptor, put = __set_hidDescriptor))::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor hidDescriptor;

  /// @brief Field parentLayout, offset 0x48, size 0x8
  __declspec(property(get = __get_parentLayout, put = __set_parentLayout))::StringW parentLayout;

  /// @brief Field deviceType, offset 0x50, size 0x8
  __declspec(property(get = __get_deviceType, put = __set_deviceType))::System::Type* deviceType;

  constexpr ::StringW& __get_displayName();

  constexpr ::StringW const& __get_displayName() const;

  constexpr void __set_displayName(::StringW value);

  constexpr ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor& __get_hidDescriptor();

  constexpr ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor const& __get_hidDescriptor() const;

  constexpr void __set_hidDescriptor(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor value);

  constexpr ::StringW& __get_parentLayout();

  constexpr ::StringW const& __get_parentLayout() const;

  constexpr void __set_parentLayout(::StringW value);

  constexpr ::System::Type*& __get_deviceType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_deviceType() const;

  constexpr void __set_deviceType(::System::Type* value);

  /// @brief Method Build, addr 0x2adcde0, size 0xcac, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* Build();

  static inline ::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder* New_ctor();

  /// @brief Method .ctor, addr 0x2adb0cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__HID__HIDLayoutBuilder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HID__HIDLayoutBuilder(__HID__HIDLayoutBuilder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HID__HIDLayoutBuilder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HID__HIDLayoutBuilder(__HID__HIDLayoutBuilder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDLayoutBuilder();

public:
  /// @brief Field displayName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___displayName;

  /// @brief Field hidDescriptor, offset: 0x18, size: 0x30, def value: None
  ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor ___hidDescriptor;

  /// @brief Field parentLayout, offset: 0x48, size: 0x8, def value: None
  ::StringW ___parentLayout;

  /// @brief Field deviceType, offset: 0x50, size: 0x8, def value: None
  ::System::Type* ___deviceType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder, 0x58>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder, ___displayName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder, ___hidDescriptor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder, ___parentLayout) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder, ___deviceType) == 0x50, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDReportType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6393))
// CS Name: ::HID::HIDReportType
struct CORDL_TYPE __HID__HIDReportType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HID__HIDReportType_Unwrapped
  enum struct ____HID__HIDReportType_Unwrapped : int32_t {
    __E_Unknown = static_cast<int32_t>(0x0),
    __E_Input = static_cast<int32_t>(0x1),
    __E_Output = static_cast<int32_t>(0x2),
    __E_Feature = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HID__HIDReportType_Unwrapped() const noexcept {
    return static_cast<____HID__HIDReportType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__HIDReportType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDReportType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Unknown value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::HID::__HID__HIDReportType const Unknown;

  /// @brief Field Input value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::HID::__HID__HIDReportType const Input;

  /// @brief Field Output value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::HID::__HID__HIDReportType const Output;

  /// @brief Field Feature value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::HID::__HID__HIDReportType const Feature;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDReportType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDReportType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDCollectionType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6394))
// CS Name: ::HID::HIDCollectionType
struct CORDL_TYPE __HID__HIDCollectionType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HID__HIDCollectionType_Unwrapped
  enum struct ____HID__HIDCollectionType_Unwrapped : int32_t {
    __E_Physical = static_cast<int32_t>(0x0),
    __E_Application = static_cast<int32_t>(0x1),
    __E_Logical = static_cast<int32_t>(0x2),
    __E_Report = static_cast<int32_t>(0x3),
    __E_NamedArray = static_cast<int32_t>(0x4),
    __E_UsageSwitch = static_cast<int32_t>(0x5),
    __E_UsageModifier = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HID__HIDCollectionType_Unwrapped() const noexcept {
    return static_cast<____HID__HIDCollectionType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__HIDCollectionType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDCollectionType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Physical value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType const Physical;

  /// @brief Field Application value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType const Application;

  /// @brief Field Logical value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType const Logical;

  /// @brief Field Report value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType const Report;

  /// @brief Field NamedArray value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType const NamedArray;

  /// @brief Field UsageSwitch value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType const UsageSwitch;

  /// @brief Field UsageModifier value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType const UsageModifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDCollectionType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDCollectionType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDElementFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6395))
// CS Name: ::HID::HIDElementFlags
struct CORDL_TYPE __HID__HIDElementFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HID__HIDElementFlags_Unwrapped
  enum struct ____HID__HIDElementFlags_Unwrapped : int32_t {
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
  constexpr operator ____HID__HIDElementFlags_Unwrapped() const noexcept {
    return static_cast<____HID__HIDElementFlags_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__HIDElementFlags(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDElementFlags();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Constant value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const Constant;

  /// @brief Field Variable value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const Variable;

  /// @brief Field Relative value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const Relative;

  /// @brief Field Wrap value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const Wrap;

  /// @brief Field NonLinear value: static_cast<int32_t>(0x10)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const NonLinear;

  /// @brief Field NoPreferred value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const NoPreferred;

  /// @brief Field NullState value: static_cast<int32_t>(0x40)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const NullState;

  /// @brief Field Volatile value: static_cast<int32_t>(0x80)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const Volatile;

  /// @brief Field BufferedBytes value: static_cast<int32_t>(0x100)
  static ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags const BufferedBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDElementFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementFlags, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDElementDescriptor
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6393)), TypeDefinitionIndex(TypeDefinitionIndex(6400)), TypeDefinitionIndex(TypeDefinitionIndex(6395)),
// GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 }), TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6396)) CS
// Name: ::HID::HIDElementDescriptor
struct CORDL_TYPE __HID__HIDElementDescriptor {
public:
  // Declarations
  __declspec(property(get = get_hasNullState)) bool hasNullState;

  __declspec(property(get = get_hasPreferredState)) bool hasPreferredState;

  __declspec(property(get = get_isArray)) bool isArray;

  __declspec(property(get = get_isNonLinear)) bool isNonLinear;

  __declspec(property(get = get_isRelative)) bool isRelative;

  __declspec(property(get = get_isConstant)) bool isConstant;

  __declspec(property(get = get_isWrapping)) bool isWrapping;

  __declspec(property(get = get_isSigned)) bool isSigned;

  __declspec(property(get = get_minFloatValue)) float_t minFloatValue;

  __declspec(property(get = get_maxFloatValue)) float_t maxFloatValue;

  /// @brief Method get_hasNullState, addr 0x2adeb10, size 0xc, virtual false, abstract: false, final false
  inline bool get_hasNullState();

  /// @brief Method get_hasPreferredState, addr 0x2adeb1c, size 0x10, virtual false, abstract: false, final false
  inline bool get_hasPreferredState();

  /// @brief Method get_isArray, addr 0x2adeb2c, size 0x10, virtual false, abstract: false, final false
  inline bool get_isArray();

  /// @brief Method get_isNonLinear, addr 0x2adeb3c, size 0xc, virtual false, abstract: false, final false
  inline bool get_isNonLinear();

  /// @brief Method get_isRelative, addr 0x2adeb48, size 0xc, virtual false, abstract: false, final false
  inline bool get_isRelative();

  /// @brief Method get_isConstant, addr 0x2adeb54, size 0xc, virtual false, abstract: false, final false
  inline bool get_isConstant();

  /// @brief Method get_isWrapping, addr 0x2adeb60, size 0xc, virtual false, abstract: false, final false
  inline bool get_isWrapping();

  /// @brief Method get_isSigned, addr 0x2addbfc, size 0xc, virtual false, abstract: false, final false
  inline bool get_isSigned();

  /// @brief Method get_minFloatValue, addr 0x2adeb6c, size 0x9c, virtual false, abstract: false, final false
  inline float_t get_minFloatValue();

  /// @brief Method get_maxFloatValue, addr 0x2adec08, size 0xa4, virtual false, abstract: false, final false
  inline float_t get_maxFloatValue();

  /// @brief Method Is, addr 0x2addd40, size 0x24, virtual false, abstract: false, final false
  inline bool Is(::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t usage);

  /// @brief Method DetermineName, addr 0x2adde50, size 0x210, virtual false, abstract: false, final false
  inline ::StringW DetermineName();

  /// @brief Method DetermineDisplayName, addr 0x2ade060, size 0xfc, virtual false, abstract: false, final false
  inline ::StringW DetermineDisplayName();

  /// @brief Method IsUsableElement, addr 0x2adb094, size 0x38, virtual false, abstract: false, final false
  inline bool IsUsableElement();

  /// @brief Method DetermineLayout, addr 0x2addd64, size 0xec, virtual false, abstract: false, final false
  inline ::StringW DetermineLayout();

  /// @brief Method DetermineFormat, addr 0x2ade15c, size 0x108, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::FourCC DetermineFormat();

  /// @brief Method DetermineUsages, addr 0x2ade264, size 0x190, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::InputSystem::Utilities::InternedString, ::Array<::UnityEngine::InputSystem::Utilities::InternedString>*> DetermineUsages();

  /// @brief Method DetermineParameters, addr 0x2adda8c, size 0x170, virtual false, abstract: false, final false
  inline ::StringW DetermineParameters();

  /// @brief Method DetermineAxisNormalizationParameters, addr 0x2adecac, size 0x1c8, virtual false, abstract: false, final false
  inline ::StringW DetermineAxisNormalizationParameters();

  /// @brief Method DetermineProcessors, addr 0x2addcd0, size 0x70, virtual false, abstract: false, final false
  inline ::StringW DetermineProcessors();

  /// @brief Method DetermineDefaultState, addr 0x2addc08, size 0xc8, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue DetermineDefaultState();

  /// @brief Method AddChildControls, addr 0x2ade3f4, size 0x65c, virtual false, abstract: false, final false
  inline void AddChildControls(ByRef<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor> element, ::StringW controlName,
                               ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__Builder*> builder);

  // Ctor Parameters [CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::__HID__UsagePage", modifiers: "",
  // def_value: None }, CppParam { name: "unit", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitExponent", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "logicalMin", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "logicalMax", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "physicalMin", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "physicalMax", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportType", ty:
  // "::UnityEngine::InputSystem::HID::__HID__HIDReportType", modifiers: "", def_value: None }, CppParam { name: "collectionIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "reportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportSizeInBits", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportOffsetInBits", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::HID::__HID__HIDElementFlags", modifiers: "", def_value: None }, CppParam { name:
  // "usageMin", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageMax", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
  constexpr __HID__HIDElementDescriptor(int32_t usage, ::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t unit, int32_t unitExponent, int32_t logicalMin, int32_t logicalMax,
                                        int32_t physicalMin, int32_t physicalMax, ::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType, int32_t collectionIndex, int32_t reportId,
                                        int32_t reportSizeInBits, int32_t reportOffsetInBits, ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags flags, ::System::Nullable_1<int32_t> usageMin,
                                        ::System::Nullable_1<int32_t> usageMax) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDElementDescriptor();

  /// @brief Field usage, offset: 0x0, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field usagePage, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage;

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
  ::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType;

  /// @brief Field collectionIndex, offset: 0x24, size: 0x4, def value: None
  int32_t collectionIndex;

  /// @brief Field reportId, offset: 0x28, size: 0x4, def value: None
  int32_t reportId;

  /// @brief Field reportSizeInBits, offset: 0x2c, size: 0x4, def value: None
  int32_t reportSizeInBits;

  /// @brief Field reportOffsetInBits, offset: 0x30, size: 0x4, def value: None
  int32_t reportOffsetInBits;

  /// @brief Field flags, offset: 0x34, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags flags;

  /// @brief Field usageMin, offset: 0x38, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usageMin;

  /// @brief Field usageMax, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usageMax;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, 0x48>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, usage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, usagePage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, unit) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, unitExponent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, logicalMin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, logicalMax) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, physicalMin) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, physicalMax) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, reportType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, collectionIndex) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, reportId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, reportSizeInBits) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, reportOffsetInBits) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, flags) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, usageMin) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, usageMax) == 0x40, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDCollectionDescriptor
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6400)), TypeDefinitionIndex(TypeDefinitionIndex(6394))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6397))
// CS Name: ::HID::HIDCollectionDescriptor
struct CORDL_TYPE __HID__HIDCollectionDescriptor {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::HID::__HID__HIDCollectionType", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "childCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstChild", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__HIDCollectionDescriptor(::UnityEngine::InputSystem::HID::__HID__HIDCollectionType type, int32_t usage, ::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t parent,
                                           int32_t childCount, int32_t firstChild) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDCollectionDescriptor();

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType type;

  /// @brief Field usage, offset: 0x4, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field usagePage, offset: 0x8, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage;

  /// @brief Field parent, offset: 0xc, size: 0x4, def value: None
  int32_t parent;

  /// @brief Field childCount, offset: 0x10, size: 0x4, def value: None
  int32_t childCount;

  /// @brief Field firstChild, offset: 0x14, size: 0x4, def value: None
  int32_t firstChild;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, usage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, usagePage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, parent) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, childCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, firstChild) == 0x14, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDDeviceDescriptorBuilder
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6400)), TypeDefinitionIndex(TypeDefinitionIndex(6393))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6399))
// CS Name: ::HID::HIDDeviceDescriptorBuilder
struct CORDL_TYPE __HID__HIDDeviceDescriptorBuilder {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x2adee74, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t usage);

  /// @brief Method .ctor, addr 0x2adee8c, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::InputSystem::HID::__HID__GenericDesktop usage);

  /// @brief Method StartReport, addr 0x2adeea8, size 0x28, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder StartReport(::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType, int32_t reportId);

  /// @brief Method AddElement, addr 0x2adeed0, size 0x3d4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder AddElement(::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t usage, int32_t sizeInBits);

  /// @brief Method AddElement, addr 0x2adf2a4, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder AddElement(::UnityEngine::InputSystem::HID::__HID__GenericDesktop usage, int32_t sizeInBits);

  /// @brief Method WithPhysicalMinMax, addr 0x2adf2ec, size 0x194, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder WithPhysicalMinMax(int32_t min, int32_t max);

  /// @brief Method WithLogicalMinMax, addr 0x2adf480, size 0x178, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder WithLogicalMinMax(int32_t min, int32_t max);

  /// @brief Method Finish, addr 0x2adf5f8, size 0xb0, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor Finish();

  // Ctor Parameters [CppParam { name: "usagePage", ty: "::UnityEngine::InputSystem::HID::__HID__UsagePage", modifiers: "", def_value: None }, CppParam { name: "usage", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_CurrentReportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_CurrentReportType", ty:
  // "::UnityEngine::InputSystem::HID::__HID__HIDReportType", modifiers: "", def_value: None }, CppParam { name: "m_CurrentReportOffsetInBits", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "m_Elements", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_Collections", ty: "::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor>*", modifiers: "", def_value: None }, CppParam { name:
  // "m_InputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_OutputReportSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_FeatureReportSize", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__HIDDeviceDescriptorBuilder(::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t usage, int32_t m_CurrentReportId,
                                              ::UnityEngine::InputSystem::HID::__HID__HIDReportType m_CurrentReportType, int32_t m_CurrentReportOffsetInBits,
                                              ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* m_Elements,
                                              ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor>* m_Collections, int32_t m_InputReportSize,
                                              int32_t m_OutputReportSize, int32_t m_FeatureReportSize) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__HIDDeviceDescriptorBuilder();

  /// @brief Field usagePage, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage;

  /// @brief Field usage, offset: 0x4, size: 0x4, def value: None
  int32_t usage;

  /// @brief Field m_CurrentReportId, offset: 0x8, size: 0x4, def value: None
  int32_t m_CurrentReportId;

  /// @brief Field m_CurrentReportType, offset: 0xc, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__HIDReportType m_CurrentReportType;

  /// @brief Field m_CurrentReportOffsetInBits, offset: 0x10, size: 0x4, def value: None
  int32_t m_CurrentReportOffsetInBits;

  /// @brief Field m_Elements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor>* m_Elements;

  /// @brief Field m_Collections, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor>* m_Collections;

  /// @brief Field m_InputReportSize, offset: 0x28, size: 0x4, def value: None
  int32_t m_InputReportSize;

  /// @brief Field m_OutputReportSize, offset: 0x2c, size: 0x4, def value: None
  int32_t m_OutputReportSize;

  /// @brief Field m_FeatureReportSize, offset: 0x30, size: 0x4, def value: None
  int32_t m_FeatureReportSize;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, usagePage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, usage) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_CurrentReportId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_CurrentReportType) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_CurrentReportOffsetInBits) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_Elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_Collections) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_InputReportSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_OutputReportSize) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, m_FeatureReportSize) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::GenericDesktop
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6401))
// CS Name: ::HID::GenericDesktop
struct CORDL_TYPE __HID__GenericDesktop {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HID__GenericDesktop_Unwrapped
  enum struct ____HID__GenericDesktop_Unwrapped : int32_t {
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
  constexpr operator ____HID__GenericDesktop_Unwrapped() const noexcept {
    return static_cast<____HID__GenericDesktop_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__GenericDesktop(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__GenericDesktop();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Undefined;

  /// @brief Field Pointer value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Pointer;

  /// @brief Field Mouse value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Mouse;

  /// @brief Field Joystick value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Joystick;

  /// @brief Field Gamepad value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Gamepad;

  /// @brief Field Keyboard value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Keyboard;

  /// @brief Field Keypad value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Keypad;

  /// @brief Field MultiAxisController value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const MultiAxisController;

  /// @brief Field TabletPCControls value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const TabletPCControls;

  /// @brief Field AssistiveControl value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const AssistiveControl;

  /// @brief Field X value: static_cast<int32_t>(0x30)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const X;

  /// @brief Field Y value: static_cast<int32_t>(0x31)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Y;

  /// @brief Field Z value: static_cast<int32_t>(0x32)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Z;

  /// @brief Field Rx value: static_cast<int32_t>(0x33)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Rx;

  /// @brief Field Ry value: static_cast<int32_t>(0x34)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Ry;

  /// @brief Field Rz value: static_cast<int32_t>(0x35)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Rz;

  /// @brief Field Slider value: static_cast<int32_t>(0x36)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Slider;

  /// @brief Field Dial value: static_cast<int32_t>(0x37)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Dial;

  /// @brief Field Wheel value: static_cast<int32_t>(0x38)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Wheel;

  /// @brief Field HatSwitch value: static_cast<int32_t>(0x39)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const HatSwitch;

  /// @brief Field CountedBuffer value: static_cast<int32_t>(0x3a)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const CountedBuffer;

  /// @brief Field ByteCount value: static_cast<int32_t>(0x3b)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const ByteCount;

  /// @brief Field MotionWakeup value: static_cast<int32_t>(0x3c)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const MotionWakeup;

  /// @brief Field Start value: static_cast<int32_t>(0x3d)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Start;

  /// @brief Field Select value: static_cast<int32_t>(0x3e)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Select;

  /// @brief Field Vx value: static_cast<int32_t>(0x40)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Vx;

  /// @brief Field Vy value: static_cast<int32_t>(0x41)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Vy;

  /// @brief Field Vz value: static_cast<int32_t>(0x42)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Vz;

  /// @brief Field Vbrx value: static_cast<int32_t>(0x43)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Vbrx;

  /// @brief Field Vbry value: static_cast<int32_t>(0x44)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Vbry;

  /// @brief Field Vbrz value: static_cast<int32_t>(0x45)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Vbrz;

  /// @brief Field Vno value: static_cast<int32_t>(0x46)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const Vno;

  /// @brief Field FeatureNotification value: static_cast<int32_t>(0x47)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const FeatureNotification;

  /// @brief Field ResolutionMultiplier value: static_cast<int32_t>(0x48)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const ResolutionMultiplier;

  /// @brief Field SystemControl value: static_cast<int32_t>(0x80)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemControl;

  /// @brief Field SystemPowerDown value: static_cast<int32_t>(0x81)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemPowerDown;

  /// @brief Field SystemSleep value: static_cast<int32_t>(0x82)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemSleep;

  /// @brief Field SystemWakeUp value: static_cast<int32_t>(0x83)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemWakeUp;

  /// @brief Field SystemContextMenu value: static_cast<int32_t>(0x84)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemContextMenu;

  /// @brief Field SystemMainMenu value: static_cast<int32_t>(0x85)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMainMenu;

  /// @brief Field SystemAppMenu value: static_cast<int32_t>(0x86)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemAppMenu;

  /// @brief Field SystemMenuHelp value: static_cast<int32_t>(0x87)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMenuHelp;

  /// @brief Field SystemMenuExit value: static_cast<int32_t>(0x88)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMenuExit;

  /// @brief Field SystemMenuSelect value: static_cast<int32_t>(0x89)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMenuSelect;

  /// @brief Field SystemMenuRight value: static_cast<int32_t>(0x8a)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMenuRight;

  /// @brief Field SystemMenuLeft value: static_cast<int32_t>(0x8b)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMenuLeft;

  /// @brief Field SystemMenuUp value: static_cast<int32_t>(0x8c)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMenuUp;

  /// @brief Field SystemMenuDown value: static_cast<int32_t>(0x8d)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemMenuDown;

  /// @brief Field SystemColdRestart value: static_cast<int32_t>(0x8e)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemColdRestart;

  /// @brief Field SystemWarmRestart value: static_cast<int32_t>(0x8f)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemWarmRestart;

  /// @brief Field DpadUp value: static_cast<int32_t>(0x90)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const DpadUp;

  /// @brief Field DpadDown value: static_cast<int32_t>(0x91)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const DpadDown;

  /// @brief Field DpadRight value: static_cast<int32_t>(0x92)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const DpadRight;

  /// @brief Field DpadLeft value: static_cast<int32_t>(0x93)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const DpadLeft;

  /// @brief Field SystemDock value: static_cast<int32_t>(0xa0)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDock;

  /// @brief Field SystemUndock value: static_cast<int32_t>(0xa1)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemUndock;

  /// @brief Field SystemSetup value: static_cast<int32_t>(0xa2)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemSetup;

  /// @brief Field SystemBreak value: static_cast<int32_t>(0xa3)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemBreak;

  /// @brief Field SystemDebuggerBreak value: static_cast<int32_t>(0xa4)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDebuggerBreak;

  /// @brief Field ApplicationBreak value: static_cast<int32_t>(0xa5)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const ApplicationBreak;

  /// @brief Field ApplicationDebuggerBreak value: static_cast<int32_t>(0xa6)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const ApplicationDebuggerBreak;

  /// @brief Field SystemSpeakerMute value: static_cast<int32_t>(0xa7)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemSpeakerMute;

  /// @brief Field SystemHibernate value: static_cast<int32_t>(0xa8)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemHibernate;

  /// @brief Field SystemDisplayInvert value: static_cast<int32_t>(0xb0)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplayInvert;

  /// @brief Field SystemDisplayInternal value: static_cast<int32_t>(0xb1)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplayInternal;

  /// @brief Field SystemDisplayExternal value: static_cast<int32_t>(0xb2)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplayExternal;

  /// @brief Field SystemDisplayBoth value: static_cast<int32_t>(0xb3)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplayBoth;

  /// @brief Field SystemDisplayDual value: static_cast<int32_t>(0xb4)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplayDual;

  /// @brief Field SystemDisplayToggleIntExt value: static_cast<int32_t>(0xb5)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplayToggleIntExt;

  /// @brief Field SystemDisplaySwapPrimarySecondary value: static_cast<int32_t>(0xb6)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplaySwapPrimarySecondary;

  /// @brief Field SystemDisplayLCDAutoScale value: static_cast<int32_t>(0xb7)
  static ::UnityEngine::InputSystem::HID::__HID__GenericDesktop const SystemDisplayLCDAutoScale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__GenericDesktop, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__GenericDesktop, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::Simulation
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6402))
// CS Name: ::HID::Simulation
struct CORDL_TYPE __HID__Simulation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HID__Simulation_Unwrapped
  enum struct ____HID__Simulation_Unwrapped : int32_t {
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
  constexpr operator ____HID__Simulation_Unwrapped() const noexcept {
    return static_cast<____HID__Simulation_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__Simulation(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__Simulation();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Undefined;

  /// @brief Field FlightSimulationDevice value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const FlightSimulationDevice;

  /// @brief Field AutomobileSimulationDevice value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const AutomobileSimulationDevice;

  /// @brief Field TankSimulationDevice value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const TankSimulationDevice;

  /// @brief Field SpaceshipSimulationDevice value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const SpaceshipSimulationDevice;

  /// @brief Field SubmarineSimulationDevice value: static_cast<int32_t>(0x5)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const SubmarineSimulationDevice;

  /// @brief Field SailingSimulationDevice value: static_cast<int32_t>(0x6)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const SailingSimulationDevice;

  /// @brief Field MotorcycleSimulationDevice value: static_cast<int32_t>(0x7)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const MotorcycleSimulationDevice;

  /// @brief Field SportsSimulationDevice value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const SportsSimulationDevice;

  /// @brief Field AirplaneSimulationDevice value: static_cast<int32_t>(0x9)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const AirplaneSimulationDevice;

  /// @brief Field HelicopterSimulationDevice value: static_cast<int32_t>(0xa)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const HelicopterSimulationDevice;

  /// @brief Field MagicCarpetSimulationDevice value: static_cast<int32_t>(0xb)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const MagicCarpetSimulationDevice;

  /// @brief Field BicylcleSimulationDevice value: static_cast<int32_t>(0xc)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const BicylcleSimulationDevice;

  /// @brief Field FlightControlStick value: static_cast<int32_t>(0x20)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const FlightControlStick;

  /// @brief Field FlightStick value: static_cast<int32_t>(0x21)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const FlightStick;

  /// @brief Field CyclicControl value: static_cast<int32_t>(0x22)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const CyclicControl;

  /// @brief Field CyclicTrim value: static_cast<int32_t>(0x23)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const CyclicTrim;

  /// @brief Field FlightYoke value: static_cast<int32_t>(0x24)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const FlightYoke;

  /// @brief Field TrackControl value: static_cast<int32_t>(0x25)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const TrackControl;

  /// @brief Field Aileron value: static_cast<int32_t>(0xb0)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Aileron;

  /// @brief Field AileronTrim value: static_cast<int32_t>(0xb1)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const AileronTrim;

  /// @brief Field AntiTorqueControl value: static_cast<int32_t>(0xb2)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const AntiTorqueControl;

  /// @brief Field AutopilotEnable value: static_cast<int32_t>(0xb3)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const AutopilotEnable;

  /// @brief Field ChaffRelease value: static_cast<int32_t>(0xb4)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const ChaffRelease;

  /// @brief Field CollectiveControl value: static_cast<int32_t>(0xb5)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const CollectiveControl;

  /// @brief Field DiveBreak value: static_cast<int32_t>(0xb6)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const DiveBreak;

  /// @brief Field ElectronicCountermeasures value: static_cast<int32_t>(0xb7)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const ElectronicCountermeasures;

  /// @brief Field Elevator value: static_cast<int32_t>(0xb8)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Elevator;

  /// @brief Field ElevatorTrim value: static_cast<int32_t>(0xb9)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const ElevatorTrim;

  /// @brief Field Rudder value: static_cast<int32_t>(0xba)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Rudder;

  /// @brief Field Throttle value: static_cast<int32_t>(0xbb)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Throttle;

  /// @brief Field FlightCommunications value: static_cast<int32_t>(0xbc)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const FlightCommunications;

  /// @brief Field FlareRelease value: static_cast<int32_t>(0xbd)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const FlareRelease;

  /// @brief Field LandingGear value: static_cast<int32_t>(0xbe)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const LandingGear;

  /// @brief Field ToeBreak value: static_cast<int32_t>(0xbf)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const ToeBreak;

  /// @brief Field Trigger value: static_cast<int32_t>(0xc0)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Trigger;

  /// @brief Field WeaponsArm value: static_cast<int32_t>(0xc1)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const WeaponsArm;

  /// @brief Field WeaponsSelect value: static_cast<int32_t>(0xc2)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const WeaponsSelect;

  /// @brief Field WingFlaps value: static_cast<int32_t>(0xc3)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const WingFlaps;

  /// @brief Field Accelerator value: static_cast<int32_t>(0xc4)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Accelerator;

  /// @brief Field Brake value: static_cast<int32_t>(0xc5)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Brake;

  /// @brief Field Clutch value: static_cast<int32_t>(0xc6)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Clutch;

  /// @brief Field Shifter value: static_cast<int32_t>(0xc7)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Shifter;

  /// @brief Field Steering value: static_cast<int32_t>(0xc8)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Steering;

  /// @brief Field TurretDirection value: static_cast<int32_t>(0xc9)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const TurretDirection;

  /// @brief Field BarrelElevation value: static_cast<int32_t>(0xca)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const BarrelElevation;

  /// @brief Field DivePlane value: static_cast<int32_t>(0xcb)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const DivePlane;

  /// @brief Field Ballast value: static_cast<int32_t>(0xcc)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const Ballast;

  /// @brief Field BicycleCrank value: static_cast<int32_t>(0xcd)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const BicycleCrank;

  /// @brief Field HandleBars value: static_cast<int32_t>(0xce)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const HandleBars;

  /// @brief Field FrontBrake value: static_cast<int32_t>(0xcf)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const FrontBrake;

  /// @brief Field RearBrake value: static_cast<int32_t>(0xd0)
  static ::UnityEngine::InputSystem::HID::__HID__Simulation const RearBrake;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__Simulation, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__Simulation, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::Button
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6403))
// CS Name: ::HID::Button
struct CORDL_TYPE __HID__Button {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HID__Button_Unwrapped
  enum struct ____HID__Button_Unwrapped : int32_t {
    __E_Undefined = static_cast<int32_t>(0x0),
    __E_Primary = static_cast<int32_t>(0x1),
    __E_Secondary = static_cast<int32_t>(0x2),
    __E_Tertiary = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HID__Button_Unwrapped() const noexcept {
    return static_cast<____HID__Button_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HID__Button(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID__Button();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Undefined value: static_cast<int32_t>(0x0)
  static ::UnityEngine::InputSystem::HID::__HID__Button const Undefined;

  /// @brief Field Primary value: static_cast<int32_t>(0x1)
  static ::UnityEngine::InputSystem::HID::__HID__Button const Primary;

  /// @brief Field Secondary value: static_cast<int32_t>(0x2)
  static ::UnityEngine::InputSystem::HID::__HID__Button const Secondary;

  /// @brief Field Tertiary value: static_cast<int32_t>(0x3)
  static ::UnityEngine::InputSystem::HID::__HID__Button const Tertiary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID__Button, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID__Button, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6404))
// CS Name: ::HID::<>c__DisplayClass12_0*
class CORDL_TYPE __HID____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field layout, offset 0x10, size 0x8
  __declspec(property(get = __get_layout, put = __set_layout))::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder* layout;

  constexpr ::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder*& __get_layout();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder*> const& __get_layout() const;

  constexpr void __set_layout(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder* value);

  static inline ::UnityEngine::InputSystem::HID::__HID____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ada92c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <OnFindLayoutForDevice>b__0, addr 0x2adf6a8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* _OnFindLayoutForDevice_b__0();

  // Ctor Parameters [CppParam { name: "", ty: "__HID____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HID____c__DisplayClass12_0(__HID____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HID____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HID____c__DisplayClass12_0(__HID____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HID____c__DisplayClass12_0();

public:
  /// @brief Field layout, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder* ___layout;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HID____c__DisplayClass12_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HID____c__DisplayClass12_0, ___layout) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: UnityEngine.InputSystem.HID::HID
// SizeInfo { instance_size: 400, native_size: -1, calculated_instance_size: 400, calculated_native_size: 400, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6398)), TypeDefinitionIndex(TypeDefinitionIndex(6239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6405))
// CS Name: ::UnityEngine.InputSystem.HID::HID*
class CORDL_TYPE HID : public ::UnityEngine::InputSystem::InputDevice {
public:
  // Declarations
  using __c__DisplayClass12_0 = ::UnityEngine::InputSystem::HID::__HID____c__DisplayClass12_0;

  using Button = ::UnityEngine::InputSystem::HID::__HID__Button;

  using Simulation = ::UnityEngine::InputSystem::HID::__HID__Simulation;

  using GenericDesktop = ::UnityEngine::InputSystem::HID::__HID__GenericDesktop;

  using UsagePage = ::UnityEngine::InputSystem::HID::__HID__UsagePage;

  using HIDDeviceDescriptorBuilder = ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder;

  using HIDDeviceDescriptor = ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor;

  using HIDCollectionDescriptor = ::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor;

  using HIDElementDescriptor = ::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor;

  using HIDElementFlags = ::UnityEngine::InputSystem::HID::__HID__HIDElementFlags;

  using HIDCollectionType = ::UnityEngine::InputSystem::HID::__HID__HIDCollectionType;

  using HIDReportType = ::UnityEngine::InputSystem::HID::__HID__HIDReportType;

  using HIDLayoutBuilder = ::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder;

  /// @brief Field m_HaveParsedHIDDescriptor, offset 0x158, size 0x1
  __declspec(property(get = __get_m_HaveParsedHIDDescriptor, put = __set_m_HaveParsedHIDDescriptor)) bool m_HaveParsedHIDDescriptor;

  /// @brief Field m_HIDDescriptor, offset 0x160, size 0x30
  __declspec(property(get = __get_m_HIDDescriptor, put = __set_m_HIDDescriptor))::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor m_HIDDescriptor;

  __declspec(property(get = get_hidDescriptor))::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor hidDescriptor;

  constexpr bool& __get_m_HaveParsedHIDDescriptor();

  constexpr bool const& __get_m_HaveParsedHIDDescriptor() const;

  constexpr void __set_m_HaveParsedHIDDescriptor(bool value);

  constexpr ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor& __get_m_HIDDescriptor();

  constexpr ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor const& __get_m_HIDDescriptor() const;

  constexpr void __set_m_HIDDescriptor(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor value);

  /// @brief Method get_QueryHIDReportDescriptorDeviceCommandType, addr 0x2ad9eb0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorDeviceCommandType();

  /// @brief Method get_QueryHIDReportDescriptorSizeDeviceCommandType, addr 0x2ad9ee0, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorSizeDeviceCommandType();

  /// @brief Method get_QueryHIDParsedReportDescriptorDeviceCommandType, addr 0x2ad9f10, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDParsedReportDescriptorDeviceCommandType();

  /// @brief Method get_hidDescriptor, addr 0x2ad9f40, size 0xa4, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor get_hidDescriptor();

  /// @brief Method OnFindLayoutForDevice, addr 0x2ad9fe4, size 0x948, virtual false, abstract: false, final false
  static inline ::StringW OnFindLayoutForDevice(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> description, ::StringW matchedLayout,
                                                ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand);

  /// @brief Method ReadHIDDeviceDescriptor, addr 0x2ada934, size 0x6f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor ReadHIDDeviceDescriptor(ByRef<::UnityEngine::InputSystem::Layouts::InputDeviceDescription> deviceDescription,
                                                                                                    ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate);

  /// @brief Method UsagePageToString, addr 0x2adccb0, size 0x8c, virtual false, abstract: false, final false
  static inline ::StringW UsagePageToString(::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage);

  /// @brief Method UsageToString, addr 0x2adcd3c, size 0x9c, virtual false, abstract: false, final false
  static inline ::StringW UsageToString(::UnityEngine::InputSystem::HID::__HID__UsagePage usagePage, int32_t usage);

  static inline ::UnityEngine::InputSystem::HID::HID* New_ctor();

  /// @brief Method .ctor, addr 0x2adcdd8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HID(HID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HID(HID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HID();

public:
  /// @brief Field m_HaveParsedHIDDescriptor, offset: 0x158, size: 0x1, def value: None
  bool ___m_HaveParsedHIDDescriptor;

  /// @brief Field m_HIDDescriptor, offset: 0x160, size: 0x30, def value: None
  ::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor ___m_HIDDescriptor;

  /// @brief Field kHIDInterface offset 0xffffffff size 0x8
  static constexpr ::ConstString kHIDInterface{ u"HID" };

  /// @brief Field kHIDNamespace offset 0xffffffff size 0x8
  static constexpr ::ConstString kHIDNamespace{ u"HID" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HID, 0x190>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID, ___m_HaveParsedHIDDescriptor) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HID, ___m_HIDDescriptor) == 0x160, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__Button, "UnityEngine.InputSystem.HID", "HID/Button");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__GenericDesktop, "UnityEngine.InputSystem.HID", "HID/GenericDesktop");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDCollectionType, "UnityEngine.InputSystem.HID", "HID/HIDCollectionType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDElementFlags, "UnityEngine.InputSystem.HID", "HID/HIDElementFlags");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDReportType, "UnityEngine.InputSystem.HID", "HID/HIDReportType");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__Simulation, "UnityEngine.InputSystem.HID", "HID/Simulation");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__UsagePage, "UnityEngine.InputSystem.HID", "HID/UsagePage");
NEED_NO_BOX(::GlobalNamespace::__HID__HIDLayoutBuilder____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__HID__HIDLayoutBuilder____c*, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder/<>c");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HID);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HID*, "UnityEngine.InputSystem.HID", "HID");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDLayoutBuilder*, "UnityEngine.InputSystem.HID", "HID/HIDLayoutBuilder");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::__HID____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID____c__DisplayClass12_0*, "UnityEngine.InputSystem.HID", "HID/<>c__DisplayClass12_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDCollectionDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDCollectionDescriptor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptorBuilder, "UnityEngine.InputSystem.HID", "HID/HIDDeviceDescriptorBuilder");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HID__HIDElementDescriptor, "UnityEngine.InputSystem.HID", "HID/HIDElementDescriptor");
