#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HIDParser)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDItemStateGlobal;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDItemStateLocal;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDItemTypeAndTag;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDReportData;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct __HID__UsagePage;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDItemTypeAndTag;
}
namespace UnityEngine::InputSystem::HID {
class HIDParser;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDItemStateGlobal;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDItemStateLocal;
}
namespace UnityEngine::InputSystem::HID {
struct __HIDParser__HIDReportData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HIDParser);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal);
MARK_VAL_T(::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData);
// Type: ::HIDReportData
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(6393))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6406))
// CS Name: ::HIDParser::HIDReportData
struct CORDL_TYPE __HIDParser__HIDReportData {
public:
  // Declarations
  /// @brief Method FindOrAddReport, addr 0x2adfb04, size 0x18c, virtual false, abstract: false, final false
  static inline int32_t FindOrAddReport(::System::Nullable_1<int32_t> reportId, ::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType,
                                        ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData>* reports);

  // Ctor Parameters [CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportType", ty: "::UnityEngine::InputSystem::HID::__HID__HIDReportType",
  // modifiers: "", def_value: None }, CppParam { name: "currentBitOffset", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HIDParser__HIDReportData(int32_t reportId, ::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType, int32_t currentBitOffset) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HIDParser__HIDReportData();

  /// @brief Field reportId, offset: 0x0, size: 0x4, def value: None
  int32_t reportId;

  /// @brief Field reportType, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::__HID__HIDReportType reportType;

  /// @brief Field currentBitOffset, offset: 0x8, size: 0x4, def value: None
  int32_t currentBitOffset;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData, reportId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData, reportType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData, currentBitOffset) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDItemTypeAndTag
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6407))
// CS Name: ::HIDParser::HIDItemTypeAndTag
struct CORDL_TYPE __HIDParser__HIDItemTypeAndTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____HIDParser__HIDItemTypeAndTag_Unwrapped
  enum struct ____HIDParser__HIDItemTypeAndTag_Unwrapped : int32_t {
    __E_Input = static_cast<int32_t>(0x80),
    __E_Output = static_cast<int32_t>(0x90),
    __E_Feature = static_cast<int32_t>(0xb0),
    __E_Collection = static_cast<int32_t>(0xa0),
    __E_EndCollection = static_cast<int32_t>(0xc0),
    __E_UsagePage = static_cast<int32_t>(0x4),
    __E_LogicalMinimum = static_cast<int32_t>(0x14),
    __E_LogicalMaximum = static_cast<int32_t>(0x24),
    __E_PhysicalMinimum = static_cast<int32_t>(0x34),
    __E_PhysicalMaximum = static_cast<int32_t>(0x44),
    __E_UnitExponent = static_cast<int32_t>(0x54),
    __E_Unit = static_cast<int32_t>(0x64),
    __E_ReportSize = static_cast<int32_t>(0x74),
    __E_ReportID = static_cast<int32_t>(0x84),
    __E_ReportCount = static_cast<int32_t>(0x94),
    __E_Push = static_cast<int32_t>(0xa4),
    __E_Pop = static_cast<int32_t>(0xb4),
    __E_Usage = static_cast<int32_t>(0x8),
    __E_UsageMinimum = static_cast<int32_t>(0x18),
    __E_UsageMaximum = static_cast<int32_t>(0x28),
    __E_DesignatorIndex = static_cast<int32_t>(0x38),
    __E_DesignatorMinimum = static_cast<int32_t>(0x48),
    __E_DesignatorMaximum = static_cast<int32_t>(0x58),
    __E_StringIndex = static_cast<int32_t>(0x78),
    __E_StringMinimum = static_cast<int32_t>(0x88),
    __E_StringMaximum = static_cast<int32_t>(0x98),
    __E_Delimiter = static_cast<int32_t>(0xa8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____HIDParser__HIDItemTypeAndTag_Unwrapped() const noexcept {
    return static_cast<____HIDParser__HIDItemTypeAndTag_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __HIDParser__HIDItemTypeAndTag(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HIDParser__HIDItemTypeAndTag();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Input value: static_cast<int32_t>(0x80)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Input;

  /// @brief Field Output value: static_cast<int32_t>(0x90)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Output;

  /// @brief Field Feature value: static_cast<int32_t>(0xb0)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Feature;

  /// @brief Field Collection value: static_cast<int32_t>(0xa0)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Collection;

  /// @brief Field EndCollection value: static_cast<int32_t>(0xc0)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const EndCollection;

  /// @brief Field UsagePage value: static_cast<int32_t>(0x4)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const UsagePage;

  /// @brief Field LogicalMinimum value: static_cast<int32_t>(0x14)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const LogicalMinimum;

  /// @brief Field LogicalMaximum value: static_cast<int32_t>(0x24)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const LogicalMaximum;

  /// @brief Field PhysicalMinimum value: static_cast<int32_t>(0x34)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const PhysicalMinimum;

  /// @brief Field PhysicalMaximum value: static_cast<int32_t>(0x44)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const PhysicalMaximum;

  /// @brief Field UnitExponent value: static_cast<int32_t>(0x54)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const UnitExponent;

  /// @brief Field Unit value: static_cast<int32_t>(0x64)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Unit;

  /// @brief Field ReportSize value: static_cast<int32_t>(0x74)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const ReportSize;

  /// @brief Field ReportID value: static_cast<int32_t>(0x84)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const ReportID;

  /// @brief Field ReportCount value: static_cast<int32_t>(0x94)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const ReportCount;

  /// @brief Field Push value: static_cast<int32_t>(0xa4)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Push;

  /// @brief Field Pop value: static_cast<int32_t>(0xb4)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Pop;

  /// @brief Field Usage value: static_cast<int32_t>(0x8)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Usage;

  /// @brief Field UsageMinimum value: static_cast<int32_t>(0x18)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const UsageMinimum;

  /// @brief Field UsageMaximum value: static_cast<int32_t>(0x28)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const UsageMaximum;

  /// @brief Field DesignatorIndex value: static_cast<int32_t>(0x38)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const DesignatorIndex;

  /// @brief Field DesignatorMinimum value: static_cast<int32_t>(0x48)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const DesignatorMinimum;

  /// @brief Field DesignatorMaximum value: static_cast<int32_t>(0x58)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const DesignatorMaximum;

  /// @brief Field StringIndex value: static_cast<int32_t>(0x78)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const StringIndex;

  /// @brief Field StringMinimum value: static_cast<int32_t>(0x88)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const StringMinimum;

  /// @brief Field StringMaximum value: static_cast<int32_t>(0x98)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const StringMaximum;

  /// @brief Field Delimiter value: static_cast<int32_t>(0xa8)
  static ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag const Delimiter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDItemStateLocal
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6408))
// CS Name: ::HIDParser::HIDItemStateLocal
struct CORDL_TYPE __HIDParser__HIDItemStateLocal {
public:
  // Declarations
  /// @brief Method Reset, addr 0x2adfaa4, size 0x60, virtual false, abstract: false, final false
  static inline void Reset(ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal> state);

  /// @brief Method SetUsage, addr 0x2adf7a8, size 0x158, virtual false, abstract: false, final false
  inline void SetUsage(int32_t value);

  /// @brief Method GetUsage, addr 0x2adf98c, size 0x118, virtual false, abstract: false, final false
  inline int32_t GetUsage(int32_t index);

  // Ctor Parameters [CppParam { name: "usage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageMinimum", ty: "::System::Nullable_1<int32_t>", modifiers:
  // "", def_value: None }, CppParam { name: "usageMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "designatorIndex", ty:
  // "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "designatorMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "designatorMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None },
  // CppParam { name: "stringMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "usageList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }]
  constexpr __HIDParser__HIDItemStateLocal(::System::Nullable_1<int32_t> usage, ::System::Nullable_1<int32_t> usageMinimum, ::System::Nullable_1<int32_t> usageMaximum,
                                           ::System::Nullable_1<int32_t> designatorIndex, ::System::Nullable_1<int32_t> designatorMinimum, ::System::Nullable_1<int32_t> designatorMaximum,
                                           ::System::Nullable_1<int32_t> stringIndex, ::System::Nullable_1<int32_t> stringMinimum, ::System::Nullable_1<int32_t> stringMaximum,
                                           ::System::Collections::Generic::List_1<int32_t>* usageList) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HIDParser__HIDItemStateLocal();

  /// @brief Field usage, offset: 0x0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usage;

  /// @brief Field usageMinimum, offset: 0x8, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usageMinimum;

  /// @brief Field usageMaximum, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usageMaximum;

  /// @brief Field designatorIndex, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> designatorIndex;

  /// @brief Field designatorMinimum, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> designatorMinimum;

  /// @brief Field designatorMaximum, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> designatorMaximum;

  /// @brief Field stringIndex, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> stringIndex;

  /// @brief Field stringMinimum, offset: 0x38, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> stringMinimum;

  /// @brief Field stringMaximum, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> stringMaximum;

  /// @brief Field usageList, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<int32_t>* usageList;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, usage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, usageMinimum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, usageMaximum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, designatorIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, designatorMinimum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, designatorMaximum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, stringIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, stringMinimum) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, stringMaximum) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, usageList) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: ::HIDItemStateGlobal
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2448)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6409))
// CS Name: ::HIDParser::HIDItemStateGlobal
struct CORDL_TYPE __HIDParser__HIDItemStateGlobal {
public:
  // Declarations
  /// @brief Method GetUsagePage, addr 0x2adf900, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::__HID__UsagePage GetUsagePage(int32_t index, ByRef<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal> localItemState);

  /// @brief Method GetPhysicalMin, addr 0x2adfc90, size 0xc4, virtual false, abstract: false, final false
  inline int32_t GetPhysicalMin();

  /// @brief Method GetPhysicalMax, addr 0x2adfd54, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetPhysicalMax();

  // Ctor Parameters [CppParam { name: "usagePage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "logicalMinimum", ty: "::System::Nullable_1<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "logicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "physicalMinimum", ty:
  // "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "physicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "unitExponent", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam {
  // name: "reportSize", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "reportCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None },
  // CppParam { name: "reportId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
  constexpr __HIDParser__HIDItemStateGlobal(::System::Nullable_1<int32_t> usagePage, ::System::Nullable_1<int32_t> logicalMinimum, ::System::Nullable_1<int32_t> logicalMaximum,
                                            ::System::Nullable_1<int32_t> physicalMinimum, ::System::Nullable_1<int32_t> physicalMaximum, ::System::Nullable_1<int32_t> unitExponent,
                                            ::System::Nullable_1<int32_t> unit, ::System::Nullable_1<int32_t> reportSize, ::System::Nullable_1<int32_t> reportCount,
                                            ::System::Nullable_1<int32_t> reportId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HIDParser__HIDItemStateGlobal();

  /// @brief Field usagePage, offset: 0x0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> usagePage;

  /// @brief Field logicalMinimum, offset: 0x8, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> logicalMinimum;

  /// @brief Field logicalMaximum, offset: 0x10, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> logicalMaximum;

  /// @brief Field physicalMinimum, offset: 0x18, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> physicalMinimum;

  /// @brief Field physicalMaximum, offset: 0x20, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> physicalMaximum;

  /// @brief Field unitExponent, offset: 0x28, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> unitExponent;

  /// @brief Field unit, offset: 0x30, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> unit;

  /// @brief Field reportSize, offset: 0x38, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> reportSize;

  /// @brief Field reportCount, offset: 0x40, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> reportCount;

  /// @brief Field reportId, offset: 0x48, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> reportId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, usagePage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, logicalMinimum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, logicalMaximum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, physicalMinimum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, physicalMaximum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, unitExponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, unit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, reportSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, reportCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, reportId) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Type: UnityEngine.InputSystem.HID::HIDParser
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6410))
// CS Name: ::UnityEngine.InputSystem.HID::HIDParser*
class CORDL_TYPE HIDParser : public ::System::Object {
public:
  // Declarations
  using HIDItemStateGlobal = ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal;

  using HIDItemStateLocal = ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal;

  using HIDItemTypeAndTag = ::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag;

  using HIDReportData = ::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData;

  /// @brief Method ParseReportDescriptor, addr 0x2adf6c0, size 0x70, virtual false, abstract: false, final false
  static inline bool ParseReportDescriptor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor> deviceDescriptor);

  /// @brief Method ParseReportDescriptor, addr 0x2adbffc, size 0xc44, virtual false, abstract: false, final false
  static inline bool ParseReportDescriptor(::cordl_internals::Ptr<uint8_t> bufferPtr, int32_t bufferLength, ByRef<::UnityEngine::InputSystem::HID::__HID__HIDDeviceDescriptor> deviceDescriptor);

  /// @brief Method ReadData, addr 0x2adf730, size 0x78, virtual false, abstract: false, final false
  static inline int32_t ReadData(int32_t itemSize, ::cordl_internals::Ptr<uint8_t> currentPtr, ::cordl_internals::Ptr<uint8_t> endPtr);

  // Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HIDParser(HIDParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HIDParser(HIDParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDParser();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDParser, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemTypeAndTag, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemTypeAndTag");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDParser);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser*, "UnityEngine.InputSystem.HID", "HIDParser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateGlobal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateGlobal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HIDParser__HIDItemStateLocal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateLocal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::__HIDParser__HIDReportData, "UnityEngine.InputSystem.HID", "HIDParser/HIDReportData");
