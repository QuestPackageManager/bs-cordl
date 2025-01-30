#pragma once
// IWYU pragma private; include "OVR/OpenVR/InputOriginInfo_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputOriginInfo_t)
// Forward declare root types
namespace OVR::OpenVR {
struct InputOriginInfo_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::InputOriginInfo_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.InputOriginInfo_t
struct CORDL_TYPE InputOriginInfo_t {
public:
  // Declarations
  __declspec(property(get = get_rchRenderModelComponentName)) ::StringW rchRenderModelComponentName;

  /// @brief Method get_rchRenderModelComponentName, addr 0x4078b28, size 0x86c, virtual false, abstract: false, final false
  inline ::StringW get_rchRenderModelComponentName();

  // Ctor Parameters []
  // @brief default ctor
  constexpr InputOriginInfo_t();

  // Ctor Parameters [CppParam { name: "devicePath", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "trackedDeviceIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName0", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName1", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName2", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName3", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName4", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName5", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName6", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName7", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName8", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName9", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName10", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName11", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "rchRenderModelComponentName12", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName13", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "rchRenderModelComponentName14", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName15", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "rchRenderModelComponentName16", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName17", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "rchRenderModelComponentName18", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName19", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "rchRenderModelComponentName20", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName21", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName22", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName23", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName24", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName25",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName26", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "rchRenderModelComponentName27", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName28", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "rchRenderModelComponentName29", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName30", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName31", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName32", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "rchRenderModelComponentName33", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName34", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "rchRenderModelComponentName35", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName36", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "rchRenderModelComponentName37", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName38", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "rchRenderModelComponentName39", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName40", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "rchRenderModelComponentName41", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName42", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName43", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName44", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName45", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName46",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName47", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "rchRenderModelComponentName48", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName49", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "rchRenderModelComponentName50", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName51", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName52", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName53", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "rchRenderModelComponentName54", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName55", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "rchRenderModelComponentName56", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName57", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "rchRenderModelComponentName58", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName59", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "rchRenderModelComponentName60", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName61", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "rchRenderModelComponentName62", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName63", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName64", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName65", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName66", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName67",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName68", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "rchRenderModelComponentName69", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName70", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "rchRenderModelComponentName71", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName72", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName73", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName74", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "rchRenderModelComponentName75", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName76", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "rchRenderModelComponentName77", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName78", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "rchRenderModelComponentName79", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName80", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "rchRenderModelComponentName81", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName82", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "rchRenderModelComponentName83", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName84", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName85", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName86", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName87", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName88",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName89", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "rchRenderModelComponentName90", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName91", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "rchRenderModelComponentName92", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName93", ty: "uint8_t", modifiers: "", def_value: None }, CppParam
  // { name: "rchRenderModelComponentName94", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName95", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "rchRenderModelComponentName96", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName97", ty: "uint8_t", modifiers: "", def_value: None
  // }, CppParam { name: "rchRenderModelComponentName98", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName99", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "rchRenderModelComponentName100", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName101", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "rchRenderModelComponentName102", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName103", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "rchRenderModelComponentName104", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName105", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName106", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName107", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName108", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName109",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName110", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name:
  // "rchRenderModelComponentName111", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName112", ty: "uint8_t", modifiers: "", def_value: None }, CppParam {
  // name: "rchRenderModelComponentName113", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName114", ty: "uint8_t", modifiers: "", def_value: None },
  // CppParam { name: "rchRenderModelComponentName115", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName116", ty: "uint8_t", modifiers: "", def_value:
  // None }, CppParam { name: "rchRenderModelComponentName117", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName118", ty: "uint8_t", modifiers: "",
  // def_value: None }, CppParam { name: "rchRenderModelComponentName119", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName120", ty: "uint8_t", modifiers:
  // "", def_value: None }, CppParam { name: "rchRenderModelComponentName121", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName122", ty: "uint8_t",
  // modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName123", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName124", ty:
  // "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName125", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName126",
  // ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "rchRenderModelComponentName127", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr InputOriginInfo_t(
      uint64_t devicePath, uint32_t trackedDeviceIndex, uint8_t rchRenderModelComponentName0, uint8_t rchRenderModelComponentName1, uint8_t rchRenderModelComponentName2,
      uint8_t rchRenderModelComponentName3, uint8_t rchRenderModelComponentName4, uint8_t rchRenderModelComponentName5, uint8_t rchRenderModelComponentName6, uint8_t rchRenderModelComponentName7,
      uint8_t rchRenderModelComponentName8, uint8_t rchRenderModelComponentName9, uint8_t rchRenderModelComponentName10, uint8_t rchRenderModelComponentName11, uint8_t rchRenderModelComponentName12,
      uint8_t rchRenderModelComponentName13, uint8_t rchRenderModelComponentName14, uint8_t rchRenderModelComponentName15, uint8_t rchRenderModelComponentName16, uint8_t rchRenderModelComponentName17,
      uint8_t rchRenderModelComponentName18, uint8_t rchRenderModelComponentName19, uint8_t rchRenderModelComponentName20, uint8_t rchRenderModelComponentName21, uint8_t rchRenderModelComponentName22,
      uint8_t rchRenderModelComponentName23, uint8_t rchRenderModelComponentName24, uint8_t rchRenderModelComponentName25, uint8_t rchRenderModelComponentName26, uint8_t rchRenderModelComponentName27,
      uint8_t rchRenderModelComponentName28, uint8_t rchRenderModelComponentName29, uint8_t rchRenderModelComponentName30, uint8_t rchRenderModelComponentName31, uint8_t rchRenderModelComponentName32,
      uint8_t rchRenderModelComponentName33, uint8_t rchRenderModelComponentName34, uint8_t rchRenderModelComponentName35, uint8_t rchRenderModelComponentName36, uint8_t rchRenderModelComponentName37,
      uint8_t rchRenderModelComponentName38, uint8_t rchRenderModelComponentName39, uint8_t rchRenderModelComponentName40, uint8_t rchRenderModelComponentName41, uint8_t rchRenderModelComponentName42,
      uint8_t rchRenderModelComponentName43, uint8_t rchRenderModelComponentName44, uint8_t rchRenderModelComponentName45, uint8_t rchRenderModelComponentName46, uint8_t rchRenderModelComponentName47,
      uint8_t rchRenderModelComponentName48, uint8_t rchRenderModelComponentName49, uint8_t rchRenderModelComponentName50, uint8_t rchRenderModelComponentName51, uint8_t rchRenderModelComponentName52,
      uint8_t rchRenderModelComponentName53, uint8_t rchRenderModelComponentName54, uint8_t rchRenderModelComponentName55, uint8_t rchRenderModelComponentName56, uint8_t rchRenderModelComponentName57,
      uint8_t rchRenderModelComponentName58, uint8_t rchRenderModelComponentName59, uint8_t rchRenderModelComponentName60, uint8_t rchRenderModelComponentName61, uint8_t rchRenderModelComponentName62,
      uint8_t rchRenderModelComponentName63, uint8_t rchRenderModelComponentName64, uint8_t rchRenderModelComponentName65, uint8_t rchRenderModelComponentName66, uint8_t rchRenderModelComponentName67,
      uint8_t rchRenderModelComponentName68, uint8_t rchRenderModelComponentName69, uint8_t rchRenderModelComponentName70, uint8_t rchRenderModelComponentName71, uint8_t rchRenderModelComponentName72,
      uint8_t rchRenderModelComponentName73, uint8_t rchRenderModelComponentName74, uint8_t rchRenderModelComponentName75, uint8_t rchRenderModelComponentName76, uint8_t rchRenderModelComponentName77,
      uint8_t rchRenderModelComponentName78, uint8_t rchRenderModelComponentName79, uint8_t rchRenderModelComponentName80, uint8_t rchRenderModelComponentName81, uint8_t rchRenderModelComponentName82,
      uint8_t rchRenderModelComponentName83, uint8_t rchRenderModelComponentName84, uint8_t rchRenderModelComponentName85, uint8_t rchRenderModelComponentName86, uint8_t rchRenderModelComponentName87,
      uint8_t rchRenderModelComponentName88, uint8_t rchRenderModelComponentName89, uint8_t rchRenderModelComponentName90, uint8_t rchRenderModelComponentName91, uint8_t rchRenderModelComponentName92,
      uint8_t rchRenderModelComponentName93, uint8_t rchRenderModelComponentName94, uint8_t rchRenderModelComponentName95, uint8_t rchRenderModelComponentName96, uint8_t rchRenderModelComponentName97,
      uint8_t rchRenderModelComponentName98, uint8_t rchRenderModelComponentName99, uint8_t rchRenderModelComponentName100, uint8_t rchRenderModelComponentName101,
      uint8_t rchRenderModelComponentName102, uint8_t rchRenderModelComponentName103, uint8_t rchRenderModelComponentName104, uint8_t rchRenderModelComponentName105,
      uint8_t rchRenderModelComponentName106, uint8_t rchRenderModelComponentName107, uint8_t rchRenderModelComponentName108, uint8_t rchRenderModelComponentName109,
      uint8_t rchRenderModelComponentName110, uint8_t rchRenderModelComponentName111, uint8_t rchRenderModelComponentName112, uint8_t rchRenderModelComponentName113,
      uint8_t rchRenderModelComponentName114, uint8_t rchRenderModelComponentName115, uint8_t rchRenderModelComponentName116, uint8_t rchRenderModelComponentName117,
      uint8_t rchRenderModelComponentName118, uint8_t rchRenderModelComponentName119, uint8_t rchRenderModelComponentName120, uint8_t rchRenderModelComponentName121,
      uint8_t rchRenderModelComponentName122, uint8_t rchRenderModelComponentName123, uint8_t rchRenderModelComponentName124, uint8_t rchRenderModelComponentName125,
      uint8_t rchRenderModelComponentName126, uint8_t rchRenderModelComponentName127) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9040 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  /// @brief Field devicePath, offset: 0x0, size: 0x8, def value: None
  uint64_t devicePath;

  /// @brief Field trackedDeviceIndex, offset: 0x8, size: 0x4, def value: None
  uint32_t trackedDeviceIndex;

  /// @brief Field rchRenderModelComponentName0, offset: 0xc, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName0;

  /// @brief Field rchRenderModelComponentName1, offset: 0xd, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName1;

  /// @brief Field rchRenderModelComponentName2, offset: 0xe, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName2;

  /// @brief Field rchRenderModelComponentName3, offset: 0xf, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName3;

  /// @brief Field rchRenderModelComponentName4, offset: 0x10, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName4;

  /// @brief Field rchRenderModelComponentName5, offset: 0x11, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName5;

  /// @brief Field rchRenderModelComponentName6, offset: 0x12, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName6;

  /// @brief Field rchRenderModelComponentName7, offset: 0x13, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName7;

  /// @brief Field rchRenderModelComponentName8, offset: 0x14, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName8;

  /// @brief Field rchRenderModelComponentName9, offset: 0x15, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName9;

  /// @brief Field rchRenderModelComponentName10, offset: 0x16, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName10;

  /// @brief Field rchRenderModelComponentName11, offset: 0x17, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName11;

  /// @brief Field rchRenderModelComponentName12, offset: 0x18, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName12;

  /// @brief Field rchRenderModelComponentName13, offset: 0x19, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName13;

  /// @brief Field rchRenderModelComponentName14, offset: 0x1a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName14;

  /// @brief Field rchRenderModelComponentName15, offset: 0x1b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName15;

  /// @brief Field rchRenderModelComponentName16, offset: 0x1c, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName16;

  /// @brief Field rchRenderModelComponentName17, offset: 0x1d, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName17;

  /// @brief Field rchRenderModelComponentName18, offset: 0x1e, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName18;

  /// @brief Field rchRenderModelComponentName19, offset: 0x1f, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName19;

  /// @brief Field rchRenderModelComponentName20, offset: 0x20, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName20;

  /// @brief Field rchRenderModelComponentName21, offset: 0x21, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName21;

  /// @brief Field rchRenderModelComponentName22, offset: 0x22, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName22;

  /// @brief Field rchRenderModelComponentName23, offset: 0x23, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName23;

  /// @brief Field rchRenderModelComponentName24, offset: 0x24, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName24;

  /// @brief Field rchRenderModelComponentName25, offset: 0x25, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName25;

  /// @brief Field rchRenderModelComponentName26, offset: 0x26, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName26;

  /// @brief Field rchRenderModelComponentName27, offset: 0x27, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName27;

  /// @brief Field rchRenderModelComponentName28, offset: 0x28, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName28;

  /// @brief Field rchRenderModelComponentName29, offset: 0x29, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName29;

  /// @brief Field rchRenderModelComponentName30, offset: 0x2a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName30;

  /// @brief Field rchRenderModelComponentName31, offset: 0x2b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName31;

  /// @brief Field rchRenderModelComponentName32, offset: 0x2c, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName32;

  /// @brief Field rchRenderModelComponentName33, offset: 0x2d, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName33;

  /// @brief Field rchRenderModelComponentName34, offset: 0x2e, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName34;

  /// @brief Field rchRenderModelComponentName35, offset: 0x2f, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName35;

  /// @brief Field rchRenderModelComponentName36, offset: 0x30, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName36;

  /// @brief Field rchRenderModelComponentName37, offset: 0x31, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName37;

  /// @brief Field rchRenderModelComponentName38, offset: 0x32, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName38;

  /// @brief Field rchRenderModelComponentName39, offset: 0x33, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName39;

  /// @brief Field rchRenderModelComponentName40, offset: 0x34, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName40;

  /// @brief Field rchRenderModelComponentName41, offset: 0x35, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName41;

  /// @brief Field rchRenderModelComponentName42, offset: 0x36, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName42;

  /// @brief Field rchRenderModelComponentName43, offset: 0x37, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName43;

  /// @brief Field rchRenderModelComponentName44, offset: 0x38, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName44;

  /// @brief Field rchRenderModelComponentName45, offset: 0x39, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName45;

  /// @brief Field rchRenderModelComponentName46, offset: 0x3a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName46;

  /// @brief Field rchRenderModelComponentName47, offset: 0x3b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName47;

  /// @brief Field rchRenderModelComponentName48, offset: 0x3c, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName48;

  /// @brief Field rchRenderModelComponentName49, offset: 0x3d, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName49;

  /// @brief Field rchRenderModelComponentName50, offset: 0x3e, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName50;

  /// @brief Field rchRenderModelComponentName51, offset: 0x3f, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName51;

  /// @brief Field rchRenderModelComponentName52, offset: 0x40, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName52;

  /// @brief Field rchRenderModelComponentName53, offset: 0x41, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName53;

  /// @brief Field rchRenderModelComponentName54, offset: 0x42, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName54;

  /// @brief Field rchRenderModelComponentName55, offset: 0x43, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName55;

  /// @brief Field rchRenderModelComponentName56, offset: 0x44, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName56;

  /// @brief Field rchRenderModelComponentName57, offset: 0x45, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName57;

  /// @brief Field rchRenderModelComponentName58, offset: 0x46, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName58;

  /// @brief Field rchRenderModelComponentName59, offset: 0x47, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName59;

  /// @brief Field rchRenderModelComponentName60, offset: 0x48, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName60;

  /// @brief Field rchRenderModelComponentName61, offset: 0x49, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName61;

  /// @brief Field rchRenderModelComponentName62, offset: 0x4a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName62;

  /// @brief Field rchRenderModelComponentName63, offset: 0x4b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName63;

  /// @brief Field rchRenderModelComponentName64, offset: 0x4c, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName64;

  /// @brief Field rchRenderModelComponentName65, offset: 0x4d, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName65;

  /// @brief Field rchRenderModelComponentName66, offset: 0x4e, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName66;

  /// @brief Field rchRenderModelComponentName67, offset: 0x4f, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName67;

  /// @brief Field rchRenderModelComponentName68, offset: 0x50, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName68;

  /// @brief Field rchRenderModelComponentName69, offset: 0x51, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName69;

  /// @brief Field rchRenderModelComponentName70, offset: 0x52, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName70;

  /// @brief Field rchRenderModelComponentName71, offset: 0x53, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName71;

  /// @brief Field rchRenderModelComponentName72, offset: 0x54, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName72;

  /// @brief Field rchRenderModelComponentName73, offset: 0x55, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName73;

  /// @brief Field rchRenderModelComponentName74, offset: 0x56, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName74;

  /// @brief Field rchRenderModelComponentName75, offset: 0x57, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName75;

  /// @brief Field rchRenderModelComponentName76, offset: 0x58, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName76;

  /// @brief Field rchRenderModelComponentName77, offset: 0x59, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName77;

  /// @brief Field rchRenderModelComponentName78, offset: 0x5a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName78;

  /// @brief Field rchRenderModelComponentName79, offset: 0x5b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName79;

  /// @brief Field rchRenderModelComponentName80, offset: 0x5c, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName80;

  /// @brief Field rchRenderModelComponentName81, offset: 0x5d, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName81;

  /// @brief Field rchRenderModelComponentName82, offset: 0x5e, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName82;

  /// @brief Field rchRenderModelComponentName83, offset: 0x5f, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName83;

  /// @brief Field rchRenderModelComponentName84, offset: 0x60, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName84;

  /// @brief Field rchRenderModelComponentName85, offset: 0x61, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName85;

  /// @brief Field rchRenderModelComponentName86, offset: 0x62, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName86;

  /// @brief Field rchRenderModelComponentName87, offset: 0x63, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName87;

  /// @brief Field rchRenderModelComponentName88, offset: 0x64, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName88;

  /// @brief Field rchRenderModelComponentName89, offset: 0x65, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName89;

  /// @brief Field rchRenderModelComponentName90, offset: 0x66, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName90;

  /// @brief Field rchRenderModelComponentName91, offset: 0x67, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName91;

  /// @brief Field rchRenderModelComponentName92, offset: 0x68, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName92;

  /// @brief Field rchRenderModelComponentName93, offset: 0x69, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName93;

  /// @brief Field rchRenderModelComponentName94, offset: 0x6a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName94;

  /// @brief Field rchRenderModelComponentName95, offset: 0x6b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName95;

  /// @brief Field rchRenderModelComponentName96, offset: 0x6c, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName96;

  /// @brief Field rchRenderModelComponentName97, offset: 0x6d, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName97;

  /// @brief Field rchRenderModelComponentName98, offset: 0x6e, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName98;

  /// @brief Field rchRenderModelComponentName99, offset: 0x6f, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName99;

  /// @brief Field rchRenderModelComponentName100, offset: 0x70, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName100;

  /// @brief Field rchRenderModelComponentName101, offset: 0x71, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName101;

  /// @brief Field rchRenderModelComponentName102, offset: 0x72, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName102;

  /// @brief Field rchRenderModelComponentName103, offset: 0x73, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName103;

  /// @brief Field rchRenderModelComponentName104, offset: 0x74, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName104;

  /// @brief Field rchRenderModelComponentName105, offset: 0x75, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName105;

  /// @brief Field rchRenderModelComponentName106, offset: 0x76, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName106;

  /// @brief Field rchRenderModelComponentName107, offset: 0x77, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName107;

  /// @brief Field rchRenderModelComponentName108, offset: 0x78, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName108;

  /// @brief Field rchRenderModelComponentName109, offset: 0x79, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName109;

  /// @brief Field rchRenderModelComponentName110, offset: 0x7a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName110;

  /// @brief Field rchRenderModelComponentName111, offset: 0x7b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName111;

  /// @brief Field rchRenderModelComponentName112, offset: 0x7c, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName112;

  /// @brief Field rchRenderModelComponentName113, offset: 0x7d, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName113;

  /// @brief Field rchRenderModelComponentName114, offset: 0x7e, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName114;

  /// @brief Field rchRenderModelComponentName115, offset: 0x7f, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName115;

  /// @brief Field rchRenderModelComponentName116, offset: 0x80, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName116;

  /// @brief Field rchRenderModelComponentName117, offset: 0x81, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName117;

  /// @brief Field rchRenderModelComponentName118, offset: 0x82, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName118;

  /// @brief Field rchRenderModelComponentName119, offset: 0x83, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName119;

  /// @brief Field rchRenderModelComponentName120, offset: 0x84, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName120;

  /// @brief Field rchRenderModelComponentName121, offset: 0x85, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName121;

  /// @brief Field rchRenderModelComponentName122, offset: 0x86, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName122;

  /// @brief Field rchRenderModelComponentName123, offset: 0x87, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName123;

  /// @brief Field rchRenderModelComponentName124, offset: 0x88, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName124;

  /// @brief Field rchRenderModelComponentName125, offset: 0x89, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName125;

  /// @brief Field rchRenderModelComponentName126, offset: 0x8a, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName126;

  /// @brief Field rchRenderModelComponentName127, offset: 0x8b, size: 0x1, def value: None
  uint8_t rchRenderModelComponentName127;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, devicePath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, trackedDeviceIndex) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName0) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName1) == 0xd, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName2) == 0xe, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName3) == 0xf, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName4) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName5) == 0x11, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName6) == 0x12, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName7) == 0x13, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName8) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName9) == 0x15, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName10) == 0x16, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName11) == 0x17, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName12) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName13) == 0x19, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName14) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName15) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName16) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName17) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName18) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName19) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName20) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName21) == 0x21, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName22) == 0x22, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName23) == 0x23, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName24) == 0x24, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName25) == 0x25, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName26) == 0x26, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName27) == 0x27, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName28) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName29) == 0x29, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName30) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName31) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName32) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName33) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName34) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName35) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName36) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName37) == 0x31, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName38) == 0x32, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName39) == 0x33, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName40) == 0x34, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName41) == 0x35, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName42) == 0x36, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName43) == 0x37, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName44) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName45) == 0x39, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName46) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName47) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName48) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName49) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName50) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName51) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName52) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName53) == 0x41, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName54) == 0x42, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName55) == 0x43, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName56) == 0x44, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName57) == 0x45, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName58) == 0x46, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName59) == 0x47, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName60) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName61) == 0x49, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName62) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName63) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName64) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName65) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName66) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName67) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName68) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName69) == 0x51, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName70) == 0x52, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName71) == 0x53, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName72) == 0x54, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName73) == 0x55, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName74) == 0x56, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName75) == 0x57, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName76) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName77) == 0x59, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName78) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName79) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName80) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName81) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName82) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName83) == 0x5f, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName84) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName85) == 0x61, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName86) == 0x62, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName87) == 0x63, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName88) == 0x64, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName89) == 0x65, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName90) == 0x66, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName91) == 0x67, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName92) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName93) == 0x69, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName94) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName95) == 0x6b, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName96) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName97) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName98) == 0x6e, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName99) == 0x6f, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName100) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName101) == 0x71, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName102) == 0x72, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName103) == 0x73, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName104) == 0x74, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName105) == 0x75, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName106) == 0x76, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName107) == 0x77, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName108) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName109) == 0x79, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName110) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName111) == 0x7b, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName112) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName113) == 0x7d, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName114) == 0x7e, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName115) == 0x7f, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName116) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName117) == 0x81, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName118) == 0x82, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName119) == 0x83, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName120) == 0x84, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName121) == 0x85, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName122) == 0x86, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName123) == 0x87, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName124) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName125) == 0x89, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName126) == 0x8a, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::InputOriginInfo_t, rchRenderModelComponentName127) == 0x8b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::InputOriginInfo_t, 0x90>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::InputOriginInfo_t, "OVR.OpenVR", "InputOriginInfo_t");
