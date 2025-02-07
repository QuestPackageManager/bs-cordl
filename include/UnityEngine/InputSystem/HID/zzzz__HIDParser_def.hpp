#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HIDParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/HID/zzzz__HID_def.hpp"
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
struct HIDParser_HIDItemStateGlobal;
}
namespace UnityEngine::InputSystem::HID {
struct HIDParser_HIDItemStateLocal;
}
namespace UnityEngine::InputSystem::HID {
struct HIDParser_HIDItemTypeAndTag;
}
namespace UnityEngine::InputSystem::HID {
struct HIDParser_HIDReportData;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDDeviceDescriptor;
}
namespace UnityEngine::InputSystem::HID {
struct HID_HIDReportType;
}
namespace UnityEngine::InputSystem::HID {
struct HID_UsagePage;
}
// Forward declare root types
namespace UnityEngine::InputSystem::HID {
struct HIDParser_HIDItemTypeAndTag;
}
namespace UnityEngine::InputSystem::HID {
class HIDParser;
}
namespace UnityEngine::InputSystem::HID {
struct HIDParser_HIDItemStateGlobal;
}
namespace UnityEngine::InputSystem::HID {
struct HIDParser_HIDItemStateLocal;
}
namespace UnityEngine::InputSystem::HID {
struct HIDParser_HIDReportData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag);
MARK_REF_PTR_T(::UnityEngine::InputSystem::HID::HIDParser);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal);
MARK_VAL_T(::UnityEngine::InputSystem::HID::HIDParser_HIDReportData);
// Dependencies UnityEngine.InputSystem.HID.HID::HIDReportType
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDReportData
struct CORDL_TYPE HIDParser_HIDReportData {
public:
  // Declarations
  /// @brief Method FindOrAddReport, addr 0x4603938, size 0x188, virtual false, abstract: false, final false
  static inline int32_t FindOrAddReport(::System::Nullable_1<int32_t> reportId, ::UnityEngine::InputSystem::HID::HID_HIDReportType reportType,
                                        ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HIDParser_HIDReportData>* reports);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDParser_HIDReportData();

  // Ctor Parameters [CppParam { name: "reportId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "reportType", ty: "::UnityEngine::InputSystem::HID::HID_HIDReportType", modifiers:
  // "", def_value: None }, CppParam { name: "currentBitOffset", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HIDParser_HIDReportData(int32_t reportId, ::UnityEngine::InputSystem::HID::HID_HIDReportType reportType, int32_t currentBitOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6815 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field reportId, offset: 0x0, size: 0x4, def value: None
  int32_t reportId;

  /// @brief Field reportType, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::InputSystem::HID::HID_HIDReportType reportType;

  /// @brief Field currentBitOffset, offset: 0x8, size: 0x4, def value: None
  int32_t currentBitOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDReportData, reportId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDReportData, reportType) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDReportData, currentBitOffset) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDParser_HIDReportData, 0xc>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDItemTypeAndTag
struct CORDL_TYPE HIDParser_HIDItemTypeAndTag {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HIDParser_HIDItemTypeAndTag_Unwrapped
  enum struct __HIDParser_HIDItemTypeAndTag_Unwrapped : int32_t {
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
  constexpr operator __HIDParser_HIDItemTypeAndTag_Unwrapped() const noexcept {
    return static_cast<__HIDParser_HIDItemTypeAndTag_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDParser_HIDItemTypeAndTag();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HIDParser_HIDItemTypeAndTag(int32_t value__) noexcept;

  /// @brief Field Collection value: I32(160)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Collection;

  /// @brief Field Delimiter value: I32(168)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Delimiter;

  /// @brief Field DesignatorIndex value: I32(56)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const DesignatorIndex;

  /// @brief Field DesignatorMaximum value: I32(88)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const DesignatorMaximum;

  /// @brief Field DesignatorMinimum value: I32(72)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const DesignatorMinimum;

  /// @brief Field EndCollection value: I32(192)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const EndCollection;

  /// @brief Field Feature value: I32(176)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Feature;

  /// @brief Field Input value: I32(128)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Input;

  /// @brief Field LogicalMaximum value: I32(36)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const LogicalMaximum;

  /// @brief Field LogicalMinimum value: I32(20)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const LogicalMinimum;

  /// @brief Field Output value: I32(144)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Output;

  /// @brief Field PhysicalMaximum value: I32(68)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const PhysicalMaximum;

  /// @brief Field PhysicalMinimum value: I32(52)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const PhysicalMinimum;

  /// @brief Field Pop value: I32(180)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Pop;

  /// @brief Field Push value: I32(164)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Push;

  /// @brief Field ReportCount value: I32(148)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const ReportCount;

  /// @brief Field ReportID value: I32(132)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const ReportID;

  /// @brief Field ReportSize value: I32(116)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const ReportSize;

  /// @brief Field StringIndex value: I32(120)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const StringIndex;

  /// @brief Field StringMaximum value: I32(152)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const StringMaximum;

  /// @brief Field StringMinimum value: I32(136)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const StringMinimum;

  /// @brief Field Unit value: I32(100)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Unit;

  /// @brief Field UnitExponent value: I32(84)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const UnitExponent;

  /// @brief Field Usage value: I32(8)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const Usage;

  /// @brief Field UsageMaximum value: I32(40)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const UsageMaximum;

  /// @brief Field UsageMinimum value: I32(24)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const UsageMinimum;

  /// @brief Field UsagePage value: I32(4)
  static ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag const UsagePage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6816 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies System.Nullable`1<T>
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDItemStateLocal
struct CORDL_TYPE HIDParser_HIDItemStateLocal {
public:
  // Declarations
  /// @brief Method GetUsage, addr 0x4603c8c, size 0x110, virtual false, abstract: false, final false
  inline int32_t GetUsage(int32_t index);

  /// @brief Method Reset, addr 0x4603ac0, size 0x60, virtual false, abstract: false, final false
  static inline void Reset(::ByRef<::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal> state);

  /// @brief Method SetUsage, addr 0x4603b20, size 0x16c, virtual false, abstract: false, final false
  inline void SetUsage(int32_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDParser_HIDItemStateLocal();

  // Ctor Parameters [CppParam { name: "usage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "usageMinimum", ty: "::System::Nullable_1<int32_t>", modifiers:
  // "", def_value: None }, CppParam { name: "usageMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "designatorIndex", ty:
  // "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "designatorMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "designatorMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringIndex", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None },
  // CppParam { name: "stringMinimum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "stringMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "",
  // def_value: None }, CppParam { name: "usageList", ty: "::System::Collections::Generic::List_1<int32_t>*", modifiers: "", def_value: None }]
  constexpr HIDParser_HIDItemStateLocal(::System::Nullable_1<int32_t> usage, ::System::Nullable_1<int32_t> usageMinimum, ::System::Nullable_1<int32_t> usageMaximum,
                                        ::System::Nullable_1<int32_t> designatorIndex, ::System::Nullable_1<int32_t> designatorMinimum, ::System::Nullable_1<int32_t> designatorMaximum,
                                        ::System::Nullable_1<int32_t> stringIndex, ::System::Nullable_1<int32_t> stringMinimum, ::System::Nullable_1<int32_t> stringMaximum,
                                        ::System::Collections::Generic::List_1<int32_t>* usageList) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6817 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, usage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, usageMinimum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, usageMaximum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, designatorIndex) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, designatorMinimum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, designatorMaximum) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, stringIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, stringMinimum) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, stringMaximum) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, usageList) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, 0x50>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies System.Nullable`1<T>
namespace UnityEngine::InputSystem::HID {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HIDParser/HIDItemStateGlobal
struct CORDL_TYPE HIDParser_HIDItemStateGlobal {
public:
  // Declarations
  /// @brief Method GetPhysicalMax, addr 0x4603eec, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetPhysicalMax();

  /// @brief Method GetPhysicalMin, addr 0x4603e28, size 0xc4, virtual false, abstract: false, final false
  inline int32_t GetPhysicalMin();

  /// @brief Method GetUsagePage, addr 0x4603d9c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::HID::HID_UsagePage GetUsagePage(int32_t index, ::ByRef<::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal> localItemState);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDParser_HIDItemStateGlobal();

  // Ctor Parameters [CppParam { name: "usagePage", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "logicalMinimum", ty: "::System::Nullable_1<int32_t>",
  // modifiers: "", def_value: None }, CppParam { name: "logicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "physicalMinimum", ty:
  // "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "physicalMaximum", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name:
  // "unitExponent", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "unit", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam {
  // name: "reportSize", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "reportCount", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None },
  // CppParam { name: "reportId", ty: "::System::Nullable_1<int32_t>", modifiers: "", def_value: None }]
  constexpr HIDParser_HIDItemStateGlobal(::System::Nullable_1<int32_t> usagePage, ::System::Nullable_1<int32_t> logicalMinimum, ::System::Nullable_1<int32_t> logicalMaximum,
                                         ::System::Nullable_1<int32_t> physicalMinimum, ::System::Nullable_1<int32_t> physicalMaximum, ::System::Nullable_1<int32_t> unitExponent,
                                         ::System::Nullable_1<int32_t> unit, ::System::Nullable_1<int32_t> reportSize, ::System::Nullable_1<int32_t> reportCount,
                                         ::System::Nullable_1<int32_t> reportId) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6818 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, usagePage) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, logicalMinimum) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, logicalMaximum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, physicalMinimum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, physicalMaximum) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, unitExponent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, unit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, reportSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, reportCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, reportId) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, 0x50>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
// Dependencies System.Object
namespace UnityEngine::InputSystem::HID {
// Is value type: false
// CS Name: UnityEngine.InputSystem.HID.HIDParser
class CORDL_TYPE HIDParser : public ::System::Object {
public:
  // Declarations
  using HIDItemStateGlobal = ::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal;

  using HIDItemStateLocal = ::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal;

  using HIDItemTypeAndTag = ::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag;

  using HIDReportData = ::UnityEngine::InputSystem::HID::HIDParser_HIDReportData;

  /// @brief Method ParseReportDescriptor, addr 0x4603864, size 0x6c, virtual false, abstract: false, final false
  static inline bool ParseReportDescriptor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ::ByRef<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor> deviceDescriptor);

  /// @brief Method ParseReportDescriptor, addr 0x4600394, size 0xba8, virtual false, abstract: false, final false
  static inline bool ParseReportDescriptor(::cordl_internals::Ptr<uint8_t> bufferPtr, int32_t bufferLength, ::ByRef<::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor> deviceDescriptor);

  /// @brief Method ReadData, addr 0x46038d0, size 0x68, virtual false, abstract: false, final false
  static inline int32_t ReadData(int32_t itemSize, ::cordl_internals::Ptr<uint8_t> currentPtr, ::cordl_internals::Ptr<uint8_t> endPtr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HIDParser();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HIDParser(HIDParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HIDParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HIDParser(HIDParser const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6819 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::HID::HIDParser, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::HID
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser_HIDItemTypeAndTag, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemTypeAndTag");
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDParser);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser*, "UnityEngine.InputSystem.HID", "HIDParser");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateGlobal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateGlobal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal, "UnityEngine.InputSystem.HID", "HIDParser/HIDItemStateLocal");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDParser_HIDReportData, "UnityEngine.InputSystem.HID", "HIDParser/HIDReportData");
